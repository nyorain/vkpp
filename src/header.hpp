// Header applied to all generated files
auto constexpr header = &R"SRC(
// Copyright (c) 2020 nyorain
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

// Automaitcally generated vulkan header, see nyorain/vkpp
// Do not edit manually, rather edit the codegen files.

#pragma once
)SRC"[1];

// fwd.hpp header
auto constexpr fwdHeader = R"SRC(
#include <vkpp/handle.hpp> // VK_DEFINE_HANDLE
#include <vkpp/flags.hpp>
#include <cstddef>

#include <vulkan/vk_platform.h>

// Generated for vulkan version: 1.1.%vp

// Utility forward declarations
namespace nytl {

#ifndef NYTL_INCLUDE_FWD_SPAN
#define NYTL_INCLUDE_FWD_SPAN
	constexpr const std::size_t dynamic_extent = -1;
	template<typename T, std::size_t N = dynamic_extent> class span;
	template<typename T, std::size_t N = dynamic_extent>
	using Span = span<T, N>;
#endif // fwd guard

} // namespace nytl

)SRC";

// structs.hpp header
auto constexpr structsHeader = R"SRC(
#include <vkpp/fwd.hpp>
#include <vkpp/enums.hpp>
#include <vkpp/flags.hpp>

#include <array>
#include <vulkan/vulkan.h>

// Generated for vulkan version: 1.1.%vp
#if !defined(VK_VERSION_1_1) || %vp > VK_HEADER_VERSION
	#error "vulkan.h version too old, does not match generated version"
#endif

)SRC";

// enums.hpp header
auto constexpr enumsHeader = R"SRC(
#include <vkpp/fwd.hpp>
#include <vkpp/flags.hpp>

// Generated for vulkan version: 1.1.%vp

)SRC";

// names.hpp header
auto constexpr namesHeader = R"SRC(
#include <vkpp/fwd.hpp>
#include <vkpp/enums.hpp>
#include <string>

// Generated for vulkan version: 1.1.%vp

)SRC";

// rawFunctions.hpp header
auto constexpr rawFunctionsHeader = R"SRC(
#include <vkpp/fwd.hpp>
#include <vkpp/enums.hpp>
#include <vkpp/structs.hpp>
#include <vkpp/span.hpp>
#include <vkpp/flags.hpp>
#include <vkpp/call.hpp>

#include <vulkan/vulkan.h>

// Generated for vulkan version: 1.1.%vp
#if !defined(VK_VERSION_1_1) || %vp > VK_HEADER_VERSION
	#error "vulkan.h version too old, does not match generated version"
#endif

)SRC";

// functions.hpp header
auto constexpr functionsHeader = R"SRC(
#include <vkpp/fwd.hpp>
#include <vkpp/enums.hpp>
#include <vkpp/structs.hpp>
#include <vkpp/call.hpp>
#include <vkpp/span.hpp>
#include <vkpp/flags.hpp>

#include <vector>
#include <vulkan/vulkan.h>

// Generated for vulkan version: 1.1.%vp
#if !defined(VK_VERSION_1_1) || %vp > VK_HEADER_VERSION
	#error "vulkan.h version too old, does not match generated version"
#endif

// normal dispatch versions
#define VEC_FUNC(D, T, CT, F, ...) \
	std::vector<T> ret; \
	CT count = 0u; \
	auto res = VKPP_CHECK(VKPP_DISPATCH(D, F, __VA_ARGS__)); \
	if(!error::success(res)) return ret; \
	ret.resize(count); \
	VKPP_CALL(D, F, __VA_ARGS__); \
	return ret;

#define VEC_FUNC_VOID(D, T, CT, F, ...) \
	std::vector<T> ret; \
	CT count = 0u; \
	VKPP_DISPATCH(D, F, __VA_ARGS__); \
	ret.resize(count); \
	VKPP_DISPATCH(D, F, __VA_ARGS__); \
	return ret;

#define VEC_FUNC_RET(D, T, C, F, ...) \
	std::vector<T> ret; \
	ret.resize(C); \
	VKPP_CALL(D, F, __VA_ARGS__); \
	return ret;

#define VEC_FUNC_RET_VOID(D, T, C, F, ...) \
	std::vector<T> ret; \
	ret.resize(C); \
	VKPP_DISPATCH(D, F, __VA_ARGS__); \
	return ret;

// global dispatch versions
#define VEC_FUNC_G(D, T, CT, F, ...) \
	std::vector<T> ret; \
	CT count = 0u; \
	auto res = VKPP_CHECK(VKPP_DISPATCH_GLOBAL(D, F, __VA_ARGS__)); \
	if(!error::success(res)) return ret; \
	ret.resize(count); \
	VKPP_CHECK(VKPP_DISPATCH_GLOBAL(D, F, __VA_ARGS__)); \
	return ret;

#define VEC_FUNC_VOID_G(D, T, CT, F, ...) \
	std::vector<T> ret; \
	CT count = 0u; \
	VKPP_DISPATCH_GLOBAL(D, F, __VA_ARGS__); \
	ret.resize(count); \
	VKPP_DISPATCH_GLOBAL(D, F, __VA_ARGS__); \
	return ret;

#define VEC_FUNC_RET_G(D, T, C, F, ...) \
	std::vector<T> ret; \
	ret.resize(C); \
	VKPP_CHECK(VKPP_DISPATCH_GLOBAL(D, F, __VA_ARGS__)); \
	return ret;

#define VEC_FUNC_RET_VOID_G(D, T, C, F, ...) \
	std::vector<T> ret; \
	ret.resize(C); \
	VKPP_DISPATCH_GLOBAL(D, F, __VA_ARGS__); \
	return ret;

)SRC";

// dispatch.hpp template
auto constexpr dispatchHeader = R"SRC(
#include <vkpp/fwd.hpp>
#include <vkpp/enums.hpp>
#include <vkpp/structs.hpp>
#include <vkpp/flags.hpp>

// Generated for vulkan version: 1.1.%vp

namespace vk {

class DynamicDispatch {
public:
	// Initializes the functions that can be called without instance.
	// If you link to libvulkan, just pass vkGetInstanceProcAddr as the
	// loader function.
	// - vkEnumerateInstanceVersion
	// - vkEnumerateInstanceExtensionProperties
	// - vkEnumerateInstanceLayerProperties
	// - vkCreateInstance
	// - vkGetInstanceProcAddr
	void initLoader(PFN_vkGetInstanceProcAddr);

	// Loads functions for a given instance.
	// When no explicit loader is given, uses vkGetInstanceProcAddr loaded
	// when initLoade was called.
	// - all: When this is true, loads all functions, otherwise only
	//   non-device funcs. You could then use init(Device) to load
	//   the device-speicifc functions.
	void init(Instance, PFN_vkGetInstanceProcAddr, bool all = true);
	void init(Instance, bool all = true);

	// Loads all device-specific functions.
	// If no explicit loader is given, init(Instance) must have been called,
	// will use the vkGetDeviceProcAddr loaded there.
	void init(Device ini, PFN_vkGetDeviceProcAddr);
	void init(Device);

public:
%decl

%guardedDecl
};

} // namespace vk
)SRC";

// dispatch.cpp template
auto constexpr dispatchSrc = R"SRC(
#include <vkpp/dispatch.hpp>

namespace vk {

DynamicDispatch dispatch;

void DynamicDispatch::initLoader(PFN_vkGetInstanceProcAddr loader) {
#define VKPP_LOAD(fn) this->fn = (PFN_##fn) loader(VK_NULL_HANDLE, #fn)

	VKPP_LOAD(vkEnumerateInstanceVersion);
	VKPP_LOAD(vkEnumerateInstanceExtensionProperties);
	VKPP_LOAD(vkEnumerateInstanceLayerProperties);
	VKPP_LOAD(vkCreateInstance);
	VKPP_LOAD(vkGetInstanceProcAddr);

#undef VKPP_LOAD
}

void DynamicDispatch::init(Instance ini, bool all) {
	init(ini, this->vkGetInstanceProcAddr, all);
}

void DynamicDispatch::init(Device dev) {
	init(dev, this->vkGetDeviceProcAddr);
}

void DynamicDispatch::init(Instance ini, PFN_vkGetInstanceProcAddr loader, bool all) {
	#define VKPP_LOAD(fn) this->fn = (PFN_##fn) loader((VkInstance) ini, #fn)

%loadIni

	if(all) {
%loadDev
	}

	#undef VKPP_LOAD
}

void DynamicDispatch::init(Device dev, PFN_vkGetDeviceProcAddr loader) {
	#define VKPP_LOAD(fn) this->fn = (PFN_##fn) loader((VkDevice) dev, #fn)

	{
%loadDev
	}

	#undef VKPP_LOAD
}

} // namespace vk
)SRC";


// NOTE: instead of the macros we could also just use the functions
// directly.

// auto constexpr vecFuncTemplate = 1 + R"SRC(
// 	std::vector<%t> ret;
// 	%ct count = 0u;
// 	if(!error::success(VKPP_CALL(%f(%a)))) return ret;
// 	ret.resize(count);
// 	VKPP_CALL(%f(%a));
// 	return ret;
// )SRC";

auto constexpr vecFuncTemplate = &R"SRC(
VEC_FUNC(dispatcher, %t, %ct, %f, %a); )SRC"[1];

// auto constexpr vecFuncTemplateVoid = 1 + R"SRC(
// 	std::vector<%t> ret;
// 	%ct count = 0u;
// 	%f(%a);
// 	ret.resize(count);
// 	%f(%a);
// 	return ret;
// )SRC";

auto constexpr vecFuncTemplateVoid = &R"SRC(
VEC_FUNC_VOID(dispatcher, %t, %ct, %f, %a); )SRC"[1];

// auto constexpr vecFuncTemplateRetGiven = 1 + R"SRC(
// 	std::vector<%t> ret;
// 	ret.resize(%c);
// 	VKPP_CALL(%f(%a));
// 	return ret;
// )SRC";

auto constexpr vecFuncTemplateRetGiven = &R"SRC(
VEC_FUNC_RET(dispatcher, %t, %c, %f, %a); )SRC"[1];

// auto constexpr vecFuncTemplateRetGivenVoid = 1 + R"SRC(
// 	std::vector<%t> ret;
// 	ret.resize(%c);
// 	%f(%a);
// 	return ret;
// )SRC";

auto constexpr vecFuncTemplateRetGivenVoid = &R"SRC(
VEC_FUNC_RET_VOID(dispatcher, %t, %c, %f, %a); )SRC"[1];

// global
auto constexpr vecFuncTemplateDispatch = &R"SRC(
VEC_FUNC_G(dispatcher, %t, %ct, %f, %a); )SRC"[1];
auto constexpr vecFuncTemplateVoidDispatch = &R"SRC(
VEC_FUNC_VOID_G(dispatcher, %t, %ct, %f, %a); )SRC"[1];
auto constexpr vecFuncTemplateRetGivenDispatch = &R"SRC(
VEC_FUNC_RET_G(dispatcher, %t, %c, %f, %a); )SRC"[1];
auto constexpr vecFuncTemplateRetGivenVoidDispatch = &R"SRC(
VEC_FUNC_RET_VOID_G(dispatcher, %t, %c, %f, %a); )SRC"[1];

constexpr const char* keywords[]= {"alignas", "alignof", "and", "and_eq", "asm", "auto", "bitand",
	"bitor", "bool", "break", "case", "catch", "char", "char16_t", "char32_t", "class", "compl",
	"const", "constexpr", "const_cast", "continue", "decltype", "default", "delete", "do",
	"double", "dynamic_cast", "else", "enum", "explicit", "export", "extern", "false", "float",
	"for","friend", "goto", "if", "inline", "int", "long", "mutable", "namespace", "new",
	"noexcept", "not", "not_eq", "nullptr", "operator", "or", "or_eq", "private",
	"protected", "public", "register", "reinterpret_cast","return","short","signed","sizeof",
	"static","static_assert","static_cast","struct", "switch", "template", "this","thread_local",
	"throw","true","try","typedef","typeid","typename","union","unsigned", "using","virtual",
	"void", "volatile","wchar_t","while","xor","xor_eq"};
