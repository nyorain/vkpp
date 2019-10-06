// Copyright (c) 2019 nyorain
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

#pragma once

#include <vkpp/enums.hpp>
#include <vkpp/dispatch.hpp>

#include <string>
#include <type_traits>
#include <stdexcept>
#include <vulkan/vulkan.h>

namespace vk {

/// Returns the name of the given vulkan result.
/// Returns "<unknown>" if the error is not recognized.
/// Might handle for extension result codes that are newer than
/// the last vkpp version.
inline const char* name(Result result) {
	switch(result) {
		case Result::success: return "success";
		case Result::notReady: return "notReady";
		case Result::timeout: return "timeout";
		case Result::eventSet: return "eventSet";
		case Result::eventReset: return "eventReset";
		case Result::incomplete: return "incomplete";
		case Result::suboptimalKHR: return "suboptimalKHR";

		case Result::errorOutOfHostMemory: return "errorOutOfHostMemory";
		case Result::errorOutOfDeviceMemory: return "errorOutOfDeviceMemory";
		case Result::errorInitializationFailed: return "errorInitializationFailed";
		case Result::errorDeviceLost: return "errorDeviceLost";
		case Result::errorMemoryMapFailed: return "errorMemoryMapFailed";
		case Result::errorLayerNotPresent: return "errorLayerNotPresent";
		case Result::errorExtensionNotPresent: return "errorExtensionNotPresent";
		case Result::errorFeatureNotPresent: return "errorFeatureNotPresent";
		case Result::errorIncompatibleDriver: return "errorIncompatibleDriver";
		case Result::errorTooManyObjects: return "errorTooManyObjects";
		case Result::errorFormatNotSupported: return "errorFormatNotSupported";
		case Result::errorSurfaceLostKHR: return "errorSurfaceLostKHR";
		case Result::errorNativeWindowInUseKHR: return "errorNativeWindowInUseKHR";
		case Result::errorOutOfDateKHR: return "errorOutOfDateKHR";
		case Result::errorIncompatibleDisplayKHR: return "errorIncompatibleDisplayKHR";
		case Result::errorValidationFailedEXT: return "errorValidationFailedEXT";
		default: return "<unknown>";
	}
}

/// Default exception class that will be thrown when a throw-checked vulkan function fails.
/// This exception will carry the return vulkan result code.
class VulkanError : public std::runtime_error {
public:
	VulkanError(Result err, const std::string& msg = "") :
		std::runtime_error(msg), error(err) {}

	const Result error {};
};

namespace error {

/// Returns whether the result code inidicates success.
inline bool success(vk::Result result) {
	return static_cast<std::int64_t>(result) >= 0;
}

/// Will check if the given result indicated failure and if so throw a VulkanError
/// containing information about the error code.
inline vk::Result checkResultThrow(vk::Result result, const char* function) {
	if(success(result)) {
		return result;
	}

	auto msg = name(result);
	auto str = std::to_string(static_cast<std::int64_t>(result));
	auto err = "Vulkan Error Code " + str + ": " + msg + "\n"
		"\tin function: " + function;
	throw VulkanError(result, err);
}

} // namespace error

namespace call {

/// Allows to call plain vulkan functions with vkpp objects/handles by
/// simply casting them. Useful e.g. for functions retrieved manually
/// via vulkans GetProcAddress (NOTE: casting the function pointer
/// is undefined behaviour).
template<typename FR, typename... FA, typename... Args>
auto call(FR (*f)(FA...), Args&&... args) {
	if constexpr(std::is_same_v<FR, VkResult>) {
		return static_cast<vk::Result>(f(((FA) args)...));
	} else {
		return f(((FA) args)...);
	}
}

} // namespace call

// Global default dispatcher. Used by default for non-core functions
// or when VKPP_DYNAMIC_DISPATCH is defined.
// After creating an instance you have to call `vk::dispatch.init(instance)`.
// Note that (implicit) dynamic dispatch does not work with multiple instances.
//
// If you use VKPP_DYNAMIC_DISPATCH or non-core functions you have
// to define `namespace vk { DynamicDispatch dispatch; }` somewhere in
// you code, otherwise you get undefined reference errors. Alternatively,
// you can link to libvkpp which only contains that single symbol.
extern DynamicDispatch dispatch;

// Dispatches (calls) function x via the given dispatcher (if not null),
// otherwise falls back to the globak vk::dispatch.
// - d: the dispatcher object (stores function pointers to all functions;
//   type: const vk::DynamicDispatch*) to use. It must have the function f
//   loaded. If d is null, will use the global vk::dispatch as fallback
// - f: the name of the function to call
#define VKPP_DISPATCH_GLOBAL(d, f, ...) ((d ? d : &::vk::dispatch)->f(__VA_ARGS__))

#ifdef VKPP_DYNAMIC_DISPATCH
	// If VKPP_DYNAMIC_DISPATCH is defined, functions (name passed via argument 'f')
	// will never be called directly.  Instead, dispatching will fall
	// back to the global vk::dispatch object.
	#define VKPP_DISPATCH(d, f, ...) (VKPP_DISPATCH_GLOBAL(d, f, __VA_ARGS__))
#else
	// Otherwise, VKPP_DISPATCH will use the given dispatcher objet d
	// if given. If not given, it will simply call the function directly,
	// i.e. requiring the application to link against libvulkan and
	// hoping that the given symbol can be found (can't be expected
	// for non-core functions!)
	#define VKPP_DISPATCH(d, f, ...) ((d ? d->f : f)(__VA_ARGS__))
#endif

} // namespace vk

// VKPP_CALL_THROW defines whether functions throw errors when the
// underlying vulkan call returns an error.
// NOTE/TODO: vkpp is currently somewhat broken when this is defined
// as 0 since some functions don't return the result and therefore
// offer no way to check it...
#ifndef VKPP_CALL_THROW
	#ifdef NDEBUG
		#define VKPP_CALL_THROW 0
	#else
		#define VKPP_CALL_THROW 1
	#endif
#endif

// Macro that can be wrapped around plain valkan api calls to throw if they return
// a failure result. When VKPP_CALL_THROW is not defined (which is by default the case
// for non debug builds) no check will be performed at all.
#ifndef VKPP_CHECK
	#if VKPP_CALL_THROW
		#define VKPP_CHECK(x) ::vk::error::checkResultThrow(\
			static_cast<vk::Result>(x), __func__)
	#else
		#define VKPP_CHECK(x) static_cast<vk::Result>(x)
	#endif
#endif

// Calls a given vulkan function with optional support for dynamic dispatching
// an error checking (i.e. throwing exceptions), depending on configuration
// macros.
// Arguments:
// - f: The vulkan function to be called. Must match exactly with the
//   name of a vulkan functions, e.g. vkCreateGraphicsPipelines.
// - d: Must have type (const) vk::DynamicDispatch*. If d is not NULL,
//   will use the function pointer stored in it to call the function.
//   The dispatcher object *must* have the function to be called loaded.
//   If d is NULL, will:
// 	 - defined(VKPP_DYNAMIC_DISPATCH) => fall back to the global
// 	   vk::dispatch object.
// 	 - otherwise will simply call the function f directly, i.e. requiring
// 	   the application to link against libvulkan and libvulkan to expose
// 	   the symbol for function 'f'
// Configuration:
// - when VKPP_CALL_THROW is 1, will throw an exception if the underlaying
//   vulkan function returns an error
// Valid example usages:
// - VKPP_CALL(nullptr, vkCreateGraphicsPipelines, args...)
// - VKPP_CALL(vk::dispatch, vkCreateSemaphore, args...)
// - VKPP_CALL(&myDispatcher, vkDestroyPipeline, args...)
#ifndef VKPP_CALL
	#define VKPP_CALL(d, f, ...) VKPP_CHECK(VKPP_DISPATCH(d, f, __VA_ARGS__))
#endif
