auto constexpr header = 1 + R"SRC(
// Copyright (c) 2017 nyorain
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

// Automaitcally generated vulkan header, see nyorain/vkpp
// Do not edit manually, rather edit the codegen files.

#pragma once
)SRC";

auto constexpr fwdHeader = 1 + R"SRC(
#include <vkpp/handle.hpp> // VK_DEFINE_HANDLE
#include <vkpp/flags.hpp>
#include <cstddef>

#include <vulkan/vk_platform.h>

// Generated for vulkan version: 1.1.%vp

// Utility forward declarations
namespace nytl {

#ifndef NYTL_INCLUDE_FWD_SPAN
#define NYTL_INCLUDE_FWD_SPAN
	template<typename T, std::size_t N = 0>
	class Span;
#endif // header guard

} // namespace nytl

)SRC";


auto constexpr structsHeader = 1 + R"SRC(
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

auto constexpr enumsHeader = 1 + R"SRC(
#include <vkpp/fwd.hpp>
#include <vkpp/flags.hpp>

// Generated for vulkan version: 1.1.%vp

)SRC";

auto constexpr functionsHeader = 1 + R"SRC(
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

#define VEC_FUNC(T, CT, F, ...) \
	std::vector<T> ret; \
	CT count = 0u; \
	if(!error::success(VKPP_CALL(F(__VA_ARGS__)))) return ret; \
	ret.resize(count); \
	VKPP_CALL(F(__VA_ARGS__)); \
	return ret;

#define VEC_FUNC_VOID(T, CT, F, ...) \
	std::vector<T> ret; \
	CT count = 0u; \
	VKPP_DISPATCH(F(__VA_ARGS__)); \
	ret.resize(count); \
	F(__VA_ARGS__); \
	return ret;

#define VEC_FUNC_RET(T, C, F, ...) \
	std::vector<T> ret; \
	ret.resize(C); \
	VKPP_CALL(F(__VA_ARGS__)); \
	return ret;

#define VEC_FUNC_RET_VOID(T, C, F, ...) \
	std::vector<T> ret; \
	ret.resize(C); \
	VKPP_DISPATCH(F(__VA_ARGS__)); \
	return ret;

)SRC";

// TODO: allow to per-device DynamicDispatch objects
// #define VKPP_DLOAD(dev, fn) this->fn = getDeviceProcAddr(dev, fn);
// #undef VKPP_DLOAD
// TODO: we could also load the instance proc using dlsym like functionality

auto constexpr dispatchHeader = 1 + R"SRC(

#include <vkpp/fwd.hpp>
#include <vkpp/enums.hpp>
#include <vkpp/structs.hpp>
#include <vkpp/call.hpp>
#include <vkpp/span.hpp>
#include <vkpp/flags.hpp>

// Generated for vulkan version: 1.1.%vp

namespace vk {

class DynamicDispatch {
public:
%decl

public:
	#define VKPP_ILOAD(ini, fn) this->fn = (PFN_##fn) \
		::vkGetInstanceProcAddr((VkInstance) ini, #fn);

	DynamicDispatch() {
		VKPP_ILOAD(NULL, vkEnumerateInstanceVersion);
		VKPP_ILOAD(NULL, vkEnumerateInstanceExtensionProperties);
		VKPP_ILOAD(NULL, vkEnumerateInstanceLayerProperties);
		VKPP_ILOAD(NULL, vkCreateInstance);
	}

	DynamicDispatch(Instance ini) {
		init(ini);
	}

	void init(Instance ini) {
%load
	}

	#undef VKPP_ILOAD
};

} // namespace vk

)SRC";


// auto constexpr vecFuncTemplate = 1 + R"SRC(
// 	std::vector<%t> ret;
// 	%ct count = 0u;
// 	if(!error::success(VKPP_CALL(%f(%a)))) return ret;
// 	ret.resize(count);
// 	VKPP_CALL(%f(%a));
// 	return ret;
// )SRC";

auto constexpr vecFuncTemplate = 1 + R"SRC(
VEC_FUNC(%t, %ct, %f, %a); )SRC";

// auto constexpr vecFuncTemplateVoid = 1 + R"SRC(
// 	std::vector<%t> ret;
// 	%ct count = 0u;
// 	%f(%a);
// 	ret.resize(count);
// 	%f(%a);
// 	return ret;
// )SRC";

auto constexpr vecFuncTemplateVoid = 1 + R"SRC(
VEC_FUNC_VOID(%t, %ct, %f, %a); )SRC";

// auto constexpr vecFuncTemplateRetGiven = 1 + R"SRC(
// 	std::vector<%t> ret;
// 	ret.resize(%c);
// 	VKPP_CALL(%f(%a));
// 	return ret;
// )SRC";

auto constexpr vecFuncTemplateRetGiven = 1 + R"SRC(
VEC_FUNC_RET(%t, %c, %f, %a); )SRC";

// auto constexpr vecFuncTemplateRetGivenVoid = 1 + R"SRC(
// 	std::vector<%t> ret;
// 	ret.resize(%c);
// 	%f(%a);
// 	return ret;
// )SRC";

auto constexpr vecFuncTemplateRetGivenVoid = 1 + R"SRC(
VEC_FUNC_RET_VOID(%t, %c, %f, %a); )SRC";

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
