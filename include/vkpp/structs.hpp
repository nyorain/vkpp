// Copyright (c) 2020 nyorain
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

// Automaitcally generated vulkan header, see nyorain/vkpp
// Do not edit manually, rather edit the codegen files.

#pragma once

#include <vkpp/fwd.hpp>
#include <vkpp/enums.hpp>
#include <vkpp/flags.hpp>

#include <array>
#include <vulkan/vulkan.h>

// Generated for vulkan version: 1.1.168
#if !defined(VK_VERSION_1_1) || 168 > VK_HEADER_VERSION
	#error "vulkan.h version too old, does not match generated version"
#endif

namespace vk {

struct PhysicalDeviceVulkan11Features {
	StructureType sType {StructureType::physicalDeviceVulkan11Features};
	void* pNext {};
	Bool32 storageBuffer16BitAccess {};
	Bool32 uniformAndStorageBuffer16BitAccess {};
	Bool32 storagePushConstant16 {};
	Bool32 storageInputOutput16 {};
	Bool32 multiview {};
	Bool32 multiviewGeometryShader {};
	Bool32 multiviewTessellationShader {};
	Bool32 variablePointersStorageBuffer {};
	Bool32 variablePointers {};
	Bool32 protectedMemory {};
	Bool32 samplerYcbcrConversion {};
	Bool32 shaderDrawParameters {};

	constexpr PhysicalDeviceVulkan11Features(Bool32 xstorageBuffer16BitAccess = {}, Bool32 xuniformAndStorageBuffer16BitAccess = {}, Bool32 xstoragePushConstant16 = {}, Bool32 xstorageInputOutput16 = {}, Bool32 xmultiview = {}, Bool32 xmultiviewGeometryShader = {}, Bool32 xmultiviewTessellationShader = {}, Bool32 xvariablePointersStorageBuffer = {}, Bool32 xvariablePointers = {}, Bool32 xprotectedMemory = {}, Bool32 xsamplerYcbcrConversion = {}, Bool32 xshaderDrawParameters = {}) : storageBuffer16BitAccess(xstorageBuffer16BitAccess), uniformAndStorageBuffer16BitAccess(xuniformAndStorageBuffer16BitAccess), storagePushConstant16(xstoragePushConstant16), storageInputOutput16(xstorageInputOutput16), multiview(xmultiview), multiviewGeometryShader(xmultiviewGeometryShader), multiviewTessellationShader(xmultiviewTessellationShader), variablePointersStorageBuffer(xvariablePointersStorageBuffer), variablePointers(xvariablePointers), protectedMemory(xprotectedMemory), samplerYcbcrConversion(xsamplerYcbcrConversion), shaderDrawParameters(xshaderDrawParameters) {}

	const VkPhysicalDeviceVulkan11Features& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceVulkan11Features&>(*this); }
	VkPhysicalDeviceVulkan11Features& vkHandle() { return reinterpret_cast<VkPhysicalDeviceVulkan11Features&>(*this); }

	operator const VkPhysicalDeviceVulkan11Features&() const { return vkHandle(); };
	operator VkPhysicalDeviceVulkan11Features&() { return vkHandle(); };
};

struct PhysicalDeviceVulkan11Properties {
	StructureType sType {StructureType::physicalDeviceVulkan11Properties};
	void* pNext {};
	std::array<uint8_t, uuidSize> deviceUUID {};
	std::array<uint8_t, uuidSize> driverUUID {};
	std::array<uint8_t, luidSize> deviceLUID {};
	uint32_t deviceNodeMask {};
	Bool32 deviceLUIDValid {};
	uint32_t subgroupSize {};
	ShaderStageFlags subgroupSupportedStages {};
	SubgroupFeatureFlags subgroupSupportedOperations {};
	Bool32 subgroupQuadOperationsInAllStages {};
	PointClippingBehavior pointClippingBehavior {};
	uint32_t maxMultiviewViewCount {};
	uint32_t maxMultiviewInstanceIndex {};
	Bool32 protectedNoFault {};
	uint32_t maxPerSetDescriptors {};
	DeviceSize maxMemoryAllocationSize {};

	const VkPhysicalDeviceVulkan11Properties& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceVulkan11Properties&>(*this); }
	VkPhysicalDeviceVulkan11Properties& vkHandle() { return reinterpret_cast<VkPhysicalDeviceVulkan11Properties&>(*this); }

	operator const VkPhysicalDeviceVulkan11Properties&() const { return vkHandle(); };
	operator VkPhysicalDeviceVulkan11Properties&() { return vkHandle(); };
};

struct PhysicalDeviceVulkan12Features {
	StructureType sType {StructureType::physicalDeviceVulkan12Features};
	void* pNext {};
	Bool32 samplerMirrorClampToEdge {};
	Bool32 drawIndirectCount {};
	Bool32 storageBuffer8BitAccess {};
	Bool32 uniformAndStorageBuffer8BitAccess {};
	Bool32 storagePushConstant8 {};
	Bool32 shaderBufferInt64Atomics {};
	Bool32 shaderSharedInt64Atomics {};
	Bool32 shaderFloat16 {};
	Bool32 shaderInt8 {};
	Bool32 descriptorIndexing {};
	Bool32 shaderInputAttachmentArrayDynamicIndexing {};
	Bool32 shaderUniformTexelBufferArrayDynamicIndexing {};
	Bool32 shaderStorageTexelBufferArrayDynamicIndexing {};
	Bool32 shaderUniformBufferArrayNonUniformIndexing {};
	Bool32 shaderSampledImageArrayNonUniformIndexing {};
	Bool32 shaderStorageBufferArrayNonUniformIndexing {};
	Bool32 shaderStorageImageArrayNonUniformIndexing {};
	Bool32 shaderInputAttachmentArrayNonUniformIndexing {};
	Bool32 shaderUniformTexelBufferArrayNonUniformIndexing {};
	Bool32 shaderStorageTexelBufferArrayNonUniformIndexing {};
	Bool32 descriptorBindingUniformBufferUpdateAfterBind {};
	Bool32 descriptorBindingSampledImageUpdateAfterBind {};
	Bool32 descriptorBindingStorageImageUpdateAfterBind {};
	Bool32 descriptorBindingStorageBufferUpdateAfterBind {};
	Bool32 descriptorBindingUniformTexelBufferUpdateAfterBind {};
	Bool32 descriptorBindingStorageTexelBufferUpdateAfterBind {};
	Bool32 descriptorBindingUpdateUnusedWhilePending {};
	Bool32 descriptorBindingPartiallyBound {};
	Bool32 descriptorBindingVariableDescriptorCount {};
	Bool32 runtimeDescriptorArray {};
	Bool32 samplerFilterMinmax {};
	Bool32 scalarBlockLayout {};
	Bool32 imagelessFramebuffer {};
	Bool32 uniformBufferStandardLayout {};
	Bool32 shaderSubgroupExtendedTypes {};
	Bool32 separateDepthStencilLayouts {};
	Bool32 hostQueryReset {};
	Bool32 timelineSemaphore {};
	Bool32 bufferDeviceAddress {};
	Bool32 bufferDeviceAddressCaptureReplay {};
	Bool32 bufferDeviceAddressMultiDevice {};
	Bool32 vulkanMemoryModel {};
	Bool32 vulkanMemoryModelDeviceScope {};
	Bool32 vulkanMemoryModelAvailabilityVisibilityChains {};
	Bool32 shaderOutputViewportIndex {};
	Bool32 shaderOutputLayer {};
	Bool32 subgroupBroadcastDynamicId {};

	constexpr PhysicalDeviceVulkan12Features(Bool32 xsamplerMirrorClampToEdge = {}, Bool32 xdrawIndirectCount = {}, Bool32 xstorageBuffer8BitAccess = {}, Bool32 xuniformAndStorageBuffer8BitAccess = {}, Bool32 xstoragePushConstant8 = {}, Bool32 xshaderBufferInt64Atomics = {}, Bool32 xshaderSharedInt64Atomics = {}, Bool32 xshaderFloat16 = {}, Bool32 xshaderInt8 = {}, Bool32 xdescriptorIndexing = {}, Bool32 xshaderInputAttachmentArrayDynamicIndexing = {}, Bool32 xshaderUniformTexelBufferArrayDynamicIndexing = {}, Bool32 xshaderStorageTexelBufferArrayDynamicIndexing = {}, Bool32 xshaderUniformBufferArrayNonUniformIndexing = {}, Bool32 xshaderSampledImageArrayNonUniformIndexing = {}, Bool32 xshaderStorageBufferArrayNonUniformIndexing = {}, Bool32 xshaderStorageImageArrayNonUniformIndexing = {}, Bool32 xshaderInputAttachmentArrayNonUniformIndexing = {}, Bool32 xshaderUniformTexelBufferArrayNonUniformIndexing = {}, Bool32 xshaderStorageTexelBufferArrayNonUniformIndexing = {}, Bool32 xdescriptorBindingUniformBufferUpdateAfterBind = {}, Bool32 xdescriptorBindingSampledImageUpdateAfterBind = {}, Bool32 xdescriptorBindingStorageImageUpdateAfterBind = {}, Bool32 xdescriptorBindingStorageBufferUpdateAfterBind = {}, Bool32 xdescriptorBindingUniformTexelBufferUpdateAfterBind = {}, Bool32 xdescriptorBindingStorageTexelBufferUpdateAfterBind = {}, Bool32 xdescriptorBindingUpdateUnusedWhilePending = {}, Bool32 xdescriptorBindingPartiallyBound = {}, Bool32 xdescriptorBindingVariableDescriptorCount = {}, Bool32 xruntimeDescriptorArray = {}, Bool32 xsamplerFilterMinmax = {}, Bool32 xscalarBlockLayout = {}, Bool32 ximagelessFramebuffer = {}, Bool32 xuniformBufferStandardLayout = {}, Bool32 xshaderSubgroupExtendedTypes = {}, Bool32 xseparateDepthStencilLayouts = {}, Bool32 xhostQueryReset = {}, Bool32 xtimelineSemaphore = {}, Bool32 xbufferDeviceAddress = {}, Bool32 xbufferDeviceAddressCaptureReplay = {}, Bool32 xbufferDeviceAddressMultiDevice = {}, Bool32 xvulkanMemoryModel = {}, Bool32 xvulkanMemoryModelDeviceScope = {}, Bool32 xvulkanMemoryModelAvailabilityVisibilityChains = {}, Bool32 xshaderOutputViewportIndex = {}, Bool32 xshaderOutputLayer = {}, Bool32 xsubgroupBroadcastDynamicId = {}) : samplerMirrorClampToEdge(xsamplerMirrorClampToEdge), drawIndirectCount(xdrawIndirectCount), storageBuffer8BitAccess(xstorageBuffer8BitAccess), uniformAndStorageBuffer8BitAccess(xuniformAndStorageBuffer8BitAccess), storagePushConstant8(xstoragePushConstant8), shaderBufferInt64Atomics(xshaderBufferInt64Atomics), shaderSharedInt64Atomics(xshaderSharedInt64Atomics), shaderFloat16(xshaderFloat16), shaderInt8(xshaderInt8), descriptorIndexing(xdescriptorIndexing), shaderInputAttachmentArrayDynamicIndexing(xshaderInputAttachmentArrayDynamicIndexing), shaderUniformTexelBufferArrayDynamicIndexing(xshaderUniformTexelBufferArrayDynamicIndexing), shaderStorageTexelBufferArrayDynamicIndexing(xshaderStorageTexelBufferArrayDynamicIndexing), shaderUniformBufferArrayNonUniformIndexing(xshaderUniformBufferArrayNonUniformIndexing), shaderSampledImageArrayNonUniformIndexing(xshaderSampledImageArrayNonUniformIndexing), shaderStorageBufferArrayNonUniformIndexing(xshaderStorageBufferArrayNonUniformIndexing), shaderStorageImageArrayNonUniformIndexing(xshaderStorageImageArrayNonUniformIndexing), shaderInputAttachmentArrayNonUniformIndexing(xshaderInputAttachmentArrayNonUniformIndexing), shaderUniformTexelBufferArrayNonUniformIndexing(xshaderUniformTexelBufferArrayNonUniformIndexing), shaderStorageTexelBufferArrayNonUniformIndexing(xshaderStorageTexelBufferArrayNonUniformIndexing), descriptorBindingUniformBufferUpdateAfterBind(xdescriptorBindingUniformBufferUpdateAfterBind), descriptorBindingSampledImageUpdateAfterBind(xdescriptorBindingSampledImageUpdateAfterBind), descriptorBindingStorageImageUpdateAfterBind(xdescriptorBindingStorageImageUpdateAfterBind), descriptorBindingStorageBufferUpdateAfterBind(xdescriptorBindingStorageBufferUpdateAfterBind), descriptorBindingUniformTexelBufferUpdateAfterBind(xdescriptorBindingUniformTexelBufferUpdateAfterBind), descriptorBindingStorageTexelBufferUpdateAfterBind(xdescriptorBindingStorageTexelBufferUpdateAfterBind), descriptorBindingUpdateUnusedWhilePending(xdescriptorBindingUpdateUnusedWhilePending), descriptorBindingPartiallyBound(xdescriptorBindingPartiallyBound), descriptorBindingVariableDescriptorCount(xdescriptorBindingVariableDescriptorCount), runtimeDescriptorArray(xruntimeDescriptorArray), samplerFilterMinmax(xsamplerFilterMinmax), scalarBlockLayout(xscalarBlockLayout), imagelessFramebuffer(ximagelessFramebuffer), uniformBufferStandardLayout(xuniformBufferStandardLayout), shaderSubgroupExtendedTypes(xshaderSubgroupExtendedTypes), separateDepthStencilLayouts(xseparateDepthStencilLayouts), hostQueryReset(xhostQueryReset), timelineSemaphore(xtimelineSemaphore), bufferDeviceAddress(xbufferDeviceAddress), bufferDeviceAddressCaptureReplay(xbufferDeviceAddressCaptureReplay), bufferDeviceAddressMultiDevice(xbufferDeviceAddressMultiDevice), vulkanMemoryModel(xvulkanMemoryModel), vulkanMemoryModelDeviceScope(xvulkanMemoryModelDeviceScope), vulkanMemoryModelAvailabilityVisibilityChains(xvulkanMemoryModelAvailabilityVisibilityChains), shaderOutputViewportIndex(xshaderOutputViewportIndex), shaderOutputLayer(xshaderOutputLayer), subgroupBroadcastDynamicId(xsubgroupBroadcastDynamicId) {}

	const VkPhysicalDeviceVulkan12Features& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceVulkan12Features&>(*this); }
	VkPhysicalDeviceVulkan12Features& vkHandle() { return reinterpret_cast<VkPhysicalDeviceVulkan12Features&>(*this); }

	operator const VkPhysicalDeviceVulkan12Features&() const { return vkHandle(); };
	operator VkPhysicalDeviceVulkan12Features&() { return vkHandle(); };
};

struct ConformanceVersion {
	uint8_t major {};
	uint8_t minor {};
	uint8_t subminor {};
	uint8_t patch {};

	const VkConformanceVersion& vkHandle() const { return reinterpret_cast<const VkConformanceVersion&>(*this); }
	VkConformanceVersion& vkHandle() { return reinterpret_cast<VkConformanceVersion&>(*this); }

	operator const VkConformanceVersion&() const { return vkHandle(); };
	operator VkConformanceVersion&() { return vkHandle(); };
};

struct PhysicalDeviceVulkan12Properties {
	StructureType sType {StructureType::physicalDeviceVulkan12Properties};
	void* pNext {};
	DriverId driverID {};
	std::array<char, maxDriverNameSize> driverName {};
	std::array<char, maxDriverInfoSize> driverInfo {};
	ConformanceVersion conformanceVersion {};
	ShaderFloatControlsIndependence denormBehaviorIndependence {};
	ShaderFloatControlsIndependence roundingModeIndependence {};
	Bool32 shaderSignedZeroInfNanPreserveFloat16 {};
	Bool32 shaderSignedZeroInfNanPreserveFloat32 {};
	Bool32 shaderSignedZeroInfNanPreserveFloat64 {};
	Bool32 shaderDenormPreserveFloat16 {};
	Bool32 shaderDenormPreserveFloat32 {};
	Bool32 shaderDenormPreserveFloat64 {};
	Bool32 shaderDenormFlushToZeroFloat16 {};
	Bool32 shaderDenormFlushToZeroFloat32 {};
	Bool32 shaderDenormFlushToZeroFloat64 {};
	Bool32 shaderRoundingModeRTEFloat16 {};
	Bool32 shaderRoundingModeRTEFloat32 {};
	Bool32 shaderRoundingModeRTEFloat64 {};
	Bool32 shaderRoundingModeRTZFloat16 {};
	Bool32 shaderRoundingModeRTZFloat32 {};
	Bool32 shaderRoundingModeRTZFloat64 {};
	uint32_t maxUpdateAfterBindDescriptorsInAllPools {};
	Bool32 shaderUniformBufferArrayNonUniformIndexingNative {};
	Bool32 shaderSampledImageArrayNonUniformIndexingNative {};
	Bool32 shaderStorageBufferArrayNonUniformIndexingNative {};
	Bool32 shaderStorageImageArrayNonUniformIndexingNative {};
	Bool32 shaderInputAttachmentArrayNonUniformIndexingNative {};
	Bool32 robustBufferAccessUpdateAfterBind {};
	Bool32 quadDivergentImplicitLod {};
	uint32_t maxPerStageDescriptorUpdateAfterBindSamplers {};
	uint32_t maxPerStageDescriptorUpdateAfterBindUniformBuffers {};
	uint32_t maxPerStageDescriptorUpdateAfterBindStorageBuffers {};
	uint32_t maxPerStageDescriptorUpdateAfterBindSampledImages {};
	uint32_t maxPerStageDescriptorUpdateAfterBindStorageImages {};
	uint32_t maxPerStageDescriptorUpdateAfterBindInputAttachments {};
	uint32_t maxPerStageUpdateAfterBindResources {};
	uint32_t maxDescriptorSetUpdateAfterBindSamplers {};
	uint32_t maxDescriptorSetUpdateAfterBindUniformBuffers {};
	uint32_t maxDescriptorSetUpdateAfterBindUniformBuffersDynamic {};
	uint32_t maxDescriptorSetUpdateAfterBindStorageBuffers {};
	uint32_t maxDescriptorSetUpdateAfterBindStorageBuffersDynamic {};
	uint32_t maxDescriptorSetUpdateAfterBindSampledImages {};
	uint32_t maxDescriptorSetUpdateAfterBindStorageImages {};
	uint32_t maxDescriptorSetUpdateAfterBindInputAttachments {};
	ResolveModeFlags supportedDepthResolveModes {};
	ResolveModeFlags supportedStencilResolveModes {};
	Bool32 independentResolveNone {};
	Bool32 independentResolve {};
	Bool32 filterMinmaxSingleComponentFormats {};
	Bool32 filterMinmaxImageComponentMapping {};
	uint64_t maxTimelineSemaphoreValueDifference {};
	SampleCountFlags framebufferIntegerColorSampleCounts {};

	const VkPhysicalDeviceVulkan12Properties& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceVulkan12Properties&>(*this); }
	VkPhysicalDeviceVulkan12Properties& vkHandle() { return reinterpret_cast<VkPhysicalDeviceVulkan12Properties&>(*this); }

	operator const VkPhysicalDeviceVulkan12Properties&() const { return vkHandle(); };
	operator VkPhysicalDeviceVulkan12Properties&() { return vkHandle(); };
};

struct ImageFormatListCreateInfo {
	StructureType sType {StructureType::imageFormatListCreateInfo};
	const void* pNext {};
	uint32_t viewFormatCount {};
	const Format* pViewFormats {};

	constexpr ImageFormatListCreateInfo(uint32_t xviewFormatCount = {}, const Format* xpViewFormats = {}) : viewFormatCount(xviewFormatCount), pViewFormats(xpViewFormats) {}

	const VkImageFormatListCreateInfo& vkHandle() const { return reinterpret_cast<const VkImageFormatListCreateInfo&>(*this); }
	VkImageFormatListCreateInfo& vkHandle() { return reinterpret_cast<VkImageFormatListCreateInfo&>(*this); }

	operator const VkImageFormatListCreateInfo&() const { return vkHandle(); };
	operator VkImageFormatListCreateInfo&() { return vkHandle(); };
};

struct AttachmentDescription2 {
	StructureType sType {StructureType::attachmentDescription2};
	const void* pNext {};
	AttachmentDescriptionFlags flags {};
	Format format {};
	SampleCountBits samples {};
	AttachmentLoadOp loadOp {};
	AttachmentStoreOp storeOp {};
	AttachmentLoadOp stencilLoadOp {};
	AttachmentStoreOp stencilStoreOp {};
	ImageLayout initialLayout {};
	ImageLayout finalLayout {};

	constexpr AttachmentDescription2(AttachmentDescriptionFlags xflags = {}, Format xformat = {}, SampleCountBits xsamples = {}, AttachmentLoadOp xloadOp = {}, AttachmentStoreOp xstoreOp = {}, AttachmentLoadOp xstencilLoadOp = {}, AttachmentStoreOp xstencilStoreOp = {}, ImageLayout xinitialLayout = {}, ImageLayout xfinalLayout = {}) : flags(xflags), format(xformat), samples(xsamples), loadOp(xloadOp), storeOp(xstoreOp), stencilLoadOp(xstencilLoadOp), stencilStoreOp(xstencilStoreOp), initialLayout(xinitialLayout), finalLayout(xfinalLayout) {}

	const VkAttachmentDescription2& vkHandle() const { return reinterpret_cast<const VkAttachmentDescription2&>(*this); }
	VkAttachmentDescription2& vkHandle() { return reinterpret_cast<VkAttachmentDescription2&>(*this); }

	operator const VkAttachmentDescription2&() const { return vkHandle(); };
	operator VkAttachmentDescription2&() { return vkHandle(); };
};

struct AttachmentReference2 {
	StructureType sType {StructureType::attachmentReference2};
	const void* pNext {};
	uint32_t attachment {};
	ImageLayout layout {};
	ImageAspectFlags aspectMask {};

	constexpr AttachmentReference2(uint32_t xattachment = {}, ImageLayout xlayout = {}, ImageAspectFlags xaspectMask = {}) : attachment(xattachment), layout(xlayout), aspectMask(xaspectMask) {}

	const VkAttachmentReference2& vkHandle() const { return reinterpret_cast<const VkAttachmentReference2&>(*this); }
	VkAttachmentReference2& vkHandle() { return reinterpret_cast<VkAttachmentReference2&>(*this); }

	operator const VkAttachmentReference2&() const { return vkHandle(); };
	operator VkAttachmentReference2&() { return vkHandle(); };
};

struct SubpassDescription2 {
	StructureType sType {StructureType::subpassDescription2};
	const void* pNext {};
	SubpassDescriptionFlags flags {};
	PipelineBindPoint pipelineBindPoint {};
	uint32_t viewMask {};
	uint32_t inputAttachmentCount {};
	const AttachmentReference2* pInputAttachments {};
	uint32_t colorAttachmentCount {};
	const AttachmentReference2* pColorAttachments {};
	const AttachmentReference2* pResolveAttachments {};
	const AttachmentReference2* pDepthStencilAttachment {};
	uint32_t preserveAttachmentCount {};
	const uint32_t* pPreserveAttachments {};

	constexpr SubpassDescription2(SubpassDescriptionFlags xflags = {}, PipelineBindPoint xpipelineBindPoint = {}, uint32_t xviewMask = {}, uint32_t xinputAttachmentCount = {}, const AttachmentReference2* xpInputAttachments = {}, uint32_t xcolorAttachmentCount = {}, const AttachmentReference2* xpColorAttachments = {}, const AttachmentReference2* xpResolveAttachments = {}, const AttachmentReference2* xpDepthStencilAttachment = {}, uint32_t xpreserveAttachmentCount = {}, const uint32_t* xpPreserveAttachments = {}) : flags(xflags), pipelineBindPoint(xpipelineBindPoint), viewMask(xviewMask), inputAttachmentCount(xinputAttachmentCount), pInputAttachments(xpInputAttachments), colorAttachmentCount(xcolorAttachmentCount), pColorAttachments(xpColorAttachments), pResolveAttachments(xpResolveAttachments), pDepthStencilAttachment(xpDepthStencilAttachment), preserveAttachmentCount(xpreserveAttachmentCount), pPreserveAttachments(xpPreserveAttachments) {}

	const VkSubpassDescription2& vkHandle() const { return reinterpret_cast<const VkSubpassDescription2&>(*this); }
	VkSubpassDescription2& vkHandle() { return reinterpret_cast<VkSubpassDescription2&>(*this); }

	operator const VkSubpassDescription2&() const { return vkHandle(); };
	operator VkSubpassDescription2&() { return vkHandle(); };
};

struct SubpassDependency2 {
	StructureType sType {StructureType::subpassDependency2};
	const void* pNext {};
	uint32_t srcSubpass {};
	uint32_t dstSubpass {};
	PipelineStageFlags srcStageMask {};
	PipelineStageFlags dstStageMask {};
	AccessFlags srcAccessMask {};
	AccessFlags dstAccessMask {};
	DependencyFlags dependencyFlags {};
	int32_t viewOffset {};

	constexpr SubpassDependency2(uint32_t xsrcSubpass = {}, uint32_t xdstSubpass = {}, PipelineStageFlags xsrcStageMask = {}, PipelineStageFlags xdstStageMask = {}, AccessFlags xsrcAccessMask = {}, AccessFlags xdstAccessMask = {}, DependencyFlags xdependencyFlags = {}, int32_t xviewOffset = {}) : srcSubpass(xsrcSubpass), dstSubpass(xdstSubpass), srcStageMask(xsrcStageMask), dstStageMask(xdstStageMask), srcAccessMask(xsrcAccessMask), dstAccessMask(xdstAccessMask), dependencyFlags(xdependencyFlags), viewOffset(xviewOffset) {}

	const VkSubpassDependency2& vkHandle() const { return reinterpret_cast<const VkSubpassDependency2&>(*this); }
	VkSubpassDependency2& vkHandle() { return reinterpret_cast<VkSubpassDependency2&>(*this); }

	operator const VkSubpassDependency2&() const { return vkHandle(); };
	operator VkSubpassDependency2&() { return vkHandle(); };
};

struct RenderPassCreateInfo2 {
	StructureType sType {StructureType::renderPassCreateInfo2};
	const void* pNext {};
	RenderPassCreateFlags flags {};
	uint32_t attachmentCount {};
	const AttachmentDescription2* pAttachments {};
	uint32_t subpassCount {};
	const SubpassDescription2* pSubpasses {};
	uint32_t dependencyCount {};
	const SubpassDependency2* pDependencies {};
	uint32_t correlatedViewMaskCount {};
	const uint32_t* pCorrelatedViewMasks {};

	constexpr RenderPassCreateInfo2(RenderPassCreateFlags xflags = {}, uint32_t xattachmentCount = {}, const AttachmentDescription2* xpAttachments = {}, uint32_t xsubpassCount = {}, const SubpassDescription2* xpSubpasses = {}, uint32_t xdependencyCount = {}, const SubpassDependency2* xpDependencies = {}, uint32_t xcorrelatedViewMaskCount = {}, const uint32_t* xpCorrelatedViewMasks = {}) : flags(xflags), attachmentCount(xattachmentCount), pAttachments(xpAttachments), subpassCount(xsubpassCount), pSubpasses(xpSubpasses), dependencyCount(xdependencyCount), pDependencies(xpDependencies), correlatedViewMaskCount(xcorrelatedViewMaskCount), pCorrelatedViewMasks(xpCorrelatedViewMasks) {}

	const VkRenderPassCreateInfo2& vkHandle() const { return reinterpret_cast<const VkRenderPassCreateInfo2&>(*this); }
	VkRenderPassCreateInfo2& vkHandle() { return reinterpret_cast<VkRenderPassCreateInfo2&>(*this); }

	operator const VkRenderPassCreateInfo2&() const { return vkHandle(); };
	operator VkRenderPassCreateInfo2&() { return vkHandle(); };
};

struct SubpassBeginInfo {
	StructureType sType {StructureType::subpassBeginInfo};
	const void* pNext {};
	SubpassContents contents {};

	constexpr SubpassBeginInfo(SubpassContents xcontents = {}) : contents(xcontents) {}

	const VkSubpassBeginInfo& vkHandle() const { return reinterpret_cast<const VkSubpassBeginInfo&>(*this); }
	VkSubpassBeginInfo& vkHandle() { return reinterpret_cast<VkSubpassBeginInfo&>(*this); }

	operator const VkSubpassBeginInfo&() const { return vkHandle(); };
	operator VkSubpassBeginInfo&() { return vkHandle(); };
};

struct SubpassEndInfo {
	StructureType sType {StructureType::subpassEndInfo};
	const void* pNext {};

	constexpr SubpassEndInfo() {}

	const VkSubpassEndInfo& vkHandle() const { return reinterpret_cast<const VkSubpassEndInfo&>(*this); }
	VkSubpassEndInfo& vkHandle() { return reinterpret_cast<VkSubpassEndInfo&>(*this); }

	operator const VkSubpassEndInfo&() const { return vkHandle(); };
	operator VkSubpassEndInfo&() { return vkHandle(); };
};

struct AllocationCallbacks {
	void* pUserData {};
	PFN_vkAllocationFunction pfnAllocation {};
	PFN_vkReallocationFunction pfnReallocation {};
	PFN_vkFreeFunction pfnFree {};
	PFN_vkInternalAllocationNotification pfnInternalAllocation {};
	PFN_vkInternalFreeNotification pfnInternalFree {};

	const VkAllocationCallbacks& vkHandle() const { return reinterpret_cast<const VkAllocationCallbacks&>(*this); }
	VkAllocationCallbacks& vkHandle() { return reinterpret_cast<VkAllocationCallbacks&>(*this); }

	operator const VkAllocationCallbacks&() const { return vkHandle(); };
	operator VkAllocationCallbacks&() { return vkHandle(); };
};

struct Offset2D {
	int32_t x {};
	int32_t y {};

	const VkOffset2D& vkHandle() const { return reinterpret_cast<const VkOffset2D&>(*this); }
	VkOffset2D& vkHandle() { return reinterpret_cast<VkOffset2D&>(*this); }

	operator const VkOffset2D&() const { return vkHandle(); };
	operator VkOffset2D&() { return vkHandle(); };
};

struct Extent2D {
	uint32_t width {};
	uint32_t height {};

	const VkExtent2D& vkHandle() const { return reinterpret_cast<const VkExtent2D&>(*this); }
	VkExtent2D& vkHandle() { return reinterpret_cast<VkExtent2D&>(*this); }

	operator const VkExtent2D&() const { return vkHandle(); };
	operator VkExtent2D&() { return vkHandle(); };
};

struct Rect2D {
	Offset2D offset {};
	Extent2D extent {};

	const VkRect2D& vkHandle() const { return reinterpret_cast<const VkRect2D&>(*this); }
	VkRect2D& vkHandle() { return reinterpret_cast<VkRect2D&>(*this); }

	operator const VkRect2D&() const { return vkHandle(); };
	operator VkRect2D&() { return vkHandle(); };
};

union ClearColorValue {
	std::array<float, 4> float32 {};
	std::array<int32_t, 4> int32;
	std::array<uint32_t, 4> uint32;

	const VkClearColorValue& vkHandle() const { return reinterpret_cast<const VkClearColorValue&>(*this); }
	VkClearColorValue& vkHandle() { return reinterpret_cast<VkClearColorValue&>(*this); }

	operator const VkClearColorValue&() const { return vkHandle(); };
	operator VkClearColorValue&() { return vkHandle(); };
};

struct ClearDepthStencilValue {
	float depth {};
	uint32_t stencil {};

	const VkClearDepthStencilValue& vkHandle() const { return reinterpret_cast<const VkClearDepthStencilValue&>(*this); }
	VkClearDepthStencilValue& vkHandle() { return reinterpret_cast<VkClearDepthStencilValue&>(*this); }

	operator const VkClearDepthStencilValue&() const { return vkHandle(); };
	operator VkClearDepthStencilValue&() { return vkHandle(); };
};

union ClearValue {
	ClearColorValue color {};
	ClearDepthStencilValue depthStencil;

	const VkClearValue& vkHandle() const { return reinterpret_cast<const VkClearValue&>(*this); }
	VkClearValue& vkHandle() { return reinterpret_cast<VkClearValue&>(*this); }

	operator const VkClearValue&() const { return vkHandle(); };
	operator VkClearValue&() { return vkHandle(); };
};

struct RenderPassBeginInfo {
	StructureType sType {StructureType::renderPassBeginInfo};
	const void* pNext {};
	RenderPass renderPass {};
	Framebuffer framebuffer {};
	Rect2D renderArea {};
	uint32_t clearValueCount {};
	const ClearValue* pClearValues {};

	constexpr RenderPassBeginInfo(RenderPass xrenderPass = {}, Framebuffer xframebuffer = {}, Rect2D xrenderArea = {}, uint32_t xclearValueCount = {}, const ClearValue* xpClearValues = {}) : renderPass(xrenderPass), framebuffer(xframebuffer), renderArea(xrenderArea), clearValueCount(xclearValueCount), pClearValues(xpClearValues) {}

	const VkRenderPassBeginInfo& vkHandle() const { return reinterpret_cast<const VkRenderPassBeginInfo&>(*this); }
	VkRenderPassBeginInfo& vkHandle() { return reinterpret_cast<VkRenderPassBeginInfo&>(*this); }

	operator const VkRenderPassBeginInfo&() const { return vkHandle(); };
	operator VkRenderPassBeginInfo&() { return vkHandle(); };
};

struct PhysicalDevice8BitStorageFeatures {
	StructureType sType {StructureType::physicalDevice8bitStorageFeatures};
	void* pNext {};
	Bool32 storageBuffer8BitAccess {};
	Bool32 uniformAndStorageBuffer8BitAccess {};
	Bool32 storagePushConstant8 {};

	constexpr PhysicalDevice8BitStorageFeatures(Bool32 xstorageBuffer8BitAccess = {}, Bool32 xuniformAndStorageBuffer8BitAccess = {}, Bool32 xstoragePushConstant8 = {}) : storageBuffer8BitAccess(xstorageBuffer8BitAccess), uniformAndStorageBuffer8BitAccess(xuniformAndStorageBuffer8BitAccess), storagePushConstant8(xstoragePushConstant8) {}

	const VkPhysicalDevice8BitStorageFeatures& vkHandle() const { return reinterpret_cast<const VkPhysicalDevice8BitStorageFeatures&>(*this); }
	VkPhysicalDevice8BitStorageFeatures& vkHandle() { return reinterpret_cast<VkPhysicalDevice8BitStorageFeatures&>(*this); }

	operator const VkPhysicalDevice8BitStorageFeatures&() const { return vkHandle(); };
	operator VkPhysicalDevice8BitStorageFeatures&() { return vkHandle(); };
};

struct PhysicalDeviceDriverProperties {
	StructureType sType {StructureType::physicalDeviceDriverProperties};
	void* pNext {};
	DriverId driverID {};
	std::array<char, maxDriverNameSize> driverName {};
	std::array<char, maxDriverInfoSize> driverInfo {};
	ConformanceVersion conformanceVersion {};

	const VkPhysicalDeviceDriverProperties& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceDriverProperties&>(*this); }
	VkPhysicalDeviceDriverProperties& vkHandle() { return reinterpret_cast<VkPhysicalDeviceDriverProperties&>(*this); }

	operator const VkPhysicalDeviceDriverProperties&() const { return vkHandle(); };
	operator VkPhysicalDeviceDriverProperties&() { return vkHandle(); };
};

struct PhysicalDeviceShaderAtomicInt64Features {
	StructureType sType {StructureType::physicalDeviceShaderAtomicInt64Features};
	void* pNext {};
	Bool32 shaderBufferInt64Atomics {};
	Bool32 shaderSharedInt64Atomics {};

	constexpr PhysicalDeviceShaderAtomicInt64Features(Bool32 xshaderBufferInt64Atomics = {}, Bool32 xshaderSharedInt64Atomics = {}) : shaderBufferInt64Atomics(xshaderBufferInt64Atomics), shaderSharedInt64Atomics(xshaderSharedInt64Atomics) {}

	const VkPhysicalDeviceShaderAtomicInt64Features& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceShaderAtomicInt64Features&>(*this); }
	VkPhysicalDeviceShaderAtomicInt64Features& vkHandle() { return reinterpret_cast<VkPhysicalDeviceShaderAtomicInt64Features&>(*this); }

	operator const VkPhysicalDeviceShaderAtomicInt64Features&() const { return vkHandle(); };
	operator VkPhysicalDeviceShaderAtomicInt64Features&() { return vkHandle(); };
};

struct PhysicalDeviceShaderFloat16Int8Features {
	StructureType sType {StructureType::physicalDeviceShaderFloat16Int8Features};
	void* pNext {};
	Bool32 shaderFloat16 {};
	Bool32 shaderInt8 {};

	constexpr PhysicalDeviceShaderFloat16Int8Features(Bool32 xshaderFloat16 = {}, Bool32 xshaderInt8 = {}) : shaderFloat16(xshaderFloat16), shaderInt8(xshaderInt8) {}

	const VkPhysicalDeviceShaderFloat16Int8Features& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceShaderFloat16Int8Features&>(*this); }
	VkPhysicalDeviceShaderFloat16Int8Features& vkHandle() { return reinterpret_cast<VkPhysicalDeviceShaderFloat16Int8Features&>(*this); }

	operator const VkPhysicalDeviceShaderFloat16Int8Features&() const { return vkHandle(); };
	operator VkPhysicalDeviceShaderFloat16Int8Features&() { return vkHandle(); };
};

struct PhysicalDeviceFloatControlsProperties {
	StructureType sType {StructureType::physicalDeviceFloatControlsProperties};
	void* pNext {};
	ShaderFloatControlsIndependence denormBehaviorIndependence {};
	ShaderFloatControlsIndependence roundingModeIndependence {};
	Bool32 shaderSignedZeroInfNanPreserveFloat16 {};
	Bool32 shaderSignedZeroInfNanPreserveFloat32 {};
	Bool32 shaderSignedZeroInfNanPreserveFloat64 {};
	Bool32 shaderDenormPreserveFloat16 {};
	Bool32 shaderDenormPreserveFloat32 {};
	Bool32 shaderDenormPreserveFloat64 {};
	Bool32 shaderDenormFlushToZeroFloat16 {};
	Bool32 shaderDenormFlushToZeroFloat32 {};
	Bool32 shaderDenormFlushToZeroFloat64 {};
	Bool32 shaderRoundingModeRTEFloat16 {};
	Bool32 shaderRoundingModeRTEFloat32 {};
	Bool32 shaderRoundingModeRTEFloat64 {};
	Bool32 shaderRoundingModeRTZFloat16 {};
	Bool32 shaderRoundingModeRTZFloat32 {};
	Bool32 shaderRoundingModeRTZFloat64 {};

	const VkPhysicalDeviceFloatControlsProperties& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceFloatControlsProperties&>(*this); }
	VkPhysicalDeviceFloatControlsProperties& vkHandle() { return reinterpret_cast<VkPhysicalDeviceFloatControlsProperties&>(*this); }

	operator const VkPhysicalDeviceFloatControlsProperties&() const { return vkHandle(); };
	operator VkPhysicalDeviceFloatControlsProperties&() { return vkHandle(); };
};

struct DescriptorSetLayoutBindingFlagsCreateInfo {
	StructureType sType {StructureType::descriptorSetLayoutBindingFlagsCreateInfo};
	const void* pNext {};
	uint32_t bindingCount {};
	const DescriptorBindingFlags* pBindingFlags {};

	constexpr DescriptorSetLayoutBindingFlagsCreateInfo(uint32_t xbindingCount = {}, const DescriptorBindingFlags* xpBindingFlags = {}) : bindingCount(xbindingCount), pBindingFlags(xpBindingFlags) {}

	const VkDescriptorSetLayoutBindingFlagsCreateInfo& vkHandle() const { return reinterpret_cast<const VkDescriptorSetLayoutBindingFlagsCreateInfo&>(*this); }
	VkDescriptorSetLayoutBindingFlagsCreateInfo& vkHandle() { return reinterpret_cast<VkDescriptorSetLayoutBindingFlagsCreateInfo&>(*this); }

	operator const VkDescriptorSetLayoutBindingFlagsCreateInfo&() const { return vkHandle(); };
	operator VkDescriptorSetLayoutBindingFlagsCreateInfo&() { return vkHandle(); };
};

struct PhysicalDeviceDescriptorIndexingFeatures {
	StructureType sType {StructureType::physicalDeviceDescriptorIndexingFeatures};
	void* pNext {};
	Bool32 shaderInputAttachmentArrayDynamicIndexing {};
	Bool32 shaderUniformTexelBufferArrayDynamicIndexing {};
	Bool32 shaderStorageTexelBufferArrayDynamicIndexing {};
	Bool32 shaderUniformBufferArrayNonUniformIndexing {};
	Bool32 shaderSampledImageArrayNonUniformIndexing {};
	Bool32 shaderStorageBufferArrayNonUniformIndexing {};
	Bool32 shaderStorageImageArrayNonUniformIndexing {};
	Bool32 shaderInputAttachmentArrayNonUniformIndexing {};
	Bool32 shaderUniformTexelBufferArrayNonUniformIndexing {};
	Bool32 shaderStorageTexelBufferArrayNonUniformIndexing {};
	Bool32 descriptorBindingUniformBufferUpdateAfterBind {};
	Bool32 descriptorBindingSampledImageUpdateAfterBind {};
	Bool32 descriptorBindingStorageImageUpdateAfterBind {};
	Bool32 descriptorBindingStorageBufferUpdateAfterBind {};
	Bool32 descriptorBindingUniformTexelBufferUpdateAfterBind {};
	Bool32 descriptorBindingStorageTexelBufferUpdateAfterBind {};
	Bool32 descriptorBindingUpdateUnusedWhilePending {};
	Bool32 descriptorBindingPartiallyBound {};
	Bool32 descriptorBindingVariableDescriptorCount {};
	Bool32 runtimeDescriptorArray {};

	constexpr PhysicalDeviceDescriptorIndexingFeatures(Bool32 xshaderInputAttachmentArrayDynamicIndexing = {}, Bool32 xshaderUniformTexelBufferArrayDynamicIndexing = {}, Bool32 xshaderStorageTexelBufferArrayDynamicIndexing = {}, Bool32 xshaderUniformBufferArrayNonUniformIndexing = {}, Bool32 xshaderSampledImageArrayNonUniformIndexing = {}, Bool32 xshaderStorageBufferArrayNonUniformIndexing = {}, Bool32 xshaderStorageImageArrayNonUniformIndexing = {}, Bool32 xshaderInputAttachmentArrayNonUniformIndexing = {}, Bool32 xshaderUniformTexelBufferArrayNonUniformIndexing = {}, Bool32 xshaderStorageTexelBufferArrayNonUniformIndexing = {}, Bool32 xdescriptorBindingUniformBufferUpdateAfterBind = {}, Bool32 xdescriptorBindingSampledImageUpdateAfterBind = {}, Bool32 xdescriptorBindingStorageImageUpdateAfterBind = {}, Bool32 xdescriptorBindingStorageBufferUpdateAfterBind = {}, Bool32 xdescriptorBindingUniformTexelBufferUpdateAfterBind = {}, Bool32 xdescriptorBindingStorageTexelBufferUpdateAfterBind = {}, Bool32 xdescriptorBindingUpdateUnusedWhilePending = {}, Bool32 xdescriptorBindingPartiallyBound = {}, Bool32 xdescriptorBindingVariableDescriptorCount = {}, Bool32 xruntimeDescriptorArray = {}) : shaderInputAttachmentArrayDynamicIndexing(xshaderInputAttachmentArrayDynamicIndexing), shaderUniformTexelBufferArrayDynamicIndexing(xshaderUniformTexelBufferArrayDynamicIndexing), shaderStorageTexelBufferArrayDynamicIndexing(xshaderStorageTexelBufferArrayDynamicIndexing), shaderUniformBufferArrayNonUniformIndexing(xshaderUniformBufferArrayNonUniformIndexing), shaderSampledImageArrayNonUniformIndexing(xshaderSampledImageArrayNonUniformIndexing), shaderStorageBufferArrayNonUniformIndexing(xshaderStorageBufferArrayNonUniformIndexing), shaderStorageImageArrayNonUniformIndexing(xshaderStorageImageArrayNonUniformIndexing), shaderInputAttachmentArrayNonUniformIndexing(xshaderInputAttachmentArrayNonUniformIndexing), shaderUniformTexelBufferArrayNonUniformIndexing(xshaderUniformTexelBufferArrayNonUniformIndexing), shaderStorageTexelBufferArrayNonUniformIndexing(xshaderStorageTexelBufferArrayNonUniformIndexing), descriptorBindingUniformBufferUpdateAfterBind(xdescriptorBindingUniformBufferUpdateAfterBind), descriptorBindingSampledImageUpdateAfterBind(xdescriptorBindingSampledImageUpdateAfterBind), descriptorBindingStorageImageUpdateAfterBind(xdescriptorBindingStorageImageUpdateAfterBind), descriptorBindingStorageBufferUpdateAfterBind(xdescriptorBindingStorageBufferUpdateAfterBind), descriptorBindingUniformTexelBufferUpdateAfterBind(xdescriptorBindingUniformTexelBufferUpdateAfterBind), descriptorBindingStorageTexelBufferUpdateAfterBind(xdescriptorBindingStorageTexelBufferUpdateAfterBind), descriptorBindingUpdateUnusedWhilePending(xdescriptorBindingUpdateUnusedWhilePending), descriptorBindingPartiallyBound(xdescriptorBindingPartiallyBound), descriptorBindingVariableDescriptorCount(xdescriptorBindingVariableDescriptorCount), runtimeDescriptorArray(xruntimeDescriptorArray) {}

	const VkPhysicalDeviceDescriptorIndexingFeatures& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceDescriptorIndexingFeatures&>(*this); }
	VkPhysicalDeviceDescriptorIndexingFeatures& vkHandle() { return reinterpret_cast<VkPhysicalDeviceDescriptorIndexingFeatures&>(*this); }

	operator const VkPhysicalDeviceDescriptorIndexingFeatures&() const { return vkHandle(); };
	operator VkPhysicalDeviceDescriptorIndexingFeatures&() { return vkHandle(); };
};

struct PhysicalDeviceDescriptorIndexingProperties {
	StructureType sType {StructureType::physicalDeviceDescriptorIndexingProperties};
	void* pNext {};
	uint32_t maxUpdateAfterBindDescriptorsInAllPools {};
	Bool32 shaderUniformBufferArrayNonUniformIndexingNative {};
	Bool32 shaderSampledImageArrayNonUniformIndexingNative {};
	Bool32 shaderStorageBufferArrayNonUniformIndexingNative {};
	Bool32 shaderStorageImageArrayNonUniformIndexingNative {};
	Bool32 shaderInputAttachmentArrayNonUniformIndexingNative {};
	Bool32 robustBufferAccessUpdateAfterBind {};
	Bool32 quadDivergentImplicitLod {};
	uint32_t maxPerStageDescriptorUpdateAfterBindSamplers {};
	uint32_t maxPerStageDescriptorUpdateAfterBindUniformBuffers {};
	uint32_t maxPerStageDescriptorUpdateAfterBindStorageBuffers {};
	uint32_t maxPerStageDescriptorUpdateAfterBindSampledImages {};
	uint32_t maxPerStageDescriptorUpdateAfterBindStorageImages {};
	uint32_t maxPerStageDescriptorUpdateAfterBindInputAttachments {};
	uint32_t maxPerStageUpdateAfterBindResources {};
	uint32_t maxDescriptorSetUpdateAfterBindSamplers {};
	uint32_t maxDescriptorSetUpdateAfterBindUniformBuffers {};
	uint32_t maxDescriptorSetUpdateAfterBindUniformBuffersDynamic {};
	uint32_t maxDescriptorSetUpdateAfterBindStorageBuffers {};
	uint32_t maxDescriptorSetUpdateAfterBindStorageBuffersDynamic {};
	uint32_t maxDescriptorSetUpdateAfterBindSampledImages {};
	uint32_t maxDescriptorSetUpdateAfterBindStorageImages {};
	uint32_t maxDescriptorSetUpdateAfterBindInputAttachments {};

	const VkPhysicalDeviceDescriptorIndexingProperties& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceDescriptorIndexingProperties&>(*this); }
	VkPhysicalDeviceDescriptorIndexingProperties& vkHandle() { return reinterpret_cast<VkPhysicalDeviceDescriptorIndexingProperties&>(*this); }

	operator const VkPhysicalDeviceDescriptorIndexingProperties&() const { return vkHandle(); };
	operator VkPhysicalDeviceDescriptorIndexingProperties&() { return vkHandle(); };
};

struct DescriptorSetVariableDescriptorCountAllocateInfo {
	StructureType sType {StructureType::descriptorSetVariableDescriptorCountAllocateInfo};
	const void* pNext {};
	uint32_t descriptorSetCount {};
	const uint32_t* pDescriptorCounts {};

	constexpr DescriptorSetVariableDescriptorCountAllocateInfo(uint32_t xdescriptorSetCount = {}, const uint32_t* xpDescriptorCounts = {}) : descriptorSetCount(xdescriptorSetCount), pDescriptorCounts(xpDescriptorCounts) {}

	const VkDescriptorSetVariableDescriptorCountAllocateInfo& vkHandle() const { return reinterpret_cast<const VkDescriptorSetVariableDescriptorCountAllocateInfo&>(*this); }
	VkDescriptorSetVariableDescriptorCountAllocateInfo& vkHandle() { return reinterpret_cast<VkDescriptorSetVariableDescriptorCountAllocateInfo&>(*this); }

	operator const VkDescriptorSetVariableDescriptorCountAllocateInfo&() const { return vkHandle(); };
	operator VkDescriptorSetVariableDescriptorCountAllocateInfo&() { return vkHandle(); };
};

struct DescriptorSetVariableDescriptorCountLayoutSupport {
	StructureType sType {StructureType::descriptorSetVariableDescriptorCountLayoutSupport};
	void* pNext {};
	uint32_t maxVariableDescriptorCount {};

	const VkDescriptorSetVariableDescriptorCountLayoutSupport& vkHandle() const { return reinterpret_cast<const VkDescriptorSetVariableDescriptorCountLayoutSupport&>(*this); }
	VkDescriptorSetVariableDescriptorCountLayoutSupport& vkHandle() { return reinterpret_cast<VkDescriptorSetVariableDescriptorCountLayoutSupport&>(*this); }

	operator const VkDescriptorSetVariableDescriptorCountLayoutSupport&() const { return vkHandle(); };
	operator VkDescriptorSetVariableDescriptorCountLayoutSupport&() { return vkHandle(); };
};

struct SubpassDescriptionDepthStencilResolve {
	StructureType sType {StructureType::subpassDescriptionDepthStencilResolve};
	const void* pNext {};
	ResolveModeBits depthResolveMode {};
	ResolveModeBits stencilResolveMode {};
	const AttachmentReference2* pDepthStencilResolveAttachment {};

	constexpr SubpassDescriptionDepthStencilResolve(ResolveModeBits xdepthResolveMode = {}, ResolveModeBits xstencilResolveMode = {}, const AttachmentReference2* xpDepthStencilResolveAttachment = {}) : depthResolveMode(xdepthResolveMode), stencilResolveMode(xstencilResolveMode), pDepthStencilResolveAttachment(xpDepthStencilResolveAttachment) {}

	const VkSubpassDescriptionDepthStencilResolve& vkHandle() const { return reinterpret_cast<const VkSubpassDescriptionDepthStencilResolve&>(*this); }
	VkSubpassDescriptionDepthStencilResolve& vkHandle() { return reinterpret_cast<VkSubpassDescriptionDepthStencilResolve&>(*this); }

	operator const VkSubpassDescriptionDepthStencilResolve&() const { return vkHandle(); };
	operator VkSubpassDescriptionDepthStencilResolve&() { return vkHandle(); };
};

struct PhysicalDeviceDepthStencilResolveProperties {
	StructureType sType {StructureType::physicalDeviceDepthStencilResolveProperties};
	void* pNext {};
	ResolveModeFlags supportedDepthResolveModes {};
	ResolveModeFlags supportedStencilResolveModes {};
	Bool32 independentResolveNone {};
	Bool32 independentResolve {};

	const VkPhysicalDeviceDepthStencilResolveProperties& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceDepthStencilResolveProperties&>(*this); }
	VkPhysicalDeviceDepthStencilResolveProperties& vkHandle() { return reinterpret_cast<VkPhysicalDeviceDepthStencilResolveProperties&>(*this); }

	operator const VkPhysicalDeviceDepthStencilResolveProperties&() const { return vkHandle(); };
	operator VkPhysicalDeviceDepthStencilResolveProperties&() { return vkHandle(); };
};

struct PhysicalDeviceScalarBlockLayoutFeatures {
	StructureType sType {StructureType::physicalDeviceScalarBlockLayoutFeatures};
	void* pNext {};
	Bool32 scalarBlockLayout {};

	constexpr PhysicalDeviceScalarBlockLayoutFeatures(Bool32 xscalarBlockLayout = {}) : scalarBlockLayout(xscalarBlockLayout) {}

	const VkPhysicalDeviceScalarBlockLayoutFeatures& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceScalarBlockLayoutFeatures&>(*this); }
	VkPhysicalDeviceScalarBlockLayoutFeatures& vkHandle() { return reinterpret_cast<VkPhysicalDeviceScalarBlockLayoutFeatures&>(*this); }

	operator const VkPhysicalDeviceScalarBlockLayoutFeatures&() const { return vkHandle(); };
	operator VkPhysicalDeviceScalarBlockLayoutFeatures&() { return vkHandle(); };
};

struct ImageStencilUsageCreateInfo {
	StructureType sType {StructureType::imageStencilUsageCreateInfo};
	const void* pNext {};
	ImageUsageFlags stencilUsage {};

	constexpr ImageStencilUsageCreateInfo(ImageUsageFlags xstencilUsage = {}) : stencilUsage(xstencilUsage) {}

	const VkImageStencilUsageCreateInfo& vkHandle() const { return reinterpret_cast<const VkImageStencilUsageCreateInfo&>(*this); }
	VkImageStencilUsageCreateInfo& vkHandle() { return reinterpret_cast<VkImageStencilUsageCreateInfo&>(*this); }

	operator const VkImageStencilUsageCreateInfo&() const { return vkHandle(); };
	operator VkImageStencilUsageCreateInfo&() { return vkHandle(); };
};

struct SamplerReductionModeCreateInfo {
	StructureType sType {StructureType::samplerReductionModeCreateInfo};
	const void* pNext {};
	SamplerReductionMode reductionMode {};

	constexpr SamplerReductionModeCreateInfo(SamplerReductionMode xreductionMode = {}) : reductionMode(xreductionMode) {}

	const VkSamplerReductionModeCreateInfo& vkHandle() const { return reinterpret_cast<const VkSamplerReductionModeCreateInfo&>(*this); }
	VkSamplerReductionModeCreateInfo& vkHandle() { return reinterpret_cast<VkSamplerReductionModeCreateInfo&>(*this); }

	operator const VkSamplerReductionModeCreateInfo&() const { return vkHandle(); };
	operator VkSamplerReductionModeCreateInfo&() { return vkHandle(); };
};

struct PhysicalDeviceSamplerFilterMinmaxProperties {
	StructureType sType {StructureType::physicalDeviceSamplerFilterMinmaxProperties};
	void* pNext {};
	Bool32 filterMinmaxSingleComponentFormats {};
	Bool32 filterMinmaxImageComponentMapping {};

	const VkPhysicalDeviceSamplerFilterMinmaxProperties& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceSamplerFilterMinmaxProperties&>(*this); }
	VkPhysicalDeviceSamplerFilterMinmaxProperties& vkHandle() { return reinterpret_cast<VkPhysicalDeviceSamplerFilterMinmaxProperties&>(*this); }

	operator const VkPhysicalDeviceSamplerFilterMinmaxProperties&() const { return vkHandle(); };
	operator VkPhysicalDeviceSamplerFilterMinmaxProperties&() { return vkHandle(); };
};

struct PhysicalDeviceVulkanMemoryModelFeatures {
	StructureType sType {StructureType::physicalDeviceVulkanMemoryModelFeatures};
	void* pNext {};
	Bool32 vulkanMemoryModel {};
	Bool32 vulkanMemoryModelDeviceScope {};
	Bool32 vulkanMemoryModelAvailabilityVisibilityChains {};

	constexpr PhysicalDeviceVulkanMemoryModelFeatures(Bool32 xvulkanMemoryModel = {}, Bool32 xvulkanMemoryModelDeviceScope = {}, Bool32 xvulkanMemoryModelAvailabilityVisibilityChains = {}) : vulkanMemoryModel(xvulkanMemoryModel), vulkanMemoryModelDeviceScope(xvulkanMemoryModelDeviceScope), vulkanMemoryModelAvailabilityVisibilityChains(xvulkanMemoryModelAvailabilityVisibilityChains) {}

	const VkPhysicalDeviceVulkanMemoryModelFeatures& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceVulkanMemoryModelFeatures&>(*this); }
	VkPhysicalDeviceVulkanMemoryModelFeatures& vkHandle() { return reinterpret_cast<VkPhysicalDeviceVulkanMemoryModelFeatures&>(*this); }

	operator const VkPhysicalDeviceVulkanMemoryModelFeatures&() const { return vkHandle(); };
	operator VkPhysicalDeviceVulkanMemoryModelFeatures&() { return vkHandle(); };
};

struct PhysicalDeviceImagelessFramebufferFeatures {
	StructureType sType {StructureType::physicalDeviceImagelessFramebufferFeatures};
	void* pNext {};
	Bool32 imagelessFramebuffer {};

	constexpr PhysicalDeviceImagelessFramebufferFeatures(Bool32 ximagelessFramebuffer = {}) : imagelessFramebuffer(ximagelessFramebuffer) {}

	const VkPhysicalDeviceImagelessFramebufferFeatures& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceImagelessFramebufferFeatures&>(*this); }
	VkPhysicalDeviceImagelessFramebufferFeatures& vkHandle() { return reinterpret_cast<VkPhysicalDeviceImagelessFramebufferFeatures&>(*this); }

	operator const VkPhysicalDeviceImagelessFramebufferFeatures&() const { return vkHandle(); };
	operator VkPhysicalDeviceImagelessFramebufferFeatures&() { return vkHandle(); };
};

struct FramebufferAttachmentImageInfo {
	StructureType sType {StructureType::framebufferAttachmentImageInfo};
	const void* pNext {};
	ImageCreateFlags flags {};
	ImageUsageFlags usage {};
	uint32_t width {};
	uint32_t height {};
	uint32_t layerCount {};
	uint32_t viewFormatCount {};
	const Format* pViewFormats {};

	constexpr FramebufferAttachmentImageInfo(ImageCreateFlags xflags = {}, ImageUsageFlags xusage = {}, uint32_t xwidth = {}, uint32_t xheight = {}, uint32_t xlayerCount = {}, uint32_t xviewFormatCount = {}, const Format* xpViewFormats = {}) : flags(xflags), usage(xusage), width(xwidth), height(xheight), layerCount(xlayerCount), viewFormatCount(xviewFormatCount), pViewFormats(xpViewFormats) {}

	const VkFramebufferAttachmentImageInfo& vkHandle() const { return reinterpret_cast<const VkFramebufferAttachmentImageInfo&>(*this); }
	VkFramebufferAttachmentImageInfo& vkHandle() { return reinterpret_cast<VkFramebufferAttachmentImageInfo&>(*this); }

	operator const VkFramebufferAttachmentImageInfo&() const { return vkHandle(); };
	operator VkFramebufferAttachmentImageInfo&() { return vkHandle(); };
};

struct FramebufferAttachmentsCreateInfo {
	StructureType sType {StructureType::framebufferAttachmentsCreateInfo};
	const void* pNext {};
	uint32_t attachmentImageInfoCount {};
	const FramebufferAttachmentImageInfo* pAttachmentImageInfos {};

	constexpr FramebufferAttachmentsCreateInfo(uint32_t xattachmentImageInfoCount = {}, const FramebufferAttachmentImageInfo* xpAttachmentImageInfos = {}) : attachmentImageInfoCount(xattachmentImageInfoCount), pAttachmentImageInfos(xpAttachmentImageInfos) {}

	const VkFramebufferAttachmentsCreateInfo& vkHandle() const { return reinterpret_cast<const VkFramebufferAttachmentsCreateInfo&>(*this); }
	VkFramebufferAttachmentsCreateInfo& vkHandle() { return reinterpret_cast<VkFramebufferAttachmentsCreateInfo&>(*this); }

	operator const VkFramebufferAttachmentsCreateInfo&() const { return vkHandle(); };
	operator VkFramebufferAttachmentsCreateInfo&() { return vkHandle(); };
};

struct RenderPassAttachmentBeginInfo {
	StructureType sType {StructureType::renderPassAttachmentBeginInfo};
	const void* pNext {};
	uint32_t attachmentCount {};
	const ImageView* pAttachments {};

	constexpr RenderPassAttachmentBeginInfo(uint32_t xattachmentCount = {}, const ImageView* xpAttachments = {}) : attachmentCount(xattachmentCount), pAttachments(xpAttachments) {}

	const VkRenderPassAttachmentBeginInfo& vkHandle() const { return reinterpret_cast<const VkRenderPassAttachmentBeginInfo&>(*this); }
	VkRenderPassAttachmentBeginInfo& vkHandle() { return reinterpret_cast<VkRenderPassAttachmentBeginInfo&>(*this); }

	operator const VkRenderPassAttachmentBeginInfo&() const { return vkHandle(); };
	operator VkRenderPassAttachmentBeginInfo&() { return vkHandle(); };
};

struct PhysicalDeviceUniformBufferStandardLayoutFeatures {
	StructureType sType {StructureType::physicalDeviceUniformBufferStandardLayoutFeatures};
	void* pNext {};
	Bool32 uniformBufferStandardLayout {};

	constexpr PhysicalDeviceUniformBufferStandardLayoutFeatures(Bool32 xuniformBufferStandardLayout = {}) : uniformBufferStandardLayout(xuniformBufferStandardLayout) {}

	const VkPhysicalDeviceUniformBufferStandardLayoutFeatures& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceUniformBufferStandardLayoutFeatures&>(*this); }
	VkPhysicalDeviceUniformBufferStandardLayoutFeatures& vkHandle() { return reinterpret_cast<VkPhysicalDeviceUniformBufferStandardLayoutFeatures&>(*this); }

	operator const VkPhysicalDeviceUniformBufferStandardLayoutFeatures&() const { return vkHandle(); };
	operator VkPhysicalDeviceUniformBufferStandardLayoutFeatures&() { return vkHandle(); };
};

struct PhysicalDeviceShaderSubgroupExtendedTypesFeatures {
	StructureType sType {StructureType::physicalDeviceShaderSubgroupExtendedTypesFeatures};
	void* pNext {};
	Bool32 shaderSubgroupExtendedTypes {};

	constexpr PhysicalDeviceShaderSubgroupExtendedTypesFeatures(Bool32 xshaderSubgroupExtendedTypes = {}) : shaderSubgroupExtendedTypes(xshaderSubgroupExtendedTypes) {}

	const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures&>(*this); }
	VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures& vkHandle() { return reinterpret_cast<VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures&>(*this); }

	operator const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures&() const { return vkHandle(); };
	operator VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures&() { return vkHandle(); };
};

struct PhysicalDeviceSeparateDepthStencilLayoutsFeatures {
	StructureType sType {StructureType::physicalDeviceSeparateDepthStencilLayoutsFeatures};
	void* pNext {};
	Bool32 separateDepthStencilLayouts {};

	constexpr PhysicalDeviceSeparateDepthStencilLayoutsFeatures(Bool32 xseparateDepthStencilLayouts = {}) : separateDepthStencilLayouts(xseparateDepthStencilLayouts) {}

	const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures&>(*this); }
	VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures& vkHandle() { return reinterpret_cast<VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures&>(*this); }

	operator const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures&() const { return vkHandle(); };
	operator VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures&() { return vkHandle(); };
};

struct AttachmentReferenceStencilLayout {
	StructureType sType {StructureType::attachmentReferenceStencilLayout};
	void* pNext {};
	ImageLayout stencilLayout {};

	constexpr AttachmentReferenceStencilLayout(ImageLayout xstencilLayout = {}) : stencilLayout(xstencilLayout) {}

	const VkAttachmentReferenceStencilLayout& vkHandle() const { return reinterpret_cast<const VkAttachmentReferenceStencilLayout&>(*this); }
	VkAttachmentReferenceStencilLayout& vkHandle() { return reinterpret_cast<VkAttachmentReferenceStencilLayout&>(*this); }

	operator const VkAttachmentReferenceStencilLayout&() const { return vkHandle(); };
	operator VkAttachmentReferenceStencilLayout&() { return vkHandle(); };
};

struct AttachmentDescriptionStencilLayout {
	StructureType sType {StructureType::attachmentDescriptionStencilLayout};
	void* pNext {};
	ImageLayout stencilInitialLayout {};
	ImageLayout stencilFinalLayout {};

	constexpr AttachmentDescriptionStencilLayout(ImageLayout xstencilInitialLayout = {}, ImageLayout xstencilFinalLayout = {}) : stencilInitialLayout(xstencilInitialLayout), stencilFinalLayout(xstencilFinalLayout) {}

	const VkAttachmentDescriptionStencilLayout& vkHandle() const { return reinterpret_cast<const VkAttachmentDescriptionStencilLayout&>(*this); }
	VkAttachmentDescriptionStencilLayout& vkHandle() { return reinterpret_cast<VkAttachmentDescriptionStencilLayout&>(*this); }

	operator const VkAttachmentDescriptionStencilLayout&() const { return vkHandle(); };
	operator VkAttachmentDescriptionStencilLayout&() { return vkHandle(); };
};

struct PhysicalDeviceHostQueryResetFeatures {
	StructureType sType {StructureType::physicalDeviceHostQueryResetFeatures};
	void* pNext {};
	Bool32 hostQueryReset {};

	constexpr PhysicalDeviceHostQueryResetFeatures(Bool32 xhostQueryReset = {}) : hostQueryReset(xhostQueryReset) {}

	const VkPhysicalDeviceHostQueryResetFeatures& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceHostQueryResetFeatures&>(*this); }
	VkPhysicalDeviceHostQueryResetFeatures& vkHandle() { return reinterpret_cast<VkPhysicalDeviceHostQueryResetFeatures&>(*this); }

	operator const VkPhysicalDeviceHostQueryResetFeatures&() const { return vkHandle(); };
	operator VkPhysicalDeviceHostQueryResetFeatures&() { return vkHandle(); };
};

struct PhysicalDeviceTimelineSemaphoreFeatures {
	StructureType sType {StructureType::physicalDeviceTimelineSemaphoreFeatures};
	void* pNext {};
	Bool32 timelineSemaphore {};

	constexpr PhysicalDeviceTimelineSemaphoreFeatures(Bool32 xtimelineSemaphore = {}) : timelineSemaphore(xtimelineSemaphore) {}

	const VkPhysicalDeviceTimelineSemaphoreFeatures& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceTimelineSemaphoreFeatures&>(*this); }
	VkPhysicalDeviceTimelineSemaphoreFeatures& vkHandle() { return reinterpret_cast<VkPhysicalDeviceTimelineSemaphoreFeatures&>(*this); }

	operator const VkPhysicalDeviceTimelineSemaphoreFeatures&() const { return vkHandle(); };
	operator VkPhysicalDeviceTimelineSemaphoreFeatures&() { return vkHandle(); };
};

struct PhysicalDeviceTimelineSemaphoreProperties {
	StructureType sType {StructureType::physicalDeviceTimelineSemaphoreProperties};
	void* pNext {};
	uint64_t maxTimelineSemaphoreValueDifference {};

	const VkPhysicalDeviceTimelineSemaphoreProperties& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceTimelineSemaphoreProperties&>(*this); }
	VkPhysicalDeviceTimelineSemaphoreProperties& vkHandle() { return reinterpret_cast<VkPhysicalDeviceTimelineSemaphoreProperties&>(*this); }

	operator const VkPhysicalDeviceTimelineSemaphoreProperties&() const { return vkHandle(); };
	operator VkPhysicalDeviceTimelineSemaphoreProperties&() { return vkHandle(); };
};

struct SemaphoreTypeCreateInfo {
	StructureType sType {StructureType::semaphoreTypeCreateInfo};
	const void* pNext {};
	SemaphoreType semaphoreType {};
	uint64_t initialValue {};

	constexpr SemaphoreTypeCreateInfo(SemaphoreType xsemaphoreType = {}, uint64_t xinitialValue = {}) : semaphoreType(xsemaphoreType), initialValue(xinitialValue) {}

	const VkSemaphoreTypeCreateInfo& vkHandle() const { return reinterpret_cast<const VkSemaphoreTypeCreateInfo&>(*this); }
	VkSemaphoreTypeCreateInfo& vkHandle() { return reinterpret_cast<VkSemaphoreTypeCreateInfo&>(*this); }

	operator const VkSemaphoreTypeCreateInfo&() const { return vkHandle(); };
	operator VkSemaphoreTypeCreateInfo&() { return vkHandle(); };
};

struct TimelineSemaphoreSubmitInfo {
	StructureType sType {StructureType::timelineSemaphoreSubmitInfo};
	const void* pNext {};
	uint32_t waitSemaphoreValueCount {};
	const uint64_t* pWaitSemaphoreValues {};
	uint32_t signalSemaphoreValueCount {};
	const uint64_t* pSignalSemaphoreValues {};

	constexpr TimelineSemaphoreSubmitInfo(uint32_t xwaitSemaphoreValueCount = {}, const uint64_t* xpWaitSemaphoreValues = {}, uint32_t xsignalSemaphoreValueCount = {}, const uint64_t* xpSignalSemaphoreValues = {}) : waitSemaphoreValueCount(xwaitSemaphoreValueCount), pWaitSemaphoreValues(xpWaitSemaphoreValues), signalSemaphoreValueCount(xsignalSemaphoreValueCount), pSignalSemaphoreValues(xpSignalSemaphoreValues) {}

	const VkTimelineSemaphoreSubmitInfo& vkHandle() const { return reinterpret_cast<const VkTimelineSemaphoreSubmitInfo&>(*this); }
	VkTimelineSemaphoreSubmitInfo& vkHandle() { return reinterpret_cast<VkTimelineSemaphoreSubmitInfo&>(*this); }

	operator const VkTimelineSemaphoreSubmitInfo&() const { return vkHandle(); };
	operator VkTimelineSemaphoreSubmitInfo&() { return vkHandle(); };
};

struct SemaphoreWaitInfo {
	StructureType sType {StructureType::semaphoreWaitInfo};
	const void* pNext {};
	SemaphoreWaitFlags flags {};
	uint32_t semaphoreCount {};
	const Semaphore* pSemaphores {};
	const uint64_t* pValues {};

	constexpr SemaphoreWaitInfo(SemaphoreWaitFlags xflags = {}, uint32_t xsemaphoreCount = {}, const Semaphore* xpSemaphores = {}, const uint64_t* xpValues = {}) : flags(xflags), semaphoreCount(xsemaphoreCount), pSemaphores(xpSemaphores), pValues(xpValues) {}

	const VkSemaphoreWaitInfo& vkHandle() const { return reinterpret_cast<const VkSemaphoreWaitInfo&>(*this); }
	VkSemaphoreWaitInfo& vkHandle() { return reinterpret_cast<VkSemaphoreWaitInfo&>(*this); }

	operator const VkSemaphoreWaitInfo&() const { return vkHandle(); };
	operator VkSemaphoreWaitInfo&() { return vkHandle(); };
};

struct SemaphoreSignalInfo {
	StructureType sType {StructureType::semaphoreSignalInfo};
	const void* pNext {};
	Semaphore semaphore {};
	uint64_t value {};

	constexpr SemaphoreSignalInfo(Semaphore xsemaphore = {}, uint64_t xvalue = {}) : semaphore(xsemaphore), value(xvalue) {}

	const VkSemaphoreSignalInfo& vkHandle() const { return reinterpret_cast<const VkSemaphoreSignalInfo&>(*this); }
	VkSemaphoreSignalInfo& vkHandle() { return reinterpret_cast<VkSemaphoreSignalInfo&>(*this); }

	operator const VkSemaphoreSignalInfo&() const { return vkHandle(); };
	operator VkSemaphoreSignalInfo&() { return vkHandle(); };
};

struct PhysicalDeviceBufferDeviceAddressFeatures {
	StructureType sType {StructureType::physicalDeviceBufferDeviceAddressFeatures};
	void* pNext {};
	Bool32 bufferDeviceAddress {};
	Bool32 bufferDeviceAddressCaptureReplay {};
	Bool32 bufferDeviceAddressMultiDevice {};

	constexpr PhysicalDeviceBufferDeviceAddressFeatures(Bool32 xbufferDeviceAddress = {}, Bool32 xbufferDeviceAddressCaptureReplay = {}, Bool32 xbufferDeviceAddressMultiDevice = {}) : bufferDeviceAddress(xbufferDeviceAddress), bufferDeviceAddressCaptureReplay(xbufferDeviceAddressCaptureReplay), bufferDeviceAddressMultiDevice(xbufferDeviceAddressMultiDevice) {}

	const VkPhysicalDeviceBufferDeviceAddressFeatures& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceBufferDeviceAddressFeatures&>(*this); }
	VkPhysicalDeviceBufferDeviceAddressFeatures& vkHandle() { return reinterpret_cast<VkPhysicalDeviceBufferDeviceAddressFeatures&>(*this); }

	operator const VkPhysicalDeviceBufferDeviceAddressFeatures&() const { return vkHandle(); };
	operator VkPhysicalDeviceBufferDeviceAddressFeatures&() { return vkHandle(); };
};

struct BufferDeviceAddressInfo {
	StructureType sType {StructureType::bufferDeviceAddressInfo};
	const void* pNext {};
	Buffer buffer {};

	constexpr BufferDeviceAddressInfo(Buffer xbuffer = {}) : buffer(xbuffer) {}

	const VkBufferDeviceAddressInfo& vkHandle() const { return reinterpret_cast<const VkBufferDeviceAddressInfo&>(*this); }
	VkBufferDeviceAddressInfo& vkHandle() { return reinterpret_cast<VkBufferDeviceAddressInfo&>(*this); }

	operator const VkBufferDeviceAddressInfo&() const { return vkHandle(); };
	operator VkBufferDeviceAddressInfo&() { return vkHandle(); };
};

struct BufferOpaqueCaptureAddressCreateInfo {
	StructureType sType {StructureType::bufferOpaqueCaptureAddressCreateInfo};
	const void* pNext {};
	uint64_t opaqueCaptureAddress {};

	constexpr BufferOpaqueCaptureAddressCreateInfo(uint64_t xopaqueCaptureAddress = {}) : opaqueCaptureAddress(xopaqueCaptureAddress) {}

	const VkBufferOpaqueCaptureAddressCreateInfo& vkHandle() const { return reinterpret_cast<const VkBufferOpaqueCaptureAddressCreateInfo&>(*this); }
	VkBufferOpaqueCaptureAddressCreateInfo& vkHandle() { return reinterpret_cast<VkBufferOpaqueCaptureAddressCreateInfo&>(*this); }

	operator const VkBufferOpaqueCaptureAddressCreateInfo&() const { return vkHandle(); };
	operator VkBufferOpaqueCaptureAddressCreateInfo&() { return vkHandle(); };
};

struct MemoryOpaqueCaptureAddressAllocateInfo {
	StructureType sType {StructureType::memoryOpaqueCaptureAddressAllocateInfo};
	const void* pNext {};
	uint64_t opaqueCaptureAddress {};

	constexpr MemoryOpaqueCaptureAddressAllocateInfo(uint64_t xopaqueCaptureAddress = {}) : opaqueCaptureAddress(xopaqueCaptureAddress) {}

	const VkMemoryOpaqueCaptureAddressAllocateInfo& vkHandle() const { return reinterpret_cast<const VkMemoryOpaqueCaptureAddressAllocateInfo&>(*this); }
	VkMemoryOpaqueCaptureAddressAllocateInfo& vkHandle() { return reinterpret_cast<VkMemoryOpaqueCaptureAddressAllocateInfo&>(*this); }

	operator const VkMemoryOpaqueCaptureAddressAllocateInfo&() const { return vkHandle(); };
	operator VkMemoryOpaqueCaptureAddressAllocateInfo&() { return vkHandle(); };
};

struct DeviceMemoryOpaqueCaptureAddressInfo {
	StructureType sType {StructureType::deviceMemoryOpaqueCaptureAddressInfo};
	const void* pNext {};
	DeviceMemory memory {};

	constexpr DeviceMemoryOpaqueCaptureAddressInfo(DeviceMemory xmemory = {}) : memory(xmemory) {}

	const VkDeviceMemoryOpaqueCaptureAddressInfo& vkHandle() const { return reinterpret_cast<const VkDeviceMemoryOpaqueCaptureAddressInfo&>(*this); }
	VkDeviceMemoryOpaqueCaptureAddressInfo& vkHandle() { return reinterpret_cast<VkDeviceMemoryOpaqueCaptureAddressInfo&>(*this); }

	operator const VkDeviceMemoryOpaqueCaptureAddressInfo&() const { return vkHandle(); };
	operator VkDeviceMemoryOpaqueCaptureAddressInfo&() { return vkHandle(); };
};


struct PhysicalDeviceSubgroupProperties {
	StructureType sType {StructureType::physicalDeviceSubgroupProperties};
	void* pNext {};
	uint32_t subgroupSize {};
	ShaderStageFlags supportedStages {};
	SubgroupFeatureFlags supportedOperations {};
	Bool32 quadOperationsInAllStages {};

	const VkPhysicalDeviceSubgroupProperties& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceSubgroupProperties&>(*this); }
	VkPhysicalDeviceSubgroupProperties& vkHandle() { return reinterpret_cast<VkPhysicalDeviceSubgroupProperties&>(*this); }

	operator const VkPhysicalDeviceSubgroupProperties&() const { return vkHandle(); };
	operator VkPhysicalDeviceSubgroupProperties&() { return vkHandle(); };
};

struct BindBufferMemoryInfo {
	StructureType sType {StructureType::bindBufferMemoryInfo};
	const void* pNext {};
	Buffer buffer {};
	DeviceMemory memory {};
	DeviceSize memoryOffset {};

	constexpr BindBufferMemoryInfo(Buffer xbuffer = {}, DeviceMemory xmemory = {}, DeviceSize xmemoryOffset = {}) : buffer(xbuffer), memory(xmemory), memoryOffset(xmemoryOffset) {}

	const VkBindBufferMemoryInfo& vkHandle() const { return reinterpret_cast<const VkBindBufferMemoryInfo&>(*this); }
	VkBindBufferMemoryInfo& vkHandle() { return reinterpret_cast<VkBindBufferMemoryInfo&>(*this); }

	operator const VkBindBufferMemoryInfo&() const { return vkHandle(); };
	operator VkBindBufferMemoryInfo&() { return vkHandle(); };
};

struct BindImageMemoryInfo {
	StructureType sType {StructureType::bindImageMemoryInfo};
	const void* pNext {};
	Image image {};
	DeviceMemory memory {};
	DeviceSize memoryOffset {};

	constexpr BindImageMemoryInfo(Image ximage = {}, DeviceMemory xmemory = {}, DeviceSize xmemoryOffset = {}) : image(ximage), memory(xmemory), memoryOffset(xmemoryOffset) {}

	const VkBindImageMemoryInfo& vkHandle() const { return reinterpret_cast<const VkBindImageMemoryInfo&>(*this); }
	VkBindImageMemoryInfo& vkHandle() { return reinterpret_cast<VkBindImageMemoryInfo&>(*this); }

	operator const VkBindImageMemoryInfo&() const { return vkHandle(); };
	operator VkBindImageMemoryInfo&() { return vkHandle(); };
};

struct PhysicalDevice16BitStorageFeatures {
	StructureType sType {StructureType::physicalDevice16bitStorageFeatures};
	void* pNext {};
	Bool32 storageBuffer16BitAccess {};
	Bool32 uniformAndStorageBuffer16BitAccess {};
	Bool32 storagePushConstant16 {};
	Bool32 storageInputOutput16 {};

	constexpr PhysicalDevice16BitStorageFeatures(Bool32 xstorageBuffer16BitAccess = {}, Bool32 xuniformAndStorageBuffer16BitAccess = {}, Bool32 xstoragePushConstant16 = {}, Bool32 xstorageInputOutput16 = {}) : storageBuffer16BitAccess(xstorageBuffer16BitAccess), uniformAndStorageBuffer16BitAccess(xuniformAndStorageBuffer16BitAccess), storagePushConstant16(xstoragePushConstant16), storageInputOutput16(xstorageInputOutput16) {}

	const VkPhysicalDevice16BitStorageFeatures& vkHandle() const { return reinterpret_cast<const VkPhysicalDevice16BitStorageFeatures&>(*this); }
	VkPhysicalDevice16BitStorageFeatures& vkHandle() { return reinterpret_cast<VkPhysicalDevice16BitStorageFeatures&>(*this); }

	operator const VkPhysicalDevice16BitStorageFeatures&() const { return vkHandle(); };
	operator VkPhysicalDevice16BitStorageFeatures&() { return vkHandle(); };
};

struct MemoryDedicatedRequirements {
	StructureType sType {StructureType::memoryDedicatedRequirements};
	void* pNext {};
	Bool32 prefersDedicatedAllocation {};
	Bool32 requiresDedicatedAllocation {};

	const VkMemoryDedicatedRequirements& vkHandle() const { return reinterpret_cast<const VkMemoryDedicatedRequirements&>(*this); }
	VkMemoryDedicatedRequirements& vkHandle() { return reinterpret_cast<VkMemoryDedicatedRequirements&>(*this); }

	operator const VkMemoryDedicatedRequirements&() const { return vkHandle(); };
	operator VkMemoryDedicatedRequirements&() { return vkHandle(); };
};

struct MemoryDedicatedAllocateInfo {
	StructureType sType {StructureType::memoryDedicatedAllocateInfo};
	const void* pNext {};
	Image image {};
	Buffer buffer {};

	constexpr MemoryDedicatedAllocateInfo(Image ximage = {}, Buffer xbuffer = {}) : image(ximage), buffer(xbuffer) {}

	const VkMemoryDedicatedAllocateInfo& vkHandle() const { return reinterpret_cast<const VkMemoryDedicatedAllocateInfo&>(*this); }
	VkMemoryDedicatedAllocateInfo& vkHandle() { return reinterpret_cast<VkMemoryDedicatedAllocateInfo&>(*this); }

	operator const VkMemoryDedicatedAllocateInfo&() const { return vkHandle(); };
	operator VkMemoryDedicatedAllocateInfo&() { return vkHandle(); };
};

struct MemoryAllocateFlagsInfo {
	StructureType sType {StructureType::memoryAllocateFlagsInfo};
	const void* pNext {};
	MemoryAllocateFlags flags {};
	uint32_t deviceMask {};

	constexpr MemoryAllocateFlagsInfo(MemoryAllocateFlags xflags = {}, uint32_t xdeviceMask = {}) : flags(xflags), deviceMask(xdeviceMask) {}

	const VkMemoryAllocateFlagsInfo& vkHandle() const { return reinterpret_cast<const VkMemoryAllocateFlagsInfo&>(*this); }
	VkMemoryAllocateFlagsInfo& vkHandle() { return reinterpret_cast<VkMemoryAllocateFlagsInfo&>(*this); }

	operator const VkMemoryAllocateFlagsInfo&() const { return vkHandle(); };
	operator VkMemoryAllocateFlagsInfo&() { return vkHandle(); };
};

struct DeviceGroupRenderPassBeginInfo {
	StructureType sType {StructureType::deviceGroupRenderPassBeginInfo};
	const void* pNext {};
	uint32_t deviceMask {};
	uint32_t deviceRenderAreaCount {};
	const Rect2D* pDeviceRenderAreas {};

	constexpr DeviceGroupRenderPassBeginInfo(uint32_t xdeviceMask = {}, uint32_t xdeviceRenderAreaCount = {}, const Rect2D* xpDeviceRenderAreas = {}) : deviceMask(xdeviceMask), deviceRenderAreaCount(xdeviceRenderAreaCount), pDeviceRenderAreas(xpDeviceRenderAreas) {}

	const VkDeviceGroupRenderPassBeginInfo& vkHandle() const { return reinterpret_cast<const VkDeviceGroupRenderPassBeginInfo&>(*this); }
	VkDeviceGroupRenderPassBeginInfo& vkHandle() { return reinterpret_cast<VkDeviceGroupRenderPassBeginInfo&>(*this); }

	operator const VkDeviceGroupRenderPassBeginInfo&() const { return vkHandle(); };
	operator VkDeviceGroupRenderPassBeginInfo&() { return vkHandle(); };
};

struct DeviceGroupCommandBufferBeginInfo {
	StructureType sType {StructureType::deviceGroupCommandBufferBeginInfo};
	const void* pNext {};
	uint32_t deviceMask {};

	constexpr DeviceGroupCommandBufferBeginInfo(uint32_t xdeviceMask = {}) : deviceMask(xdeviceMask) {}

	const VkDeviceGroupCommandBufferBeginInfo& vkHandle() const { return reinterpret_cast<const VkDeviceGroupCommandBufferBeginInfo&>(*this); }
	VkDeviceGroupCommandBufferBeginInfo& vkHandle() { return reinterpret_cast<VkDeviceGroupCommandBufferBeginInfo&>(*this); }

	operator const VkDeviceGroupCommandBufferBeginInfo&() const { return vkHandle(); };
	operator VkDeviceGroupCommandBufferBeginInfo&() { return vkHandle(); };
};

struct DeviceGroupSubmitInfo {
	StructureType sType {StructureType::deviceGroupSubmitInfo};
	const void* pNext {};
	uint32_t waitSemaphoreCount {};
	const uint32_t* pWaitSemaphoreDeviceIndices {};
	uint32_t commandBufferCount {};
	const uint32_t* pCommandBufferDeviceMasks {};
	uint32_t signalSemaphoreCount {};
	const uint32_t* pSignalSemaphoreDeviceIndices {};

	constexpr DeviceGroupSubmitInfo(uint32_t xwaitSemaphoreCount = {}, const uint32_t* xpWaitSemaphoreDeviceIndices = {}, uint32_t xcommandBufferCount = {}, const uint32_t* xpCommandBufferDeviceMasks = {}, uint32_t xsignalSemaphoreCount = {}, const uint32_t* xpSignalSemaphoreDeviceIndices = {}) : waitSemaphoreCount(xwaitSemaphoreCount), pWaitSemaphoreDeviceIndices(xpWaitSemaphoreDeviceIndices), commandBufferCount(xcommandBufferCount), pCommandBufferDeviceMasks(xpCommandBufferDeviceMasks), signalSemaphoreCount(xsignalSemaphoreCount), pSignalSemaphoreDeviceIndices(xpSignalSemaphoreDeviceIndices) {}

	const VkDeviceGroupSubmitInfo& vkHandle() const { return reinterpret_cast<const VkDeviceGroupSubmitInfo&>(*this); }
	VkDeviceGroupSubmitInfo& vkHandle() { return reinterpret_cast<VkDeviceGroupSubmitInfo&>(*this); }

	operator const VkDeviceGroupSubmitInfo&() const { return vkHandle(); };
	operator VkDeviceGroupSubmitInfo&() { return vkHandle(); };
};

struct DeviceGroupBindSparseInfo {
	StructureType sType {StructureType::deviceGroupBindSparseInfo};
	const void* pNext {};
	uint32_t resourceDeviceIndex {};
	uint32_t memoryDeviceIndex {};

	constexpr DeviceGroupBindSparseInfo(uint32_t xresourceDeviceIndex = {}, uint32_t xmemoryDeviceIndex = {}) : resourceDeviceIndex(xresourceDeviceIndex), memoryDeviceIndex(xmemoryDeviceIndex) {}

	const VkDeviceGroupBindSparseInfo& vkHandle() const { return reinterpret_cast<const VkDeviceGroupBindSparseInfo&>(*this); }
	VkDeviceGroupBindSparseInfo& vkHandle() { return reinterpret_cast<VkDeviceGroupBindSparseInfo&>(*this); }

	operator const VkDeviceGroupBindSparseInfo&() const { return vkHandle(); };
	operator VkDeviceGroupBindSparseInfo&() { return vkHandle(); };
};

struct BindBufferMemoryDeviceGroupInfo {
	StructureType sType {StructureType::bindBufferMemoryDeviceGroupInfo};
	const void* pNext {};
	uint32_t deviceIndexCount {};
	const uint32_t* pDeviceIndices {};

	constexpr BindBufferMemoryDeviceGroupInfo(uint32_t xdeviceIndexCount = {}, const uint32_t* xpDeviceIndices = {}) : deviceIndexCount(xdeviceIndexCount), pDeviceIndices(xpDeviceIndices) {}

	const VkBindBufferMemoryDeviceGroupInfo& vkHandle() const { return reinterpret_cast<const VkBindBufferMemoryDeviceGroupInfo&>(*this); }
	VkBindBufferMemoryDeviceGroupInfo& vkHandle() { return reinterpret_cast<VkBindBufferMemoryDeviceGroupInfo&>(*this); }

	operator const VkBindBufferMemoryDeviceGroupInfo&() const { return vkHandle(); };
	operator VkBindBufferMemoryDeviceGroupInfo&() { return vkHandle(); };
};

struct BindImageMemoryDeviceGroupInfo {
	StructureType sType {StructureType::bindImageMemoryDeviceGroupInfo};
	const void* pNext {};
	uint32_t deviceIndexCount {};
	const uint32_t* pDeviceIndices {};
	uint32_t splitInstanceBindRegionCount {};
	const Rect2D* pSplitInstanceBindRegions {};

	constexpr BindImageMemoryDeviceGroupInfo(uint32_t xdeviceIndexCount = {}, const uint32_t* xpDeviceIndices = {}, uint32_t xsplitInstanceBindRegionCount = {}, const Rect2D* xpSplitInstanceBindRegions = {}) : deviceIndexCount(xdeviceIndexCount), pDeviceIndices(xpDeviceIndices), splitInstanceBindRegionCount(xsplitInstanceBindRegionCount), pSplitInstanceBindRegions(xpSplitInstanceBindRegions) {}

	const VkBindImageMemoryDeviceGroupInfo& vkHandle() const { return reinterpret_cast<const VkBindImageMemoryDeviceGroupInfo&>(*this); }
	VkBindImageMemoryDeviceGroupInfo& vkHandle() { return reinterpret_cast<VkBindImageMemoryDeviceGroupInfo&>(*this); }

	operator const VkBindImageMemoryDeviceGroupInfo&() const { return vkHandle(); };
	operator VkBindImageMemoryDeviceGroupInfo&() { return vkHandle(); };
};

struct PhysicalDeviceGroupProperties {
	StructureType sType {StructureType::physicalDeviceGroupProperties};
	void* pNext {};
	uint32_t physicalDeviceCount {};
	std::array<PhysicalDevice, maxDeviceGroupSize> physicalDevices {};
	Bool32 subsetAllocation {};

	const VkPhysicalDeviceGroupProperties& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceGroupProperties&>(*this); }
	VkPhysicalDeviceGroupProperties& vkHandle() { return reinterpret_cast<VkPhysicalDeviceGroupProperties&>(*this); }

	operator const VkPhysicalDeviceGroupProperties&() const { return vkHandle(); };
	operator VkPhysicalDeviceGroupProperties&() { return vkHandle(); };
};

struct DeviceGroupDeviceCreateInfo {
	StructureType sType {StructureType::deviceGroupDeviceCreateInfo};
	const void* pNext {};
	uint32_t physicalDeviceCount {};
	const PhysicalDevice* pPhysicalDevices {};

	constexpr DeviceGroupDeviceCreateInfo(uint32_t xphysicalDeviceCount = {}, const PhysicalDevice* xpPhysicalDevices = {}) : physicalDeviceCount(xphysicalDeviceCount), pPhysicalDevices(xpPhysicalDevices) {}

	const VkDeviceGroupDeviceCreateInfo& vkHandle() const { return reinterpret_cast<const VkDeviceGroupDeviceCreateInfo&>(*this); }
	VkDeviceGroupDeviceCreateInfo& vkHandle() { return reinterpret_cast<VkDeviceGroupDeviceCreateInfo&>(*this); }

	operator const VkDeviceGroupDeviceCreateInfo&() const { return vkHandle(); };
	operator VkDeviceGroupDeviceCreateInfo&() { return vkHandle(); };
};

struct BufferMemoryRequirementsInfo2 {
	StructureType sType {StructureType::bufferMemoryRequirementsInfo2};
	const void* pNext {};
	Buffer buffer {};

	constexpr BufferMemoryRequirementsInfo2(Buffer xbuffer = {}) : buffer(xbuffer) {}

	const VkBufferMemoryRequirementsInfo2& vkHandle() const { return reinterpret_cast<const VkBufferMemoryRequirementsInfo2&>(*this); }
	VkBufferMemoryRequirementsInfo2& vkHandle() { return reinterpret_cast<VkBufferMemoryRequirementsInfo2&>(*this); }

	operator const VkBufferMemoryRequirementsInfo2&() const { return vkHandle(); };
	operator VkBufferMemoryRequirementsInfo2&() { return vkHandle(); };
};

struct ImageMemoryRequirementsInfo2 {
	StructureType sType {StructureType::imageMemoryRequirementsInfo2};
	const void* pNext {};
	Image image {};

	constexpr ImageMemoryRequirementsInfo2(Image ximage = {}) : image(ximage) {}

	const VkImageMemoryRequirementsInfo2& vkHandle() const { return reinterpret_cast<const VkImageMemoryRequirementsInfo2&>(*this); }
	VkImageMemoryRequirementsInfo2& vkHandle() { return reinterpret_cast<VkImageMemoryRequirementsInfo2&>(*this); }

	operator const VkImageMemoryRequirementsInfo2&() const { return vkHandle(); };
	operator VkImageMemoryRequirementsInfo2&() { return vkHandle(); };
};

struct ImageSparseMemoryRequirementsInfo2 {
	StructureType sType {StructureType::imageSparseMemoryRequirementsInfo2};
	const void* pNext {};
	Image image {};

	constexpr ImageSparseMemoryRequirementsInfo2(Image ximage = {}) : image(ximage) {}

	const VkImageSparseMemoryRequirementsInfo2& vkHandle() const { return reinterpret_cast<const VkImageSparseMemoryRequirementsInfo2&>(*this); }
	VkImageSparseMemoryRequirementsInfo2& vkHandle() { return reinterpret_cast<VkImageSparseMemoryRequirementsInfo2&>(*this); }

	operator const VkImageSparseMemoryRequirementsInfo2&() const { return vkHandle(); };
	operator VkImageSparseMemoryRequirementsInfo2&() { return vkHandle(); };
};

struct MemoryRequirements {
	DeviceSize size {};
	DeviceSize alignment {};
	uint32_t memoryTypeBits {};

	const VkMemoryRequirements& vkHandle() const { return reinterpret_cast<const VkMemoryRequirements&>(*this); }
	VkMemoryRequirements& vkHandle() { return reinterpret_cast<VkMemoryRequirements&>(*this); }

	operator const VkMemoryRequirements&() const { return vkHandle(); };
	operator VkMemoryRequirements&() { return vkHandle(); };
};

struct MemoryRequirements2 {
	StructureType sType {StructureType::memoryRequirements2};
	void* pNext {};
	MemoryRequirements memoryRequirements {};

	const VkMemoryRequirements2& vkHandle() const { return reinterpret_cast<const VkMemoryRequirements2&>(*this); }
	VkMemoryRequirements2& vkHandle() { return reinterpret_cast<VkMemoryRequirements2&>(*this); }

	operator const VkMemoryRequirements2&() const { return vkHandle(); };
	operator VkMemoryRequirements2&() { return vkHandle(); };
};

struct Extent3D {
	uint32_t width {};
	uint32_t height {};
	uint32_t depth {};

	const VkExtent3D& vkHandle() const { return reinterpret_cast<const VkExtent3D&>(*this); }
	VkExtent3D& vkHandle() { return reinterpret_cast<VkExtent3D&>(*this); }

	operator const VkExtent3D&() const { return vkHandle(); };
	operator VkExtent3D&() { return vkHandle(); };
};

struct SparseImageFormatProperties {
	ImageAspectFlags aspectMask {};
	Extent3D imageGranularity {};
	SparseImageFormatFlags flags {};

	const VkSparseImageFormatProperties& vkHandle() const { return reinterpret_cast<const VkSparseImageFormatProperties&>(*this); }
	VkSparseImageFormatProperties& vkHandle() { return reinterpret_cast<VkSparseImageFormatProperties&>(*this); }

	operator const VkSparseImageFormatProperties&() const { return vkHandle(); };
	operator VkSparseImageFormatProperties&() { return vkHandle(); };
};

struct SparseImageMemoryRequirements {
	SparseImageFormatProperties formatProperties {};
	uint32_t imageMipTailFirstLod {};
	DeviceSize imageMipTailSize {};
	DeviceSize imageMipTailOffset {};
	DeviceSize imageMipTailStride {};

	const VkSparseImageMemoryRequirements& vkHandle() const { return reinterpret_cast<const VkSparseImageMemoryRequirements&>(*this); }
	VkSparseImageMemoryRequirements& vkHandle() { return reinterpret_cast<VkSparseImageMemoryRequirements&>(*this); }

	operator const VkSparseImageMemoryRequirements&() const { return vkHandle(); };
	operator VkSparseImageMemoryRequirements&() { return vkHandle(); };
};

struct SparseImageMemoryRequirements2 {
	StructureType sType {StructureType::sparseImageMemoryRequirements2};
	void* pNext {};
	SparseImageMemoryRequirements memoryRequirements {};

	const VkSparseImageMemoryRequirements2& vkHandle() const { return reinterpret_cast<const VkSparseImageMemoryRequirements2&>(*this); }
	VkSparseImageMemoryRequirements2& vkHandle() { return reinterpret_cast<VkSparseImageMemoryRequirements2&>(*this); }

	operator const VkSparseImageMemoryRequirements2&() const { return vkHandle(); };
	operator VkSparseImageMemoryRequirements2&() { return vkHandle(); };
};

struct PhysicalDeviceFeatures {
	Bool32 robustBufferAccess {};
	Bool32 fullDrawIndexUint32 {};
	Bool32 imageCubeArray {};
	Bool32 independentBlend {};
	Bool32 geometryShader {};
	Bool32 tessellationShader {};
	Bool32 sampleRateShading {};
	Bool32 dualSrcBlend {};
	Bool32 logicOp {};
	Bool32 multiDrawIndirect {};
	Bool32 drawIndirectFirstInstance {};
	Bool32 depthClamp {};
	Bool32 depthBiasClamp {};
	Bool32 fillModeNonSolid {};
	Bool32 depthBounds {};
	Bool32 wideLines {};
	Bool32 largePoints {};
	Bool32 alphaToOne {};
	Bool32 multiViewport {};
	Bool32 samplerAnisotropy {};
	Bool32 textureCompressionETC2 {};
	Bool32 textureCompressionASTC_LDR {};
	Bool32 textureCompressionBC {};
	Bool32 occlusionQueryPrecise {};
	Bool32 pipelineStatisticsQuery {};
	Bool32 vertexPipelineStoresAndAtomics {};
	Bool32 fragmentStoresAndAtomics {};
	Bool32 shaderTessellationAndGeometryPointSize {};
	Bool32 shaderImageGatherExtended {};
	Bool32 shaderStorageImageExtendedFormats {};
	Bool32 shaderStorageImageMultisample {};
	Bool32 shaderStorageImageReadWithoutFormat {};
	Bool32 shaderStorageImageWriteWithoutFormat {};
	Bool32 shaderUniformBufferArrayDynamicIndexing {};
	Bool32 shaderSampledImageArrayDynamicIndexing {};
	Bool32 shaderStorageBufferArrayDynamicIndexing {};
	Bool32 shaderStorageImageArrayDynamicIndexing {};
	Bool32 shaderClipDistance {};
	Bool32 shaderCullDistance {};
	Bool32 shaderFloat64 {};
	Bool32 shaderInt64 {};
	Bool32 shaderInt16 {};
	Bool32 shaderResourceResidency {};
	Bool32 shaderResourceMinLod {};
	Bool32 sparseBinding {};
	Bool32 sparseResidencyBuffer {};
	Bool32 sparseResidencyImage2D {};
	Bool32 sparseResidencyImage3D {};
	Bool32 sparseResidency2Samples {};
	Bool32 sparseResidency4Samples {};
	Bool32 sparseResidency8Samples {};
	Bool32 sparseResidency16Samples {};
	Bool32 sparseResidencyAliased {};
	Bool32 variableMultisampleRate {};
	Bool32 inheritedQueries {};

	const VkPhysicalDeviceFeatures& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceFeatures&>(*this); }
	VkPhysicalDeviceFeatures& vkHandle() { return reinterpret_cast<VkPhysicalDeviceFeatures&>(*this); }

	operator const VkPhysicalDeviceFeatures&() const { return vkHandle(); };
	operator VkPhysicalDeviceFeatures&() { return vkHandle(); };
};

struct PhysicalDeviceFeatures2 {
	StructureType sType {StructureType::physicalDeviceFeatures2};
	void* pNext {};
	PhysicalDeviceFeatures features {};

	constexpr PhysicalDeviceFeatures2(PhysicalDeviceFeatures xfeatures = {}) : features(xfeatures) {}

	const VkPhysicalDeviceFeatures2& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceFeatures2&>(*this); }
	VkPhysicalDeviceFeatures2& vkHandle() { return reinterpret_cast<VkPhysicalDeviceFeatures2&>(*this); }

	operator const VkPhysicalDeviceFeatures2&() const { return vkHandle(); };
	operator VkPhysicalDeviceFeatures2&() { return vkHandle(); };
};

struct PhysicalDeviceLimits {
	uint32_t maxImageDimension1D {};
	uint32_t maxImageDimension2D {};
	uint32_t maxImageDimension3D {};
	uint32_t maxImageDimensionCube {};
	uint32_t maxImageArrayLayers {};
	uint32_t maxTexelBufferElements {};
	uint32_t maxUniformBufferRange {};
	uint32_t maxStorageBufferRange {};
	uint32_t maxPushConstantsSize {};
	uint32_t maxMemoryAllocationCount {};
	uint32_t maxSamplerAllocationCount {};
	DeviceSize bufferImageGranularity {};
	DeviceSize sparseAddressSpaceSize {};
	uint32_t maxBoundDescriptorSets {};
	uint32_t maxPerStageDescriptorSamplers {};
	uint32_t maxPerStageDescriptorUniformBuffers {};
	uint32_t maxPerStageDescriptorStorageBuffers {};
	uint32_t maxPerStageDescriptorSampledImages {};
	uint32_t maxPerStageDescriptorStorageImages {};
	uint32_t maxPerStageDescriptorInputAttachments {};
	uint32_t maxPerStageResources {};
	uint32_t maxDescriptorSetSamplers {};
	uint32_t maxDescriptorSetUniformBuffers {};
	uint32_t maxDescriptorSetUniformBuffersDynamic {};
	uint32_t maxDescriptorSetStorageBuffers {};
	uint32_t maxDescriptorSetStorageBuffersDynamic {};
	uint32_t maxDescriptorSetSampledImages {};
	uint32_t maxDescriptorSetStorageImages {};
	uint32_t maxDescriptorSetInputAttachments {};
	uint32_t maxVertexInputAttributes {};
	uint32_t maxVertexInputBindings {};
	uint32_t maxVertexInputAttributeOffset {};
	uint32_t maxVertexInputBindingStride {};
	uint32_t maxVertexOutputComponents {};
	uint32_t maxTessellationGenerationLevel {};
	uint32_t maxTessellationPatchSize {};
	uint32_t maxTessellationControlPerVertexInputComponents {};
	uint32_t maxTessellationControlPerVertexOutputComponents {};
	uint32_t maxTessellationControlPerPatchOutputComponents {};
	uint32_t maxTessellationControlTotalOutputComponents {};
	uint32_t maxTessellationEvaluationInputComponents {};
	uint32_t maxTessellationEvaluationOutputComponents {};
	uint32_t maxGeometryShaderInvocations {};
	uint32_t maxGeometryInputComponents {};
	uint32_t maxGeometryOutputComponents {};
	uint32_t maxGeometryOutputVertices {};
	uint32_t maxGeometryTotalOutputComponents {};
	uint32_t maxFragmentInputComponents {};
	uint32_t maxFragmentOutputAttachments {};
	uint32_t maxFragmentDualSrcAttachments {};
	uint32_t maxFragmentCombinedOutputResources {};
	uint32_t maxComputeSharedMemorySize {};
	std::array<uint32_t, 3> maxComputeWorkGroupCount {};
	uint32_t maxComputeWorkGroupInvocations {};
	std::array<uint32_t, 3> maxComputeWorkGroupSize {};
	uint32_t subPixelPrecisionBits {};
	uint32_t subTexelPrecisionBits {};
	uint32_t mipmapPrecisionBits {};
	uint32_t maxDrawIndexedIndexValue {};
	uint32_t maxDrawIndirectCount {};
	float maxSamplerLodBias {};
	float maxSamplerAnisotropy {};
	uint32_t maxViewports {};
	std::array<uint32_t, 2> maxViewportDimensions {};
	std::array<float, 2> viewportBoundsRange {};
	uint32_t viewportSubPixelBits {};
	size_t minMemoryMapAlignment {};
	DeviceSize minTexelBufferOffsetAlignment {};
	DeviceSize minUniformBufferOffsetAlignment {};
	DeviceSize minStorageBufferOffsetAlignment {};
	int32_t minTexelOffset {};
	uint32_t maxTexelOffset {};
	int32_t minTexelGatherOffset {};
	uint32_t maxTexelGatherOffset {};
	float minInterpolationOffset {};
	float maxInterpolationOffset {};
	uint32_t subPixelInterpolationOffsetBits {};
	uint32_t maxFramebufferWidth {};
	uint32_t maxFramebufferHeight {};
	uint32_t maxFramebufferLayers {};
	SampleCountFlags framebufferColorSampleCounts {};
	SampleCountFlags framebufferDepthSampleCounts {};
	SampleCountFlags framebufferStencilSampleCounts {};
	SampleCountFlags framebufferNoAttachmentsSampleCounts {};
	uint32_t maxColorAttachments {};
	SampleCountFlags sampledImageColorSampleCounts {};
	SampleCountFlags sampledImageIntegerSampleCounts {};
	SampleCountFlags sampledImageDepthSampleCounts {};
	SampleCountFlags sampledImageStencilSampleCounts {};
	SampleCountFlags storageImageSampleCounts {};
	uint32_t maxSampleMaskWords {};
	Bool32 timestampComputeAndGraphics {};
	float timestampPeriod {};
	uint32_t maxClipDistances {};
	uint32_t maxCullDistances {};
	uint32_t maxCombinedClipAndCullDistances {};
	uint32_t discreteQueuePriorities {};
	std::array<float, 2> pointSizeRange {};
	std::array<float, 2> lineWidthRange {};
	float pointSizeGranularity {};
	float lineWidthGranularity {};
	Bool32 strictLines {};
	Bool32 standardSampleLocations {};
	DeviceSize optimalBufferCopyOffsetAlignment {};
	DeviceSize optimalBufferCopyRowPitchAlignment {};
	DeviceSize nonCoherentAtomSize {};

	const VkPhysicalDeviceLimits& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceLimits&>(*this); }
	VkPhysicalDeviceLimits& vkHandle() { return reinterpret_cast<VkPhysicalDeviceLimits&>(*this); }

	operator const VkPhysicalDeviceLimits&() const { return vkHandle(); };
	operator VkPhysicalDeviceLimits&() { return vkHandle(); };
};

struct PhysicalDeviceSparseProperties {
	Bool32 residencyStandard2DBlockShape {};
	Bool32 residencyStandard2DMultisampleBlockShape {};
	Bool32 residencyStandard3DBlockShape {};
	Bool32 residencyAlignedMipSize {};
	Bool32 residencyNonResidentStrict {};

	const VkPhysicalDeviceSparseProperties& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceSparseProperties&>(*this); }
	VkPhysicalDeviceSparseProperties& vkHandle() { return reinterpret_cast<VkPhysicalDeviceSparseProperties&>(*this); }

	operator const VkPhysicalDeviceSparseProperties&() const { return vkHandle(); };
	operator VkPhysicalDeviceSparseProperties&() { return vkHandle(); };
};

struct PhysicalDeviceProperties {
	uint32_t apiVersion {};
	uint32_t driverVersion {};
	uint32_t vendorID {};
	uint32_t deviceID {};
	PhysicalDeviceType deviceType {};
	std::array<char, maxPhysicalDeviceNameSize> deviceName {};
	std::array<uint8_t, uuidSize> pipelineCacheUUID {};
	PhysicalDeviceLimits limits {};
	PhysicalDeviceSparseProperties sparseProperties {};

	const VkPhysicalDeviceProperties& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceProperties&>(*this); }
	VkPhysicalDeviceProperties& vkHandle() { return reinterpret_cast<VkPhysicalDeviceProperties&>(*this); }

	operator const VkPhysicalDeviceProperties&() const { return vkHandle(); };
	operator VkPhysicalDeviceProperties&() { return vkHandle(); };
};

struct PhysicalDeviceProperties2 {
	StructureType sType {StructureType::physicalDeviceProperties2};
	void* pNext {};
	PhysicalDeviceProperties properties {};

	const VkPhysicalDeviceProperties2& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceProperties2&>(*this); }
	VkPhysicalDeviceProperties2& vkHandle() { return reinterpret_cast<VkPhysicalDeviceProperties2&>(*this); }

	operator const VkPhysicalDeviceProperties2&() const { return vkHandle(); };
	operator VkPhysicalDeviceProperties2&() { return vkHandle(); };
};

struct FormatProperties {
	FormatFeatureFlags linearTilingFeatures {};
	FormatFeatureFlags optimalTilingFeatures {};
	FormatFeatureFlags bufferFeatures {};

	const VkFormatProperties& vkHandle() const { return reinterpret_cast<const VkFormatProperties&>(*this); }
	VkFormatProperties& vkHandle() { return reinterpret_cast<VkFormatProperties&>(*this); }

	operator const VkFormatProperties&() const { return vkHandle(); };
	operator VkFormatProperties&() { return vkHandle(); };
};

struct FormatProperties2 {
	StructureType sType {StructureType::formatProperties2};
	void* pNext {};
	FormatProperties formatProperties {};

	const VkFormatProperties2& vkHandle() const { return reinterpret_cast<const VkFormatProperties2&>(*this); }
	VkFormatProperties2& vkHandle() { return reinterpret_cast<VkFormatProperties2&>(*this); }

	operator const VkFormatProperties2&() const { return vkHandle(); };
	operator VkFormatProperties2&() { return vkHandle(); };
};

struct ImageFormatProperties {
	Extent3D maxExtent {};
	uint32_t maxMipLevels {};
	uint32_t maxArrayLayers {};
	SampleCountFlags sampleCounts {};
	DeviceSize maxResourceSize {};

	const VkImageFormatProperties& vkHandle() const { return reinterpret_cast<const VkImageFormatProperties&>(*this); }
	VkImageFormatProperties& vkHandle() { return reinterpret_cast<VkImageFormatProperties&>(*this); }

	operator const VkImageFormatProperties&() const { return vkHandle(); };
	operator VkImageFormatProperties&() { return vkHandle(); };
};

struct ImageFormatProperties2 {
	StructureType sType {StructureType::imageFormatProperties2};
	void* pNext {};
	ImageFormatProperties imageFormatProperties {};

	const VkImageFormatProperties2& vkHandle() const { return reinterpret_cast<const VkImageFormatProperties2&>(*this); }
	VkImageFormatProperties2& vkHandle() { return reinterpret_cast<VkImageFormatProperties2&>(*this); }

	operator const VkImageFormatProperties2&() const { return vkHandle(); };
	operator VkImageFormatProperties2&() { return vkHandle(); };
};

struct PhysicalDeviceImageFormatInfo2 {
	StructureType sType {StructureType::physicalDeviceImageFormatInfo2};
	const void* pNext {};
	Format format {};
	ImageType type {};
	ImageTiling tiling {};
	ImageUsageFlags usage {};
	ImageCreateFlags flags {};

	constexpr PhysicalDeviceImageFormatInfo2(Format xformat = {}, ImageType xtype = {}, ImageTiling xtiling = {}, ImageUsageFlags xusage = {}, ImageCreateFlags xflags = {}) : format(xformat), type(xtype), tiling(xtiling), usage(xusage), flags(xflags) {}

	const VkPhysicalDeviceImageFormatInfo2& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceImageFormatInfo2&>(*this); }
	VkPhysicalDeviceImageFormatInfo2& vkHandle() { return reinterpret_cast<VkPhysicalDeviceImageFormatInfo2&>(*this); }

	operator const VkPhysicalDeviceImageFormatInfo2&() const { return vkHandle(); };
	operator VkPhysicalDeviceImageFormatInfo2&() { return vkHandle(); };
};

struct QueueFamilyProperties {
	QueueFlags queueFlags {};
	uint32_t queueCount {};
	uint32_t timestampValidBits {};
	Extent3D minImageTransferGranularity {};

	const VkQueueFamilyProperties& vkHandle() const { return reinterpret_cast<const VkQueueFamilyProperties&>(*this); }
	VkQueueFamilyProperties& vkHandle() { return reinterpret_cast<VkQueueFamilyProperties&>(*this); }

	operator const VkQueueFamilyProperties&() const { return vkHandle(); };
	operator VkQueueFamilyProperties&() { return vkHandle(); };
};

struct QueueFamilyProperties2 {
	StructureType sType {StructureType::queueFamilyProperties2};
	void* pNext {};
	QueueFamilyProperties queueFamilyProperties {};

	const VkQueueFamilyProperties2& vkHandle() const { return reinterpret_cast<const VkQueueFamilyProperties2&>(*this); }
	VkQueueFamilyProperties2& vkHandle() { return reinterpret_cast<VkQueueFamilyProperties2&>(*this); }

	operator const VkQueueFamilyProperties2&() const { return vkHandle(); };
	operator VkQueueFamilyProperties2&() { return vkHandle(); };
};

struct MemoryType {
	MemoryPropertyFlags propertyFlags {};
	uint32_t heapIndex {};

	const VkMemoryType& vkHandle() const { return reinterpret_cast<const VkMemoryType&>(*this); }
	VkMemoryType& vkHandle() { return reinterpret_cast<VkMemoryType&>(*this); }

	operator const VkMemoryType&() const { return vkHandle(); };
	operator VkMemoryType&() { return vkHandle(); };
};

struct MemoryHeap {
	DeviceSize size {};
	MemoryHeapFlags flags {};

	const VkMemoryHeap& vkHandle() const { return reinterpret_cast<const VkMemoryHeap&>(*this); }
	VkMemoryHeap& vkHandle() { return reinterpret_cast<VkMemoryHeap&>(*this); }

	operator const VkMemoryHeap&() const { return vkHandle(); };
	operator VkMemoryHeap&() { return vkHandle(); };
};

struct PhysicalDeviceMemoryProperties {
	uint32_t memoryTypeCount {};
	std::array<MemoryType, maxMemoryTypes> memoryTypes {};
	uint32_t memoryHeapCount {};
	std::array<MemoryHeap, maxMemoryHeaps> memoryHeaps {};

	const VkPhysicalDeviceMemoryProperties& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceMemoryProperties&>(*this); }
	VkPhysicalDeviceMemoryProperties& vkHandle() { return reinterpret_cast<VkPhysicalDeviceMemoryProperties&>(*this); }

	operator const VkPhysicalDeviceMemoryProperties&() const { return vkHandle(); };
	operator VkPhysicalDeviceMemoryProperties&() { return vkHandle(); };
};

struct PhysicalDeviceMemoryProperties2 {
	StructureType sType {StructureType::physicalDeviceMemoryProperties2};
	void* pNext {};
	PhysicalDeviceMemoryProperties memoryProperties {};

	const VkPhysicalDeviceMemoryProperties2& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceMemoryProperties2&>(*this); }
	VkPhysicalDeviceMemoryProperties2& vkHandle() { return reinterpret_cast<VkPhysicalDeviceMemoryProperties2&>(*this); }

	operator const VkPhysicalDeviceMemoryProperties2&() const { return vkHandle(); };
	operator VkPhysicalDeviceMemoryProperties2&() { return vkHandle(); };
};

struct SparseImageFormatProperties2 {
	StructureType sType {StructureType::sparseImageFormatProperties2};
	void* pNext {};
	SparseImageFormatProperties properties {};

	const VkSparseImageFormatProperties2& vkHandle() const { return reinterpret_cast<const VkSparseImageFormatProperties2&>(*this); }
	VkSparseImageFormatProperties2& vkHandle() { return reinterpret_cast<VkSparseImageFormatProperties2&>(*this); }

	operator const VkSparseImageFormatProperties2&() const { return vkHandle(); };
	operator VkSparseImageFormatProperties2&() { return vkHandle(); };
};

struct PhysicalDeviceSparseImageFormatInfo2 {
	StructureType sType {StructureType::physicalDeviceSparseImageFormatInfo2};
	const void* pNext {};
	Format format {};
	ImageType type {};
	SampleCountBits samples {};
	ImageUsageFlags usage {};
	ImageTiling tiling {};

	constexpr PhysicalDeviceSparseImageFormatInfo2(Format xformat = {}, ImageType xtype = {}, SampleCountBits xsamples = {}, ImageUsageFlags xusage = {}, ImageTiling xtiling = {}) : format(xformat), type(xtype), samples(xsamples), usage(xusage), tiling(xtiling) {}

	const VkPhysicalDeviceSparseImageFormatInfo2& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceSparseImageFormatInfo2&>(*this); }
	VkPhysicalDeviceSparseImageFormatInfo2& vkHandle() { return reinterpret_cast<VkPhysicalDeviceSparseImageFormatInfo2&>(*this); }

	operator const VkPhysicalDeviceSparseImageFormatInfo2&() const { return vkHandle(); };
	operator VkPhysicalDeviceSparseImageFormatInfo2&() { return vkHandle(); };
};

struct PhysicalDevicePointClippingProperties {
	StructureType sType {StructureType::physicalDevicePointClippingProperties};
	void* pNext {};
	PointClippingBehavior pointClippingBehavior {};

	const VkPhysicalDevicePointClippingProperties& vkHandle() const { return reinterpret_cast<const VkPhysicalDevicePointClippingProperties&>(*this); }
	VkPhysicalDevicePointClippingProperties& vkHandle() { return reinterpret_cast<VkPhysicalDevicePointClippingProperties&>(*this); }

	operator const VkPhysicalDevicePointClippingProperties&() const { return vkHandle(); };
	operator VkPhysicalDevicePointClippingProperties&() { return vkHandle(); };
};

struct InputAttachmentAspectReference {
	uint32_t subpass {};
	uint32_t inputAttachmentIndex {};
	ImageAspectFlags aspectMask {};

	const VkInputAttachmentAspectReference& vkHandle() const { return reinterpret_cast<const VkInputAttachmentAspectReference&>(*this); }
	VkInputAttachmentAspectReference& vkHandle() { return reinterpret_cast<VkInputAttachmentAspectReference&>(*this); }

	operator const VkInputAttachmentAspectReference&() const { return vkHandle(); };
	operator VkInputAttachmentAspectReference&() { return vkHandle(); };
};

struct RenderPassInputAttachmentAspectCreateInfo {
	StructureType sType {StructureType::renderPassInputAttachmentAspectCreateInfo};
	const void* pNext {};
	uint32_t aspectReferenceCount {};
	const InputAttachmentAspectReference* pAspectReferences {};

	constexpr RenderPassInputAttachmentAspectCreateInfo(uint32_t xaspectReferenceCount = {}, const InputAttachmentAspectReference* xpAspectReferences = {}) : aspectReferenceCount(xaspectReferenceCount), pAspectReferences(xpAspectReferences) {}

	const VkRenderPassInputAttachmentAspectCreateInfo& vkHandle() const { return reinterpret_cast<const VkRenderPassInputAttachmentAspectCreateInfo&>(*this); }
	VkRenderPassInputAttachmentAspectCreateInfo& vkHandle() { return reinterpret_cast<VkRenderPassInputAttachmentAspectCreateInfo&>(*this); }

	operator const VkRenderPassInputAttachmentAspectCreateInfo&() const { return vkHandle(); };
	operator VkRenderPassInputAttachmentAspectCreateInfo&() { return vkHandle(); };
};

struct ImageViewUsageCreateInfo {
	StructureType sType {StructureType::imageViewUsageCreateInfo};
	const void* pNext {};
	ImageUsageFlags usage {};

	constexpr ImageViewUsageCreateInfo(ImageUsageFlags xusage = {}) : usage(xusage) {}

	const VkImageViewUsageCreateInfo& vkHandle() const { return reinterpret_cast<const VkImageViewUsageCreateInfo&>(*this); }
	VkImageViewUsageCreateInfo& vkHandle() { return reinterpret_cast<VkImageViewUsageCreateInfo&>(*this); }

	operator const VkImageViewUsageCreateInfo&() const { return vkHandle(); };
	operator VkImageViewUsageCreateInfo&() { return vkHandle(); };
};

struct PipelineTessellationDomainOriginStateCreateInfo {
	StructureType sType {StructureType::pipelineTessellationDomainOriginStateCreateInfo};
	const void* pNext {};
	TessellationDomainOrigin domainOrigin {};

	constexpr PipelineTessellationDomainOriginStateCreateInfo(TessellationDomainOrigin xdomainOrigin = {}) : domainOrigin(xdomainOrigin) {}

	const VkPipelineTessellationDomainOriginStateCreateInfo& vkHandle() const { return reinterpret_cast<const VkPipelineTessellationDomainOriginStateCreateInfo&>(*this); }
	VkPipelineTessellationDomainOriginStateCreateInfo& vkHandle() { return reinterpret_cast<VkPipelineTessellationDomainOriginStateCreateInfo&>(*this); }

	operator const VkPipelineTessellationDomainOriginStateCreateInfo&() const { return vkHandle(); };
	operator VkPipelineTessellationDomainOriginStateCreateInfo&() { return vkHandle(); };
};

struct RenderPassMultiviewCreateInfo {
	StructureType sType {StructureType::renderPassMultiviewCreateInfo};
	const void* pNext {};
	uint32_t subpassCount {};
	const uint32_t* pViewMasks {};
	uint32_t dependencyCount {};
	const int32_t* pViewOffsets {};
	uint32_t correlationMaskCount {};
	const uint32_t* pCorrelationMasks {};

	constexpr RenderPassMultiviewCreateInfo(uint32_t xsubpassCount = {}, const uint32_t* xpViewMasks = {}, uint32_t xdependencyCount = {}, const int32_t* xpViewOffsets = {}, uint32_t xcorrelationMaskCount = {}, const uint32_t* xpCorrelationMasks = {}) : subpassCount(xsubpassCount), pViewMasks(xpViewMasks), dependencyCount(xdependencyCount), pViewOffsets(xpViewOffsets), correlationMaskCount(xcorrelationMaskCount), pCorrelationMasks(xpCorrelationMasks) {}

	const VkRenderPassMultiviewCreateInfo& vkHandle() const { return reinterpret_cast<const VkRenderPassMultiviewCreateInfo&>(*this); }
	VkRenderPassMultiviewCreateInfo& vkHandle() { return reinterpret_cast<VkRenderPassMultiviewCreateInfo&>(*this); }

	operator const VkRenderPassMultiviewCreateInfo&() const { return vkHandle(); };
	operator VkRenderPassMultiviewCreateInfo&() { return vkHandle(); };
};

struct PhysicalDeviceMultiviewFeatures {
	StructureType sType {StructureType::physicalDeviceMultiviewFeatures};
	void* pNext {};
	Bool32 multiview {};
	Bool32 multiviewGeometryShader {};
	Bool32 multiviewTessellationShader {};

	constexpr PhysicalDeviceMultiviewFeatures(Bool32 xmultiview = {}, Bool32 xmultiviewGeometryShader = {}, Bool32 xmultiviewTessellationShader = {}) : multiview(xmultiview), multiviewGeometryShader(xmultiviewGeometryShader), multiviewTessellationShader(xmultiviewTessellationShader) {}

	const VkPhysicalDeviceMultiviewFeatures& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceMultiviewFeatures&>(*this); }
	VkPhysicalDeviceMultiviewFeatures& vkHandle() { return reinterpret_cast<VkPhysicalDeviceMultiviewFeatures&>(*this); }

	operator const VkPhysicalDeviceMultiviewFeatures&() const { return vkHandle(); };
	operator VkPhysicalDeviceMultiviewFeatures&() { return vkHandle(); };
};

struct PhysicalDeviceMultiviewProperties {
	StructureType sType {StructureType::physicalDeviceMultiviewProperties};
	void* pNext {};
	uint32_t maxMultiviewViewCount {};
	uint32_t maxMultiviewInstanceIndex {};

	const VkPhysicalDeviceMultiviewProperties& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceMultiviewProperties&>(*this); }
	VkPhysicalDeviceMultiviewProperties& vkHandle() { return reinterpret_cast<VkPhysicalDeviceMultiviewProperties&>(*this); }

	operator const VkPhysicalDeviceMultiviewProperties&() const { return vkHandle(); };
	operator VkPhysicalDeviceMultiviewProperties&() { return vkHandle(); };
};

struct PhysicalDeviceVariablePointersFeatures {
	StructureType sType {StructureType::physicalDeviceVariablePointersFeatures};
	void* pNext {};
	Bool32 variablePointersStorageBuffer {};
	Bool32 variablePointers {};

	constexpr PhysicalDeviceVariablePointersFeatures(Bool32 xvariablePointersStorageBuffer = {}, Bool32 xvariablePointers = {}) : variablePointersStorageBuffer(xvariablePointersStorageBuffer), variablePointers(xvariablePointers) {}

	const VkPhysicalDeviceVariablePointersFeatures& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceVariablePointersFeatures&>(*this); }
	VkPhysicalDeviceVariablePointersFeatures& vkHandle() { return reinterpret_cast<VkPhysicalDeviceVariablePointersFeatures&>(*this); }

	operator const VkPhysicalDeviceVariablePointersFeatures&() const { return vkHandle(); };
	operator VkPhysicalDeviceVariablePointersFeatures&() { return vkHandle(); };
};

struct PhysicalDeviceProtectedMemoryFeatures {
	StructureType sType {StructureType::physicalDeviceProtectedMemoryFeatures};
	void* pNext {};
	Bool32 protectedMemory {};

	constexpr PhysicalDeviceProtectedMemoryFeatures(Bool32 xprotectedMemory = {}) : protectedMemory(xprotectedMemory) {}

	const VkPhysicalDeviceProtectedMemoryFeatures& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceProtectedMemoryFeatures&>(*this); }
	VkPhysicalDeviceProtectedMemoryFeatures& vkHandle() { return reinterpret_cast<VkPhysicalDeviceProtectedMemoryFeatures&>(*this); }

	operator const VkPhysicalDeviceProtectedMemoryFeatures&() const { return vkHandle(); };
	operator VkPhysicalDeviceProtectedMemoryFeatures&() { return vkHandle(); };
};

struct PhysicalDeviceProtectedMemoryProperties {
	StructureType sType {StructureType::physicalDeviceProtectedMemoryProperties};
	void* pNext {};
	Bool32 protectedNoFault {};

	const VkPhysicalDeviceProtectedMemoryProperties& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceProtectedMemoryProperties&>(*this); }
	VkPhysicalDeviceProtectedMemoryProperties& vkHandle() { return reinterpret_cast<VkPhysicalDeviceProtectedMemoryProperties&>(*this); }

	operator const VkPhysicalDeviceProtectedMemoryProperties&() const { return vkHandle(); };
	operator VkPhysicalDeviceProtectedMemoryProperties&() { return vkHandle(); };
};

struct DeviceQueueInfo2 {
	StructureType sType {StructureType::deviceQueueInfo2};
	const void* pNext {};
	DeviceQueueCreateFlags flags {};
	uint32_t queueFamilyIndex {};
	uint32_t queueIndex {};

	constexpr DeviceQueueInfo2(DeviceQueueCreateFlags xflags = {}, uint32_t xqueueFamilyIndex = {}, uint32_t xqueueIndex = {}) : flags(xflags), queueFamilyIndex(xqueueFamilyIndex), queueIndex(xqueueIndex) {}

	const VkDeviceQueueInfo2& vkHandle() const { return reinterpret_cast<const VkDeviceQueueInfo2&>(*this); }
	VkDeviceQueueInfo2& vkHandle() { return reinterpret_cast<VkDeviceQueueInfo2&>(*this); }

	operator const VkDeviceQueueInfo2&() const { return vkHandle(); };
	operator VkDeviceQueueInfo2&() { return vkHandle(); };
};

struct ProtectedSubmitInfo {
	StructureType sType {StructureType::protectedSubmitInfo};
	const void* pNext {};
	Bool32 protectedSubmit {};

	constexpr ProtectedSubmitInfo(Bool32 xprotectedSubmit = {}) : protectedSubmit(xprotectedSubmit) {}

	const VkProtectedSubmitInfo& vkHandle() const { return reinterpret_cast<const VkProtectedSubmitInfo&>(*this); }
	VkProtectedSubmitInfo& vkHandle() { return reinterpret_cast<VkProtectedSubmitInfo&>(*this); }

	operator const VkProtectedSubmitInfo&() const { return vkHandle(); };
	operator VkProtectedSubmitInfo&() { return vkHandle(); };
};

struct ComponentMapping {
	ComponentSwizzle r {};
	ComponentSwizzle g {};
	ComponentSwizzle b {};
	ComponentSwizzle a {};

	const VkComponentMapping& vkHandle() const { return reinterpret_cast<const VkComponentMapping&>(*this); }
	VkComponentMapping& vkHandle() { return reinterpret_cast<VkComponentMapping&>(*this); }

	operator const VkComponentMapping&() const { return vkHandle(); };
	operator VkComponentMapping&() { return vkHandle(); };
};

struct SamplerYcbcrConversionCreateInfo {
	StructureType sType {StructureType::samplerYcbcrConversionCreateInfo};
	const void* pNext {};
	Format format {};
	SamplerYcbcrModelConversion ycbcrModel {};
	SamplerYcbcrRange ycbcrRange {};
	ComponentMapping components {};
	ChromaLocation xChromaOffset {};
	ChromaLocation yChromaOffset {};
	Filter chromaFilter {};
	Bool32 forceExplicitReconstruction {};

	constexpr SamplerYcbcrConversionCreateInfo(Format xformat = {}, SamplerYcbcrModelConversion xycbcrModel = {}, SamplerYcbcrRange xycbcrRange = {}, ComponentMapping xcomponents = {}, ChromaLocation xxChromaOffset = {}, ChromaLocation xyChromaOffset = {}, Filter xchromaFilter = {}, Bool32 xforceExplicitReconstruction = {}) : format(xformat), ycbcrModel(xycbcrModel), ycbcrRange(xycbcrRange), components(xcomponents), xChromaOffset(xxChromaOffset), yChromaOffset(xyChromaOffset), chromaFilter(xchromaFilter), forceExplicitReconstruction(xforceExplicitReconstruction) {}

	const VkSamplerYcbcrConversionCreateInfo& vkHandle() const { return reinterpret_cast<const VkSamplerYcbcrConversionCreateInfo&>(*this); }
	VkSamplerYcbcrConversionCreateInfo& vkHandle() { return reinterpret_cast<VkSamplerYcbcrConversionCreateInfo&>(*this); }

	operator const VkSamplerYcbcrConversionCreateInfo&() const { return vkHandle(); };
	operator VkSamplerYcbcrConversionCreateInfo&() { return vkHandle(); };
};

struct SamplerYcbcrConversionInfo {
	StructureType sType {StructureType::samplerYcbcrConversionInfo};
	const void* pNext {};
	SamplerYcbcrConversion conversion {};

	constexpr SamplerYcbcrConversionInfo(SamplerYcbcrConversion xconversion = {}) : conversion(xconversion) {}

	const VkSamplerYcbcrConversionInfo& vkHandle() const { return reinterpret_cast<const VkSamplerYcbcrConversionInfo&>(*this); }
	VkSamplerYcbcrConversionInfo& vkHandle() { return reinterpret_cast<VkSamplerYcbcrConversionInfo&>(*this); }

	operator const VkSamplerYcbcrConversionInfo&() const { return vkHandle(); };
	operator VkSamplerYcbcrConversionInfo&() { return vkHandle(); };
};

struct BindImagePlaneMemoryInfo {
	StructureType sType {StructureType::bindImagePlaneMemoryInfo};
	const void* pNext {};
	ImageAspectBits planeAspect {};

	constexpr BindImagePlaneMemoryInfo(ImageAspectBits xplaneAspect = {}) : planeAspect(xplaneAspect) {}

	const VkBindImagePlaneMemoryInfo& vkHandle() const { return reinterpret_cast<const VkBindImagePlaneMemoryInfo&>(*this); }
	VkBindImagePlaneMemoryInfo& vkHandle() { return reinterpret_cast<VkBindImagePlaneMemoryInfo&>(*this); }

	operator const VkBindImagePlaneMemoryInfo&() const { return vkHandle(); };
	operator VkBindImagePlaneMemoryInfo&() { return vkHandle(); };
};

struct ImagePlaneMemoryRequirementsInfo {
	StructureType sType {StructureType::imagePlaneMemoryRequirementsInfo};
	const void* pNext {};
	ImageAspectBits planeAspect {};

	constexpr ImagePlaneMemoryRequirementsInfo(ImageAspectBits xplaneAspect = {}) : planeAspect(xplaneAspect) {}

	const VkImagePlaneMemoryRequirementsInfo& vkHandle() const { return reinterpret_cast<const VkImagePlaneMemoryRequirementsInfo&>(*this); }
	VkImagePlaneMemoryRequirementsInfo& vkHandle() { return reinterpret_cast<VkImagePlaneMemoryRequirementsInfo&>(*this); }

	operator const VkImagePlaneMemoryRequirementsInfo&() const { return vkHandle(); };
	operator VkImagePlaneMemoryRequirementsInfo&() { return vkHandle(); };
};

struct PhysicalDeviceSamplerYcbcrConversionFeatures {
	StructureType sType {StructureType::physicalDeviceSamplerYcbcrConversionFeatures};
	void* pNext {};
	Bool32 samplerYcbcrConversion {};

	constexpr PhysicalDeviceSamplerYcbcrConversionFeatures(Bool32 xsamplerYcbcrConversion = {}) : samplerYcbcrConversion(xsamplerYcbcrConversion) {}

	const VkPhysicalDeviceSamplerYcbcrConversionFeatures& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceSamplerYcbcrConversionFeatures&>(*this); }
	VkPhysicalDeviceSamplerYcbcrConversionFeatures& vkHandle() { return reinterpret_cast<VkPhysicalDeviceSamplerYcbcrConversionFeatures&>(*this); }

	operator const VkPhysicalDeviceSamplerYcbcrConversionFeatures&() const { return vkHandle(); };
	operator VkPhysicalDeviceSamplerYcbcrConversionFeatures&() { return vkHandle(); };
};

struct SamplerYcbcrConversionImageFormatProperties {
	StructureType sType {StructureType::samplerYcbcrConversionImageFormatProperties};
	void* pNext {};
	uint32_t combinedImageSamplerDescriptorCount {};

	const VkSamplerYcbcrConversionImageFormatProperties& vkHandle() const { return reinterpret_cast<const VkSamplerYcbcrConversionImageFormatProperties&>(*this); }
	VkSamplerYcbcrConversionImageFormatProperties& vkHandle() { return reinterpret_cast<VkSamplerYcbcrConversionImageFormatProperties&>(*this); }

	operator const VkSamplerYcbcrConversionImageFormatProperties&() const { return vkHandle(); };
	operator VkSamplerYcbcrConversionImageFormatProperties&() { return vkHandle(); };
};

struct DescriptorUpdateTemplateEntry {
	uint32_t dstBinding {};
	uint32_t dstArrayElement {};
	uint32_t descriptorCount {};
	DescriptorType descriptorType {};
	size_t offset {};
	size_t stride {};

	const VkDescriptorUpdateTemplateEntry& vkHandle() const { return reinterpret_cast<const VkDescriptorUpdateTemplateEntry&>(*this); }
	VkDescriptorUpdateTemplateEntry& vkHandle() { return reinterpret_cast<VkDescriptorUpdateTemplateEntry&>(*this); }

	operator const VkDescriptorUpdateTemplateEntry&() const { return vkHandle(); };
	operator VkDescriptorUpdateTemplateEntry&() { return vkHandle(); };
};

struct DescriptorUpdateTemplateCreateInfo {
	StructureType sType {StructureType::descriptorUpdateTemplateCreateInfo};
	const void* pNext {};
	DescriptorUpdateTemplateCreateFlags flags {};
	uint32_t descriptorUpdateEntryCount {};
	const DescriptorUpdateTemplateEntry* pDescriptorUpdateEntries {};
	DescriptorUpdateTemplateType templateType {};
	DescriptorSetLayout descriptorSetLayout {};
	PipelineBindPoint pipelineBindPoint {};
	PipelineLayout pipelineLayout {};
	uint32_t set {};

	constexpr DescriptorUpdateTemplateCreateInfo(DescriptorUpdateTemplateCreateFlags xflags = {}, uint32_t xdescriptorUpdateEntryCount = {}, const DescriptorUpdateTemplateEntry* xpDescriptorUpdateEntries = {}, DescriptorUpdateTemplateType xtemplateType = {}, DescriptorSetLayout xdescriptorSetLayout = {}, PipelineBindPoint xpipelineBindPoint = {}, PipelineLayout xpipelineLayout = {}, uint32_t xset = {}) : flags(xflags), descriptorUpdateEntryCount(xdescriptorUpdateEntryCount), pDescriptorUpdateEntries(xpDescriptorUpdateEntries), templateType(xtemplateType), descriptorSetLayout(xdescriptorSetLayout), pipelineBindPoint(xpipelineBindPoint), pipelineLayout(xpipelineLayout), set(xset) {}

	const VkDescriptorUpdateTemplateCreateInfo& vkHandle() const { return reinterpret_cast<const VkDescriptorUpdateTemplateCreateInfo&>(*this); }
	VkDescriptorUpdateTemplateCreateInfo& vkHandle() { return reinterpret_cast<VkDescriptorUpdateTemplateCreateInfo&>(*this); }

	operator const VkDescriptorUpdateTemplateCreateInfo&() const { return vkHandle(); };
	operator VkDescriptorUpdateTemplateCreateInfo&() { return vkHandle(); };
};

struct ExternalMemoryProperties {
	ExternalMemoryFeatureFlags externalMemoryFeatures {};
	ExternalMemoryHandleTypeFlags exportFromImportedHandleTypes {};
	ExternalMemoryHandleTypeFlags compatibleHandleTypes {};

	const VkExternalMemoryProperties& vkHandle() const { return reinterpret_cast<const VkExternalMemoryProperties&>(*this); }
	VkExternalMemoryProperties& vkHandle() { return reinterpret_cast<VkExternalMemoryProperties&>(*this); }

	operator const VkExternalMemoryProperties&() const { return vkHandle(); };
	operator VkExternalMemoryProperties&() { return vkHandle(); };
};

struct PhysicalDeviceExternalImageFormatInfo {
	StructureType sType {StructureType::physicalDeviceExternalImageFormatInfo};
	const void* pNext {};
	ExternalMemoryHandleTypeBits handleType {};

	constexpr PhysicalDeviceExternalImageFormatInfo(ExternalMemoryHandleTypeBits xhandleType = {}) : handleType(xhandleType) {}

	const VkPhysicalDeviceExternalImageFormatInfo& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceExternalImageFormatInfo&>(*this); }
	VkPhysicalDeviceExternalImageFormatInfo& vkHandle() { return reinterpret_cast<VkPhysicalDeviceExternalImageFormatInfo&>(*this); }

	operator const VkPhysicalDeviceExternalImageFormatInfo&() const { return vkHandle(); };
	operator VkPhysicalDeviceExternalImageFormatInfo&() { return vkHandle(); };
};

struct ExternalImageFormatProperties {
	StructureType sType {StructureType::externalImageFormatProperties};
	void* pNext {};
	ExternalMemoryProperties externalMemoryProperties {};

	const VkExternalImageFormatProperties& vkHandle() const { return reinterpret_cast<const VkExternalImageFormatProperties&>(*this); }
	VkExternalImageFormatProperties& vkHandle() { return reinterpret_cast<VkExternalImageFormatProperties&>(*this); }

	operator const VkExternalImageFormatProperties&() const { return vkHandle(); };
	operator VkExternalImageFormatProperties&() { return vkHandle(); };
};

struct PhysicalDeviceExternalBufferInfo {
	StructureType sType {StructureType::physicalDeviceExternalBufferInfo};
	const void* pNext {};
	BufferCreateFlags flags {};
	BufferUsageFlags usage {};
	ExternalMemoryHandleTypeBits handleType {};

	constexpr PhysicalDeviceExternalBufferInfo(BufferCreateFlags xflags = {}, BufferUsageFlags xusage = {}, ExternalMemoryHandleTypeBits xhandleType = {}) : flags(xflags), usage(xusage), handleType(xhandleType) {}

	const VkPhysicalDeviceExternalBufferInfo& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceExternalBufferInfo&>(*this); }
	VkPhysicalDeviceExternalBufferInfo& vkHandle() { return reinterpret_cast<VkPhysicalDeviceExternalBufferInfo&>(*this); }

	operator const VkPhysicalDeviceExternalBufferInfo&() const { return vkHandle(); };
	operator VkPhysicalDeviceExternalBufferInfo&() { return vkHandle(); };
};

struct ExternalBufferProperties {
	StructureType sType {StructureType::externalBufferProperties};
	void* pNext {};
	ExternalMemoryProperties externalMemoryProperties {};

	const VkExternalBufferProperties& vkHandle() const { return reinterpret_cast<const VkExternalBufferProperties&>(*this); }
	VkExternalBufferProperties& vkHandle() { return reinterpret_cast<VkExternalBufferProperties&>(*this); }

	operator const VkExternalBufferProperties&() const { return vkHandle(); };
	operator VkExternalBufferProperties&() { return vkHandle(); };
};

struct PhysicalDeviceIDProperties {
	StructureType sType {StructureType::physicalDeviceIDProperties};
	void* pNext {};
	std::array<uint8_t, uuidSize> deviceUUID {};
	std::array<uint8_t, uuidSize> driverUUID {};
	std::array<uint8_t, luidSize> deviceLUID {};
	uint32_t deviceNodeMask {};
	Bool32 deviceLUIDValid {};

	const VkPhysicalDeviceIDProperties& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceIDProperties&>(*this); }
	VkPhysicalDeviceIDProperties& vkHandle() { return reinterpret_cast<VkPhysicalDeviceIDProperties&>(*this); }

	operator const VkPhysicalDeviceIDProperties&() const { return vkHandle(); };
	operator VkPhysicalDeviceIDProperties&() { return vkHandle(); };
};

struct ExternalMemoryImageCreateInfo {
	StructureType sType {StructureType::externalMemoryImageCreateInfo};
	const void* pNext {};
	ExternalMemoryHandleTypeFlags handleTypes {};

	constexpr ExternalMemoryImageCreateInfo(ExternalMemoryHandleTypeFlags xhandleTypes = {}) : handleTypes(xhandleTypes) {}

	const VkExternalMemoryImageCreateInfo& vkHandle() const { return reinterpret_cast<const VkExternalMemoryImageCreateInfo&>(*this); }
	VkExternalMemoryImageCreateInfo& vkHandle() { return reinterpret_cast<VkExternalMemoryImageCreateInfo&>(*this); }

	operator const VkExternalMemoryImageCreateInfo&() const { return vkHandle(); };
	operator VkExternalMemoryImageCreateInfo&() { return vkHandle(); };
};

struct ExternalMemoryBufferCreateInfo {
	StructureType sType {StructureType::externalMemoryBufferCreateInfo};
	const void* pNext {};
	ExternalMemoryHandleTypeFlags handleTypes {};

	constexpr ExternalMemoryBufferCreateInfo(ExternalMemoryHandleTypeFlags xhandleTypes = {}) : handleTypes(xhandleTypes) {}

	const VkExternalMemoryBufferCreateInfo& vkHandle() const { return reinterpret_cast<const VkExternalMemoryBufferCreateInfo&>(*this); }
	VkExternalMemoryBufferCreateInfo& vkHandle() { return reinterpret_cast<VkExternalMemoryBufferCreateInfo&>(*this); }

	operator const VkExternalMemoryBufferCreateInfo&() const { return vkHandle(); };
	operator VkExternalMemoryBufferCreateInfo&() { return vkHandle(); };
};

struct ExportMemoryAllocateInfo {
	StructureType sType {StructureType::exportMemoryAllocateInfo};
	const void* pNext {};
	ExternalMemoryHandleTypeFlags handleTypes {};

	constexpr ExportMemoryAllocateInfo(ExternalMemoryHandleTypeFlags xhandleTypes = {}) : handleTypes(xhandleTypes) {}

	const VkExportMemoryAllocateInfo& vkHandle() const { return reinterpret_cast<const VkExportMemoryAllocateInfo&>(*this); }
	VkExportMemoryAllocateInfo& vkHandle() { return reinterpret_cast<VkExportMemoryAllocateInfo&>(*this); }

	operator const VkExportMemoryAllocateInfo&() const { return vkHandle(); };
	operator VkExportMemoryAllocateInfo&() { return vkHandle(); };
};

struct PhysicalDeviceExternalFenceInfo {
	StructureType sType {StructureType::physicalDeviceExternalFenceInfo};
	const void* pNext {};
	ExternalFenceHandleTypeBits handleType {};

	constexpr PhysicalDeviceExternalFenceInfo(ExternalFenceHandleTypeBits xhandleType = {}) : handleType(xhandleType) {}

	const VkPhysicalDeviceExternalFenceInfo& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceExternalFenceInfo&>(*this); }
	VkPhysicalDeviceExternalFenceInfo& vkHandle() { return reinterpret_cast<VkPhysicalDeviceExternalFenceInfo&>(*this); }

	operator const VkPhysicalDeviceExternalFenceInfo&() const { return vkHandle(); };
	operator VkPhysicalDeviceExternalFenceInfo&() { return vkHandle(); };
};

struct ExternalFenceProperties {
	StructureType sType {StructureType::externalFenceProperties};
	void* pNext {};
	ExternalFenceHandleTypeFlags exportFromImportedHandleTypes {};
	ExternalFenceHandleTypeFlags compatibleHandleTypes {};
	ExternalFenceFeatureFlags externalFenceFeatures {};

	const VkExternalFenceProperties& vkHandle() const { return reinterpret_cast<const VkExternalFenceProperties&>(*this); }
	VkExternalFenceProperties& vkHandle() { return reinterpret_cast<VkExternalFenceProperties&>(*this); }

	operator const VkExternalFenceProperties&() const { return vkHandle(); };
	operator VkExternalFenceProperties&() { return vkHandle(); };
};

struct ExportFenceCreateInfo {
	StructureType sType {StructureType::exportFenceCreateInfo};
	const void* pNext {};
	ExternalFenceHandleTypeFlags handleTypes {};

	constexpr ExportFenceCreateInfo(ExternalFenceHandleTypeFlags xhandleTypes = {}) : handleTypes(xhandleTypes) {}

	const VkExportFenceCreateInfo& vkHandle() const { return reinterpret_cast<const VkExportFenceCreateInfo&>(*this); }
	VkExportFenceCreateInfo& vkHandle() { return reinterpret_cast<VkExportFenceCreateInfo&>(*this); }

	operator const VkExportFenceCreateInfo&() const { return vkHandle(); };
	operator VkExportFenceCreateInfo&() { return vkHandle(); };
};

struct ExportSemaphoreCreateInfo {
	StructureType sType {StructureType::exportSemaphoreCreateInfo};
	const void* pNext {};
	ExternalSemaphoreHandleTypeFlags handleTypes {};

	constexpr ExportSemaphoreCreateInfo(ExternalSemaphoreHandleTypeFlags xhandleTypes = {}) : handleTypes(xhandleTypes) {}

	const VkExportSemaphoreCreateInfo& vkHandle() const { return reinterpret_cast<const VkExportSemaphoreCreateInfo&>(*this); }
	VkExportSemaphoreCreateInfo& vkHandle() { return reinterpret_cast<VkExportSemaphoreCreateInfo&>(*this); }

	operator const VkExportSemaphoreCreateInfo&() const { return vkHandle(); };
	operator VkExportSemaphoreCreateInfo&() { return vkHandle(); };
};

struct PhysicalDeviceExternalSemaphoreInfo {
	StructureType sType {StructureType::physicalDeviceExternalSemaphoreInfo};
	const void* pNext {};
	ExternalSemaphoreHandleTypeBits handleType {};

	constexpr PhysicalDeviceExternalSemaphoreInfo(ExternalSemaphoreHandleTypeBits xhandleType = {}) : handleType(xhandleType) {}

	const VkPhysicalDeviceExternalSemaphoreInfo& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceExternalSemaphoreInfo&>(*this); }
	VkPhysicalDeviceExternalSemaphoreInfo& vkHandle() { return reinterpret_cast<VkPhysicalDeviceExternalSemaphoreInfo&>(*this); }

	operator const VkPhysicalDeviceExternalSemaphoreInfo&() const { return vkHandle(); };
	operator VkPhysicalDeviceExternalSemaphoreInfo&() { return vkHandle(); };
};

struct ExternalSemaphoreProperties {
	StructureType sType {StructureType::externalSemaphoreProperties};
	void* pNext {};
	ExternalSemaphoreHandleTypeFlags exportFromImportedHandleTypes {};
	ExternalSemaphoreHandleTypeFlags compatibleHandleTypes {};
	ExternalSemaphoreFeatureFlags externalSemaphoreFeatures {};

	const VkExternalSemaphoreProperties& vkHandle() const { return reinterpret_cast<const VkExternalSemaphoreProperties&>(*this); }
	VkExternalSemaphoreProperties& vkHandle() { return reinterpret_cast<VkExternalSemaphoreProperties&>(*this); }

	operator const VkExternalSemaphoreProperties&() const { return vkHandle(); };
	operator VkExternalSemaphoreProperties&() { return vkHandle(); };
};

struct PhysicalDeviceMaintenance3Properties {
	StructureType sType {StructureType::physicalDeviceMaintenance3Properties};
	void* pNext {};
	uint32_t maxPerSetDescriptors {};
	DeviceSize maxMemoryAllocationSize {};

	const VkPhysicalDeviceMaintenance3Properties& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceMaintenance3Properties&>(*this); }
	VkPhysicalDeviceMaintenance3Properties& vkHandle() { return reinterpret_cast<VkPhysicalDeviceMaintenance3Properties&>(*this); }

	operator const VkPhysicalDeviceMaintenance3Properties&() const { return vkHandle(); };
	operator VkPhysicalDeviceMaintenance3Properties&() { return vkHandle(); };
};

struct DescriptorSetLayoutSupport {
	StructureType sType {StructureType::descriptorSetLayoutSupport};
	void* pNext {};
	Bool32 supported {};

	const VkDescriptorSetLayoutSupport& vkHandle() const { return reinterpret_cast<const VkDescriptorSetLayoutSupport&>(*this); }
	VkDescriptorSetLayoutSupport& vkHandle() { return reinterpret_cast<VkDescriptorSetLayoutSupport&>(*this); }

	operator const VkDescriptorSetLayoutSupport&() const { return vkHandle(); };
	operator VkDescriptorSetLayoutSupport&() { return vkHandle(); };
};

struct DescriptorSetLayoutBinding {
	uint32_t binding {};
	DescriptorType descriptorType {};
	uint32_t descriptorCount {};
	ShaderStageFlags stageFlags {};
	const Sampler* pImmutableSamplers {};

	const VkDescriptorSetLayoutBinding& vkHandle() const { return reinterpret_cast<const VkDescriptorSetLayoutBinding&>(*this); }
	VkDescriptorSetLayoutBinding& vkHandle() { return reinterpret_cast<VkDescriptorSetLayoutBinding&>(*this); }

	operator const VkDescriptorSetLayoutBinding&() const { return vkHandle(); };
	operator VkDescriptorSetLayoutBinding&() { return vkHandle(); };
};

struct DescriptorSetLayoutCreateInfo {
	StructureType sType {StructureType::descriptorSetLayoutCreateInfo};
	const void* pNext {};
	DescriptorSetLayoutCreateFlags flags {};
	uint32_t bindingCount {};
	const DescriptorSetLayoutBinding* pBindings {};

	constexpr DescriptorSetLayoutCreateInfo(DescriptorSetLayoutCreateFlags xflags = {}, uint32_t xbindingCount = {}, const DescriptorSetLayoutBinding* xpBindings = {}) : flags(xflags), bindingCount(xbindingCount), pBindings(xpBindings) {}

	const VkDescriptorSetLayoutCreateInfo& vkHandle() const { return reinterpret_cast<const VkDescriptorSetLayoutCreateInfo&>(*this); }
	VkDescriptorSetLayoutCreateInfo& vkHandle() { return reinterpret_cast<VkDescriptorSetLayoutCreateInfo&>(*this); }

	operator const VkDescriptorSetLayoutCreateInfo&() const { return vkHandle(); };
	operator VkDescriptorSetLayoutCreateInfo&() { return vkHandle(); };
};

struct PhysicalDeviceShaderDrawParametersFeatures {
	StructureType sType {StructureType::physicalDeviceShaderDrawParametersFeatures};
	void* pNext {};
	Bool32 shaderDrawParameters {};

	constexpr PhysicalDeviceShaderDrawParametersFeatures(Bool32 xshaderDrawParameters = {}) : shaderDrawParameters(xshaderDrawParameters) {}

	const VkPhysicalDeviceShaderDrawParametersFeatures& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceShaderDrawParametersFeatures&>(*this); }
	VkPhysicalDeviceShaderDrawParametersFeatures& vkHandle() { return reinterpret_cast<VkPhysicalDeviceShaderDrawParametersFeatures&>(*this); }

	operator const VkPhysicalDeviceShaderDrawParametersFeatures&() const { return vkHandle(); };
	operator VkPhysicalDeviceShaderDrawParametersFeatures&() { return vkHandle(); };
};


struct Offset3D {
	int32_t x {};
	int32_t y {};
	int32_t z {};

	const VkOffset3D& vkHandle() const { return reinterpret_cast<const VkOffset3D&>(*this); }
	VkOffset3D& vkHandle() { return reinterpret_cast<VkOffset3D&>(*this); }

	operator const VkOffset3D&() const { return vkHandle(); };
	operator VkOffset3D&() { return vkHandle(); };
};

struct BaseInStructure {
	StructureType sType {};
	const BaseInStructure* pNext {};

	constexpr BaseInStructure() {}

	const VkBaseInStructure& vkHandle() const { return reinterpret_cast<const VkBaseInStructure&>(*this); }
	VkBaseInStructure& vkHandle() { return reinterpret_cast<VkBaseInStructure&>(*this); }

	operator const VkBaseInStructure&() const { return vkHandle(); };
	operator VkBaseInStructure&() { return vkHandle(); };
};

struct BaseOutStructure {
	StructureType sType {};
	BaseOutStructure* pNext {};

	constexpr BaseOutStructure() {}

	const VkBaseOutStructure& vkHandle() const { return reinterpret_cast<const VkBaseOutStructure&>(*this); }
	VkBaseOutStructure& vkHandle() { return reinterpret_cast<VkBaseOutStructure&>(*this); }

	operator const VkBaseOutStructure&() const { return vkHandle(); };
	operator VkBaseOutStructure&() { return vkHandle(); };
};

struct BufferMemoryBarrier {
	StructureType sType {StructureType::bufferMemoryBarrier};
	const void* pNext {};
	AccessFlags srcAccessMask {};
	AccessFlags dstAccessMask {};
	uint32_t srcQueueFamilyIndex {};
	uint32_t dstQueueFamilyIndex {};
	Buffer buffer {};
	DeviceSize offset {};
	DeviceSize size {};

	constexpr BufferMemoryBarrier(AccessFlags xsrcAccessMask = {}, AccessFlags xdstAccessMask = {}, uint32_t xsrcQueueFamilyIndex = {}, uint32_t xdstQueueFamilyIndex = {}, Buffer xbuffer = {}, DeviceSize xoffset = {}, DeviceSize xsize = {}) : srcAccessMask(xsrcAccessMask), dstAccessMask(xdstAccessMask), srcQueueFamilyIndex(xsrcQueueFamilyIndex), dstQueueFamilyIndex(xdstQueueFamilyIndex), buffer(xbuffer), offset(xoffset), size(xsize) {}

	const VkBufferMemoryBarrier& vkHandle() const { return reinterpret_cast<const VkBufferMemoryBarrier&>(*this); }
	VkBufferMemoryBarrier& vkHandle() { return reinterpret_cast<VkBufferMemoryBarrier&>(*this); }

	operator const VkBufferMemoryBarrier&() const { return vkHandle(); };
	operator VkBufferMemoryBarrier&() { return vkHandle(); };
};

struct DispatchIndirectCommand {
	uint32_t x {};
	uint32_t y {};
	uint32_t z {};

	const VkDispatchIndirectCommand& vkHandle() const { return reinterpret_cast<const VkDispatchIndirectCommand&>(*this); }
	VkDispatchIndirectCommand& vkHandle() { return reinterpret_cast<VkDispatchIndirectCommand&>(*this); }

	operator const VkDispatchIndirectCommand&() const { return vkHandle(); };
	operator VkDispatchIndirectCommand&() { return vkHandle(); };
};

struct DrawIndexedIndirectCommand {
	uint32_t indexCount {};
	uint32_t instanceCount {};
	uint32_t firstIndex {};
	int32_t vertexOffset {};
	uint32_t firstInstance {};

	const VkDrawIndexedIndirectCommand& vkHandle() const { return reinterpret_cast<const VkDrawIndexedIndirectCommand&>(*this); }
	VkDrawIndexedIndirectCommand& vkHandle() { return reinterpret_cast<VkDrawIndexedIndirectCommand&>(*this); }

	operator const VkDrawIndexedIndirectCommand&() const { return vkHandle(); };
	operator VkDrawIndexedIndirectCommand&() { return vkHandle(); };
};

struct DrawIndirectCommand {
	uint32_t vertexCount {};
	uint32_t instanceCount {};
	uint32_t firstVertex {};
	uint32_t firstInstance {};

	const VkDrawIndirectCommand& vkHandle() const { return reinterpret_cast<const VkDrawIndirectCommand&>(*this); }
	VkDrawIndirectCommand& vkHandle() { return reinterpret_cast<VkDrawIndirectCommand&>(*this); }

	operator const VkDrawIndirectCommand&() const { return vkHandle(); };
	operator VkDrawIndirectCommand&() { return vkHandle(); };
};

struct ImageSubresourceRange {
	ImageAspectFlags aspectMask {};
	uint32_t baseMipLevel {};
	uint32_t levelCount {};
	uint32_t baseArrayLayer {};
	uint32_t layerCount {};

	const VkImageSubresourceRange& vkHandle() const { return reinterpret_cast<const VkImageSubresourceRange&>(*this); }
	VkImageSubresourceRange& vkHandle() { return reinterpret_cast<VkImageSubresourceRange&>(*this); }

	operator const VkImageSubresourceRange&() const { return vkHandle(); };
	operator VkImageSubresourceRange&() { return vkHandle(); };
};

struct ImageMemoryBarrier {
	StructureType sType {StructureType::imageMemoryBarrier};
	const void* pNext {};
	AccessFlags srcAccessMask {};
	AccessFlags dstAccessMask {};
	ImageLayout oldLayout {};
	ImageLayout newLayout {};
	uint32_t srcQueueFamilyIndex {};
	uint32_t dstQueueFamilyIndex {};
	Image image {};
	ImageSubresourceRange subresourceRange {};

	constexpr ImageMemoryBarrier(AccessFlags xsrcAccessMask = {}, AccessFlags xdstAccessMask = {}, ImageLayout xoldLayout = {}, ImageLayout xnewLayout = {}, uint32_t xsrcQueueFamilyIndex = {}, uint32_t xdstQueueFamilyIndex = {}, Image ximage = {}, ImageSubresourceRange xsubresourceRange = {}) : srcAccessMask(xsrcAccessMask), dstAccessMask(xdstAccessMask), oldLayout(xoldLayout), newLayout(xnewLayout), srcQueueFamilyIndex(xsrcQueueFamilyIndex), dstQueueFamilyIndex(xdstQueueFamilyIndex), image(ximage), subresourceRange(xsubresourceRange) {}

	const VkImageMemoryBarrier& vkHandle() const { return reinterpret_cast<const VkImageMemoryBarrier&>(*this); }
	VkImageMemoryBarrier& vkHandle() { return reinterpret_cast<VkImageMemoryBarrier&>(*this); }

	operator const VkImageMemoryBarrier&() const { return vkHandle(); };
	operator VkImageMemoryBarrier&() { return vkHandle(); };
};

struct MemoryBarrier {
	StructureType sType {StructureType::memoryBarrier};
	const void* pNext {};
	AccessFlags srcAccessMask {};
	AccessFlags dstAccessMask {};

	constexpr MemoryBarrier(AccessFlags xsrcAccessMask = {}, AccessFlags xdstAccessMask = {}) : srcAccessMask(xsrcAccessMask), dstAccessMask(xdstAccessMask) {}

	const VkMemoryBarrier& vkHandle() const { return reinterpret_cast<const VkMemoryBarrier&>(*this); }
	VkMemoryBarrier& vkHandle() { return reinterpret_cast<VkMemoryBarrier&>(*this); }

	operator const VkMemoryBarrier&() const { return vkHandle(); };
	operator VkMemoryBarrier&() { return vkHandle(); };
};

struct ApplicationInfo {
	StructureType sType {StructureType::applicationInfo};
	const void* pNext {};
	const char* pApplicationName {};
	uint32_t applicationVersion {};
	const char* pEngineName {};
	uint32_t engineVersion {};
	uint32_t apiVersion {};

	constexpr ApplicationInfo(const char* xpApplicationName = {}, uint32_t xapplicationVersion = {}, const char* xpEngineName = {}, uint32_t xengineVersion = {}, uint32_t xapiVersion = {}) : pApplicationName(xpApplicationName), applicationVersion(xapplicationVersion), pEngineName(xpEngineName), engineVersion(xengineVersion), apiVersion(xapiVersion) {}

	const VkApplicationInfo& vkHandle() const { return reinterpret_cast<const VkApplicationInfo&>(*this); }
	VkApplicationInfo& vkHandle() { return reinterpret_cast<VkApplicationInfo&>(*this); }

	operator const VkApplicationInfo&() const { return vkHandle(); };
	operator VkApplicationInfo&() { return vkHandle(); };
};

struct InstanceCreateInfo {
	StructureType sType {StructureType::instanceCreateInfo};
	const void* pNext {};
	InstanceCreateFlags flags {};
	const ApplicationInfo* pApplicationInfo {};
	uint32_t enabledLayerCount {};
	const char* const* ppEnabledLayerNames {};
	uint32_t enabledExtensionCount {};
	const char* const* ppEnabledExtensionNames {};

	constexpr InstanceCreateInfo(InstanceCreateFlags xflags = {}, const ApplicationInfo* xpApplicationInfo = {}, uint32_t xenabledLayerCount = {}, const char* const* xppEnabledLayerNames = {}, uint32_t xenabledExtensionCount = {}, const char* const* xppEnabledExtensionNames = {}) : flags(xflags), pApplicationInfo(xpApplicationInfo), enabledLayerCount(xenabledLayerCount), ppEnabledLayerNames(xppEnabledLayerNames), enabledExtensionCount(xenabledExtensionCount), ppEnabledExtensionNames(xppEnabledExtensionNames) {}

	const VkInstanceCreateInfo& vkHandle() const { return reinterpret_cast<const VkInstanceCreateInfo&>(*this); }
	VkInstanceCreateInfo& vkHandle() { return reinterpret_cast<VkInstanceCreateInfo&>(*this); }

	operator const VkInstanceCreateInfo&() const { return vkHandle(); };
	operator VkInstanceCreateInfo&() { return vkHandle(); };
};

struct DeviceQueueCreateInfo {
	StructureType sType {StructureType::deviceQueueCreateInfo};
	const void* pNext {};
	DeviceQueueCreateFlags flags {};
	uint32_t queueFamilyIndex {};
	uint32_t queueCount {};
	const float* pQueuePriorities {};

	constexpr DeviceQueueCreateInfo(DeviceQueueCreateFlags xflags = {}, uint32_t xqueueFamilyIndex = {}, uint32_t xqueueCount = {}, const float* xpQueuePriorities = {}) : flags(xflags), queueFamilyIndex(xqueueFamilyIndex), queueCount(xqueueCount), pQueuePriorities(xpQueuePriorities) {}

	const VkDeviceQueueCreateInfo& vkHandle() const { return reinterpret_cast<const VkDeviceQueueCreateInfo&>(*this); }
	VkDeviceQueueCreateInfo& vkHandle() { return reinterpret_cast<VkDeviceQueueCreateInfo&>(*this); }

	operator const VkDeviceQueueCreateInfo&() const { return vkHandle(); };
	operator VkDeviceQueueCreateInfo&() { return vkHandle(); };
};

struct DeviceCreateInfo {
	StructureType sType {StructureType::deviceCreateInfo};
	const void* pNext {};
	DeviceCreateFlags flags {};
	uint32_t queueCreateInfoCount {};
	const DeviceQueueCreateInfo* pQueueCreateInfos {};
	uint32_t enabledLayerCount {};
	const char* const* ppEnabledLayerNames {};
	uint32_t enabledExtensionCount {};
	const char* const* ppEnabledExtensionNames {};
	const PhysicalDeviceFeatures* pEnabledFeatures {};

	constexpr DeviceCreateInfo(DeviceCreateFlags xflags = {}, uint32_t xqueueCreateInfoCount = {}, const DeviceQueueCreateInfo* xpQueueCreateInfos = {}, uint32_t xenabledLayerCount = {}, const char* const* xppEnabledLayerNames = {}, uint32_t xenabledExtensionCount = {}, const char* const* xppEnabledExtensionNames = {}, const PhysicalDeviceFeatures* xpEnabledFeatures = {}) : flags(xflags), queueCreateInfoCount(xqueueCreateInfoCount), pQueueCreateInfos(xpQueueCreateInfos), enabledLayerCount(xenabledLayerCount), ppEnabledLayerNames(xppEnabledLayerNames), enabledExtensionCount(xenabledExtensionCount), ppEnabledExtensionNames(xppEnabledExtensionNames), pEnabledFeatures(xpEnabledFeatures) {}

	const VkDeviceCreateInfo& vkHandle() const { return reinterpret_cast<const VkDeviceCreateInfo&>(*this); }
	VkDeviceCreateInfo& vkHandle() { return reinterpret_cast<VkDeviceCreateInfo&>(*this); }

	operator const VkDeviceCreateInfo&() const { return vkHandle(); };
	operator VkDeviceCreateInfo&() { return vkHandle(); };
};

struct ExtensionProperties {
	std::array<char, maxExtensionNameSize> extensionName {};
	uint32_t specVersion {};

	const VkExtensionProperties& vkHandle() const { return reinterpret_cast<const VkExtensionProperties&>(*this); }
	VkExtensionProperties& vkHandle() { return reinterpret_cast<VkExtensionProperties&>(*this); }

	operator const VkExtensionProperties&() const { return vkHandle(); };
	operator VkExtensionProperties&() { return vkHandle(); };
};

struct LayerProperties {
	std::array<char, maxExtensionNameSize> layerName {};
	uint32_t specVersion {};
	uint32_t implementationVersion {};
	std::array<char, maxDescriptionSize> description {};

	const VkLayerProperties& vkHandle() const { return reinterpret_cast<const VkLayerProperties&>(*this); }
	VkLayerProperties& vkHandle() { return reinterpret_cast<VkLayerProperties&>(*this); }

	operator const VkLayerProperties&() const { return vkHandle(); };
	operator VkLayerProperties&() { return vkHandle(); };
};

struct SubmitInfo {
	StructureType sType {StructureType::submitInfo};
	const void* pNext {};
	uint32_t waitSemaphoreCount {};
	const Semaphore* pWaitSemaphores {};
	const PipelineStageFlags* pWaitDstStageMask {};
	uint32_t commandBufferCount {};
	const CommandBuffer* pCommandBuffers {};
	uint32_t signalSemaphoreCount {};
	const Semaphore* pSignalSemaphores {};

	constexpr SubmitInfo(uint32_t xwaitSemaphoreCount = {}, const Semaphore* xpWaitSemaphores = {}, const PipelineStageFlags* xpWaitDstStageMask = {}, uint32_t xcommandBufferCount = {}, const CommandBuffer* xpCommandBuffers = {}, uint32_t xsignalSemaphoreCount = {}, const Semaphore* xpSignalSemaphores = {}) : waitSemaphoreCount(xwaitSemaphoreCount), pWaitSemaphores(xpWaitSemaphores), pWaitDstStageMask(xpWaitDstStageMask), commandBufferCount(xcommandBufferCount), pCommandBuffers(xpCommandBuffers), signalSemaphoreCount(xsignalSemaphoreCount), pSignalSemaphores(xpSignalSemaphores) {}

	const VkSubmitInfo& vkHandle() const { return reinterpret_cast<const VkSubmitInfo&>(*this); }
	VkSubmitInfo& vkHandle() { return reinterpret_cast<VkSubmitInfo&>(*this); }

	operator const VkSubmitInfo&() const { return vkHandle(); };
	operator VkSubmitInfo&() { return vkHandle(); };
};

struct MappedMemoryRange {
	StructureType sType {StructureType::mappedMemoryRange};
	const void* pNext {};
	DeviceMemory memory {};
	DeviceSize offset {};
	DeviceSize size {};

	constexpr MappedMemoryRange(DeviceMemory xmemory = {}, DeviceSize xoffset = {}, DeviceSize xsize = {}) : memory(xmemory), offset(xoffset), size(xsize) {}

	const VkMappedMemoryRange& vkHandle() const { return reinterpret_cast<const VkMappedMemoryRange&>(*this); }
	VkMappedMemoryRange& vkHandle() { return reinterpret_cast<VkMappedMemoryRange&>(*this); }

	operator const VkMappedMemoryRange&() const { return vkHandle(); };
	operator VkMappedMemoryRange&() { return vkHandle(); };
};

struct MemoryAllocateInfo {
	StructureType sType {StructureType::memoryAllocateInfo};
	const void* pNext {};
	DeviceSize allocationSize {};
	uint32_t memoryTypeIndex {};

	constexpr MemoryAllocateInfo(DeviceSize xallocationSize = {}, uint32_t xmemoryTypeIndex = {}) : allocationSize(xallocationSize), memoryTypeIndex(xmemoryTypeIndex) {}

	const VkMemoryAllocateInfo& vkHandle() const { return reinterpret_cast<const VkMemoryAllocateInfo&>(*this); }
	VkMemoryAllocateInfo& vkHandle() { return reinterpret_cast<VkMemoryAllocateInfo&>(*this); }

	operator const VkMemoryAllocateInfo&() const { return vkHandle(); };
	operator VkMemoryAllocateInfo&() { return vkHandle(); };
};

struct SparseMemoryBind {
	DeviceSize resourceOffset {};
	DeviceSize size {};
	DeviceMemory memory {};
	DeviceSize memoryOffset {};
	SparseMemoryBindFlags flags {};

	const VkSparseMemoryBind& vkHandle() const { return reinterpret_cast<const VkSparseMemoryBind&>(*this); }
	VkSparseMemoryBind& vkHandle() { return reinterpret_cast<VkSparseMemoryBind&>(*this); }

	operator const VkSparseMemoryBind&() const { return vkHandle(); };
	operator VkSparseMemoryBind&() { return vkHandle(); };
};

struct SparseBufferMemoryBindInfo {
	Buffer buffer {};
	uint32_t bindCount {};
	const SparseMemoryBind* pBinds {};

	const VkSparseBufferMemoryBindInfo& vkHandle() const { return reinterpret_cast<const VkSparseBufferMemoryBindInfo&>(*this); }
	VkSparseBufferMemoryBindInfo& vkHandle() { return reinterpret_cast<VkSparseBufferMemoryBindInfo&>(*this); }

	operator const VkSparseBufferMemoryBindInfo&() const { return vkHandle(); };
	operator VkSparseBufferMemoryBindInfo&() { return vkHandle(); };
};

struct SparseImageOpaqueMemoryBindInfo {
	Image image {};
	uint32_t bindCount {};
	const SparseMemoryBind* pBinds {};

	const VkSparseImageOpaqueMemoryBindInfo& vkHandle() const { return reinterpret_cast<const VkSparseImageOpaqueMemoryBindInfo&>(*this); }
	VkSparseImageOpaqueMemoryBindInfo& vkHandle() { return reinterpret_cast<VkSparseImageOpaqueMemoryBindInfo&>(*this); }

	operator const VkSparseImageOpaqueMemoryBindInfo&() const { return vkHandle(); };
	operator VkSparseImageOpaqueMemoryBindInfo&() { return vkHandle(); };
};

struct ImageSubresource {
	ImageAspectFlags aspectMask {};
	uint32_t mipLevel {};
	uint32_t arrayLayer {};

	const VkImageSubresource& vkHandle() const { return reinterpret_cast<const VkImageSubresource&>(*this); }
	VkImageSubresource& vkHandle() { return reinterpret_cast<VkImageSubresource&>(*this); }

	operator const VkImageSubresource&() const { return vkHandle(); };
	operator VkImageSubresource&() { return vkHandle(); };
};

struct SparseImageMemoryBind {
	ImageSubresource subresource {};
	Offset3D offset {};
	Extent3D extent {};
	DeviceMemory memory {};
	DeviceSize memoryOffset {};
	SparseMemoryBindFlags flags {};

	const VkSparseImageMemoryBind& vkHandle() const { return reinterpret_cast<const VkSparseImageMemoryBind&>(*this); }
	VkSparseImageMemoryBind& vkHandle() { return reinterpret_cast<VkSparseImageMemoryBind&>(*this); }

	operator const VkSparseImageMemoryBind&() const { return vkHandle(); };
	operator VkSparseImageMemoryBind&() { return vkHandle(); };
};

struct SparseImageMemoryBindInfo {
	Image image {};
	uint32_t bindCount {};
	const SparseImageMemoryBind* pBinds {};

	const VkSparseImageMemoryBindInfo& vkHandle() const { return reinterpret_cast<const VkSparseImageMemoryBindInfo&>(*this); }
	VkSparseImageMemoryBindInfo& vkHandle() { return reinterpret_cast<VkSparseImageMemoryBindInfo&>(*this); }

	operator const VkSparseImageMemoryBindInfo&() const { return vkHandle(); };
	operator VkSparseImageMemoryBindInfo&() { return vkHandle(); };
};

struct BindSparseInfo {
	StructureType sType {StructureType::bindSparseInfo};
	const void* pNext {};
	uint32_t waitSemaphoreCount {};
	const Semaphore* pWaitSemaphores {};
	uint32_t bufferBindCount {};
	const SparseBufferMemoryBindInfo* pBufferBinds {};
	uint32_t imageOpaqueBindCount {};
	const SparseImageOpaqueMemoryBindInfo* pImageOpaqueBinds {};
	uint32_t imageBindCount {};
	const SparseImageMemoryBindInfo* pImageBinds {};
	uint32_t signalSemaphoreCount {};
	const Semaphore* pSignalSemaphores {};

	constexpr BindSparseInfo(uint32_t xwaitSemaphoreCount = {}, const Semaphore* xpWaitSemaphores = {}, uint32_t xbufferBindCount = {}, const SparseBufferMemoryBindInfo* xpBufferBinds = {}, uint32_t ximageOpaqueBindCount = {}, const SparseImageOpaqueMemoryBindInfo* xpImageOpaqueBinds = {}, uint32_t ximageBindCount = {}, const SparseImageMemoryBindInfo* xpImageBinds = {}, uint32_t xsignalSemaphoreCount = {}, const Semaphore* xpSignalSemaphores = {}) : waitSemaphoreCount(xwaitSemaphoreCount), pWaitSemaphores(xpWaitSemaphores), bufferBindCount(xbufferBindCount), pBufferBinds(xpBufferBinds), imageOpaqueBindCount(ximageOpaqueBindCount), pImageOpaqueBinds(xpImageOpaqueBinds), imageBindCount(ximageBindCount), pImageBinds(xpImageBinds), signalSemaphoreCount(xsignalSemaphoreCount), pSignalSemaphores(xpSignalSemaphores) {}

	const VkBindSparseInfo& vkHandle() const { return reinterpret_cast<const VkBindSparseInfo&>(*this); }
	VkBindSparseInfo& vkHandle() { return reinterpret_cast<VkBindSparseInfo&>(*this); }

	operator const VkBindSparseInfo&() const { return vkHandle(); };
	operator VkBindSparseInfo&() { return vkHandle(); };
};

struct FenceCreateInfo {
	StructureType sType {StructureType::fenceCreateInfo};
	const void* pNext {};
	FenceCreateFlags flags {};

	constexpr FenceCreateInfo(FenceCreateFlags xflags = {}) : flags(xflags) {}

	const VkFenceCreateInfo& vkHandle() const { return reinterpret_cast<const VkFenceCreateInfo&>(*this); }
	VkFenceCreateInfo& vkHandle() { return reinterpret_cast<VkFenceCreateInfo&>(*this); }

	operator const VkFenceCreateInfo&() const { return vkHandle(); };
	operator VkFenceCreateInfo&() { return vkHandle(); };
};

struct SemaphoreCreateInfo {
	StructureType sType {StructureType::semaphoreCreateInfo};
	const void* pNext {};
	SemaphoreCreateFlags flags {};

	constexpr SemaphoreCreateInfo(SemaphoreCreateFlags xflags = {}) : flags(xflags) {}

	const VkSemaphoreCreateInfo& vkHandle() const { return reinterpret_cast<const VkSemaphoreCreateInfo&>(*this); }
	VkSemaphoreCreateInfo& vkHandle() { return reinterpret_cast<VkSemaphoreCreateInfo&>(*this); }

	operator const VkSemaphoreCreateInfo&() const { return vkHandle(); };
	operator VkSemaphoreCreateInfo&() { return vkHandle(); };
};

struct EventCreateInfo {
	StructureType sType {StructureType::eventCreateInfo};
	const void* pNext {};
	EventCreateFlags flags {};

	constexpr EventCreateInfo(EventCreateFlags xflags = {}) : flags(xflags) {}

	const VkEventCreateInfo& vkHandle() const { return reinterpret_cast<const VkEventCreateInfo&>(*this); }
	VkEventCreateInfo& vkHandle() { return reinterpret_cast<VkEventCreateInfo&>(*this); }

	operator const VkEventCreateInfo&() const { return vkHandle(); };
	operator VkEventCreateInfo&() { return vkHandle(); };
};

struct QueryPoolCreateInfo {
	StructureType sType {StructureType::queryPoolCreateInfo};
	const void* pNext {};
	QueryPoolCreateFlags flags {};
	QueryType queryType {};
	uint32_t queryCount {};
	QueryPipelineStatisticFlags pipelineStatistics {};

	constexpr QueryPoolCreateInfo(QueryPoolCreateFlags xflags = {}, QueryType xqueryType = {}, uint32_t xqueryCount = {}, QueryPipelineStatisticFlags xpipelineStatistics = {}) : flags(xflags), queryType(xqueryType), queryCount(xqueryCount), pipelineStatistics(xpipelineStatistics) {}

	const VkQueryPoolCreateInfo& vkHandle() const { return reinterpret_cast<const VkQueryPoolCreateInfo&>(*this); }
	VkQueryPoolCreateInfo& vkHandle() { return reinterpret_cast<VkQueryPoolCreateInfo&>(*this); }

	operator const VkQueryPoolCreateInfo&() const { return vkHandle(); };
	operator VkQueryPoolCreateInfo&() { return vkHandle(); };
};

struct BufferCreateInfo {
	StructureType sType {StructureType::bufferCreateInfo};
	const void* pNext {};
	BufferCreateFlags flags {};
	DeviceSize size {};
	BufferUsageFlags usage {};
	SharingMode sharingMode {};
	uint32_t queueFamilyIndexCount {};
	const uint32_t* pQueueFamilyIndices {};

	constexpr BufferCreateInfo(BufferCreateFlags xflags = {}, DeviceSize xsize = {}, BufferUsageFlags xusage = {}, SharingMode xsharingMode = {}, uint32_t xqueueFamilyIndexCount = {}, const uint32_t* xpQueueFamilyIndices = {}) : flags(xflags), size(xsize), usage(xusage), sharingMode(xsharingMode), queueFamilyIndexCount(xqueueFamilyIndexCount), pQueueFamilyIndices(xpQueueFamilyIndices) {}

	const VkBufferCreateInfo& vkHandle() const { return reinterpret_cast<const VkBufferCreateInfo&>(*this); }
	VkBufferCreateInfo& vkHandle() { return reinterpret_cast<VkBufferCreateInfo&>(*this); }

	operator const VkBufferCreateInfo&() const { return vkHandle(); };
	operator VkBufferCreateInfo&() { return vkHandle(); };
};

struct BufferViewCreateInfo {
	StructureType sType {StructureType::bufferViewCreateInfo};
	const void* pNext {};
	BufferViewCreateFlags flags {};
	Buffer buffer {};
	Format format {};
	DeviceSize offset {};
	DeviceSize range {};

	constexpr BufferViewCreateInfo(BufferViewCreateFlags xflags = {}, Buffer xbuffer = {}, Format xformat = {}, DeviceSize xoffset = {}, DeviceSize xrange = {}) : flags(xflags), buffer(xbuffer), format(xformat), offset(xoffset), range(xrange) {}

	const VkBufferViewCreateInfo& vkHandle() const { return reinterpret_cast<const VkBufferViewCreateInfo&>(*this); }
	VkBufferViewCreateInfo& vkHandle() { return reinterpret_cast<VkBufferViewCreateInfo&>(*this); }

	operator const VkBufferViewCreateInfo&() const { return vkHandle(); };
	operator VkBufferViewCreateInfo&() { return vkHandle(); };
};

struct ImageCreateInfo {
	StructureType sType {StructureType::imageCreateInfo};
	const void* pNext {};
	ImageCreateFlags flags {};
	ImageType imageType {};
	Format format {};
	Extent3D extent {};
	uint32_t mipLevels {};
	uint32_t arrayLayers {};
	SampleCountBits samples {};
	ImageTiling tiling {};
	ImageUsageFlags usage {};
	SharingMode sharingMode {};
	uint32_t queueFamilyIndexCount {};
	const uint32_t* pQueueFamilyIndices {};
	ImageLayout initialLayout {};

	constexpr ImageCreateInfo(ImageCreateFlags xflags = {}, ImageType ximageType = {}, Format xformat = {}, Extent3D xextent = {}, uint32_t xmipLevels = {}, uint32_t xarrayLayers = {}, SampleCountBits xsamples = {}, ImageTiling xtiling = {}, ImageUsageFlags xusage = {}, SharingMode xsharingMode = {}, uint32_t xqueueFamilyIndexCount = {}, const uint32_t* xpQueueFamilyIndices = {}, ImageLayout xinitialLayout = {}) : flags(xflags), imageType(ximageType), format(xformat), extent(xextent), mipLevels(xmipLevels), arrayLayers(xarrayLayers), samples(xsamples), tiling(xtiling), usage(xusage), sharingMode(xsharingMode), queueFamilyIndexCount(xqueueFamilyIndexCount), pQueueFamilyIndices(xpQueueFamilyIndices), initialLayout(xinitialLayout) {}

	const VkImageCreateInfo& vkHandle() const { return reinterpret_cast<const VkImageCreateInfo&>(*this); }
	VkImageCreateInfo& vkHandle() { return reinterpret_cast<VkImageCreateInfo&>(*this); }

	operator const VkImageCreateInfo&() const { return vkHandle(); };
	operator VkImageCreateInfo&() { return vkHandle(); };
};

struct SubresourceLayout {
	DeviceSize offset {};
	DeviceSize size {};
	DeviceSize rowPitch {};
	DeviceSize arrayPitch {};
	DeviceSize depthPitch {};

	const VkSubresourceLayout& vkHandle() const { return reinterpret_cast<const VkSubresourceLayout&>(*this); }
	VkSubresourceLayout& vkHandle() { return reinterpret_cast<VkSubresourceLayout&>(*this); }

	operator const VkSubresourceLayout&() const { return vkHandle(); };
	operator VkSubresourceLayout&() { return vkHandle(); };
};

struct ImageViewCreateInfo {
	StructureType sType {StructureType::imageViewCreateInfo};
	const void* pNext {};
	ImageViewCreateFlags flags {};
	Image image {};
	ImageViewType viewType {};
	Format format {};
	ComponentMapping components {};
	ImageSubresourceRange subresourceRange {};

	constexpr ImageViewCreateInfo(ImageViewCreateFlags xflags = {}, Image ximage = {}, ImageViewType xviewType = {}, Format xformat = {}, ComponentMapping xcomponents = {}, ImageSubresourceRange xsubresourceRange = {}) : flags(xflags), image(ximage), viewType(xviewType), format(xformat), components(xcomponents), subresourceRange(xsubresourceRange) {}

	const VkImageViewCreateInfo& vkHandle() const { return reinterpret_cast<const VkImageViewCreateInfo&>(*this); }
	VkImageViewCreateInfo& vkHandle() { return reinterpret_cast<VkImageViewCreateInfo&>(*this); }

	operator const VkImageViewCreateInfo&() const { return vkHandle(); };
	operator VkImageViewCreateInfo&() { return vkHandle(); };
};

struct ShaderModuleCreateInfo {
	StructureType sType {StructureType::shaderModuleCreateInfo};
	const void* pNext {};
	ShaderModuleCreateFlags flags {};
	size_t codeSize {};
	const uint32_t* pCode {};

	constexpr ShaderModuleCreateInfo(ShaderModuleCreateFlags xflags = {}, size_t xcodeSize = {}, const uint32_t* xpCode = {}) : flags(xflags), codeSize(xcodeSize), pCode(xpCode) {}

	const VkShaderModuleCreateInfo& vkHandle() const { return reinterpret_cast<const VkShaderModuleCreateInfo&>(*this); }
	VkShaderModuleCreateInfo& vkHandle() { return reinterpret_cast<VkShaderModuleCreateInfo&>(*this); }

	operator const VkShaderModuleCreateInfo&() const { return vkHandle(); };
	operator VkShaderModuleCreateInfo&() { return vkHandle(); };
};

struct PipelineCacheCreateInfo {
	StructureType sType {StructureType::pipelineCacheCreateInfo};
	const void* pNext {};
	PipelineCacheCreateFlags flags {};
	size_t initialDataSize {};
	const void* pInitialData {};

	constexpr PipelineCacheCreateInfo(PipelineCacheCreateFlags xflags = {}, size_t xinitialDataSize = {}, const void* xpInitialData = {}) : flags(xflags), initialDataSize(xinitialDataSize), pInitialData(xpInitialData) {}

	const VkPipelineCacheCreateInfo& vkHandle() const { return reinterpret_cast<const VkPipelineCacheCreateInfo&>(*this); }
	VkPipelineCacheCreateInfo& vkHandle() { return reinterpret_cast<VkPipelineCacheCreateInfo&>(*this); }

	operator const VkPipelineCacheCreateInfo&() const { return vkHandle(); };
	operator VkPipelineCacheCreateInfo&() { return vkHandle(); };
};

struct SpecializationMapEntry {
	uint32_t constantID {};
	uint32_t offset {};
	size_t size {};

	const VkSpecializationMapEntry& vkHandle() const { return reinterpret_cast<const VkSpecializationMapEntry&>(*this); }
	VkSpecializationMapEntry& vkHandle() { return reinterpret_cast<VkSpecializationMapEntry&>(*this); }

	operator const VkSpecializationMapEntry&() const { return vkHandle(); };
	operator VkSpecializationMapEntry&() { return vkHandle(); };
};

struct SpecializationInfo {
	uint32_t mapEntryCount {};
	const SpecializationMapEntry* pMapEntries {};
	size_t dataSize {};
	const void* pData {};

	const VkSpecializationInfo& vkHandle() const { return reinterpret_cast<const VkSpecializationInfo&>(*this); }
	VkSpecializationInfo& vkHandle() { return reinterpret_cast<VkSpecializationInfo&>(*this); }

	operator const VkSpecializationInfo&() const { return vkHandle(); };
	operator VkSpecializationInfo&() { return vkHandle(); };
};

struct PipelineShaderStageCreateInfo {
	StructureType sType {StructureType::pipelineShaderStageCreateInfo};
	const void* pNext {};
	PipelineShaderStageCreateFlags flags {};
	ShaderStageBits stage {};
	ShaderModule module {};
	const char* pName {};
	const SpecializationInfo* pSpecializationInfo {};

	constexpr PipelineShaderStageCreateInfo(PipelineShaderStageCreateFlags xflags = {}, ShaderStageBits xstage = {}, ShaderModule xmodule = {}, const char* xpName = {}, const SpecializationInfo* xpSpecializationInfo = {}) : flags(xflags), stage(xstage), module(xmodule), pName(xpName), pSpecializationInfo(xpSpecializationInfo) {}

	const VkPipelineShaderStageCreateInfo& vkHandle() const { return reinterpret_cast<const VkPipelineShaderStageCreateInfo&>(*this); }
	VkPipelineShaderStageCreateInfo& vkHandle() { return reinterpret_cast<VkPipelineShaderStageCreateInfo&>(*this); }

	operator const VkPipelineShaderStageCreateInfo&() const { return vkHandle(); };
	operator VkPipelineShaderStageCreateInfo&() { return vkHandle(); };
};

struct ComputePipelineCreateInfo {
	StructureType sType {StructureType::computePipelineCreateInfo};
	const void* pNext {};
	PipelineCreateFlags flags {};
	PipelineShaderStageCreateInfo stage {};
	PipelineLayout layout {};
	Pipeline basePipelineHandle {};
	int32_t basePipelineIndex {};

	constexpr ComputePipelineCreateInfo(PipelineCreateFlags xflags = {}, PipelineShaderStageCreateInfo xstage = {}, PipelineLayout xlayout = {}, Pipeline xbasePipelineHandle = {}, int32_t xbasePipelineIndex = {}) : flags(xflags), stage(xstage), layout(xlayout), basePipelineHandle(xbasePipelineHandle), basePipelineIndex(xbasePipelineIndex) {}

	const VkComputePipelineCreateInfo& vkHandle() const { return reinterpret_cast<const VkComputePipelineCreateInfo&>(*this); }
	VkComputePipelineCreateInfo& vkHandle() { return reinterpret_cast<VkComputePipelineCreateInfo&>(*this); }

	operator const VkComputePipelineCreateInfo&() const { return vkHandle(); };
	operator VkComputePipelineCreateInfo&() { return vkHandle(); };
};

struct VertexInputBindingDescription {
	uint32_t binding {};
	uint32_t stride {};
	VertexInputRate inputRate {};

	const VkVertexInputBindingDescription& vkHandle() const { return reinterpret_cast<const VkVertexInputBindingDescription&>(*this); }
	VkVertexInputBindingDescription& vkHandle() { return reinterpret_cast<VkVertexInputBindingDescription&>(*this); }

	operator const VkVertexInputBindingDescription&() const { return vkHandle(); };
	operator VkVertexInputBindingDescription&() { return vkHandle(); };
};

struct VertexInputAttributeDescription {
	uint32_t location {};
	uint32_t binding {};
	Format format {};
	uint32_t offset {};

	const VkVertexInputAttributeDescription& vkHandle() const { return reinterpret_cast<const VkVertexInputAttributeDescription&>(*this); }
	VkVertexInputAttributeDescription& vkHandle() { return reinterpret_cast<VkVertexInputAttributeDescription&>(*this); }

	operator const VkVertexInputAttributeDescription&() const { return vkHandle(); };
	operator VkVertexInputAttributeDescription&() { return vkHandle(); };
};

struct PipelineVertexInputStateCreateInfo {
	StructureType sType {StructureType::pipelineVertexInputStateCreateInfo};
	const void* pNext {};
	PipelineVertexInputStateCreateFlags flags {};
	uint32_t vertexBindingDescriptionCount {};
	const VertexInputBindingDescription* pVertexBindingDescriptions {};
	uint32_t vertexAttributeDescriptionCount {};
	const VertexInputAttributeDescription* pVertexAttributeDescriptions {};

	constexpr PipelineVertexInputStateCreateInfo(PipelineVertexInputStateCreateFlags xflags = {}, uint32_t xvertexBindingDescriptionCount = {}, const VertexInputBindingDescription* xpVertexBindingDescriptions = {}, uint32_t xvertexAttributeDescriptionCount = {}, const VertexInputAttributeDescription* xpVertexAttributeDescriptions = {}) : flags(xflags), vertexBindingDescriptionCount(xvertexBindingDescriptionCount), pVertexBindingDescriptions(xpVertexBindingDescriptions), vertexAttributeDescriptionCount(xvertexAttributeDescriptionCount), pVertexAttributeDescriptions(xpVertexAttributeDescriptions) {}

	const VkPipelineVertexInputStateCreateInfo& vkHandle() const { return reinterpret_cast<const VkPipelineVertexInputStateCreateInfo&>(*this); }
	VkPipelineVertexInputStateCreateInfo& vkHandle() { return reinterpret_cast<VkPipelineVertexInputStateCreateInfo&>(*this); }

	operator const VkPipelineVertexInputStateCreateInfo&() const { return vkHandle(); };
	operator VkPipelineVertexInputStateCreateInfo&() { return vkHandle(); };
};

struct PipelineInputAssemblyStateCreateInfo {
	StructureType sType {StructureType::pipelineInputAssemblyStateCreateInfo};
	const void* pNext {};
	PipelineInputAssemblyStateCreateFlags flags {};
	PrimitiveTopology topology {};
	Bool32 primitiveRestartEnable {};

	constexpr PipelineInputAssemblyStateCreateInfo(PipelineInputAssemblyStateCreateFlags xflags = {}, PrimitiveTopology xtopology = {}, Bool32 xprimitiveRestartEnable = {}) : flags(xflags), topology(xtopology), primitiveRestartEnable(xprimitiveRestartEnable) {}

	const VkPipelineInputAssemblyStateCreateInfo& vkHandle() const { return reinterpret_cast<const VkPipelineInputAssemblyStateCreateInfo&>(*this); }
	VkPipelineInputAssemblyStateCreateInfo& vkHandle() { return reinterpret_cast<VkPipelineInputAssemblyStateCreateInfo&>(*this); }

	operator const VkPipelineInputAssemblyStateCreateInfo&() const { return vkHandle(); };
	operator VkPipelineInputAssemblyStateCreateInfo&() { return vkHandle(); };
};

struct PipelineTessellationStateCreateInfo {
	StructureType sType {StructureType::pipelineTessellationStateCreateInfo};
	const void* pNext {};
	PipelineTessellationStateCreateFlags flags {};
	uint32_t patchControlPoints {};

	constexpr PipelineTessellationStateCreateInfo(PipelineTessellationStateCreateFlags xflags = {}, uint32_t xpatchControlPoints = {}) : flags(xflags), patchControlPoints(xpatchControlPoints) {}

	const VkPipelineTessellationStateCreateInfo& vkHandle() const { return reinterpret_cast<const VkPipelineTessellationStateCreateInfo&>(*this); }
	VkPipelineTessellationStateCreateInfo& vkHandle() { return reinterpret_cast<VkPipelineTessellationStateCreateInfo&>(*this); }

	operator const VkPipelineTessellationStateCreateInfo&() const { return vkHandle(); };
	operator VkPipelineTessellationStateCreateInfo&() { return vkHandle(); };
};

struct Viewport {
	float x {};
	float y {};
	float width {};
	float height {};
	float minDepth {};
	float maxDepth {};

	const VkViewport& vkHandle() const { return reinterpret_cast<const VkViewport&>(*this); }
	VkViewport& vkHandle() { return reinterpret_cast<VkViewport&>(*this); }

	operator const VkViewport&() const { return vkHandle(); };
	operator VkViewport&() { return vkHandle(); };
};

struct PipelineViewportStateCreateInfo {
	StructureType sType {StructureType::pipelineViewportStateCreateInfo};
	const void* pNext {};
	PipelineViewportStateCreateFlags flags {};
	uint32_t viewportCount {};
	const Viewport* pViewports {};
	uint32_t scissorCount {};
	const Rect2D* pScissors {};

	constexpr PipelineViewportStateCreateInfo(PipelineViewportStateCreateFlags xflags = {}, uint32_t xviewportCount = {}, const Viewport* xpViewports = {}, uint32_t xscissorCount = {}, const Rect2D* xpScissors = {}) : flags(xflags), viewportCount(xviewportCount), pViewports(xpViewports), scissorCount(xscissorCount), pScissors(xpScissors) {}

	const VkPipelineViewportStateCreateInfo& vkHandle() const { return reinterpret_cast<const VkPipelineViewportStateCreateInfo&>(*this); }
	VkPipelineViewportStateCreateInfo& vkHandle() { return reinterpret_cast<VkPipelineViewportStateCreateInfo&>(*this); }

	operator const VkPipelineViewportStateCreateInfo&() const { return vkHandle(); };
	operator VkPipelineViewportStateCreateInfo&() { return vkHandle(); };
};

struct PipelineRasterizationStateCreateInfo {
	StructureType sType {StructureType::pipelineRasterizationStateCreateInfo};
	const void* pNext {};
	PipelineRasterizationStateCreateFlags flags {};
	Bool32 depthClampEnable {};
	Bool32 rasterizerDiscardEnable {};
	PolygonMode polygonMode {};
	CullModeFlags cullMode {};
	FrontFace frontFace {};
	Bool32 depthBiasEnable {};
	float depthBiasConstantFactor {};
	float depthBiasClamp {};
	float depthBiasSlopeFactor {};
	float lineWidth {};

	constexpr PipelineRasterizationStateCreateInfo(PipelineRasterizationStateCreateFlags xflags = {}, Bool32 xdepthClampEnable = {}, Bool32 xrasterizerDiscardEnable = {}, PolygonMode xpolygonMode = {}, CullModeFlags xcullMode = {}, FrontFace xfrontFace = {}, Bool32 xdepthBiasEnable = {}, float xdepthBiasConstantFactor = {}, float xdepthBiasClamp = {}, float xdepthBiasSlopeFactor = {}, float xlineWidth = {}) : flags(xflags), depthClampEnable(xdepthClampEnable), rasterizerDiscardEnable(xrasterizerDiscardEnable), polygonMode(xpolygonMode), cullMode(xcullMode), frontFace(xfrontFace), depthBiasEnable(xdepthBiasEnable), depthBiasConstantFactor(xdepthBiasConstantFactor), depthBiasClamp(xdepthBiasClamp), depthBiasSlopeFactor(xdepthBiasSlopeFactor), lineWidth(xlineWidth) {}

	const VkPipelineRasterizationStateCreateInfo& vkHandle() const { return reinterpret_cast<const VkPipelineRasterizationStateCreateInfo&>(*this); }
	VkPipelineRasterizationStateCreateInfo& vkHandle() { return reinterpret_cast<VkPipelineRasterizationStateCreateInfo&>(*this); }

	operator const VkPipelineRasterizationStateCreateInfo&() const { return vkHandle(); };
	operator VkPipelineRasterizationStateCreateInfo&() { return vkHandle(); };
};

struct PipelineMultisampleStateCreateInfo {
	StructureType sType {StructureType::pipelineMultisampleStateCreateInfo};
	const void* pNext {};
	PipelineMultisampleStateCreateFlags flags {};
	SampleCountBits rasterizationSamples {};
	Bool32 sampleShadingEnable {};
	float minSampleShading {};
	const SampleMask* pSampleMask {};
	Bool32 alphaToCoverageEnable {};
	Bool32 alphaToOneEnable {};

	constexpr PipelineMultisampleStateCreateInfo(PipelineMultisampleStateCreateFlags xflags = {}, SampleCountBits xrasterizationSamples = {}, Bool32 xsampleShadingEnable = {}, float xminSampleShading = {}, const SampleMask* xpSampleMask = {}, Bool32 xalphaToCoverageEnable = {}, Bool32 xalphaToOneEnable = {}) : flags(xflags), rasterizationSamples(xrasterizationSamples), sampleShadingEnable(xsampleShadingEnable), minSampleShading(xminSampleShading), pSampleMask(xpSampleMask), alphaToCoverageEnable(xalphaToCoverageEnable), alphaToOneEnable(xalphaToOneEnable) {}

	const VkPipelineMultisampleStateCreateInfo& vkHandle() const { return reinterpret_cast<const VkPipelineMultisampleStateCreateInfo&>(*this); }
	VkPipelineMultisampleStateCreateInfo& vkHandle() { return reinterpret_cast<VkPipelineMultisampleStateCreateInfo&>(*this); }

	operator const VkPipelineMultisampleStateCreateInfo&() const { return vkHandle(); };
	operator VkPipelineMultisampleStateCreateInfo&() { return vkHandle(); };
};

struct StencilOpState {
	StencilOp failOp {};
	StencilOp passOp {};
	StencilOp depthFailOp {};
	CompareOp compareOp {};
	uint32_t compareMask {};
	uint32_t writeMask {};
	uint32_t reference {};

	const VkStencilOpState& vkHandle() const { return reinterpret_cast<const VkStencilOpState&>(*this); }
	VkStencilOpState& vkHandle() { return reinterpret_cast<VkStencilOpState&>(*this); }

	operator const VkStencilOpState&() const { return vkHandle(); };
	operator VkStencilOpState&() { return vkHandle(); };
};

struct PipelineDepthStencilStateCreateInfo {
	StructureType sType {StructureType::pipelineDepthStencilStateCreateInfo};
	const void* pNext {};
	PipelineDepthStencilStateCreateFlags flags {};
	Bool32 depthTestEnable {};
	Bool32 depthWriteEnable {};
	CompareOp depthCompareOp {};
	Bool32 depthBoundsTestEnable {};
	Bool32 stencilTestEnable {};
	StencilOpState front {};
	StencilOpState back {};
	float minDepthBounds {};
	float maxDepthBounds {};

	constexpr PipelineDepthStencilStateCreateInfo(PipelineDepthStencilStateCreateFlags xflags = {}, Bool32 xdepthTestEnable = {}, Bool32 xdepthWriteEnable = {}, CompareOp xdepthCompareOp = {}, Bool32 xdepthBoundsTestEnable = {}, Bool32 xstencilTestEnable = {}, StencilOpState xfront = {}, StencilOpState xback = {}, float xminDepthBounds = {}, float xmaxDepthBounds = {}) : flags(xflags), depthTestEnable(xdepthTestEnable), depthWriteEnable(xdepthWriteEnable), depthCompareOp(xdepthCompareOp), depthBoundsTestEnable(xdepthBoundsTestEnable), stencilTestEnable(xstencilTestEnable), front(xfront), back(xback), minDepthBounds(xminDepthBounds), maxDepthBounds(xmaxDepthBounds) {}

	const VkPipelineDepthStencilStateCreateInfo& vkHandle() const { return reinterpret_cast<const VkPipelineDepthStencilStateCreateInfo&>(*this); }
	VkPipelineDepthStencilStateCreateInfo& vkHandle() { return reinterpret_cast<VkPipelineDepthStencilStateCreateInfo&>(*this); }

	operator const VkPipelineDepthStencilStateCreateInfo&() const { return vkHandle(); };
	operator VkPipelineDepthStencilStateCreateInfo&() { return vkHandle(); };
};

struct PipelineColorBlendAttachmentState {
	Bool32 blendEnable {};
	BlendFactor srcColorBlendFactor {};
	BlendFactor dstColorBlendFactor {};
	BlendOp colorBlendOp {};
	BlendFactor srcAlphaBlendFactor {};
	BlendFactor dstAlphaBlendFactor {};
	BlendOp alphaBlendOp {};
	ColorComponentFlags colorWriteMask {};

	const VkPipelineColorBlendAttachmentState& vkHandle() const { return reinterpret_cast<const VkPipelineColorBlendAttachmentState&>(*this); }
	VkPipelineColorBlendAttachmentState& vkHandle() { return reinterpret_cast<VkPipelineColorBlendAttachmentState&>(*this); }

	operator const VkPipelineColorBlendAttachmentState&() const { return vkHandle(); };
	operator VkPipelineColorBlendAttachmentState&() { return vkHandle(); };
};

struct PipelineColorBlendStateCreateInfo {
	StructureType sType {StructureType::pipelineColorBlendStateCreateInfo};
	const void* pNext {};
	PipelineColorBlendStateCreateFlags flags {};
	Bool32 logicOpEnable {};
	LogicOp logicOp {};
	uint32_t attachmentCount {};
	const PipelineColorBlendAttachmentState* pAttachments {};
	std::array<float, 4> blendConstants {};

	constexpr PipelineColorBlendStateCreateInfo(PipelineColorBlendStateCreateFlags xflags = {}, Bool32 xlogicOpEnable = {}, LogicOp xlogicOp = {}, uint32_t xattachmentCount = {}, const PipelineColorBlendAttachmentState* xpAttachments = {}, std::array<float, 4> xblendConstants = {}) : flags(xflags), logicOpEnable(xlogicOpEnable), logicOp(xlogicOp), attachmentCount(xattachmentCount), pAttachments(xpAttachments), blendConstants(xblendConstants) {}

	const VkPipelineColorBlendStateCreateInfo& vkHandle() const { return reinterpret_cast<const VkPipelineColorBlendStateCreateInfo&>(*this); }
	VkPipelineColorBlendStateCreateInfo& vkHandle() { return reinterpret_cast<VkPipelineColorBlendStateCreateInfo&>(*this); }

	operator const VkPipelineColorBlendStateCreateInfo&() const { return vkHandle(); };
	operator VkPipelineColorBlendStateCreateInfo&() { return vkHandle(); };
};

struct PipelineDynamicStateCreateInfo {
	StructureType sType {StructureType::pipelineDynamicStateCreateInfo};
	const void* pNext {};
	PipelineDynamicStateCreateFlags flags {};
	uint32_t dynamicStateCount {};
	const DynamicState* pDynamicStates {};

	constexpr PipelineDynamicStateCreateInfo(PipelineDynamicStateCreateFlags xflags = {}, uint32_t xdynamicStateCount = {}, const DynamicState* xpDynamicStates = {}) : flags(xflags), dynamicStateCount(xdynamicStateCount), pDynamicStates(xpDynamicStates) {}

	const VkPipelineDynamicStateCreateInfo& vkHandle() const { return reinterpret_cast<const VkPipelineDynamicStateCreateInfo&>(*this); }
	VkPipelineDynamicStateCreateInfo& vkHandle() { return reinterpret_cast<VkPipelineDynamicStateCreateInfo&>(*this); }

	operator const VkPipelineDynamicStateCreateInfo&() const { return vkHandle(); };
	operator VkPipelineDynamicStateCreateInfo&() { return vkHandle(); };
};

struct GraphicsPipelineCreateInfo {
	StructureType sType {StructureType::graphicsPipelineCreateInfo};
	const void* pNext {};
	PipelineCreateFlags flags {};
	uint32_t stageCount {};
	const PipelineShaderStageCreateInfo* pStages {};
	const PipelineVertexInputStateCreateInfo* pVertexInputState {};
	const PipelineInputAssemblyStateCreateInfo* pInputAssemblyState {};
	const PipelineTessellationStateCreateInfo* pTessellationState {};
	const PipelineViewportStateCreateInfo* pViewportState {};
	const PipelineRasterizationStateCreateInfo* pRasterizationState {};
	const PipelineMultisampleStateCreateInfo* pMultisampleState {};
	const PipelineDepthStencilStateCreateInfo* pDepthStencilState {};
	const PipelineColorBlendStateCreateInfo* pColorBlendState {};
	const PipelineDynamicStateCreateInfo* pDynamicState {};
	PipelineLayout layout {};
	RenderPass renderPass {};
	uint32_t subpass {};
	Pipeline basePipelineHandle {};
	int32_t basePipelineIndex {};

	constexpr GraphicsPipelineCreateInfo(PipelineCreateFlags xflags = {}, uint32_t xstageCount = {}, const PipelineShaderStageCreateInfo* xpStages = {}, const PipelineVertexInputStateCreateInfo* xpVertexInputState = {}, const PipelineInputAssemblyStateCreateInfo* xpInputAssemblyState = {}, const PipelineTessellationStateCreateInfo* xpTessellationState = {}, const PipelineViewportStateCreateInfo* xpViewportState = {}, const PipelineRasterizationStateCreateInfo* xpRasterizationState = {}, const PipelineMultisampleStateCreateInfo* xpMultisampleState = {}, const PipelineDepthStencilStateCreateInfo* xpDepthStencilState = {}, const PipelineColorBlendStateCreateInfo* xpColorBlendState = {}, const PipelineDynamicStateCreateInfo* xpDynamicState = {}, PipelineLayout xlayout = {}, RenderPass xrenderPass = {}, uint32_t xsubpass = {}, Pipeline xbasePipelineHandle = {}, int32_t xbasePipelineIndex = {}) : flags(xflags), stageCount(xstageCount), pStages(xpStages), pVertexInputState(xpVertexInputState), pInputAssemblyState(xpInputAssemblyState), pTessellationState(xpTessellationState), pViewportState(xpViewportState), pRasterizationState(xpRasterizationState), pMultisampleState(xpMultisampleState), pDepthStencilState(xpDepthStencilState), pColorBlendState(xpColorBlendState), pDynamicState(xpDynamicState), layout(xlayout), renderPass(xrenderPass), subpass(xsubpass), basePipelineHandle(xbasePipelineHandle), basePipelineIndex(xbasePipelineIndex) {}

	const VkGraphicsPipelineCreateInfo& vkHandle() const { return reinterpret_cast<const VkGraphicsPipelineCreateInfo&>(*this); }
	VkGraphicsPipelineCreateInfo& vkHandle() { return reinterpret_cast<VkGraphicsPipelineCreateInfo&>(*this); }

	operator const VkGraphicsPipelineCreateInfo&() const { return vkHandle(); };
	operator VkGraphicsPipelineCreateInfo&() { return vkHandle(); };
};

struct PushConstantRange {
	ShaderStageFlags stageFlags {};
	uint32_t offset {};
	uint32_t size {};

	const VkPushConstantRange& vkHandle() const { return reinterpret_cast<const VkPushConstantRange&>(*this); }
	VkPushConstantRange& vkHandle() { return reinterpret_cast<VkPushConstantRange&>(*this); }

	operator const VkPushConstantRange&() const { return vkHandle(); };
	operator VkPushConstantRange&() { return vkHandle(); };
};

struct PipelineLayoutCreateInfo {
	StructureType sType {StructureType::pipelineLayoutCreateInfo};
	const void* pNext {};
	PipelineLayoutCreateFlags flags {};
	uint32_t setLayoutCount {};
	const DescriptorSetLayout* pSetLayouts {};
	uint32_t pushConstantRangeCount {};
	const PushConstantRange* pPushConstantRanges {};

	constexpr PipelineLayoutCreateInfo(PipelineLayoutCreateFlags xflags = {}, uint32_t xsetLayoutCount = {}, const DescriptorSetLayout* xpSetLayouts = {}, uint32_t xpushConstantRangeCount = {}, const PushConstantRange* xpPushConstantRanges = {}) : flags(xflags), setLayoutCount(xsetLayoutCount), pSetLayouts(xpSetLayouts), pushConstantRangeCount(xpushConstantRangeCount), pPushConstantRanges(xpPushConstantRanges) {}

	const VkPipelineLayoutCreateInfo& vkHandle() const { return reinterpret_cast<const VkPipelineLayoutCreateInfo&>(*this); }
	VkPipelineLayoutCreateInfo& vkHandle() { return reinterpret_cast<VkPipelineLayoutCreateInfo&>(*this); }

	operator const VkPipelineLayoutCreateInfo&() const { return vkHandle(); };
	operator VkPipelineLayoutCreateInfo&() { return vkHandle(); };
};

struct SamplerCreateInfo {
	StructureType sType {StructureType::samplerCreateInfo};
	const void* pNext {};
	SamplerCreateFlags flags {};
	Filter magFilter {};
	Filter minFilter {};
	SamplerMipmapMode mipmapMode {};
	SamplerAddressMode addressModeU {};
	SamplerAddressMode addressModeV {};
	SamplerAddressMode addressModeW {};
	float mipLodBias {};
	Bool32 anisotropyEnable {};
	float maxAnisotropy {};
	Bool32 compareEnable {};
	CompareOp compareOp {};
	float minLod {};
	float maxLod {};
	BorderColor borderColor {};
	Bool32 unnormalizedCoordinates {};

	constexpr SamplerCreateInfo(SamplerCreateFlags xflags = {}, Filter xmagFilter = {}, Filter xminFilter = {}, SamplerMipmapMode xmipmapMode = {}, SamplerAddressMode xaddressModeU = {}, SamplerAddressMode xaddressModeV = {}, SamplerAddressMode xaddressModeW = {}, float xmipLodBias = {}, Bool32 xanisotropyEnable = {}, float xmaxAnisotropy = {}, Bool32 xcompareEnable = {}, CompareOp xcompareOp = {}, float xminLod = {}, float xmaxLod = {}, BorderColor xborderColor = {}, Bool32 xunnormalizedCoordinates = {}) : flags(xflags), magFilter(xmagFilter), minFilter(xminFilter), mipmapMode(xmipmapMode), addressModeU(xaddressModeU), addressModeV(xaddressModeV), addressModeW(xaddressModeW), mipLodBias(xmipLodBias), anisotropyEnable(xanisotropyEnable), maxAnisotropy(xmaxAnisotropy), compareEnable(xcompareEnable), compareOp(xcompareOp), minLod(xminLod), maxLod(xmaxLod), borderColor(xborderColor), unnormalizedCoordinates(xunnormalizedCoordinates) {}

	const VkSamplerCreateInfo& vkHandle() const { return reinterpret_cast<const VkSamplerCreateInfo&>(*this); }
	VkSamplerCreateInfo& vkHandle() { return reinterpret_cast<VkSamplerCreateInfo&>(*this); }

	operator const VkSamplerCreateInfo&() const { return vkHandle(); };
	operator VkSamplerCreateInfo&() { return vkHandle(); };
};

struct CopyDescriptorSet {
	StructureType sType {StructureType::copyDescriptorSet};
	const void* pNext {};
	DescriptorSet srcSet {};
	uint32_t srcBinding {};
	uint32_t srcArrayElement {};
	DescriptorSet dstSet {};
	uint32_t dstBinding {};
	uint32_t dstArrayElement {};
	uint32_t descriptorCount {};

	constexpr CopyDescriptorSet(DescriptorSet xsrcSet = {}, uint32_t xsrcBinding = {}, uint32_t xsrcArrayElement = {}, DescriptorSet xdstSet = {}, uint32_t xdstBinding = {}, uint32_t xdstArrayElement = {}, uint32_t xdescriptorCount = {}) : srcSet(xsrcSet), srcBinding(xsrcBinding), srcArrayElement(xsrcArrayElement), dstSet(xdstSet), dstBinding(xdstBinding), dstArrayElement(xdstArrayElement), descriptorCount(xdescriptorCount) {}

	const VkCopyDescriptorSet& vkHandle() const { return reinterpret_cast<const VkCopyDescriptorSet&>(*this); }
	VkCopyDescriptorSet& vkHandle() { return reinterpret_cast<VkCopyDescriptorSet&>(*this); }

	operator const VkCopyDescriptorSet&() const { return vkHandle(); };
	operator VkCopyDescriptorSet&() { return vkHandle(); };
};

struct DescriptorBufferInfo {
	Buffer buffer {};
	DeviceSize offset {};
	DeviceSize range {};

	const VkDescriptorBufferInfo& vkHandle() const { return reinterpret_cast<const VkDescriptorBufferInfo&>(*this); }
	VkDescriptorBufferInfo& vkHandle() { return reinterpret_cast<VkDescriptorBufferInfo&>(*this); }

	operator const VkDescriptorBufferInfo&() const { return vkHandle(); };
	operator VkDescriptorBufferInfo&() { return vkHandle(); };
};

struct DescriptorImageInfo {
	Sampler sampler {};
	ImageView imageView {};
	ImageLayout imageLayout {};

	const VkDescriptorImageInfo& vkHandle() const { return reinterpret_cast<const VkDescriptorImageInfo&>(*this); }
	VkDescriptorImageInfo& vkHandle() { return reinterpret_cast<VkDescriptorImageInfo&>(*this); }

	operator const VkDescriptorImageInfo&() const { return vkHandle(); };
	operator VkDescriptorImageInfo&() { return vkHandle(); };
};

struct DescriptorPoolSize {
	DescriptorType type {};
	uint32_t descriptorCount {};

	const VkDescriptorPoolSize& vkHandle() const { return reinterpret_cast<const VkDescriptorPoolSize&>(*this); }
	VkDescriptorPoolSize& vkHandle() { return reinterpret_cast<VkDescriptorPoolSize&>(*this); }

	operator const VkDescriptorPoolSize&() const { return vkHandle(); };
	operator VkDescriptorPoolSize&() { return vkHandle(); };
};

struct DescriptorPoolCreateInfo {
	StructureType sType {StructureType::descriptorPoolCreateInfo};
	const void* pNext {};
	DescriptorPoolCreateFlags flags {};
	uint32_t maxSets {};
	uint32_t poolSizeCount {};
	const DescriptorPoolSize* pPoolSizes {};

	constexpr DescriptorPoolCreateInfo(DescriptorPoolCreateFlags xflags = {}, uint32_t xmaxSets = {}, uint32_t xpoolSizeCount = {}, const DescriptorPoolSize* xpPoolSizes = {}) : flags(xflags), maxSets(xmaxSets), poolSizeCount(xpoolSizeCount), pPoolSizes(xpPoolSizes) {}

	const VkDescriptorPoolCreateInfo& vkHandle() const { return reinterpret_cast<const VkDescriptorPoolCreateInfo&>(*this); }
	VkDescriptorPoolCreateInfo& vkHandle() { return reinterpret_cast<VkDescriptorPoolCreateInfo&>(*this); }

	operator const VkDescriptorPoolCreateInfo&() const { return vkHandle(); };
	operator VkDescriptorPoolCreateInfo&() { return vkHandle(); };
};

struct DescriptorSetAllocateInfo {
	StructureType sType {StructureType::descriptorSetAllocateInfo};
	const void* pNext {};
	DescriptorPool descriptorPool {};
	uint32_t descriptorSetCount {};
	const DescriptorSetLayout* pSetLayouts {};

	constexpr DescriptorSetAllocateInfo(DescriptorPool xdescriptorPool = {}, uint32_t xdescriptorSetCount = {}, const DescriptorSetLayout* xpSetLayouts = {}) : descriptorPool(xdescriptorPool), descriptorSetCount(xdescriptorSetCount), pSetLayouts(xpSetLayouts) {}

	const VkDescriptorSetAllocateInfo& vkHandle() const { return reinterpret_cast<const VkDescriptorSetAllocateInfo&>(*this); }
	VkDescriptorSetAllocateInfo& vkHandle() { return reinterpret_cast<VkDescriptorSetAllocateInfo&>(*this); }

	operator const VkDescriptorSetAllocateInfo&() const { return vkHandle(); };
	operator VkDescriptorSetAllocateInfo&() { return vkHandle(); };
};

struct WriteDescriptorSet {
	StructureType sType {StructureType::writeDescriptorSet};
	const void* pNext {};
	DescriptorSet dstSet {};
	uint32_t dstBinding {};
	uint32_t dstArrayElement {};
	uint32_t descriptorCount {};
	DescriptorType descriptorType {};
	const DescriptorImageInfo* pImageInfo {};
	const DescriptorBufferInfo* pBufferInfo {};
	const BufferView* pTexelBufferView {};

	constexpr WriteDescriptorSet(DescriptorSet xdstSet = {}, uint32_t xdstBinding = {}, uint32_t xdstArrayElement = {}, uint32_t xdescriptorCount = {}, DescriptorType xdescriptorType = {}, const DescriptorImageInfo* xpImageInfo = {}, const DescriptorBufferInfo* xpBufferInfo = {}, const BufferView* xpTexelBufferView = {}) : dstSet(xdstSet), dstBinding(xdstBinding), dstArrayElement(xdstArrayElement), descriptorCount(xdescriptorCount), descriptorType(xdescriptorType), pImageInfo(xpImageInfo), pBufferInfo(xpBufferInfo), pTexelBufferView(xpTexelBufferView) {}

	const VkWriteDescriptorSet& vkHandle() const { return reinterpret_cast<const VkWriteDescriptorSet&>(*this); }
	VkWriteDescriptorSet& vkHandle() { return reinterpret_cast<VkWriteDescriptorSet&>(*this); }

	operator const VkWriteDescriptorSet&() const { return vkHandle(); };
	operator VkWriteDescriptorSet&() { return vkHandle(); };
};

struct AttachmentDescription {
	AttachmentDescriptionFlags flags {};
	Format format {};
	SampleCountBits samples {};
	AttachmentLoadOp loadOp {};
	AttachmentStoreOp storeOp {};
	AttachmentLoadOp stencilLoadOp {};
	AttachmentStoreOp stencilStoreOp {};
	ImageLayout initialLayout {};
	ImageLayout finalLayout {};

	const VkAttachmentDescription& vkHandle() const { return reinterpret_cast<const VkAttachmentDescription&>(*this); }
	VkAttachmentDescription& vkHandle() { return reinterpret_cast<VkAttachmentDescription&>(*this); }

	operator const VkAttachmentDescription&() const { return vkHandle(); };
	operator VkAttachmentDescription&() { return vkHandle(); };
};

struct AttachmentReference {
	uint32_t attachment {};
	ImageLayout layout {};

	const VkAttachmentReference& vkHandle() const { return reinterpret_cast<const VkAttachmentReference&>(*this); }
	VkAttachmentReference& vkHandle() { return reinterpret_cast<VkAttachmentReference&>(*this); }

	operator const VkAttachmentReference&() const { return vkHandle(); };
	operator VkAttachmentReference&() { return vkHandle(); };
};

struct FramebufferCreateInfo {
	StructureType sType {StructureType::framebufferCreateInfo};
	const void* pNext {};
	FramebufferCreateFlags flags {};
	RenderPass renderPass {};
	uint32_t attachmentCount {};
	const ImageView* pAttachments {};
	uint32_t width {};
	uint32_t height {};
	uint32_t layers {};

	constexpr FramebufferCreateInfo(FramebufferCreateFlags xflags = {}, RenderPass xrenderPass = {}, uint32_t xattachmentCount = {}, const ImageView* xpAttachments = {}, uint32_t xwidth = {}, uint32_t xheight = {}, uint32_t xlayers = {}) : flags(xflags), renderPass(xrenderPass), attachmentCount(xattachmentCount), pAttachments(xpAttachments), width(xwidth), height(xheight), layers(xlayers) {}

	const VkFramebufferCreateInfo& vkHandle() const { return reinterpret_cast<const VkFramebufferCreateInfo&>(*this); }
	VkFramebufferCreateInfo& vkHandle() { return reinterpret_cast<VkFramebufferCreateInfo&>(*this); }

	operator const VkFramebufferCreateInfo&() const { return vkHandle(); };
	operator VkFramebufferCreateInfo&() { return vkHandle(); };
};

struct SubpassDescription {
	SubpassDescriptionFlags flags {};
	PipelineBindPoint pipelineBindPoint {};
	uint32_t inputAttachmentCount {};
	const AttachmentReference* pInputAttachments {};
	uint32_t colorAttachmentCount {};
	const AttachmentReference* pColorAttachments {};
	const AttachmentReference* pResolveAttachments {};
	const AttachmentReference* pDepthStencilAttachment {};
	uint32_t preserveAttachmentCount {};
	const uint32_t* pPreserveAttachments {};

	const VkSubpassDescription& vkHandle() const { return reinterpret_cast<const VkSubpassDescription&>(*this); }
	VkSubpassDescription& vkHandle() { return reinterpret_cast<VkSubpassDescription&>(*this); }

	operator const VkSubpassDescription&() const { return vkHandle(); };
	operator VkSubpassDescription&() { return vkHandle(); };
};

struct SubpassDependency {
	uint32_t srcSubpass {};
	uint32_t dstSubpass {};
	PipelineStageFlags srcStageMask {};
	PipelineStageFlags dstStageMask {};
	AccessFlags srcAccessMask {};
	AccessFlags dstAccessMask {};
	DependencyFlags dependencyFlags {};

	const VkSubpassDependency& vkHandle() const { return reinterpret_cast<const VkSubpassDependency&>(*this); }
	VkSubpassDependency& vkHandle() { return reinterpret_cast<VkSubpassDependency&>(*this); }

	operator const VkSubpassDependency&() const { return vkHandle(); };
	operator VkSubpassDependency&() { return vkHandle(); };
};

struct RenderPassCreateInfo {
	StructureType sType {StructureType::renderPassCreateInfo};
	const void* pNext {};
	RenderPassCreateFlags flags {};
	uint32_t attachmentCount {};
	const AttachmentDescription* pAttachments {};
	uint32_t subpassCount {};
	const SubpassDescription* pSubpasses {};
	uint32_t dependencyCount {};
	const SubpassDependency* pDependencies {};

	constexpr RenderPassCreateInfo(RenderPassCreateFlags xflags = {}, uint32_t xattachmentCount = {}, const AttachmentDescription* xpAttachments = {}, uint32_t xsubpassCount = {}, const SubpassDescription* xpSubpasses = {}, uint32_t xdependencyCount = {}, const SubpassDependency* xpDependencies = {}) : flags(xflags), attachmentCount(xattachmentCount), pAttachments(xpAttachments), subpassCount(xsubpassCount), pSubpasses(xpSubpasses), dependencyCount(xdependencyCount), pDependencies(xpDependencies) {}

	const VkRenderPassCreateInfo& vkHandle() const { return reinterpret_cast<const VkRenderPassCreateInfo&>(*this); }
	VkRenderPassCreateInfo& vkHandle() { return reinterpret_cast<VkRenderPassCreateInfo&>(*this); }

	operator const VkRenderPassCreateInfo&() const { return vkHandle(); };
	operator VkRenderPassCreateInfo&() { return vkHandle(); };
};

struct CommandPoolCreateInfo {
	StructureType sType {StructureType::commandPoolCreateInfo};
	const void* pNext {};
	CommandPoolCreateFlags flags {};
	uint32_t queueFamilyIndex {};

	constexpr CommandPoolCreateInfo(CommandPoolCreateFlags xflags = {}, uint32_t xqueueFamilyIndex = {}) : flags(xflags), queueFamilyIndex(xqueueFamilyIndex) {}

	const VkCommandPoolCreateInfo& vkHandle() const { return reinterpret_cast<const VkCommandPoolCreateInfo&>(*this); }
	VkCommandPoolCreateInfo& vkHandle() { return reinterpret_cast<VkCommandPoolCreateInfo&>(*this); }

	operator const VkCommandPoolCreateInfo&() const { return vkHandle(); };
	operator VkCommandPoolCreateInfo&() { return vkHandle(); };
};

struct CommandBufferAllocateInfo {
	StructureType sType {StructureType::commandBufferAllocateInfo};
	const void* pNext {};
	CommandPool commandPool {};
	CommandBufferLevel level {};
	uint32_t commandBufferCount {};

	constexpr CommandBufferAllocateInfo(CommandPool xcommandPool = {}, CommandBufferLevel xlevel = {}, uint32_t xcommandBufferCount = {}) : commandPool(xcommandPool), level(xlevel), commandBufferCount(xcommandBufferCount) {}

	const VkCommandBufferAllocateInfo& vkHandle() const { return reinterpret_cast<const VkCommandBufferAllocateInfo&>(*this); }
	VkCommandBufferAllocateInfo& vkHandle() { return reinterpret_cast<VkCommandBufferAllocateInfo&>(*this); }

	operator const VkCommandBufferAllocateInfo&() const { return vkHandle(); };
	operator VkCommandBufferAllocateInfo&() { return vkHandle(); };
};

struct CommandBufferInheritanceInfo {
	StructureType sType {StructureType::commandBufferInheritanceInfo};
	const void* pNext {};
	RenderPass renderPass {};
	uint32_t subpass {};
	Framebuffer framebuffer {};
	Bool32 occlusionQueryEnable {};
	QueryControlFlags queryFlags {};
	QueryPipelineStatisticFlags pipelineStatistics {};

	constexpr CommandBufferInheritanceInfo(RenderPass xrenderPass = {}, uint32_t xsubpass = {}, Framebuffer xframebuffer = {}, Bool32 xocclusionQueryEnable = {}, QueryControlFlags xqueryFlags = {}, QueryPipelineStatisticFlags xpipelineStatistics = {}) : renderPass(xrenderPass), subpass(xsubpass), framebuffer(xframebuffer), occlusionQueryEnable(xocclusionQueryEnable), queryFlags(xqueryFlags), pipelineStatistics(xpipelineStatistics) {}

	const VkCommandBufferInheritanceInfo& vkHandle() const { return reinterpret_cast<const VkCommandBufferInheritanceInfo&>(*this); }
	VkCommandBufferInheritanceInfo& vkHandle() { return reinterpret_cast<VkCommandBufferInheritanceInfo&>(*this); }

	operator const VkCommandBufferInheritanceInfo&() const { return vkHandle(); };
	operator VkCommandBufferInheritanceInfo&() { return vkHandle(); };
};

struct CommandBufferBeginInfo {
	StructureType sType {StructureType::commandBufferBeginInfo};
	const void* pNext {};
	CommandBufferUsageFlags flags {};
	const CommandBufferInheritanceInfo* pInheritanceInfo {};

	constexpr CommandBufferBeginInfo(CommandBufferUsageFlags xflags = {}, const CommandBufferInheritanceInfo* xpInheritanceInfo = {}) : flags(xflags), pInheritanceInfo(xpInheritanceInfo) {}

	const VkCommandBufferBeginInfo& vkHandle() const { return reinterpret_cast<const VkCommandBufferBeginInfo&>(*this); }
	VkCommandBufferBeginInfo& vkHandle() { return reinterpret_cast<VkCommandBufferBeginInfo&>(*this); }

	operator const VkCommandBufferBeginInfo&() const { return vkHandle(); };
	operator VkCommandBufferBeginInfo&() { return vkHandle(); };
};

struct BufferCopy {
	DeviceSize srcOffset {};
	DeviceSize dstOffset {};
	DeviceSize size {};

	const VkBufferCopy& vkHandle() const { return reinterpret_cast<const VkBufferCopy&>(*this); }
	VkBufferCopy& vkHandle() { return reinterpret_cast<VkBufferCopy&>(*this); }

	operator const VkBufferCopy&() const { return vkHandle(); };
	operator VkBufferCopy&() { return vkHandle(); };
};

struct ImageSubresourceLayers {
	ImageAspectFlags aspectMask {};
	uint32_t mipLevel {};
	uint32_t baseArrayLayer {};
	uint32_t layerCount {};

	const VkImageSubresourceLayers& vkHandle() const { return reinterpret_cast<const VkImageSubresourceLayers&>(*this); }
	VkImageSubresourceLayers& vkHandle() { return reinterpret_cast<VkImageSubresourceLayers&>(*this); }

	operator const VkImageSubresourceLayers&() const { return vkHandle(); };
	operator VkImageSubresourceLayers&() { return vkHandle(); };
};

struct BufferImageCopy {
	DeviceSize bufferOffset {};
	uint32_t bufferRowLength {};
	uint32_t bufferImageHeight {};
	ImageSubresourceLayers imageSubresource {};
	Offset3D imageOffset {};
	Extent3D imageExtent {};

	const VkBufferImageCopy& vkHandle() const { return reinterpret_cast<const VkBufferImageCopy&>(*this); }
	VkBufferImageCopy& vkHandle() { return reinterpret_cast<VkBufferImageCopy&>(*this); }

	operator const VkBufferImageCopy&() const { return vkHandle(); };
	operator VkBufferImageCopy&() { return vkHandle(); };
};

struct ClearAttachment {
	ImageAspectFlags aspectMask {};
	uint32_t colorAttachment {};
	ClearValue clearValue {};

	const VkClearAttachment& vkHandle() const { return reinterpret_cast<const VkClearAttachment&>(*this); }
	VkClearAttachment& vkHandle() { return reinterpret_cast<VkClearAttachment&>(*this); }

	operator const VkClearAttachment&() const { return vkHandle(); };
	operator VkClearAttachment&() { return vkHandle(); };
};

struct ClearRect {
	Rect2D rect {};
	uint32_t baseArrayLayer {};
	uint32_t layerCount {};

	const VkClearRect& vkHandle() const { return reinterpret_cast<const VkClearRect&>(*this); }
	VkClearRect& vkHandle() { return reinterpret_cast<VkClearRect&>(*this); }

	operator const VkClearRect&() const { return vkHandle(); };
	operator VkClearRect&() { return vkHandle(); };
};

struct ImageBlit {
	ImageSubresourceLayers srcSubresource {};
	std::array<Offset3D, 2> srcOffsets {};
	ImageSubresourceLayers dstSubresource {};
	std::array<Offset3D, 2> dstOffsets {};

	const VkImageBlit& vkHandle() const { return reinterpret_cast<const VkImageBlit&>(*this); }
	VkImageBlit& vkHandle() { return reinterpret_cast<VkImageBlit&>(*this); }

	operator const VkImageBlit&() const { return vkHandle(); };
	operator VkImageBlit&() { return vkHandle(); };
};

struct ImageCopy {
	ImageSubresourceLayers srcSubresource {};
	Offset3D srcOffset {};
	ImageSubresourceLayers dstSubresource {};
	Offset3D dstOffset {};
	Extent3D extent {};

	const VkImageCopy& vkHandle() const { return reinterpret_cast<const VkImageCopy&>(*this); }
	VkImageCopy& vkHandle() { return reinterpret_cast<VkImageCopy&>(*this); }

	operator const VkImageCopy&() const { return vkHandle(); };
	operator VkImageCopy&() { return vkHandle(); };
};

struct ImageResolve {
	ImageSubresourceLayers srcSubresource {};
	Offset3D srcOffset {};
	ImageSubresourceLayers dstSubresource {};
	Offset3D dstOffset {};
	Extent3D extent {};

	const VkImageResolve& vkHandle() const { return reinterpret_cast<const VkImageResolve&>(*this); }
	VkImageResolve& vkHandle() { return reinterpret_cast<VkImageResolve&>(*this); }

	operator const VkImageResolve&() const { return vkHandle(); };
	operator VkImageResolve&() { return vkHandle(); };
};


struct SurfaceCapabilitiesKHR {
	uint32_t minImageCount {};
	uint32_t maxImageCount {};
	Extent2D currentExtent {};
	Extent2D minImageExtent {};
	Extent2D maxImageExtent {};
	uint32_t maxImageArrayLayers {};
	SurfaceTransformFlagsKHR supportedTransforms {};
	SurfaceTransformBitsKHR currentTransform {};
	CompositeAlphaFlagsKHR supportedCompositeAlpha {};
	ImageUsageFlags supportedUsageFlags {};

	const VkSurfaceCapabilitiesKHR& vkHandle() const { return reinterpret_cast<const VkSurfaceCapabilitiesKHR&>(*this); }
	VkSurfaceCapabilitiesKHR& vkHandle() { return reinterpret_cast<VkSurfaceCapabilitiesKHR&>(*this); }

	operator const VkSurfaceCapabilitiesKHR&() const { return vkHandle(); };
	operator VkSurfaceCapabilitiesKHR&() { return vkHandle(); };
};

struct SurfaceFormatKHR {
	Format format {};
	ColorSpaceKHR colorSpace {};

	const VkSurfaceFormatKHR& vkHandle() const { return reinterpret_cast<const VkSurfaceFormatKHR&>(*this); }
	VkSurfaceFormatKHR& vkHandle() { return reinterpret_cast<VkSurfaceFormatKHR&>(*this); }

	operator const VkSurfaceFormatKHR&() const { return vkHandle(); };
	operator VkSurfaceFormatKHR&() { return vkHandle(); };
};


struct SwapchainCreateInfoKHR {
	StructureType sType {StructureType::swapchainCreateInfoKHR};
	const void* pNext {};
	SwapchainCreateFlagsKHR flags {};
	SurfaceKHR surface {};
	uint32_t minImageCount {};
	Format imageFormat {};
	ColorSpaceKHR imageColorSpace {};
	Extent2D imageExtent {};
	uint32_t imageArrayLayers {};
	ImageUsageFlags imageUsage {};
	SharingMode imageSharingMode {};
	uint32_t queueFamilyIndexCount {};
	const uint32_t* pQueueFamilyIndices {};
	SurfaceTransformBitsKHR preTransform {};
	CompositeAlphaBitsKHR compositeAlpha {};
	PresentModeKHR presentMode {};
	Bool32 clipped {};
	SwapchainKHR oldSwapchain {};

	constexpr SwapchainCreateInfoKHR(SwapchainCreateFlagsKHR xflags = {}, SurfaceKHR xsurface = {}, uint32_t xminImageCount = {}, Format ximageFormat = {}, ColorSpaceKHR ximageColorSpace = {}, Extent2D ximageExtent = {}, uint32_t ximageArrayLayers = {}, ImageUsageFlags ximageUsage = {}, SharingMode ximageSharingMode = {}, uint32_t xqueueFamilyIndexCount = {}, const uint32_t* xpQueueFamilyIndices = {}, SurfaceTransformBitsKHR xpreTransform = {}, CompositeAlphaBitsKHR xcompositeAlpha = {}, PresentModeKHR xpresentMode = {}, Bool32 xclipped = {}, SwapchainKHR xoldSwapchain = {}) : flags(xflags), surface(xsurface), minImageCount(xminImageCount), imageFormat(ximageFormat), imageColorSpace(ximageColorSpace), imageExtent(ximageExtent), imageArrayLayers(ximageArrayLayers), imageUsage(ximageUsage), imageSharingMode(ximageSharingMode), queueFamilyIndexCount(xqueueFamilyIndexCount), pQueueFamilyIndices(xpQueueFamilyIndices), preTransform(xpreTransform), compositeAlpha(xcompositeAlpha), presentMode(xpresentMode), clipped(xclipped), oldSwapchain(xoldSwapchain) {}

	const VkSwapchainCreateInfoKHR& vkHandle() const { return reinterpret_cast<const VkSwapchainCreateInfoKHR&>(*this); }
	VkSwapchainCreateInfoKHR& vkHandle() { return reinterpret_cast<VkSwapchainCreateInfoKHR&>(*this); }

	operator const VkSwapchainCreateInfoKHR&() const { return vkHandle(); };
	operator VkSwapchainCreateInfoKHR&() { return vkHandle(); };
};

struct PresentInfoKHR {
	StructureType sType {StructureType::presentInfoKHR};
	const void* pNext {};
	uint32_t waitSemaphoreCount {};
	const Semaphore* pWaitSemaphores {};
	uint32_t swapchainCount {};
	const SwapchainKHR* pSwapchains {};
	const uint32_t* pImageIndices {};
	Result* pResults {};

	constexpr PresentInfoKHR(uint32_t xwaitSemaphoreCount = {}, const Semaphore* xpWaitSemaphores = {}, uint32_t xswapchainCount = {}, const SwapchainKHR* xpSwapchains = {}, const uint32_t* xpImageIndices = {}, Result* xpResults = {}) : waitSemaphoreCount(xwaitSemaphoreCount), pWaitSemaphores(xpWaitSemaphores), swapchainCount(xswapchainCount), pSwapchains(xpSwapchains), pImageIndices(xpImageIndices), pResults(xpResults) {}

	const VkPresentInfoKHR& vkHandle() const { return reinterpret_cast<const VkPresentInfoKHR&>(*this); }
	VkPresentInfoKHR& vkHandle() { return reinterpret_cast<VkPresentInfoKHR&>(*this); }

	operator const VkPresentInfoKHR&() const { return vkHandle(); };
	operator VkPresentInfoKHR&() { return vkHandle(); };
};

struct ImageSwapchainCreateInfoKHR {
	StructureType sType {StructureType::imageSwapchainCreateInfoKHR};
	const void* pNext {};
	SwapchainKHR swapchain {};

	constexpr ImageSwapchainCreateInfoKHR(SwapchainKHR xswapchain = {}) : swapchain(xswapchain) {}

	const VkImageSwapchainCreateInfoKHR& vkHandle() const { return reinterpret_cast<const VkImageSwapchainCreateInfoKHR&>(*this); }
	VkImageSwapchainCreateInfoKHR& vkHandle() { return reinterpret_cast<VkImageSwapchainCreateInfoKHR&>(*this); }

	operator const VkImageSwapchainCreateInfoKHR&() const { return vkHandle(); };
	operator VkImageSwapchainCreateInfoKHR&() { return vkHandle(); };
};

struct BindImageMemorySwapchainInfoKHR {
	StructureType sType {StructureType::bindImageMemorySwapchainInfoKHR};
	const void* pNext {};
	SwapchainKHR swapchain {};
	uint32_t imageIndex {};

	constexpr BindImageMemorySwapchainInfoKHR(SwapchainKHR xswapchain = {}, uint32_t ximageIndex = {}) : swapchain(xswapchain), imageIndex(ximageIndex) {}

	const VkBindImageMemorySwapchainInfoKHR& vkHandle() const { return reinterpret_cast<const VkBindImageMemorySwapchainInfoKHR&>(*this); }
	VkBindImageMemorySwapchainInfoKHR& vkHandle() { return reinterpret_cast<VkBindImageMemorySwapchainInfoKHR&>(*this); }

	operator const VkBindImageMemorySwapchainInfoKHR&() const { return vkHandle(); };
	operator VkBindImageMemorySwapchainInfoKHR&() { return vkHandle(); };
};

struct AcquireNextImageInfoKHR {
	StructureType sType {StructureType::acquireNextImageInfoKHR};
	const void* pNext {};
	SwapchainKHR swapchain {};
	uint64_t timeout {};
	Semaphore semaphore {};
	Fence fence {};
	uint32_t deviceMask {};

	constexpr AcquireNextImageInfoKHR(SwapchainKHR xswapchain = {}, uint64_t xtimeout = {}, Semaphore xsemaphore = {}, Fence xfence = {}, uint32_t xdeviceMask = {}) : swapchain(xswapchain), timeout(xtimeout), semaphore(xsemaphore), fence(xfence), deviceMask(xdeviceMask) {}

	const VkAcquireNextImageInfoKHR& vkHandle() const { return reinterpret_cast<const VkAcquireNextImageInfoKHR&>(*this); }
	VkAcquireNextImageInfoKHR& vkHandle() { return reinterpret_cast<VkAcquireNextImageInfoKHR&>(*this); }

	operator const VkAcquireNextImageInfoKHR&() const { return vkHandle(); };
	operator VkAcquireNextImageInfoKHR&() { return vkHandle(); };
};

struct DeviceGroupPresentCapabilitiesKHR {
	StructureType sType {StructureType::deviceGroupPresentCapabilitiesKHR};
	const void* pNext {};
	std::array<uint32_t, maxDeviceGroupSize> presentMask {};
	DeviceGroupPresentModeFlagsKHR modes {};

	const VkDeviceGroupPresentCapabilitiesKHR& vkHandle() const { return reinterpret_cast<const VkDeviceGroupPresentCapabilitiesKHR&>(*this); }
	VkDeviceGroupPresentCapabilitiesKHR& vkHandle() { return reinterpret_cast<VkDeviceGroupPresentCapabilitiesKHR&>(*this); }

	operator const VkDeviceGroupPresentCapabilitiesKHR&() const { return vkHandle(); };
	operator VkDeviceGroupPresentCapabilitiesKHR&() { return vkHandle(); };
};

struct DeviceGroupPresentInfoKHR {
	StructureType sType {StructureType::deviceGroupPresentInfoKHR};
	const void* pNext {};
	uint32_t swapchainCount {};
	const uint32_t* pDeviceMasks {};
	DeviceGroupPresentModeBitsKHR mode {};

	constexpr DeviceGroupPresentInfoKHR(uint32_t xswapchainCount = {}, const uint32_t* xpDeviceMasks = {}, DeviceGroupPresentModeBitsKHR xmode = {}) : swapchainCount(xswapchainCount), pDeviceMasks(xpDeviceMasks), mode(xmode) {}

	const VkDeviceGroupPresentInfoKHR& vkHandle() const { return reinterpret_cast<const VkDeviceGroupPresentInfoKHR&>(*this); }
	VkDeviceGroupPresentInfoKHR& vkHandle() { return reinterpret_cast<VkDeviceGroupPresentInfoKHR&>(*this); }

	operator const VkDeviceGroupPresentInfoKHR&() const { return vkHandle(); };
	operator VkDeviceGroupPresentInfoKHR&() { return vkHandle(); };
};

struct DeviceGroupSwapchainCreateInfoKHR {
	StructureType sType {StructureType::deviceGroupSwapchainCreateInfoKHR};
	const void* pNext {};
	DeviceGroupPresentModeFlagsKHR modes {};

	constexpr DeviceGroupSwapchainCreateInfoKHR(DeviceGroupPresentModeFlagsKHR xmodes = {}) : modes(xmodes) {}

	const VkDeviceGroupSwapchainCreateInfoKHR& vkHandle() const { return reinterpret_cast<const VkDeviceGroupSwapchainCreateInfoKHR&>(*this); }
	VkDeviceGroupSwapchainCreateInfoKHR& vkHandle() { return reinterpret_cast<VkDeviceGroupSwapchainCreateInfoKHR&>(*this); }

	operator const VkDeviceGroupSwapchainCreateInfoKHR&() const { return vkHandle(); };
	operator VkDeviceGroupSwapchainCreateInfoKHR&() { return vkHandle(); };
};


struct DisplayModeParametersKHR {
	Extent2D visibleRegion {};
	uint32_t refreshRate {};

	const VkDisplayModeParametersKHR& vkHandle() const { return reinterpret_cast<const VkDisplayModeParametersKHR&>(*this); }
	VkDisplayModeParametersKHR& vkHandle() { return reinterpret_cast<VkDisplayModeParametersKHR&>(*this); }

	operator const VkDisplayModeParametersKHR&() const { return vkHandle(); };
	operator VkDisplayModeParametersKHR&() { return vkHandle(); };
};

struct DisplayModeCreateInfoKHR {
	StructureType sType {StructureType::displayModeCreateInfoKHR};
	const void* pNext {};
	DisplayModeCreateFlagsKHR flags {};
	DisplayModeParametersKHR parameters {};

	constexpr DisplayModeCreateInfoKHR(DisplayModeCreateFlagsKHR xflags = {}, DisplayModeParametersKHR xparameters = {}) : flags(xflags), parameters(xparameters) {}

	const VkDisplayModeCreateInfoKHR& vkHandle() const { return reinterpret_cast<const VkDisplayModeCreateInfoKHR&>(*this); }
	VkDisplayModeCreateInfoKHR& vkHandle() { return reinterpret_cast<VkDisplayModeCreateInfoKHR&>(*this); }

	operator const VkDisplayModeCreateInfoKHR&() const { return vkHandle(); };
	operator VkDisplayModeCreateInfoKHR&() { return vkHandle(); };
};

struct DisplayModePropertiesKHR {
	DisplayModeKHR displayMode {};
	DisplayModeParametersKHR parameters {};

	const VkDisplayModePropertiesKHR& vkHandle() const { return reinterpret_cast<const VkDisplayModePropertiesKHR&>(*this); }
	VkDisplayModePropertiesKHR& vkHandle() { return reinterpret_cast<VkDisplayModePropertiesKHR&>(*this); }

	operator const VkDisplayModePropertiesKHR&() const { return vkHandle(); };
	operator VkDisplayModePropertiesKHR&() { return vkHandle(); };
};

struct DisplayPlaneCapabilitiesKHR {
	DisplayPlaneAlphaFlagsKHR supportedAlpha {};
	Offset2D minSrcPosition {};
	Offset2D maxSrcPosition {};
	Extent2D minSrcExtent {};
	Extent2D maxSrcExtent {};
	Offset2D minDstPosition {};
	Offset2D maxDstPosition {};
	Extent2D minDstExtent {};
	Extent2D maxDstExtent {};

	const VkDisplayPlaneCapabilitiesKHR& vkHandle() const { return reinterpret_cast<const VkDisplayPlaneCapabilitiesKHR&>(*this); }
	VkDisplayPlaneCapabilitiesKHR& vkHandle() { return reinterpret_cast<VkDisplayPlaneCapabilitiesKHR&>(*this); }

	operator const VkDisplayPlaneCapabilitiesKHR&() const { return vkHandle(); };
	operator VkDisplayPlaneCapabilitiesKHR&() { return vkHandle(); };
};

struct DisplayPlanePropertiesKHR {
	DisplayKHR currentDisplay {};
	uint32_t currentStackIndex {};

	const VkDisplayPlanePropertiesKHR& vkHandle() const { return reinterpret_cast<const VkDisplayPlanePropertiesKHR&>(*this); }
	VkDisplayPlanePropertiesKHR& vkHandle() { return reinterpret_cast<VkDisplayPlanePropertiesKHR&>(*this); }

	operator const VkDisplayPlanePropertiesKHR&() const { return vkHandle(); };
	operator VkDisplayPlanePropertiesKHR&() { return vkHandle(); };
};

struct DisplayPropertiesKHR {
	DisplayKHR display {};
	const char* displayName {};
	Extent2D physicalDimensions {};
	Extent2D physicalResolution {};
	SurfaceTransformFlagsKHR supportedTransforms {};
	Bool32 planeReorderPossible {};
	Bool32 persistentContent {};

	const VkDisplayPropertiesKHR& vkHandle() const { return reinterpret_cast<const VkDisplayPropertiesKHR&>(*this); }
	VkDisplayPropertiesKHR& vkHandle() { return reinterpret_cast<VkDisplayPropertiesKHR&>(*this); }

	operator const VkDisplayPropertiesKHR&() const { return vkHandle(); };
	operator VkDisplayPropertiesKHR&() { return vkHandle(); };
};

struct DisplaySurfaceCreateInfoKHR {
	StructureType sType {StructureType::displaySurfaceCreateInfoKHR};
	const void* pNext {};
	DisplaySurfaceCreateFlagsKHR flags {};
	DisplayModeKHR displayMode {};
	uint32_t planeIndex {};
	uint32_t planeStackIndex {};
	SurfaceTransformBitsKHR transform {};
	float globalAlpha {};
	DisplayPlaneAlphaBitsKHR alphaMode {};
	Extent2D imageExtent {};

	constexpr DisplaySurfaceCreateInfoKHR(DisplaySurfaceCreateFlagsKHR xflags = {}, DisplayModeKHR xdisplayMode = {}, uint32_t xplaneIndex = {}, uint32_t xplaneStackIndex = {}, SurfaceTransformBitsKHR xtransform = {}, float xglobalAlpha = {}, DisplayPlaneAlphaBitsKHR xalphaMode = {}, Extent2D ximageExtent = {}) : flags(xflags), displayMode(xdisplayMode), planeIndex(xplaneIndex), planeStackIndex(xplaneStackIndex), transform(xtransform), globalAlpha(xglobalAlpha), alphaMode(xalphaMode), imageExtent(ximageExtent) {}

	const VkDisplaySurfaceCreateInfoKHR& vkHandle() const { return reinterpret_cast<const VkDisplaySurfaceCreateInfoKHR&>(*this); }
	VkDisplaySurfaceCreateInfoKHR& vkHandle() { return reinterpret_cast<VkDisplaySurfaceCreateInfoKHR&>(*this); }

	operator const VkDisplaySurfaceCreateInfoKHR&() const { return vkHandle(); };
	operator VkDisplaySurfaceCreateInfoKHR&() { return vkHandle(); };
};


struct DisplayPresentInfoKHR {
	StructureType sType {StructureType::displayPresentInfoKHR};
	const void* pNext {};
	Rect2D srcRect {};
	Rect2D dstRect {};
	Bool32 persistent {};

	constexpr DisplayPresentInfoKHR(Rect2D xsrcRect = {}, Rect2D xdstRect = {}, Bool32 xpersistent = {}) : srcRect(xsrcRect), dstRect(xdstRect), persistent(xpersistent) {}

	const VkDisplayPresentInfoKHR& vkHandle() const { return reinterpret_cast<const VkDisplayPresentInfoKHR&>(*this); }
	VkDisplayPresentInfoKHR& vkHandle() { return reinterpret_cast<VkDisplayPresentInfoKHR&>(*this); }

	operator const VkDisplayPresentInfoKHR&() const { return vkHandle(); };
	operator VkDisplayPresentInfoKHR&() { return vkHandle(); };
};



#ifdef VK_USE_PLATFORM_XLIB_KHR
struct XlibSurfaceCreateInfoKHR {
	StructureType sType {StructureType::xlibSurfaceCreateInfoKHR};
	const void* pNext {};
	XlibSurfaceCreateFlagsKHR flags {};
	Display* dpy {};
	Window window {};

	constexpr XlibSurfaceCreateInfoKHR(XlibSurfaceCreateFlagsKHR xflags = {}, Display* xdpy = {}, Window xwindow = {}) : flags(xflags), dpy(xdpy), window(xwindow) {}

	const VkXlibSurfaceCreateInfoKHR& vkHandle() const { return reinterpret_cast<const VkXlibSurfaceCreateInfoKHR&>(*this); }
	VkXlibSurfaceCreateInfoKHR& vkHandle() { return reinterpret_cast<VkXlibSurfaceCreateInfoKHR&>(*this); }

	operator const VkXlibSurfaceCreateInfoKHR&() const { return vkHandle(); };
	operator VkXlibSurfaceCreateInfoKHR&() { return vkHandle(); };
};


#endif //VK_USE_PLATFORM_XLIB_KHR


#ifdef VK_USE_PLATFORM_XCB_KHR
struct XcbSurfaceCreateInfoKHR {
	StructureType sType {StructureType::xcbSurfaceCreateInfoKHR};
	const void* pNext {};
	XcbSurfaceCreateFlagsKHR flags {};
	xcb_connection_t* connection {};
	xcb_window_t window {};

	constexpr XcbSurfaceCreateInfoKHR(XcbSurfaceCreateFlagsKHR xflags = {}, xcb_connection_t* xconnection = {}, xcb_window_t xwindow = {}) : flags(xflags), connection(xconnection), window(xwindow) {}

	const VkXcbSurfaceCreateInfoKHR& vkHandle() const { return reinterpret_cast<const VkXcbSurfaceCreateInfoKHR&>(*this); }
	VkXcbSurfaceCreateInfoKHR& vkHandle() { return reinterpret_cast<VkXcbSurfaceCreateInfoKHR&>(*this); }

	operator const VkXcbSurfaceCreateInfoKHR&() const { return vkHandle(); };
	operator VkXcbSurfaceCreateInfoKHR&() { return vkHandle(); };
};


#endif //VK_USE_PLATFORM_XCB_KHR


#ifdef VK_USE_PLATFORM_WAYLAND_KHR
struct WaylandSurfaceCreateInfoKHR {
	StructureType sType {StructureType::waylandSurfaceCreateInfoKHR};
	const void* pNext {};
	WaylandSurfaceCreateFlagsKHR flags {};
	wl_display* display {};
	wl_surface* surface {};

	constexpr WaylandSurfaceCreateInfoKHR(WaylandSurfaceCreateFlagsKHR xflags = {}, wl_display* xdisplay = {}, wl_surface* xsurface = {}) : flags(xflags), display(xdisplay), surface(xsurface) {}

	const VkWaylandSurfaceCreateInfoKHR& vkHandle() const { return reinterpret_cast<const VkWaylandSurfaceCreateInfoKHR&>(*this); }
	VkWaylandSurfaceCreateInfoKHR& vkHandle() { return reinterpret_cast<VkWaylandSurfaceCreateInfoKHR&>(*this); }

	operator const VkWaylandSurfaceCreateInfoKHR&() const { return vkHandle(); };
	operator VkWaylandSurfaceCreateInfoKHR&() { return vkHandle(); };
};


#endif //VK_USE_PLATFORM_WAYLAND_KHR


#ifdef VK_USE_PLATFORM_WIN32_KHR
struct Win32SurfaceCreateInfoKHR {
	StructureType sType {StructureType::win32SurfaceCreateInfoKHR};
	const void* pNext {};
	Win32SurfaceCreateFlagsKHR flags {};
	HINSTANCE hinstance {};
	HWND hwnd {};

	constexpr Win32SurfaceCreateInfoKHR(Win32SurfaceCreateFlagsKHR xflags = {}, HINSTANCE xhinstance = {}, HWND xhwnd = {}) : flags(xflags), hinstance(xhinstance), hwnd(xhwnd) {}

	const VkWin32SurfaceCreateInfoKHR& vkHandle() const { return reinterpret_cast<const VkWin32SurfaceCreateInfoKHR&>(*this); }
	VkWin32SurfaceCreateInfoKHR& vkHandle() { return reinterpret_cast<VkWin32SurfaceCreateInfoKHR&>(*this); }

	operator const VkWin32SurfaceCreateInfoKHR&() const { return vkHandle(); };
	operator VkWin32SurfaceCreateInfoKHR&() { return vkHandle(); };
};


#endif //VK_USE_PLATFORM_WIN32_KHR

struct DebugReportCallbackCreateInfoEXT {
	StructureType sType {StructureType::debugReportCallbackCreateInfoEXT};
	const void* pNext {};
	DebugReportFlagsEXT flags {};
	PFN_vkDebugReportCallbackEXT pfnCallback {};
	void* pUserData {};

	constexpr DebugReportCallbackCreateInfoEXT(DebugReportFlagsEXT xflags = {}, PFN_vkDebugReportCallbackEXT xpfnCallback = {}, void* xpUserData = {}) : flags(xflags), pfnCallback(xpfnCallback), pUserData(xpUserData) {}

	const VkDebugReportCallbackCreateInfoEXT& vkHandle() const { return reinterpret_cast<const VkDebugReportCallbackCreateInfoEXT&>(*this); }
	VkDebugReportCallbackCreateInfoEXT& vkHandle() { return reinterpret_cast<VkDebugReportCallbackCreateInfoEXT&>(*this); }

	operator const VkDebugReportCallbackCreateInfoEXT&() const { return vkHandle(); };
	operator VkDebugReportCallbackCreateInfoEXT&() { return vkHandle(); };
};


struct PipelineRasterizationStateRasterizationOrderAMD {
	StructureType sType {StructureType::pipelineRasterizationStateRasterizationOrderAMD};
	const void* pNext {};
	RasterizationOrderAMD rasterizationOrder {};

	constexpr PipelineRasterizationStateRasterizationOrderAMD(RasterizationOrderAMD xrasterizationOrder = {}) : rasterizationOrder(xrasterizationOrder) {}

	const VkPipelineRasterizationStateRasterizationOrderAMD& vkHandle() const { return reinterpret_cast<const VkPipelineRasterizationStateRasterizationOrderAMD&>(*this); }
	VkPipelineRasterizationStateRasterizationOrderAMD& vkHandle() { return reinterpret_cast<VkPipelineRasterizationStateRasterizationOrderAMD&>(*this); }

	operator const VkPipelineRasterizationStateRasterizationOrderAMD&() const { return vkHandle(); };
	operator VkPipelineRasterizationStateRasterizationOrderAMD&() { return vkHandle(); };
};


struct DebugMarkerObjectNameInfoEXT {
	StructureType sType {StructureType::debugMarkerObjectNameInfoEXT};
	const void* pNext {};
	DebugReportObjectTypeEXT objectType {};
	uint64_t object {};
	const char* pObjectName {};

	constexpr DebugMarkerObjectNameInfoEXT(DebugReportObjectTypeEXT xobjectType = {}, uint64_t xobject = {}, const char* xpObjectName = {}) : objectType(xobjectType), object(xobject), pObjectName(xpObjectName) {}

	const VkDebugMarkerObjectNameInfoEXT& vkHandle() const { return reinterpret_cast<const VkDebugMarkerObjectNameInfoEXT&>(*this); }
	VkDebugMarkerObjectNameInfoEXT& vkHandle() { return reinterpret_cast<VkDebugMarkerObjectNameInfoEXT&>(*this); }

	operator const VkDebugMarkerObjectNameInfoEXT&() const { return vkHandle(); };
	operator VkDebugMarkerObjectNameInfoEXT&() { return vkHandle(); };
};

struct DebugMarkerObjectTagInfoEXT {
	StructureType sType {StructureType::debugMarkerObjectTagInfoEXT};
	const void* pNext {};
	DebugReportObjectTypeEXT objectType {};
	uint64_t object {};
	uint64_t tagName {};
	size_t tagSize {};
	const void* pTag {};

	constexpr DebugMarkerObjectTagInfoEXT(DebugReportObjectTypeEXT xobjectType = {}, uint64_t xobject = {}, uint64_t xtagName = {}, size_t xtagSize = {}, const void* xpTag = {}) : objectType(xobjectType), object(xobject), tagName(xtagName), tagSize(xtagSize), pTag(xpTag) {}

	const VkDebugMarkerObjectTagInfoEXT& vkHandle() const { return reinterpret_cast<const VkDebugMarkerObjectTagInfoEXT&>(*this); }
	VkDebugMarkerObjectTagInfoEXT& vkHandle() { return reinterpret_cast<VkDebugMarkerObjectTagInfoEXT&>(*this); }

	operator const VkDebugMarkerObjectTagInfoEXT&() const { return vkHandle(); };
	operator VkDebugMarkerObjectTagInfoEXT&() { return vkHandle(); };
};

struct DebugMarkerMarkerInfoEXT {
	StructureType sType {StructureType::debugMarkerMarkerInfoEXT};
	const void* pNext {};
	const char* pMarkerName {};
	std::array<float, 4> color {};

	constexpr DebugMarkerMarkerInfoEXT(const char* xpMarkerName = {}, std::array<float, 4> xcolor = {}) : pMarkerName(xpMarkerName), color(xcolor) {}

	const VkDebugMarkerMarkerInfoEXT& vkHandle() const { return reinterpret_cast<const VkDebugMarkerMarkerInfoEXT&>(*this); }
	VkDebugMarkerMarkerInfoEXT& vkHandle() { return reinterpret_cast<VkDebugMarkerMarkerInfoEXT&>(*this); }

	operator const VkDebugMarkerMarkerInfoEXT&() const { return vkHandle(); };
	operator VkDebugMarkerMarkerInfoEXT&() { return vkHandle(); };
};


struct DedicatedAllocationImageCreateInfoNV {
	StructureType sType {StructureType::dedicatedAllocationImageCreateInfoNV};
	const void* pNext {};
	Bool32 dedicatedAllocation {};

	constexpr DedicatedAllocationImageCreateInfoNV(Bool32 xdedicatedAllocation = {}) : dedicatedAllocation(xdedicatedAllocation) {}

	const VkDedicatedAllocationImageCreateInfoNV& vkHandle() const { return reinterpret_cast<const VkDedicatedAllocationImageCreateInfoNV&>(*this); }
	VkDedicatedAllocationImageCreateInfoNV& vkHandle() { return reinterpret_cast<VkDedicatedAllocationImageCreateInfoNV&>(*this); }

	operator const VkDedicatedAllocationImageCreateInfoNV&() const { return vkHandle(); };
	operator VkDedicatedAllocationImageCreateInfoNV&() { return vkHandle(); };
};

struct DedicatedAllocationBufferCreateInfoNV {
	StructureType sType {StructureType::dedicatedAllocationBufferCreateInfoNV};
	const void* pNext {};
	Bool32 dedicatedAllocation {};

	constexpr DedicatedAllocationBufferCreateInfoNV(Bool32 xdedicatedAllocation = {}) : dedicatedAllocation(xdedicatedAllocation) {}

	const VkDedicatedAllocationBufferCreateInfoNV& vkHandle() const { return reinterpret_cast<const VkDedicatedAllocationBufferCreateInfoNV&>(*this); }
	VkDedicatedAllocationBufferCreateInfoNV& vkHandle() { return reinterpret_cast<VkDedicatedAllocationBufferCreateInfoNV&>(*this); }

	operator const VkDedicatedAllocationBufferCreateInfoNV&() const { return vkHandle(); };
	operator VkDedicatedAllocationBufferCreateInfoNV&() { return vkHandle(); };
};

struct DedicatedAllocationMemoryAllocateInfoNV {
	StructureType sType {StructureType::dedicatedAllocationMemoryAllocateInfoNV};
	const void* pNext {};
	Image image {};
	Buffer buffer {};

	constexpr DedicatedAllocationMemoryAllocateInfoNV(Image ximage = {}, Buffer xbuffer = {}) : image(ximage), buffer(xbuffer) {}

	const VkDedicatedAllocationMemoryAllocateInfoNV& vkHandle() const { return reinterpret_cast<const VkDedicatedAllocationMemoryAllocateInfoNV&>(*this); }
	VkDedicatedAllocationMemoryAllocateInfoNV& vkHandle() { return reinterpret_cast<VkDedicatedAllocationMemoryAllocateInfoNV&>(*this); }

	operator const VkDedicatedAllocationMemoryAllocateInfoNV&() const { return vkHandle(); };
	operator VkDedicatedAllocationMemoryAllocateInfoNV&() { return vkHandle(); };
};


struct PhysicalDeviceTransformFeedbackFeaturesEXT {
	StructureType sType {StructureType::physicalDeviceTransformFeedbackFeaturesEXT};
	void* pNext {};
	Bool32 transformFeedback {};
	Bool32 geometryStreams {};

	constexpr PhysicalDeviceTransformFeedbackFeaturesEXT(Bool32 xtransformFeedback = {}, Bool32 xgeometryStreams = {}) : transformFeedback(xtransformFeedback), geometryStreams(xgeometryStreams) {}

	const VkPhysicalDeviceTransformFeedbackFeaturesEXT& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceTransformFeedbackFeaturesEXT&>(*this); }
	VkPhysicalDeviceTransformFeedbackFeaturesEXT& vkHandle() { return reinterpret_cast<VkPhysicalDeviceTransformFeedbackFeaturesEXT&>(*this); }

	operator const VkPhysicalDeviceTransformFeedbackFeaturesEXT&() const { return vkHandle(); };
	operator VkPhysicalDeviceTransformFeedbackFeaturesEXT&() { return vkHandle(); };
};

struct PhysicalDeviceTransformFeedbackPropertiesEXT {
	StructureType sType {StructureType::physicalDeviceTransformFeedbackPropertiesEXT};
	void* pNext {};
	uint32_t maxTransformFeedbackStreams {};
	uint32_t maxTransformFeedbackBuffers {};
	DeviceSize maxTransformFeedbackBufferSize {};
	uint32_t maxTransformFeedbackStreamDataSize {};
	uint32_t maxTransformFeedbackBufferDataSize {};
	uint32_t maxTransformFeedbackBufferDataStride {};
	Bool32 transformFeedbackQueries {};
	Bool32 transformFeedbackStreamsLinesTriangles {};
	Bool32 transformFeedbackRasterizationStreamSelect {};
	Bool32 transformFeedbackDraw {};

	const VkPhysicalDeviceTransformFeedbackPropertiesEXT& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceTransformFeedbackPropertiesEXT&>(*this); }
	VkPhysicalDeviceTransformFeedbackPropertiesEXT& vkHandle() { return reinterpret_cast<VkPhysicalDeviceTransformFeedbackPropertiesEXT&>(*this); }

	operator const VkPhysicalDeviceTransformFeedbackPropertiesEXT&() const { return vkHandle(); };
	operator VkPhysicalDeviceTransformFeedbackPropertiesEXT&() { return vkHandle(); };
};

struct PipelineRasterizationStateStreamCreateInfoEXT {
	StructureType sType {StructureType::pipelineRasterizationStateStreamCreateInfoEXT};
	const void* pNext {};
	PipelineRasterizationStateStreamCreateFlagsEXT flags {};
	uint32_t rasterizationStream {};

	constexpr PipelineRasterizationStateStreamCreateInfoEXT(PipelineRasterizationStateStreamCreateFlagsEXT xflags = {}, uint32_t xrasterizationStream = {}) : flags(xflags), rasterizationStream(xrasterizationStream) {}

	const VkPipelineRasterizationStateStreamCreateInfoEXT& vkHandle() const { return reinterpret_cast<const VkPipelineRasterizationStateStreamCreateInfoEXT&>(*this); }
	VkPipelineRasterizationStateStreamCreateInfoEXT& vkHandle() { return reinterpret_cast<VkPipelineRasterizationStateStreamCreateInfoEXT&>(*this); }

	operator const VkPipelineRasterizationStateStreamCreateInfoEXT&() const { return vkHandle(); };
	operator VkPipelineRasterizationStateStreamCreateInfoEXT&() { return vkHandle(); };
};


struct TextureLODGatherFormatPropertiesAMD {
	StructureType sType {StructureType::textureLodGatherFormatPropertiesAMD};
	void* pNext {};
	Bool32 supportsTextureGatherLODBiasAMD {};

	const VkTextureLODGatherFormatPropertiesAMD& vkHandle() const { return reinterpret_cast<const VkTextureLODGatherFormatPropertiesAMD&>(*this); }
	VkTextureLODGatherFormatPropertiesAMD& vkHandle() { return reinterpret_cast<VkTextureLODGatherFormatPropertiesAMD&>(*this); }

	operator const VkTextureLODGatherFormatPropertiesAMD&() const { return vkHandle(); };
	operator VkTextureLODGatherFormatPropertiesAMD&() { return vkHandle(); };
};


struct ShaderResourceUsageAMD {
	uint32_t numUsedVgprs {};
	uint32_t numUsedSgprs {};
	uint32_t ldsSizePerLocalWorkGroup {};
	size_t ldsUsageSizeInBytes {};
	size_t scratchMemUsageInBytes {};

	const VkShaderResourceUsageAMD& vkHandle() const { return reinterpret_cast<const VkShaderResourceUsageAMD&>(*this); }
	VkShaderResourceUsageAMD& vkHandle() { return reinterpret_cast<VkShaderResourceUsageAMD&>(*this); }

	operator const VkShaderResourceUsageAMD&() const { return vkHandle(); };
	operator VkShaderResourceUsageAMD&() { return vkHandle(); };
};

struct ShaderStatisticsInfoAMD {
	ShaderStageFlags shaderStageMask {};
	ShaderResourceUsageAMD resourceUsage {};
	uint32_t numPhysicalVgprs {};
	uint32_t numPhysicalSgprs {};
	uint32_t numAvailableVgprs {};
	uint32_t numAvailableSgprs {};
	std::array<uint32_t, 3> computeWorkGroupSize {};

	const VkShaderStatisticsInfoAMD& vkHandle() const { return reinterpret_cast<const VkShaderStatisticsInfoAMD&>(*this); }
	VkShaderStatisticsInfoAMD& vkHandle() { return reinterpret_cast<VkShaderStatisticsInfoAMD&>(*this); }

	operator const VkShaderStatisticsInfoAMD&() const { return vkHandle(); };
	operator VkShaderStatisticsInfoAMD&() { return vkHandle(); };
};



#ifdef VK_USE_PLATFORM_GGP
struct StreamDescriptorSurfaceCreateInfoGGP {
	StructureType sType {StructureType::streamDescriptorSurfaceCreateInfoGGP};
	const void* pNext {};
	StreamDescriptorSurfaceCreateFlagsGGP flags {};
	GgpStreamDescriptor streamDescriptor {};

	constexpr StreamDescriptorSurfaceCreateInfoGGP(StreamDescriptorSurfaceCreateFlagsGGP xflags = {}, GgpStreamDescriptor xstreamDescriptor = {}) : flags(xflags), streamDescriptor(xstreamDescriptor) {}

	const VkStreamDescriptorSurfaceCreateInfoGGP& vkHandle() const { return reinterpret_cast<const VkStreamDescriptorSurfaceCreateInfoGGP&>(*this); }
	VkStreamDescriptorSurfaceCreateInfoGGP& vkHandle() { return reinterpret_cast<VkStreamDescriptorSurfaceCreateInfoGGP&>(*this); }

	operator const VkStreamDescriptorSurfaceCreateInfoGGP&() const { return vkHandle(); };
	operator VkStreamDescriptorSurfaceCreateInfoGGP&() { return vkHandle(); };
};


#endif //VK_USE_PLATFORM_GGP

struct PhysicalDeviceCornerSampledImageFeaturesNV {
	StructureType sType {StructureType::physicalDeviceCornerSampledImageFeaturesNV};
	void* pNext {};
	Bool32 cornerSampledImage {};

	constexpr PhysicalDeviceCornerSampledImageFeaturesNV(Bool32 xcornerSampledImage = {}) : cornerSampledImage(xcornerSampledImage) {}

	const VkPhysicalDeviceCornerSampledImageFeaturesNV& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceCornerSampledImageFeaturesNV&>(*this); }
	VkPhysicalDeviceCornerSampledImageFeaturesNV& vkHandle() { return reinterpret_cast<VkPhysicalDeviceCornerSampledImageFeaturesNV&>(*this); }

	operator const VkPhysicalDeviceCornerSampledImageFeaturesNV&() const { return vkHandle(); };
	operator VkPhysicalDeviceCornerSampledImageFeaturesNV&() { return vkHandle(); };
};


struct ExternalImageFormatPropertiesNV {
	ImageFormatProperties imageFormatProperties {};
	ExternalMemoryFeatureFlagsNV externalMemoryFeatures {};
	ExternalMemoryHandleTypeFlagsNV exportFromImportedHandleTypes {};
	ExternalMemoryHandleTypeFlagsNV compatibleHandleTypes {};

	const VkExternalImageFormatPropertiesNV& vkHandle() const { return reinterpret_cast<const VkExternalImageFormatPropertiesNV&>(*this); }
	VkExternalImageFormatPropertiesNV& vkHandle() { return reinterpret_cast<VkExternalImageFormatPropertiesNV&>(*this); }

	operator const VkExternalImageFormatPropertiesNV&() const { return vkHandle(); };
	operator VkExternalImageFormatPropertiesNV&() { return vkHandle(); };
};


struct ExternalMemoryImageCreateInfoNV {
	StructureType sType {StructureType::externalMemoryImageCreateInfoNV};
	const void* pNext {};
	ExternalMemoryHandleTypeFlagsNV handleTypes {};

	constexpr ExternalMemoryImageCreateInfoNV(ExternalMemoryHandleTypeFlagsNV xhandleTypes = {}) : handleTypes(xhandleTypes) {}

	const VkExternalMemoryImageCreateInfoNV& vkHandle() const { return reinterpret_cast<const VkExternalMemoryImageCreateInfoNV&>(*this); }
	VkExternalMemoryImageCreateInfoNV& vkHandle() { return reinterpret_cast<VkExternalMemoryImageCreateInfoNV&>(*this); }

	operator const VkExternalMemoryImageCreateInfoNV&() const { return vkHandle(); };
	operator VkExternalMemoryImageCreateInfoNV&() { return vkHandle(); };
};

struct ExportMemoryAllocateInfoNV {
	StructureType sType {StructureType::exportMemoryAllocateInfoNV};
	const void* pNext {};
	ExternalMemoryHandleTypeFlagsNV handleTypes {};

	constexpr ExportMemoryAllocateInfoNV(ExternalMemoryHandleTypeFlagsNV xhandleTypes = {}) : handleTypes(xhandleTypes) {}

	const VkExportMemoryAllocateInfoNV& vkHandle() const { return reinterpret_cast<const VkExportMemoryAllocateInfoNV&>(*this); }
	VkExportMemoryAllocateInfoNV& vkHandle() { return reinterpret_cast<VkExportMemoryAllocateInfoNV&>(*this); }

	operator const VkExportMemoryAllocateInfoNV&() const { return vkHandle(); };
	operator VkExportMemoryAllocateInfoNV&() { return vkHandle(); };
};



#ifdef VK_USE_PLATFORM_WIN32_KHR
struct ImportMemoryWin32HandleInfoNV {
	StructureType sType {StructureType::importMemoryWin32HandleInfoNV};
	const void* pNext {};
	ExternalMemoryHandleTypeFlagsNV handleType {};
	HANDLE handle {};

	constexpr ImportMemoryWin32HandleInfoNV(ExternalMemoryHandleTypeFlagsNV xhandleType = {}, HANDLE xhandle = {}) : handleType(xhandleType), handle(xhandle) {}

	const VkImportMemoryWin32HandleInfoNV& vkHandle() const { return reinterpret_cast<const VkImportMemoryWin32HandleInfoNV&>(*this); }
	VkImportMemoryWin32HandleInfoNV& vkHandle() { return reinterpret_cast<VkImportMemoryWin32HandleInfoNV&>(*this); }

	operator const VkImportMemoryWin32HandleInfoNV&() const { return vkHandle(); };
	operator VkImportMemoryWin32HandleInfoNV&() { return vkHandle(); };
};

struct ExportMemoryWin32HandleInfoNV {
	StructureType sType {StructureType::exportMemoryWin32HandleInfoNV};
	const void* pNext {};
	const SECURITY_ATTRIBUTES* pAttributes {};
	DWORD dwAccess {};

	constexpr ExportMemoryWin32HandleInfoNV(const SECURITY_ATTRIBUTES* xpAttributes = {}, DWORD xdwAccess = {}) : pAttributes(xpAttributes), dwAccess(xdwAccess) {}

	const VkExportMemoryWin32HandleInfoNV& vkHandle() const { return reinterpret_cast<const VkExportMemoryWin32HandleInfoNV&>(*this); }
	VkExportMemoryWin32HandleInfoNV& vkHandle() { return reinterpret_cast<VkExportMemoryWin32HandleInfoNV&>(*this); }

	operator const VkExportMemoryWin32HandleInfoNV&() const { return vkHandle(); };
	operator VkExportMemoryWin32HandleInfoNV&() { return vkHandle(); };
};


#endif //VK_USE_PLATFORM_WIN32_KHR


#ifdef VK_USE_PLATFORM_WIN32_KHR
struct Win32KeyedMutexAcquireReleaseInfoNV {
	StructureType sType {StructureType::win32KeyedMutexAcquireReleaseInfoNV};
	const void* pNext {};
	uint32_t acquireCount {};
	const DeviceMemory* pAcquireSyncs {};
	const uint64_t* pAcquireKeys {};
	const uint32_t* pAcquireTimeoutMilliseconds {};
	uint32_t releaseCount {};
	const DeviceMemory* pReleaseSyncs {};
	const uint64_t* pReleaseKeys {};

	constexpr Win32KeyedMutexAcquireReleaseInfoNV(uint32_t xacquireCount = {}, const DeviceMemory* xpAcquireSyncs = {}, const uint64_t* xpAcquireKeys = {}, const uint32_t* xpAcquireTimeoutMilliseconds = {}, uint32_t xreleaseCount = {}, const DeviceMemory* xpReleaseSyncs = {}, const uint64_t* xpReleaseKeys = {}) : acquireCount(xacquireCount), pAcquireSyncs(xpAcquireSyncs), pAcquireKeys(xpAcquireKeys), pAcquireTimeoutMilliseconds(xpAcquireTimeoutMilliseconds), releaseCount(xreleaseCount), pReleaseSyncs(xpReleaseSyncs), pReleaseKeys(xpReleaseKeys) {}

	const VkWin32KeyedMutexAcquireReleaseInfoNV& vkHandle() const { return reinterpret_cast<const VkWin32KeyedMutexAcquireReleaseInfoNV&>(*this); }
	VkWin32KeyedMutexAcquireReleaseInfoNV& vkHandle() { return reinterpret_cast<VkWin32KeyedMutexAcquireReleaseInfoNV&>(*this); }

	operator const VkWin32KeyedMutexAcquireReleaseInfoNV&() const { return vkHandle(); };
	operator VkWin32KeyedMutexAcquireReleaseInfoNV&() { return vkHandle(); };
};


#endif //VK_USE_PLATFORM_WIN32_KHR

struct ValidationFlagsEXT {
	StructureType sType {StructureType::validationFlagsEXT};
	const void* pNext {};
	uint32_t disabledValidationCheckCount {};
	const ValidationCheckEXT* pDisabledValidationChecks {};

	constexpr ValidationFlagsEXT(uint32_t xdisabledValidationCheckCount = {}, const ValidationCheckEXT* xpDisabledValidationChecks = {}) : disabledValidationCheckCount(xdisabledValidationCheckCount), pDisabledValidationChecks(xpDisabledValidationChecks) {}

	const VkValidationFlagsEXT& vkHandle() const { return reinterpret_cast<const VkValidationFlagsEXT&>(*this); }
	VkValidationFlagsEXT& vkHandle() { return reinterpret_cast<VkValidationFlagsEXT&>(*this); }

	operator const VkValidationFlagsEXT&() const { return vkHandle(); };
	operator VkValidationFlagsEXT&() { return vkHandle(); };
};



#ifdef VK_USE_PLATFORM_VI_NN
struct ViSurfaceCreateInfoNN {
	StructureType sType {StructureType::viSurfaceCreateInfoNN};
	const void* pNext {};
	ViSurfaceCreateFlagsNN flags {};
	void* window {};

	constexpr ViSurfaceCreateInfoNN(ViSurfaceCreateFlagsNN xflags = {}, void* xwindow = {}) : flags(xflags), window(xwindow) {}

	const VkViSurfaceCreateInfoNN& vkHandle() const { return reinterpret_cast<const VkViSurfaceCreateInfoNN&>(*this); }
	VkViSurfaceCreateInfoNN& vkHandle() { return reinterpret_cast<VkViSurfaceCreateInfoNN&>(*this); }

	operator const VkViSurfaceCreateInfoNN&() const { return vkHandle(); };
	operator VkViSurfaceCreateInfoNN&() { return vkHandle(); };
};


#endif //VK_USE_PLATFORM_VI_NN

struct PhysicalDeviceTextureCompressionASTCHDRFeaturesEXT {
	StructureType sType {StructureType::physicalDeviceTextureCompressionAstcHdrFeaturesEXT};
	void* pNext {};
	Bool32 textureCompressionASTC_HDR {};

	constexpr PhysicalDeviceTextureCompressionASTCHDRFeaturesEXT(Bool32 xtextureCompressionASTC_HDR = {}) : textureCompressionASTC_HDR(xtextureCompressionASTC_HDR) {}

	const VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT&>(*this); }
	VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT& vkHandle() { return reinterpret_cast<VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT&>(*this); }

	operator const VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT&() const { return vkHandle(); };
	operator VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT&() { return vkHandle(); };
};


struct ImageViewASTCDecodeModeEXT {
	StructureType sType {StructureType::imageViewAstcDecodeModeEXT};
	const void* pNext {};
	Format decodeMode {};

	constexpr ImageViewASTCDecodeModeEXT(Format xdecodeMode = {}) : decodeMode(xdecodeMode) {}

	const VkImageViewASTCDecodeModeEXT& vkHandle() const { return reinterpret_cast<const VkImageViewASTCDecodeModeEXT&>(*this); }
	VkImageViewASTCDecodeModeEXT& vkHandle() { return reinterpret_cast<VkImageViewASTCDecodeModeEXT&>(*this); }

	operator const VkImageViewASTCDecodeModeEXT&() const { return vkHandle(); };
	operator VkImageViewASTCDecodeModeEXT&() { return vkHandle(); };
};

struct PhysicalDeviceASTCDecodeFeaturesEXT {
	StructureType sType {StructureType::physicalDeviceAstcDecodeFeaturesEXT};
	void* pNext {};
	Bool32 decodeModeSharedExponent {};

	constexpr PhysicalDeviceASTCDecodeFeaturesEXT(Bool32 xdecodeModeSharedExponent = {}) : decodeModeSharedExponent(xdecodeModeSharedExponent) {}

	const VkPhysicalDeviceASTCDecodeFeaturesEXT& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceASTCDecodeFeaturesEXT&>(*this); }
	VkPhysicalDeviceASTCDecodeFeaturesEXT& vkHandle() { return reinterpret_cast<VkPhysicalDeviceASTCDecodeFeaturesEXT&>(*this); }

	operator const VkPhysicalDeviceASTCDecodeFeaturesEXT&() const { return vkHandle(); };
	operator VkPhysicalDeviceASTCDecodeFeaturesEXT&() { return vkHandle(); };
};



#ifdef VK_USE_PLATFORM_WIN32_KHR
struct ImportMemoryWin32HandleInfoKHR {
	StructureType sType {StructureType::importMemoryWin32HandleInfoKHR};
	const void* pNext {};
	ExternalMemoryHandleTypeBits handleType {};
	HANDLE handle {};
	LPCWSTR name {};

	constexpr ImportMemoryWin32HandleInfoKHR(ExternalMemoryHandleTypeBits xhandleType = {}, HANDLE xhandle = {}, LPCWSTR xname = {}) : handleType(xhandleType), handle(xhandle), name(xname) {}

	const VkImportMemoryWin32HandleInfoKHR& vkHandle() const { return reinterpret_cast<const VkImportMemoryWin32HandleInfoKHR&>(*this); }
	VkImportMemoryWin32HandleInfoKHR& vkHandle() { return reinterpret_cast<VkImportMemoryWin32HandleInfoKHR&>(*this); }

	operator const VkImportMemoryWin32HandleInfoKHR&() const { return vkHandle(); };
	operator VkImportMemoryWin32HandleInfoKHR&() { return vkHandle(); };
};

struct ExportMemoryWin32HandleInfoKHR {
	StructureType sType {StructureType::exportMemoryWin32HandleInfoKHR};
	const void* pNext {};
	const SECURITY_ATTRIBUTES* pAttributes {};
	DWORD dwAccess {};
	LPCWSTR name {};

	constexpr ExportMemoryWin32HandleInfoKHR(const SECURITY_ATTRIBUTES* xpAttributes = {}, DWORD xdwAccess = {}, LPCWSTR xname = {}) : pAttributes(xpAttributes), dwAccess(xdwAccess), name(xname) {}

	const VkExportMemoryWin32HandleInfoKHR& vkHandle() const { return reinterpret_cast<const VkExportMemoryWin32HandleInfoKHR&>(*this); }
	VkExportMemoryWin32HandleInfoKHR& vkHandle() { return reinterpret_cast<VkExportMemoryWin32HandleInfoKHR&>(*this); }

	operator const VkExportMemoryWin32HandleInfoKHR&() const { return vkHandle(); };
	operator VkExportMemoryWin32HandleInfoKHR&() { return vkHandle(); };
};

struct MemoryWin32HandlePropertiesKHR {
	StructureType sType {StructureType::memoryWin32HandlePropertiesKHR};
	void* pNext {};
	uint32_t memoryTypeBits {};

	const VkMemoryWin32HandlePropertiesKHR& vkHandle() const { return reinterpret_cast<const VkMemoryWin32HandlePropertiesKHR&>(*this); }
	VkMemoryWin32HandlePropertiesKHR& vkHandle() { return reinterpret_cast<VkMemoryWin32HandlePropertiesKHR&>(*this); }

	operator const VkMemoryWin32HandlePropertiesKHR&() const { return vkHandle(); };
	operator VkMemoryWin32HandlePropertiesKHR&() { return vkHandle(); };
};

struct MemoryGetWin32HandleInfoKHR {
	StructureType sType {StructureType::memoryGetWin32HandleInfoKHR};
	const void* pNext {};
	DeviceMemory memory {};
	ExternalMemoryHandleTypeBits handleType {};

	constexpr MemoryGetWin32HandleInfoKHR(DeviceMemory xmemory = {}, ExternalMemoryHandleTypeBits xhandleType = {}) : memory(xmemory), handleType(xhandleType) {}

	const VkMemoryGetWin32HandleInfoKHR& vkHandle() const { return reinterpret_cast<const VkMemoryGetWin32HandleInfoKHR&>(*this); }
	VkMemoryGetWin32HandleInfoKHR& vkHandle() { return reinterpret_cast<VkMemoryGetWin32HandleInfoKHR&>(*this); }

	operator const VkMemoryGetWin32HandleInfoKHR&() const { return vkHandle(); };
	operator VkMemoryGetWin32HandleInfoKHR&() { return vkHandle(); };
};


#endif //VK_USE_PLATFORM_WIN32_KHR

struct ImportMemoryFdInfoKHR {
	StructureType sType {StructureType::importMemoryFdInfoKHR};
	const void* pNext {};
	ExternalMemoryHandleTypeBits handleType {};
	int fd {};

	constexpr ImportMemoryFdInfoKHR(ExternalMemoryHandleTypeBits xhandleType = {}, int xfd = {}) : handleType(xhandleType), fd(xfd) {}

	const VkImportMemoryFdInfoKHR& vkHandle() const { return reinterpret_cast<const VkImportMemoryFdInfoKHR&>(*this); }
	VkImportMemoryFdInfoKHR& vkHandle() { return reinterpret_cast<VkImportMemoryFdInfoKHR&>(*this); }

	operator const VkImportMemoryFdInfoKHR&() const { return vkHandle(); };
	operator VkImportMemoryFdInfoKHR&() { return vkHandle(); };
};

struct MemoryFdPropertiesKHR {
	StructureType sType {StructureType::memoryFdPropertiesKHR};
	void* pNext {};
	uint32_t memoryTypeBits {};

	const VkMemoryFdPropertiesKHR& vkHandle() const { return reinterpret_cast<const VkMemoryFdPropertiesKHR&>(*this); }
	VkMemoryFdPropertiesKHR& vkHandle() { return reinterpret_cast<VkMemoryFdPropertiesKHR&>(*this); }

	operator const VkMemoryFdPropertiesKHR&() const { return vkHandle(); };
	operator VkMemoryFdPropertiesKHR&() { return vkHandle(); };
};

struct MemoryGetFdInfoKHR {
	StructureType sType {StructureType::memoryGetFdInfoKHR};
	const void* pNext {};
	DeviceMemory memory {};
	ExternalMemoryHandleTypeBits handleType {};

	constexpr MemoryGetFdInfoKHR(DeviceMemory xmemory = {}, ExternalMemoryHandleTypeBits xhandleType = {}) : memory(xmemory), handleType(xhandleType) {}

	const VkMemoryGetFdInfoKHR& vkHandle() const { return reinterpret_cast<const VkMemoryGetFdInfoKHR&>(*this); }
	VkMemoryGetFdInfoKHR& vkHandle() { return reinterpret_cast<VkMemoryGetFdInfoKHR&>(*this); }

	operator const VkMemoryGetFdInfoKHR&() const { return vkHandle(); };
	operator VkMemoryGetFdInfoKHR&() { return vkHandle(); };
};



#ifdef VK_USE_PLATFORM_WIN32_KHR
struct Win32KeyedMutexAcquireReleaseInfoKHR {
	StructureType sType {StructureType::win32KeyedMutexAcquireReleaseInfoKHR};
	const void* pNext {};
	uint32_t acquireCount {};
	const DeviceMemory* pAcquireSyncs {};
	const uint64_t* pAcquireKeys {};
	const uint32_t* pAcquireTimeouts {};
	uint32_t releaseCount {};
	const DeviceMemory* pReleaseSyncs {};
	const uint64_t* pReleaseKeys {};

	constexpr Win32KeyedMutexAcquireReleaseInfoKHR(uint32_t xacquireCount = {}, const DeviceMemory* xpAcquireSyncs = {}, const uint64_t* xpAcquireKeys = {}, const uint32_t* xpAcquireTimeouts = {}, uint32_t xreleaseCount = {}, const DeviceMemory* xpReleaseSyncs = {}, const uint64_t* xpReleaseKeys = {}) : acquireCount(xacquireCount), pAcquireSyncs(xpAcquireSyncs), pAcquireKeys(xpAcquireKeys), pAcquireTimeouts(xpAcquireTimeouts), releaseCount(xreleaseCount), pReleaseSyncs(xpReleaseSyncs), pReleaseKeys(xpReleaseKeys) {}

	const VkWin32KeyedMutexAcquireReleaseInfoKHR& vkHandle() const { return reinterpret_cast<const VkWin32KeyedMutexAcquireReleaseInfoKHR&>(*this); }
	VkWin32KeyedMutexAcquireReleaseInfoKHR& vkHandle() { return reinterpret_cast<VkWin32KeyedMutexAcquireReleaseInfoKHR&>(*this); }

	operator const VkWin32KeyedMutexAcquireReleaseInfoKHR&() const { return vkHandle(); };
	operator VkWin32KeyedMutexAcquireReleaseInfoKHR&() { return vkHandle(); };
};


#endif //VK_USE_PLATFORM_WIN32_KHR


#ifdef VK_USE_PLATFORM_WIN32_KHR
struct ImportSemaphoreWin32HandleInfoKHR {
	StructureType sType {StructureType::importSemaphoreWin32HandleInfoKHR};
	const void* pNext {};
	Semaphore semaphore {};
	SemaphoreImportFlags flags {};
	ExternalSemaphoreHandleTypeBits handleType {};
	HANDLE handle {};
	LPCWSTR name {};

	constexpr ImportSemaphoreWin32HandleInfoKHR(Semaphore xsemaphore = {}, SemaphoreImportFlags xflags = {}, ExternalSemaphoreHandleTypeBits xhandleType = {}, HANDLE xhandle = {}, LPCWSTR xname = {}) : semaphore(xsemaphore), flags(xflags), handleType(xhandleType), handle(xhandle), name(xname) {}

	const VkImportSemaphoreWin32HandleInfoKHR& vkHandle() const { return reinterpret_cast<const VkImportSemaphoreWin32HandleInfoKHR&>(*this); }
	VkImportSemaphoreWin32HandleInfoKHR& vkHandle() { return reinterpret_cast<VkImportSemaphoreWin32HandleInfoKHR&>(*this); }

	operator const VkImportSemaphoreWin32HandleInfoKHR&() const { return vkHandle(); };
	operator VkImportSemaphoreWin32HandleInfoKHR&() { return vkHandle(); };
};

struct ExportSemaphoreWin32HandleInfoKHR {
	StructureType sType {StructureType::exportSemaphoreWin32HandleInfoKHR};
	const void* pNext {};
	const SECURITY_ATTRIBUTES* pAttributes {};
	DWORD dwAccess {};
	LPCWSTR name {};

	constexpr ExportSemaphoreWin32HandleInfoKHR(const SECURITY_ATTRIBUTES* xpAttributes = {}, DWORD xdwAccess = {}, LPCWSTR xname = {}) : pAttributes(xpAttributes), dwAccess(xdwAccess), name(xname) {}

	const VkExportSemaphoreWin32HandleInfoKHR& vkHandle() const { return reinterpret_cast<const VkExportSemaphoreWin32HandleInfoKHR&>(*this); }
	VkExportSemaphoreWin32HandleInfoKHR& vkHandle() { return reinterpret_cast<VkExportSemaphoreWin32HandleInfoKHR&>(*this); }

	operator const VkExportSemaphoreWin32HandleInfoKHR&() const { return vkHandle(); };
	operator VkExportSemaphoreWin32HandleInfoKHR&() { return vkHandle(); };
};

struct D3D12FenceSubmitInfoKHR {
	StructureType sType {StructureType::d3d12FenceSubmitInfoKHR};
	const void* pNext {};
	uint32_t waitSemaphoreValuesCount {};
	const uint64_t* pWaitSemaphoreValues {};
	uint32_t signalSemaphoreValuesCount {};
	const uint64_t* pSignalSemaphoreValues {};

	constexpr D3D12FenceSubmitInfoKHR(uint32_t xwaitSemaphoreValuesCount = {}, const uint64_t* xpWaitSemaphoreValues = {}, uint32_t xsignalSemaphoreValuesCount = {}, const uint64_t* xpSignalSemaphoreValues = {}) : waitSemaphoreValuesCount(xwaitSemaphoreValuesCount), pWaitSemaphoreValues(xpWaitSemaphoreValues), signalSemaphoreValuesCount(xsignalSemaphoreValuesCount), pSignalSemaphoreValues(xpSignalSemaphoreValues) {}

	const VkD3D12FenceSubmitInfoKHR& vkHandle() const { return reinterpret_cast<const VkD3D12FenceSubmitInfoKHR&>(*this); }
	VkD3D12FenceSubmitInfoKHR& vkHandle() { return reinterpret_cast<VkD3D12FenceSubmitInfoKHR&>(*this); }

	operator const VkD3D12FenceSubmitInfoKHR&() const { return vkHandle(); };
	operator VkD3D12FenceSubmitInfoKHR&() { return vkHandle(); };
};

struct SemaphoreGetWin32HandleInfoKHR {
	StructureType sType {StructureType::semaphoreGetWin32HandleInfoKHR};
	const void* pNext {};
	Semaphore semaphore {};
	ExternalSemaphoreHandleTypeBits handleType {};

	constexpr SemaphoreGetWin32HandleInfoKHR(Semaphore xsemaphore = {}, ExternalSemaphoreHandleTypeBits xhandleType = {}) : semaphore(xsemaphore), handleType(xhandleType) {}

	const VkSemaphoreGetWin32HandleInfoKHR& vkHandle() const { return reinterpret_cast<const VkSemaphoreGetWin32HandleInfoKHR&>(*this); }
	VkSemaphoreGetWin32HandleInfoKHR& vkHandle() { return reinterpret_cast<VkSemaphoreGetWin32HandleInfoKHR&>(*this); }

	operator const VkSemaphoreGetWin32HandleInfoKHR&() const { return vkHandle(); };
	operator VkSemaphoreGetWin32HandleInfoKHR&() { return vkHandle(); };
};


#endif //VK_USE_PLATFORM_WIN32_KHR

struct ImportSemaphoreFdInfoKHR {
	StructureType sType {StructureType::importSemaphoreFdInfoKHR};
	const void* pNext {};
	Semaphore semaphore {};
	SemaphoreImportFlags flags {};
	ExternalSemaphoreHandleTypeBits handleType {};
	int fd {};

	constexpr ImportSemaphoreFdInfoKHR(Semaphore xsemaphore = {}, SemaphoreImportFlags xflags = {}, ExternalSemaphoreHandleTypeBits xhandleType = {}, int xfd = {}) : semaphore(xsemaphore), flags(xflags), handleType(xhandleType), fd(xfd) {}

	const VkImportSemaphoreFdInfoKHR& vkHandle() const { return reinterpret_cast<const VkImportSemaphoreFdInfoKHR&>(*this); }
	VkImportSemaphoreFdInfoKHR& vkHandle() { return reinterpret_cast<VkImportSemaphoreFdInfoKHR&>(*this); }

	operator const VkImportSemaphoreFdInfoKHR&() const { return vkHandle(); };
	operator VkImportSemaphoreFdInfoKHR&() { return vkHandle(); };
};

struct SemaphoreGetFdInfoKHR {
	StructureType sType {StructureType::semaphoreGetFdInfoKHR};
	const void* pNext {};
	Semaphore semaphore {};
	ExternalSemaphoreHandleTypeBits handleType {};

	constexpr SemaphoreGetFdInfoKHR(Semaphore xsemaphore = {}, ExternalSemaphoreHandleTypeBits xhandleType = {}) : semaphore(xsemaphore), handleType(xhandleType) {}

	const VkSemaphoreGetFdInfoKHR& vkHandle() const { return reinterpret_cast<const VkSemaphoreGetFdInfoKHR&>(*this); }
	VkSemaphoreGetFdInfoKHR& vkHandle() { return reinterpret_cast<VkSemaphoreGetFdInfoKHR&>(*this); }

	operator const VkSemaphoreGetFdInfoKHR&() const { return vkHandle(); };
	operator VkSemaphoreGetFdInfoKHR&() { return vkHandle(); };
};


struct PhysicalDevicePushDescriptorPropertiesKHR {
	StructureType sType {StructureType::physicalDevicePushDescriptorPropertiesKHR};
	void* pNext {};
	uint32_t maxPushDescriptors {};

	const VkPhysicalDevicePushDescriptorPropertiesKHR& vkHandle() const { return reinterpret_cast<const VkPhysicalDevicePushDescriptorPropertiesKHR&>(*this); }
	VkPhysicalDevicePushDescriptorPropertiesKHR& vkHandle() { return reinterpret_cast<VkPhysicalDevicePushDescriptorPropertiesKHR&>(*this); }

	operator const VkPhysicalDevicePushDescriptorPropertiesKHR&() const { return vkHandle(); };
	operator VkPhysicalDevicePushDescriptorPropertiesKHR&() { return vkHandle(); };
};


struct ConditionalRenderingBeginInfoEXT {
	StructureType sType {StructureType::conditionalRenderingBeginInfoEXT};
	const void* pNext {};
	Buffer buffer {};
	DeviceSize offset {};
	ConditionalRenderingFlagsEXT flags {};

	constexpr ConditionalRenderingBeginInfoEXT(Buffer xbuffer = {}, DeviceSize xoffset = {}, ConditionalRenderingFlagsEXT xflags = {}) : buffer(xbuffer), offset(xoffset), flags(xflags) {}

	const VkConditionalRenderingBeginInfoEXT& vkHandle() const { return reinterpret_cast<const VkConditionalRenderingBeginInfoEXT&>(*this); }
	VkConditionalRenderingBeginInfoEXT& vkHandle() { return reinterpret_cast<VkConditionalRenderingBeginInfoEXT&>(*this); }

	operator const VkConditionalRenderingBeginInfoEXT&() const { return vkHandle(); };
	operator VkConditionalRenderingBeginInfoEXT&() { return vkHandle(); };
};

struct PhysicalDeviceConditionalRenderingFeaturesEXT {
	StructureType sType {StructureType::physicalDeviceConditionalRenderingFeaturesEXT};
	void* pNext {};
	Bool32 conditionalRendering {};
	Bool32 inheritedConditionalRendering {};

	constexpr PhysicalDeviceConditionalRenderingFeaturesEXT(Bool32 xconditionalRendering = {}, Bool32 xinheritedConditionalRendering = {}) : conditionalRendering(xconditionalRendering), inheritedConditionalRendering(xinheritedConditionalRendering) {}

	const VkPhysicalDeviceConditionalRenderingFeaturesEXT& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceConditionalRenderingFeaturesEXT&>(*this); }
	VkPhysicalDeviceConditionalRenderingFeaturesEXT& vkHandle() { return reinterpret_cast<VkPhysicalDeviceConditionalRenderingFeaturesEXT&>(*this); }

	operator const VkPhysicalDeviceConditionalRenderingFeaturesEXT&() const { return vkHandle(); };
	operator VkPhysicalDeviceConditionalRenderingFeaturesEXT&() { return vkHandle(); };
};

struct CommandBufferInheritanceConditionalRenderingInfoEXT {
	StructureType sType {StructureType::commandBufferInheritanceConditionalRenderingInfoEXT};
	const void* pNext {};
	Bool32 conditionalRenderingEnable {};

	constexpr CommandBufferInheritanceConditionalRenderingInfoEXT(Bool32 xconditionalRenderingEnable = {}) : conditionalRenderingEnable(xconditionalRenderingEnable) {}

	const VkCommandBufferInheritanceConditionalRenderingInfoEXT& vkHandle() const { return reinterpret_cast<const VkCommandBufferInheritanceConditionalRenderingInfoEXT&>(*this); }
	VkCommandBufferInheritanceConditionalRenderingInfoEXT& vkHandle() { return reinterpret_cast<VkCommandBufferInheritanceConditionalRenderingInfoEXT&>(*this); }

	operator const VkCommandBufferInheritanceConditionalRenderingInfoEXT&() const { return vkHandle(); };
	operator VkCommandBufferInheritanceConditionalRenderingInfoEXT&() { return vkHandle(); };
};


struct RectLayerKHR {
	Offset2D offset {};
	Extent2D extent {};
	uint32_t layer {};

	const VkRectLayerKHR& vkHandle() const { return reinterpret_cast<const VkRectLayerKHR&>(*this); }
	VkRectLayerKHR& vkHandle() { return reinterpret_cast<VkRectLayerKHR&>(*this); }

	operator const VkRectLayerKHR&() const { return vkHandle(); };
	operator VkRectLayerKHR&() { return vkHandle(); };
};

struct PresentRegionKHR {
	uint32_t rectangleCount {};
	const RectLayerKHR* pRectangles {};

	const VkPresentRegionKHR& vkHandle() const { return reinterpret_cast<const VkPresentRegionKHR&>(*this); }
	VkPresentRegionKHR& vkHandle() { return reinterpret_cast<VkPresentRegionKHR&>(*this); }

	operator const VkPresentRegionKHR&() const { return vkHandle(); };
	operator VkPresentRegionKHR&() { return vkHandle(); };
};

struct PresentRegionsKHR {
	StructureType sType {StructureType::presentRegionsKHR};
	const void* pNext {};
	uint32_t swapchainCount {};
	const PresentRegionKHR* pRegions {};

	constexpr PresentRegionsKHR(uint32_t xswapchainCount = {}, const PresentRegionKHR* xpRegions = {}) : swapchainCount(xswapchainCount), pRegions(xpRegions) {}

	const VkPresentRegionsKHR& vkHandle() const { return reinterpret_cast<const VkPresentRegionsKHR&>(*this); }
	VkPresentRegionsKHR& vkHandle() { return reinterpret_cast<VkPresentRegionsKHR&>(*this); }

	operator const VkPresentRegionsKHR&() const { return vkHandle(); };
	operator VkPresentRegionsKHR&() { return vkHandle(); };
};


struct ViewportWScalingNV {
	float xcoeff {};
	float ycoeff {};

	const VkViewportWScalingNV& vkHandle() const { return reinterpret_cast<const VkViewportWScalingNV&>(*this); }
	VkViewportWScalingNV& vkHandle() { return reinterpret_cast<VkViewportWScalingNV&>(*this); }

	operator const VkViewportWScalingNV&() const { return vkHandle(); };
	operator VkViewportWScalingNV&() { return vkHandle(); };
};

struct PipelineViewportWScalingStateCreateInfoNV {
	StructureType sType {StructureType::pipelineViewportWScalingStateCreateInfoNV};
	const void* pNext {};
	Bool32 viewportWScalingEnable {};
	uint32_t viewportCount {};
	const ViewportWScalingNV* pViewportWScalings {};

	constexpr PipelineViewportWScalingStateCreateInfoNV(Bool32 xviewportWScalingEnable = {}, uint32_t xviewportCount = {}, const ViewportWScalingNV* xpViewportWScalings = {}) : viewportWScalingEnable(xviewportWScalingEnable), viewportCount(xviewportCount), pViewportWScalings(xpViewportWScalings) {}

	const VkPipelineViewportWScalingStateCreateInfoNV& vkHandle() const { return reinterpret_cast<const VkPipelineViewportWScalingStateCreateInfoNV&>(*this); }
	VkPipelineViewportWScalingStateCreateInfoNV& vkHandle() { return reinterpret_cast<VkPipelineViewportWScalingStateCreateInfoNV&>(*this); }

	operator const VkPipelineViewportWScalingStateCreateInfoNV&() const { return vkHandle(); };
	operator VkPipelineViewportWScalingStateCreateInfoNV&() { return vkHandle(); };
};


struct SurfaceCapabilities2EXT {
	StructureType sType {StructureType::surfaceCapabilities2EXT};
	void* pNext {};
	uint32_t minImageCount {};
	uint32_t maxImageCount {};
	Extent2D currentExtent {};
	Extent2D minImageExtent {};
	Extent2D maxImageExtent {};
	uint32_t maxImageArrayLayers {};
	SurfaceTransformFlagsKHR supportedTransforms {};
	SurfaceTransformBitsKHR currentTransform {};
	CompositeAlphaFlagsKHR supportedCompositeAlpha {};
	ImageUsageFlags supportedUsageFlags {};
	SurfaceCounterFlagsEXT supportedSurfaceCounters {};

	const VkSurfaceCapabilities2EXT& vkHandle() const { return reinterpret_cast<const VkSurfaceCapabilities2EXT&>(*this); }
	VkSurfaceCapabilities2EXT& vkHandle() { return reinterpret_cast<VkSurfaceCapabilities2EXT&>(*this); }

	operator const VkSurfaceCapabilities2EXT&() const { return vkHandle(); };
	operator VkSurfaceCapabilities2EXT&() { return vkHandle(); };
};


struct DisplayPowerInfoEXT {
	StructureType sType {StructureType::displayPowerInfoEXT};
	const void* pNext {};
	DisplayPowerStateEXT powerState {};

	constexpr DisplayPowerInfoEXT(DisplayPowerStateEXT xpowerState = {}) : powerState(xpowerState) {}

	const VkDisplayPowerInfoEXT& vkHandle() const { return reinterpret_cast<const VkDisplayPowerInfoEXT&>(*this); }
	VkDisplayPowerInfoEXT& vkHandle() { return reinterpret_cast<VkDisplayPowerInfoEXT&>(*this); }

	operator const VkDisplayPowerInfoEXT&() const { return vkHandle(); };
	operator VkDisplayPowerInfoEXT&() { return vkHandle(); };
};

struct DeviceEventInfoEXT {
	StructureType sType {StructureType::deviceEventInfoEXT};
	const void* pNext {};
	DeviceEventTypeEXT deviceEvent {};

	constexpr DeviceEventInfoEXT(DeviceEventTypeEXT xdeviceEvent = {}) : deviceEvent(xdeviceEvent) {}

	const VkDeviceEventInfoEXT& vkHandle() const { return reinterpret_cast<const VkDeviceEventInfoEXT&>(*this); }
	VkDeviceEventInfoEXT& vkHandle() { return reinterpret_cast<VkDeviceEventInfoEXT&>(*this); }

	operator const VkDeviceEventInfoEXT&() const { return vkHandle(); };
	operator VkDeviceEventInfoEXT&() { return vkHandle(); };
};

struct DisplayEventInfoEXT {
	StructureType sType {StructureType::displayEventInfoEXT};
	const void* pNext {};
	DisplayEventTypeEXT displayEvent {};

	constexpr DisplayEventInfoEXT(DisplayEventTypeEXT xdisplayEvent = {}) : displayEvent(xdisplayEvent) {}

	const VkDisplayEventInfoEXT& vkHandle() const { return reinterpret_cast<const VkDisplayEventInfoEXT&>(*this); }
	VkDisplayEventInfoEXT& vkHandle() { return reinterpret_cast<VkDisplayEventInfoEXT&>(*this); }

	operator const VkDisplayEventInfoEXT&() const { return vkHandle(); };
	operator VkDisplayEventInfoEXT&() { return vkHandle(); };
};

struct SwapchainCounterCreateInfoEXT {
	StructureType sType {StructureType::swapchainCounterCreateInfoEXT};
	const void* pNext {};
	SurfaceCounterFlagsEXT surfaceCounters {};

	constexpr SwapchainCounterCreateInfoEXT(SurfaceCounterFlagsEXT xsurfaceCounters = {}) : surfaceCounters(xsurfaceCounters) {}

	const VkSwapchainCounterCreateInfoEXT& vkHandle() const { return reinterpret_cast<const VkSwapchainCounterCreateInfoEXT&>(*this); }
	VkSwapchainCounterCreateInfoEXT& vkHandle() { return reinterpret_cast<VkSwapchainCounterCreateInfoEXT&>(*this); }

	operator const VkSwapchainCounterCreateInfoEXT&() const { return vkHandle(); };
	operator VkSwapchainCounterCreateInfoEXT&() { return vkHandle(); };
};


struct RefreshCycleDurationGOOGLE {
	uint64_t refreshDuration {};

	const VkRefreshCycleDurationGOOGLE& vkHandle() const { return reinterpret_cast<const VkRefreshCycleDurationGOOGLE&>(*this); }
	VkRefreshCycleDurationGOOGLE& vkHandle() { return reinterpret_cast<VkRefreshCycleDurationGOOGLE&>(*this); }

	operator const VkRefreshCycleDurationGOOGLE&() const { return vkHandle(); };
	operator VkRefreshCycleDurationGOOGLE&() { return vkHandle(); };
};

struct PastPresentationTimingGOOGLE {
	uint32_t presentID {};
	uint64_t desiredPresentTime {};
	uint64_t actualPresentTime {};
	uint64_t earliestPresentTime {};
	uint64_t presentMargin {};

	const VkPastPresentationTimingGOOGLE& vkHandle() const { return reinterpret_cast<const VkPastPresentationTimingGOOGLE&>(*this); }
	VkPastPresentationTimingGOOGLE& vkHandle() { return reinterpret_cast<VkPastPresentationTimingGOOGLE&>(*this); }

	operator const VkPastPresentationTimingGOOGLE&() const { return vkHandle(); };
	operator VkPastPresentationTimingGOOGLE&() { return vkHandle(); };
};

struct PresentTimeGOOGLE {
	uint32_t presentID {};
	uint64_t desiredPresentTime {};

	const VkPresentTimeGOOGLE& vkHandle() const { return reinterpret_cast<const VkPresentTimeGOOGLE&>(*this); }
	VkPresentTimeGOOGLE& vkHandle() { return reinterpret_cast<VkPresentTimeGOOGLE&>(*this); }

	operator const VkPresentTimeGOOGLE&() const { return vkHandle(); };
	operator VkPresentTimeGOOGLE&() { return vkHandle(); };
};

struct PresentTimesInfoGOOGLE {
	StructureType sType {StructureType::presentTimesInfoGOOGLE};
	const void* pNext {};
	uint32_t swapchainCount {};
	const PresentTimeGOOGLE* pTimes {};

	constexpr PresentTimesInfoGOOGLE(uint32_t xswapchainCount = {}, const PresentTimeGOOGLE* xpTimes = {}) : swapchainCount(xswapchainCount), pTimes(xpTimes) {}

	const VkPresentTimesInfoGOOGLE& vkHandle() const { return reinterpret_cast<const VkPresentTimesInfoGOOGLE&>(*this); }
	VkPresentTimesInfoGOOGLE& vkHandle() { return reinterpret_cast<VkPresentTimesInfoGOOGLE&>(*this); }

	operator const VkPresentTimesInfoGOOGLE&() const { return vkHandle(); };
	operator VkPresentTimesInfoGOOGLE&() { return vkHandle(); };
};


struct ViewportSwizzleNV {
	ViewportCoordinateSwizzleNV x {};
	ViewportCoordinateSwizzleNV y {};
	ViewportCoordinateSwizzleNV z {};
	ViewportCoordinateSwizzleNV w {};

	const VkViewportSwizzleNV& vkHandle() const { return reinterpret_cast<const VkViewportSwizzleNV&>(*this); }
	VkViewportSwizzleNV& vkHandle() { return reinterpret_cast<VkViewportSwizzleNV&>(*this); }

	operator const VkViewportSwizzleNV&() const { return vkHandle(); };
	operator VkViewportSwizzleNV&() { return vkHandle(); };
};

struct PipelineViewportSwizzleStateCreateInfoNV {
	StructureType sType {StructureType::pipelineViewportSwizzleStateCreateInfoNV};
	const void* pNext {};
	PipelineViewportSwizzleStateCreateFlagsNV flags {};
	uint32_t viewportCount {};
	const ViewportSwizzleNV* pViewportSwizzles {};

	constexpr PipelineViewportSwizzleStateCreateInfoNV(PipelineViewportSwizzleStateCreateFlagsNV xflags = {}, uint32_t xviewportCount = {}, const ViewportSwizzleNV* xpViewportSwizzles = {}) : flags(xflags), viewportCount(xviewportCount), pViewportSwizzles(xpViewportSwizzles) {}

	const VkPipelineViewportSwizzleStateCreateInfoNV& vkHandle() const { return reinterpret_cast<const VkPipelineViewportSwizzleStateCreateInfoNV&>(*this); }
	VkPipelineViewportSwizzleStateCreateInfoNV& vkHandle() { return reinterpret_cast<VkPipelineViewportSwizzleStateCreateInfoNV&>(*this); }

	operator const VkPipelineViewportSwizzleStateCreateInfoNV&() const { return vkHandle(); };
	operator VkPipelineViewportSwizzleStateCreateInfoNV&() { return vkHandle(); };
};


struct PhysicalDeviceDiscardRectanglePropertiesEXT {
	StructureType sType {StructureType::physicalDeviceDiscardRectanglePropertiesEXT};
	void* pNext {};
	uint32_t maxDiscardRectangles {};

	const VkPhysicalDeviceDiscardRectanglePropertiesEXT& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceDiscardRectanglePropertiesEXT&>(*this); }
	VkPhysicalDeviceDiscardRectanglePropertiesEXT& vkHandle() { return reinterpret_cast<VkPhysicalDeviceDiscardRectanglePropertiesEXT&>(*this); }

	operator const VkPhysicalDeviceDiscardRectanglePropertiesEXT&() const { return vkHandle(); };
	operator VkPhysicalDeviceDiscardRectanglePropertiesEXT&() { return vkHandle(); };
};

struct PipelineDiscardRectangleStateCreateInfoEXT {
	StructureType sType {StructureType::pipelineDiscardRectangleStateCreateInfoEXT};
	const void* pNext {};
	PipelineDiscardRectangleStateCreateFlagsEXT flags {};
	DiscardRectangleModeEXT discardRectangleMode {};
	uint32_t discardRectangleCount {};
	const Rect2D* pDiscardRectangles {};

	constexpr PipelineDiscardRectangleStateCreateInfoEXT(PipelineDiscardRectangleStateCreateFlagsEXT xflags = {}, DiscardRectangleModeEXT xdiscardRectangleMode = {}, uint32_t xdiscardRectangleCount = {}, const Rect2D* xpDiscardRectangles = {}) : flags(xflags), discardRectangleMode(xdiscardRectangleMode), discardRectangleCount(xdiscardRectangleCount), pDiscardRectangles(xpDiscardRectangles) {}

	const VkPipelineDiscardRectangleStateCreateInfoEXT& vkHandle() const { return reinterpret_cast<const VkPipelineDiscardRectangleStateCreateInfoEXT&>(*this); }
	VkPipelineDiscardRectangleStateCreateInfoEXT& vkHandle() { return reinterpret_cast<VkPipelineDiscardRectangleStateCreateInfoEXT&>(*this); }

	operator const VkPipelineDiscardRectangleStateCreateInfoEXT&() const { return vkHandle(); };
	operator VkPipelineDiscardRectangleStateCreateInfoEXT&() { return vkHandle(); };
};


struct PhysicalDeviceConservativeRasterizationPropertiesEXT {
	StructureType sType {StructureType::physicalDeviceConservativeRasterizationPropertiesEXT};
	void* pNext {};
	float primitiveOverestimationSize {};
	float maxExtraPrimitiveOverestimationSize {};
	float extraPrimitiveOverestimationSizeGranularity {};
	Bool32 primitiveUnderestimation {};
	Bool32 conservativePointAndLineRasterization {};
	Bool32 degenerateTrianglesRasterized {};
	Bool32 degenerateLinesRasterized {};
	Bool32 fullyCoveredFragmentShaderInputVariable {};
	Bool32 conservativeRasterizationPostDepthCoverage {};

	const VkPhysicalDeviceConservativeRasterizationPropertiesEXT& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceConservativeRasterizationPropertiesEXT&>(*this); }
	VkPhysicalDeviceConservativeRasterizationPropertiesEXT& vkHandle() { return reinterpret_cast<VkPhysicalDeviceConservativeRasterizationPropertiesEXT&>(*this); }

	operator const VkPhysicalDeviceConservativeRasterizationPropertiesEXT&() const { return vkHandle(); };
	operator VkPhysicalDeviceConservativeRasterizationPropertiesEXT&() { return vkHandle(); };
};

struct PipelineRasterizationConservativeStateCreateInfoEXT {
	StructureType sType {StructureType::pipelineRasterizationConservativeStateCreateInfoEXT};
	const void* pNext {};
	PipelineRasterizationConservativeStateCreateFlagsEXT flags {};
	ConservativeRasterizationModeEXT conservativeRasterizationMode {};
	float extraPrimitiveOverestimationSize {};

	constexpr PipelineRasterizationConservativeStateCreateInfoEXT(PipelineRasterizationConservativeStateCreateFlagsEXT xflags = {}, ConservativeRasterizationModeEXT xconservativeRasterizationMode = {}, float xextraPrimitiveOverestimationSize = {}) : flags(xflags), conservativeRasterizationMode(xconservativeRasterizationMode), extraPrimitiveOverestimationSize(xextraPrimitiveOverestimationSize) {}

	const VkPipelineRasterizationConservativeStateCreateInfoEXT& vkHandle() const { return reinterpret_cast<const VkPipelineRasterizationConservativeStateCreateInfoEXT&>(*this); }
	VkPipelineRasterizationConservativeStateCreateInfoEXT& vkHandle() { return reinterpret_cast<VkPipelineRasterizationConservativeStateCreateInfoEXT&>(*this); }

	operator const VkPipelineRasterizationConservativeStateCreateInfoEXT&() const { return vkHandle(); };
	operator VkPipelineRasterizationConservativeStateCreateInfoEXT&() { return vkHandle(); };
};


struct PhysicalDeviceDepthClipEnableFeaturesEXT {
	StructureType sType {StructureType::physicalDeviceDepthClipEnableFeaturesEXT};
	void* pNext {};
	Bool32 depthClipEnable {};

	constexpr PhysicalDeviceDepthClipEnableFeaturesEXT(Bool32 xdepthClipEnable = {}) : depthClipEnable(xdepthClipEnable) {}

	const VkPhysicalDeviceDepthClipEnableFeaturesEXT& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceDepthClipEnableFeaturesEXT&>(*this); }
	VkPhysicalDeviceDepthClipEnableFeaturesEXT& vkHandle() { return reinterpret_cast<VkPhysicalDeviceDepthClipEnableFeaturesEXT&>(*this); }

	operator const VkPhysicalDeviceDepthClipEnableFeaturesEXT&() const { return vkHandle(); };
	operator VkPhysicalDeviceDepthClipEnableFeaturesEXT&() { return vkHandle(); };
};

struct PipelineRasterizationDepthClipStateCreateInfoEXT {
	StructureType sType {StructureType::pipelineRasterizationDepthClipStateCreateInfoEXT};
	const void* pNext {};
	PipelineRasterizationDepthClipStateCreateFlagsEXT flags {};
	Bool32 depthClipEnable {};

	constexpr PipelineRasterizationDepthClipStateCreateInfoEXT(PipelineRasterizationDepthClipStateCreateFlagsEXT xflags = {}, Bool32 xdepthClipEnable = {}) : flags(xflags), depthClipEnable(xdepthClipEnable) {}

	const VkPipelineRasterizationDepthClipStateCreateInfoEXT& vkHandle() const { return reinterpret_cast<const VkPipelineRasterizationDepthClipStateCreateInfoEXT&>(*this); }
	VkPipelineRasterizationDepthClipStateCreateInfoEXT& vkHandle() { return reinterpret_cast<VkPipelineRasterizationDepthClipStateCreateInfoEXT&>(*this); }

	operator const VkPipelineRasterizationDepthClipStateCreateInfoEXT&() const { return vkHandle(); };
	operator VkPipelineRasterizationDepthClipStateCreateInfoEXT&() { return vkHandle(); };
};


struct XYColorEXT {
	float x {};
	float y {};

	const VkXYColorEXT& vkHandle() const { return reinterpret_cast<const VkXYColorEXT&>(*this); }
	VkXYColorEXT& vkHandle() { return reinterpret_cast<VkXYColorEXT&>(*this); }

	operator const VkXYColorEXT&() const { return vkHandle(); };
	operator VkXYColorEXT&() { return vkHandle(); };
};

struct HdrMetadataEXT {
	StructureType sType {StructureType::hdrMetadataEXT};
	const void* pNext {};
	XYColorEXT displayPrimaryRed {};
	XYColorEXT displayPrimaryGreen {};
	XYColorEXT displayPrimaryBlue {};
	XYColorEXT whitePoint {};
	float maxLuminance {};
	float minLuminance {};
	float maxContentLightLevel {};
	float maxFrameAverageLightLevel {};

	constexpr HdrMetadataEXT(XYColorEXT xdisplayPrimaryRed = {}, XYColorEXT xdisplayPrimaryGreen = {}, XYColorEXT xdisplayPrimaryBlue = {}, XYColorEXT xwhitePoint = {}, float xmaxLuminance = {}, float xminLuminance = {}, float xmaxContentLightLevel = {}, float xmaxFrameAverageLightLevel = {}) : displayPrimaryRed(xdisplayPrimaryRed), displayPrimaryGreen(xdisplayPrimaryGreen), displayPrimaryBlue(xdisplayPrimaryBlue), whitePoint(xwhitePoint), maxLuminance(xmaxLuminance), minLuminance(xminLuminance), maxContentLightLevel(xmaxContentLightLevel), maxFrameAverageLightLevel(xmaxFrameAverageLightLevel) {}

	const VkHdrMetadataEXT& vkHandle() const { return reinterpret_cast<const VkHdrMetadataEXT&>(*this); }
	VkHdrMetadataEXT& vkHandle() { return reinterpret_cast<VkHdrMetadataEXT&>(*this); }

	operator const VkHdrMetadataEXT&() const { return vkHandle(); };
	operator VkHdrMetadataEXT&() { return vkHandle(); };
};


struct SharedPresentSurfaceCapabilitiesKHR {
	StructureType sType {StructureType::sharedPresentSurfaceCapabilitiesKHR};
	void* pNext {};
	ImageUsageFlags sharedPresentSupportedUsageFlags {};

	const VkSharedPresentSurfaceCapabilitiesKHR& vkHandle() const { return reinterpret_cast<const VkSharedPresentSurfaceCapabilitiesKHR&>(*this); }
	VkSharedPresentSurfaceCapabilitiesKHR& vkHandle() { return reinterpret_cast<VkSharedPresentSurfaceCapabilitiesKHR&>(*this); }

	operator const VkSharedPresentSurfaceCapabilitiesKHR&() const { return vkHandle(); };
	operator VkSharedPresentSurfaceCapabilitiesKHR&() { return vkHandle(); };
};



#ifdef VK_USE_PLATFORM_WIN32_KHR
struct ImportFenceWin32HandleInfoKHR {
	StructureType sType {StructureType::importFenceWin32HandleInfoKHR};
	const void* pNext {};
	Fence fence {};
	FenceImportFlags flags {};
	ExternalFenceHandleTypeBits handleType {};
	HANDLE handle {};
	LPCWSTR name {};

	constexpr ImportFenceWin32HandleInfoKHR(Fence xfence = {}, FenceImportFlags xflags = {}, ExternalFenceHandleTypeBits xhandleType = {}, HANDLE xhandle = {}, LPCWSTR xname = {}) : fence(xfence), flags(xflags), handleType(xhandleType), handle(xhandle), name(xname) {}

	const VkImportFenceWin32HandleInfoKHR& vkHandle() const { return reinterpret_cast<const VkImportFenceWin32HandleInfoKHR&>(*this); }
	VkImportFenceWin32HandleInfoKHR& vkHandle() { return reinterpret_cast<VkImportFenceWin32HandleInfoKHR&>(*this); }

	operator const VkImportFenceWin32HandleInfoKHR&() const { return vkHandle(); };
	operator VkImportFenceWin32HandleInfoKHR&() { return vkHandle(); };
};

struct ExportFenceWin32HandleInfoKHR {
	StructureType sType {StructureType::exportFenceWin32HandleInfoKHR};
	const void* pNext {};
	const SECURITY_ATTRIBUTES* pAttributes {};
	DWORD dwAccess {};
	LPCWSTR name {};

	constexpr ExportFenceWin32HandleInfoKHR(const SECURITY_ATTRIBUTES* xpAttributes = {}, DWORD xdwAccess = {}, LPCWSTR xname = {}) : pAttributes(xpAttributes), dwAccess(xdwAccess), name(xname) {}

	const VkExportFenceWin32HandleInfoKHR& vkHandle() const { return reinterpret_cast<const VkExportFenceWin32HandleInfoKHR&>(*this); }
	VkExportFenceWin32HandleInfoKHR& vkHandle() { return reinterpret_cast<VkExportFenceWin32HandleInfoKHR&>(*this); }

	operator const VkExportFenceWin32HandleInfoKHR&() const { return vkHandle(); };
	operator VkExportFenceWin32HandleInfoKHR&() { return vkHandle(); };
};

struct FenceGetWin32HandleInfoKHR {
	StructureType sType {StructureType::fenceGetWin32HandleInfoKHR};
	const void* pNext {};
	Fence fence {};
	ExternalFenceHandleTypeBits handleType {};

	constexpr FenceGetWin32HandleInfoKHR(Fence xfence = {}, ExternalFenceHandleTypeBits xhandleType = {}) : fence(xfence), handleType(xhandleType) {}

	const VkFenceGetWin32HandleInfoKHR& vkHandle() const { return reinterpret_cast<const VkFenceGetWin32HandleInfoKHR&>(*this); }
	VkFenceGetWin32HandleInfoKHR& vkHandle() { return reinterpret_cast<VkFenceGetWin32HandleInfoKHR&>(*this); }

	operator const VkFenceGetWin32HandleInfoKHR&() const { return vkHandle(); };
	operator VkFenceGetWin32HandleInfoKHR&() { return vkHandle(); };
};


#endif //VK_USE_PLATFORM_WIN32_KHR

struct ImportFenceFdInfoKHR {
	StructureType sType {StructureType::importFenceFdInfoKHR};
	const void* pNext {};
	Fence fence {};
	FenceImportFlags flags {};
	ExternalFenceHandleTypeBits handleType {};
	int fd {};

	constexpr ImportFenceFdInfoKHR(Fence xfence = {}, FenceImportFlags xflags = {}, ExternalFenceHandleTypeBits xhandleType = {}, int xfd = {}) : fence(xfence), flags(xflags), handleType(xhandleType), fd(xfd) {}

	const VkImportFenceFdInfoKHR& vkHandle() const { return reinterpret_cast<const VkImportFenceFdInfoKHR&>(*this); }
	VkImportFenceFdInfoKHR& vkHandle() { return reinterpret_cast<VkImportFenceFdInfoKHR&>(*this); }

	operator const VkImportFenceFdInfoKHR&() const { return vkHandle(); };
	operator VkImportFenceFdInfoKHR&() { return vkHandle(); };
};

struct FenceGetFdInfoKHR {
	StructureType sType {StructureType::fenceGetFdInfoKHR};
	const void* pNext {};
	Fence fence {};
	ExternalFenceHandleTypeBits handleType {};

	constexpr FenceGetFdInfoKHR(Fence xfence = {}, ExternalFenceHandleTypeBits xhandleType = {}) : fence(xfence), handleType(xhandleType) {}

	const VkFenceGetFdInfoKHR& vkHandle() const { return reinterpret_cast<const VkFenceGetFdInfoKHR&>(*this); }
	VkFenceGetFdInfoKHR& vkHandle() { return reinterpret_cast<VkFenceGetFdInfoKHR&>(*this); }

	operator const VkFenceGetFdInfoKHR&() const { return vkHandle(); };
	operator VkFenceGetFdInfoKHR&() { return vkHandle(); };
};


struct PhysicalDevicePerformanceQueryFeaturesKHR {
	StructureType sType {StructureType::physicalDevicePerformanceQueryFeaturesKHR};
	void* pNext {};
	Bool32 performanceCounterQueryPools {};
	Bool32 performanceCounterMultipleQueryPools {};

	constexpr PhysicalDevicePerformanceQueryFeaturesKHR(Bool32 xperformanceCounterQueryPools = {}, Bool32 xperformanceCounterMultipleQueryPools = {}) : performanceCounterQueryPools(xperformanceCounterQueryPools), performanceCounterMultipleQueryPools(xperformanceCounterMultipleQueryPools) {}

	const VkPhysicalDevicePerformanceQueryFeaturesKHR& vkHandle() const { return reinterpret_cast<const VkPhysicalDevicePerformanceQueryFeaturesKHR&>(*this); }
	VkPhysicalDevicePerformanceQueryFeaturesKHR& vkHandle() { return reinterpret_cast<VkPhysicalDevicePerformanceQueryFeaturesKHR&>(*this); }

	operator const VkPhysicalDevicePerformanceQueryFeaturesKHR&() const { return vkHandle(); };
	operator VkPhysicalDevicePerformanceQueryFeaturesKHR&() { return vkHandle(); };
};

struct PhysicalDevicePerformanceQueryPropertiesKHR {
	StructureType sType {StructureType::physicalDevicePerformanceQueryPropertiesKHR};
	void* pNext {};
	Bool32 allowCommandBufferQueryCopies {};

	const VkPhysicalDevicePerformanceQueryPropertiesKHR& vkHandle() const { return reinterpret_cast<const VkPhysicalDevicePerformanceQueryPropertiesKHR&>(*this); }
	VkPhysicalDevicePerformanceQueryPropertiesKHR& vkHandle() { return reinterpret_cast<VkPhysicalDevicePerformanceQueryPropertiesKHR&>(*this); }

	operator const VkPhysicalDevicePerformanceQueryPropertiesKHR&() const { return vkHandle(); };
	operator VkPhysicalDevicePerformanceQueryPropertiesKHR&() { return vkHandle(); };
};

struct PerformanceCounterKHR {
	StructureType sType {StructureType::performanceCounterKHR};
	const void* pNext {};
	PerformanceCounterUnitKHR unit {};
	PerformanceCounterScopeKHR scope {};
	PerformanceCounterStorageKHR storage {};
	std::array<uint8_t, uuidSize> uuid {};

	const VkPerformanceCounterKHR& vkHandle() const { return reinterpret_cast<const VkPerformanceCounterKHR&>(*this); }
	VkPerformanceCounterKHR& vkHandle() { return reinterpret_cast<VkPerformanceCounterKHR&>(*this); }

	operator const VkPerformanceCounterKHR&() const { return vkHandle(); };
	operator VkPerformanceCounterKHR&() { return vkHandle(); };
};

struct PerformanceCounterDescriptionKHR {
	StructureType sType {StructureType::performanceCounterDescriptionKHR};
	const void* pNext {};
	PerformanceCounterDescriptionFlagsKHR flags {};
	std::array<char, maxDescriptionSize> name {};
	std::array<char, maxDescriptionSize> category {};
	std::array<char, maxDescriptionSize> description {};

	const VkPerformanceCounterDescriptionKHR& vkHandle() const { return reinterpret_cast<const VkPerformanceCounterDescriptionKHR&>(*this); }
	VkPerformanceCounterDescriptionKHR& vkHandle() { return reinterpret_cast<VkPerformanceCounterDescriptionKHR&>(*this); }

	operator const VkPerformanceCounterDescriptionKHR&() const { return vkHandle(); };
	operator VkPerformanceCounterDescriptionKHR&() { return vkHandle(); };
};

struct QueryPoolPerformanceCreateInfoKHR {
	StructureType sType {StructureType::queryPoolPerformanceCreateInfoKHR};
	const void* pNext {};
	uint32_t queueFamilyIndex {};
	uint32_t counterIndexCount {};
	const uint32_t* pCounterIndices {};

	constexpr QueryPoolPerformanceCreateInfoKHR(uint32_t xqueueFamilyIndex = {}, uint32_t xcounterIndexCount = {}, const uint32_t* xpCounterIndices = {}) : queueFamilyIndex(xqueueFamilyIndex), counterIndexCount(xcounterIndexCount), pCounterIndices(xpCounterIndices) {}

	const VkQueryPoolPerformanceCreateInfoKHR& vkHandle() const { return reinterpret_cast<const VkQueryPoolPerformanceCreateInfoKHR&>(*this); }
	VkQueryPoolPerformanceCreateInfoKHR& vkHandle() { return reinterpret_cast<VkQueryPoolPerformanceCreateInfoKHR&>(*this); }

	operator const VkQueryPoolPerformanceCreateInfoKHR&() const { return vkHandle(); };
	operator VkQueryPoolPerformanceCreateInfoKHR&() { return vkHandle(); };
};

union PerformanceCounterResultKHR {
	int32_t int32 {};
	int64_t int64;
	uint32_t uint32;
	uint64_t uint64;
	float float32;
	double float64;

	const VkPerformanceCounterResultKHR& vkHandle() const { return reinterpret_cast<const VkPerformanceCounterResultKHR&>(*this); }
	VkPerformanceCounterResultKHR& vkHandle() { return reinterpret_cast<VkPerformanceCounterResultKHR&>(*this); }

	operator const VkPerformanceCounterResultKHR&() const { return vkHandle(); };
	operator VkPerformanceCounterResultKHR&() { return vkHandle(); };
};

struct AcquireProfilingLockInfoKHR {
	StructureType sType {StructureType::acquireProfilingLockInfoKHR};
	const void* pNext {};
	AcquireProfilingLockFlagsKHR flags {};
	uint64_t timeout {};

	constexpr AcquireProfilingLockInfoKHR(AcquireProfilingLockFlagsKHR xflags = {}, uint64_t xtimeout = {}) : flags(xflags), timeout(xtimeout) {}

	const VkAcquireProfilingLockInfoKHR& vkHandle() const { return reinterpret_cast<const VkAcquireProfilingLockInfoKHR&>(*this); }
	VkAcquireProfilingLockInfoKHR& vkHandle() { return reinterpret_cast<VkAcquireProfilingLockInfoKHR&>(*this); }

	operator const VkAcquireProfilingLockInfoKHR&() const { return vkHandle(); };
	operator VkAcquireProfilingLockInfoKHR&() { return vkHandle(); };
};

struct PerformanceQuerySubmitInfoKHR {
	StructureType sType {StructureType::performanceQuerySubmitInfoKHR};
	const void* pNext {};
	uint32_t counterPassIndex {};

	constexpr PerformanceQuerySubmitInfoKHR(uint32_t xcounterPassIndex = {}) : counterPassIndex(xcounterPassIndex) {}

	const VkPerformanceQuerySubmitInfoKHR& vkHandle() const { return reinterpret_cast<const VkPerformanceQuerySubmitInfoKHR&>(*this); }
	VkPerformanceQuerySubmitInfoKHR& vkHandle() { return reinterpret_cast<VkPerformanceQuerySubmitInfoKHR&>(*this); }

	operator const VkPerformanceQuerySubmitInfoKHR&() const { return vkHandle(); };
	operator VkPerformanceQuerySubmitInfoKHR&() { return vkHandle(); };
};


struct PhysicalDeviceSurfaceInfo2KHR {
	StructureType sType {StructureType::physicalDeviceSurfaceInfo2KHR};
	const void* pNext {};
	SurfaceKHR surface {};

	constexpr PhysicalDeviceSurfaceInfo2KHR(SurfaceKHR xsurface = {}) : surface(xsurface) {}

	const VkPhysicalDeviceSurfaceInfo2KHR& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceSurfaceInfo2KHR&>(*this); }
	VkPhysicalDeviceSurfaceInfo2KHR& vkHandle() { return reinterpret_cast<VkPhysicalDeviceSurfaceInfo2KHR&>(*this); }

	operator const VkPhysicalDeviceSurfaceInfo2KHR&() const { return vkHandle(); };
	operator VkPhysicalDeviceSurfaceInfo2KHR&() { return vkHandle(); };
};

struct SurfaceCapabilities2KHR {
	StructureType sType {StructureType::surfaceCapabilities2KHR};
	void* pNext {};
	SurfaceCapabilitiesKHR surfaceCapabilities {};

	const VkSurfaceCapabilities2KHR& vkHandle() const { return reinterpret_cast<const VkSurfaceCapabilities2KHR&>(*this); }
	VkSurfaceCapabilities2KHR& vkHandle() { return reinterpret_cast<VkSurfaceCapabilities2KHR&>(*this); }

	operator const VkSurfaceCapabilities2KHR&() const { return vkHandle(); };
	operator VkSurfaceCapabilities2KHR&() { return vkHandle(); };
};

struct SurfaceFormat2KHR {
	StructureType sType {StructureType::surfaceFormat2KHR};
	void* pNext {};
	SurfaceFormatKHR surfaceFormat {};

	const VkSurfaceFormat2KHR& vkHandle() const { return reinterpret_cast<const VkSurfaceFormat2KHR&>(*this); }
	VkSurfaceFormat2KHR& vkHandle() { return reinterpret_cast<VkSurfaceFormat2KHR&>(*this); }

	operator const VkSurfaceFormat2KHR&() const { return vkHandle(); };
	operator VkSurfaceFormat2KHR&() { return vkHandle(); };
};


struct DisplayProperties2KHR {
	StructureType sType {StructureType::displayProperties2KHR};
	void* pNext {};
	DisplayPropertiesKHR displayProperties {};

	const VkDisplayProperties2KHR& vkHandle() const { return reinterpret_cast<const VkDisplayProperties2KHR&>(*this); }
	VkDisplayProperties2KHR& vkHandle() { return reinterpret_cast<VkDisplayProperties2KHR&>(*this); }

	operator const VkDisplayProperties2KHR&() const { return vkHandle(); };
	operator VkDisplayProperties2KHR&() { return vkHandle(); };
};

struct DisplayPlaneProperties2KHR {
	StructureType sType {StructureType::displayPlaneProperties2KHR};
	void* pNext {};
	DisplayPlanePropertiesKHR displayPlaneProperties {};

	const VkDisplayPlaneProperties2KHR& vkHandle() const { return reinterpret_cast<const VkDisplayPlaneProperties2KHR&>(*this); }
	VkDisplayPlaneProperties2KHR& vkHandle() { return reinterpret_cast<VkDisplayPlaneProperties2KHR&>(*this); }

	operator const VkDisplayPlaneProperties2KHR&() const { return vkHandle(); };
	operator VkDisplayPlaneProperties2KHR&() { return vkHandle(); };
};

struct DisplayModeProperties2KHR {
	StructureType sType {StructureType::displayModeProperties2KHR};
	void* pNext {};
	DisplayModePropertiesKHR displayModeProperties {};

	const VkDisplayModeProperties2KHR& vkHandle() const { return reinterpret_cast<const VkDisplayModeProperties2KHR&>(*this); }
	VkDisplayModeProperties2KHR& vkHandle() { return reinterpret_cast<VkDisplayModeProperties2KHR&>(*this); }

	operator const VkDisplayModeProperties2KHR&() const { return vkHandle(); };
	operator VkDisplayModeProperties2KHR&() { return vkHandle(); };
};

struct DisplayPlaneInfo2KHR {
	StructureType sType {StructureType::displayPlaneInfo2KHR};
	const void* pNext {};
	DisplayModeKHR mode {};
	uint32_t planeIndex {};

	constexpr DisplayPlaneInfo2KHR(DisplayModeKHR xmode = {}, uint32_t xplaneIndex = {}) : mode(xmode), planeIndex(xplaneIndex) {}

	const VkDisplayPlaneInfo2KHR& vkHandle() const { return reinterpret_cast<const VkDisplayPlaneInfo2KHR&>(*this); }
	VkDisplayPlaneInfo2KHR& vkHandle() { return reinterpret_cast<VkDisplayPlaneInfo2KHR&>(*this); }

	operator const VkDisplayPlaneInfo2KHR&() const { return vkHandle(); };
	operator VkDisplayPlaneInfo2KHR&() { return vkHandle(); };
};

struct DisplayPlaneCapabilities2KHR {
	StructureType sType {StructureType::displayPlaneCapabilities2KHR};
	void* pNext {};
	DisplayPlaneCapabilitiesKHR capabilities {};

	const VkDisplayPlaneCapabilities2KHR& vkHandle() const { return reinterpret_cast<const VkDisplayPlaneCapabilities2KHR&>(*this); }
	VkDisplayPlaneCapabilities2KHR& vkHandle() { return reinterpret_cast<VkDisplayPlaneCapabilities2KHR&>(*this); }

	operator const VkDisplayPlaneCapabilities2KHR&() const { return vkHandle(); };
	operator VkDisplayPlaneCapabilities2KHR&() { return vkHandle(); };
};



#ifdef VK_USE_PLATFORM_IOS_MVK
struct IOSSurfaceCreateInfoMVK {
	StructureType sType {StructureType::iosSurfaceCreateInfoMVK};
	const void* pNext {};
	IOSSurfaceCreateFlagsMVK flags {};
	const void* pView {};

	constexpr IOSSurfaceCreateInfoMVK(IOSSurfaceCreateFlagsMVK xflags = {}, const void* xpView = {}) : flags(xflags), pView(xpView) {}

	const VkIOSSurfaceCreateInfoMVK& vkHandle() const { return reinterpret_cast<const VkIOSSurfaceCreateInfoMVK&>(*this); }
	VkIOSSurfaceCreateInfoMVK& vkHandle() { return reinterpret_cast<VkIOSSurfaceCreateInfoMVK&>(*this); }

	operator const VkIOSSurfaceCreateInfoMVK&() const { return vkHandle(); };
	operator VkIOSSurfaceCreateInfoMVK&() { return vkHandle(); };
};


#endif //VK_USE_PLATFORM_IOS_MVK


#ifdef VK_USE_PLATFORM_MACOS_MVK
struct MacOSSurfaceCreateInfoMVK {
	StructureType sType {StructureType::macosSurfaceCreateInfoMVK};
	const void* pNext {};
	MacOSSurfaceCreateFlagsMVK flags {};
	const void* pView {};

	constexpr MacOSSurfaceCreateInfoMVK(MacOSSurfaceCreateFlagsMVK xflags = {}, const void* xpView = {}) : flags(xflags), pView(xpView) {}

	const VkMacOSSurfaceCreateInfoMVK& vkHandle() const { return reinterpret_cast<const VkMacOSSurfaceCreateInfoMVK&>(*this); }
	VkMacOSSurfaceCreateInfoMVK& vkHandle() { return reinterpret_cast<VkMacOSSurfaceCreateInfoMVK&>(*this); }

	operator const VkMacOSSurfaceCreateInfoMVK&() const { return vkHandle(); };
	operator VkMacOSSurfaceCreateInfoMVK&() { return vkHandle(); };
};


#endif //VK_USE_PLATFORM_MACOS_MVK

struct DebugUtilsLabelEXT {
	StructureType sType {StructureType::debugUtilsLabelEXT};
	const void* pNext {};
	const char* pLabelName {};
	std::array<float, 4> color {};

	constexpr DebugUtilsLabelEXT(const char* xpLabelName = {}, std::array<float, 4> xcolor = {}) : pLabelName(xpLabelName), color(xcolor) {}

	const VkDebugUtilsLabelEXT& vkHandle() const { return reinterpret_cast<const VkDebugUtilsLabelEXT&>(*this); }
	VkDebugUtilsLabelEXT& vkHandle() { return reinterpret_cast<VkDebugUtilsLabelEXT&>(*this); }

	operator const VkDebugUtilsLabelEXT&() const { return vkHandle(); };
	operator VkDebugUtilsLabelEXT&() { return vkHandle(); };
};

struct DebugUtilsObjectNameInfoEXT {
	StructureType sType {StructureType::debugUtilsObjectNameInfoEXT};
	const void* pNext {};
	ObjectType objectType {};
	uint64_t objectHandle {};
	const char* pObjectName {};

	constexpr DebugUtilsObjectNameInfoEXT(ObjectType xobjectType = {}, uint64_t xobjectHandle = {}, const char* xpObjectName = {}) : objectType(xobjectType), objectHandle(xobjectHandle), pObjectName(xpObjectName) {}

	const VkDebugUtilsObjectNameInfoEXT& vkHandle() const { return reinterpret_cast<const VkDebugUtilsObjectNameInfoEXT&>(*this); }
	VkDebugUtilsObjectNameInfoEXT& vkHandle() { return reinterpret_cast<VkDebugUtilsObjectNameInfoEXT&>(*this); }

	operator const VkDebugUtilsObjectNameInfoEXT&() const { return vkHandle(); };
	operator VkDebugUtilsObjectNameInfoEXT&() { return vkHandle(); };
};

struct DebugUtilsMessengerCallbackDataEXT {
	StructureType sType {StructureType::debugUtilsMessengerCallbackDataEXT};
	const void* pNext {};
	DebugUtilsMessengerCallbackDataFlagsEXT flags {};
	const char* pMessageIdName {};
	int32_t messageIdNumber {};
	const char* pMessage {};
	uint32_t queueLabelCount {};
	const DebugUtilsLabelEXT* pQueueLabels {};
	uint32_t cmdBufLabelCount {};
	const DebugUtilsLabelEXT* pCmdBufLabels {};
	uint32_t objectCount {};
	const DebugUtilsObjectNameInfoEXT* pObjects {};

	constexpr DebugUtilsMessengerCallbackDataEXT(DebugUtilsMessengerCallbackDataFlagsEXT xflags = {}, const char* xpMessageIdName = {}, int32_t xmessageIdNumber = {}, const char* xpMessage = {}, uint32_t xqueueLabelCount = {}, const DebugUtilsLabelEXT* xpQueueLabels = {}, uint32_t xcmdBufLabelCount = {}, const DebugUtilsLabelEXT* xpCmdBufLabels = {}, uint32_t xobjectCount = {}, const DebugUtilsObjectNameInfoEXT* xpObjects = {}) : flags(xflags), pMessageIdName(xpMessageIdName), messageIdNumber(xmessageIdNumber), pMessage(xpMessage), queueLabelCount(xqueueLabelCount), pQueueLabels(xpQueueLabels), cmdBufLabelCount(xcmdBufLabelCount), pCmdBufLabels(xpCmdBufLabels), objectCount(xobjectCount), pObjects(xpObjects) {}

	const VkDebugUtilsMessengerCallbackDataEXT& vkHandle() const { return reinterpret_cast<const VkDebugUtilsMessengerCallbackDataEXT&>(*this); }
	VkDebugUtilsMessengerCallbackDataEXT& vkHandle() { return reinterpret_cast<VkDebugUtilsMessengerCallbackDataEXT&>(*this); }

	operator const VkDebugUtilsMessengerCallbackDataEXT&() const { return vkHandle(); };
	operator VkDebugUtilsMessengerCallbackDataEXT&() { return vkHandle(); };
};

struct DebugUtilsMessengerCreateInfoEXT {
	StructureType sType {StructureType::debugUtilsMessengerCreateInfoEXT};
	const void* pNext {};
	DebugUtilsMessengerCreateFlagsEXT flags {};
	DebugUtilsMessageSeverityFlagsEXT messageSeverity {};
	DebugUtilsMessageTypeFlagsEXT messageType {};
	PFN_vkDebugUtilsMessengerCallbackEXT pfnUserCallback {};
	void* pUserData {};

	constexpr DebugUtilsMessengerCreateInfoEXT(DebugUtilsMessengerCreateFlagsEXT xflags = {}, DebugUtilsMessageSeverityFlagsEXT xmessageSeverity = {}, DebugUtilsMessageTypeFlagsEXT xmessageType = {}, PFN_vkDebugUtilsMessengerCallbackEXT xpfnUserCallback = {}, void* xpUserData = {}) : flags(xflags), messageSeverity(xmessageSeverity), messageType(xmessageType), pfnUserCallback(xpfnUserCallback), pUserData(xpUserData) {}

	const VkDebugUtilsMessengerCreateInfoEXT& vkHandle() const { return reinterpret_cast<const VkDebugUtilsMessengerCreateInfoEXT&>(*this); }
	VkDebugUtilsMessengerCreateInfoEXT& vkHandle() { return reinterpret_cast<VkDebugUtilsMessengerCreateInfoEXT&>(*this); }

	operator const VkDebugUtilsMessengerCreateInfoEXT&() const { return vkHandle(); };
	operator VkDebugUtilsMessengerCreateInfoEXT&() { return vkHandle(); };
};

struct DebugUtilsObjectTagInfoEXT {
	StructureType sType {StructureType::debugUtilsObjectTagInfoEXT};
	const void* pNext {};
	ObjectType objectType {};
	uint64_t objectHandle {};
	uint64_t tagName {};
	size_t tagSize {};
	const void* pTag {};

	constexpr DebugUtilsObjectTagInfoEXT(ObjectType xobjectType = {}, uint64_t xobjectHandle = {}, uint64_t xtagName = {}, size_t xtagSize = {}, const void* xpTag = {}) : objectType(xobjectType), objectHandle(xobjectHandle), tagName(xtagName), tagSize(xtagSize), pTag(xpTag) {}

	const VkDebugUtilsObjectTagInfoEXT& vkHandle() const { return reinterpret_cast<const VkDebugUtilsObjectTagInfoEXT&>(*this); }
	VkDebugUtilsObjectTagInfoEXT& vkHandle() { return reinterpret_cast<VkDebugUtilsObjectTagInfoEXT&>(*this); }

	operator const VkDebugUtilsObjectTagInfoEXT&() const { return vkHandle(); };
	operator VkDebugUtilsObjectTagInfoEXT&() { return vkHandle(); };
};


struct PhysicalDeviceInlineUniformBlockFeaturesEXT {
	StructureType sType {StructureType::physicalDeviceInlineUniformBlockFeaturesEXT};
	void* pNext {};
	Bool32 inlineUniformBlock {};
	Bool32 descriptorBindingInlineUniformBlockUpdateAfterBind {};

	constexpr PhysicalDeviceInlineUniformBlockFeaturesEXT(Bool32 xinlineUniformBlock = {}, Bool32 xdescriptorBindingInlineUniformBlockUpdateAfterBind = {}) : inlineUniformBlock(xinlineUniformBlock), descriptorBindingInlineUniformBlockUpdateAfterBind(xdescriptorBindingInlineUniformBlockUpdateAfterBind) {}

	const VkPhysicalDeviceInlineUniformBlockFeaturesEXT& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceInlineUniformBlockFeaturesEXT&>(*this); }
	VkPhysicalDeviceInlineUniformBlockFeaturesEXT& vkHandle() { return reinterpret_cast<VkPhysicalDeviceInlineUniformBlockFeaturesEXT&>(*this); }

	operator const VkPhysicalDeviceInlineUniformBlockFeaturesEXT&() const { return vkHandle(); };
	operator VkPhysicalDeviceInlineUniformBlockFeaturesEXT&() { return vkHandle(); };
};

struct PhysicalDeviceInlineUniformBlockPropertiesEXT {
	StructureType sType {StructureType::physicalDeviceInlineUniformBlockPropertiesEXT};
	void* pNext {};
	uint32_t maxInlineUniformBlockSize {};
	uint32_t maxPerStageDescriptorInlineUniformBlocks {};
	uint32_t maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks {};
	uint32_t maxDescriptorSetInlineUniformBlocks {};
	uint32_t maxDescriptorSetUpdateAfterBindInlineUniformBlocks {};

	const VkPhysicalDeviceInlineUniformBlockPropertiesEXT& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceInlineUniformBlockPropertiesEXT&>(*this); }
	VkPhysicalDeviceInlineUniformBlockPropertiesEXT& vkHandle() { return reinterpret_cast<VkPhysicalDeviceInlineUniformBlockPropertiesEXT&>(*this); }

	operator const VkPhysicalDeviceInlineUniformBlockPropertiesEXT&() const { return vkHandle(); };
	operator VkPhysicalDeviceInlineUniformBlockPropertiesEXT&() { return vkHandle(); };
};

struct WriteDescriptorSetInlineUniformBlockEXT {
	StructureType sType {StructureType::writeDescriptorSetInlineUniformBlockEXT};
	const void* pNext {};
	uint32_t dataSize {};
	const void* pData {};

	constexpr WriteDescriptorSetInlineUniformBlockEXT(uint32_t xdataSize = {}, const void* xpData = {}) : dataSize(xdataSize), pData(xpData) {}

	const VkWriteDescriptorSetInlineUniformBlockEXT& vkHandle() const { return reinterpret_cast<const VkWriteDescriptorSetInlineUniformBlockEXT&>(*this); }
	VkWriteDescriptorSetInlineUniformBlockEXT& vkHandle() { return reinterpret_cast<VkWriteDescriptorSetInlineUniformBlockEXT&>(*this); }

	operator const VkWriteDescriptorSetInlineUniformBlockEXT&() const { return vkHandle(); };
	operator VkWriteDescriptorSetInlineUniformBlockEXT&() { return vkHandle(); };
};

struct DescriptorPoolInlineUniformBlockCreateInfoEXT {
	StructureType sType {StructureType::descriptorPoolInlineUniformBlockCreateInfoEXT};
	const void* pNext {};
	uint32_t maxInlineUniformBlockBindings {};

	constexpr DescriptorPoolInlineUniformBlockCreateInfoEXT(uint32_t xmaxInlineUniformBlockBindings = {}) : maxInlineUniformBlockBindings(xmaxInlineUniformBlockBindings) {}

	const VkDescriptorPoolInlineUniformBlockCreateInfoEXT& vkHandle() const { return reinterpret_cast<const VkDescriptorPoolInlineUniformBlockCreateInfoEXT&>(*this); }
	VkDescriptorPoolInlineUniformBlockCreateInfoEXT& vkHandle() { return reinterpret_cast<VkDescriptorPoolInlineUniformBlockCreateInfoEXT&>(*this); }

	operator const VkDescriptorPoolInlineUniformBlockCreateInfoEXT&() const { return vkHandle(); };
	operator VkDescriptorPoolInlineUniformBlockCreateInfoEXT&() { return vkHandle(); };
};


struct SampleLocationEXT {
	float x {};
	float y {};

	const VkSampleLocationEXT& vkHandle() const { return reinterpret_cast<const VkSampleLocationEXT&>(*this); }
	VkSampleLocationEXT& vkHandle() { return reinterpret_cast<VkSampleLocationEXT&>(*this); }

	operator const VkSampleLocationEXT&() const { return vkHandle(); };
	operator VkSampleLocationEXT&() { return vkHandle(); };
};

struct SampleLocationsInfoEXT {
	StructureType sType {StructureType::sampleLocationsInfoEXT};
	const void* pNext {};
	SampleCountBits sampleLocationsPerPixel {};
	Extent2D sampleLocationGridSize {};
	uint32_t sampleLocationsCount {};
	const SampleLocationEXT* pSampleLocations {};

	constexpr SampleLocationsInfoEXT(SampleCountBits xsampleLocationsPerPixel = {}, Extent2D xsampleLocationGridSize = {}, uint32_t xsampleLocationsCount = {}, const SampleLocationEXT* xpSampleLocations = {}) : sampleLocationsPerPixel(xsampleLocationsPerPixel), sampleLocationGridSize(xsampleLocationGridSize), sampleLocationsCount(xsampleLocationsCount), pSampleLocations(xpSampleLocations) {}

	const VkSampleLocationsInfoEXT& vkHandle() const { return reinterpret_cast<const VkSampleLocationsInfoEXT&>(*this); }
	VkSampleLocationsInfoEXT& vkHandle() { return reinterpret_cast<VkSampleLocationsInfoEXT&>(*this); }

	operator const VkSampleLocationsInfoEXT&() const { return vkHandle(); };
	operator VkSampleLocationsInfoEXT&() { return vkHandle(); };
};

struct AttachmentSampleLocationsEXT {
	uint32_t attachmentIndex {};
	SampleLocationsInfoEXT sampleLocationsInfo {};

	const VkAttachmentSampleLocationsEXT& vkHandle() const { return reinterpret_cast<const VkAttachmentSampleLocationsEXT&>(*this); }
	VkAttachmentSampleLocationsEXT& vkHandle() { return reinterpret_cast<VkAttachmentSampleLocationsEXT&>(*this); }

	operator const VkAttachmentSampleLocationsEXT&() const { return vkHandle(); };
	operator VkAttachmentSampleLocationsEXT&() { return vkHandle(); };
};

struct SubpassSampleLocationsEXT {
	uint32_t subpassIndex {};
	SampleLocationsInfoEXT sampleLocationsInfo {};

	const VkSubpassSampleLocationsEXT& vkHandle() const { return reinterpret_cast<const VkSubpassSampleLocationsEXT&>(*this); }
	VkSubpassSampleLocationsEXT& vkHandle() { return reinterpret_cast<VkSubpassSampleLocationsEXT&>(*this); }

	operator const VkSubpassSampleLocationsEXT&() const { return vkHandle(); };
	operator VkSubpassSampleLocationsEXT&() { return vkHandle(); };
};

struct RenderPassSampleLocationsBeginInfoEXT {
	StructureType sType {StructureType::renderPassSampleLocationsBeginInfoEXT};
	const void* pNext {};
	uint32_t attachmentInitialSampleLocationsCount {};
	const AttachmentSampleLocationsEXT* pAttachmentInitialSampleLocations {};
	uint32_t postSubpassSampleLocationsCount {};
	const SubpassSampleLocationsEXT* pPostSubpassSampleLocations {};

	constexpr RenderPassSampleLocationsBeginInfoEXT(uint32_t xattachmentInitialSampleLocationsCount = {}, const AttachmentSampleLocationsEXT* xpAttachmentInitialSampleLocations = {}, uint32_t xpostSubpassSampleLocationsCount = {}, const SubpassSampleLocationsEXT* xpPostSubpassSampleLocations = {}) : attachmentInitialSampleLocationsCount(xattachmentInitialSampleLocationsCount), pAttachmentInitialSampleLocations(xpAttachmentInitialSampleLocations), postSubpassSampleLocationsCount(xpostSubpassSampleLocationsCount), pPostSubpassSampleLocations(xpPostSubpassSampleLocations) {}

	const VkRenderPassSampleLocationsBeginInfoEXT& vkHandle() const { return reinterpret_cast<const VkRenderPassSampleLocationsBeginInfoEXT&>(*this); }
	VkRenderPassSampleLocationsBeginInfoEXT& vkHandle() { return reinterpret_cast<VkRenderPassSampleLocationsBeginInfoEXT&>(*this); }

	operator const VkRenderPassSampleLocationsBeginInfoEXT&() const { return vkHandle(); };
	operator VkRenderPassSampleLocationsBeginInfoEXT&() { return vkHandle(); };
};

struct PipelineSampleLocationsStateCreateInfoEXT {
	StructureType sType {StructureType::pipelineSampleLocationsStateCreateInfoEXT};
	const void* pNext {};
	Bool32 sampleLocationsEnable {};
	SampleLocationsInfoEXT sampleLocationsInfo {};

	constexpr PipelineSampleLocationsStateCreateInfoEXT(Bool32 xsampleLocationsEnable = {}, SampleLocationsInfoEXT xsampleLocationsInfo = {}) : sampleLocationsEnable(xsampleLocationsEnable), sampleLocationsInfo(xsampleLocationsInfo) {}

	const VkPipelineSampleLocationsStateCreateInfoEXT& vkHandle() const { return reinterpret_cast<const VkPipelineSampleLocationsStateCreateInfoEXT&>(*this); }
	VkPipelineSampleLocationsStateCreateInfoEXT& vkHandle() { return reinterpret_cast<VkPipelineSampleLocationsStateCreateInfoEXT&>(*this); }

	operator const VkPipelineSampleLocationsStateCreateInfoEXT&() const { return vkHandle(); };
	operator VkPipelineSampleLocationsStateCreateInfoEXT&() { return vkHandle(); };
};

struct PhysicalDeviceSampleLocationsPropertiesEXT {
	StructureType sType {StructureType::physicalDeviceSampleLocationsPropertiesEXT};
	void* pNext {};
	SampleCountFlags sampleLocationSampleCounts {};
	Extent2D maxSampleLocationGridSize {};
	std::array<float, 2> sampleLocationCoordinateRange {};
	uint32_t sampleLocationSubPixelBits {};
	Bool32 variableSampleLocations {};

	const VkPhysicalDeviceSampleLocationsPropertiesEXT& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceSampleLocationsPropertiesEXT&>(*this); }
	VkPhysicalDeviceSampleLocationsPropertiesEXT& vkHandle() { return reinterpret_cast<VkPhysicalDeviceSampleLocationsPropertiesEXT&>(*this); }

	operator const VkPhysicalDeviceSampleLocationsPropertiesEXT&() const { return vkHandle(); };
	operator VkPhysicalDeviceSampleLocationsPropertiesEXT&() { return vkHandle(); };
};

struct MultisamplePropertiesEXT {
	StructureType sType {StructureType::multisamplePropertiesEXT};
	void* pNext {};
	Extent2D maxSampleLocationGridSize {};

	const VkMultisamplePropertiesEXT& vkHandle() const { return reinterpret_cast<const VkMultisamplePropertiesEXT&>(*this); }
	VkMultisamplePropertiesEXT& vkHandle() { return reinterpret_cast<VkMultisamplePropertiesEXT&>(*this); }

	operator const VkMultisamplePropertiesEXT&() const { return vkHandle(); };
	operator VkMultisamplePropertiesEXT&() { return vkHandle(); };
};


struct PhysicalDeviceBlendOperationAdvancedFeaturesEXT {
	StructureType sType {StructureType::physicalDeviceBlendOperationAdvancedFeaturesEXT};
	void* pNext {};
	Bool32 advancedBlendCoherentOperations {};

	constexpr PhysicalDeviceBlendOperationAdvancedFeaturesEXT(Bool32 xadvancedBlendCoherentOperations = {}) : advancedBlendCoherentOperations(xadvancedBlendCoherentOperations) {}

	const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT&>(*this); }
	VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& vkHandle() { return reinterpret_cast<VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT&>(*this); }

	operator const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT&() const { return vkHandle(); };
	operator VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT&() { return vkHandle(); };
};

struct PhysicalDeviceBlendOperationAdvancedPropertiesEXT {
	StructureType sType {StructureType::physicalDeviceBlendOperationAdvancedPropertiesEXT};
	void* pNext {};
	uint32_t advancedBlendMaxColorAttachments {};
	Bool32 advancedBlendIndependentBlend {};
	Bool32 advancedBlendNonPremultipliedSrcColor {};
	Bool32 advancedBlendNonPremultipliedDstColor {};
	Bool32 advancedBlendCorrelatedOverlap {};
	Bool32 advancedBlendAllOperations {};

	const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT&>(*this); }
	VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& vkHandle() { return reinterpret_cast<VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT&>(*this); }

	operator const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT&() const { return vkHandle(); };
	operator VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT&() { return vkHandle(); };
};

struct PipelineColorBlendAdvancedStateCreateInfoEXT {
	StructureType sType {StructureType::pipelineColorBlendAdvancedStateCreateInfoEXT};
	const void* pNext {};
	Bool32 srcPremultiplied {};
	Bool32 dstPremultiplied {};
	BlendOverlapEXT blendOverlap {};

	constexpr PipelineColorBlendAdvancedStateCreateInfoEXT(Bool32 xsrcPremultiplied = {}, Bool32 xdstPremultiplied = {}, BlendOverlapEXT xblendOverlap = {}) : srcPremultiplied(xsrcPremultiplied), dstPremultiplied(xdstPremultiplied), blendOverlap(xblendOverlap) {}

	const VkPipelineColorBlendAdvancedStateCreateInfoEXT& vkHandle() const { return reinterpret_cast<const VkPipelineColorBlendAdvancedStateCreateInfoEXT&>(*this); }
	VkPipelineColorBlendAdvancedStateCreateInfoEXT& vkHandle() { return reinterpret_cast<VkPipelineColorBlendAdvancedStateCreateInfoEXT&>(*this); }

	operator const VkPipelineColorBlendAdvancedStateCreateInfoEXT&() const { return vkHandle(); };
	operator VkPipelineColorBlendAdvancedStateCreateInfoEXT&() { return vkHandle(); };
};


struct PipelineCoverageToColorStateCreateInfoNV {
	StructureType sType {StructureType::pipelineCoverageToColorStateCreateInfoNV};
	const void* pNext {};
	PipelineCoverageToColorStateCreateFlagsNV flags {};
	Bool32 coverageToColorEnable {};
	uint32_t coverageToColorLocation {};

	constexpr PipelineCoverageToColorStateCreateInfoNV(PipelineCoverageToColorStateCreateFlagsNV xflags = {}, Bool32 xcoverageToColorEnable = {}, uint32_t xcoverageToColorLocation = {}) : flags(xflags), coverageToColorEnable(xcoverageToColorEnable), coverageToColorLocation(xcoverageToColorLocation) {}

	const VkPipelineCoverageToColorStateCreateInfoNV& vkHandle() const { return reinterpret_cast<const VkPipelineCoverageToColorStateCreateInfoNV&>(*this); }
	VkPipelineCoverageToColorStateCreateInfoNV& vkHandle() { return reinterpret_cast<VkPipelineCoverageToColorStateCreateInfoNV&>(*this); }

	operator const VkPipelineCoverageToColorStateCreateInfoNV&() const { return vkHandle(); };
	operator VkPipelineCoverageToColorStateCreateInfoNV&() { return vkHandle(); };
};


union DeviceOrHostAddressKHR {
	DeviceAddress deviceAddress {};
	void* hostAddress;

	const VkDeviceOrHostAddressKHR& vkHandle() const { return reinterpret_cast<const VkDeviceOrHostAddressKHR&>(*this); }
	VkDeviceOrHostAddressKHR& vkHandle() { return reinterpret_cast<VkDeviceOrHostAddressKHR&>(*this); }

	operator const VkDeviceOrHostAddressKHR&() const { return vkHandle(); };
	operator VkDeviceOrHostAddressKHR&() { return vkHandle(); };
};

union DeviceOrHostAddressConstKHR {
	DeviceAddress deviceAddress {};
	const void* hostAddress;

	const VkDeviceOrHostAddressConstKHR& vkHandle() const { return reinterpret_cast<const VkDeviceOrHostAddressConstKHR&>(*this); }
	VkDeviceOrHostAddressConstKHR& vkHandle() { return reinterpret_cast<VkDeviceOrHostAddressConstKHR&>(*this); }

	operator const VkDeviceOrHostAddressConstKHR&() const { return vkHandle(); };
	operator VkDeviceOrHostAddressConstKHR&() { return vkHandle(); };
};

struct AccelerationStructureBuildRangeInfoKHR {
	uint32_t primitiveCount {};
	uint32_t primitiveOffset {};
	uint32_t firstVertex {};
	uint32_t transformOffset {};

	const VkAccelerationStructureBuildRangeInfoKHR& vkHandle() const { return reinterpret_cast<const VkAccelerationStructureBuildRangeInfoKHR&>(*this); }
	VkAccelerationStructureBuildRangeInfoKHR& vkHandle() { return reinterpret_cast<VkAccelerationStructureBuildRangeInfoKHR&>(*this); }

	operator const VkAccelerationStructureBuildRangeInfoKHR&() const { return vkHandle(); };
	operator VkAccelerationStructureBuildRangeInfoKHR&() { return vkHandle(); };
};

struct AabbPositionsKHR {
	float minX {};
	float minY {};
	float minZ {};
	float maxX {};
	float maxY {};
	float maxZ {};

	const VkAabbPositionsKHR& vkHandle() const { return reinterpret_cast<const VkAabbPositionsKHR&>(*this); }
	VkAabbPositionsKHR& vkHandle() { return reinterpret_cast<VkAabbPositionsKHR&>(*this); }

	operator const VkAabbPositionsKHR&() const { return vkHandle(); };
	operator VkAabbPositionsKHR&() { return vkHandle(); };
};

struct AccelerationStructureGeometryTrianglesDataKHR {
	StructureType sType {StructureType::accelerationStructureGeometryTrianglesDataKHR};
	const void* pNext {};
	Format vertexFormat {};
	DeviceOrHostAddressConstKHR vertexData {};
	DeviceSize vertexStride {};
	uint32_t maxVertex {};
	IndexType indexType {};
	DeviceOrHostAddressConstKHR indexData {};
	DeviceOrHostAddressConstKHR transformData {};

	constexpr AccelerationStructureGeometryTrianglesDataKHR(Format xvertexFormat = {}, DeviceOrHostAddressConstKHR xvertexData = {}, DeviceSize xvertexStride = {}, uint32_t xmaxVertex = {}, IndexType xindexType = {}, DeviceOrHostAddressConstKHR xindexData = {}, DeviceOrHostAddressConstKHR xtransformData = {}) : vertexFormat(xvertexFormat), vertexData(xvertexData), vertexStride(xvertexStride), maxVertex(xmaxVertex), indexType(xindexType), indexData(xindexData), transformData(xtransformData) {}

	const VkAccelerationStructureGeometryTrianglesDataKHR& vkHandle() const { return reinterpret_cast<const VkAccelerationStructureGeometryTrianglesDataKHR&>(*this); }
	VkAccelerationStructureGeometryTrianglesDataKHR& vkHandle() { return reinterpret_cast<VkAccelerationStructureGeometryTrianglesDataKHR&>(*this); }

	operator const VkAccelerationStructureGeometryTrianglesDataKHR&() const { return vkHandle(); };
	operator VkAccelerationStructureGeometryTrianglesDataKHR&() { return vkHandle(); };
};

struct TransformMatrixKHR {
	std::array<std::array<float, 3>, 4> matrix {};

	const VkTransformMatrixKHR& vkHandle() const { return reinterpret_cast<const VkTransformMatrixKHR&>(*this); }
	VkTransformMatrixKHR& vkHandle() { return reinterpret_cast<VkTransformMatrixKHR&>(*this); }

	operator const VkTransformMatrixKHR&() const { return vkHandle(); };
	operator VkTransformMatrixKHR&() { return vkHandle(); };
};

struct AccelerationStructureGeometryAabbsDataKHR {
	StructureType sType {StructureType::accelerationStructureGeometryAabbsDataKHR};
	const void* pNext {};
	DeviceOrHostAddressConstKHR data {};
	DeviceSize stride {};

	constexpr AccelerationStructureGeometryAabbsDataKHR(DeviceOrHostAddressConstKHR xdata = {}, DeviceSize xstride = {}) : data(xdata), stride(xstride) {}

	const VkAccelerationStructureGeometryAabbsDataKHR& vkHandle() const { return reinterpret_cast<const VkAccelerationStructureGeometryAabbsDataKHR&>(*this); }
	VkAccelerationStructureGeometryAabbsDataKHR& vkHandle() { return reinterpret_cast<VkAccelerationStructureGeometryAabbsDataKHR&>(*this); }

	operator const VkAccelerationStructureGeometryAabbsDataKHR&() const { return vkHandle(); };
	operator VkAccelerationStructureGeometryAabbsDataKHR&() { return vkHandle(); };
};

struct AccelerationStructureGeometryInstancesDataKHR {
	StructureType sType {StructureType::accelerationStructureGeometryInstancesDataKHR};
	const void* pNext {};
	Bool32 arrayOfPointers {};
	DeviceOrHostAddressConstKHR data {};

	constexpr AccelerationStructureGeometryInstancesDataKHR(Bool32 xarrayOfPointers = {}, DeviceOrHostAddressConstKHR xdata = {}) : arrayOfPointers(xarrayOfPointers), data(xdata) {}

	const VkAccelerationStructureGeometryInstancesDataKHR& vkHandle() const { return reinterpret_cast<const VkAccelerationStructureGeometryInstancesDataKHR&>(*this); }
	VkAccelerationStructureGeometryInstancesDataKHR& vkHandle() { return reinterpret_cast<VkAccelerationStructureGeometryInstancesDataKHR&>(*this); }

	operator const VkAccelerationStructureGeometryInstancesDataKHR&() const { return vkHandle(); };
	operator VkAccelerationStructureGeometryInstancesDataKHR&() { return vkHandle(); };
};

union AccelerationStructureGeometryDataKHR {
	AccelerationStructureGeometryTrianglesDataKHR triangles {};
	AccelerationStructureGeometryAabbsDataKHR aabbs;
	AccelerationStructureGeometryInstancesDataKHR instances;

	const VkAccelerationStructureGeometryDataKHR& vkHandle() const { return reinterpret_cast<const VkAccelerationStructureGeometryDataKHR&>(*this); }
	VkAccelerationStructureGeometryDataKHR& vkHandle() { return reinterpret_cast<VkAccelerationStructureGeometryDataKHR&>(*this); }

	operator const VkAccelerationStructureGeometryDataKHR&() const { return vkHandle(); };
	operator VkAccelerationStructureGeometryDataKHR&() { return vkHandle(); };
};

struct AccelerationStructureGeometryKHR {
	StructureType sType {StructureType::accelerationStructureGeometryKHR};
	const void* pNext {};
	GeometryTypeKHR geometryType {};
	AccelerationStructureGeometryDataKHR geometry {};
	GeometryFlagsKHR flags {};

	constexpr AccelerationStructureGeometryKHR(GeometryTypeKHR xgeometryType = {}, AccelerationStructureGeometryDataKHR xgeometry = {}, GeometryFlagsKHR xflags = {}) : geometryType(xgeometryType), geometry(xgeometry), flags(xflags) {}

	const VkAccelerationStructureGeometryKHR& vkHandle() const { return reinterpret_cast<const VkAccelerationStructureGeometryKHR&>(*this); }
	VkAccelerationStructureGeometryKHR& vkHandle() { return reinterpret_cast<VkAccelerationStructureGeometryKHR&>(*this); }

	operator const VkAccelerationStructureGeometryKHR&() const { return vkHandle(); };
	operator VkAccelerationStructureGeometryKHR&() { return vkHandle(); };
};

struct AccelerationStructureBuildGeometryInfoKHR {
	StructureType sType {StructureType::accelerationStructureBuildGeometryInfoKHR};
	const void* pNext {};
	AccelerationStructureTypeKHR type {};
	BuildAccelerationStructureFlagsKHR flags {};
	BuildAccelerationStructureModeKHR mode {};
	AccelerationStructureKHR srcAccelerationStructure {};
	AccelerationStructureKHR dstAccelerationStructure {};
	uint32_t geometryCount {};
	const AccelerationStructureGeometryKHR* pGeometries {};
	const AccelerationStructureGeometryKHR* const* ppGeometries {};
	DeviceOrHostAddressKHR scratchData {};

	constexpr AccelerationStructureBuildGeometryInfoKHR(AccelerationStructureTypeKHR xtype = {}, BuildAccelerationStructureFlagsKHR xflags = {}, BuildAccelerationStructureModeKHR xmode = {}, AccelerationStructureKHR xsrcAccelerationStructure = {}, AccelerationStructureKHR xdstAccelerationStructure = {}, uint32_t xgeometryCount = {}, const AccelerationStructureGeometryKHR* xpGeometries = {}, const AccelerationStructureGeometryKHR* const* xppGeometries = {}, DeviceOrHostAddressKHR xscratchData = {}) : type(xtype), flags(xflags), mode(xmode), srcAccelerationStructure(xsrcAccelerationStructure), dstAccelerationStructure(xdstAccelerationStructure), geometryCount(xgeometryCount), pGeometries(xpGeometries), ppGeometries(xppGeometries), scratchData(xscratchData) {}

	const VkAccelerationStructureBuildGeometryInfoKHR& vkHandle() const { return reinterpret_cast<const VkAccelerationStructureBuildGeometryInfoKHR&>(*this); }
	VkAccelerationStructureBuildGeometryInfoKHR& vkHandle() { return reinterpret_cast<VkAccelerationStructureBuildGeometryInfoKHR&>(*this); }

	operator const VkAccelerationStructureBuildGeometryInfoKHR&() const { return vkHandle(); };
	operator VkAccelerationStructureBuildGeometryInfoKHR&() { return vkHandle(); };
};

struct AccelerationStructureInstanceKHR {
	TransformMatrixKHR transform {};
	uint32_t instanceCustomIndex {};
	uint32_t mask {};
	uint32_t instanceShaderBindingTableRecordOffset {};
	GeometryInstanceFlagsKHR flags {};
	uint64_t accelerationStructureReference {};

	const VkAccelerationStructureInstanceKHR& vkHandle() const { return reinterpret_cast<const VkAccelerationStructureInstanceKHR&>(*this); }
	VkAccelerationStructureInstanceKHR& vkHandle() { return reinterpret_cast<VkAccelerationStructureInstanceKHR&>(*this); }

	operator const VkAccelerationStructureInstanceKHR&() const { return vkHandle(); };
	operator VkAccelerationStructureInstanceKHR&() { return vkHandle(); };
};

struct AccelerationStructureCreateInfoKHR {
	StructureType sType {StructureType::accelerationStructureCreateInfoKHR};
	const void* pNext {};
	AccelerationStructureCreateFlagsKHR createFlags {};
	Buffer buffer {};
	DeviceSize offset {};
	DeviceSize size {};
	AccelerationStructureTypeKHR type {};
	DeviceAddress deviceAddress {};

	constexpr AccelerationStructureCreateInfoKHR(AccelerationStructureCreateFlagsKHR xcreateFlags = {}, Buffer xbuffer = {}, DeviceSize xoffset = {}, DeviceSize xsize = {}, AccelerationStructureTypeKHR xtype = {}, DeviceAddress xdeviceAddress = {}) : createFlags(xcreateFlags), buffer(xbuffer), offset(xoffset), size(xsize), type(xtype), deviceAddress(xdeviceAddress) {}

	const VkAccelerationStructureCreateInfoKHR& vkHandle() const { return reinterpret_cast<const VkAccelerationStructureCreateInfoKHR&>(*this); }
	VkAccelerationStructureCreateInfoKHR& vkHandle() { return reinterpret_cast<VkAccelerationStructureCreateInfoKHR&>(*this); }

	operator const VkAccelerationStructureCreateInfoKHR&() const { return vkHandle(); };
	operator VkAccelerationStructureCreateInfoKHR&() { return vkHandle(); };
};

struct WriteDescriptorSetAccelerationStructureKHR {
	StructureType sType {StructureType::writeDescriptorSetAccelerationStructureKHR};
	const void* pNext {};
	uint32_t accelerationStructureCount {};
	const AccelerationStructureKHR* pAccelerationStructures {};

	constexpr WriteDescriptorSetAccelerationStructureKHR(uint32_t xaccelerationStructureCount = {}, const AccelerationStructureKHR* xpAccelerationStructures = {}) : accelerationStructureCount(xaccelerationStructureCount), pAccelerationStructures(xpAccelerationStructures) {}

	const VkWriteDescriptorSetAccelerationStructureKHR& vkHandle() const { return reinterpret_cast<const VkWriteDescriptorSetAccelerationStructureKHR&>(*this); }
	VkWriteDescriptorSetAccelerationStructureKHR& vkHandle() { return reinterpret_cast<VkWriteDescriptorSetAccelerationStructureKHR&>(*this); }

	operator const VkWriteDescriptorSetAccelerationStructureKHR&() const { return vkHandle(); };
	operator VkWriteDescriptorSetAccelerationStructureKHR&() { return vkHandle(); };
};

struct PhysicalDeviceAccelerationStructureFeaturesKHR {
	StructureType sType {StructureType::physicalDeviceAccelerationStructureFeaturesKHR};
	void* pNext {};
	Bool32 accelerationStructure {};
	Bool32 accelerationStructureCaptureReplay {};
	Bool32 accelerationStructureIndirectBuild {};
	Bool32 accelerationStructureHostCommands {};
	Bool32 descriptorBindingAccelerationStructureUpdateAfterBind {};

	constexpr PhysicalDeviceAccelerationStructureFeaturesKHR(Bool32 xaccelerationStructure = {}, Bool32 xaccelerationStructureCaptureReplay = {}, Bool32 xaccelerationStructureIndirectBuild = {}, Bool32 xaccelerationStructureHostCommands = {}, Bool32 xdescriptorBindingAccelerationStructureUpdateAfterBind = {}) : accelerationStructure(xaccelerationStructure), accelerationStructureCaptureReplay(xaccelerationStructureCaptureReplay), accelerationStructureIndirectBuild(xaccelerationStructureIndirectBuild), accelerationStructureHostCommands(xaccelerationStructureHostCommands), descriptorBindingAccelerationStructureUpdateAfterBind(xdescriptorBindingAccelerationStructureUpdateAfterBind) {}

	const VkPhysicalDeviceAccelerationStructureFeaturesKHR& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceAccelerationStructureFeaturesKHR&>(*this); }
	VkPhysicalDeviceAccelerationStructureFeaturesKHR& vkHandle() { return reinterpret_cast<VkPhysicalDeviceAccelerationStructureFeaturesKHR&>(*this); }

	operator const VkPhysicalDeviceAccelerationStructureFeaturesKHR&() const { return vkHandle(); };
	operator VkPhysicalDeviceAccelerationStructureFeaturesKHR&() { return vkHandle(); };
};

struct PhysicalDeviceAccelerationStructurePropertiesKHR {
	StructureType sType {StructureType::physicalDeviceAccelerationStructurePropertiesKHR};
	void* pNext {};
	uint64_t maxGeometryCount {};
	uint64_t maxInstanceCount {};
	uint64_t maxPrimitiveCount {};
	uint32_t maxPerStageDescriptorAccelerationStructures {};
	uint32_t maxPerStageDescriptorUpdateAfterBindAccelerationStructures {};
	uint32_t maxDescriptorSetAccelerationStructures {};
	uint32_t maxDescriptorSetUpdateAfterBindAccelerationStructures {};
	uint32_t minAccelerationStructureScratchOffsetAlignment {};

	const VkPhysicalDeviceAccelerationStructurePropertiesKHR& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceAccelerationStructurePropertiesKHR&>(*this); }
	VkPhysicalDeviceAccelerationStructurePropertiesKHR& vkHandle() { return reinterpret_cast<VkPhysicalDeviceAccelerationStructurePropertiesKHR&>(*this); }

	operator const VkPhysicalDeviceAccelerationStructurePropertiesKHR&() const { return vkHandle(); };
	operator VkPhysicalDeviceAccelerationStructurePropertiesKHR&() { return vkHandle(); };
};

struct AccelerationStructureDeviceAddressInfoKHR {
	StructureType sType {StructureType::accelerationStructureDeviceAddressInfoKHR};
	const void* pNext {};
	AccelerationStructureKHR accelerationStructure {};

	constexpr AccelerationStructureDeviceAddressInfoKHR(AccelerationStructureKHR xaccelerationStructure = {}) : accelerationStructure(xaccelerationStructure) {}

	const VkAccelerationStructureDeviceAddressInfoKHR& vkHandle() const { return reinterpret_cast<const VkAccelerationStructureDeviceAddressInfoKHR&>(*this); }
	VkAccelerationStructureDeviceAddressInfoKHR& vkHandle() { return reinterpret_cast<VkAccelerationStructureDeviceAddressInfoKHR&>(*this); }

	operator const VkAccelerationStructureDeviceAddressInfoKHR&() const { return vkHandle(); };
	operator VkAccelerationStructureDeviceAddressInfoKHR&() { return vkHandle(); };
};

struct AccelerationStructureVersionInfoKHR {
	StructureType sType {StructureType::accelerationStructureVersionInfoKHR};
	const void* pNext {};
	const uint8_t* pVersionData {};

	constexpr AccelerationStructureVersionInfoKHR(const uint8_t* xpVersionData = {}) : pVersionData(xpVersionData) {}

	const VkAccelerationStructureVersionInfoKHR& vkHandle() const { return reinterpret_cast<const VkAccelerationStructureVersionInfoKHR&>(*this); }
	VkAccelerationStructureVersionInfoKHR& vkHandle() { return reinterpret_cast<VkAccelerationStructureVersionInfoKHR&>(*this); }

	operator const VkAccelerationStructureVersionInfoKHR&() const { return vkHandle(); };
	operator VkAccelerationStructureVersionInfoKHR&() { return vkHandle(); };
};

struct CopyAccelerationStructureToMemoryInfoKHR {
	StructureType sType {StructureType::copyAccelerationStructureToMemoryInfoKHR};
	const void* pNext {};
	AccelerationStructureKHR src {};
	DeviceOrHostAddressKHR dst {};
	CopyAccelerationStructureModeKHR mode {};

	constexpr CopyAccelerationStructureToMemoryInfoKHR(AccelerationStructureKHR xsrc = {}, DeviceOrHostAddressKHR xdst = {}, CopyAccelerationStructureModeKHR xmode = {}) : src(xsrc), dst(xdst), mode(xmode) {}

	const VkCopyAccelerationStructureToMemoryInfoKHR& vkHandle() const { return reinterpret_cast<const VkCopyAccelerationStructureToMemoryInfoKHR&>(*this); }
	VkCopyAccelerationStructureToMemoryInfoKHR& vkHandle() { return reinterpret_cast<VkCopyAccelerationStructureToMemoryInfoKHR&>(*this); }

	operator const VkCopyAccelerationStructureToMemoryInfoKHR&() const { return vkHandle(); };
	operator VkCopyAccelerationStructureToMemoryInfoKHR&() { return vkHandle(); };
};

struct CopyMemoryToAccelerationStructureInfoKHR {
	StructureType sType {StructureType::copyMemoryToAccelerationStructureInfoKHR};
	const void* pNext {};
	DeviceOrHostAddressConstKHR src {};
	AccelerationStructureKHR dst {};
	CopyAccelerationStructureModeKHR mode {};

	constexpr CopyMemoryToAccelerationStructureInfoKHR(DeviceOrHostAddressConstKHR xsrc = {}, AccelerationStructureKHR xdst = {}, CopyAccelerationStructureModeKHR xmode = {}) : src(xsrc), dst(xdst), mode(xmode) {}

	const VkCopyMemoryToAccelerationStructureInfoKHR& vkHandle() const { return reinterpret_cast<const VkCopyMemoryToAccelerationStructureInfoKHR&>(*this); }
	VkCopyMemoryToAccelerationStructureInfoKHR& vkHandle() { return reinterpret_cast<VkCopyMemoryToAccelerationStructureInfoKHR&>(*this); }

	operator const VkCopyMemoryToAccelerationStructureInfoKHR&() const { return vkHandle(); };
	operator VkCopyMemoryToAccelerationStructureInfoKHR&() { return vkHandle(); };
};

struct CopyAccelerationStructureInfoKHR {
	StructureType sType {StructureType::copyAccelerationStructureInfoKHR};
	const void* pNext {};
	AccelerationStructureKHR src {};
	AccelerationStructureKHR dst {};
	CopyAccelerationStructureModeKHR mode {};

	constexpr CopyAccelerationStructureInfoKHR(AccelerationStructureKHR xsrc = {}, AccelerationStructureKHR xdst = {}, CopyAccelerationStructureModeKHR xmode = {}) : src(xsrc), dst(xdst), mode(xmode) {}

	const VkCopyAccelerationStructureInfoKHR& vkHandle() const { return reinterpret_cast<const VkCopyAccelerationStructureInfoKHR&>(*this); }
	VkCopyAccelerationStructureInfoKHR& vkHandle() { return reinterpret_cast<VkCopyAccelerationStructureInfoKHR&>(*this); }

	operator const VkCopyAccelerationStructureInfoKHR&() const { return vkHandle(); };
	operator VkCopyAccelerationStructureInfoKHR&() { return vkHandle(); };
};

struct AccelerationStructureBuildSizesInfoKHR {
	StructureType sType {StructureType::accelerationStructureBuildSizesInfoKHR};
	const void* pNext {};
	DeviceSize accelerationStructureSize {};
	DeviceSize updateScratchSize {};
	DeviceSize buildScratchSize {};

	constexpr AccelerationStructureBuildSizesInfoKHR(DeviceSize xaccelerationStructureSize = {}, DeviceSize xupdateScratchSize = {}, DeviceSize xbuildScratchSize = {}) : accelerationStructureSize(xaccelerationStructureSize), updateScratchSize(xupdateScratchSize), buildScratchSize(xbuildScratchSize) {}

	const VkAccelerationStructureBuildSizesInfoKHR& vkHandle() const { return reinterpret_cast<const VkAccelerationStructureBuildSizesInfoKHR&>(*this); }
	VkAccelerationStructureBuildSizesInfoKHR& vkHandle() { return reinterpret_cast<VkAccelerationStructureBuildSizesInfoKHR&>(*this); }

	operator const VkAccelerationStructureBuildSizesInfoKHR&() const { return vkHandle(); };
	operator VkAccelerationStructureBuildSizesInfoKHR&() { return vkHandle(); };
};


struct RayTracingShaderGroupCreateInfoKHR {
	StructureType sType {StructureType::rayTracingShaderGroupCreateInfoKHR};
	const void* pNext {};
	RayTracingShaderGroupTypeKHR type {};
	uint32_t generalShader {};
	uint32_t closestHitShader {};
	uint32_t anyHitShader {};
	uint32_t intersectionShader {};
	const void* pShaderGroupCaptureReplayHandle {};

	constexpr RayTracingShaderGroupCreateInfoKHR(RayTracingShaderGroupTypeKHR xtype = {}, uint32_t xgeneralShader = {}, uint32_t xclosestHitShader = {}, uint32_t xanyHitShader = {}, uint32_t xintersectionShader = {}, const void* xpShaderGroupCaptureReplayHandle = {}) : type(xtype), generalShader(xgeneralShader), closestHitShader(xclosestHitShader), anyHitShader(xanyHitShader), intersectionShader(xintersectionShader), pShaderGroupCaptureReplayHandle(xpShaderGroupCaptureReplayHandle) {}

	const VkRayTracingShaderGroupCreateInfoKHR& vkHandle() const { return reinterpret_cast<const VkRayTracingShaderGroupCreateInfoKHR&>(*this); }
	VkRayTracingShaderGroupCreateInfoKHR& vkHandle() { return reinterpret_cast<VkRayTracingShaderGroupCreateInfoKHR&>(*this); }

	operator const VkRayTracingShaderGroupCreateInfoKHR&() const { return vkHandle(); };
	operator VkRayTracingShaderGroupCreateInfoKHR&() { return vkHandle(); };
};

struct PipelineLibraryCreateInfoKHR {
	StructureType sType {StructureType::pipelineLibraryCreateInfoKHR};
	const void* pNext {};
	uint32_t libraryCount {};
	const Pipeline* pLibraries {};

	constexpr PipelineLibraryCreateInfoKHR(uint32_t xlibraryCount = {}, const Pipeline* xpLibraries = {}) : libraryCount(xlibraryCount), pLibraries(xpLibraries) {}

	const VkPipelineLibraryCreateInfoKHR& vkHandle() const { return reinterpret_cast<const VkPipelineLibraryCreateInfoKHR&>(*this); }
	VkPipelineLibraryCreateInfoKHR& vkHandle() { return reinterpret_cast<VkPipelineLibraryCreateInfoKHR&>(*this); }

	operator const VkPipelineLibraryCreateInfoKHR&() const { return vkHandle(); };
	operator VkPipelineLibraryCreateInfoKHR&() { return vkHandle(); };
};

struct RayTracingPipelineInterfaceCreateInfoKHR {
	StructureType sType {StructureType::rayTracingPipelineInterfaceCreateInfoKHR};
	const void* pNext {};
	uint32_t maxPipelineRayPayloadSize {};
	uint32_t maxPipelineRayHitAttributeSize {};

	constexpr RayTracingPipelineInterfaceCreateInfoKHR(uint32_t xmaxPipelineRayPayloadSize = {}, uint32_t xmaxPipelineRayHitAttributeSize = {}) : maxPipelineRayPayloadSize(xmaxPipelineRayPayloadSize), maxPipelineRayHitAttributeSize(xmaxPipelineRayHitAttributeSize) {}

	const VkRayTracingPipelineInterfaceCreateInfoKHR& vkHandle() const { return reinterpret_cast<const VkRayTracingPipelineInterfaceCreateInfoKHR&>(*this); }
	VkRayTracingPipelineInterfaceCreateInfoKHR& vkHandle() { return reinterpret_cast<VkRayTracingPipelineInterfaceCreateInfoKHR&>(*this); }

	operator const VkRayTracingPipelineInterfaceCreateInfoKHR&() const { return vkHandle(); };
	operator VkRayTracingPipelineInterfaceCreateInfoKHR&() { return vkHandle(); };
};

struct RayTracingPipelineCreateInfoKHR {
	StructureType sType {StructureType::rayTracingPipelineCreateInfoKHR};
	const void* pNext {};
	PipelineCreateFlags flags {};
	uint32_t stageCount {};
	const PipelineShaderStageCreateInfo* pStages {};
	uint32_t groupCount {};
	const RayTracingShaderGroupCreateInfoKHR* pGroups {};
	uint32_t maxPipelineRayRecursionDepth {};
	const PipelineLibraryCreateInfoKHR* pLibraryInfo {};
	const RayTracingPipelineInterfaceCreateInfoKHR* pLibraryInterface {};
	const PipelineDynamicStateCreateInfo* pDynamicState {};
	PipelineLayout layout {};
	Pipeline basePipelineHandle {};
	int32_t basePipelineIndex {};

	constexpr RayTracingPipelineCreateInfoKHR(PipelineCreateFlags xflags = {}, uint32_t xstageCount = {}, const PipelineShaderStageCreateInfo* xpStages = {}, uint32_t xgroupCount = {}, const RayTracingShaderGroupCreateInfoKHR* xpGroups = {}, uint32_t xmaxPipelineRayRecursionDepth = {}, const PipelineLibraryCreateInfoKHR* xpLibraryInfo = {}, const RayTracingPipelineInterfaceCreateInfoKHR* xpLibraryInterface = {}, const PipelineDynamicStateCreateInfo* xpDynamicState = {}, PipelineLayout xlayout = {}, Pipeline xbasePipelineHandle = {}, int32_t xbasePipelineIndex = {}) : flags(xflags), stageCount(xstageCount), pStages(xpStages), groupCount(xgroupCount), pGroups(xpGroups), maxPipelineRayRecursionDepth(xmaxPipelineRayRecursionDepth), pLibraryInfo(xpLibraryInfo), pLibraryInterface(xpLibraryInterface), pDynamicState(xpDynamicState), layout(xlayout), basePipelineHandle(xbasePipelineHandle), basePipelineIndex(xbasePipelineIndex) {}

	const VkRayTracingPipelineCreateInfoKHR& vkHandle() const { return reinterpret_cast<const VkRayTracingPipelineCreateInfoKHR&>(*this); }
	VkRayTracingPipelineCreateInfoKHR& vkHandle() { return reinterpret_cast<VkRayTracingPipelineCreateInfoKHR&>(*this); }

	operator const VkRayTracingPipelineCreateInfoKHR&() const { return vkHandle(); };
	operator VkRayTracingPipelineCreateInfoKHR&() { return vkHandle(); };
};

struct PhysicalDeviceRayTracingPipelineFeaturesKHR {
	StructureType sType {StructureType::physicalDeviceRayTracingPipelineFeaturesKHR};
	void* pNext {};
	Bool32 rayTracingPipeline {};
	Bool32 rayTracingPipelineShaderGroupHandleCaptureReplay {};
	Bool32 rayTracingPipelineShaderGroupHandleCaptureReplayMixed {};
	Bool32 rayTracingPipelineTraceRaysIndirect {};
	Bool32 rayTraversalPrimitiveCulling {};

	constexpr PhysicalDeviceRayTracingPipelineFeaturesKHR(Bool32 xrayTracingPipeline = {}, Bool32 xrayTracingPipelineShaderGroupHandleCaptureReplay = {}, Bool32 xrayTracingPipelineShaderGroupHandleCaptureReplayMixed = {}, Bool32 xrayTracingPipelineTraceRaysIndirect = {}, Bool32 xrayTraversalPrimitiveCulling = {}) : rayTracingPipeline(xrayTracingPipeline), rayTracingPipelineShaderGroupHandleCaptureReplay(xrayTracingPipelineShaderGroupHandleCaptureReplay), rayTracingPipelineShaderGroupHandleCaptureReplayMixed(xrayTracingPipelineShaderGroupHandleCaptureReplayMixed), rayTracingPipelineTraceRaysIndirect(xrayTracingPipelineTraceRaysIndirect), rayTraversalPrimitiveCulling(xrayTraversalPrimitiveCulling) {}

	const VkPhysicalDeviceRayTracingPipelineFeaturesKHR& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceRayTracingPipelineFeaturesKHR&>(*this); }
	VkPhysicalDeviceRayTracingPipelineFeaturesKHR& vkHandle() { return reinterpret_cast<VkPhysicalDeviceRayTracingPipelineFeaturesKHR&>(*this); }

	operator const VkPhysicalDeviceRayTracingPipelineFeaturesKHR&() const { return vkHandle(); };
	operator VkPhysicalDeviceRayTracingPipelineFeaturesKHR&() { return vkHandle(); };
};

struct PhysicalDeviceRayTracingPipelinePropertiesKHR {
	StructureType sType {StructureType::physicalDeviceRayTracingPipelinePropertiesKHR};
	void* pNext {};
	uint32_t shaderGroupHandleSize {};
	uint32_t maxRayRecursionDepth {};
	uint32_t maxShaderGroupStride {};
	uint32_t shaderGroupBaseAlignment {};
	uint32_t shaderGroupHandleCaptureReplaySize {};
	uint32_t maxRayDispatchInvocationCount {};
	uint32_t shaderGroupHandleAlignment {};
	uint32_t maxRayHitAttributeSize {};

	const VkPhysicalDeviceRayTracingPipelinePropertiesKHR& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceRayTracingPipelinePropertiesKHR&>(*this); }
	VkPhysicalDeviceRayTracingPipelinePropertiesKHR& vkHandle() { return reinterpret_cast<VkPhysicalDeviceRayTracingPipelinePropertiesKHR&>(*this); }

	operator const VkPhysicalDeviceRayTracingPipelinePropertiesKHR&() const { return vkHandle(); };
	operator VkPhysicalDeviceRayTracingPipelinePropertiesKHR&() { return vkHandle(); };
};

struct StridedDeviceAddressRegionKHR {
	DeviceAddress deviceAddress {};
	DeviceSize stride {};
	DeviceSize size {};

	const VkStridedDeviceAddressRegionKHR& vkHandle() const { return reinterpret_cast<const VkStridedDeviceAddressRegionKHR&>(*this); }
	VkStridedDeviceAddressRegionKHR& vkHandle() { return reinterpret_cast<VkStridedDeviceAddressRegionKHR&>(*this); }

	operator const VkStridedDeviceAddressRegionKHR&() const { return vkHandle(); };
	operator VkStridedDeviceAddressRegionKHR&() { return vkHandle(); };
};

struct TraceRaysIndirectCommandKHR {
	uint32_t width {};
	uint32_t height {};
	uint32_t depth {};

	const VkTraceRaysIndirectCommandKHR& vkHandle() const { return reinterpret_cast<const VkTraceRaysIndirectCommandKHR&>(*this); }
	VkTraceRaysIndirectCommandKHR& vkHandle() { return reinterpret_cast<VkTraceRaysIndirectCommandKHR&>(*this); }

	operator const VkTraceRaysIndirectCommandKHR&() const { return vkHandle(); };
	operator VkTraceRaysIndirectCommandKHR&() { return vkHandle(); };
};


struct PhysicalDeviceRayQueryFeaturesKHR {
	StructureType sType {StructureType::physicalDeviceRayQueryFeaturesKHR};
	void* pNext {};
	Bool32 rayQuery {};

	constexpr PhysicalDeviceRayQueryFeaturesKHR(Bool32 xrayQuery = {}) : rayQuery(xrayQuery) {}

	const VkPhysicalDeviceRayQueryFeaturesKHR& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceRayQueryFeaturesKHR&>(*this); }
	VkPhysicalDeviceRayQueryFeaturesKHR& vkHandle() { return reinterpret_cast<VkPhysicalDeviceRayQueryFeaturesKHR&>(*this); }

	operator const VkPhysicalDeviceRayQueryFeaturesKHR&() const { return vkHandle(); };
	operator VkPhysicalDeviceRayQueryFeaturesKHR&() { return vkHandle(); };
};


struct PipelineCoverageModulationStateCreateInfoNV {
	StructureType sType {StructureType::pipelineCoverageModulationStateCreateInfoNV};
	const void* pNext {};
	PipelineCoverageModulationStateCreateFlagsNV flags {};
	CoverageModulationModeNV coverageModulationMode {};
	Bool32 coverageModulationTableEnable {};
	uint32_t coverageModulationTableCount {};
	const float* pCoverageModulationTable {};

	constexpr PipelineCoverageModulationStateCreateInfoNV(PipelineCoverageModulationStateCreateFlagsNV xflags = {}, CoverageModulationModeNV xcoverageModulationMode = {}, Bool32 xcoverageModulationTableEnable = {}, uint32_t xcoverageModulationTableCount = {}, const float* xpCoverageModulationTable = {}) : flags(xflags), coverageModulationMode(xcoverageModulationMode), coverageModulationTableEnable(xcoverageModulationTableEnable), coverageModulationTableCount(xcoverageModulationTableCount), pCoverageModulationTable(xpCoverageModulationTable) {}

	const VkPipelineCoverageModulationStateCreateInfoNV& vkHandle() const { return reinterpret_cast<const VkPipelineCoverageModulationStateCreateInfoNV&>(*this); }
	VkPipelineCoverageModulationStateCreateInfoNV& vkHandle() { return reinterpret_cast<VkPipelineCoverageModulationStateCreateInfoNV&>(*this); }

	operator const VkPipelineCoverageModulationStateCreateInfoNV&() const { return vkHandle(); };
	operator VkPipelineCoverageModulationStateCreateInfoNV&() { return vkHandle(); };
};


struct PhysicalDeviceShaderSMBuiltinsPropertiesNV {
	StructureType sType {StructureType::physicalDeviceShaderSmBuiltinsPropertiesNV};
	void* pNext {};
	uint32_t shaderSMCount {};
	uint32_t shaderWarpsPerSM {};

	const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV&>(*this); }
	VkPhysicalDeviceShaderSMBuiltinsPropertiesNV& vkHandle() { return reinterpret_cast<VkPhysicalDeviceShaderSMBuiltinsPropertiesNV&>(*this); }

	operator const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV&() const { return vkHandle(); };
	operator VkPhysicalDeviceShaderSMBuiltinsPropertiesNV&() { return vkHandle(); };
};

struct PhysicalDeviceShaderSMBuiltinsFeaturesNV {
	StructureType sType {StructureType::physicalDeviceShaderSmBuiltinsFeaturesNV};
	void* pNext {};
	Bool32 shaderSMBuiltins {};

	constexpr PhysicalDeviceShaderSMBuiltinsFeaturesNV(Bool32 xshaderSMBuiltins = {}) : shaderSMBuiltins(xshaderSMBuiltins) {}

	const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV&>(*this); }
	VkPhysicalDeviceShaderSMBuiltinsFeaturesNV& vkHandle() { return reinterpret_cast<VkPhysicalDeviceShaderSMBuiltinsFeaturesNV&>(*this); }

	operator const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV&() const { return vkHandle(); };
	operator VkPhysicalDeviceShaderSMBuiltinsFeaturesNV&() { return vkHandle(); };
};


struct DrmFormatModifierPropertiesEXT {
	uint64_t drmFormatModifier {};
	uint32_t drmFormatModifierPlaneCount {};
	FormatFeatureFlags drmFormatModifierTilingFeatures {};

	const VkDrmFormatModifierPropertiesEXT& vkHandle() const { return reinterpret_cast<const VkDrmFormatModifierPropertiesEXT&>(*this); }
	VkDrmFormatModifierPropertiesEXT& vkHandle() { return reinterpret_cast<VkDrmFormatModifierPropertiesEXT&>(*this); }

	operator const VkDrmFormatModifierPropertiesEXT&() const { return vkHandle(); };
	operator VkDrmFormatModifierPropertiesEXT&() { return vkHandle(); };
};

struct DrmFormatModifierPropertiesListEXT {
	StructureType sType {StructureType::drmFormatModifierPropertiesListEXT};
	void* pNext {};
	uint32_t drmFormatModifierCount {};
	DrmFormatModifierPropertiesEXT* pDrmFormatModifierProperties {};

	const VkDrmFormatModifierPropertiesListEXT& vkHandle() const { return reinterpret_cast<const VkDrmFormatModifierPropertiesListEXT&>(*this); }
	VkDrmFormatModifierPropertiesListEXT& vkHandle() { return reinterpret_cast<VkDrmFormatModifierPropertiesListEXT&>(*this); }

	operator const VkDrmFormatModifierPropertiesListEXT&() const { return vkHandle(); };
	operator VkDrmFormatModifierPropertiesListEXT&() { return vkHandle(); };
};

struct PhysicalDeviceImageDrmFormatModifierInfoEXT {
	StructureType sType {StructureType::physicalDeviceImageDrmFormatModifierInfoEXT};
	const void* pNext {};
	uint64_t drmFormatModifier {};
	SharingMode sharingMode {};
	uint32_t queueFamilyIndexCount {};
	const uint32_t* pQueueFamilyIndices {};

	constexpr PhysicalDeviceImageDrmFormatModifierInfoEXT(uint64_t xdrmFormatModifier = {}, SharingMode xsharingMode = {}, uint32_t xqueueFamilyIndexCount = {}, const uint32_t* xpQueueFamilyIndices = {}) : drmFormatModifier(xdrmFormatModifier), sharingMode(xsharingMode), queueFamilyIndexCount(xqueueFamilyIndexCount), pQueueFamilyIndices(xpQueueFamilyIndices) {}

	const VkPhysicalDeviceImageDrmFormatModifierInfoEXT& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceImageDrmFormatModifierInfoEXT&>(*this); }
	VkPhysicalDeviceImageDrmFormatModifierInfoEXT& vkHandle() { return reinterpret_cast<VkPhysicalDeviceImageDrmFormatModifierInfoEXT&>(*this); }

	operator const VkPhysicalDeviceImageDrmFormatModifierInfoEXT&() const { return vkHandle(); };
	operator VkPhysicalDeviceImageDrmFormatModifierInfoEXT&() { return vkHandle(); };
};

struct ImageDrmFormatModifierListCreateInfoEXT {
	StructureType sType {StructureType::imageDrmFormatModifierListCreateInfoEXT};
	const void* pNext {};
	uint32_t drmFormatModifierCount {};
	const uint64_t* pDrmFormatModifiers {};

	constexpr ImageDrmFormatModifierListCreateInfoEXT(uint32_t xdrmFormatModifierCount = {}, const uint64_t* xpDrmFormatModifiers = {}) : drmFormatModifierCount(xdrmFormatModifierCount), pDrmFormatModifiers(xpDrmFormatModifiers) {}

	const VkImageDrmFormatModifierListCreateInfoEXT& vkHandle() const { return reinterpret_cast<const VkImageDrmFormatModifierListCreateInfoEXT&>(*this); }
	VkImageDrmFormatModifierListCreateInfoEXT& vkHandle() { return reinterpret_cast<VkImageDrmFormatModifierListCreateInfoEXT&>(*this); }

	operator const VkImageDrmFormatModifierListCreateInfoEXT&() const { return vkHandle(); };
	operator VkImageDrmFormatModifierListCreateInfoEXT&() { return vkHandle(); };
};

struct ImageDrmFormatModifierExplicitCreateInfoEXT {
	StructureType sType {StructureType::imageDrmFormatModifierExplicitCreateInfoEXT};
	const void* pNext {};
	uint64_t drmFormatModifier {};
	uint32_t drmFormatModifierPlaneCount {};
	const SubresourceLayout* pPlaneLayouts {};

	constexpr ImageDrmFormatModifierExplicitCreateInfoEXT(uint64_t xdrmFormatModifier = {}, uint32_t xdrmFormatModifierPlaneCount = {}, const SubresourceLayout* xpPlaneLayouts = {}) : drmFormatModifier(xdrmFormatModifier), drmFormatModifierPlaneCount(xdrmFormatModifierPlaneCount), pPlaneLayouts(xpPlaneLayouts) {}

	const VkImageDrmFormatModifierExplicitCreateInfoEXT& vkHandle() const { return reinterpret_cast<const VkImageDrmFormatModifierExplicitCreateInfoEXT&>(*this); }
	VkImageDrmFormatModifierExplicitCreateInfoEXT& vkHandle() { return reinterpret_cast<VkImageDrmFormatModifierExplicitCreateInfoEXT&>(*this); }

	operator const VkImageDrmFormatModifierExplicitCreateInfoEXT&() const { return vkHandle(); };
	operator VkImageDrmFormatModifierExplicitCreateInfoEXT&() { return vkHandle(); };
};

struct ImageDrmFormatModifierPropertiesEXT {
	StructureType sType {StructureType::imageDrmFormatModifierPropertiesEXT};
	void* pNext {};
	uint64_t drmFormatModifier {};

	const VkImageDrmFormatModifierPropertiesEXT& vkHandle() const { return reinterpret_cast<const VkImageDrmFormatModifierPropertiesEXT&>(*this); }
	VkImageDrmFormatModifierPropertiesEXT& vkHandle() { return reinterpret_cast<VkImageDrmFormatModifierPropertiesEXT&>(*this); }

	operator const VkImageDrmFormatModifierPropertiesEXT&() const { return vkHandle(); };
	operator VkImageDrmFormatModifierPropertiesEXT&() { return vkHandle(); };
};


struct ValidationCacheCreateInfoEXT {
	StructureType sType {StructureType::validationCacheCreateInfoEXT};
	const void* pNext {};
	ValidationCacheCreateFlagsEXT flags {};
	size_t initialDataSize {};
	const void* pInitialData {};

	constexpr ValidationCacheCreateInfoEXT(ValidationCacheCreateFlagsEXT xflags = {}, size_t xinitialDataSize = {}, const void* xpInitialData = {}) : flags(xflags), initialDataSize(xinitialDataSize), pInitialData(xpInitialData) {}

	const VkValidationCacheCreateInfoEXT& vkHandle() const { return reinterpret_cast<const VkValidationCacheCreateInfoEXT&>(*this); }
	VkValidationCacheCreateInfoEXT& vkHandle() { return reinterpret_cast<VkValidationCacheCreateInfoEXT&>(*this); }

	operator const VkValidationCacheCreateInfoEXT&() const { return vkHandle(); };
	operator VkValidationCacheCreateInfoEXT&() { return vkHandle(); };
};

struct ShaderModuleValidationCacheCreateInfoEXT {
	StructureType sType {StructureType::shaderModuleValidationCacheCreateInfoEXT};
	const void* pNext {};
	ValidationCacheEXT validationCache {};

	constexpr ShaderModuleValidationCacheCreateInfoEXT(ValidationCacheEXT xvalidationCache = {}) : validationCache(xvalidationCache) {}

	const VkShaderModuleValidationCacheCreateInfoEXT& vkHandle() const { return reinterpret_cast<const VkShaderModuleValidationCacheCreateInfoEXT&>(*this); }
	VkShaderModuleValidationCacheCreateInfoEXT& vkHandle() { return reinterpret_cast<VkShaderModuleValidationCacheCreateInfoEXT&>(*this); }

	operator const VkShaderModuleValidationCacheCreateInfoEXT&() const { return vkHandle(); };
	operator VkShaderModuleValidationCacheCreateInfoEXT&() { return vkHandle(); };
};



#ifdef VK_ENABLE_BETA_EXTENSIONS
struct PhysicalDevicePortabilitySubsetFeaturesKHR {
	StructureType sType {StructureType::physicalDevicePortabilitySubsetFeaturesKHR};
	void* pNext {};
	Bool32 constantAlphaColorBlendFactors {};
	Bool32 events {};
	Bool32 imageViewFormatReinterpretation {};
	Bool32 imageViewFormatSwizzle {};
	Bool32 imageView2DOn3DImage {};
	Bool32 multisampleArrayImage {};
	Bool32 mutableComparisonSamplers {};
	Bool32 pointPolygons {};
	Bool32 samplerMipLodBias {};
	Bool32 separateStencilMaskRef {};
	Bool32 shaderSampleRateInterpolationFunctions {};
	Bool32 tessellationIsolines {};
	Bool32 tessellationPointMode {};
	Bool32 triangleFans {};
	Bool32 vertexAttributeAccessBeyondStride {};

	constexpr PhysicalDevicePortabilitySubsetFeaturesKHR(Bool32 xconstantAlphaColorBlendFactors = {}, Bool32 xevents = {}, Bool32 ximageViewFormatReinterpretation = {}, Bool32 ximageViewFormatSwizzle = {}, Bool32 ximageView2DOn3DImage = {}, Bool32 xmultisampleArrayImage = {}, Bool32 xmutableComparisonSamplers = {}, Bool32 xpointPolygons = {}, Bool32 xsamplerMipLodBias = {}, Bool32 xseparateStencilMaskRef = {}, Bool32 xshaderSampleRateInterpolationFunctions = {}, Bool32 xtessellationIsolines = {}, Bool32 xtessellationPointMode = {}, Bool32 xtriangleFans = {}, Bool32 xvertexAttributeAccessBeyondStride = {}) : constantAlphaColorBlendFactors(xconstantAlphaColorBlendFactors), events(xevents), imageViewFormatReinterpretation(ximageViewFormatReinterpretation), imageViewFormatSwizzle(ximageViewFormatSwizzle), imageView2DOn3DImage(ximageView2DOn3DImage), multisampleArrayImage(xmultisampleArrayImage), mutableComparisonSamplers(xmutableComparisonSamplers), pointPolygons(xpointPolygons), samplerMipLodBias(xsamplerMipLodBias), separateStencilMaskRef(xseparateStencilMaskRef), shaderSampleRateInterpolationFunctions(xshaderSampleRateInterpolationFunctions), tessellationIsolines(xtessellationIsolines), tessellationPointMode(xtessellationPointMode), triangleFans(xtriangleFans), vertexAttributeAccessBeyondStride(xvertexAttributeAccessBeyondStride) {}

	const VkPhysicalDevicePortabilitySubsetFeaturesKHR& vkHandle() const { return reinterpret_cast<const VkPhysicalDevicePortabilitySubsetFeaturesKHR&>(*this); }
	VkPhysicalDevicePortabilitySubsetFeaturesKHR& vkHandle() { return reinterpret_cast<VkPhysicalDevicePortabilitySubsetFeaturesKHR&>(*this); }

	operator const VkPhysicalDevicePortabilitySubsetFeaturesKHR&() const { return vkHandle(); };
	operator VkPhysicalDevicePortabilitySubsetFeaturesKHR&() { return vkHandle(); };
};

struct PhysicalDevicePortabilitySubsetPropertiesKHR {
	StructureType sType {StructureType::physicalDevicePortabilitySubsetPropertiesKHR};
	void* pNext {};
	uint32_t minVertexInputBindingStrideAlignment {};

	constexpr PhysicalDevicePortabilitySubsetPropertiesKHR(uint32_t xminVertexInputBindingStrideAlignment = {}) : minVertexInputBindingStrideAlignment(xminVertexInputBindingStrideAlignment) {}

	const VkPhysicalDevicePortabilitySubsetPropertiesKHR& vkHandle() const { return reinterpret_cast<const VkPhysicalDevicePortabilitySubsetPropertiesKHR&>(*this); }
	VkPhysicalDevicePortabilitySubsetPropertiesKHR& vkHandle() { return reinterpret_cast<VkPhysicalDevicePortabilitySubsetPropertiesKHR&>(*this); }

	operator const VkPhysicalDevicePortabilitySubsetPropertiesKHR&() const { return vkHandle(); };
	operator VkPhysicalDevicePortabilitySubsetPropertiesKHR&() { return vkHandle(); };
};


#endif //VK_ENABLE_BETA_EXTENSIONS

struct ShadingRatePaletteNV {
	uint32_t shadingRatePaletteEntryCount {};
	const ShadingRatePaletteEntryNV* pShadingRatePaletteEntries {};

	const VkShadingRatePaletteNV& vkHandle() const { return reinterpret_cast<const VkShadingRatePaletteNV&>(*this); }
	VkShadingRatePaletteNV& vkHandle() { return reinterpret_cast<VkShadingRatePaletteNV&>(*this); }

	operator const VkShadingRatePaletteNV&() const { return vkHandle(); };
	operator VkShadingRatePaletteNV&() { return vkHandle(); };
};

struct PipelineViewportShadingRateImageStateCreateInfoNV {
	StructureType sType {StructureType::pipelineViewportShadingRateImageStateCreateInfoNV};
	const void* pNext {};
	Bool32 shadingRateImageEnable {};
	uint32_t viewportCount {};
	const ShadingRatePaletteNV* pShadingRatePalettes {};

	constexpr PipelineViewportShadingRateImageStateCreateInfoNV(Bool32 xshadingRateImageEnable = {}, uint32_t xviewportCount = {}, const ShadingRatePaletteNV* xpShadingRatePalettes = {}) : shadingRateImageEnable(xshadingRateImageEnable), viewportCount(xviewportCount), pShadingRatePalettes(xpShadingRatePalettes) {}

	const VkPipelineViewportShadingRateImageStateCreateInfoNV& vkHandle() const { return reinterpret_cast<const VkPipelineViewportShadingRateImageStateCreateInfoNV&>(*this); }
	VkPipelineViewportShadingRateImageStateCreateInfoNV& vkHandle() { return reinterpret_cast<VkPipelineViewportShadingRateImageStateCreateInfoNV&>(*this); }

	operator const VkPipelineViewportShadingRateImageStateCreateInfoNV&() const { return vkHandle(); };
	operator VkPipelineViewportShadingRateImageStateCreateInfoNV&() { return vkHandle(); };
};

struct PhysicalDeviceShadingRateImageFeaturesNV {
	StructureType sType {StructureType::physicalDeviceShadingRateImageFeaturesNV};
	void* pNext {};
	Bool32 shadingRateImage {};
	Bool32 shadingRateCoarseSampleOrder {};

	constexpr PhysicalDeviceShadingRateImageFeaturesNV(Bool32 xshadingRateImage = {}, Bool32 xshadingRateCoarseSampleOrder = {}) : shadingRateImage(xshadingRateImage), shadingRateCoarseSampleOrder(xshadingRateCoarseSampleOrder) {}

	const VkPhysicalDeviceShadingRateImageFeaturesNV& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceShadingRateImageFeaturesNV&>(*this); }
	VkPhysicalDeviceShadingRateImageFeaturesNV& vkHandle() { return reinterpret_cast<VkPhysicalDeviceShadingRateImageFeaturesNV&>(*this); }

	operator const VkPhysicalDeviceShadingRateImageFeaturesNV&() const { return vkHandle(); };
	operator VkPhysicalDeviceShadingRateImageFeaturesNV&() { return vkHandle(); };
};

struct PhysicalDeviceShadingRateImagePropertiesNV {
	StructureType sType {StructureType::physicalDeviceShadingRateImagePropertiesNV};
	void* pNext {};
	Extent2D shadingRateTexelSize {};
	uint32_t shadingRatePaletteSize {};
	uint32_t shadingRateMaxCoarseSamples {};

	const VkPhysicalDeviceShadingRateImagePropertiesNV& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceShadingRateImagePropertiesNV&>(*this); }
	VkPhysicalDeviceShadingRateImagePropertiesNV& vkHandle() { return reinterpret_cast<VkPhysicalDeviceShadingRateImagePropertiesNV&>(*this); }

	operator const VkPhysicalDeviceShadingRateImagePropertiesNV&() const { return vkHandle(); };
	operator VkPhysicalDeviceShadingRateImagePropertiesNV&() { return vkHandle(); };
};

struct CoarseSampleLocationNV {
	uint32_t pixelX {};
	uint32_t pixelY {};
	uint32_t sample {};

	const VkCoarseSampleLocationNV& vkHandle() const { return reinterpret_cast<const VkCoarseSampleLocationNV&>(*this); }
	VkCoarseSampleLocationNV& vkHandle() { return reinterpret_cast<VkCoarseSampleLocationNV&>(*this); }

	operator const VkCoarseSampleLocationNV&() const { return vkHandle(); };
	operator VkCoarseSampleLocationNV&() { return vkHandle(); };
};

struct CoarseSampleOrderCustomNV {
	ShadingRatePaletteEntryNV shadingRate {};
	uint32_t sampleCount {};
	uint32_t sampleLocationCount {};
	const CoarseSampleLocationNV* pSampleLocations {};

	const VkCoarseSampleOrderCustomNV& vkHandle() const { return reinterpret_cast<const VkCoarseSampleOrderCustomNV&>(*this); }
	VkCoarseSampleOrderCustomNV& vkHandle() { return reinterpret_cast<VkCoarseSampleOrderCustomNV&>(*this); }

	operator const VkCoarseSampleOrderCustomNV&() const { return vkHandle(); };
	operator VkCoarseSampleOrderCustomNV&() { return vkHandle(); };
};

struct PipelineViewportCoarseSampleOrderStateCreateInfoNV {
	StructureType sType {StructureType::pipelineViewportCoarseSampleOrderStateCreateInfoNV};
	const void* pNext {};
	CoarseSampleOrderTypeNV sampleOrderType {};
	uint32_t customSampleOrderCount {};
	const CoarseSampleOrderCustomNV* pCustomSampleOrders {};

	constexpr PipelineViewportCoarseSampleOrderStateCreateInfoNV(CoarseSampleOrderTypeNV xsampleOrderType = {}, uint32_t xcustomSampleOrderCount = {}, const CoarseSampleOrderCustomNV* xpCustomSampleOrders = {}) : sampleOrderType(xsampleOrderType), customSampleOrderCount(xcustomSampleOrderCount), pCustomSampleOrders(xpCustomSampleOrders) {}

	const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV& vkHandle() const { return reinterpret_cast<const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV&>(*this); }
	VkPipelineViewportCoarseSampleOrderStateCreateInfoNV& vkHandle() { return reinterpret_cast<VkPipelineViewportCoarseSampleOrderStateCreateInfoNV&>(*this); }

	operator const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV&() const { return vkHandle(); };
	operator VkPipelineViewportCoarseSampleOrderStateCreateInfoNV&() { return vkHandle(); };
};


struct RayTracingShaderGroupCreateInfoNV {
	StructureType sType {StructureType::rayTracingShaderGroupCreateInfoNV};
	const void* pNext {};
	RayTracingShaderGroupTypeKHR type {};
	uint32_t generalShader {};
	uint32_t closestHitShader {};
	uint32_t anyHitShader {};
	uint32_t intersectionShader {};

	constexpr RayTracingShaderGroupCreateInfoNV(RayTracingShaderGroupTypeKHR xtype = {}, uint32_t xgeneralShader = {}, uint32_t xclosestHitShader = {}, uint32_t xanyHitShader = {}, uint32_t xintersectionShader = {}) : type(xtype), generalShader(xgeneralShader), closestHitShader(xclosestHitShader), anyHitShader(xanyHitShader), intersectionShader(xintersectionShader) {}

	const VkRayTracingShaderGroupCreateInfoNV& vkHandle() const { return reinterpret_cast<const VkRayTracingShaderGroupCreateInfoNV&>(*this); }
	VkRayTracingShaderGroupCreateInfoNV& vkHandle() { return reinterpret_cast<VkRayTracingShaderGroupCreateInfoNV&>(*this); }

	operator const VkRayTracingShaderGroupCreateInfoNV&() const { return vkHandle(); };
	operator VkRayTracingShaderGroupCreateInfoNV&() { return vkHandle(); };
};

struct RayTracingPipelineCreateInfoNV {
	StructureType sType {StructureType::rayTracingPipelineCreateInfoNV};
	const void* pNext {};
	PipelineCreateFlags flags {};
	uint32_t stageCount {};
	const PipelineShaderStageCreateInfo* pStages {};
	uint32_t groupCount {};
	const RayTracingShaderGroupCreateInfoNV* pGroups {};
	uint32_t maxRecursionDepth {};
	PipelineLayout layout {};
	Pipeline basePipelineHandle {};
	int32_t basePipelineIndex {};

	constexpr RayTracingPipelineCreateInfoNV(PipelineCreateFlags xflags = {}, uint32_t xstageCount = {}, const PipelineShaderStageCreateInfo* xpStages = {}, uint32_t xgroupCount = {}, const RayTracingShaderGroupCreateInfoNV* xpGroups = {}, uint32_t xmaxRecursionDepth = {}, PipelineLayout xlayout = {}, Pipeline xbasePipelineHandle = {}, int32_t xbasePipelineIndex = {}) : flags(xflags), stageCount(xstageCount), pStages(xpStages), groupCount(xgroupCount), pGroups(xpGroups), maxRecursionDepth(xmaxRecursionDepth), layout(xlayout), basePipelineHandle(xbasePipelineHandle), basePipelineIndex(xbasePipelineIndex) {}

	const VkRayTracingPipelineCreateInfoNV& vkHandle() const { return reinterpret_cast<const VkRayTracingPipelineCreateInfoNV&>(*this); }
	VkRayTracingPipelineCreateInfoNV& vkHandle() { return reinterpret_cast<VkRayTracingPipelineCreateInfoNV&>(*this); }

	operator const VkRayTracingPipelineCreateInfoNV&() const { return vkHandle(); };
	operator VkRayTracingPipelineCreateInfoNV&() { return vkHandle(); };
};

struct GeometryTrianglesNV {
	StructureType sType {StructureType::geometryTrianglesNV};
	const void* pNext {};
	Buffer vertexData {};
	DeviceSize vertexOffset {};
	uint32_t vertexCount {};
	DeviceSize vertexStride {};
	Format vertexFormat {};
	Buffer indexData {};
	DeviceSize indexOffset {};
	uint32_t indexCount {};
	IndexType indexType {};
	Buffer transformData {};
	DeviceSize transformOffset {};

	constexpr GeometryTrianglesNV(Buffer xvertexData = {}, DeviceSize xvertexOffset = {}, uint32_t xvertexCount = {}, DeviceSize xvertexStride = {}, Format xvertexFormat = {}, Buffer xindexData = {}, DeviceSize xindexOffset = {}, uint32_t xindexCount = {}, IndexType xindexType = {}, Buffer xtransformData = {}, DeviceSize xtransformOffset = {}) : vertexData(xvertexData), vertexOffset(xvertexOffset), vertexCount(xvertexCount), vertexStride(xvertexStride), vertexFormat(xvertexFormat), indexData(xindexData), indexOffset(xindexOffset), indexCount(xindexCount), indexType(xindexType), transformData(xtransformData), transformOffset(xtransformOffset) {}

	const VkGeometryTrianglesNV& vkHandle() const { return reinterpret_cast<const VkGeometryTrianglesNV&>(*this); }
	VkGeometryTrianglesNV& vkHandle() { return reinterpret_cast<VkGeometryTrianglesNV&>(*this); }

	operator const VkGeometryTrianglesNV&() const { return vkHandle(); };
	operator VkGeometryTrianglesNV&() { return vkHandle(); };
};

struct GeometryAABBNV {
	StructureType sType {StructureType::geometryAabbNV};
	const void* pNext {};
	Buffer aabbData {};
	uint32_t numAABBs {};
	uint32_t stride {};
	DeviceSize offset {};

	constexpr GeometryAABBNV(Buffer xaabbData = {}, uint32_t xnumAABBs = {}, uint32_t xstride = {}, DeviceSize xoffset = {}) : aabbData(xaabbData), numAABBs(xnumAABBs), stride(xstride), offset(xoffset) {}

	const VkGeometryAABBNV& vkHandle() const { return reinterpret_cast<const VkGeometryAABBNV&>(*this); }
	VkGeometryAABBNV& vkHandle() { return reinterpret_cast<VkGeometryAABBNV&>(*this); }

	operator const VkGeometryAABBNV&() const { return vkHandle(); };
	operator VkGeometryAABBNV&() { return vkHandle(); };
};

struct GeometryDataNV {
	GeometryTrianglesNV triangles {};
	GeometryAABBNV aabbs {};

	const VkGeometryDataNV& vkHandle() const { return reinterpret_cast<const VkGeometryDataNV&>(*this); }
	VkGeometryDataNV& vkHandle() { return reinterpret_cast<VkGeometryDataNV&>(*this); }

	operator const VkGeometryDataNV&() const { return vkHandle(); };
	operator VkGeometryDataNV&() { return vkHandle(); };
};

struct GeometryNV {
	StructureType sType {StructureType::geometryNV};
	const void* pNext {};
	GeometryTypeKHR geometryType {};
	GeometryDataNV geometry {};
	GeometryFlagsKHR flags {};

	constexpr GeometryNV(GeometryTypeKHR xgeometryType = {}, GeometryDataNV xgeometry = {}, GeometryFlagsKHR xflags = {}) : geometryType(xgeometryType), geometry(xgeometry), flags(xflags) {}

	const VkGeometryNV& vkHandle() const { return reinterpret_cast<const VkGeometryNV&>(*this); }
	VkGeometryNV& vkHandle() { return reinterpret_cast<VkGeometryNV&>(*this); }

	operator const VkGeometryNV&() const { return vkHandle(); };
	operator VkGeometryNV&() { return vkHandle(); };
};

struct AccelerationStructureInfoNV {
	StructureType sType {StructureType::accelerationStructureInfoNV};
	const void* pNext {};
	AccelerationStructureTypeNV type {};
	BuildAccelerationStructureFlagsNV flags {};
	uint32_t instanceCount {};
	uint32_t geometryCount {};
	const GeometryNV* pGeometries {};

	constexpr AccelerationStructureInfoNV(AccelerationStructureTypeNV xtype = {}, BuildAccelerationStructureFlagsNV xflags = {}, uint32_t xinstanceCount = {}, uint32_t xgeometryCount = {}, const GeometryNV* xpGeometries = {}) : type(xtype), flags(xflags), instanceCount(xinstanceCount), geometryCount(xgeometryCount), pGeometries(xpGeometries) {}

	const VkAccelerationStructureInfoNV& vkHandle() const { return reinterpret_cast<const VkAccelerationStructureInfoNV&>(*this); }
	VkAccelerationStructureInfoNV& vkHandle() { return reinterpret_cast<VkAccelerationStructureInfoNV&>(*this); }

	operator const VkAccelerationStructureInfoNV&() const { return vkHandle(); };
	operator VkAccelerationStructureInfoNV&() { return vkHandle(); };
};

struct AccelerationStructureCreateInfoNV {
	StructureType sType {StructureType::accelerationStructureCreateInfoNV};
	const void* pNext {};
	DeviceSize compactedSize {};
	AccelerationStructureInfoNV info {};

	constexpr AccelerationStructureCreateInfoNV(DeviceSize xcompactedSize = {}, AccelerationStructureInfoNV xinfo = {}) : compactedSize(xcompactedSize), info(xinfo) {}

	const VkAccelerationStructureCreateInfoNV& vkHandle() const { return reinterpret_cast<const VkAccelerationStructureCreateInfoNV&>(*this); }
	VkAccelerationStructureCreateInfoNV& vkHandle() { return reinterpret_cast<VkAccelerationStructureCreateInfoNV&>(*this); }

	operator const VkAccelerationStructureCreateInfoNV&() const { return vkHandle(); };
	operator VkAccelerationStructureCreateInfoNV&() { return vkHandle(); };
};

struct BindAccelerationStructureMemoryInfoNV {
	StructureType sType {StructureType::bindAccelerationStructureMemoryInfoNV};
	const void* pNext {};
	AccelerationStructureNV accelerationStructure {};
	DeviceMemory memory {};
	DeviceSize memoryOffset {};
	uint32_t deviceIndexCount {};
	const uint32_t* pDeviceIndices {};

	constexpr BindAccelerationStructureMemoryInfoNV(AccelerationStructureNV xaccelerationStructure = {}, DeviceMemory xmemory = {}, DeviceSize xmemoryOffset = {}, uint32_t xdeviceIndexCount = {}, const uint32_t* xpDeviceIndices = {}) : accelerationStructure(xaccelerationStructure), memory(xmemory), memoryOffset(xmemoryOffset), deviceIndexCount(xdeviceIndexCount), pDeviceIndices(xpDeviceIndices) {}

	const VkBindAccelerationStructureMemoryInfoNV& vkHandle() const { return reinterpret_cast<const VkBindAccelerationStructureMemoryInfoNV&>(*this); }
	VkBindAccelerationStructureMemoryInfoNV& vkHandle() { return reinterpret_cast<VkBindAccelerationStructureMemoryInfoNV&>(*this); }

	operator const VkBindAccelerationStructureMemoryInfoNV&() const { return vkHandle(); };
	operator VkBindAccelerationStructureMemoryInfoNV&() { return vkHandle(); };
};

struct WriteDescriptorSetAccelerationStructureNV {
	StructureType sType {StructureType::writeDescriptorSetAccelerationStructureNV};
	const void* pNext {};
	uint32_t accelerationStructureCount {};
	const AccelerationStructureNV* pAccelerationStructures {};

	constexpr WriteDescriptorSetAccelerationStructureNV(uint32_t xaccelerationStructureCount = {}, const AccelerationStructureNV* xpAccelerationStructures = {}) : accelerationStructureCount(xaccelerationStructureCount), pAccelerationStructures(xpAccelerationStructures) {}

	const VkWriteDescriptorSetAccelerationStructureNV& vkHandle() const { return reinterpret_cast<const VkWriteDescriptorSetAccelerationStructureNV&>(*this); }
	VkWriteDescriptorSetAccelerationStructureNV& vkHandle() { return reinterpret_cast<VkWriteDescriptorSetAccelerationStructureNV&>(*this); }

	operator const VkWriteDescriptorSetAccelerationStructureNV&() const { return vkHandle(); };
	operator VkWriteDescriptorSetAccelerationStructureNV&() { return vkHandle(); };
};

struct AccelerationStructureMemoryRequirementsInfoNV {
	StructureType sType {StructureType::accelerationStructureMemoryRequirementsInfoNV};
	const void* pNext {};
	AccelerationStructureMemoryRequirementsTypeNV type {};
	AccelerationStructureNV accelerationStructure {};

	constexpr AccelerationStructureMemoryRequirementsInfoNV(AccelerationStructureMemoryRequirementsTypeNV xtype = {}, AccelerationStructureNV xaccelerationStructure = {}) : type(xtype), accelerationStructure(xaccelerationStructure) {}

	const VkAccelerationStructureMemoryRequirementsInfoNV& vkHandle() const { return reinterpret_cast<const VkAccelerationStructureMemoryRequirementsInfoNV&>(*this); }
	VkAccelerationStructureMemoryRequirementsInfoNV& vkHandle() { return reinterpret_cast<VkAccelerationStructureMemoryRequirementsInfoNV&>(*this); }

	operator const VkAccelerationStructureMemoryRequirementsInfoNV&() const { return vkHandle(); };
	operator VkAccelerationStructureMemoryRequirementsInfoNV&() { return vkHandle(); };
};

struct PhysicalDeviceRayTracingPropertiesNV {
	StructureType sType {StructureType::physicalDeviceRayTracingPropertiesNV};
	void* pNext {};
	uint32_t shaderGroupHandleSize {};
	uint32_t maxRecursionDepth {};
	uint32_t maxShaderGroupStride {};
	uint32_t shaderGroupBaseAlignment {};
	uint64_t maxGeometryCount {};
	uint64_t maxInstanceCount {};
	uint64_t maxTriangleCount {};
	uint32_t maxDescriptorSetAccelerationStructures {};

	const VkPhysicalDeviceRayTracingPropertiesNV& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceRayTracingPropertiesNV&>(*this); }
	VkPhysicalDeviceRayTracingPropertiesNV& vkHandle() { return reinterpret_cast<VkPhysicalDeviceRayTracingPropertiesNV&>(*this); }

	operator const VkPhysicalDeviceRayTracingPropertiesNV&() const { return vkHandle(); };
	operator VkPhysicalDeviceRayTracingPropertiesNV&() { return vkHandle(); };
};


struct PhysicalDeviceRepresentativeFragmentTestFeaturesNV {
	StructureType sType {StructureType::physicalDeviceRepresentativeFragmentTestFeaturesNV};
	void* pNext {};
	Bool32 representativeFragmentTest {};

	constexpr PhysicalDeviceRepresentativeFragmentTestFeaturesNV(Bool32 xrepresentativeFragmentTest = {}) : representativeFragmentTest(xrepresentativeFragmentTest) {}

	const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV&>(*this); }
	VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV& vkHandle() { return reinterpret_cast<VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV&>(*this); }

	operator const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV&() const { return vkHandle(); };
	operator VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV&() { return vkHandle(); };
};

struct PipelineRepresentativeFragmentTestStateCreateInfoNV {
	StructureType sType {StructureType::pipelineRepresentativeFragmentTestStateCreateInfoNV};
	const void* pNext {};
	Bool32 representativeFragmentTestEnable {};

	constexpr PipelineRepresentativeFragmentTestStateCreateInfoNV(Bool32 xrepresentativeFragmentTestEnable = {}) : representativeFragmentTestEnable(xrepresentativeFragmentTestEnable) {}

	const VkPipelineRepresentativeFragmentTestStateCreateInfoNV& vkHandle() const { return reinterpret_cast<const VkPipelineRepresentativeFragmentTestStateCreateInfoNV&>(*this); }
	VkPipelineRepresentativeFragmentTestStateCreateInfoNV& vkHandle() { return reinterpret_cast<VkPipelineRepresentativeFragmentTestStateCreateInfoNV&>(*this); }

	operator const VkPipelineRepresentativeFragmentTestStateCreateInfoNV&() const { return vkHandle(); };
	operator VkPipelineRepresentativeFragmentTestStateCreateInfoNV&() { return vkHandle(); };
};


struct PhysicalDeviceImageViewImageFormatInfoEXT {
	StructureType sType {StructureType::physicalDeviceImageViewImageFormatInfoEXT};
	void* pNext {};
	ImageViewType imageViewType {};

	constexpr PhysicalDeviceImageViewImageFormatInfoEXT(ImageViewType ximageViewType = {}) : imageViewType(ximageViewType) {}

	const VkPhysicalDeviceImageViewImageFormatInfoEXT& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceImageViewImageFormatInfoEXT&>(*this); }
	VkPhysicalDeviceImageViewImageFormatInfoEXT& vkHandle() { return reinterpret_cast<VkPhysicalDeviceImageViewImageFormatInfoEXT&>(*this); }

	operator const VkPhysicalDeviceImageViewImageFormatInfoEXT&() const { return vkHandle(); };
	operator VkPhysicalDeviceImageViewImageFormatInfoEXT&() { return vkHandle(); };
};

struct FilterCubicImageViewImageFormatPropertiesEXT {
	StructureType sType {StructureType::filterCubicImageViewImageFormatPropertiesEXT};
	void* pNext {};
	Bool32 filterCubic {};
	Bool32 filterCubicMinmax {};

	const VkFilterCubicImageViewImageFormatPropertiesEXT& vkHandle() const { return reinterpret_cast<const VkFilterCubicImageViewImageFormatPropertiesEXT&>(*this); }
	VkFilterCubicImageViewImageFormatPropertiesEXT& vkHandle() { return reinterpret_cast<VkFilterCubicImageViewImageFormatPropertiesEXT&>(*this); }

	operator const VkFilterCubicImageViewImageFormatPropertiesEXT&() const { return vkHandle(); };
	operator VkFilterCubicImageViewImageFormatPropertiesEXT&() { return vkHandle(); };
};


struct DeviceQueueGlobalPriorityCreateInfoEXT {
	StructureType sType {StructureType::deviceQueueGlobalPriorityCreateInfoEXT};
	const void* pNext {};
	QueueGlobalPriorityEXT globalPriority {};

	constexpr DeviceQueueGlobalPriorityCreateInfoEXT(QueueGlobalPriorityEXT xglobalPriority = {}) : globalPriority(xglobalPriority) {}

	const VkDeviceQueueGlobalPriorityCreateInfoEXT& vkHandle() const { return reinterpret_cast<const VkDeviceQueueGlobalPriorityCreateInfoEXT&>(*this); }
	VkDeviceQueueGlobalPriorityCreateInfoEXT& vkHandle() { return reinterpret_cast<VkDeviceQueueGlobalPriorityCreateInfoEXT&>(*this); }

	operator const VkDeviceQueueGlobalPriorityCreateInfoEXT&() const { return vkHandle(); };
	operator VkDeviceQueueGlobalPriorityCreateInfoEXT&() { return vkHandle(); };
};


struct ImportMemoryHostPointerInfoEXT {
	StructureType sType {StructureType::importMemoryHostPointerInfoEXT};
	const void* pNext {};
	ExternalMemoryHandleTypeBits handleType {};
	void* pHostPointer {};

	constexpr ImportMemoryHostPointerInfoEXT(ExternalMemoryHandleTypeBits xhandleType = {}, void* xpHostPointer = {}) : handleType(xhandleType), pHostPointer(xpHostPointer) {}

	const VkImportMemoryHostPointerInfoEXT& vkHandle() const { return reinterpret_cast<const VkImportMemoryHostPointerInfoEXT&>(*this); }
	VkImportMemoryHostPointerInfoEXT& vkHandle() { return reinterpret_cast<VkImportMemoryHostPointerInfoEXT&>(*this); }

	operator const VkImportMemoryHostPointerInfoEXT&() const { return vkHandle(); };
	operator VkImportMemoryHostPointerInfoEXT&() { return vkHandle(); };
};

struct MemoryHostPointerPropertiesEXT {
	StructureType sType {StructureType::memoryHostPointerPropertiesEXT};
	void* pNext {};
	uint32_t memoryTypeBits {};

	const VkMemoryHostPointerPropertiesEXT& vkHandle() const { return reinterpret_cast<const VkMemoryHostPointerPropertiesEXT&>(*this); }
	VkMemoryHostPointerPropertiesEXT& vkHandle() { return reinterpret_cast<VkMemoryHostPointerPropertiesEXT&>(*this); }

	operator const VkMemoryHostPointerPropertiesEXT&() const { return vkHandle(); };
	operator VkMemoryHostPointerPropertiesEXT&() { return vkHandle(); };
};

struct PhysicalDeviceExternalMemoryHostPropertiesEXT {
	StructureType sType {StructureType::physicalDeviceExternalMemoryHostPropertiesEXT};
	void* pNext {};
	DeviceSize minImportedHostPointerAlignment {};

	const VkPhysicalDeviceExternalMemoryHostPropertiesEXT& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceExternalMemoryHostPropertiesEXT&>(*this); }
	VkPhysicalDeviceExternalMemoryHostPropertiesEXT& vkHandle() { return reinterpret_cast<VkPhysicalDeviceExternalMemoryHostPropertiesEXT&>(*this); }

	operator const VkPhysicalDeviceExternalMemoryHostPropertiesEXT&() const { return vkHandle(); };
	operator VkPhysicalDeviceExternalMemoryHostPropertiesEXT&() { return vkHandle(); };
};


struct PhysicalDeviceShaderClockFeaturesKHR {
	StructureType sType {StructureType::physicalDeviceShaderClockFeaturesKHR};
	void* pNext {};
	Bool32 shaderSubgroupClock {};
	Bool32 shaderDeviceClock {};

	constexpr PhysicalDeviceShaderClockFeaturesKHR(Bool32 xshaderSubgroupClock = {}, Bool32 xshaderDeviceClock = {}) : shaderSubgroupClock(xshaderSubgroupClock), shaderDeviceClock(xshaderDeviceClock) {}

	const VkPhysicalDeviceShaderClockFeaturesKHR& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceShaderClockFeaturesKHR&>(*this); }
	VkPhysicalDeviceShaderClockFeaturesKHR& vkHandle() { return reinterpret_cast<VkPhysicalDeviceShaderClockFeaturesKHR&>(*this); }

	operator const VkPhysicalDeviceShaderClockFeaturesKHR&() const { return vkHandle(); };
	operator VkPhysicalDeviceShaderClockFeaturesKHR&() { return vkHandle(); };
};


struct PipelineCompilerControlCreateInfoAMD {
	StructureType sType {StructureType::pipelineCompilerControlCreateInfoAMD};
	const void* pNext {};
	PipelineCompilerControlFlagsAMD compilerControlFlags {};

	constexpr PipelineCompilerControlCreateInfoAMD(PipelineCompilerControlFlagsAMD xcompilerControlFlags = {}) : compilerControlFlags(xcompilerControlFlags) {}

	const VkPipelineCompilerControlCreateInfoAMD& vkHandle() const { return reinterpret_cast<const VkPipelineCompilerControlCreateInfoAMD&>(*this); }
	VkPipelineCompilerControlCreateInfoAMD& vkHandle() { return reinterpret_cast<VkPipelineCompilerControlCreateInfoAMD&>(*this); }

	operator const VkPipelineCompilerControlCreateInfoAMD&() const { return vkHandle(); };
	operator VkPipelineCompilerControlCreateInfoAMD&() { return vkHandle(); };
};


struct CalibratedTimestampInfoEXT {
	StructureType sType {StructureType::calibratedTimestampInfoEXT};
	const void* pNext {};
	TimeDomainEXT timeDomain {};

	constexpr CalibratedTimestampInfoEXT(TimeDomainEXT xtimeDomain = {}) : timeDomain(xtimeDomain) {}

	const VkCalibratedTimestampInfoEXT& vkHandle() const { return reinterpret_cast<const VkCalibratedTimestampInfoEXT&>(*this); }
	VkCalibratedTimestampInfoEXT& vkHandle() { return reinterpret_cast<VkCalibratedTimestampInfoEXT&>(*this); }

	operator const VkCalibratedTimestampInfoEXT&() const { return vkHandle(); };
	operator VkCalibratedTimestampInfoEXT&() { return vkHandle(); };
};


struct PhysicalDeviceShaderCorePropertiesAMD {
	StructureType sType {StructureType::physicalDeviceShaderCorePropertiesAMD};
	void* pNext {};
	uint32_t shaderEngineCount {};
	uint32_t shaderArraysPerEngineCount {};
	uint32_t computeUnitsPerShaderArray {};
	uint32_t simdPerComputeUnit {};
	uint32_t wavefrontsPerSimd {};
	uint32_t wavefrontSize {};
	uint32_t sgprsPerSimd {};
	uint32_t minSgprAllocation {};
	uint32_t maxSgprAllocation {};
	uint32_t sgprAllocationGranularity {};
	uint32_t vgprsPerSimd {};
	uint32_t minVgprAllocation {};
	uint32_t maxVgprAllocation {};
	uint32_t vgprAllocationGranularity {};

	const VkPhysicalDeviceShaderCorePropertiesAMD& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceShaderCorePropertiesAMD&>(*this); }
	VkPhysicalDeviceShaderCorePropertiesAMD& vkHandle() { return reinterpret_cast<VkPhysicalDeviceShaderCorePropertiesAMD&>(*this); }

	operator const VkPhysicalDeviceShaderCorePropertiesAMD&() const { return vkHandle(); };
	operator VkPhysicalDeviceShaderCorePropertiesAMD&() { return vkHandle(); };
};


struct DeviceMemoryOverallocationCreateInfoAMD {
	StructureType sType {StructureType::deviceMemoryOverallocationCreateInfoAMD};
	const void* pNext {};
	MemoryOverallocationBehaviorAMD overallocationBehavior {};

	constexpr DeviceMemoryOverallocationCreateInfoAMD(MemoryOverallocationBehaviorAMD xoverallocationBehavior = {}) : overallocationBehavior(xoverallocationBehavior) {}

	const VkDeviceMemoryOverallocationCreateInfoAMD& vkHandle() const { return reinterpret_cast<const VkDeviceMemoryOverallocationCreateInfoAMD&>(*this); }
	VkDeviceMemoryOverallocationCreateInfoAMD& vkHandle() { return reinterpret_cast<VkDeviceMemoryOverallocationCreateInfoAMD&>(*this); }

	operator const VkDeviceMemoryOverallocationCreateInfoAMD&() const { return vkHandle(); };
	operator VkDeviceMemoryOverallocationCreateInfoAMD&() { return vkHandle(); };
};


struct PhysicalDeviceVertexAttributeDivisorPropertiesEXT {
	StructureType sType {StructureType::physicalDeviceVertexAttributeDivisorPropertiesEXT};
	void* pNext {};
	uint32_t maxVertexAttribDivisor {};

	const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT&>(*this); }
	VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& vkHandle() { return reinterpret_cast<VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT&>(*this); }

	operator const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT&() const { return vkHandle(); };
	operator VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT&() { return vkHandle(); };
};

struct VertexInputBindingDivisorDescriptionEXT {
	uint32_t binding {};
	uint32_t divisor {};

	const VkVertexInputBindingDivisorDescriptionEXT& vkHandle() const { return reinterpret_cast<const VkVertexInputBindingDivisorDescriptionEXT&>(*this); }
	VkVertexInputBindingDivisorDescriptionEXT& vkHandle() { return reinterpret_cast<VkVertexInputBindingDivisorDescriptionEXT&>(*this); }

	operator const VkVertexInputBindingDivisorDescriptionEXT&() const { return vkHandle(); };
	operator VkVertexInputBindingDivisorDescriptionEXT&() { return vkHandle(); };
};

struct PipelineVertexInputDivisorStateCreateInfoEXT {
	StructureType sType {StructureType::pipelineVertexInputDivisorStateCreateInfoEXT};
	const void* pNext {};
	uint32_t vertexBindingDivisorCount {};
	const VertexInputBindingDivisorDescriptionEXT* pVertexBindingDivisors {};

	constexpr PipelineVertexInputDivisorStateCreateInfoEXT(uint32_t xvertexBindingDivisorCount = {}, const VertexInputBindingDivisorDescriptionEXT* xpVertexBindingDivisors = {}) : vertexBindingDivisorCount(xvertexBindingDivisorCount), pVertexBindingDivisors(xpVertexBindingDivisors) {}

	const VkPipelineVertexInputDivisorStateCreateInfoEXT& vkHandle() const { return reinterpret_cast<const VkPipelineVertexInputDivisorStateCreateInfoEXT&>(*this); }
	VkPipelineVertexInputDivisorStateCreateInfoEXT& vkHandle() { return reinterpret_cast<VkPipelineVertexInputDivisorStateCreateInfoEXT&>(*this); }

	operator const VkPipelineVertexInputDivisorStateCreateInfoEXT&() const { return vkHandle(); };
	operator VkPipelineVertexInputDivisorStateCreateInfoEXT&() { return vkHandle(); };
};

struct PhysicalDeviceVertexAttributeDivisorFeaturesEXT {
	StructureType sType {StructureType::physicalDeviceVertexAttributeDivisorFeaturesEXT};
	void* pNext {};
	Bool32 vertexAttributeInstanceRateDivisor {};
	Bool32 vertexAttributeInstanceRateZeroDivisor {};

	constexpr PhysicalDeviceVertexAttributeDivisorFeaturesEXT(Bool32 xvertexAttributeInstanceRateDivisor = {}, Bool32 xvertexAttributeInstanceRateZeroDivisor = {}) : vertexAttributeInstanceRateDivisor(xvertexAttributeInstanceRateDivisor), vertexAttributeInstanceRateZeroDivisor(xvertexAttributeInstanceRateZeroDivisor) {}

	const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT&>(*this); }
	VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT& vkHandle() { return reinterpret_cast<VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT&>(*this); }

	operator const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT&() const { return vkHandle(); };
	operator VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT&() { return vkHandle(); };
};



#ifdef VK_USE_PLATFORM_GGP
struct PresentFrameTokenGGP {
	StructureType sType {StructureType::presentFrameTokenGGP};
	const void* pNext {};
	GgpFrameToken frameToken {};

	constexpr PresentFrameTokenGGP(GgpFrameToken xframeToken = {}) : frameToken(xframeToken) {}

	const VkPresentFrameTokenGGP& vkHandle() const { return reinterpret_cast<const VkPresentFrameTokenGGP&>(*this); }
	VkPresentFrameTokenGGP& vkHandle() { return reinterpret_cast<VkPresentFrameTokenGGP&>(*this); }

	operator const VkPresentFrameTokenGGP&() const { return vkHandle(); };
	operator VkPresentFrameTokenGGP&() { return vkHandle(); };
};


#endif //VK_USE_PLATFORM_GGP

struct PipelineCreationFeedbackEXT {
	PipelineCreationFeedbackFlagsEXT flags {};
	uint64_t duration {};

	const VkPipelineCreationFeedbackEXT& vkHandle() const { return reinterpret_cast<const VkPipelineCreationFeedbackEXT&>(*this); }
	VkPipelineCreationFeedbackEXT& vkHandle() { return reinterpret_cast<VkPipelineCreationFeedbackEXT&>(*this); }

	operator const VkPipelineCreationFeedbackEXT&() const { return vkHandle(); };
	operator VkPipelineCreationFeedbackEXT&() { return vkHandle(); };
};

struct PipelineCreationFeedbackCreateInfoEXT {
	StructureType sType {StructureType::pipelineCreationFeedbackCreateInfoEXT};
	const void* pNext {};
	PipelineCreationFeedbackEXT* pPipelineCreationFeedback {};
	uint32_t pipelineStageCreationFeedbackCount {};
	PipelineCreationFeedbackEXT* pPipelineStageCreationFeedbacks {};

	constexpr PipelineCreationFeedbackCreateInfoEXT(PipelineCreationFeedbackEXT* xpPipelineCreationFeedback = {}, uint32_t xpipelineStageCreationFeedbackCount = {}, PipelineCreationFeedbackEXT* xpPipelineStageCreationFeedbacks = {}) : pPipelineCreationFeedback(xpPipelineCreationFeedback), pipelineStageCreationFeedbackCount(xpipelineStageCreationFeedbackCount), pPipelineStageCreationFeedbacks(xpPipelineStageCreationFeedbacks) {}

	const VkPipelineCreationFeedbackCreateInfoEXT& vkHandle() const { return reinterpret_cast<const VkPipelineCreationFeedbackCreateInfoEXT&>(*this); }
	VkPipelineCreationFeedbackCreateInfoEXT& vkHandle() { return reinterpret_cast<VkPipelineCreationFeedbackCreateInfoEXT&>(*this); }

	operator const VkPipelineCreationFeedbackCreateInfoEXT&() const { return vkHandle(); };
	operator VkPipelineCreationFeedbackCreateInfoEXT&() { return vkHandle(); };
};


struct PhysicalDeviceComputeShaderDerivativesFeaturesNV {
	StructureType sType {StructureType::physicalDeviceComputeShaderDerivativesFeaturesNV};
	void* pNext {};
	Bool32 computeDerivativeGroupQuads {};
	Bool32 computeDerivativeGroupLinear {};

	constexpr PhysicalDeviceComputeShaderDerivativesFeaturesNV(Bool32 xcomputeDerivativeGroupQuads = {}, Bool32 xcomputeDerivativeGroupLinear = {}) : computeDerivativeGroupQuads(xcomputeDerivativeGroupQuads), computeDerivativeGroupLinear(xcomputeDerivativeGroupLinear) {}

	const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV&>(*this); }
	VkPhysicalDeviceComputeShaderDerivativesFeaturesNV& vkHandle() { return reinterpret_cast<VkPhysicalDeviceComputeShaderDerivativesFeaturesNV&>(*this); }

	operator const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV&() const { return vkHandle(); };
	operator VkPhysicalDeviceComputeShaderDerivativesFeaturesNV&() { return vkHandle(); };
};


struct PhysicalDeviceMeshShaderFeaturesNV {
	StructureType sType {StructureType::physicalDeviceMeshShaderFeaturesNV};
	void* pNext {};
	Bool32 taskShader {};
	Bool32 meshShader {};

	constexpr PhysicalDeviceMeshShaderFeaturesNV(Bool32 xtaskShader = {}, Bool32 xmeshShader = {}) : taskShader(xtaskShader), meshShader(xmeshShader) {}

	const VkPhysicalDeviceMeshShaderFeaturesNV& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceMeshShaderFeaturesNV&>(*this); }
	VkPhysicalDeviceMeshShaderFeaturesNV& vkHandle() { return reinterpret_cast<VkPhysicalDeviceMeshShaderFeaturesNV&>(*this); }

	operator const VkPhysicalDeviceMeshShaderFeaturesNV&() const { return vkHandle(); };
	operator VkPhysicalDeviceMeshShaderFeaturesNV&() { return vkHandle(); };
};

struct PhysicalDeviceMeshShaderPropertiesNV {
	StructureType sType {StructureType::physicalDeviceMeshShaderPropertiesNV};
	void* pNext {};
	uint32_t maxDrawMeshTasksCount {};
	uint32_t maxTaskWorkGroupInvocations {};
	std::array<uint32_t, 3> maxTaskWorkGroupSize {};
	uint32_t maxTaskTotalMemorySize {};
	uint32_t maxTaskOutputCount {};
	uint32_t maxMeshWorkGroupInvocations {};
	std::array<uint32_t, 3> maxMeshWorkGroupSize {};
	uint32_t maxMeshTotalMemorySize {};
	uint32_t maxMeshOutputVertices {};
	uint32_t maxMeshOutputPrimitives {};
	uint32_t maxMeshMultiviewViewCount {};
	uint32_t meshOutputPerVertexGranularity {};
	uint32_t meshOutputPerPrimitiveGranularity {};

	const VkPhysicalDeviceMeshShaderPropertiesNV& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceMeshShaderPropertiesNV&>(*this); }
	VkPhysicalDeviceMeshShaderPropertiesNV& vkHandle() { return reinterpret_cast<VkPhysicalDeviceMeshShaderPropertiesNV&>(*this); }

	operator const VkPhysicalDeviceMeshShaderPropertiesNV&() const { return vkHandle(); };
	operator VkPhysicalDeviceMeshShaderPropertiesNV&() { return vkHandle(); };
};

struct DrawMeshTasksIndirectCommandNV {
	uint32_t taskCount {};
	uint32_t firstTask {};

	const VkDrawMeshTasksIndirectCommandNV& vkHandle() const { return reinterpret_cast<const VkDrawMeshTasksIndirectCommandNV&>(*this); }
	VkDrawMeshTasksIndirectCommandNV& vkHandle() { return reinterpret_cast<VkDrawMeshTasksIndirectCommandNV&>(*this); }

	operator const VkDrawMeshTasksIndirectCommandNV&() const { return vkHandle(); };
	operator VkDrawMeshTasksIndirectCommandNV&() { return vkHandle(); };
};


struct PhysicalDeviceFragmentShaderBarycentricFeaturesNV {
	StructureType sType {StructureType::physicalDeviceFragmentShaderBarycentricFeaturesNV};
	void* pNext {};
	Bool32 fragmentShaderBarycentric {};

	constexpr PhysicalDeviceFragmentShaderBarycentricFeaturesNV(Bool32 xfragmentShaderBarycentric = {}) : fragmentShaderBarycentric(xfragmentShaderBarycentric) {}

	const VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV&>(*this); }
	VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV& vkHandle() { return reinterpret_cast<VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV&>(*this); }

	operator const VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV&() const { return vkHandle(); };
	operator VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV&() { return vkHandle(); };
};


struct PhysicalDeviceShaderImageFootprintFeaturesNV {
	StructureType sType {StructureType::physicalDeviceShaderImageFootprintFeaturesNV};
	void* pNext {};
	Bool32 imageFootprint {};

	constexpr PhysicalDeviceShaderImageFootprintFeaturesNV(Bool32 ximageFootprint = {}) : imageFootprint(ximageFootprint) {}

	const VkPhysicalDeviceShaderImageFootprintFeaturesNV& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceShaderImageFootprintFeaturesNV&>(*this); }
	VkPhysicalDeviceShaderImageFootprintFeaturesNV& vkHandle() { return reinterpret_cast<VkPhysicalDeviceShaderImageFootprintFeaturesNV&>(*this); }

	operator const VkPhysicalDeviceShaderImageFootprintFeaturesNV&() const { return vkHandle(); };
	operator VkPhysicalDeviceShaderImageFootprintFeaturesNV&() { return vkHandle(); };
};


struct PipelineViewportExclusiveScissorStateCreateInfoNV {
	StructureType sType {StructureType::pipelineViewportExclusiveScissorStateCreateInfoNV};
	const void* pNext {};
	uint32_t exclusiveScissorCount {};
	const Rect2D* pExclusiveScissors {};

	constexpr PipelineViewportExclusiveScissorStateCreateInfoNV(uint32_t xexclusiveScissorCount = {}, const Rect2D* xpExclusiveScissors = {}) : exclusiveScissorCount(xexclusiveScissorCount), pExclusiveScissors(xpExclusiveScissors) {}

	const VkPipelineViewportExclusiveScissorStateCreateInfoNV& vkHandle() const { return reinterpret_cast<const VkPipelineViewportExclusiveScissorStateCreateInfoNV&>(*this); }
	VkPipelineViewportExclusiveScissorStateCreateInfoNV& vkHandle() { return reinterpret_cast<VkPipelineViewportExclusiveScissorStateCreateInfoNV&>(*this); }

	operator const VkPipelineViewportExclusiveScissorStateCreateInfoNV&() const { return vkHandle(); };
	operator VkPipelineViewportExclusiveScissorStateCreateInfoNV&() { return vkHandle(); };
};

struct PhysicalDeviceExclusiveScissorFeaturesNV {
	StructureType sType {StructureType::physicalDeviceExclusiveScissorFeaturesNV};
	void* pNext {};
	Bool32 exclusiveScissor {};

	constexpr PhysicalDeviceExclusiveScissorFeaturesNV(Bool32 xexclusiveScissor = {}) : exclusiveScissor(xexclusiveScissor) {}

	const VkPhysicalDeviceExclusiveScissorFeaturesNV& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceExclusiveScissorFeaturesNV&>(*this); }
	VkPhysicalDeviceExclusiveScissorFeaturesNV& vkHandle() { return reinterpret_cast<VkPhysicalDeviceExclusiveScissorFeaturesNV&>(*this); }

	operator const VkPhysicalDeviceExclusiveScissorFeaturesNV&() const { return vkHandle(); };
	operator VkPhysicalDeviceExclusiveScissorFeaturesNV&() { return vkHandle(); };
};


struct QueueFamilyCheckpointPropertiesNV {
	StructureType sType {StructureType::queueFamilyCheckpointPropertiesNV};
	void* pNext {};
	PipelineStageFlags checkpointExecutionStageMask {};

	const VkQueueFamilyCheckpointPropertiesNV& vkHandle() const { return reinterpret_cast<const VkQueueFamilyCheckpointPropertiesNV&>(*this); }
	VkQueueFamilyCheckpointPropertiesNV& vkHandle() { return reinterpret_cast<VkQueueFamilyCheckpointPropertiesNV&>(*this); }

	operator const VkQueueFamilyCheckpointPropertiesNV&() const { return vkHandle(); };
	operator VkQueueFamilyCheckpointPropertiesNV&() { return vkHandle(); };
};

struct CheckpointDataNV {
	StructureType sType {StructureType::checkpointDataNV};
	void* pNext {};
	PipelineStageBits stage {};
	void* pCheckpointMarker {};

	const VkCheckpointDataNV& vkHandle() const { return reinterpret_cast<const VkCheckpointDataNV&>(*this); }
	VkCheckpointDataNV& vkHandle() { return reinterpret_cast<VkCheckpointDataNV&>(*this); }

	operator const VkCheckpointDataNV&() const { return vkHandle(); };
	operator VkCheckpointDataNV&() { return vkHandle(); };
};


struct PhysicalDeviceShaderIntegerFunctions2FeaturesINTEL {
	StructureType sType {StructureType::physicalDeviceShaderIntegerFunctions2FeaturesINTEL};
	void* pNext {};
	Bool32 shaderIntegerFunctions2 {};

	constexpr PhysicalDeviceShaderIntegerFunctions2FeaturesINTEL(Bool32 xshaderIntegerFunctions2 = {}) : shaderIntegerFunctions2(xshaderIntegerFunctions2) {}

	const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL&>(*this); }
	VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL& vkHandle() { return reinterpret_cast<VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL&>(*this); }

	operator const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL&() const { return vkHandle(); };
	operator VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL&() { return vkHandle(); };
};


union PerformanceValueDataINTEL {
	uint32_t value32 {};
	uint64_t value64;
	float valueFloat;
	Bool32 valueBool;
	const char* valueString;

	const VkPerformanceValueDataINTEL& vkHandle() const { return reinterpret_cast<const VkPerformanceValueDataINTEL&>(*this); }
	VkPerformanceValueDataINTEL& vkHandle() { return reinterpret_cast<VkPerformanceValueDataINTEL&>(*this); }

	operator const VkPerformanceValueDataINTEL&() const { return vkHandle(); };
	operator VkPerformanceValueDataINTEL&() { return vkHandle(); };
};

struct PerformanceValueINTEL {
	PerformanceValueTypeINTEL type {};
	PerformanceValueDataINTEL data {};

	const VkPerformanceValueINTEL& vkHandle() const { return reinterpret_cast<const VkPerformanceValueINTEL&>(*this); }
	VkPerformanceValueINTEL& vkHandle() { return reinterpret_cast<VkPerformanceValueINTEL&>(*this); }

	operator const VkPerformanceValueINTEL&() const { return vkHandle(); };
	operator VkPerformanceValueINTEL&() { return vkHandle(); };
};

struct InitializePerformanceApiInfoINTEL {
	StructureType sType {StructureType::initializePerformanceApiInfoINTEL};
	const void* pNext {};
	void* pUserData {};

	constexpr InitializePerformanceApiInfoINTEL(void* xpUserData = {}) : pUserData(xpUserData) {}

	const VkInitializePerformanceApiInfoINTEL& vkHandle() const { return reinterpret_cast<const VkInitializePerformanceApiInfoINTEL&>(*this); }
	VkInitializePerformanceApiInfoINTEL& vkHandle() { return reinterpret_cast<VkInitializePerformanceApiInfoINTEL&>(*this); }

	operator const VkInitializePerformanceApiInfoINTEL&() const { return vkHandle(); };
	operator VkInitializePerformanceApiInfoINTEL&() { return vkHandle(); };
};

struct QueryPoolPerformanceQueryCreateInfoINTEL {
	StructureType sType {StructureType::queryPoolPerformanceQueryCreateInfoINTEL};
	const void* pNext {};
	QueryPoolSamplingModeINTEL performanceCountersSampling {};

	constexpr QueryPoolPerformanceQueryCreateInfoINTEL(QueryPoolSamplingModeINTEL xperformanceCountersSampling = {}) : performanceCountersSampling(xperformanceCountersSampling) {}

	const VkQueryPoolPerformanceQueryCreateInfoINTEL& vkHandle() const { return reinterpret_cast<const VkQueryPoolPerformanceQueryCreateInfoINTEL&>(*this); }
	VkQueryPoolPerformanceQueryCreateInfoINTEL& vkHandle() { return reinterpret_cast<VkQueryPoolPerformanceQueryCreateInfoINTEL&>(*this); }

	operator const VkQueryPoolPerformanceQueryCreateInfoINTEL&() const { return vkHandle(); };
	operator VkQueryPoolPerformanceQueryCreateInfoINTEL&() { return vkHandle(); };
};

struct PerformanceMarkerInfoINTEL {
	StructureType sType {StructureType::performanceMarkerInfoINTEL};
	const void* pNext {};
	uint64_t marker {};

	constexpr PerformanceMarkerInfoINTEL(uint64_t xmarker = {}) : marker(xmarker) {}

	const VkPerformanceMarkerInfoINTEL& vkHandle() const { return reinterpret_cast<const VkPerformanceMarkerInfoINTEL&>(*this); }
	VkPerformanceMarkerInfoINTEL& vkHandle() { return reinterpret_cast<VkPerformanceMarkerInfoINTEL&>(*this); }

	operator const VkPerformanceMarkerInfoINTEL&() const { return vkHandle(); };
	operator VkPerformanceMarkerInfoINTEL&() { return vkHandle(); };
};

struct PerformanceStreamMarkerInfoINTEL {
	StructureType sType {StructureType::performanceStreamMarkerInfoINTEL};
	const void* pNext {};
	uint32_t marker {};

	constexpr PerformanceStreamMarkerInfoINTEL(uint32_t xmarker = {}) : marker(xmarker) {}

	const VkPerformanceStreamMarkerInfoINTEL& vkHandle() const { return reinterpret_cast<const VkPerformanceStreamMarkerInfoINTEL&>(*this); }
	VkPerformanceStreamMarkerInfoINTEL& vkHandle() { return reinterpret_cast<VkPerformanceStreamMarkerInfoINTEL&>(*this); }

	operator const VkPerformanceStreamMarkerInfoINTEL&() const { return vkHandle(); };
	operator VkPerformanceStreamMarkerInfoINTEL&() { return vkHandle(); };
};

struct PerformanceOverrideInfoINTEL {
	StructureType sType {StructureType::performanceOverrideInfoINTEL};
	const void* pNext {};
	PerformanceOverrideTypeINTEL type {};
	Bool32 enable {};
	uint64_t parameter {};

	constexpr PerformanceOverrideInfoINTEL(PerformanceOverrideTypeINTEL xtype = {}, Bool32 xenable = {}, uint64_t xparameter = {}) : type(xtype), enable(xenable), parameter(xparameter) {}

	const VkPerformanceOverrideInfoINTEL& vkHandle() const { return reinterpret_cast<const VkPerformanceOverrideInfoINTEL&>(*this); }
	VkPerformanceOverrideInfoINTEL& vkHandle() { return reinterpret_cast<VkPerformanceOverrideInfoINTEL&>(*this); }

	operator const VkPerformanceOverrideInfoINTEL&() const { return vkHandle(); };
	operator VkPerformanceOverrideInfoINTEL&() { return vkHandle(); };
};

struct PerformanceConfigurationAcquireInfoINTEL {
	StructureType sType {StructureType::performanceConfigurationAcquireInfoINTEL};
	const void* pNext {};
	PerformanceConfigurationTypeINTEL type {};

	constexpr PerformanceConfigurationAcquireInfoINTEL(PerformanceConfigurationTypeINTEL xtype = {}) : type(xtype) {}

	const VkPerformanceConfigurationAcquireInfoINTEL& vkHandle() const { return reinterpret_cast<const VkPerformanceConfigurationAcquireInfoINTEL&>(*this); }
	VkPerformanceConfigurationAcquireInfoINTEL& vkHandle() { return reinterpret_cast<VkPerformanceConfigurationAcquireInfoINTEL&>(*this); }

	operator const VkPerformanceConfigurationAcquireInfoINTEL&() const { return vkHandle(); };
	operator VkPerformanceConfigurationAcquireInfoINTEL&() { return vkHandle(); };
};


struct PhysicalDevicePCIBusInfoPropertiesEXT {
	StructureType sType {StructureType::physicalDevicePciBusInfoPropertiesEXT};
	void* pNext {};
	uint32_t pciDomain {};
	uint32_t pciBus {};
	uint32_t pciDevice {};
	uint32_t pciFunction {};

	const VkPhysicalDevicePCIBusInfoPropertiesEXT& vkHandle() const { return reinterpret_cast<const VkPhysicalDevicePCIBusInfoPropertiesEXT&>(*this); }
	VkPhysicalDevicePCIBusInfoPropertiesEXT& vkHandle() { return reinterpret_cast<VkPhysicalDevicePCIBusInfoPropertiesEXT&>(*this); }

	operator const VkPhysicalDevicePCIBusInfoPropertiesEXT&() const { return vkHandle(); };
	operator VkPhysicalDevicePCIBusInfoPropertiesEXT&() { return vkHandle(); };
};


struct DisplayNativeHdrSurfaceCapabilitiesAMD {
	StructureType sType {StructureType::displayNativeHdrSurfaceCapabilitiesAMD};
	void* pNext {};
	Bool32 localDimmingSupport {};

	const VkDisplayNativeHdrSurfaceCapabilitiesAMD& vkHandle() const { return reinterpret_cast<const VkDisplayNativeHdrSurfaceCapabilitiesAMD&>(*this); }
	VkDisplayNativeHdrSurfaceCapabilitiesAMD& vkHandle() { return reinterpret_cast<VkDisplayNativeHdrSurfaceCapabilitiesAMD&>(*this); }

	operator const VkDisplayNativeHdrSurfaceCapabilitiesAMD&() const { return vkHandle(); };
	operator VkDisplayNativeHdrSurfaceCapabilitiesAMD&() { return vkHandle(); };
};

struct SwapchainDisplayNativeHdrCreateInfoAMD {
	StructureType sType {StructureType::swapchainDisplayNativeHdrCreateInfoAMD};
	const void* pNext {};
	Bool32 localDimmingEnable {};

	constexpr SwapchainDisplayNativeHdrCreateInfoAMD(Bool32 xlocalDimmingEnable = {}) : localDimmingEnable(xlocalDimmingEnable) {}

	const VkSwapchainDisplayNativeHdrCreateInfoAMD& vkHandle() const { return reinterpret_cast<const VkSwapchainDisplayNativeHdrCreateInfoAMD&>(*this); }
	VkSwapchainDisplayNativeHdrCreateInfoAMD& vkHandle() { return reinterpret_cast<VkSwapchainDisplayNativeHdrCreateInfoAMD&>(*this); }

	operator const VkSwapchainDisplayNativeHdrCreateInfoAMD&() const { return vkHandle(); };
	operator VkSwapchainDisplayNativeHdrCreateInfoAMD&() { return vkHandle(); };
};



#ifdef VK_USE_PLATFORM_FUCHSIA
struct ImagePipeSurfaceCreateInfoFUCHSIA {
	StructureType sType {StructureType::imagepipeSurfaceCreateInfoFUCHSIA};
	const void* pNext {};
	ImagePipeSurfaceCreateFlagsFUCHSIA flags {};
	zx_handle_t imagePipeHandle {};

	constexpr ImagePipeSurfaceCreateInfoFUCHSIA(ImagePipeSurfaceCreateFlagsFUCHSIA xflags = {}, zx_handle_t ximagePipeHandle = {}) : flags(xflags), imagePipeHandle(ximagePipeHandle) {}

	const VkImagePipeSurfaceCreateInfoFUCHSIA& vkHandle() const { return reinterpret_cast<const VkImagePipeSurfaceCreateInfoFUCHSIA&>(*this); }
	VkImagePipeSurfaceCreateInfoFUCHSIA& vkHandle() { return reinterpret_cast<VkImagePipeSurfaceCreateInfoFUCHSIA&>(*this); }

	operator const VkImagePipeSurfaceCreateInfoFUCHSIA&() const { return vkHandle(); };
	operator VkImagePipeSurfaceCreateInfoFUCHSIA&() { return vkHandle(); };
};


#endif //VK_USE_PLATFORM_FUCHSIA

struct PhysicalDeviceShaderTerminateInvocationFeaturesKHR {
	StructureType sType {StructureType::physicalDeviceShaderTerminateInvocationFeaturesKHR};
	void* pNext {};
	Bool32 shaderTerminateInvocation {};

	constexpr PhysicalDeviceShaderTerminateInvocationFeaturesKHR(Bool32 xshaderTerminateInvocation = {}) : shaderTerminateInvocation(xshaderTerminateInvocation) {}

	const VkPhysicalDeviceShaderTerminateInvocationFeaturesKHR& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceShaderTerminateInvocationFeaturesKHR&>(*this); }
	VkPhysicalDeviceShaderTerminateInvocationFeaturesKHR& vkHandle() { return reinterpret_cast<VkPhysicalDeviceShaderTerminateInvocationFeaturesKHR&>(*this); }

	operator const VkPhysicalDeviceShaderTerminateInvocationFeaturesKHR&() const { return vkHandle(); };
	operator VkPhysicalDeviceShaderTerminateInvocationFeaturesKHR&() { return vkHandle(); };
};


struct PhysicalDeviceFragmentDensityMapFeaturesEXT {
	StructureType sType {StructureType::physicalDeviceFragmentDensityMapFeaturesEXT};
	void* pNext {};
	Bool32 fragmentDensityMap {};
	Bool32 fragmentDensityMapDynamic {};
	Bool32 fragmentDensityMapNonSubsampledImages {};

	constexpr PhysicalDeviceFragmentDensityMapFeaturesEXT(Bool32 xfragmentDensityMap = {}, Bool32 xfragmentDensityMapDynamic = {}, Bool32 xfragmentDensityMapNonSubsampledImages = {}) : fragmentDensityMap(xfragmentDensityMap), fragmentDensityMapDynamic(xfragmentDensityMapDynamic), fragmentDensityMapNonSubsampledImages(xfragmentDensityMapNonSubsampledImages) {}

	const VkPhysicalDeviceFragmentDensityMapFeaturesEXT& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceFragmentDensityMapFeaturesEXT&>(*this); }
	VkPhysicalDeviceFragmentDensityMapFeaturesEXT& vkHandle() { return reinterpret_cast<VkPhysicalDeviceFragmentDensityMapFeaturesEXT&>(*this); }

	operator const VkPhysicalDeviceFragmentDensityMapFeaturesEXT&() const { return vkHandle(); };
	operator VkPhysicalDeviceFragmentDensityMapFeaturesEXT&() { return vkHandle(); };
};

struct PhysicalDeviceFragmentDensityMapPropertiesEXT {
	StructureType sType {StructureType::physicalDeviceFragmentDensityMapPropertiesEXT};
	void* pNext {};
	Extent2D minFragmentDensityTexelSize {};
	Extent2D maxFragmentDensityTexelSize {};
	Bool32 fragmentDensityInvocations {};

	const VkPhysicalDeviceFragmentDensityMapPropertiesEXT& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceFragmentDensityMapPropertiesEXT&>(*this); }
	VkPhysicalDeviceFragmentDensityMapPropertiesEXT& vkHandle() { return reinterpret_cast<VkPhysicalDeviceFragmentDensityMapPropertiesEXT&>(*this); }

	operator const VkPhysicalDeviceFragmentDensityMapPropertiesEXT&() const { return vkHandle(); };
	operator VkPhysicalDeviceFragmentDensityMapPropertiesEXT&() { return vkHandle(); };
};

struct RenderPassFragmentDensityMapCreateInfoEXT {
	StructureType sType {StructureType::renderPassFragmentDensityMapCreateInfoEXT};
	const void* pNext {};
	AttachmentReference fragmentDensityMapAttachment {};

	constexpr RenderPassFragmentDensityMapCreateInfoEXT(AttachmentReference xfragmentDensityMapAttachment = {}) : fragmentDensityMapAttachment(xfragmentDensityMapAttachment) {}

	const VkRenderPassFragmentDensityMapCreateInfoEXT& vkHandle() const { return reinterpret_cast<const VkRenderPassFragmentDensityMapCreateInfoEXT&>(*this); }
	VkRenderPassFragmentDensityMapCreateInfoEXT& vkHandle() { return reinterpret_cast<VkRenderPassFragmentDensityMapCreateInfoEXT&>(*this); }

	operator const VkRenderPassFragmentDensityMapCreateInfoEXT&() const { return vkHandle(); };
	operator VkRenderPassFragmentDensityMapCreateInfoEXT&() { return vkHandle(); };
};


struct PhysicalDeviceSubgroupSizeControlFeaturesEXT {
	StructureType sType {StructureType::physicalDeviceSubgroupSizeControlFeaturesEXT};
	void* pNext {};
	Bool32 subgroupSizeControl {};
	Bool32 computeFullSubgroups {};

	constexpr PhysicalDeviceSubgroupSizeControlFeaturesEXT(Bool32 xsubgroupSizeControl = {}, Bool32 xcomputeFullSubgroups = {}) : subgroupSizeControl(xsubgroupSizeControl), computeFullSubgroups(xcomputeFullSubgroups) {}

	const VkPhysicalDeviceSubgroupSizeControlFeaturesEXT& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceSubgroupSizeControlFeaturesEXT&>(*this); }
	VkPhysicalDeviceSubgroupSizeControlFeaturesEXT& vkHandle() { return reinterpret_cast<VkPhysicalDeviceSubgroupSizeControlFeaturesEXT&>(*this); }

	operator const VkPhysicalDeviceSubgroupSizeControlFeaturesEXT&() const { return vkHandle(); };
	operator VkPhysicalDeviceSubgroupSizeControlFeaturesEXT&() { return vkHandle(); };
};

struct PhysicalDeviceSubgroupSizeControlPropertiesEXT {
	StructureType sType {StructureType::physicalDeviceSubgroupSizeControlPropertiesEXT};
	void* pNext {};
	uint32_t minSubgroupSize {};
	uint32_t maxSubgroupSize {};
	uint32_t maxComputeWorkgroupSubgroups {};
	ShaderStageFlags requiredSubgroupSizeStages {};

	const VkPhysicalDeviceSubgroupSizeControlPropertiesEXT& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceSubgroupSizeControlPropertiesEXT&>(*this); }
	VkPhysicalDeviceSubgroupSizeControlPropertiesEXT& vkHandle() { return reinterpret_cast<VkPhysicalDeviceSubgroupSizeControlPropertiesEXT&>(*this); }

	operator const VkPhysicalDeviceSubgroupSizeControlPropertiesEXT&() const { return vkHandle(); };
	operator VkPhysicalDeviceSubgroupSizeControlPropertiesEXT&() { return vkHandle(); };
};

struct PipelineShaderStageRequiredSubgroupSizeCreateInfoEXT {
	StructureType sType {StructureType::pipelineShaderStageRequiredSubgroupSizeCreateInfoEXT};
	void* pNext {};
	uint32_t requiredSubgroupSize {};

	const VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT& vkHandle() const { return reinterpret_cast<const VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT&>(*this); }
	VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT& vkHandle() { return reinterpret_cast<VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT&>(*this); }

	operator const VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT&() const { return vkHandle(); };
	operator VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT&() { return vkHandle(); };
};


struct FragmentShadingRateAttachmentInfoKHR {
	StructureType sType {StructureType::fragmentShadingRateAttachmentInfoKHR};
	const void* pNext {};
	const AttachmentReference2* pFragmentShadingRateAttachment {};
	Extent2D shadingRateAttachmentTexelSize {};

	constexpr FragmentShadingRateAttachmentInfoKHR(const AttachmentReference2* xpFragmentShadingRateAttachment = {}, Extent2D xshadingRateAttachmentTexelSize = {}) : pFragmentShadingRateAttachment(xpFragmentShadingRateAttachment), shadingRateAttachmentTexelSize(xshadingRateAttachmentTexelSize) {}

	const VkFragmentShadingRateAttachmentInfoKHR& vkHandle() const { return reinterpret_cast<const VkFragmentShadingRateAttachmentInfoKHR&>(*this); }
	VkFragmentShadingRateAttachmentInfoKHR& vkHandle() { return reinterpret_cast<VkFragmentShadingRateAttachmentInfoKHR&>(*this); }

	operator const VkFragmentShadingRateAttachmentInfoKHR&() const { return vkHandle(); };
	operator VkFragmentShadingRateAttachmentInfoKHR&() { return vkHandle(); };
};

struct PipelineFragmentShadingRateStateCreateInfoKHR {
	StructureType sType {StructureType::pipelineFragmentShadingRateStateCreateInfoKHR};
	const void* pNext {};
	Extent2D fragmentSize {};
	std::array<FragmentShadingRateCombinerOpKHR, 2> combinerOps {};

	constexpr PipelineFragmentShadingRateStateCreateInfoKHR(Extent2D xfragmentSize = {}, std::array<FragmentShadingRateCombinerOpKHR, 2> xcombinerOps = {}) : fragmentSize(xfragmentSize), combinerOps(xcombinerOps) {}

	const VkPipelineFragmentShadingRateStateCreateInfoKHR& vkHandle() const { return reinterpret_cast<const VkPipelineFragmentShadingRateStateCreateInfoKHR&>(*this); }
	VkPipelineFragmentShadingRateStateCreateInfoKHR& vkHandle() { return reinterpret_cast<VkPipelineFragmentShadingRateStateCreateInfoKHR&>(*this); }

	operator const VkPipelineFragmentShadingRateStateCreateInfoKHR&() const { return vkHandle(); };
	operator VkPipelineFragmentShadingRateStateCreateInfoKHR&() { return vkHandle(); };
};

struct PhysicalDeviceFragmentShadingRateFeaturesKHR {
	StructureType sType {StructureType::physicalDeviceFragmentShadingRateFeaturesKHR};
	void* pNext {};
	Bool32 pipelineFragmentShadingRate {};
	Bool32 primitiveFragmentShadingRate {};
	Bool32 attachmentFragmentShadingRate {};

	constexpr PhysicalDeviceFragmentShadingRateFeaturesKHR(Bool32 xpipelineFragmentShadingRate = {}, Bool32 xprimitiveFragmentShadingRate = {}, Bool32 xattachmentFragmentShadingRate = {}) : pipelineFragmentShadingRate(xpipelineFragmentShadingRate), primitiveFragmentShadingRate(xprimitiveFragmentShadingRate), attachmentFragmentShadingRate(xattachmentFragmentShadingRate) {}

	const VkPhysicalDeviceFragmentShadingRateFeaturesKHR& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceFragmentShadingRateFeaturesKHR&>(*this); }
	VkPhysicalDeviceFragmentShadingRateFeaturesKHR& vkHandle() { return reinterpret_cast<VkPhysicalDeviceFragmentShadingRateFeaturesKHR&>(*this); }

	operator const VkPhysicalDeviceFragmentShadingRateFeaturesKHR&() const { return vkHandle(); };
	operator VkPhysicalDeviceFragmentShadingRateFeaturesKHR&() { return vkHandle(); };
};

struct PhysicalDeviceFragmentShadingRatePropertiesKHR {
	StructureType sType {StructureType::physicalDeviceFragmentShadingRatePropertiesKHR};
	void* pNext {};
	Extent2D minFragmentShadingRateAttachmentTexelSize {};
	Extent2D maxFragmentShadingRateAttachmentTexelSize {};
	uint32_t maxFragmentShadingRateAttachmentTexelSizeAspectRatio {};
	Bool32 primitiveFragmentShadingRateWithMultipleViewports {};
	Bool32 layeredShadingRateAttachments {};
	Bool32 fragmentShadingRateNonTrivialCombinerOps {};
	Extent2D maxFragmentSize {};
	uint32_t maxFragmentSizeAspectRatio {};
	uint32_t maxFragmentShadingRateCoverageSamples {};
	SampleCountBits maxFragmentShadingRateRasterizationSamples {};
	Bool32 fragmentShadingRateWithShaderDepthStencilWrites {};
	Bool32 fragmentShadingRateWithSampleMask {};
	Bool32 fragmentShadingRateWithShaderSampleMask {};
	Bool32 fragmentShadingRateWithConservativeRasterization {};
	Bool32 fragmentShadingRateWithFragmentShaderInterlock {};
	Bool32 fragmentShadingRateWithCustomSampleLocations {};
	Bool32 fragmentShadingRateStrictMultiplyCombiner {};

	const VkPhysicalDeviceFragmentShadingRatePropertiesKHR& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceFragmentShadingRatePropertiesKHR&>(*this); }
	VkPhysicalDeviceFragmentShadingRatePropertiesKHR& vkHandle() { return reinterpret_cast<VkPhysicalDeviceFragmentShadingRatePropertiesKHR&>(*this); }

	operator const VkPhysicalDeviceFragmentShadingRatePropertiesKHR&() const { return vkHandle(); };
	operator VkPhysicalDeviceFragmentShadingRatePropertiesKHR&() { return vkHandle(); };
};

struct PhysicalDeviceFragmentShadingRateKHR {
	StructureType sType {StructureType::physicalDeviceFragmentShadingRateKHR};
	void* pNext {};
	SampleCountFlags sampleCounts {};
	Extent2D fragmentSize {};

	const VkPhysicalDeviceFragmentShadingRateKHR& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceFragmentShadingRateKHR&>(*this); }
	VkPhysicalDeviceFragmentShadingRateKHR& vkHandle() { return reinterpret_cast<VkPhysicalDeviceFragmentShadingRateKHR&>(*this); }

	operator const VkPhysicalDeviceFragmentShadingRateKHR&() const { return vkHandle(); };
	operator VkPhysicalDeviceFragmentShadingRateKHR&() { return vkHandle(); };
};


struct PhysicalDeviceShaderCoreProperties2AMD {
	StructureType sType {StructureType::physicalDeviceShaderCoreProperties2AMD};
	void* pNext {};
	ShaderCorePropertiesFlagsAMD shaderCoreFeatures {};
	uint32_t activeComputeUnitCount {};

	const VkPhysicalDeviceShaderCoreProperties2AMD& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceShaderCoreProperties2AMD&>(*this); }
	VkPhysicalDeviceShaderCoreProperties2AMD& vkHandle() { return reinterpret_cast<VkPhysicalDeviceShaderCoreProperties2AMD&>(*this); }

	operator const VkPhysicalDeviceShaderCoreProperties2AMD&() const { return vkHandle(); };
	operator VkPhysicalDeviceShaderCoreProperties2AMD&() { return vkHandle(); };
};


struct PhysicalDeviceCoherentMemoryFeaturesAMD {
	StructureType sType {StructureType::physicalDeviceCoherentMemoryFeaturesAMD};
	void* pNext {};
	Bool32 deviceCoherentMemory {};

	constexpr PhysicalDeviceCoherentMemoryFeaturesAMD(Bool32 xdeviceCoherentMemory = {}) : deviceCoherentMemory(xdeviceCoherentMemory) {}

	const VkPhysicalDeviceCoherentMemoryFeaturesAMD& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceCoherentMemoryFeaturesAMD&>(*this); }
	VkPhysicalDeviceCoherentMemoryFeaturesAMD& vkHandle() { return reinterpret_cast<VkPhysicalDeviceCoherentMemoryFeaturesAMD&>(*this); }

	operator const VkPhysicalDeviceCoherentMemoryFeaturesAMD&() const { return vkHandle(); };
	operator VkPhysicalDeviceCoherentMemoryFeaturesAMD&() { return vkHandle(); };
};


struct PhysicalDeviceShaderImageAtomicInt64FeaturesEXT {
	StructureType sType {StructureType::physicalDeviceShaderImageAtomicInt64FeaturesEXT};
	void* pNext {};
	Bool32 shaderImageInt64Atomics {};
	Bool32 sparseImageInt64Atomics {};

	constexpr PhysicalDeviceShaderImageAtomicInt64FeaturesEXT(Bool32 xshaderImageInt64Atomics = {}, Bool32 xsparseImageInt64Atomics = {}) : shaderImageInt64Atomics(xshaderImageInt64Atomics), sparseImageInt64Atomics(xsparseImageInt64Atomics) {}

	const VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT&>(*this); }
	VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT& vkHandle() { return reinterpret_cast<VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT&>(*this); }

	operator const VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT&() const { return vkHandle(); };
	operator VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT&() { return vkHandle(); };
};


struct PhysicalDeviceMemoryBudgetPropertiesEXT {
	StructureType sType {StructureType::physicalDeviceMemoryBudgetPropertiesEXT};
	void* pNext {};
	std::array<DeviceSize, maxMemoryHeaps> heapBudget {};
	std::array<DeviceSize, maxMemoryHeaps> heapUsage {};

	const VkPhysicalDeviceMemoryBudgetPropertiesEXT& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceMemoryBudgetPropertiesEXT&>(*this); }
	VkPhysicalDeviceMemoryBudgetPropertiesEXT& vkHandle() { return reinterpret_cast<VkPhysicalDeviceMemoryBudgetPropertiesEXT&>(*this); }

	operator const VkPhysicalDeviceMemoryBudgetPropertiesEXT&() const { return vkHandle(); };
	operator VkPhysicalDeviceMemoryBudgetPropertiesEXT&() { return vkHandle(); };
};


struct PhysicalDeviceMemoryPriorityFeaturesEXT {
	StructureType sType {StructureType::physicalDeviceMemoryPriorityFeaturesEXT};
	void* pNext {};
	Bool32 memoryPriority {};

	constexpr PhysicalDeviceMemoryPriorityFeaturesEXT(Bool32 xmemoryPriority = {}) : memoryPriority(xmemoryPriority) {}

	const VkPhysicalDeviceMemoryPriorityFeaturesEXT& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceMemoryPriorityFeaturesEXT&>(*this); }
	VkPhysicalDeviceMemoryPriorityFeaturesEXT& vkHandle() { return reinterpret_cast<VkPhysicalDeviceMemoryPriorityFeaturesEXT&>(*this); }

	operator const VkPhysicalDeviceMemoryPriorityFeaturesEXT&() const { return vkHandle(); };
	operator VkPhysicalDeviceMemoryPriorityFeaturesEXT&() { return vkHandle(); };
};

struct MemoryPriorityAllocateInfoEXT {
	StructureType sType {StructureType::memoryPriorityAllocateInfoEXT};
	const void* pNext {};
	float priority {};

	constexpr MemoryPriorityAllocateInfoEXT(float xpriority = {}) : priority(xpriority) {}

	const VkMemoryPriorityAllocateInfoEXT& vkHandle() const { return reinterpret_cast<const VkMemoryPriorityAllocateInfoEXT&>(*this); }
	VkMemoryPriorityAllocateInfoEXT& vkHandle() { return reinterpret_cast<VkMemoryPriorityAllocateInfoEXT&>(*this); }

	operator const VkMemoryPriorityAllocateInfoEXT&() const { return vkHandle(); };
	operator VkMemoryPriorityAllocateInfoEXT&() { return vkHandle(); };
};


struct SurfaceProtectedCapabilitiesKHR {
	StructureType sType {StructureType::surfaceProtectedCapabilitiesKHR};
	const void* pNext {};
	Bool32 supportsProtected {};

	constexpr SurfaceProtectedCapabilitiesKHR(Bool32 xsupportsProtected = {}) : supportsProtected(xsupportsProtected) {}

	const VkSurfaceProtectedCapabilitiesKHR& vkHandle() const { return reinterpret_cast<const VkSurfaceProtectedCapabilitiesKHR&>(*this); }
	VkSurfaceProtectedCapabilitiesKHR& vkHandle() { return reinterpret_cast<VkSurfaceProtectedCapabilitiesKHR&>(*this); }

	operator const VkSurfaceProtectedCapabilitiesKHR&() const { return vkHandle(); };
	operator VkSurfaceProtectedCapabilitiesKHR&() { return vkHandle(); };
};


struct PhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV {
	StructureType sType {StructureType::physicalDeviceDedicatedAllocationImageAliasingFeaturesNV};
	void* pNext {};
	Bool32 dedicatedAllocationImageAliasing {};

	constexpr PhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV(Bool32 xdedicatedAllocationImageAliasing = {}) : dedicatedAllocationImageAliasing(xdedicatedAllocationImageAliasing) {}

	const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV&>(*this); }
	VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV& vkHandle() { return reinterpret_cast<VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV&>(*this); }

	operator const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV&() const { return vkHandle(); };
	operator VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV&() { return vkHandle(); };
};


struct PhysicalDeviceBufferDeviceAddressFeaturesEXT {
	StructureType sType {StructureType::physicalDeviceBufferDeviceAddressFeaturesEXT};
	void* pNext {};
	Bool32 bufferDeviceAddress {};
	Bool32 bufferDeviceAddressCaptureReplay {};
	Bool32 bufferDeviceAddressMultiDevice {};

	constexpr PhysicalDeviceBufferDeviceAddressFeaturesEXT(Bool32 xbufferDeviceAddress = {}, Bool32 xbufferDeviceAddressCaptureReplay = {}, Bool32 xbufferDeviceAddressMultiDevice = {}) : bufferDeviceAddress(xbufferDeviceAddress), bufferDeviceAddressCaptureReplay(xbufferDeviceAddressCaptureReplay), bufferDeviceAddressMultiDevice(xbufferDeviceAddressMultiDevice) {}

	const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT&>(*this); }
	VkPhysicalDeviceBufferDeviceAddressFeaturesEXT& vkHandle() { return reinterpret_cast<VkPhysicalDeviceBufferDeviceAddressFeaturesEXT&>(*this); }

	operator const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT&() const { return vkHandle(); };
	operator VkPhysicalDeviceBufferDeviceAddressFeaturesEXT&() { return vkHandle(); };
};

struct BufferDeviceAddressCreateInfoEXT {
	StructureType sType {StructureType::bufferDeviceAddressCreateInfoEXT};
	const void* pNext {};
	DeviceAddress deviceAddress {};

	constexpr BufferDeviceAddressCreateInfoEXT(DeviceAddress xdeviceAddress = {}) : deviceAddress(xdeviceAddress) {}

	const VkBufferDeviceAddressCreateInfoEXT& vkHandle() const { return reinterpret_cast<const VkBufferDeviceAddressCreateInfoEXT&>(*this); }
	VkBufferDeviceAddressCreateInfoEXT& vkHandle() { return reinterpret_cast<VkBufferDeviceAddressCreateInfoEXT&>(*this); }

	operator const VkBufferDeviceAddressCreateInfoEXT&() const { return vkHandle(); };
	operator VkBufferDeviceAddressCreateInfoEXT&() { return vkHandle(); };
};


struct PhysicalDeviceToolPropertiesEXT {
	StructureType sType {StructureType::physicalDeviceToolPropertiesEXT};
	void* pNext {};
	std::array<char, maxExtensionNameSize> name {};
	std::array<char, maxExtensionNameSize> version {};
	ToolPurposeFlagsEXT purposes {};
	std::array<char, maxDescriptionSize> description {};
	std::array<char, maxExtensionNameSize> layer {};

	const VkPhysicalDeviceToolPropertiesEXT& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceToolPropertiesEXT&>(*this); }
	VkPhysicalDeviceToolPropertiesEXT& vkHandle() { return reinterpret_cast<VkPhysicalDeviceToolPropertiesEXT&>(*this); }

	operator const VkPhysicalDeviceToolPropertiesEXT&() const { return vkHandle(); };
	operator VkPhysicalDeviceToolPropertiesEXT&() { return vkHandle(); };
};


struct ValidationFeaturesEXT {
	StructureType sType {StructureType::validationFeaturesEXT};
	const void* pNext {};
	uint32_t enabledValidationFeatureCount {};
	const ValidationFeatureEnableEXT* pEnabledValidationFeatures {};
	uint32_t disabledValidationFeatureCount {};
	const ValidationFeatureDisableEXT* pDisabledValidationFeatures {};

	constexpr ValidationFeaturesEXT(uint32_t xenabledValidationFeatureCount = {}, const ValidationFeatureEnableEXT* xpEnabledValidationFeatures = {}, uint32_t xdisabledValidationFeatureCount = {}, const ValidationFeatureDisableEXT* xpDisabledValidationFeatures = {}) : enabledValidationFeatureCount(xenabledValidationFeatureCount), pEnabledValidationFeatures(xpEnabledValidationFeatures), disabledValidationFeatureCount(xdisabledValidationFeatureCount), pDisabledValidationFeatures(xpDisabledValidationFeatures) {}

	const VkValidationFeaturesEXT& vkHandle() const { return reinterpret_cast<const VkValidationFeaturesEXT&>(*this); }
	VkValidationFeaturesEXT& vkHandle() { return reinterpret_cast<VkValidationFeaturesEXT&>(*this); }

	operator const VkValidationFeaturesEXT&() const { return vkHandle(); };
	operator VkValidationFeaturesEXT&() { return vkHandle(); };
};


struct CooperativeMatrixPropertiesNV {
	StructureType sType {StructureType::cooperativeMatrixPropertiesNV};
	void* pNext {};
	uint32_t MSize {};
	uint32_t NSize {};
	uint32_t KSize {};
	ComponentTypeNV AType {};
	ComponentTypeNV BType {};
	ComponentTypeNV CType {};
	ComponentTypeNV DType {};
	ScopeNV scope {};

	constexpr CooperativeMatrixPropertiesNV(uint32_t xMSize = {}, uint32_t xNSize = {}, uint32_t xKSize = {}, ComponentTypeNV xAType = {}, ComponentTypeNV xBType = {}, ComponentTypeNV xCType = {}, ComponentTypeNV xDType = {}, ScopeNV xscope = {}) : MSize(xMSize), NSize(xNSize), KSize(xKSize), AType(xAType), BType(xBType), CType(xCType), DType(xDType), scope(xscope) {}

	const VkCooperativeMatrixPropertiesNV& vkHandle() const { return reinterpret_cast<const VkCooperativeMatrixPropertiesNV&>(*this); }
	VkCooperativeMatrixPropertiesNV& vkHandle() { return reinterpret_cast<VkCooperativeMatrixPropertiesNV&>(*this); }

	operator const VkCooperativeMatrixPropertiesNV&() const { return vkHandle(); };
	operator VkCooperativeMatrixPropertiesNV&() { return vkHandle(); };
};

struct PhysicalDeviceCooperativeMatrixFeaturesNV {
	StructureType sType {StructureType::physicalDeviceCooperativeMatrixFeaturesNV};
	void* pNext {};
	Bool32 cooperativeMatrix {};
	Bool32 cooperativeMatrixRobustBufferAccess {};

	constexpr PhysicalDeviceCooperativeMatrixFeaturesNV(Bool32 xcooperativeMatrix = {}, Bool32 xcooperativeMatrixRobustBufferAccess = {}) : cooperativeMatrix(xcooperativeMatrix), cooperativeMatrixRobustBufferAccess(xcooperativeMatrixRobustBufferAccess) {}

	const VkPhysicalDeviceCooperativeMatrixFeaturesNV& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceCooperativeMatrixFeaturesNV&>(*this); }
	VkPhysicalDeviceCooperativeMatrixFeaturesNV& vkHandle() { return reinterpret_cast<VkPhysicalDeviceCooperativeMatrixFeaturesNV&>(*this); }

	operator const VkPhysicalDeviceCooperativeMatrixFeaturesNV&() const { return vkHandle(); };
	operator VkPhysicalDeviceCooperativeMatrixFeaturesNV&() { return vkHandle(); };
};

struct PhysicalDeviceCooperativeMatrixPropertiesNV {
	StructureType sType {StructureType::physicalDeviceCooperativeMatrixPropertiesNV};
	void* pNext {};
	ShaderStageFlags cooperativeMatrixSupportedStages {};

	const VkPhysicalDeviceCooperativeMatrixPropertiesNV& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceCooperativeMatrixPropertiesNV&>(*this); }
	VkPhysicalDeviceCooperativeMatrixPropertiesNV& vkHandle() { return reinterpret_cast<VkPhysicalDeviceCooperativeMatrixPropertiesNV&>(*this); }

	operator const VkPhysicalDeviceCooperativeMatrixPropertiesNV&() const { return vkHandle(); };
	operator VkPhysicalDeviceCooperativeMatrixPropertiesNV&() { return vkHandle(); };
};


struct PhysicalDeviceCoverageReductionModeFeaturesNV {
	StructureType sType {StructureType::physicalDeviceCoverageReductionModeFeaturesNV};
	void* pNext {};
	Bool32 coverageReductionMode {};

	constexpr PhysicalDeviceCoverageReductionModeFeaturesNV(Bool32 xcoverageReductionMode = {}) : coverageReductionMode(xcoverageReductionMode) {}

	const VkPhysicalDeviceCoverageReductionModeFeaturesNV& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceCoverageReductionModeFeaturesNV&>(*this); }
	VkPhysicalDeviceCoverageReductionModeFeaturesNV& vkHandle() { return reinterpret_cast<VkPhysicalDeviceCoverageReductionModeFeaturesNV&>(*this); }

	operator const VkPhysicalDeviceCoverageReductionModeFeaturesNV&() const { return vkHandle(); };
	operator VkPhysicalDeviceCoverageReductionModeFeaturesNV&() { return vkHandle(); };
};

struct PipelineCoverageReductionStateCreateInfoNV {
	StructureType sType {StructureType::pipelineCoverageReductionStateCreateInfoNV};
	const void* pNext {};
	PipelineCoverageReductionStateCreateFlagsNV flags {};
	CoverageReductionModeNV coverageReductionMode {};

	constexpr PipelineCoverageReductionStateCreateInfoNV(PipelineCoverageReductionStateCreateFlagsNV xflags = {}, CoverageReductionModeNV xcoverageReductionMode = {}) : flags(xflags), coverageReductionMode(xcoverageReductionMode) {}

	const VkPipelineCoverageReductionStateCreateInfoNV& vkHandle() const { return reinterpret_cast<const VkPipelineCoverageReductionStateCreateInfoNV&>(*this); }
	VkPipelineCoverageReductionStateCreateInfoNV& vkHandle() { return reinterpret_cast<VkPipelineCoverageReductionStateCreateInfoNV&>(*this); }

	operator const VkPipelineCoverageReductionStateCreateInfoNV&() const { return vkHandle(); };
	operator VkPipelineCoverageReductionStateCreateInfoNV&() { return vkHandle(); };
};

struct FramebufferMixedSamplesCombinationNV {
	StructureType sType {StructureType::framebufferMixedSamplesCombinationNV};
	void* pNext {};
	CoverageReductionModeNV coverageReductionMode {};
	SampleCountBits rasterizationSamples {};
	SampleCountFlags depthStencilSamples {};
	SampleCountFlags colorSamples {};

	const VkFramebufferMixedSamplesCombinationNV& vkHandle() const { return reinterpret_cast<const VkFramebufferMixedSamplesCombinationNV&>(*this); }
	VkFramebufferMixedSamplesCombinationNV& vkHandle() { return reinterpret_cast<VkFramebufferMixedSamplesCombinationNV&>(*this); }

	operator const VkFramebufferMixedSamplesCombinationNV&() const { return vkHandle(); };
	operator VkFramebufferMixedSamplesCombinationNV&() { return vkHandle(); };
};


struct PhysicalDeviceFragmentShaderInterlockFeaturesEXT {
	StructureType sType {StructureType::physicalDeviceFragmentShaderInterlockFeaturesEXT};
	void* pNext {};
	Bool32 fragmentShaderSampleInterlock {};
	Bool32 fragmentShaderPixelInterlock {};
	Bool32 fragmentShaderShadingRateInterlock {};

	constexpr PhysicalDeviceFragmentShaderInterlockFeaturesEXT(Bool32 xfragmentShaderSampleInterlock = {}, Bool32 xfragmentShaderPixelInterlock = {}, Bool32 xfragmentShaderShadingRateInterlock = {}) : fragmentShaderSampleInterlock(xfragmentShaderSampleInterlock), fragmentShaderPixelInterlock(xfragmentShaderPixelInterlock), fragmentShaderShadingRateInterlock(xfragmentShaderShadingRateInterlock) {}

	const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT&>(*this); }
	VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT& vkHandle() { return reinterpret_cast<VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT&>(*this); }

	operator const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT&() const { return vkHandle(); };
	operator VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT&() { return vkHandle(); };
};


struct PhysicalDeviceYcbcrImageArraysFeaturesEXT {
	StructureType sType {StructureType::physicalDeviceYcbcrImageArraysFeaturesEXT};
	void* pNext {};
	Bool32 ycbcrImageArrays {};

	constexpr PhysicalDeviceYcbcrImageArraysFeaturesEXT(Bool32 xycbcrImageArrays = {}) : ycbcrImageArrays(xycbcrImageArrays) {}

	const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT&>(*this); }
	VkPhysicalDeviceYcbcrImageArraysFeaturesEXT& vkHandle() { return reinterpret_cast<VkPhysicalDeviceYcbcrImageArraysFeaturesEXT&>(*this); }

	operator const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT&() const { return vkHandle(); };
	operator VkPhysicalDeviceYcbcrImageArraysFeaturesEXT&() { return vkHandle(); };
};



#ifdef VK_USE_PLATFORM_WIN32_KHR
struct SurfaceFullScreenExclusiveInfoEXT {
	StructureType sType {StructureType::surfaceFullScreenExclusiveInfoEXT};
	void* pNext {};
	FullScreenExclusiveEXT fullScreenExclusive {};

	constexpr SurfaceFullScreenExclusiveInfoEXT(FullScreenExclusiveEXT xfullScreenExclusive = {}) : fullScreenExclusive(xfullScreenExclusive) {}

	const VkSurfaceFullScreenExclusiveInfoEXT& vkHandle() const { return reinterpret_cast<const VkSurfaceFullScreenExclusiveInfoEXT&>(*this); }
	VkSurfaceFullScreenExclusiveInfoEXT& vkHandle() { return reinterpret_cast<VkSurfaceFullScreenExclusiveInfoEXT&>(*this); }

	operator const VkSurfaceFullScreenExclusiveInfoEXT&() const { return vkHandle(); };
	operator VkSurfaceFullScreenExclusiveInfoEXT&() { return vkHandle(); };
};

struct SurfaceCapabilitiesFullScreenExclusiveEXT {
	StructureType sType {StructureType::surfaceCapabilitiesFullScreenExclusiveEXT};
	void* pNext {};
	Bool32 fullScreenExclusiveSupported {};

	constexpr SurfaceCapabilitiesFullScreenExclusiveEXT(Bool32 xfullScreenExclusiveSupported = {}) : fullScreenExclusiveSupported(xfullScreenExclusiveSupported) {}

	const VkSurfaceCapabilitiesFullScreenExclusiveEXT& vkHandle() const { return reinterpret_cast<const VkSurfaceCapabilitiesFullScreenExclusiveEXT&>(*this); }
	VkSurfaceCapabilitiesFullScreenExclusiveEXT& vkHandle() { return reinterpret_cast<VkSurfaceCapabilitiesFullScreenExclusiveEXT&>(*this); }

	operator const VkSurfaceCapabilitiesFullScreenExclusiveEXT&() const { return vkHandle(); };
	operator VkSurfaceCapabilitiesFullScreenExclusiveEXT&() { return vkHandle(); };
};

struct SurfaceFullScreenExclusiveWin32InfoEXT {
	StructureType sType {StructureType::surfaceFullScreenExclusiveWin32InfoEXT};
	const void* pNext {};
	HMONITOR hmonitor {};

	constexpr SurfaceFullScreenExclusiveWin32InfoEXT(HMONITOR xhmonitor = {}) : hmonitor(xhmonitor) {}

	const VkSurfaceFullScreenExclusiveWin32InfoEXT& vkHandle() const { return reinterpret_cast<const VkSurfaceFullScreenExclusiveWin32InfoEXT&>(*this); }
	VkSurfaceFullScreenExclusiveWin32InfoEXT& vkHandle() { return reinterpret_cast<VkSurfaceFullScreenExclusiveWin32InfoEXT&>(*this); }

	operator const VkSurfaceFullScreenExclusiveWin32InfoEXT&() const { return vkHandle(); };
	operator VkSurfaceFullScreenExclusiveWin32InfoEXT&() { return vkHandle(); };
};


#endif //VK_USE_PLATFORM_WIN32_KHR

struct HeadlessSurfaceCreateInfoEXT {
	StructureType sType {StructureType::headlessSurfaceCreateInfoEXT};
	const void* pNext {};
	HeadlessSurfaceCreateFlagsEXT flags {};

	constexpr HeadlessSurfaceCreateInfoEXT(HeadlessSurfaceCreateFlagsEXT xflags = {}) : flags(xflags) {}

	const VkHeadlessSurfaceCreateInfoEXT& vkHandle() const { return reinterpret_cast<const VkHeadlessSurfaceCreateInfoEXT&>(*this); }
	VkHeadlessSurfaceCreateInfoEXT& vkHandle() { return reinterpret_cast<VkHeadlessSurfaceCreateInfoEXT&>(*this); }

	operator const VkHeadlessSurfaceCreateInfoEXT&() const { return vkHandle(); };
	operator VkHeadlessSurfaceCreateInfoEXT&() { return vkHandle(); };
};


struct PhysicalDeviceLineRasterizationFeaturesEXT {
	StructureType sType {StructureType::physicalDeviceLineRasterizationFeaturesEXT};
	void* pNext {};
	Bool32 rectangularLines {};
	Bool32 bresenhamLines {};
	Bool32 smoothLines {};
	Bool32 stippledRectangularLines {};
	Bool32 stippledBresenhamLines {};
	Bool32 stippledSmoothLines {};

	constexpr PhysicalDeviceLineRasterizationFeaturesEXT(Bool32 xrectangularLines = {}, Bool32 xbresenhamLines = {}, Bool32 xsmoothLines = {}, Bool32 xstippledRectangularLines = {}, Bool32 xstippledBresenhamLines = {}, Bool32 xstippledSmoothLines = {}) : rectangularLines(xrectangularLines), bresenhamLines(xbresenhamLines), smoothLines(xsmoothLines), stippledRectangularLines(xstippledRectangularLines), stippledBresenhamLines(xstippledBresenhamLines), stippledSmoothLines(xstippledSmoothLines) {}

	const VkPhysicalDeviceLineRasterizationFeaturesEXT& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceLineRasterizationFeaturesEXT&>(*this); }
	VkPhysicalDeviceLineRasterizationFeaturesEXT& vkHandle() { return reinterpret_cast<VkPhysicalDeviceLineRasterizationFeaturesEXT&>(*this); }

	operator const VkPhysicalDeviceLineRasterizationFeaturesEXT&() const { return vkHandle(); };
	operator VkPhysicalDeviceLineRasterizationFeaturesEXT&() { return vkHandle(); };
};

struct PhysicalDeviceLineRasterizationPropertiesEXT {
	StructureType sType {StructureType::physicalDeviceLineRasterizationPropertiesEXT};
	void* pNext {};
	uint32_t lineSubPixelPrecisionBits {};

	const VkPhysicalDeviceLineRasterizationPropertiesEXT& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceLineRasterizationPropertiesEXT&>(*this); }
	VkPhysicalDeviceLineRasterizationPropertiesEXT& vkHandle() { return reinterpret_cast<VkPhysicalDeviceLineRasterizationPropertiesEXT&>(*this); }

	operator const VkPhysicalDeviceLineRasterizationPropertiesEXT&() const { return vkHandle(); };
	operator VkPhysicalDeviceLineRasterizationPropertiesEXT&() { return vkHandle(); };
};

struct PipelineRasterizationLineStateCreateInfoEXT {
	StructureType sType {StructureType::pipelineRasterizationLineStateCreateInfoEXT};
	const void* pNext {};
	LineRasterizationModeEXT lineRasterizationMode {};
	Bool32 stippledLineEnable {};
	uint32_t lineStippleFactor {};
	uint16_t lineStipplePattern {};

	constexpr PipelineRasterizationLineStateCreateInfoEXT(LineRasterizationModeEXT xlineRasterizationMode = {}, Bool32 xstippledLineEnable = {}, uint32_t xlineStippleFactor = {}, uint16_t xlineStipplePattern = {}) : lineRasterizationMode(xlineRasterizationMode), stippledLineEnable(xstippledLineEnable), lineStippleFactor(xlineStippleFactor), lineStipplePattern(xlineStipplePattern) {}

	const VkPipelineRasterizationLineStateCreateInfoEXT& vkHandle() const { return reinterpret_cast<const VkPipelineRasterizationLineStateCreateInfoEXT&>(*this); }
	VkPipelineRasterizationLineStateCreateInfoEXT& vkHandle() { return reinterpret_cast<VkPipelineRasterizationLineStateCreateInfoEXT&>(*this); }

	operator const VkPipelineRasterizationLineStateCreateInfoEXT&() const { return vkHandle(); };
	operator VkPipelineRasterizationLineStateCreateInfoEXT&() { return vkHandle(); };
};


struct PhysicalDeviceShaderAtomicFloatFeaturesEXT {
	StructureType sType {StructureType::physicalDeviceShaderAtomicFloatFeaturesEXT};
	void* pNext {};
	Bool32 shaderBufferFloat32Atomics {};
	Bool32 shaderBufferFloat32AtomicAdd {};
	Bool32 shaderBufferFloat64Atomics {};
	Bool32 shaderBufferFloat64AtomicAdd {};
	Bool32 shaderSharedFloat32Atomics {};
	Bool32 shaderSharedFloat32AtomicAdd {};
	Bool32 shaderSharedFloat64Atomics {};
	Bool32 shaderSharedFloat64AtomicAdd {};
	Bool32 shaderImageFloat32Atomics {};
	Bool32 shaderImageFloat32AtomicAdd {};
	Bool32 sparseImageFloat32Atomics {};
	Bool32 sparseImageFloat32AtomicAdd {};

	constexpr PhysicalDeviceShaderAtomicFloatFeaturesEXT(Bool32 xshaderBufferFloat32Atomics = {}, Bool32 xshaderBufferFloat32AtomicAdd = {}, Bool32 xshaderBufferFloat64Atomics = {}, Bool32 xshaderBufferFloat64AtomicAdd = {}, Bool32 xshaderSharedFloat32Atomics = {}, Bool32 xshaderSharedFloat32AtomicAdd = {}, Bool32 xshaderSharedFloat64Atomics = {}, Bool32 xshaderSharedFloat64AtomicAdd = {}, Bool32 xshaderImageFloat32Atomics = {}, Bool32 xshaderImageFloat32AtomicAdd = {}, Bool32 xsparseImageFloat32Atomics = {}, Bool32 xsparseImageFloat32AtomicAdd = {}) : shaderBufferFloat32Atomics(xshaderBufferFloat32Atomics), shaderBufferFloat32AtomicAdd(xshaderBufferFloat32AtomicAdd), shaderBufferFloat64Atomics(xshaderBufferFloat64Atomics), shaderBufferFloat64AtomicAdd(xshaderBufferFloat64AtomicAdd), shaderSharedFloat32Atomics(xshaderSharedFloat32Atomics), shaderSharedFloat32AtomicAdd(xshaderSharedFloat32AtomicAdd), shaderSharedFloat64Atomics(xshaderSharedFloat64Atomics), shaderSharedFloat64AtomicAdd(xshaderSharedFloat64AtomicAdd), shaderImageFloat32Atomics(xshaderImageFloat32Atomics), shaderImageFloat32AtomicAdd(xshaderImageFloat32AtomicAdd), sparseImageFloat32Atomics(xsparseImageFloat32Atomics), sparseImageFloat32AtomicAdd(xsparseImageFloat32AtomicAdd) {}

	const VkPhysicalDeviceShaderAtomicFloatFeaturesEXT& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceShaderAtomicFloatFeaturesEXT&>(*this); }
	VkPhysicalDeviceShaderAtomicFloatFeaturesEXT& vkHandle() { return reinterpret_cast<VkPhysicalDeviceShaderAtomicFloatFeaturesEXT&>(*this); }

	operator const VkPhysicalDeviceShaderAtomicFloatFeaturesEXT&() const { return vkHandle(); };
	operator VkPhysicalDeviceShaderAtomicFloatFeaturesEXT&() { return vkHandle(); };
};


struct PhysicalDeviceIndexTypeUint8FeaturesEXT {
	StructureType sType {StructureType::physicalDeviceIndexTypeUint8FeaturesEXT};
	void* pNext {};
	Bool32 indexTypeUint8 {};

	constexpr PhysicalDeviceIndexTypeUint8FeaturesEXT(Bool32 xindexTypeUint8 = {}) : indexTypeUint8(xindexTypeUint8) {}

	const VkPhysicalDeviceIndexTypeUint8FeaturesEXT& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceIndexTypeUint8FeaturesEXT&>(*this); }
	VkPhysicalDeviceIndexTypeUint8FeaturesEXT& vkHandle() { return reinterpret_cast<VkPhysicalDeviceIndexTypeUint8FeaturesEXT&>(*this); }

	operator const VkPhysicalDeviceIndexTypeUint8FeaturesEXT&() const { return vkHandle(); };
	operator VkPhysicalDeviceIndexTypeUint8FeaturesEXT&() { return vkHandle(); };
};


struct PhysicalDeviceExtendedDynamicStateFeaturesEXT {
	StructureType sType {StructureType::physicalDeviceExtendedDynamicStateFeaturesEXT};
	void* pNext {};
	Bool32 extendedDynamicState {};

	constexpr PhysicalDeviceExtendedDynamicStateFeaturesEXT(Bool32 xextendedDynamicState = {}) : extendedDynamicState(xextendedDynamicState) {}

	const VkPhysicalDeviceExtendedDynamicStateFeaturesEXT& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceExtendedDynamicStateFeaturesEXT&>(*this); }
	VkPhysicalDeviceExtendedDynamicStateFeaturesEXT& vkHandle() { return reinterpret_cast<VkPhysicalDeviceExtendedDynamicStateFeaturesEXT&>(*this); }

	operator const VkPhysicalDeviceExtendedDynamicStateFeaturesEXT&() const { return vkHandle(); };
	operator VkPhysicalDeviceExtendedDynamicStateFeaturesEXT&() { return vkHandle(); };
};


struct PhysicalDevicePipelineExecutablePropertiesFeaturesKHR {
	StructureType sType {StructureType::physicalDevicePipelineExecutablePropertiesFeaturesKHR};
	void* pNext {};
	Bool32 pipelineExecutableInfo {};

	constexpr PhysicalDevicePipelineExecutablePropertiesFeaturesKHR(Bool32 xpipelineExecutableInfo = {}) : pipelineExecutableInfo(xpipelineExecutableInfo) {}

	const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR& vkHandle() const { return reinterpret_cast<const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR&>(*this); }
	VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR& vkHandle() { return reinterpret_cast<VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR&>(*this); }

	operator const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR&() const { return vkHandle(); };
	operator VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR&() { return vkHandle(); };
};

struct PipelineInfoKHR {
	StructureType sType {StructureType::pipelineInfoKHR};
	const void* pNext {};
	Pipeline pipeline {};

	constexpr PipelineInfoKHR(Pipeline xpipeline = {}) : pipeline(xpipeline) {}

	const VkPipelineInfoKHR& vkHandle() const { return reinterpret_cast<const VkPipelineInfoKHR&>(*this); }
	VkPipelineInfoKHR& vkHandle() { return reinterpret_cast<VkPipelineInfoKHR&>(*this); }

	operator const VkPipelineInfoKHR&() const { return vkHandle(); };
	operator VkPipelineInfoKHR&() { return vkHandle(); };
};

struct PipelineExecutablePropertiesKHR {
	StructureType sType {StructureType::pipelineExecutablePropertiesKHR};
	void* pNext {};
	ShaderStageFlags stages {};
	std::array<char, maxDescriptionSize> name {};
	std::array<char, maxDescriptionSize> description {};
	uint32_t subgroupSize {};

	const VkPipelineExecutablePropertiesKHR& vkHandle() const { return reinterpret_cast<const VkPipelineExecutablePropertiesKHR&>(*this); }
	VkPipelineExecutablePropertiesKHR& vkHandle() { return reinterpret_cast<VkPipelineExecutablePropertiesKHR&>(*this); }

	operator const VkPipelineExecutablePropertiesKHR&() const { return vkHandle(); };
	operator VkPipelineExecutablePropertiesKHR&() { return vkHandle(); };
};

struct PipelineExecutableInfoKHR {
	StructureType sType {StructureType::pipelineExecutableInfoKHR};
	const void* pNext {};
	Pipeline pipeline {};
	uint32_t executableIndex {};

	constexpr PipelineExecutableInfoKHR(Pipeline xpipeline = {}, uint32_t xexecutableIndex = {}) : pipeline(xpipeline), executableIndex(xexecutableIndex) {}

	const VkPipelineExecutableInfoKHR& vkHandle() const { return reinterpret_cast<const VkPipelineExecutableInfoKHR&>(*this); }
	VkPipelineExecutableInfoKHR& vkHandle() { return reinterpret_cast<VkPipelineExecutableInfoKHR&>(*this); }

	operator const VkPipelineExecutableInfoKHR&() const { return vkHandle(); };
	operator VkPipelineExecutableInfoKHR&() { return vkHandle(); };
};

union PipelineExecutableStatisticValueKHR {
	Bool32 b32 {};
	int64_t i64;
	uint64_t u64;
	double f64;

	const VkPipelineExecutableStatisticValueKHR& vkHandle() const { return reinterpret_cast<const VkPipelineExecutableStatisticValueKHR&>(*this); }
	VkPipelineExecutableStatisticValueKHR& vkHandle() { return reinterpret_cast<VkPipelineExecutableStatisticValueKHR&>(*this); }

	operator const VkPipelineExecutableStatisticValueKHR&() const { return vkHandle(); };
	operator VkPipelineExecutableStatisticValueKHR&() { return vkHandle(); };
};

struct PipelineExecutableStatisticKHR {
	StructureType sType {StructureType::pipelineExecutableStatisticKHR};
	void* pNext {};
	std::array<char, maxDescriptionSize> name {};
	std::array<char, maxDescriptionSize> description {};
	PipelineExecutableStatisticFormatKHR format {};
	PipelineExecutableStatisticValueKHR value {};

	const VkPipelineExecutableStatisticKHR& vkHandle() const { return reinterpret_cast<const VkPipelineExecutableStatisticKHR&>(*this); }
	VkPipelineExecutableStatisticKHR& vkHandle() { return reinterpret_cast<VkPipelineExecutableStatisticKHR&>(*this); }

	operator const VkPipelineExecutableStatisticKHR&() const { return vkHandle(); };
	operator VkPipelineExecutableStatisticKHR&() { return vkHandle(); };
};

struct PipelineExecutableInternalRepresentationKHR {
	StructureType sType {StructureType::pipelineExecutableInternalRepresentationKHR};
	void* pNext {};
	std::array<char, maxDescriptionSize> name {};
	std::array<char, maxDescriptionSize> description {};
	Bool32 isText {};
	size_t dataSize {};
	void* pData {};

	const VkPipelineExecutableInternalRepresentationKHR& vkHandle() const { return reinterpret_cast<const VkPipelineExecutableInternalRepresentationKHR&>(*this); }
	VkPipelineExecutableInternalRepresentationKHR& vkHandle() { return reinterpret_cast<VkPipelineExecutableInternalRepresentationKHR&>(*this); }

	operator const VkPipelineExecutableInternalRepresentationKHR&() const { return vkHandle(); };
	operator VkPipelineExecutableInternalRepresentationKHR&() { return vkHandle(); };
};


struct PhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT {
	StructureType sType {StructureType::physicalDeviceShaderDemoteToHelperInvocationFeaturesEXT};
	void* pNext {};
	Bool32 shaderDemoteToHelperInvocation {};

	constexpr PhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT(Bool32 xshaderDemoteToHelperInvocation = {}) : shaderDemoteToHelperInvocation(xshaderDemoteToHelperInvocation) {}

	const VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT&>(*this); }
	VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT& vkHandle() { return reinterpret_cast<VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT&>(*this); }

	operator const VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT&() const { return vkHandle(); };
	operator VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT&() { return vkHandle(); };
};


struct PhysicalDeviceDeviceGeneratedCommandsPropertiesNV {
	StructureType sType {StructureType::physicalDeviceDeviceGeneratedCommandsPropertiesNV};
	void* pNext {};
	uint32_t maxGraphicsShaderGroupCount {};
	uint32_t maxIndirectSequenceCount {};
	uint32_t maxIndirectCommandsTokenCount {};
	uint32_t maxIndirectCommandsStreamCount {};
	uint32_t maxIndirectCommandsTokenOffset {};
	uint32_t maxIndirectCommandsStreamStride {};
	uint32_t minSequencesCountBufferOffsetAlignment {};
	uint32_t minSequencesIndexBufferOffsetAlignment {};
	uint32_t minIndirectCommandsBufferOffsetAlignment {};

	const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV&>(*this); }
	VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV& vkHandle() { return reinterpret_cast<VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV&>(*this); }

	operator const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV&() const { return vkHandle(); };
	operator VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV&() { return vkHandle(); };
};

struct PhysicalDeviceDeviceGeneratedCommandsFeaturesNV {
	StructureType sType {StructureType::physicalDeviceDeviceGeneratedCommandsFeaturesNV};
	void* pNext {};
	Bool32 deviceGeneratedCommands {};

	constexpr PhysicalDeviceDeviceGeneratedCommandsFeaturesNV(Bool32 xdeviceGeneratedCommands = {}) : deviceGeneratedCommands(xdeviceGeneratedCommands) {}

	const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV&>(*this); }
	VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV& vkHandle() { return reinterpret_cast<VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV&>(*this); }

	operator const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV&() const { return vkHandle(); };
	operator VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV&() { return vkHandle(); };
};

struct GraphicsShaderGroupCreateInfoNV {
	StructureType sType {StructureType::graphicsShaderGroupCreateInfoNV};
	const void* pNext {};
	uint32_t stageCount {};
	const PipelineShaderStageCreateInfo* pStages {};
	const PipelineVertexInputStateCreateInfo* pVertexInputState {};
	const PipelineTessellationStateCreateInfo* pTessellationState {};

	constexpr GraphicsShaderGroupCreateInfoNV(uint32_t xstageCount = {}, const PipelineShaderStageCreateInfo* xpStages = {}, const PipelineVertexInputStateCreateInfo* xpVertexInputState = {}, const PipelineTessellationStateCreateInfo* xpTessellationState = {}) : stageCount(xstageCount), pStages(xpStages), pVertexInputState(xpVertexInputState), pTessellationState(xpTessellationState) {}

	const VkGraphicsShaderGroupCreateInfoNV& vkHandle() const { return reinterpret_cast<const VkGraphicsShaderGroupCreateInfoNV&>(*this); }
	VkGraphicsShaderGroupCreateInfoNV& vkHandle() { return reinterpret_cast<VkGraphicsShaderGroupCreateInfoNV&>(*this); }

	operator const VkGraphicsShaderGroupCreateInfoNV&() const { return vkHandle(); };
	operator VkGraphicsShaderGroupCreateInfoNV&() { return vkHandle(); };
};

struct GraphicsPipelineShaderGroupsCreateInfoNV {
	StructureType sType {StructureType::graphicsPipelineShaderGroupsCreateInfoNV};
	const void* pNext {};
	uint32_t groupCount {};
	const GraphicsShaderGroupCreateInfoNV* pGroups {};
	uint32_t pipelineCount {};
	const Pipeline* pPipelines {};

	constexpr GraphicsPipelineShaderGroupsCreateInfoNV(uint32_t xgroupCount = {}, const GraphicsShaderGroupCreateInfoNV* xpGroups = {}, uint32_t xpipelineCount = {}, const Pipeline* xpPipelines = {}) : groupCount(xgroupCount), pGroups(xpGroups), pipelineCount(xpipelineCount), pPipelines(xpPipelines) {}

	const VkGraphicsPipelineShaderGroupsCreateInfoNV& vkHandle() const { return reinterpret_cast<const VkGraphicsPipelineShaderGroupsCreateInfoNV&>(*this); }
	VkGraphicsPipelineShaderGroupsCreateInfoNV& vkHandle() { return reinterpret_cast<VkGraphicsPipelineShaderGroupsCreateInfoNV&>(*this); }

	operator const VkGraphicsPipelineShaderGroupsCreateInfoNV&() const { return vkHandle(); };
	operator VkGraphicsPipelineShaderGroupsCreateInfoNV&() { return vkHandle(); };
};

struct BindShaderGroupIndirectCommandNV {
	uint32_t groupIndex {};

	const VkBindShaderGroupIndirectCommandNV& vkHandle() const { return reinterpret_cast<const VkBindShaderGroupIndirectCommandNV&>(*this); }
	VkBindShaderGroupIndirectCommandNV& vkHandle() { return reinterpret_cast<VkBindShaderGroupIndirectCommandNV&>(*this); }

	operator const VkBindShaderGroupIndirectCommandNV&() const { return vkHandle(); };
	operator VkBindShaderGroupIndirectCommandNV&() { return vkHandle(); };
};

struct BindIndexBufferIndirectCommandNV {
	DeviceAddress bufferAddress {};
	uint32_t size {};
	IndexType indexType {};

	const VkBindIndexBufferIndirectCommandNV& vkHandle() const { return reinterpret_cast<const VkBindIndexBufferIndirectCommandNV&>(*this); }
	VkBindIndexBufferIndirectCommandNV& vkHandle() { return reinterpret_cast<VkBindIndexBufferIndirectCommandNV&>(*this); }

	operator const VkBindIndexBufferIndirectCommandNV&() const { return vkHandle(); };
	operator VkBindIndexBufferIndirectCommandNV&() { return vkHandle(); };
};

struct BindVertexBufferIndirectCommandNV {
	DeviceAddress bufferAddress {};
	uint32_t size {};
	uint32_t stride {};

	const VkBindVertexBufferIndirectCommandNV& vkHandle() const { return reinterpret_cast<const VkBindVertexBufferIndirectCommandNV&>(*this); }
	VkBindVertexBufferIndirectCommandNV& vkHandle() { return reinterpret_cast<VkBindVertexBufferIndirectCommandNV&>(*this); }

	operator const VkBindVertexBufferIndirectCommandNV&() const { return vkHandle(); };
	operator VkBindVertexBufferIndirectCommandNV&() { return vkHandle(); };
};

struct SetStateFlagsIndirectCommandNV {
	uint32_t data {};

	const VkSetStateFlagsIndirectCommandNV& vkHandle() const { return reinterpret_cast<const VkSetStateFlagsIndirectCommandNV&>(*this); }
	VkSetStateFlagsIndirectCommandNV& vkHandle() { return reinterpret_cast<VkSetStateFlagsIndirectCommandNV&>(*this); }

	operator const VkSetStateFlagsIndirectCommandNV&() const { return vkHandle(); };
	operator VkSetStateFlagsIndirectCommandNV&() { return vkHandle(); };
};

struct IndirectCommandsStreamNV {
	Buffer buffer {};
	DeviceSize offset {};

	const VkIndirectCommandsStreamNV& vkHandle() const { return reinterpret_cast<const VkIndirectCommandsStreamNV&>(*this); }
	VkIndirectCommandsStreamNV& vkHandle() { return reinterpret_cast<VkIndirectCommandsStreamNV&>(*this); }

	operator const VkIndirectCommandsStreamNV&() const { return vkHandle(); };
	operator VkIndirectCommandsStreamNV&() { return vkHandle(); };
};

struct IndirectCommandsLayoutTokenNV {
	StructureType sType {StructureType::indirectCommandsLayoutTokenNV};
	const void* pNext {};
	IndirectCommandsTokenTypeNV tokenType {};
	uint32_t stream {};
	uint32_t offset {};
	uint32_t vertexBindingUnit {};
	Bool32 vertexDynamicStride {};
	PipelineLayout pushconstantPipelineLayout {};
	ShaderStageFlags pushconstantShaderStageFlags {};
	uint32_t pushconstantOffset {};
	uint32_t pushconstantSize {};
	IndirectStateFlagsNV indirectStateFlags {};
	uint32_t indexTypeCount {};
	const IndexType* pIndexTypes {};
	const uint32_t* pIndexTypeValues {};

	constexpr IndirectCommandsLayoutTokenNV(IndirectCommandsTokenTypeNV xtokenType = {}, uint32_t xstream = {}, uint32_t xoffset = {}, uint32_t xvertexBindingUnit = {}, Bool32 xvertexDynamicStride = {}, PipelineLayout xpushconstantPipelineLayout = {}, ShaderStageFlags xpushconstantShaderStageFlags = {}, uint32_t xpushconstantOffset = {}, uint32_t xpushconstantSize = {}, IndirectStateFlagsNV xindirectStateFlags = {}, uint32_t xindexTypeCount = {}, const IndexType* xpIndexTypes = {}, const uint32_t* xpIndexTypeValues = {}) : tokenType(xtokenType), stream(xstream), offset(xoffset), vertexBindingUnit(xvertexBindingUnit), vertexDynamicStride(xvertexDynamicStride), pushconstantPipelineLayout(xpushconstantPipelineLayout), pushconstantShaderStageFlags(xpushconstantShaderStageFlags), pushconstantOffset(xpushconstantOffset), pushconstantSize(xpushconstantSize), indirectStateFlags(xindirectStateFlags), indexTypeCount(xindexTypeCount), pIndexTypes(xpIndexTypes), pIndexTypeValues(xpIndexTypeValues) {}

	const VkIndirectCommandsLayoutTokenNV& vkHandle() const { return reinterpret_cast<const VkIndirectCommandsLayoutTokenNV&>(*this); }
	VkIndirectCommandsLayoutTokenNV& vkHandle() { return reinterpret_cast<VkIndirectCommandsLayoutTokenNV&>(*this); }

	operator const VkIndirectCommandsLayoutTokenNV&() const { return vkHandle(); };
	operator VkIndirectCommandsLayoutTokenNV&() { return vkHandle(); };
};

struct IndirectCommandsLayoutCreateInfoNV {
	StructureType sType {StructureType::indirectCommandsLayoutCreateInfoNV};
	const void* pNext {};
	IndirectCommandsLayoutUsageFlagsNV flags {};
	PipelineBindPoint pipelineBindPoint {};
	uint32_t tokenCount {};
	const IndirectCommandsLayoutTokenNV* pTokens {};
	uint32_t streamCount {};
	const uint32_t* pStreamStrides {};

	constexpr IndirectCommandsLayoutCreateInfoNV(IndirectCommandsLayoutUsageFlagsNV xflags = {}, PipelineBindPoint xpipelineBindPoint = {}, uint32_t xtokenCount = {}, const IndirectCommandsLayoutTokenNV* xpTokens = {}, uint32_t xstreamCount = {}, const uint32_t* xpStreamStrides = {}) : flags(xflags), pipelineBindPoint(xpipelineBindPoint), tokenCount(xtokenCount), pTokens(xpTokens), streamCount(xstreamCount), pStreamStrides(xpStreamStrides) {}

	const VkIndirectCommandsLayoutCreateInfoNV& vkHandle() const { return reinterpret_cast<const VkIndirectCommandsLayoutCreateInfoNV&>(*this); }
	VkIndirectCommandsLayoutCreateInfoNV& vkHandle() { return reinterpret_cast<VkIndirectCommandsLayoutCreateInfoNV&>(*this); }

	operator const VkIndirectCommandsLayoutCreateInfoNV&() const { return vkHandle(); };
	operator VkIndirectCommandsLayoutCreateInfoNV&() { return vkHandle(); };
};

struct GeneratedCommandsInfoNV {
	StructureType sType {StructureType::generatedCommandsInfoNV};
	const void* pNext {};
	PipelineBindPoint pipelineBindPoint {};
	Pipeline pipeline {};
	IndirectCommandsLayoutNV indirectCommandsLayout {};
	uint32_t streamCount {};
	const IndirectCommandsStreamNV* pStreams {};
	uint32_t sequencesCount {};
	Buffer preprocessBuffer {};
	DeviceSize preprocessOffset {};
	DeviceSize preprocessSize {};
	Buffer sequencesCountBuffer {};
	DeviceSize sequencesCountOffset {};
	Buffer sequencesIndexBuffer {};
	DeviceSize sequencesIndexOffset {};

	constexpr GeneratedCommandsInfoNV(PipelineBindPoint xpipelineBindPoint = {}, Pipeline xpipeline = {}, IndirectCommandsLayoutNV xindirectCommandsLayout = {}, uint32_t xstreamCount = {}, const IndirectCommandsStreamNV* xpStreams = {}, uint32_t xsequencesCount = {}, Buffer xpreprocessBuffer = {}, DeviceSize xpreprocessOffset = {}, DeviceSize xpreprocessSize = {}, Buffer xsequencesCountBuffer = {}, DeviceSize xsequencesCountOffset = {}, Buffer xsequencesIndexBuffer = {}, DeviceSize xsequencesIndexOffset = {}) : pipelineBindPoint(xpipelineBindPoint), pipeline(xpipeline), indirectCommandsLayout(xindirectCommandsLayout), streamCount(xstreamCount), pStreams(xpStreams), sequencesCount(xsequencesCount), preprocessBuffer(xpreprocessBuffer), preprocessOffset(xpreprocessOffset), preprocessSize(xpreprocessSize), sequencesCountBuffer(xsequencesCountBuffer), sequencesCountOffset(xsequencesCountOffset), sequencesIndexBuffer(xsequencesIndexBuffer), sequencesIndexOffset(xsequencesIndexOffset) {}

	const VkGeneratedCommandsInfoNV& vkHandle() const { return reinterpret_cast<const VkGeneratedCommandsInfoNV&>(*this); }
	VkGeneratedCommandsInfoNV& vkHandle() { return reinterpret_cast<VkGeneratedCommandsInfoNV&>(*this); }

	operator const VkGeneratedCommandsInfoNV&() const { return vkHandle(); };
	operator VkGeneratedCommandsInfoNV&() { return vkHandle(); };
};

struct GeneratedCommandsMemoryRequirementsInfoNV {
	StructureType sType {StructureType::generatedCommandsMemoryRequirementsInfoNV};
	const void* pNext {};
	PipelineBindPoint pipelineBindPoint {};
	Pipeline pipeline {};
	IndirectCommandsLayoutNV indirectCommandsLayout {};
	uint32_t maxSequencesCount {};

	constexpr GeneratedCommandsMemoryRequirementsInfoNV(PipelineBindPoint xpipelineBindPoint = {}, Pipeline xpipeline = {}, IndirectCommandsLayoutNV xindirectCommandsLayout = {}, uint32_t xmaxSequencesCount = {}) : pipelineBindPoint(xpipelineBindPoint), pipeline(xpipeline), indirectCommandsLayout(xindirectCommandsLayout), maxSequencesCount(xmaxSequencesCount) {}

	const VkGeneratedCommandsMemoryRequirementsInfoNV& vkHandle() const { return reinterpret_cast<const VkGeneratedCommandsMemoryRequirementsInfoNV&>(*this); }
	VkGeneratedCommandsMemoryRequirementsInfoNV& vkHandle() { return reinterpret_cast<VkGeneratedCommandsMemoryRequirementsInfoNV&>(*this); }

	operator const VkGeneratedCommandsMemoryRequirementsInfoNV&() const { return vkHandle(); };
	operator VkGeneratedCommandsMemoryRequirementsInfoNV&() { return vkHandle(); };
};


struct PhysicalDeviceTexelBufferAlignmentFeaturesEXT {
	StructureType sType {StructureType::physicalDeviceTexelBufferAlignmentFeaturesEXT};
	void* pNext {};
	Bool32 texelBufferAlignment {};

	constexpr PhysicalDeviceTexelBufferAlignmentFeaturesEXT(Bool32 xtexelBufferAlignment = {}) : texelBufferAlignment(xtexelBufferAlignment) {}

	const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT&>(*this); }
	VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT& vkHandle() { return reinterpret_cast<VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT&>(*this); }

	operator const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT&() const { return vkHandle(); };
	operator VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT&() { return vkHandle(); };
};

struct PhysicalDeviceTexelBufferAlignmentPropertiesEXT {
	StructureType sType {StructureType::physicalDeviceTexelBufferAlignmentPropertiesEXT};
	void* pNext {};
	DeviceSize storageTexelBufferOffsetAlignmentBytes {};
	Bool32 storageTexelBufferOffsetSingleTexelAlignment {};
	DeviceSize uniformTexelBufferOffsetAlignmentBytes {};
	Bool32 uniformTexelBufferOffsetSingleTexelAlignment {};

	const VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT&>(*this); }
	VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT& vkHandle() { return reinterpret_cast<VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT&>(*this); }

	operator const VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT&() const { return vkHandle(); };
	operator VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT&() { return vkHandle(); };
};


struct RenderPassTransformBeginInfoQCOM {
	StructureType sType {StructureType::renderPassTransformBeginInfoQCOM};
	void* pNext {};
	SurfaceTransformBitsKHR transform {};

	constexpr RenderPassTransformBeginInfoQCOM(SurfaceTransformBitsKHR xtransform = {}) : transform(xtransform) {}

	const VkRenderPassTransformBeginInfoQCOM& vkHandle() const { return reinterpret_cast<const VkRenderPassTransformBeginInfoQCOM&>(*this); }
	VkRenderPassTransformBeginInfoQCOM& vkHandle() { return reinterpret_cast<VkRenderPassTransformBeginInfoQCOM&>(*this); }

	operator const VkRenderPassTransformBeginInfoQCOM&() const { return vkHandle(); };
	operator VkRenderPassTransformBeginInfoQCOM&() { return vkHandle(); };
};

struct CommandBufferInheritanceRenderPassTransformInfoQCOM {
	StructureType sType {StructureType::commandBufferInheritanceRenderPassTransformInfoQCOM};
	void* pNext {};
	SurfaceTransformBitsKHR transform {};
	Rect2D renderArea {};

	constexpr CommandBufferInheritanceRenderPassTransformInfoQCOM(SurfaceTransformBitsKHR xtransform = {}, Rect2D xrenderArea = {}) : transform(xtransform), renderArea(xrenderArea) {}

	const VkCommandBufferInheritanceRenderPassTransformInfoQCOM& vkHandle() const { return reinterpret_cast<const VkCommandBufferInheritanceRenderPassTransformInfoQCOM&>(*this); }
	VkCommandBufferInheritanceRenderPassTransformInfoQCOM& vkHandle() { return reinterpret_cast<VkCommandBufferInheritanceRenderPassTransformInfoQCOM&>(*this); }

	operator const VkCommandBufferInheritanceRenderPassTransformInfoQCOM&() const { return vkHandle(); };
	operator VkCommandBufferInheritanceRenderPassTransformInfoQCOM&() { return vkHandle(); };
};


struct PhysicalDeviceDeviceMemoryReportFeaturesEXT {
	StructureType sType {StructureType::physicalDeviceDeviceMemoryReportFeaturesEXT};
	void* pNext {};
	Bool32 deviceMemoryReport {};

	constexpr PhysicalDeviceDeviceMemoryReportFeaturesEXT(Bool32 xdeviceMemoryReport = {}) : deviceMemoryReport(xdeviceMemoryReport) {}

	const VkPhysicalDeviceDeviceMemoryReportFeaturesEXT& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceDeviceMemoryReportFeaturesEXT&>(*this); }
	VkPhysicalDeviceDeviceMemoryReportFeaturesEXT& vkHandle() { return reinterpret_cast<VkPhysicalDeviceDeviceMemoryReportFeaturesEXT&>(*this); }

	operator const VkPhysicalDeviceDeviceMemoryReportFeaturesEXT&() const { return vkHandle(); };
	operator VkPhysicalDeviceDeviceMemoryReportFeaturesEXT&() { return vkHandle(); };
};

struct DeviceMemoryReportCallbackDataEXT {
	StructureType sType {StructureType::deviceMemoryReportCallbackDataEXT};
	const void* pNext {};
	DeviceMemoryReportFlagsEXT flags {};
	DeviceMemoryReportEventTypeEXT type {};
	uint64_t memoryObjectId {};
	DeviceSize size {};
	ObjectType objectType {};
	uint64_t objectHandle {};
	uint32_t heapIndex {};

	const VkDeviceMemoryReportCallbackDataEXT& vkHandle() const { return reinterpret_cast<const VkDeviceMemoryReportCallbackDataEXT&>(*this); }
	VkDeviceMemoryReportCallbackDataEXT& vkHandle() { return reinterpret_cast<VkDeviceMemoryReportCallbackDataEXT&>(*this); }

	operator const VkDeviceMemoryReportCallbackDataEXT&() const { return vkHandle(); };
	operator VkDeviceMemoryReportCallbackDataEXT&() { return vkHandle(); };
};

struct DeviceDeviceMemoryReportCreateInfoEXT {
	StructureType sType {StructureType::deviceDeviceMemoryReportCreateInfoEXT};
	const void* pNext {};
	DeviceMemoryReportFlagsEXT flags {};
	PFN_vkDeviceMemoryReportCallbackEXT pfnUserCallback {};
	void* pUserData {};

	constexpr DeviceDeviceMemoryReportCreateInfoEXT(DeviceMemoryReportFlagsEXT xflags = {}, PFN_vkDeviceMemoryReportCallbackEXT xpfnUserCallback = {}, void* xpUserData = {}) : flags(xflags), pfnUserCallback(xpfnUserCallback), pUserData(xpUserData) {}

	const VkDeviceDeviceMemoryReportCreateInfoEXT& vkHandle() const { return reinterpret_cast<const VkDeviceDeviceMemoryReportCreateInfoEXT&>(*this); }
	VkDeviceDeviceMemoryReportCreateInfoEXT& vkHandle() { return reinterpret_cast<VkDeviceDeviceMemoryReportCreateInfoEXT&>(*this); }

	operator const VkDeviceDeviceMemoryReportCreateInfoEXT&() const { return vkHandle(); };
	operator VkDeviceDeviceMemoryReportCreateInfoEXT&() { return vkHandle(); };
};


struct PhysicalDeviceRobustness2FeaturesEXT {
	StructureType sType {StructureType::physicalDeviceRobustness2FeaturesEXT};
	void* pNext {};
	Bool32 robustBufferAccess2 {};
	Bool32 robustImageAccess2 {};
	Bool32 nullDescriptor {};

	constexpr PhysicalDeviceRobustness2FeaturesEXT(Bool32 xrobustBufferAccess2 = {}, Bool32 xrobustImageAccess2 = {}, Bool32 xnullDescriptor = {}) : robustBufferAccess2(xrobustBufferAccess2), robustImageAccess2(xrobustImageAccess2), nullDescriptor(xnullDescriptor) {}

	const VkPhysicalDeviceRobustness2FeaturesEXT& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceRobustness2FeaturesEXT&>(*this); }
	VkPhysicalDeviceRobustness2FeaturesEXT& vkHandle() { return reinterpret_cast<VkPhysicalDeviceRobustness2FeaturesEXT&>(*this); }

	operator const VkPhysicalDeviceRobustness2FeaturesEXT&() const { return vkHandle(); };
	operator VkPhysicalDeviceRobustness2FeaturesEXT&() { return vkHandle(); };
};

struct PhysicalDeviceRobustness2PropertiesEXT {
	StructureType sType {StructureType::physicalDeviceRobustness2PropertiesEXT};
	void* pNext {};
	DeviceSize robustStorageBufferAccessSizeAlignment {};
	DeviceSize robustUniformBufferAccessSizeAlignment {};

	const VkPhysicalDeviceRobustness2PropertiesEXT& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceRobustness2PropertiesEXT&>(*this); }
	VkPhysicalDeviceRobustness2PropertiesEXT& vkHandle() { return reinterpret_cast<VkPhysicalDeviceRobustness2PropertiesEXT&>(*this); }

	operator const VkPhysicalDeviceRobustness2PropertiesEXT&() const { return vkHandle(); };
	operator VkPhysicalDeviceRobustness2PropertiesEXT&() { return vkHandle(); };
};


struct SamplerCustomBorderColorCreateInfoEXT {
	StructureType sType {StructureType::samplerCustomBorderColorCreateInfoEXT};
	const void* pNext {};
	ClearColorValue customBorderColor {};
	Format format {};

	constexpr SamplerCustomBorderColorCreateInfoEXT(ClearColorValue xcustomBorderColor = {}, Format xformat = {}) : customBorderColor(xcustomBorderColor), format(xformat) {}

	const VkSamplerCustomBorderColorCreateInfoEXT& vkHandle() const { return reinterpret_cast<const VkSamplerCustomBorderColorCreateInfoEXT&>(*this); }
	VkSamplerCustomBorderColorCreateInfoEXT& vkHandle() { return reinterpret_cast<VkSamplerCustomBorderColorCreateInfoEXT&>(*this); }

	operator const VkSamplerCustomBorderColorCreateInfoEXT&() const { return vkHandle(); };
	operator VkSamplerCustomBorderColorCreateInfoEXT&() { return vkHandle(); };
};

struct PhysicalDeviceCustomBorderColorPropertiesEXT {
	StructureType sType {StructureType::physicalDeviceCustomBorderColorPropertiesEXT};
	void* pNext {};
	uint32_t maxCustomBorderColorSamplers {};

	const VkPhysicalDeviceCustomBorderColorPropertiesEXT& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceCustomBorderColorPropertiesEXT&>(*this); }
	VkPhysicalDeviceCustomBorderColorPropertiesEXT& vkHandle() { return reinterpret_cast<VkPhysicalDeviceCustomBorderColorPropertiesEXT&>(*this); }

	operator const VkPhysicalDeviceCustomBorderColorPropertiesEXT&() const { return vkHandle(); };
	operator VkPhysicalDeviceCustomBorderColorPropertiesEXT&() { return vkHandle(); };
};

struct PhysicalDeviceCustomBorderColorFeaturesEXT {
	StructureType sType {StructureType::physicalDeviceCustomBorderColorFeaturesEXT};
	void* pNext {};
	Bool32 customBorderColors {};
	Bool32 customBorderColorWithoutFormat {};

	constexpr PhysicalDeviceCustomBorderColorFeaturesEXT(Bool32 xcustomBorderColors = {}, Bool32 xcustomBorderColorWithoutFormat = {}) : customBorderColors(xcustomBorderColors), customBorderColorWithoutFormat(xcustomBorderColorWithoutFormat) {}

	const VkPhysicalDeviceCustomBorderColorFeaturesEXT& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceCustomBorderColorFeaturesEXT&>(*this); }
	VkPhysicalDeviceCustomBorderColorFeaturesEXT& vkHandle() { return reinterpret_cast<VkPhysicalDeviceCustomBorderColorFeaturesEXT&>(*this); }

	operator const VkPhysicalDeviceCustomBorderColorFeaturesEXT&() const { return vkHandle(); };
	operator VkPhysicalDeviceCustomBorderColorFeaturesEXT&() { return vkHandle(); };
};


struct PhysicalDevicePrivateDataFeaturesEXT {
	StructureType sType {StructureType::physicalDevicePrivateDataFeaturesEXT};
	void* pNext {};
	Bool32 privateData {};

	constexpr PhysicalDevicePrivateDataFeaturesEXT(Bool32 xprivateData = {}) : privateData(xprivateData) {}

	const VkPhysicalDevicePrivateDataFeaturesEXT& vkHandle() const { return reinterpret_cast<const VkPhysicalDevicePrivateDataFeaturesEXT&>(*this); }
	VkPhysicalDevicePrivateDataFeaturesEXT& vkHandle() { return reinterpret_cast<VkPhysicalDevicePrivateDataFeaturesEXT&>(*this); }

	operator const VkPhysicalDevicePrivateDataFeaturesEXT&() const { return vkHandle(); };
	operator VkPhysicalDevicePrivateDataFeaturesEXT&() { return vkHandle(); };
};

struct DevicePrivateDataCreateInfoEXT {
	StructureType sType {StructureType::devicePrivateDataCreateInfoEXT};
	const void* pNext {};
	uint32_t privateDataSlotRequestCount {};

	constexpr DevicePrivateDataCreateInfoEXT(uint32_t xprivateDataSlotRequestCount = {}) : privateDataSlotRequestCount(xprivateDataSlotRequestCount) {}

	const VkDevicePrivateDataCreateInfoEXT& vkHandle() const { return reinterpret_cast<const VkDevicePrivateDataCreateInfoEXT&>(*this); }
	VkDevicePrivateDataCreateInfoEXT& vkHandle() { return reinterpret_cast<VkDevicePrivateDataCreateInfoEXT&>(*this); }

	operator const VkDevicePrivateDataCreateInfoEXT&() const { return vkHandle(); };
	operator VkDevicePrivateDataCreateInfoEXT&() { return vkHandle(); };
};

struct PrivateDataSlotCreateInfoEXT {
	StructureType sType {StructureType::privateDataSlotCreateInfoEXT};
	const void* pNext {};
	PrivateDataSlotCreateFlagsEXT flags {};

	constexpr PrivateDataSlotCreateInfoEXT(PrivateDataSlotCreateFlagsEXT xflags = {}) : flags(xflags) {}

	const VkPrivateDataSlotCreateInfoEXT& vkHandle() const { return reinterpret_cast<const VkPrivateDataSlotCreateInfoEXT&>(*this); }
	VkPrivateDataSlotCreateInfoEXT& vkHandle() { return reinterpret_cast<VkPrivateDataSlotCreateInfoEXT&>(*this); }

	operator const VkPrivateDataSlotCreateInfoEXT&() const { return vkHandle(); };
	operator VkPrivateDataSlotCreateInfoEXT&() { return vkHandle(); };
};


struct PhysicalDevicePipelineCreationCacheControlFeaturesEXT {
	StructureType sType {StructureType::physicalDevicePipelineCreationCacheControlFeaturesEXT};
	void* pNext {};
	Bool32 pipelineCreationCacheControl {};

	constexpr PhysicalDevicePipelineCreationCacheControlFeaturesEXT(Bool32 xpipelineCreationCacheControl = {}) : pipelineCreationCacheControl(xpipelineCreationCacheControl) {}

	const VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT& vkHandle() const { return reinterpret_cast<const VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT&>(*this); }
	VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT& vkHandle() { return reinterpret_cast<VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT&>(*this); }

	operator const VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT&() const { return vkHandle(); };
	operator VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT&() { return vkHandle(); };
};


struct PhysicalDeviceDiagnosticsConfigFeaturesNV {
	StructureType sType {StructureType::physicalDeviceDiagnosticsConfigFeaturesNV};
	void* pNext {};
	Bool32 diagnosticsConfig {};

	constexpr PhysicalDeviceDiagnosticsConfigFeaturesNV(Bool32 xdiagnosticsConfig = {}) : diagnosticsConfig(xdiagnosticsConfig) {}

	const VkPhysicalDeviceDiagnosticsConfigFeaturesNV& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceDiagnosticsConfigFeaturesNV&>(*this); }
	VkPhysicalDeviceDiagnosticsConfigFeaturesNV& vkHandle() { return reinterpret_cast<VkPhysicalDeviceDiagnosticsConfigFeaturesNV&>(*this); }

	operator const VkPhysicalDeviceDiagnosticsConfigFeaturesNV&() const { return vkHandle(); };
	operator VkPhysicalDeviceDiagnosticsConfigFeaturesNV&() { return vkHandle(); };
};

struct DeviceDiagnosticsConfigCreateInfoNV {
	StructureType sType {StructureType::deviceDiagnosticsConfigCreateInfoNV};
	const void* pNext {};
	DeviceDiagnosticsConfigFlagsNV flags {};

	constexpr DeviceDiagnosticsConfigCreateInfoNV(DeviceDiagnosticsConfigFlagsNV xflags = {}) : flags(xflags) {}

	const VkDeviceDiagnosticsConfigCreateInfoNV& vkHandle() const { return reinterpret_cast<const VkDeviceDiagnosticsConfigCreateInfoNV&>(*this); }
	VkDeviceDiagnosticsConfigCreateInfoNV& vkHandle() { return reinterpret_cast<VkDeviceDiagnosticsConfigCreateInfoNV&>(*this); }

	operator const VkDeviceDiagnosticsConfigCreateInfoNV&() const { return vkHandle(); };
	operator VkDeviceDiagnosticsConfigCreateInfoNV&() { return vkHandle(); };
};


struct PhysicalDeviceZeroInitializeWorkgroupMemoryFeaturesKHR {
	StructureType sType {StructureType::physicalDeviceZeroInitializeWorkgroupMemoryFeaturesKHR};
	void* pNext {};
	Bool32 shaderZeroInitializeWorkgroupMemory {};

	constexpr PhysicalDeviceZeroInitializeWorkgroupMemoryFeaturesKHR(Bool32 xshaderZeroInitializeWorkgroupMemory = {}) : shaderZeroInitializeWorkgroupMemory(xshaderZeroInitializeWorkgroupMemory) {}

	const VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeaturesKHR& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeaturesKHR&>(*this); }
	VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeaturesKHR& vkHandle() { return reinterpret_cast<VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeaturesKHR&>(*this); }

	operator const VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeaturesKHR&() const { return vkHandle(); };
	operator VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeaturesKHR&() { return vkHandle(); };
};


struct PhysicalDeviceFragmentShadingRateEnumsFeaturesNV {
	StructureType sType {StructureType::physicalDeviceFragmentShadingRateEnumsFeaturesNV};
	void* pNext {};
	Bool32 fragmentShadingRateEnums {};
	Bool32 supersampleFragmentShadingRates {};
	Bool32 noInvocationFragmentShadingRates {};

	constexpr PhysicalDeviceFragmentShadingRateEnumsFeaturesNV(Bool32 xfragmentShadingRateEnums = {}, Bool32 xsupersampleFragmentShadingRates = {}, Bool32 xnoInvocationFragmentShadingRates = {}) : fragmentShadingRateEnums(xfragmentShadingRateEnums), supersampleFragmentShadingRates(xsupersampleFragmentShadingRates), noInvocationFragmentShadingRates(xnoInvocationFragmentShadingRates) {}

	const VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV&>(*this); }
	VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV& vkHandle() { return reinterpret_cast<VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV&>(*this); }

	operator const VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV&() const { return vkHandle(); };
	operator VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV&() { return vkHandle(); };
};

struct PhysicalDeviceFragmentShadingRateEnumsPropertiesNV {
	StructureType sType {StructureType::physicalDeviceFragmentShadingRateEnumsPropertiesNV};
	void* pNext {};
	SampleCountBits maxFragmentShadingRateInvocationCount {};

	constexpr PhysicalDeviceFragmentShadingRateEnumsPropertiesNV(SampleCountBits xmaxFragmentShadingRateInvocationCount = {}) : maxFragmentShadingRateInvocationCount(xmaxFragmentShadingRateInvocationCount) {}

	const VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV&>(*this); }
	VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV& vkHandle() { return reinterpret_cast<VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV&>(*this); }

	operator const VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV&() const { return vkHandle(); };
	operator VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV&() { return vkHandle(); };
};

struct PipelineFragmentShadingRateEnumStateCreateInfoNV {
	StructureType sType {StructureType::pipelineFragmentShadingRateEnumStateCreateInfoNV};
	const void* pNext {};
	FragmentShadingRateTypeNV shadingRateType {};
	FragmentShadingRateNV shadingRate {};
	std::array<FragmentShadingRateCombinerOpKHR, 2> combinerOps {};

	constexpr PipelineFragmentShadingRateEnumStateCreateInfoNV(FragmentShadingRateTypeNV xshadingRateType = {}, FragmentShadingRateNV xshadingRate = {}, std::array<FragmentShadingRateCombinerOpKHR, 2> xcombinerOps = {}) : shadingRateType(xshadingRateType), shadingRate(xshadingRate), combinerOps(xcombinerOps) {}

	const VkPipelineFragmentShadingRateEnumStateCreateInfoNV& vkHandle() const { return reinterpret_cast<const VkPipelineFragmentShadingRateEnumStateCreateInfoNV&>(*this); }
	VkPipelineFragmentShadingRateEnumStateCreateInfoNV& vkHandle() { return reinterpret_cast<VkPipelineFragmentShadingRateEnumStateCreateInfoNV&>(*this); }

	operator const VkPipelineFragmentShadingRateEnumStateCreateInfoNV&() const { return vkHandle(); };
	operator VkPipelineFragmentShadingRateEnumStateCreateInfoNV&() { return vkHandle(); };
};


struct PhysicalDeviceFragmentDensityMap2FeaturesEXT {
	StructureType sType {StructureType::physicalDeviceFragmentDensityMap2FeaturesEXT};
	void* pNext {};
	Bool32 fragmentDensityMapDeferred {};

	constexpr PhysicalDeviceFragmentDensityMap2FeaturesEXT(Bool32 xfragmentDensityMapDeferred = {}) : fragmentDensityMapDeferred(xfragmentDensityMapDeferred) {}

	const VkPhysicalDeviceFragmentDensityMap2FeaturesEXT& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceFragmentDensityMap2FeaturesEXT&>(*this); }
	VkPhysicalDeviceFragmentDensityMap2FeaturesEXT& vkHandle() { return reinterpret_cast<VkPhysicalDeviceFragmentDensityMap2FeaturesEXT&>(*this); }

	operator const VkPhysicalDeviceFragmentDensityMap2FeaturesEXT&() const { return vkHandle(); };
	operator VkPhysicalDeviceFragmentDensityMap2FeaturesEXT&() { return vkHandle(); };
};

struct PhysicalDeviceFragmentDensityMap2PropertiesEXT {
	StructureType sType {StructureType::physicalDeviceFragmentDensityMap2PropertiesEXT};
	void* pNext {};
	Bool32 subsampledLoads {};
	Bool32 subsampledCoarseReconstructionEarlyAccess {};
	uint32_t maxSubsampledArrayLayers {};
	uint32_t maxDescriptorSetSubsampledSamplers {};

	const VkPhysicalDeviceFragmentDensityMap2PropertiesEXT& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceFragmentDensityMap2PropertiesEXT&>(*this); }
	VkPhysicalDeviceFragmentDensityMap2PropertiesEXT& vkHandle() { return reinterpret_cast<VkPhysicalDeviceFragmentDensityMap2PropertiesEXT&>(*this); }

	operator const VkPhysicalDeviceFragmentDensityMap2PropertiesEXT&() const { return vkHandle(); };
	operator VkPhysicalDeviceFragmentDensityMap2PropertiesEXT&() { return vkHandle(); };
};


struct CopyCommandTransformInfoQCOM {
	StructureType sType {StructureType::copyCommandTransformInfoQCOM};
	const void* pNext {};
	SurfaceTransformBitsKHR transform {};

	constexpr CopyCommandTransformInfoQCOM(SurfaceTransformBitsKHR xtransform = {}) : transform(xtransform) {}

	const VkCopyCommandTransformInfoQCOM& vkHandle() const { return reinterpret_cast<const VkCopyCommandTransformInfoQCOM&>(*this); }
	VkCopyCommandTransformInfoQCOM& vkHandle() { return reinterpret_cast<VkCopyCommandTransformInfoQCOM&>(*this); }

	operator const VkCopyCommandTransformInfoQCOM&() const { return vkHandle(); };
	operator VkCopyCommandTransformInfoQCOM&() { return vkHandle(); };
};


struct PhysicalDeviceImageRobustnessFeaturesEXT {
	StructureType sType {StructureType::physicalDeviceImageRobustnessFeaturesEXT};
	void* pNext {};
	Bool32 robustImageAccess {};

	constexpr PhysicalDeviceImageRobustnessFeaturesEXT(Bool32 xrobustImageAccess = {}) : robustImageAccess(xrobustImageAccess) {}

	const VkPhysicalDeviceImageRobustnessFeaturesEXT& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceImageRobustnessFeaturesEXT&>(*this); }
	VkPhysicalDeviceImageRobustnessFeaturesEXT& vkHandle() { return reinterpret_cast<VkPhysicalDeviceImageRobustnessFeaturesEXT&>(*this); }

	operator const VkPhysicalDeviceImageRobustnessFeaturesEXT&() const { return vkHandle(); };
	operator VkPhysicalDeviceImageRobustnessFeaturesEXT&() { return vkHandle(); };
};


struct PhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR {
	StructureType sType {StructureType::physicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR};
	void* pNext {};
	Bool32 workgroupMemoryExplicitLayout {};
	Bool32 workgroupMemoryExplicitLayoutScalarBlockLayout {};
	Bool32 workgroupMemoryExplicitLayout8BitAccess {};
	Bool32 workgroupMemoryExplicitLayout16BitAccess {};

	constexpr PhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR(Bool32 xworkgroupMemoryExplicitLayout = {}, Bool32 xworkgroupMemoryExplicitLayoutScalarBlockLayout = {}, Bool32 xworkgroupMemoryExplicitLayout8BitAccess = {}, Bool32 xworkgroupMemoryExplicitLayout16BitAccess = {}) : workgroupMemoryExplicitLayout(xworkgroupMemoryExplicitLayout), workgroupMemoryExplicitLayoutScalarBlockLayout(xworkgroupMemoryExplicitLayoutScalarBlockLayout), workgroupMemoryExplicitLayout8BitAccess(xworkgroupMemoryExplicitLayout8BitAccess), workgroupMemoryExplicitLayout16BitAccess(xworkgroupMemoryExplicitLayout16BitAccess) {}

	const VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR&>(*this); }
	VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR& vkHandle() { return reinterpret_cast<VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR&>(*this); }

	operator const VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR&() const { return vkHandle(); };
	operator VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR&() { return vkHandle(); };
};


struct BufferCopy2KHR {
	StructureType sType {StructureType::bufferCopy2KHR};
	const void* pNext {};
	DeviceSize srcOffset {};
	DeviceSize dstOffset {};
	DeviceSize size {};

	constexpr BufferCopy2KHR(DeviceSize xsrcOffset = {}, DeviceSize xdstOffset = {}, DeviceSize xsize = {}) : srcOffset(xsrcOffset), dstOffset(xdstOffset), size(xsize) {}

	const VkBufferCopy2KHR& vkHandle() const { return reinterpret_cast<const VkBufferCopy2KHR&>(*this); }
	VkBufferCopy2KHR& vkHandle() { return reinterpret_cast<VkBufferCopy2KHR&>(*this); }

	operator const VkBufferCopy2KHR&() const { return vkHandle(); };
	operator VkBufferCopy2KHR&() { return vkHandle(); };
};

struct CopyBufferInfo2KHR {
	StructureType sType {StructureType::copyBufferInfo2KHR};
	const void* pNext {};
	Buffer srcBuffer {};
	Buffer dstBuffer {};
	uint32_t regionCount {};
	const BufferCopy2KHR* pRegions {};

	constexpr CopyBufferInfo2KHR(Buffer xsrcBuffer = {}, Buffer xdstBuffer = {}, uint32_t xregionCount = {}, const BufferCopy2KHR* xpRegions = {}) : srcBuffer(xsrcBuffer), dstBuffer(xdstBuffer), regionCount(xregionCount), pRegions(xpRegions) {}

	const VkCopyBufferInfo2KHR& vkHandle() const { return reinterpret_cast<const VkCopyBufferInfo2KHR&>(*this); }
	VkCopyBufferInfo2KHR& vkHandle() { return reinterpret_cast<VkCopyBufferInfo2KHR&>(*this); }

	operator const VkCopyBufferInfo2KHR&() const { return vkHandle(); };
	operator VkCopyBufferInfo2KHR&() { return vkHandle(); };
};

struct ImageCopy2KHR {
	StructureType sType {StructureType::imageCopy2KHR};
	const void* pNext {};
	ImageSubresourceLayers srcSubresource {};
	Offset3D srcOffset {};
	ImageSubresourceLayers dstSubresource {};
	Offset3D dstOffset {};
	Extent3D extent {};

	constexpr ImageCopy2KHR(ImageSubresourceLayers xsrcSubresource = {}, Offset3D xsrcOffset = {}, ImageSubresourceLayers xdstSubresource = {}, Offset3D xdstOffset = {}, Extent3D xextent = {}) : srcSubresource(xsrcSubresource), srcOffset(xsrcOffset), dstSubresource(xdstSubresource), dstOffset(xdstOffset), extent(xextent) {}

	const VkImageCopy2KHR& vkHandle() const { return reinterpret_cast<const VkImageCopy2KHR&>(*this); }
	VkImageCopy2KHR& vkHandle() { return reinterpret_cast<VkImageCopy2KHR&>(*this); }

	operator const VkImageCopy2KHR&() const { return vkHandle(); };
	operator VkImageCopy2KHR&() { return vkHandle(); };
};

struct CopyImageInfo2KHR {
	StructureType sType {StructureType::copyImageInfo2KHR};
	const void* pNext {};
	Image srcImage {};
	ImageLayout srcImageLayout {};
	Image dstImage {};
	ImageLayout dstImageLayout {};
	uint32_t regionCount {};
	const ImageCopy2KHR* pRegions {};

	constexpr CopyImageInfo2KHR(Image xsrcImage = {}, ImageLayout xsrcImageLayout = {}, Image xdstImage = {}, ImageLayout xdstImageLayout = {}, uint32_t xregionCount = {}, const ImageCopy2KHR* xpRegions = {}) : srcImage(xsrcImage), srcImageLayout(xsrcImageLayout), dstImage(xdstImage), dstImageLayout(xdstImageLayout), regionCount(xregionCount), pRegions(xpRegions) {}

	const VkCopyImageInfo2KHR& vkHandle() const { return reinterpret_cast<const VkCopyImageInfo2KHR&>(*this); }
	VkCopyImageInfo2KHR& vkHandle() { return reinterpret_cast<VkCopyImageInfo2KHR&>(*this); }

	operator const VkCopyImageInfo2KHR&() const { return vkHandle(); };
	operator VkCopyImageInfo2KHR&() { return vkHandle(); };
};

struct BufferImageCopy2KHR {
	StructureType sType {StructureType::bufferImageCopy2KHR};
	const void* pNext {};
	DeviceSize bufferOffset {};
	uint32_t bufferRowLength {};
	uint32_t bufferImageHeight {};
	ImageSubresourceLayers imageSubresource {};
	Offset3D imageOffset {};
	Extent3D imageExtent {};

	constexpr BufferImageCopy2KHR(DeviceSize xbufferOffset = {}, uint32_t xbufferRowLength = {}, uint32_t xbufferImageHeight = {}, ImageSubresourceLayers ximageSubresource = {}, Offset3D ximageOffset = {}, Extent3D ximageExtent = {}) : bufferOffset(xbufferOffset), bufferRowLength(xbufferRowLength), bufferImageHeight(xbufferImageHeight), imageSubresource(ximageSubresource), imageOffset(ximageOffset), imageExtent(ximageExtent) {}

	const VkBufferImageCopy2KHR& vkHandle() const { return reinterpret_cast<const VkBufferImageCopy2KHR&>(*this); }
	VkBufferImageCopy2KHR& vkHandle() { return reinterpret_cast<VkBufferImageCopy2KHR&>(*this); }

	operator const VkBufferImageCopy2KHR&() const { return vkHandle(); };
	operator VkBufferImageCopy2KHR&() { return vkHandle(); };
};

struct CopyBufferToImageInfo2KHR {
	StructureType sType {StructureType::copyBufferToImageInfo2KHR};
	const void* pNext {};
	Buffer srcBuffer {};
	Image dstImage {};
	ImageLayout dstImageLayout {};
	uint32_t regionCount {};
	const BufferImageCopy2KHR* pRegions {};

	constexpr CopyBufferToImageInfo2KHR(Buffer xsrcBuffer = {}, Image xdstImage = {}, ImageLayout xdstImageLayout = {}, uint32_t xregionCount = {}, const BufferImageCopy2KHR* xpRegions = {}) : srcBuffer(xsrcBuffer), dstImage(xdstImage), dstImageLayout(xdstImageLayout), regionCount(xregionCount), pRegions(xpRegions) {}

	const VkCopyBufferToImageInfo2KHR& vkHandle() const { return reinterpret_cast<const VkCopyBufferToImageInfo2KHR&>(*this); }
	VkCopyBufferToImageInfo2KHR& vkHandle() { return reinterpret_cast<VkCopyBufferToImageInfo2KHR&>(*this); }

	operator const VkCopyBufferToImageInfo2KHR&() const { return vkHandle(); };
	operator VkCopyBufferToImageInfo2KHR&() { return vkHandle(); };
};

struct CopyImageToBufferInfo2KHR {
	StructureType sType {StructureType::copyImageToBufferInfo2KHR};
	const void* pNext {};
	Image srcImage {};
	ImageLayout srcImageLayout {};
	Buffer dstBuffer {};
	uint32_t regionCount {};
	const BufferImageCopy2KHR* pRegions {};

	constexpr CopyImageToBufferInfo2KHR(Image xsrcImage = {}, ImageLayout xsrcImageLayout = {}, Buffer xdstBuffer = {}, uint32_t xregionCount = {}, const BufferImageCopy2KHR* xpRegions = {}) : srcImage(xsrcImage), srcImageLayout(xsrcImageLayout), dstBuffer(xdstBuffer), regionCount(xregionCount), pRegions(xpRegions) {}

	const VkCopyImageToBufferInfo2KHR& vkHandle() const { return reinterpret_cast<const VkCopyImageToBufferInfo2KHR&>(*this); }
	VkCopyImageToBufferInfo2KHR& vkHandle() { return reinterpret_cast<VkCopyImageToBufferInfo2KHR&>(*this); }

	operator const VkCopyImageToBufferInfo2KHR&() const { return vkHandle(); };
	operator VkCopyImageToBufferInfo2KHR&() { return vkHandle(); };
};

struct ImageBlit2KHR {
	StructureType sType {StructureType::imageBlit2KHR};
	const void* pNext {};
	ImageSubresourceLayers srcSubresource {};
	std::array<Offset3D, 2> srcOffsets {};
	ImageSubresourceLayers dstSubresource {};
	std::array<Offset3D, 2> dstOffsets {};

	constexpr ImageBlit2KHR(ImageSubresourceLayers xsrcSubresource = {}, std::array<Offset3D, 2> xsrcOffsets = {}, ImageSubresourceLayers xdstSubresource = {}, std::array<Offset3D, 2> xdstOffsets = {}) : srcSubresource(xsrcSubresource), srcOffsets(xsrcOffsets), dstSubresource(xdstSubresource), dstOffsets(xdstOffsets) {}

	const VkImageBlit2KHR& vkHandle() const { return reinterpret_cast<const VkImageBlit2KHR&>(*this); }
	VkImageBlit2KHR& vkHandle() { return reinterpret_cast<VkImageBlit2KHR&>(*this); }

	operator const VkImageBlit2KHR&() const { return vkHandle(); };
	operator VkImageBlit2KHR&() { return vkHandle(); };
};

struct BlitImageInfo2KHR {
	StructureType sType {StructureType::blitImageInfo2KHR};
	const void* pNext {};
	Image srcImage {};
	ImageLayout srcImageLayout {};
	Image dstImage {};
	ImageLayout dstImageLayout {};
	uint32_t regionCount {};
	const ImageBlit2KHR* pRegions {};
	Filter filter {};

	constexpr BlitImageInfo2KHR(Image xsrcImage = {}, ImageLayout xsrcImageLayout = {}, Image xdstImage = {}, ImageLayout xdstImageLayout = {}, uint32_t xregionCount = {}, const ImageBlit2KHR* xpRegions = {}, Filter xfilter = {}) : srcImage(xsrcImage), srcImageLayout(xsrcImageLayout), dstImage(xdstImage), dstImageLayout(xdstImageLayout), regionCount(xregionCount), pRegions(xpRegions), filter(xfilter) {}

	const VkBlitImageInfo2KHR& vkHandle() const { return reinterpret_cast<const VkBlitImageInfo2KHR&>(*this); }
	VkBlitImageInfo2KHR& vkHandle() { return reinterpret_cast<VkBlitImageInfo2KHR&>(*this); }

	operator const VkBlitImageInfo2KHR&() const { return vkHandle(); };
	operator VkBlitImageInfo2KHR&() { return vkHandle(); };
};

struct ImageResolve2KHR {
	StructureType sType {StructureType::imageResolve2KHR};
	const void* pNext {};
	ImageSubresourceLayers srcSubresource {};
	Offset3D srcOffset {};
	ImageSubresourceLayers dstSubresource {};
	Offset3D dstOffset {};
	Extent3D extent {};

	constexpr ImageResolve2KHR(ImageSubresourceLayers xsrcSubresource = {}, Offset3D xsrcOffset = {}, ImageSubresourceLayers xdstSubresource = {}, Offset3D xdstOffset = {}, Extent3D xextent = {}) : srcSubresource(xsrcSubresource), srcOffset(xsrcOffset), dstSubresource(xdstSubresource), dstOffset(xdstOffset), extent(xextent) {}

	const VkImageResolve2KHR& vkHandle() const { return reinterpret_cast<const VkImageResolve2KHR&>(*this); }
	VkImageResolve2KHR& vkHandle() { return reinterpret_cast<VkImageResolve2KHR&>(*this); }

	operator const VkImageResolve2KHR&() const { return vkHandle(); };
	operator VkImageResolve2KHR&() { return vkHandle(); };
};

struct ResolveImageInfo2KHR {
	StructureType sType {StructureType::resolveImageInfo2KHR};
	const void* pNext {};
	Image srcImage {};
	ImageLayout srcImageLayout {};
	Image dstImage {};
	ImageLayout dstImageLayout {};
	uint32_t regionCount {};
	const ImageResolve2KHR* pRegions {};

	constexpr ResolveImageInfo2KHR(Image xsrcImage = {}, ImageLayout xsrcImageLayout = {}, Image xdstImage = {}, ImageLayout xdstImageLayout = {}, uint32_t xregionCount = {}, const ImageResolve2KHR* xpRegions = {}) : srcImage(xsrcImage), srcImageLayout(xsrcImageLayout), dstImage(xdstImage), dstImageLayout(xdstImageLayout), regionCount(xregionCount), pRegions(xpRegions) {}

	const VkResolveImageInfo2KHR& vkHandle() const { return reinterpret_cast<const VkResolveImageInfo2KHR&>(*this); }
	VkResolveImageInfo2KHR& vkHandle() { return reinterpret_cast<VkResolveImageInfo2KHR&>(*this); }

	operator const VkResolveImageInfo2KHR&() const { return vkHandle(); };
	operator VkResolveImageInfo2KHR&() { return vkHandle(); };
};


struct PhysicalDevice4444FormatsFeaturesEXT {
	StructureType sType {StructureType::physicalDevice4444FormatsFeaturesEXT};
	void* pNext {};
	Bool32 formatA4R4G4B4 {};
	Bool32 formatA4B4G4R4 {};

	constexpr PhysicalDevice4444FormatsFeaturesEXT(Bool32 xformatA4R4G4B4 = {}, Bool32 xformatA4B4G4R4 = {}) : formatA4R4G4B4(xformatA4R4G4B4), formatA4B4G4R4(xformatA4B4G4R4) {}

	const VkPhysicalDevice4444FormatsFeaturesEXT& vkHandle() const { return reinterpret_cast<const VkPhysicalDevice4444FormatsFeaturesEXT&>(*this); }
	VkPhysicalDevice4444FormatsFeaturesEXT& vkHandle() { return reinterpret_cast<VkPhysicalDevice4444FormatsFeaturesEXT&>(*this); }

	operator const VkPhysicalDevice4444FormatsFeaturesEXT&() const { return vkHandle(); };
	operator VkPhysicalDevice4444FormatsFeaturesEXT&() { return vkHandle(); };
};



#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
struct DirectFBSurfaceCreateInfoEXT {
	StructureType sType {StructureType::directfbSurfaceCreateInfoEXT};
	const void* pNext {};
	DirectFBSurfaceCreateFlagsEXT flags {};
	IDirectFB* dfb {};
	IDirectFBSurface* surface {};

	constexpr DirectFBSurfaceCreateInfoEXT(DirectFBSurfaceCreateFlagsEXT xflags = {}, IDirectFB* xdfb = {}, IDirectFBSurface* xsurface = {}) : flags(xflags), dfb(xdfb), surface(xsurface) {}

	const VkDirectFBSurfaceCreateInfoEXT& vkHandle() const { return reinterpret_cast<const VkDirectFBSurfaceCreateInfoEXT&>(*this); }
	VkDirectFBSurfaceCreateInfoEXT& vkHandle() { return reinterpret_cast<VkDirectFBSurfaceCreateInfoEXT&>(*this); }

	operator const VkDirectFBSurfaceCreateInfoEXT&() const { return vkHandle(); };
	operator VkDirectFBSurfaceCreateInfoEXT&() { return vkHandle(); };
};


#endif //VK_USE_PLATFORM_DIRECTFB_EXT

struct PhysicalDeviceMutableDescriptorTypeFeaturesVALVE {
	StructureType sType {StructureType::physicalDeviceMutableDescriptorTypeFeaturesVALVE};
	void* pNext {};
	Bool32 mutableDescriptorType {};

	constexpr PhysicalDeviceMutableDescriptorTypeFeaturesVALVE(Bool32 xmutableDescriptorType = {}) : mutableDescriptorType(xmutableDescriptorType) {}

	const VkPhysicalDeviceMutableDescriptorTypeFeaturesVALVE& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceMutableDescriptorTypeFeaturesVALVE&>(*this); }
	VkPhysicalDeviceMutableDescriptorTypeFeaturesVALVE& vkHandle() { return reinterpret_cast<VkPhysicalDeviceMutableDescriptorTypeFeaturesVALVE&>(*this); }

	operator const VkPhysicalDeviceMutableDescriptorTypeFeaturesVALVE&() const { return vkHandle(); };
	operator VkPhysicalDeviceMutableDescriptorTypeFeaturesVALVE&() { return vkHandle(); };
};

struct MutableDescriptorTypeListVALVE {
	uint32_t descriptorTypeCount {};
	const DescriptorType* pDescriptorTypes {};

	const VkMutableDescriptorTypeListVALVE& vkHandle() const { return reinterpret_cast<const VkMutableDescriptorTypeListVALVE&>(*this); }
	VkMutableDescriptorTypeListVALVE& vkHandle() { return reinterpret_cast<VkMutableDescriptorTypeListVALVE&>(*this); }

	operator const VkMutableDescriptorTypeListVALVE&() const { return vkHandle(); };
	operator VkMutableDescriptorTypeListVALVE&() { return vkHandle(); };
};

struct MutableDescriptorTypeCreateInfoVALVE {
	StructureType sType {StructureType::mutableDescriptorTypeCreateInfoVALVE};
	const void* pNext {};
	uint32_t mutableDescriptorTypeListCount {};
	const MutableDescriptorTypeListVALVE* pMutableDescriptorTypeLists {};

	constexpr MutableDescriptorTypeCreateInfoVALVE(uint32_t xmutableDescriptorTypeListCount = {}, const MutableDescriptorTypeListVALVE* xpMutableDescriptorTypeLists = {}) : mutableDescriptorTypeListCount(xmutableDescriptorTypeListCount), pMutableDescriptorTypeLists(xpMutableDescriptorTypeLists) {}

	const VkMutableDescriptorTypeCreateInfoVALVE& vkHandle() const { return reinterpret_cast<const VkMutableDescriptorTypeCreateInfoVALVE&>(*this); }
	VkMutableDescriptorTypeCreateInfoVALVE& vkHandle() { return reinterpret_cast<VkMutableDescriptorTypeCreateInfoVALVE&>(*this); }

	operator const VkMutableDescriptorTypeCreateInfoVALVE&() const { return vkHandle(); };
	operator VkMutableDescriptorTypeCreateInfoVALVE&() { return vkHandle(); };
};



} // namespace vk

// The specification (vk.xml) itself is published under the following license:

// Copyright (c) 2015-2020 The Khronos Group Inc.
// 
// SPDX-License-Identifier: Apache-2.0 OR MIT
    