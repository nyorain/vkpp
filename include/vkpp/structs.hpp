// Copyright (c) 2019 nyorain
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

// Generated for vulkan version: 1.1.70
#if !defined(VK_VERSION_1_1) || 70 > VK_HEADER_VERSION
	#error "vulkan.h version too old, does not match generated version"
#endif

namespace vk {

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

	BindBufferMemoryInfo(Buffer xbuffer = {}, DeviceMemory xmemory = {}, DeviceSize xmemoryOffset = {}) : buffer(xbuffer), memory(xmemory), memoryOffset(xmemoryOffset) {}

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

	BindImageMemoryInfo(Image ximage = {}, DeviceMemory xmemory = {}, DeviceSize xmemoryOffset = {}) : image(ximage), memory(xmemory), memoryOffset(xmemoryOffset) {}

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

	PhysicalDevice16BitStorageFeatures(Bool32 xstorageBuffer16BitAccess = {}, Bool32 xuniformAndStorageBuffer16BitAccess = {}, Bool32 xstoragePushConstant16 = {}, Bool32 xstorageInputOutput16 = {}) : storageBuffer16BitAccess(xstorageBuffer16BitAccess), uniformAndStorageBuffer16BitAccess(xuniformAndStorageBuffer16BitAccess), storagePushConstant16(xstoragePushConstant16), storageInputOutput16(xstorageInputOutput16) {}

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

	MemoryDedicatedAllocateInfo(Image ximage = {}, Buffer xbuffer = {}) : image(ximage), buffer(xbuffer) {}

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

	MemoryAllocateFlagsInfo(MemoryAllocateFlags xflags = {}, uint32_t xdeviceMask = {}) : flags(xflags), deviceMask(xdeviceMask) {}

	const VkMemoryAllocateFlagsInfo& vkHandle() const { return reinterpret_cast<const VkMemoryAllocateFlagsInfo&>(*this); }
	VkMemoryAllocateFlagsInfo& vkHandle() { return reinterpret_cast<VkMemoryAllocateFlagsInfo&>(*this); }

	operator const VkMemoryAllocateFlagsInfo&() const { return vkHandle(); };
	operator VkMemoryAllocateFlagsInfo&() { return vkHandle(); };
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

struct DeviceGroupRenderPassBeginInfo {
	StructureType sType {StructureType::deviceGroupRenderPassBeginInfo};
	const void* pNext {};
	uint32_t deviceMask {};
	uint32_t deviceRenderAreaCount {};
	const Rect2D* pDeviceRenderAreas {};

	DeviceGroupRenderPassBeginInfo(uint32_t xdeviceMask = {}, uint32_t xdeviceRenderAreaCount = {}, const Rect2D* xpDeviceRenderAreas = {}) : deviceMask(xdeviceMask), deviceRenderAreaCount(xdeviceRenderAreaCount), pDeviceRenderAreas(xpDeviceRenderAreas) {}

	const VkDeviceGroupRenderPassBeginInfo& vkHandle() const { return reinterpret_cast<const VkDeviceGroupRenderPassBeginInfo&>(*this); }
	VkDeviceGroupRenderPassBeginInfo& vkHandle() { return reinterpret_cast<VkDeviceGroupRenderPassBeginInfo&>(*this); }

	operator const VkDeviceGroupRenderPassBeginInfo&() const { return vkHandle(); };
	operator VkDeviceGroupRenderPassBeginInfo&() { return vkHandle(); };
};

struct DeviceGroupCommandBufferBeginInfo {
	StructureType sType {StructureType::deviceGroupCommandBufferBeginInfo};
	const void* pNext {};
	uint32_t deviceMask {};

	DeviceGroupCommandBufferBeginInfo(uint32_t xdeviceMask = {}) : deviceMask(xdeviceMask) {}

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

	DeviceGroupSubmitInfo(uint32_t xwaitSemaphoreCount = {}, const uint32_t* xpWaitSemaphoreDeviceIndices = {}, uint32_t xcommandBufferCount = {}, const uint32_t* xpCommandBufferDeviceMasks = {}, uint32_t xsignalSemaphoreCount = {}, const uint32_t* xpSignalSemaphoreDeviceIndices = {}) : waitSemaphoreCount(xwaitSemaphoreCount), pWaitSemaphoreDeviceIndices(xpWaitSemaphoreDeviceIndices), commandBufferCount(xcommandBufferCount), pCommandBufferDeviceMasks(xpCommandBufferDeviceMasks), signalSemaphoreCount(xsignalSemaphoreCount), pSignalSemaphoreDeviceIndices(xpSignalSemaphoreDeviceIndices) {}

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

	DeviceGroupBindSparseInfo(uint32_t xresourceDeviceIndex = {}, uint32_t xmemoryDeviceIndex = {}) : resourceDeviceIndex(xresourceDeviceIndex), memoryDeviceIndex(xmemoryDeviceIndex) {}

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

	BindBufferMemoryDeviceGroupInfo(uint32_t xdeviceIndexCount = {}, const uint32_t* xpDeviceIndices = {}) : deviceIndexCount(xdeviceIndexCount), pDeviceIndices(xpDeviceIndices) {}

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

	BindImageMemoryDeviceGroupInfo(uint32_t xdeviceIndexCount = {}, const uint32_t* xpDeviceIndices = {}, uint32_t xsplitInstanceBindRegionCount = {}, const Rect2D* xpSplitInstanceBindRegions = {}) : deviceIndexCount(xdeviceIndexCount), pDeviceIndices(xpDeviceIndices), splitInstanceBindRegionCount(xsplitInstanceBindRegionCount), pSplitInstanceBindRegions(xpSplitInstanceBindRegions) {}

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

	DeviceGroupDeviceCreateInfo(uint32_t xphysicalDeviceCount = {}, const PhysicalDevice* xpPhysicalDevices = {}) : physicalDeviceCount(xphysicalDeviceCount), pPhysicalDevices(xpPhysicalDevices) {}

	const VkDeviceGroupDeviceCreateInfo& vkHandle() const { return reinterpret_cast<const VkDeviceGroupDeviceCreateInfo&>(*this); }
	VkDeviceGroupDeviceCreateInfo& vkHandle() { return reinterpret_cast<VkDeviceGroupDeviceCreateInfo&>(*this); }

	operator const VkDeviceGroupDeviceCreateInfo&() const { return vkHandle(); };
	operator VkDeviceGroupDeviceCreateInfo&() { return vkHandle(); };
};

struct BufferMemoryRequirementsInfo2 {
	StructureType sType {StructureType::bufferMemoryRequirementsInfo2};
	const void* pNext {};
	Buffer buffer {};

	BufferMemoryRequirementsInfo2(Buffer xbuffer = {}) : buffer(xbuffer) {}

	const VkBufferMemoryRequirementsInfo2& vkHandle() const { return reinterpret_cast<const VkBufferMemoryRequirementsInfo2&>(*this); }
	VkBufferMemoryRequirementsInfo2& vkHandle() { return reinterpret_cast<VkBufferMemoryRequirementsInfo2&>(*this); }

	operator const VkBufferMemoryRequirementsInfo2&() const { return vkHandle(); };
	operator VkBufferMemoryRequirementsInfo2&() { return vkHandle(); };
};

struct ImageMemoryRequirementsInfo2 {
	StructureType sType {StructureType::imageMemoryRequirementsInfo2};
	const void* pNext {};
	Image image {};

	ImageMemoryRequirementsInfo2(Image ximage = {}) : image(ximage) {}

	const VkImageMemoryRequirementsInfo2& vkHandle() const { return reinterpret_cast<const VkImageMemoryRequirementsInfo2&>(*this); }
	VkImageMemoryRequirementsInfo2& vkHandle() { return reinterpret_cast<VkImageMemoryRequirementsInfo2&>(*this); }

	operator const VkImageMemoryRequirementsInfo2&() const { return vkHandle(); };
	operator VkImageMemoryRequirementsInfo2&() { return vkHandle(); };
};

struct ImageSparseMemoryRequirementsInfo2 {
	StructureType sType {StructureType::imageSparseMemoryRequirementsInfo2};
	const void* pNext {};
	Image image {};

	ImageSparseMemoryRequirementsInfo2(Image ximage = {}) : image(ximage) {}

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

	PhysicalDeviceFeatures2(PhysicalDeviceFeatures xfeatures = {}) : features(xfeatures) {}

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

	PhysicalDeviceImageFormatInfo2(Format xformat = {}, ImageType xtype = {}, ImageTiling xtiling = {}, ImageUsageFlags xusage = {}, ImageCreateFlags xflags = {}) : format(xformat), type(xtype), tiling(xtiling), usage(xusage), flags(xflags) {}

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

	PhysicalDeviceSparseImageFormatInfo2(Format xformat = {}, ImageType xtype = {}, SampleCountBits xsamples = {}, ImageUsageFlags xusage = {}, ImageTiling xtiling = {}) : format(xformat), type(xtype), samples(xsamples), usage(xusage), tiling(xtiling) {}

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

	RenderPassInputAttachmentAspectCreateInfo(uint32_t xaspectReferenceCount = {}, const InputAttachmentAspectReference* xpAspectReferences = {}) : aspectReferenceCount(xaspectReferenceCount), pAspectReferences(xpAspectReferences) {}

	const VkRenderPassInputAttachmentAspectCreateInfo& vkHandle() const { return reinterpret_cast<const VkRenderPassInputAttachmentAspectCreateInfo&>(*this); }
	VkRenderPassInputAttachmentAspectCreateInfo& vkHandle() { return reinterpret_cast<VkRenderPassInputAttachmentAspectCreateInfo&>(*this); }

	operator const VkRenderPassInputAttachmentAspectCreateInfo&() const { return vkHandle(); };
	operator VkRenderPassInputAttachmentAspectCreateInfo&() { return vkHandle(); };
};

struct ImageViewUsageCreateInfo {
	StructureType sType {StructureType::imageViewUsageCreateInfo};
	const void* pNext {};
	ImageUsageFlags usage {};

	ImageViewUsageCreateInfo(ImageUsageFlags xusage = {}) : usage(xusage) {}

	const VkImageViewUsageCreateInfo& vkHandle() const { return reinterpret_cast<const VkImageViewUsageCreateInfo&>(*this); }
	VkImageViewUsageCreateInfo& vkHandle() { return reinterpret_cast<VkImageViewUsageCreateInfo&>(*this); }

	operator const VkImageViewUsageCreateInfo&() const { return vkHandle(); };
	operator VkImageViewUsageCreateInfo&() { return vkHandle(); };
};

struct PipelineTessellationDomainOriginStateCreateInfo {
	StructureType sType {StructureType::pipelineTessellationDomainOriginStateCreateInfo};
	const void* pNext {};
	TessellationDomainOrigin domainOrigin {};

	PipelineTessellationDomainOriginStateCreateInfo(TessellationDomainOrigin xdomainOrigin = {}) : domainOrigin(xdomainOrigin) {}

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

	RenderPassMultiviewCreateInfo(uint32_t xsubpassCount = {}, const uint32_t* xpViewMasks = {}, uint32_t xdependencyCount = {}, const int32_t* xpViewOffsets = {}, uint32_t xcorrelationMaskCount = {}, const uint32_t* xpCorrelationMasks = {}) : subpassCount(xsubpassCount), pViewMasks(xpViewMasks), dependencyCount(xdependencyCount), pViewOffsets(xpViewOffsets), correlationMaskCount(xcorrelationMaskCount), pCorrelationMasks(xpCorrelationMasks) {}

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

	PhysicalDeviceMultiviewFeatures(Bool32 xmultiview = {}, Bool32 xmultiviewGeometryShader = {}, Bool32 xmultiviewTessellationShader = {}) : multiview(xmultiview), multiviewGeometryShader(xmultiviewGeometryShader), multiviewTessellationShader(xmultiviewTessellationShader) {}

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

struct PhysicalDeviceVariablePointerFeatures {
	StructureType sType {StructureType::physicalDeviceVariablePointerFeatures};
	void* pNext {};
	Bool32 variablePointersStorageBuffer {};
	Bool32 variablePointers {};

	PhysicalDeviceVariablePointerFeatures(Bool32 xvariablePointersStorageBuffer = {}, Bool32 xvariablePointers = {}) : variablePointersStorageBuffer(xvariablePointersStorageBuffer), variablePointers(xvariablePointers) {}

	const VkPhysicalDeviceVariablePointerFeatures& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceVariablePointerFeatures&>(*this); }
	VkPhysicalDeviceVariablePointerFeatures& vkHandle() { return reinterpret_cast<VkPhysicalDeviceVariablePointerFeatures&>(*this); }

	operator const VkPhysicalDeviceVariablePointerFeatures&() const { return vkHandle(); };
	operator VkPhysicalDeviceVariablePointerFeatures&() { return vkHandle(); };
};

struct PhysicalDeviceProtectedMemoryFeatures {
	StructureType sType {StructureType::physicalDeviceProtectedMemoryFeatures};
	void* pNext {};
	Bool32 protectedMemory {};

	PhysicalDeviceProtectedMemoryFeatures(Bool32 xprotectedMemory = {}) : protectedMemory(xprotectedMemory) {}

	const VkPhysicalDeviceProtectedMemoryFeatures& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceProtectedMemoryFeatures&>(*this); }
	VkPhysicalDeviceProtectedMemoryFeatures& vkHandle() { return reinterpret_cast<VkPhysicalDeviceProtectedMemoryFeatures&>(*this); }

	operator const VkPhysicalDeviceProtectedMemoryFeatures&() const { return vkHandle(); };
	operator VkPhysicalDeviceProtectedMemoryFeatures&() { return vkHandle(); };
};

struct PhysicalDeviceProtectedMemoryProperties {
	StructureType sType {StructureType::physicalDeviceProtectedMemoryProperties};
	void* pNext {};
	Bool32 protectedNoFault {};

	PhysicalDeviceProtectedMemoryProperties(Bool32 xprotectedNoFault = {}) : protectedNoFault(xprotectedNoFault) {}

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

	DeviceQueueInfo2(DeviceQueueCreateFlags xflags = {}, uint32_t xqueueFamilyIndex = {}, uint32_t xqueueIndex = {}) : flags(xflags), queueFamilyIndex(xqueueFamilyIndex), queueIndex(xqueueIndex) {}

	const VkDeviceQueueInfo2& vkHandle() const { return reinterpret_cast<const VkDeviceQueueInfo2&>(*this); }
	VkDeviceQueueInfo2& vkHandle() { return reinterpret_cast<VkDeviceQueueInfo2&>(*this); }

	operator const VkDeviceQueueInfo2&() const { return vkHandle(); };
	operator VkDeviceQueueInfo2&() { return vkHandle(); };
};

struct ProtectedSubmitInfo {
	StructureType sType {StructureType::protectedSubmitInfo};
	const void* pNext {};
	Bool32 protectedSubmit {};

	ProtectedSubmitInfo(Bool32 xprotectedSubmit = {}) : protectedSubmit(xprotectedSubmit) {}

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

	SamplerYcbcrConversionCreateInfo(Format xformat = {}, SamplerYcbcrModelConversion xycbcrModel = {}, SamplerYcbcrRange xycbcrRange = {}, ComponentMapping xcomponents = {}, ChromaLocation xxChromaOffset = {}, ChromaLocation xyChromaOffset = {}, Filter xchromaFilter = {}, Bool32 xforceExplicitReconstruction = {}) : format(xformat), ycbcrModel(xycbcrModel), ycbcrRange(xycbcrRange), components(xcomponents), xChromaOffset(xxChromaOffset), yChromaOffset(xyChromaOffset), chromaFilter(xchromaFilter), forceExplicitReconstruction(xforceExplicitReconstruction) {}

	const VkSamplerYcbcrConversionCreateInfo& vkHandle() const { return reinterpret_cast<const VkSamplerYcbcrConversionCreateInfo&>(*this); }
	VkSamplerYcbcrConversionCreateInfo& vkHandle() { return reinterpret_cast<VkSamplerYcbcrConversionCreateInfo&>(*this); }

	operator const VkSamplerYcbcrConversionCreateInfo&() const { return vkHandle(); };
	operator VkSamplerYcbcrConversionCreateInfo&() { return vkHandle(); };
};

struct SamplerYcbcrConversionInfo {
	StructureType sType {StructureType::samplerYcbcrConversionInfo};
	const void* pNext {};
	SamplerYcbcrConversion conversion {};

	SamplerYcbcrConversionInfo(SamplerYcbcrConversion xconversion = {}) : conversion(xconversion) {}

	const VkSamplerYcbcrConversionInfo& vkHandle() const { return reinterpret_cast<const VkSamplerYcbcrConversionInfo&>(*this); }
	VkSamplerYcbcrConversionInfo& vkHandle() { return reinterpret_cast<VkSamplerYcbcrConversionInfo&>(*this); }

	operator const VkSamplerYcbcrConversionInfo&() const { return vkHandle(); };
	operator VkSamplerYcbcrConversionInfo&() { return vkHandle(); };
};

struct BindImagePlaneMemoryInfo {
	StructureType sType {StructureType::bindImagePlaneMemoryInfo};
	const void* pNext {};
	ImageAspectBits planeAspect {};

	BindImagePlaneMemoryInfo(ImageAspectBits xplaneAspect = {}) : planeAspect(xplaneAspect) {}

	const VkBindImagePlaneMemoryInfo& vkHandle() const { return reinterpret_cast<const VkBindImagePlaneMemoryInfo&>(*this); }
	VkBindImagePlaneMemoryInfo& vkHandle() { return reinterpret_cast<VkBindImagePlaneMemoryInfo&>(*this); }

	operator const VkBindImagePlaneMemoryInfo&() const { return vkHandle(); };
	operator VkBindImagePlaneMemoryInfo&() { return vkHandle(); };
};

struct ImagePlaneMemoryRequirementsInfo {
	StructureType sType {StructureType::imagePlaneMemoryRequirementsInfo};
	const void* pNext {};
	ImageAspectBits planeAspect {};

	ImagePlaneMemoryRequirementsInfo(ImageAspectBits xplaneAspect = {}) : planeAspect(xplaneAspect) {}

	const VkImagePlaneMemoryRequirementsInfo& vkHandle() const { return reinterpret_cast<const VkImagePlaneMemoryRequirementsInfo&>(*this); }
	VkImagePlaneMemoryRequirementsInfo& vkHandle() { return reinterpret_cast<VkImagePlaneMemoryRequirementsInfo&>(*this); }

	operator const VkImagePlaneMemoryRequirementsInfo&() const { return vkHandle(); };
	operator VkImagePlaneMemoryRequirementsInfo&() { return vkHandle(); };
};

struct PhysicalDeviceSamplerYcbcrConversionFeatures {
	StructureType sType {StructureType::physicalDeviceSamplerYcbcrConversionFeatures};
	void* pNext {};
	Bool32 samplerYcbcrConversion {};

	PhysicalDeviceSamplerYcbcrConversionFeatures(Bool32 xsamplerYcbcrConversion = {}) : samplerYcbcrConversion(xsamplerYcbcrConversion) {}

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
	void* pNext {};
	DescriptorUpdateTemplateCreateFlags flags {};
	uint32_t descriptorUpdateEntryCount {};
	const DescriptorUpdateTemplateEntry* pDescriptorUpdateEntries {};
	DescriptorUpdateTemplateType templateType {};
	DescriptorSetLayout descriptorSetLayout {};
	PipelineBindPoint pipelineBindPoint {};
	PipelineLayout pipelineLayout {};
	uint32_t set {};

	DescriptorUpdateTemplateCreateInfo(DescriptorUpdateTemplateCreateFlags xflags = {}, uint32_t xdescriptorUpdateEntryCount = {}, const DescriptorUpdateTemplateEntry* xpDescriptorUpdateEntries = {}, DescriptorUpdateTemplateType xtemplateType = {}, DescriptorSetLayout xdescriptorSetLayout = {}, PipelineBindPoint xpipelineBindPoint = {}, PipelineLayout xpipelineLayout = {}, uint32_t xset = {}) : flags(xflags), descriptorUpdateEntryCount(xdescriptorUpdateEntryCount), pDescriptorUpdateEntries(xpDescriptorUpdateEntries), templateType(xtemplateType), descriptorSetLayout(xdescriptorSetLayout), pipelineBindPoint(xpipelineBindPoint), pipelineLayout(xpipelineLayout), set(xset) {}

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

	PhysicalDeviceExternalImageFormatInfo(ExternalMemoryHandleTypeBits xhandleType = {}) : handleType(xhandleType) {}

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

	PhysicalDeviceExternalBufferInfo(BufferCreateFlags xflags = {}, BufferUsageFlags xusage = {}, ExternalMemoryHandleTypeBits xhandleType = {}) : flags(xflags), usage(xusage), handleType(xhandleType) {}

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

	ExternalMemoryImageCreateInfo(ExternalMemoryHandleTypeFlags xhandleTypes = {}) : handleTypes(xhandleTypes) {}

	const VkExternalMemoryImageCreateInfo& vkHandle() const { return reinterpret_cast<const VkExternalMemoryImageCreateInfo&>(*this); }
	VkExternalMemoryImageCreateInfo& vkHandle() { return reinterpret_cast<VkExternalMemoryImageCreateInfo&>(*this); }

	operator const VkExternalMemoryImageCreateInfo&() const { return vkHandle(); };
	operator VkExternalMemoryImageCreateInfo&() { return vkHandle(); };
};

struct ExternalMemoryBufferCreateInfo {
	StructureType sType {StructureType::externalMemoryBufferCreateInfo};
	const void* pNext {};
	ExternalMemoryHandleTypeFlags handleTypes {};

	ExternalMemoryBufferCreateInfo(ExternalMemoryHandleTypeFlags xhandleTypes = {}) : handleTypes(xhandleTypes) {}

	const VkExternalMemoryBufferCreateInfo& vkHandle() const { return reinterpret_cast<const VkExternalMemoryBufferCreateInfo&>(*this); }
	VkExternalMemoryBufferCreateInfo& vkHandle() { return reinterpret_cast<VkExternalMemoryBufferCreateInfo&>(*this); }

	operator const VkExternalMemoryBufferCreateInfo&() const { return vkHandle(); };
	operator VkExternalMemoryBufferCreateInfo&() { return vkHandle(); };
};

struct ExportMemoryAllocateInfo {
	StructureType sType {StructureType::exportMemoryAllocateInfo};
	const void* pNext {};
	ExternalMemoryHandleTypeFlags handleTypes {};

	ExportMemoryAllocateInfo(ExternalMemoryHandleTypeFlags xhandleTypes = {}) : handleTypes(xhandleTypes) {}

	const VkExportMemoryAllocateInfo& vkHandle() const { return reinterpret_cast<const VkExportMemoryAllocateInfo&>(*this); }
	VkExportMemoryAllocateInfo& vkHandle() { return reinterpret_cast<VkExportMemoryAllocateInfo&>(*this); }

	operator const VkExportMemoryAllocateInfo&() const { return vkHandle(); };
	operator VkExportMemoryAllocateInfo&() { return vkHandle(); };
};

struct PhysicalDeviceExternalFenceInfo {
	StructureType sType {StructureType::physicalDeviceExternalFenceInfo};
	const void* pNext {};
	ExternalFenceHandleTypeBits handleType {};

	PhysicalDeviceExternalFenceInfo(ExternalFenceHandleTypeBits xhandleType = {}) : handleType(xhandleType) {}

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

	ExportFenceCreateInfo(ExternalFenceHandleTypeFlags xhandleTypes = {}) : handleTypes(xhandleTypes) {}

	const VkExportFenceCreateInfo& vkHandle() const { return reinterpret_cast<const VkExportFenceCreateInfo&>(*this); }
	VkExportFenceCreateInfo& vkHandle() { return reinterpret_cast<VkExportFenceCreateInfo&>(*this); }

	operator const VkExportFenceCreateInfo&() const { return vkHandle(); };
	operator VkExportFenceCreateInfo&() { return vkHandle(); };
};

struct ExportSemaphoreCreateInfo {
	StructureType sType {StructureType::exportSemaphoreCreateInfo};
	const void* pNext {};
	ExternalSemaphoreHandleTypeFlags handleTypes {};

	ExportSemaphoreCreateInfo(ExternalSemaphoreHandleTypeFlags xhandleTypes = {}) : handleTypes(xhandleTypes) {}

	const VkExportSemaphoreCreateInfo& vkHandle() const { return reinterpret_cast<const VkExportSemaphoreCreateInfo&>(*this); }
	VkExportSemaphoreCreateInfo& vkHandle() { return reinterpret_cast<VkExportSemaphoreCreateInfo&>(*this); }

	operator const VkExportSemaphoreCreateInfo&() const { return vkHandle(); };
	operator VkExportSemaphoreCreateInfo&() { return vkHandle(); };
};

struct PhysicalDeviceExternalSemaphoreInfo {
	StructureType sType {StructureType::physicalDeviceExternalSemaphoreInfo};
	const void* pNext {};
	ExternalSemaphoreHandleTypeBits handleType {};

	PhysicalDeviceExternalSemaphoreInfo(ExternalSemaphoreHandleTypeBits xhandleType = {}) : handleType(xhandleType) {}

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

	DescriptorSetLayoutCreateInfo(DescriptorSetLayoutCreateFlags xflags = {}, uint32_t xbindingCount = {}, const DescriptorSetLayoutBinding* xpBindings = {}) : flags(xflags), bindingCount(xbindingCount), pBindings(xpBindings) {}

	const VkDescriptorSetLayoutCreateInfo& vkHandle() const { return reinterpret_cast<const VkDescriptorSetLayoutCreateInfo&>(*this); }
	VkDescriptorSetLayoutCreateInfo& vkHandle() { return reinterpret_cast<VkDescriptorSetLayoutCreateInfo&>(*this); }

	operator const VkDescriptorSetLayoutCreateInfo&() const { return vkHandle(); };
	operator VkDescriptorSetLayoutCreateInfo&() { return vkHandle(); };
};

struct PhysicalDeviceShaderDrawParameterFeatures {
	StructureType sType {StructureType::physicalDeviceShaderDrawParameterFeatures};
	void* pNext {};
	Bool32 shaderDrawParameters {};

	PhysicalDeviceShaderDrawParameterFeatures(Bool32 xshaderDrawParameters = {}) : shaderDrawParameters(xshaderDrawParameters) {}

	const VkPhysicalDeviceShaderDrawParameterFeatures& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceShaderDrawParameterFeatures&>(*this); }
	VkPhysicalDeviceShaderDrawParameterFeatures& vkHandle() { return reinterpret_cast<VkPhysicalDeviceShaderDrawParameterFeatures&>(*this); }

	operator const VkPhysicalDeviceShaderDrawParameterFeatures&() const { return vkHandle(); };
	operator VkPhysicalDeviceShaderDrawParameterFeatures&() { return vkHandle(); };
};


struct ApplicationInfo {
	StructureType sType {StructureType::applicationInfo};
	const void* pNext {};
	const char* pApplicationName {};
	uint32_t applicationVersion {};
	const char* pEngineName {};
	uint32_t engineVersion {};
	uint32_t apiVersion {};

	ApplicationInfo(const char* xpApplicationName = {}, uint32_t xapplicationVersion = {}, const char* xpEngineName = {}, uint32_t xengineVersion = {}, uint32_t xapiVersion = {}) : pApplicationName(xpApplicationName), applicationVersion(xapplicationVersion), pEngineName(xpEngineName), engineVersion(xengineVersion), apiVersion(xapiVersion) {}

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

	InstanceCreateInfo(InstanceCreateFlags xflags = {}, const ApplicationInfo* xpApplicationInfo = {}, uint32_t xenabledLayerCount = {}, const char* const* xppEnabledLayerNames = {}, uint32_t xenabledExtensionCount = {}, const char* const* xppEnabledExtensionNames = {}) : flags(xflags), pApplicationInfo(xpApplicationInfo), enabledLayerCount(xenabledLayerCount), ppEnabledLayerNames(xppEnabledLayerNames), enabledExtensionCount(xenabledExtensionCount), ppEnabledExtensionNames(xppEnabledExtensionNames) {}

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

	DeviceQueueCreateInfo(DeviceQueueCreateFlags xflags = {}, uint32_t xqueueFamilyIndex = {}, uint32_t xqueueCount = {}, const float* xpQueuePriorities = {}) : flags(xflags), queueFamilyIndex(xqueueFamilyIndex), queueCount(xqueueCount), pQueuePriorities(xpQueuePriorities) {}

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

	DeviceCreateInfo(DeviceCreateFlags xflags = {}, uint32_t xqueueCreateInfoCount = {}, const DeviceQueueCreateInfo* xpQueueCreateInfos = {}, uint32_t xenabledLayerCount = {}, const char* const* xppEnabledLayerNames = {}, uint32_t xenabledExtensionCount = {}, const char* const* xppEnabledExtensionNames = {}, const PhysicalDeviceFeatures* xpEnabledFeatures = {}) : flags(xflags), queueCreateInfoCount(xqueueCreateInfoCount), pQueueCreateInfos(xpQueueCreateInfos), enabledLayerCount(xenabledLayerCount), ppEnabledLayerNames(xppEnabledLayerNames), enabledExtensionCount(xenabledExtensionCount), ppEnabledExtensionNames(xppEnabledExtensionNames), pEnabledFeatures(xpEnabledFeatures) {}

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

	SubmitInfo(uint32_t xwaitSemaphoreCount = {}, const Semaphore* xpWaitSemaphores = {}, const PipelineStageFlags* xpWaitDstStageMask = {}, uint32_t xcommandBufferCount = {}, const CommandBuffer* xpCommandBuffers = {}, uint32_t xsignalSemaphoreCount = {}, const Semaphore* xpSignalSemaphores = {}) : waitSemaphoreCount(xwaitSemaphoreCount), pWaitSemaphores(xpWaitSemaphores), pWaitDstStageMask(xpWaitDstStageMask), commandBufferCount(xcommandBufferCount), pCommandBuffers(xpCommandBuffers), signalSemaphoreCount(xsignalSemaphoreCount), pSignalSemaphores(xpSignalSemaphores) {}

	const VkSubmitInfo& vkHandle() const { return reinterpret_cast<const VkSubmitInfo&>(*this); }
	VkSubmitInfo& vkHandle() { return reinterpret_cast<VkSubmitInfo&>(*this); }

	operator const VkSubmitInfo&() const { return vkHandle(); };
	operator VkSubmitInfo&() { return vkHandle(); };
};

struct MemoryAllocateInfo {
	StructureType sType {StructureType::memoryAllocateInfo};
	const void* pNext {};
	DeviceSize allocationSize {};
	uint32_t memoryTypeIndex {};

	MemoryAllocateInfo(DeviceSize xallocationSize = {}, uint32_t xmemoryTypeIndex = {}) : allocationSize(xallocationSize), memoryTypeIndex(xmemoryTypeIndex) {}

	const VkMemoryAllocateInfo& vkHandle() const { return reinterpret_cast<const VkMemoryAllocateInfo&>(*this); }
	VkMemoryAllocateInfo& vkHandle() { return reinterpret_cast<VkMemoryAllocateInfo&>(*this); }

	operator const VkMemoryAllocateInfo&() const { return vkHandle(); };
	operator VkMemoryAllocateInfo&() { return vkHandle(); };
};

struct MappedMemoryRange {
	StructureType sType {StructureType::mappedMemoryRange};
	const void* pNext {};
	DeviceMemory memory {};
	DeviceSize offset {};
	DeviceSize size {};

	MappedMemoryRange(DeviceMemory xmemory = {}, DeviceSize xoffset = {}, DeviceSize xsize = {}) : memory(xmemory), offset(xoffset), size(xsize) {}

	const VkMappedMemoryRange& vkHandle() const { return reinterpret_cast<const VkMappedMemoryRange&>(*this); }
	VkMappedMemoryRange& vkHandle() { return reinterpret_cast<VkMappedMemoryRange&>(*this); }

	operator const VkMappedMemoryRange&() const { return vkHandle(); };
	operator VkMappedMemoryRange&() { return vkHandle(); };
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

struct Offset3D {
	int32_t x {};
	int32_t y {};
	int32_t z {};

	const VkOffset3D& vkHandle() const { return reinterpret_cast<const VkOffset3D&>(*this); }
	VkOffset3D& vkHandle() { return reinterpret_cast<VkOffset3D&>(*this); }

	operator const VkOffset3D&() const { return vkHandle(); };
	operator VkOffset3D&() { return vkHandle(); };
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

	BindSparseInfo(uint32_t xwaitSemaphoreCount = {}, const Semaphore* xpWaitSemaphores = {}, uint32_t xbufferBindCount = {}, const SparseBufferMemoryBindInfo* xpBufferBinds = {}, uint32_t ximageOpaqueBindCount = {}, const SparseImageOpaqueMemoryBindInfo* xpImageOpaqueBinds = {}, uint32_t ximageBindCount = {}, const SparseImageMemoryBindInfo* xpImageBinds = {}, uint32_t xsignalSemaphoreCount = {}, const Semaphore* xpSignalSemaphores = {}) : waitSemaphoreCount(xwaitSemaphoreCount), pWaitSemaphores(xpWaitSemaphores), bufferBindCount(xbufferBindCount), pBufferBinds(xpBufferBinds), imageOpaqueBindCount(ximageOpaqueBindCount), pImageOpaqueBinds(xpImageOpaqueBinds), imageBindCount(ximageBindCount), pImageBinds(xpImageBinds), signalSemaphoreCount(xsignalSemaphoreCount), pSignalSemaphores(xpSignalSemaphores) {}

	const VkBindSparseInfo& vkHandle() const { return reinterpret_cast<const VkBindSparseInfo&>(*this); }
	VkBindSparseInfo& vkHandle() { return reinterpret_cast<VkBindSparseInfo&>(*this); }

	operator const VkBindSparseInfo&() const { return vkHandle(); };
	operator VkBindSparseInfo&() { return vkHandle(); };
};

struct FenceCreateInfo {
	StructureType sType {StructureType::fenceCreateInfo};
	const void* pNext {};
	FenceCreateFlags flags {};

	FenceCreateInfo(FenceCreateFlags xflags = {}) : flags(xflags) {}

	const VkFenceCreateInfo& vkHandle() const { return reinterpret_cast<const VkFenceCreateInfo&>(*this); }
	VkFenceCreateInfo& vkHandle() { return reinterpret_cast<VkFenceCreateInfo&>(*this); }

	operator const VkFenceCreateInfo&() const { return vkHandle(); };
	operator VkFenceCreateInfo&() { return vkHandle(); };
};

struct SemaphoreCreateInfo {
	StructureType sType {StructureType::semaphoreCreateInfo};
	const void* pNext {};
	SemaphoreCreateFlags flags {};

	SemaphoreCreateInfo(SemaphoreCreateFlags xflags = {}) : flags(xflags) {}

	const VkSemaphoreCreateInfo& vkHandle() const { return reinterpret_cast<const VkSemaphoreCreateInfo&>(*this); }
	VkSemaphoreCreateInfo& vkHandle() { return reinterpret_cast<VkSemaphoreCreateInfo&>(*this); }

	operator const VkSemaphoreCreateInfo&() const { return vkHandle(); };
	operator VkSemaphoreCreateInfo&() { return vkHandle(); };
};

struct EventCreateInfo {
	StructureType sType {StructureType::eventCreateInfo};
	const void* pNext {};
	EventCreateFlags flags {};

	EventCreateInfo(EventCreateFlags xflags = {}) : flags(xflags) {}

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

	QueryPoolCreateInfo(QueryPoolCreateFlags xflags = {}, QueryType xqueryType = {}, uint32_t xqueryCount = {}, QueryPipelineStatisticFlags xpipelineStatistics = {}) : flags(xflags), queryType(xqueryType), queryCount(xqueryCount), pipelineStatistics(xpipelineStatistics) {}

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

	BufferCreateInfo(BufferCreateFlags xflags = {}, DeviceSize xsize = {}, BufferUsageFlags xusage = {}, SharingMode xsharingMode = {}, uint32_t xqueueFamilyIndexCount = {}, const uint32_t* xpQueueFamilyIndices = {}) : flags(xflags), size(xsize), usage(xusage), sharingMode(xsharingMode), queueFamilyIndexCount(xqueueFamilyIndexCount), pQueueFamilyIndices(xpQueueFamilyIndices) {}

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

	BufferViewCreateInfo(BufferViewCreateFlags xflags = {}, Buffer xbuffer = {}, Format xformat = {}, DeviceSize xoffset = {}, DeviceSize xrange = {}) : flags(xflags), buffer(xbuffer), format(xformat), offset(xoffset), range(xrange) {}

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

	ImageCreateInfo(ImageCreateFlags xflags = {}, ImageType ximageType = {}, Format xformat = {}, Extent3D xextent = {}, uint32_t xmipLevels = {}, uint32_t xarrayLayers = {}, SampleCountBits xsamples = {}, ImageTiling xtiling = {}, ImageUsageFlags xusage = {}, SharingMode xsharingMode = {}, uint32_t xqueueFamilyIndexCount = {}, const uint32_t* xpQueueFamilyIndices = {}, ImageLayout xinitialLayout = {}) : flags(xflags), imageType(ximageType), format(xformat), extent(xextent), mipLevels(xmipLevels), arrayLayers(xarrayLayers), samples(xsamples), tiling(xtiling), usage(xusage), sharingMode(xsharingMode), queueFamilyIndexCount(xqueueFamilyIndexCount), pQueueFamilyIndices(xpQueueFamilyIndices), initialLayout(xinitialLayout) {}

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

struct ImageViewCreateInfo {
	StructureType sType {StructureType::imageViewCreateInfo};
	const void* pNext {};
	ImageViewCreateFlags flags {};
	Image image {};
	ImageViewType viewType {};
	Format format {};
	ComponentMapping components {};
	ImageSubresourceRange subresourceRange {};

	ImageViewCreateInfo(ImageViewCreateFlags xflags = {}, Image ximage = {}, ImageViewType xviewType = {}, Format xformat = {}, ComponentMapping xcomponents = {}, ImageSubresourceRange xsubresourceRange = {}) : flags(xflags), image(ximage), viewType(xviewType), format(xformat), components(xcomponents), subresourceRange(xsubresourceRange) {}

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

	ShaderModuleCreateInfo(ShaderModuleCreateFlags xflags = {}, size_t xcodeSize = {}, const uint32_t* xpCode = {}) : flags(xflags), codeSize(xcodeSize), pCode(xpCode) {}

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

	PipelineCacheCreateInfo(PipelineCacheCreateFlags xflags = {}, size_t xinitialDataSize = {}, const void* xpInitialData = {}) : flags(xflags), initialDataSize(xinitialDataSize), pInitialData(xpInitialData) {}

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

	PipelineShaderStageCreateInfo(PipelineShaderStageCreateFlags xflags = {}, ShaderStageBits xstage = {}, ShaderModule xmodule = {}, const char* xpName = {}, const SpecializationInfo* xpSpecializationInfo = {}) : flags(xflags), stage(xstage), module(xmodule), pName(xpName), pSpecializationInfo(xpSpecializationInfo) {}

	const VkPipelineShaderStageCreateInfo& vkHandle() const { return reinterpret_cast<const VkPipelineShaderStageCreateInfo&>(*this); }
	VkPipelineShaderStageCreateInfo& vkHandle() { return reinterpret_cast<VkPipelineShaderStageCreateInfo&>(*this); }

	operator const VkPipelineShaderStageCreateInfo&() const { return vkHandle(); };
	operator VkPipelineShaderStageCreateInfo&() { return vkHandle(); };
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

	PipelineVertexInputStateCreateInfo(PipelineVertexInputStateCreateFlags xflags = {}, uint32_t xvertexBindingDescriptionCount = {}, const VertexInputBindingDescription* xpVertexBindingDescriptions = {}, uint32_t xvertexAttributeDescriptionCount = {}, const VertexInputAttributeDescription* xpVertexAttributeDescriptions = {}) : flags(xflags), vertexBindingDescriptionCount(xvertexBindingDescriptionCount), pVertexBindingDescriptions(xpVertexBindingDescriptions), vertexAttributeDescriptionCount(xvertexAttributeDescriptionCount), pVertexAttributeDescriptions(xpVertexAttributeDescriptions) {}

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

	PipelineInputAssemblyStateCreateInfo(PipelineInputAssemblyStateCreateFlags xflags = {}, PrimitiveTopology xtopology = {}, Bool32 xprimitiveRestartEnable = {}) : flags(xflags), topology(xtopology), primitiveRestartEnable(xprimitiveRestartEnable) {}

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

	PipelineTessellationStateCreateInfo(PipelineTessellationStateCreateFlags xflags = {}, uint32_t xpatchControlPoints = {}) : flags(xflags), patchControlPoints(xpatchControlPoints) {}

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

	PipelineViewportStateCreateInfo(PipelineViewportStateCreateFlags xflags = {}, uint32_t xviewportCount = {}, const Viewport* xpViewports = {}, uint32_t xscissorCount = {}, const Rect2D* xpScissors = {}) : flags(xflags), viewportCount(xviewportCount), pViewports(xpViewports), scissorCount(xscissorCount), pScissors(xpScissors) {}

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

	PipelineRasterizationStateCreateInfo(PipelineRasterizationStateCreateFlags xflags = {}, Bool32 xdepthClampEnable = {}, Bool32 xrasterizerDiscardEnable = {}, PolygonMode xpolygonMode = {}, CullModeFlags xcullMode = {}, FrontFace xfrontFace = {}, Bool32 xdepthBiasEnable = {}, float xdepthBiasConstantFactor = {}, float xdepthBiasClamp = {}, float xdepthBiasSlopeFactor = {}, float xlineWidth = {}) : flags(xflags), depthClampEnable(xdepthClampEnable), rasterizerDiscardEnable(xrasterizerDiscardEnable), polygonMode(xpolygonMode), cullMode(xcullMode), frontFace(xfrontFace), depthBiasEnable(xdepthBiasEnable), depthBiasConstantFactor(xdepthBiasConstantFactor), depthBiasClamp(xdepthBiasClamp), depthBiasSlopeFactor(xdepthBiasSlopeFactor), lineWidth(xlineWidth) {}

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

	PipelineMultisampleStateCreateInfo(PipelineMultisampleStateCreateFlags xflags = {}, SampleCountBits xrasterizationSamples = {}, Bool32 xsampleShadingEnable = {}, float xminSampleShading = {}, const SampleMask* xpSampleMask = {}, Bool32 xalphaToCoverageEnable = {}, Bool32 xalphaToOneEnable = {}) : flags(xflags), rasterizationSamples(xrasterizationSamples), sampleShadingEnable(xsampleShadingEnable), minSampleShading(xminSampleShading), pSampleMask(xpSampleMask), alphaToCoverageEnable(xalphaToCoverageEnable), alphaToOneEnable(xalphaToOneEnable) {}

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

	PipelineDepthStencilStateCreateInfo(PipelineDepthStencilStateCreateFlags xflags = {}, Bool32 xdepthTestEnable = {}, Bool32 xdepthWriteEnable = {}, CompareOp xdepthCompareOp = {}, Bool32 xdepthBoundsTestEnable = {}, Bool32 xstencilTestEnable = {}, StencilOpState xfront = {}, StencilOpState xback = {}, float xminDepthBounds = {}, float xmaxDepthBounds = {}) : flags(xflags), depthTestEnable(xdepthTestEnable), depthWriteEnable(xdepthWriteEnable), depthCompareOp(xdepthCompareOp), depthBoundsTestEnable(xdepthBoundsTestEnable), stencilTestEnable(xstencilTestEnable), front(xfront), back(xback), minDepthBounds(xminDepthBounds), maxDepthBounds(xmaxDepthBounds) {}

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

	PipelineColorBlendStateCreateInfo(PipelineColorBlendStateCreateFlags xflags = {}, Bool32 xlogicOpEnable = {}, LogicOp xlogicOp = {}, uint32_t xattachmentCount = {}, const PipelineColorBlendAttachmentState* xpAttachments = {}, std::array<float, 4> xblendConstants = {}) : flags(xflags), logicOpEnable(xlogicOpEnable), logicOp(xlogicOp), attachmentCount(xattachmentCount), pAttachments(xpAttachments), blendConstants(xblendConstants) {}

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

	PipelineDynamicStateCreateInfo(PipelineDynamicStateCreateFlags xflags = {}, uint32_t xdynamicStateCount = {}, const DynamicState* xpDynamicStates = {}) : flags(xflags), dynamicStateCount(xdynamicStateCount), pDynamicStates(xpDynamicStates) {}

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

	GraphicsPipelineCreateInfo(PipelineCreateFlags xflags = {}, uint32_t xstageCount = {}, const PipelineShaderStageCreateInfo* xpStages = {}, const PipelineVertexInputStateCreateInfo* xpVertexInputState = {}, const PipelineInputAssemblyStateCreateInfo* xpInputAssemblyState = {}, const PipelineTessellationStateCreateInfo* xpTessellationState = {}, const PipelineViewportStateCreateInfo* xpViewportState = {}, const PipelineRasterizationStateCreateInfo* xpRasterizationState = {}, const PipelineMultisampleStateCreateInfo* xpMultisampleState = {}, const PipelineDepthStencilStateCreateInfo* xpDepthStencilState = {}, const PipelineColorBlendStateCreateInfo* xpColorBlendState = {}, const PipelineDynamicStateCreateInfo* xpDynamicState = {}, PipelineLayout xlayout = {}, RenderPass xrenderPass = {}, uint32_t xsubpass = {}, Pipeline xbasePipelineHandle = {}, int32_t xbasePipelineIndex = {}) : flags(xflags), stageCount(xstageCount), pStages(xpStages), pVertexInputState(xpVertexInputState), pInputAssemblyState(xpInputAssemblyState), pTessellationState(xpTessellationState), pViewportState(xpViewportState), pRasterizationState(xpRasterizationState), pMultisampleState(xpMultisampleState), pDepthStencilState(xpDepthStencilState), pColorBlendState(xpColorBlendState), pDynamicState(xpDynamicState), layout(xlayout), renderPass(xrenderPass), subpass(xsubpass), basePipelineHandle(xbasePipelineHandle), basePipelineIndex(xbasePipelineIndex) {}

	const VkGraphicsPipelineCreateInfo& vkHandle() const { return reinterpret_cast<const VkGraphicsPipelineCreateInfo&>(*this); }
	VkGraphicsPipelineCreateInfo& vkHandle() { return reinterpret_cast<VkGraphicsPipelineCreateInfo&>(*this); }

	operator const VkGraphicsPipelineCreateInfo&() const { return vkHandle(); };
	operator VkGraphicsPipelineCreateInfo&() { return vkHandle(); };
};

struct ComputePipelineCreateInfo {
	StructureType sType {StructureType::computePipelineCreateInfo};
	const void* pNext {};
	PipelineCreateFlags flags {};
	PipelineShaderStageCreateInfo stage {};
	PipelineLayout layout {};
	Pipeline basePipelineHandle {};
	int32_t basePipelineIndex {};

	ComputePipelineCreateInfo(PipelineCreateFlags xflags = {}, PipelineShaderStageCreateInfo xstage = {}, PipelineLayout xlayout = {}, Pipeline xbasePipelineHandle = {}, int32_t xbasePipelineIndex = {}) : flags(xflags), stage(xstage), layout(xlayout), basePipelineHandle(xbasePipelineHandle), basePipelineIndex(xbasePipelineIndex) {}

	const VkComputePipelineCreateInfo& vkHandle() const { return reinterpret_cast<const VkComputePipelineCreateInfo&>(*this); }
	VkComputePipelineCreateInfo& vkHandle() { return reinterpret_cast<VkComputePipelineCreateInfo&>(*this); }

	operator const VkComputePipelineCreateInfo&() const { return vkHandle(); };
	operator VkComputePipelineCreateInfo&() { return vkHandle(); };
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

	PipelineLayoutCreateInfo(PipelineLayoutCreateFlags xflags = {}, uint32_t xsetLayoutCount = {}, const DescriptorSetLayout* xpSetLayouts = {}, uint32_t xpushConstantRangeCount = {}, const PushConstantRange* xpPushConstantRanges = {}) : flags(xflags), setLayoutCount(xsetLayoutCount), pSetLayouts(xpSetLayouts), pushConstantRangeCount(xpushConstantRangeCount), pPushConstantRanges(xpPushConstantRanges) {}

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

	SamplerCreateInfo(SamplerCreateFlags xflags = {}, Filter xmagFilter = {}, Filter xminFilter = {}, SamplerMipmapMode xmipmapMode = {}, SamplerAddressMode xaddressModeU = {}, SamplerAddressMode xaddressModeV = {}, SamplerAddressMode xaddressModeW = {}, float xmipLodBias = {}, Bool32 xanisotropyEnable = {}, float xmaxAnisotropy = {}, Bool32 xcompareEnable = {}, CompareOp xcompareOp = {}, float xminLod = {}, float xmaxLod = {}, BorderColor xborderColor = {}, Bool32 xunnormalizedCoordinates = {}) : flags(xflags), magFilter(xmagFilter), minFilter(xminFilter), mipmapMode(xmipmapMode), addressModeU(xaddressModeU), addressModeV(xaddressModeV), addressModeW(xaddressModeW), mipLodBias(xmipLodBias), anisotropyEnable(xanisotropyEnable), maxAnisotropy(xmaxAnisotropy), compareEnable(xcompareEnable), compareOp(xcompareOp), minLod(xminLod), maxLod(xmaxLod), borderColor(xborderColor), unnormalizedCoordinates(xunnormalizedCoordinates) {}

	const VkSamplerCreateInfo& vkHandle() const { return reinterpret_cast<const VkSamplerCreateInfo&>(*this); }
	VkSamplerCreateInfo& vkHandle() { return reinterpret_cast<VkSamplerCreateInfo&>(*this); }

	operator const VkSamplerCreateInfo&() const { return vkHandle(); };
	operator VkSamplerCreateInfo&() { return vkHandle(); };
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

	DescriptorPoolCreateInfo(DescriptorPoolCreateFlags xflags = {}, uint32_t xmaxSets = {}, uint32_t xpoolSizeCount = {}, const DescriptorPoolSize* xpPoolSizes = {}) : flags(xflags), maxSets(xmaxSets), poolSizeCount(xpoolSizeCount), pPoolSizes(xpPoolSizes) {}

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

	DescriptorSetAllocateInfo(DescriptorPool xdescriptorPool = {}, uint32_t xdescriptorSetCount = {}, const DescriptorSetLayout* xpSetLayouts = {}) : descriptorPool(xdescriptorPool), descriptorSetCount(xdescriptorSetCount), pSetLayouts(xpSetLayouts) {}

	const VkDescriptorSetAllocateInfo& vkHandle() const { return reinterpret_cast<const VkDescriptorSetAllocateInfo&>(*this); }
	VkDescriptorSetAllocateInfo& vkHandle() { return reinterpret_cast<VkDescriptorSetAllocateInfo&>(*this); }

	operator const VkDescriptorSetAllocateInfo&() const { return vkHandle(); };
	operator VkDescriptorSetAllocateInfo&() { return vkHandle(); };
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

struct DescriptorBufferInfo {
	Buffer buffer {};
	DeviceSize offset {};
	DeviceSize range {};

	const VkDescriptorBufferInfo& vkHandle() const { return reinterpret_cast<const VkDescriptorBufferInfo&>(*this); }
	VkDescriptorBufferInfo& vkHandle() { return reinterpret_cast<VkDescriptorBufferInfo&>(*this); }

	operator const VkDescriptorBufferInfo&() const { return vkHandle(); };
	operator VkDescriptorBufferInfo&() { return vkHandle(); };
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

	WriteDescriptorSet(DescriptorSet xdstSet = {}, uint32_t xdstBinding = {}, uint32_t xdstArrayElement = {}, uint32_t xdescriptorCount = {}, DescriptorType xdescriptorType = {}, const DescriptorImageInfo* xpImageInfo = {}, const DescriptorBufferInfo* xpBufferInfo = {}, const BufferView* xpTexelBufferView = {}) : dstSet(xdstSet), dstBinding(xdstBinding), dstArrayElement(xdstArrayElement), descriptorCount(xdescriptorCount), descriptorType(xdescriptorType), pImageInfo(xpImageInfo), pBufferInfo(xpBufferInfo), pTexelBufferView(xpTexelBufferView) {}

	const VkWriteDescriptorSet& vkHandle() const { return reinterpret_cast<const VkWriteDescriptorSet&>(*this); }
	VkWriteDescriptorSet& vkHandle() { return reinterpret_cast<VkWriteDescriptorSet&>(*this); }

	operator const VkWriteDescriptorSet&() const { return vkHandle(); };
	operator VkWriteDescriptorSet&() { return vkHandle(); };
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

	CopyDescriptorSet(DescriptorSet xsrcSet = {}, uint32_t xsrcBinding = {}, uint32_t xsrcArrayElement = {}, DescriptorSet xdstSet = {}, uint32_t xdstBinding = {}, uint32_t xdstArrayElement = {}, uint32_t xdescriptorCount = {}) : srcSet(xsrcSet), srcBinding(xsrcBinding), srcArrayElement(xsrcArrayElement), dstSet(xdstSet), dstBinding(xdstBinding), dstArrayElement(xdstArrayElement), descriptorCount(xdescriptorCount) {}

	const VkCopyDescriptorSet& vkHandle() const { return reinterpret_cast<const VkCopyDescriptorSet&>(*this); }
	VkCopyDescriptorSet& vkHandle() { return reinterpret_cast<VkCopyDescriptorSet&>(*this); }

	operator const VkCopyDescriptorSet&() const { return vkHandle(); };
	operator VkCopyDescriptorSet&() { return vkHandle(); };
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

	FramebufferCreateInfo(FramebufferCreateFlags xflags = {}, RenderPass xrenderPass = {}, uint32_t xattachmentCount = {}, const ImageView* xpAttachments = {}, uint32_t xwidth = {}, uint32_t xheight = {}, uint32_t xlayers = {}) : flags(xflags), renderPass(xrenderPass), attachmentCount(xattachmentCount), pAttachments(xpAttachments), width(xwidth), height(xheight), layers(xlayers) {}

	const VkFramebufferCreateInfo& vkHandle() const { return reinterpret_cast<const VkFramebufferCreateInfo&>(*this); }
	VkFramebufferCreateInfo& vkHandle() { return reinterpret_cast<VkFramebufferCreateInfo&>(*this); }

	operator const VkFramebufferCreateInfo&() const { return vkHandle(); };
	operator VkFramebufferCreateInfo&() { return vkHandle(); };
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

	RenderPassCreateInfo(RenderPassCreateFlags xflags = {}, uint32_t xattachmentCount = {}, const AttachmentDescription* xpAttachments = {}, uint32_t xsubpassCount = {}, const SubpassDescription* xpSubpasses = {}, uint32_t xdependencyCount = {}, const SubpassDependency* xpDependencies = {}) : flags(xflags), attachmentCount(xattachmentCount), pAttachments(xpAttachments), subpassCount(xsubpassCount), pSubpasses(xpSubpasses), dependencyCount(xdependencyCount), pDependencies(xpDependencies) {}

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

	CommandPoolCreateInfo(CommandPoolCreateFlags xflags = {}, uint32_t xqueueFamilyIndex = {}) : flags(xflags), queueFamilyIndex(xqueueFamilyIndex) {}

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

	CommandBufferAllocateInfo(CommandPool xcommandPool = {}, CommandBufferLevel xlevel = {}, uint32_t xcommandBufferCount = {}) : commandPool(xcommandPool), level(xlevel), commandBufferCount(xcommandBufferCount) {}

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

	CommandBufferInheritanceInfo(RenderPass xrenderPass = {}, uint32_t xsubpass = {}, Framebuffer xframebuffer = {}, Bool32 xocclusionQueryEnable = {}, QueryControlFlags xqueryFlags = {}, QueryPipelineStatisticFlags xpipelineStatistics = {}) : renderPass(xrenderPass), subpass(xsubpass), framebuffer(xframebuffer), occlusionQueryEnable(xocclusionQueryEnable), queryFlags(xqueryFlags), pipelineStatistics(xpipelineStatistics) {}

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

	CommandBufferBeginInfo(CommandBufferUsageFlags xflags = {}, const CommandBufferInheritanceInfo* xpInheritanceInfo = {}) : flags(xflags), pInheritanceInfo(xpInheritanceInfo) {}

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

struct MemoryBarrier {
	StructureType sType {StructureType::memoryBarrier};
	const void* pNext {};
	AccessFlags srcAccessMask {};
	AccessFlags dstAccessMask {};

	MemoryBarrier(AccessFlags xsrcAccessMask = {}, AccessFlags xdstAccessMask = {}) : srcAccessMask(xsrcAccessMask), dstAccessMask(xdstAccessMask) {}

	const VkMemoryBarrier& vkHandle() const { return reinterpret_cast<const VkMemoryBarrier&>(*this); }
	VkMemoryBarrier& vkHandle() { return reinterpret_cast<VkMemoryBarrier&>(*this); }

	operator const VkMemoryBarrier&() const { return vkHandle(); };
	operator VkMemoryBarrier&() { return vkHandle(); };
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

	BufferMemoryBarrier(AccessFlags xsrcAccessMask = {}, AccessFlags xdstAccessMask = {}, uint32_t xsrcQueueFamilyIndex = {}, uint32_t xdstQueueFamilyIndex = {}, Buffer xbuffer = {}, DeviceSize xoffset = {}, DeviceSize xsize = {}) : srcAccessMask(xsrcAccessMask), dstAccessMask(xdstAccessMask), srcQueueFamilyIndex(xsrcQueueFamilyIndex), dstQueueFamilyIndex(xdstQueueFamilyIndex), buffer(xbuffer), offset(xoffset), size(xsize) {}

	const VkBufferMemoryBarrier& vkHandle() const { return reinterpret_cast<const VkBufferMemoryBarrier&>(*this); }
	VkBufferMemoryBarrier& vkHandle() { return reinterpret_cast<VkBufferMemoryBarrier&>(*this); }

	operator const VkBufferMemoryBarrier&() const { return vkHandle(); };
	operator VkBufferMemoryBarrier&() { return vkHandle(); };
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

	ImageMemoryBarrier(AccessFlags xsrcAccessMask = {}, AccessFlags xdstAccessMask = {}, ImageLayout xoldLayout = {}, ImageLayout xnewLayout = {}, uint32_t xsrcQueueFamilyIndex = {}, uint32_t xdstQueueFamilyIndex = {}, Image ximage = {}, ImageSubresourceRange xsubresourceRange = {}) : srcAccessMask(xsrcAccessMask), dstAccessMask(xdstAccessMask), oldLayout(xoldLayout), newLayout(xnewLayout), srcQueueFamilyIndex(xsrcQueueFamilyIndex), dstQueueFamilyIndex(xdstQueueFamilyIndex), image(ximage), subresourceRange(xsubresourceRange) {}

	const VkImageMemoryBarrier& vkHandle() const { return reinterpret_cast<const VkImageMemoryBarrier&>(*this); }
	VkImageMemoryBarrier& vkHandle() { return reinterpret_cast<VkImageMemoryBarrier&>(*this); }

	operator const VkImageMemoryBarrier&() const { return vkHandle(); };
	operator VkImageMemoryBarrier&() { return vkHandle(); };
};

struct RenderPassBeginInfo {
	StructureType sType {StructureType::renderPassBeginInfo};
	const void* pNext {};
	RenderPass renderPass {};
	Framebuffer framebuffer {};
	Rect2D renderArea {};
	uint32_t clearValueCount {};
	const ClearValue* pClearValues {};

	RenderPassBeginInfo(RenderPass xrenderPass = {}, Framebuffer xframebuffer = {}, Rect2D xrenderArea = {}, uint32_t xclearValueCount = {}, const ClearValue* xpClearValues = {}) : renderPass(xrenderPass), framebuffer(xframebuffer), renderArea(xrenderArea), clearValueCount(xclearValueCount), pClearValues(xpClearValues) {}

	const VkRenderPassBeginInfo& vkHandle() const { return reinterpret_cast<const VkRenderPassBeginInfo&>(*this); }
	VkRenderPassBeginInfo& vkHandle() { return reinterpret_cast<VkRenderPassBeginInfo&>(*this); }

	operator const VkRenderPassBeginInfo&() const { return vkHandle(); };
	operator VkRenderPassBeginInfo&() { return vkHandle(); };
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

	SwapchainCreateInfoKHR(SwapchainCreateFlagsKHR xflags = {}, SurfaceKHR xsurface = {}, uint32_t xminImageCount = {}, Format ximageFormat = {}, ColorSpaceKHR ximageColorSpace = {}, Extent2D ximageExtent = {}, uint32_t ximageArrayLayers = {}, ImageUsageFlags ximageUsage = {}, SharingMode ximageSharingMode = {}, uint32_t xqueueFamilyIndexCount = {}, const uint32_t* xpQueueFamilyIndices = {}, SurfaceTransformBitsKHR xpreTransform = {}, CompositeAlphaBitsKHR xcompositeAlpha = {}, PresentModeKHR xpresentMode = {}, Bool32 xclipped = {}, SwapchainKHR xoldSwapchain = {}) : flags(xflags), surface(xsurface), minImageCount(xminImageCount), imageFormat(ximageFormat), imageColorSpace(ximageColorSpace), imageExtent(ximageExtent), imageArrayLayers(ximageArrayLayers), imageUsage(ximageUsage), imageSharingMode(ximageSharingMode), queueFamilyIndexCount(xqueueFamilyIndexCount), pQueueFamilyIndices(xpQueueFamilyIndices), preTransform(xpreTransform), compositeAlpha(xcompositeAlpha), presentMode(xpresentMode), clipped(xclipped), oldSwapchain(xoldSwapchain) {}

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

	PresentInfoKHR(uint32_t xwaitSemaphoreCount = {}, const Semaphore* xpWaitSemaphores = {}, uint32_t xswapchainCount = {}, const SwapchainKHR* xpSwapchains = {}, const uint32_t* xpImageIndices = {}, Result* xpResults = {}) : waitSemaphoreCount(xwaitSemaphoreCount), pWaitSemaphores(xpWaitSemaphores), swapchainCount(xswapchainCount), pSwapchains(xpSwapchains), pImageIndices(xpImageIndices), pResults(xpResults) {}

	const VkPresentInfoKHR& vkHandle() const { return reinterpret_cast<const VkPresentInfoKHR&>(*this); }
	VkPresentInfoKHR& vkHandle() { return reinterpret_cast<VkPresentInfoKHR&>(*this); }

	operator const VkPresentInfoKHR&() const { return vkHandle(); };
	operator VkPresentInfoKHR&() { return vkHandle(); };
};

struct ImageSwapchainCreateInfoKHR {
	StructureType sType {StructureType::imageSwapchainCreateInfoKHR};
	const void* pNext {};
	SwapchainKHR swapchain {};

	ImageSwapchainCreateInfoKHR(SwapchainKHR xswapchain = {}) : swapchain(xswapchain) {}

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

	BindImageMemorySwapchainInfoKHR(SwapchainKHR xswapchain = {}, uint32_t ximageIndex = {}) : swapchain(xswapchain), imageIndex(ximageIndex) {}

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

	AcquireNextImageInfoKHR(SwapchainKHR xswapchain = {}, uint64_t xtimeout = {}, Semaphore xsemaphore = {}, Fence xfence = {}, uint32_t xdeviceMask = {}) : swapchain(xswapchain), timeout(xtimeout), semaphore(xsemaphore), fence(xfence), deviceMask(xdeviceMask) {}

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

	DeviceGroupPresentInfoKHR(uint32_t xswapchainCount = {}, const uint32_t* xpDeviceMasks = {}, DeviceGroupPresentModeBitsKHR xmode = {}) : swapchainCount(xswapchainCount), pDeviceMasks(xpDeviceMasks), mode(xmode) {}

	const VkDeviceGroupPresentInfoKHR& vkHandle() const { return reinterpret_cast<const VkDeviceGroupPresentInfoKHR&>(*this); }
	VkDeviceGroupPresentInfoKHR& vkHandle() { return reinterpret_cast<VkDeviceGroupPresentInfoKHR&>(*this); }

	operator const VkDeviceGroupPresentInfoKHR&() const { return vkHandle(); };
	operator VkDeviceGroupPresentInfoKHR&() { return vkHandle(); };
};

struct DeviceGroupSwapchainCreateInfoKHR {
	StructureType sType {StructureType::deviceGroupSwapchainCreateInfoKHR};
	const void* pNext {};
	DeviceGroupPresentModeFlagsKHR modes {};

	DeviceGroupSwapchainCreateInfoKHR(DeviceGroupPresentModeFlagsKHR xmodes = {}) : modes(xmodes) {}

	const VkDeviceGroupSwapchainCreateInfoKHR& vkHandle() const { return reinterpret_cast<const VkDeviceGroupSwapchainCreateInfoKHR&>(*this); }
	VkDeviceGroupSwapchainCreateInfoKHR& vkHandle() { return reinterpret_cast<VkDeviceGroupSwapchainCreateInfoKHR&>(*this); }

	operator const VkDeviceGroupSwapchainCreateInfoKHR&() const { return vkHandle(); };
	operator VkDeviceGroupSwapchainCreateInfoKHR&() { return vkHandle(); };
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

struct DisplayModeParametersKHR {
	Extent2D visibleRegion {};
	uint32_t refreshRate {};

	const VkDisplayModeParametersKHR& vkHandle() const { return reinterpret_cast<const VkDisplayModeParametersKHR&>(*this); }
	VkDisplayModeParametersKHR& vkHandle() { return reinterpret_cast<VkDisplayModeParametersKHR&>(*this); }

	operator const VkDisplayModeParametersKHR&() const { return vkHandle(); };
	operator VkDisplayModeParametersKHR&() { return vkHandle(); };
};

struct DisplayModePropertiesKHR {
	DisplayModeKHR displayMode {};
	DisplayModeParametersKHR parameters {};

	const VkDisplayModePropertiesKHR& vkHandle() const { return reinterpret_cast<const VkDisplayModePropertiesKHR&>(*this); }
	VkDisplayModePropertiesKHR& vkHandle() { return reinterpret_cast<VkDisplayModePropertiesKHR&>(*this); }

	operator const VkDisplayModePropertiesKHR&() const { return vkHandle(); };
	operator VkDisplayModePropertiesKHR&() { return vkHandle(); };
};

struct DisplayModeCreateInfoKHR {
	StructureType sType {StructureType::displayModeCreateInfoKHR};
	const void* pNext {};
	DisplayModeCreateFlagsKHR flags {};
	DisplayModeParametersKHR parameters {};

	DisplayModeCreateInfoKHR(DisplayModeCreateFlagsKHR xflags = {}, DisplayModeParametersKHR xparameters = {}) : flags(xflags), parameters(xparameters) {}

	const VkDisplayModeCreateInfoKHR& vkHandle() const { return reinterpret_cast<const VkDisplayModeCreateInfoKHR&>(*this); }
	VkDisplayModeCreateInfoKHR& vkHandle() { return reinterpret_cast<VkDisplayModeCreateInfoKHR&>(*this); }

	operator const VkDisplayModeCreateInfoKHR&() const { return vkHandle(); };
	operator VkDisplayModeCreateInfoKHR&() { return vkHandle(); };
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

	DisplaySurfaceCreateInfoKHR(DisplaySurfaceCreateFlagsKHR xflags = {}, DisplayModeKHR xdisplayMode = {}, uint32_t xplaneIndex = {}, uint32_t xplaneStackIndex = {}, SurfaceTransformBitsKHR xtransform = {}, float xglobalAlpha = {}, DisplayPlaneAlphaBitsKHR xalphaMode = {}, Extent2D ximageExtent = {}) : flags(xflags), displayMode(xdisplayMode), planeIndex(xplaneIndex), planeStackIndex(xplaneStackIndex), transform(xtransform), globalAlpha(xglobalAlpha), alphaMode(xalphaMode), imageExtent(ximageExtent) {}

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

	DisplayPresentInfoKHR(Rect2D xsrcRect = {}, Rect2D xdstRect = {}, Bool32 xpersistent = {}) : srcRect(xsrcRect), dstRect(xdstRect), persistent(xpersistent) {}

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

	XlibSurfaceCreateInfoKHR(XlibSurfaceCreateFlagsKHR xflags = {}, Display* xdpy = {}, Window xwindow = {}) : flags(xflags), dpy(xdpy), window(xwindow) {}

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

	XcbSurfaceCreateInfoKHR(XcbSurfaceCreateFlagsKHR xflags = {}, xcb_connection_t* xconnection = {}, xcb_window_t xwindow = {}) : flags(xflags), connection(xconnection), window(xwindow) {}

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

	WaylandSurfaceCreateInfoKHR(WaylandSurfaceCreateFlagsKHR xflags = {}, wl_display* xdisplay = {}, wl_surface* xsurface = {}) : flags(xflags), display(xdisplay), surface(xsurface) {}

	const VkWaylandSurfaceCreateInfoKHR& vkHandle() const { return reinterpret_cast<const VkWaylandSurfaceCreateInfoKHR&>(*this); }
	VkWaylandSurfaceCreateInfoKHR& vkHandle() { return reinterpret_cast<VkWaylandSurfaceCreateInfoKHR&>(*this); }

	operator const VkWaylandSurfaceCreateInfoKHR&() const { return vkHandle(); };
	operator VkWaylandSurfaceCreateInfoKHR&() { return vkHandle(); };
};


#endif //VK_USE_PLATFORM_WAYLAND_KHR

#ifdef VK_USE_PLATFORM_MIR_KHR

struct MirSurfaceCreateInfoKHR {
	StructureType sType {StructureType::mirSurfaceCreateInfoKHR};
	const void* pNext {};
	MirSurfaceCreateFlagsKHR flags {};
	MirConnection* connection {};
	MirSurface* mirSurface {};

	MirSurfaceCreateInfoKHR(MirSurfaceCreateFlagsKHR xflags = {}, MirConnection* xconnection = {}, MirSurface* xmirSurface = {}) : flags(xflags), connection(xconnection), mirSurface(xmirSurface) {}

	const VkMirSurfaceCreateInfoKHR& vkHandle() const { return reinterpret_cast<const VkMirSurfaceCreateInfoKHR&>(*this); }
	VkMirSurfaceCreateInfoKHR& vkHandle() { return reinterpret_cast<VkMirSurfaceCreateInfoKHR&>(*this); }

	operator const VkMirSurfaceCreateInfoKHR&() const { return vkHandle(); };
	operator VkMirSurfaceCreateInfoKHR&() { return vkHandle(); };
};


#endif //VK_USE_PLATFORM_MIR_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR

struct Win32SurfaceCreateInfoKHR {
	StructureType sType {StructureType::win32SurfaceCreateInfoKHR};
	const void* pNext {};
	Win32SurfaceCreateFlagsKHR flags {};
	HINSTANCE hinstance {};
	HWND hwnd {};

	Win32SurfaceCreateInfoKHR(Win32SurfaceCreateFlagsKHR xflags = {}, HINSTANCE xhinstance = {}, HWND xhwnd = {}) : flags(xflags), hinstance(xhinstance), hwnd(xhwnd) {}

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

	DebugReportCallbackCreateInfoEXT(DebugReportFlagsEXT xflags = {}, PFN_vkDebugReportCallbackEXT xpfnCallback = {}, void* xpUserData = {}) : flags(xflags), pfnCallback(xpfnCallback), pUserData(xpUserData) {}

	const VkDebugReportCallbackCreateInfoEXT& vkHandle() const { return reinterpret_cast<const VkDebugReportCallbackCreateInfoEXT&>(*this); }
	VkDebugReportCallbackCreateInfoEXT& vkHandle() { return reinterpret_cast<VkDebugReportCallbackCreateInfoEXT&>(*this); }

	operator const VkDebugReportCallbackCreateInfoEXT&() const { return vkHandle(); };
	operator VkDebugReportCallbackCreateInfoEXT&() { return vkHandle(); };
};


struct PipelineRasterizationStateRasterizationOrderAMD {
	StructureType sType {StructureType::pipelineRasterizationStateRasterizationOrderAMD};
	const void* pNext {};
	RasterizationOrderAMD rasterizationOrder {};

	PipelineRasterizationStateRasterizationOrderAMD(RasterizationOrderAMD xrasterizationOrder = {}) : rasterizationOrder(xrasterizationOrder) {}

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

	DebugMarkerObjectNameInfoEXT(DebugReportObjectTypeEXT xobjectType = {}, uint64_t xobject = {}, const char* xpObjectName = {}) : objectType(xobjectType), object(xobject), pObjectName(xpObjectName) {}

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

	DebugMarkerObjectTagInfoEXT(DebugReportObjectTypeEXT xobjectType = {}, uint64_t xobject = {}, uint64_t xtagName = {}, size_t xtagSize = {}, const void* xpTag = {}) : objectType(xobjectType), object(xobject), tagName(xtagName), tagSize(xtagSize), pTag(xpTag) {}

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

	DebugMarkerMarkerInfoEXT(const char* xpMarkerName = {}, std::array<float, 4> xcolor = {}) : pMarkerName(xpMarkerName), color(xcolor) {}

	const VkDebugMarkerMarkerInfoEXT& vkHandle() const { return reinterpret_cast<const VkDebugMarkerMarkerInfoEXT&>(*this); }
	VkDebugMarkerMarkerInfoEXT& vkHandle() { return reinterpret_cast<VkDebugMarkerMarkerInfoEXT&>(*this); }

	operator const VkDebugMarkerMarkerInfoEXT&() const { return vkHandle(); };
	operator VkDebugMarkerMarkerInfoEXT&() { return vkHandle(); };
};


struct DedicatedAllocationImageCreateInfoNV {
	StructureType sType {StructureType::dedicatedAllocationImageCreateInfoNV};
	const void* pNext {};
	Bool32 dedicatedAllocation {};

	DedicatedAllocationImageCreateInfoNV(Bool32 xdedicatedAllocation = {}) : dedicatedAllocation(xdedicatedAllocation) {}

	const VkDedicatedAllocationImageCreateInfoNV& vkHandle() const { return reinterpret_cast<const VkDedicatedAllocationImageCreateInfoNV&>(*this); }
	VkDedicatedAllocationImageCreateInfoNV& vkHandle() { return reinterpret_cast<VkDedicatedAllocationImageCreateInfoNV&>(*this); }

	operator const VkDedicatedAllocationImageCreateInfoNV&() const { return vkHandle(); };
	operator VkDedicatedAllocationImageCreateInfoNV&() { return vkHandle(); };
};

struct DedicatedAllocationBufferCreateInfoNV {
	StructureType sType {StructureType::dedicatedAllocationBufferCreateInfoNV};
	const void* pNext {};
	Bool32 dedicatedAllocation {};

	DedicatedAllocationBufferCreateInfoNV(Bool32 xdedicatedAllocation = {}) : dedicatedAllocation(xdedicatedAllocation) {}

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

	DedicatedAllocationMemoryAllocateInfoNV(Image ximage = {}, Buffer xbuffer = {}) : image(ximage), buffer(xbuffer) {}

	const VkDedicatedAllocationMemoryAllocateInfoNV& vkHandle() const { return reinterpret_cast<const VkDedicatedAllocationMemoryAllocateInfoNV&>(*this); }
	VkDedicatedAllocationMemoryAllocateInfoNV& vkHandle() { return reinterpret_cast<VkDedicatedAllocationMemoryAllocateInfoNV&>(*this); }

	operator const VkDedicatedAllocationMemoryAllocateInfoNV&() const { return vkHandle(); };
	operator VkDedicatedAllocationMemoryAllocateInfoNV&() { return vkHandle(); };
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

	ExternalMemoryImageCreateInfoNV(ExternalMemoryHandleTypeFlagsNV xhandleTypes = {}) : handleTypes(xhandleTypes) {}

	const VkExternalMemoryImageCreateInfoNV& vkHandle() const { return reinterpret_cast<const VkExternalMemoryImageCreateInfoNV&>(*this); }
	VkExternalMemoryImageCreateInfoNV& vkHandle() { return reinterpret_cast<VkExternalMemoryImageCreateInfoNV&>(*this); }

	operator const VkExternalMemoryImageCreateInfoNV&() const { return vkHandle(); };
	operator VkExternalMemoryImageCreateInfoNV&() { return vkHandle(); };
};

struct ExportMemoryAllocateInfoNV {
	StructureType sType {StructureType::exportMemoryAllocateInfoNV};
	const void* pNext {};
	ExternalMemoryHandleTypeFlagsNV handleTypes {};

	ExportMemoryAllocateInfoNV(ExternalMemoryHandleTypeFlagsNV xhandleTypes = {}) : handleTypes(xhandleTypes) {}

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

	ImportMemoryWin32HandleInfoNV(ExternalMemoryHandleTypeFlagsNV xhandleType = {}, HANDLE xhandle = {}) : handleType(xhandleType), handle(xhandle) {}

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

	ExportMemoryWin32HandleInfoNV(const SECURITY_ATTRIBUTES* xpAttributes = {}, DWORD xdwAccess = {}) : pAttributes(xpAttributes), dwAccess(xdwAccess) {}

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

	Win32KeyedMutexAcquireReleaseInfoNV(uint32_t xacquireCount = {}, const DeviceMemory* xpAcquireSyncs = {}, const uint64_t* xpAcquireKeys = {}, const uint32_t* xpAcquireTimeoutMilliseconds = {}, uint32_t xreleaseCount = {}, const DeviceMemory* xpReleaseSyncs = {}, const uint64_t* xpReleaseKeys = {}) : acquireCount(xacquireCount), pAcquireSyncs(xpAcquireSyncs), pAcquireKeys(xpAcquireKeys), pAcquireTimeoutMilliseconds(xpAcquireTimeoutMilliseconds), releaseCount(xreleaseCount), pReleaseSyncs(xpReleaseSyncs), pReleaseKeys(xpReleaseKeys) {}

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
	ValidationCheckEXT* pDisabledValidationChecks {};

	ValidationFlagsEXT(uint32_t xdisabledValidationCheckCount = {}, ValidationCheckEXT* xpDisabledValidationChecks = {}) : disabledValidationCheckCount(xdisabledValidationCheckCount), pDisabledValidationChecks(xpDisabledValidationChecks) {}

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

	ViSurfaceCreateInfoNN(ViSurfaceCreateFlagsNN xflags = {}, void* xwindow = {}) : flags(xflags), window(xwindow) {}

	const VkViSurfaceCreateInfoNN& vkHandle() const { return reinterpret_cast<const VkViSurfaceCreateInfoNN&>(*this); }
	VkViSurfaceCreateInfoNN& vkHandle() { return reinterpret_cast<VkViSurfaceCreateInfoNN&>(*this); }

	operator const VkViSurfaceCreateInfoNN&() const { return vkHandle(); };
	operator VkViSurfaceCreateInfoNN&() { return vkHandle(); };
};


#endif //VK_USE_PLATFORM_VI_NN

#ifdef VK_USE_PLATFORM_WIN32_KHR

struct ImportMemoryWin32HandleInfoKHR {
	StructureType sType {StructureType::importMemoryWin32HandleInfoKHR};
	const void* pNext {};
	ExternalMemoryHandleTypeBits handleType {};
	HANDLE handle {};
	LPCWSTR name {};

	ImportMemoryWin32HandleInfoKHR(ExternalMemoryHandleTypeBits xhandleType = {}, HANDLE xhandle = {}, LPCWSTR xname = {}) : handleType(xhandleType), handle(xhandle), name(xname) {}

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

	ExportMemoryWin32HandleInfoKHR(const SECURITY_ATTRIBUTES* xpAttributes = {}, DWORD xdwAccess = {}, LPCWSTR xname = {}) : pAttributes(xpAttributes), dwAccess(xdwAccess), name(xname) {}

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

	MemoryGetWin32HandleInfoKHR(DeviceMemory xmemory = {}, ExternalMemoryHandleTypeBits xhandleType = {}) : memory(xmemory), handleType(xhandleType) {}

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

	ImportMemoryFdInfoKHR(ExternalMemoryHandleTypeBits xhandleType = {}, int xfd = {}) : handleType(xhandleType), fd(xfd) {}

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

	MemoryGetFdInfoKHR(DeviceMemory xmemory = {}, ExternalMemoryHandleTypeBits xhandleType = {}) : memory(xmemory), handleType(xhandleType) {}

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

	Win32KeyedMutexAcquireReleaseInfoKHR(uint32_t xacquireCount = {}, const DeviceMemory* xpAcquireSyncs = {}, const uint64_t* xpAcquireKeys = {}, const uint32_t* xpAcquireTimeouts = {}, uint32_t xreleaseCount = {}, const DeviceMemory* xpReleaseSyncs = {}, const uint64_t* xpReleaseKeys = {}) : acquireCount(xacquireCount), pAcquireSyncs(xpAcquireSyncs), pAcquireKeys(xpAcquireKeys), pAcquireTimeouts(xpAcquireTimeouts), releaseCount(xreleaseCount), pReleaseSyncs(xpReleaseSyncs), pReleaseKeys(xpReleaseKeys) {}

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

	ImportSemaphoreWin32HandleInfoKHR(Semaphore xsemaphore = {}, SemaphoreImportFlags xflags = {}, ExternalSemaphoreHandleTypeBits xhandleType = {}, HANDLE xhandle = {}, LPCWSTR xname = {}) : semaphore(xsemaphore), flags(xflags), handleType(xhandleType), handle(xhandle), name(xname) {}

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

	ExportSemaphoreWin32HandleInfoKHR(const SECURITY_ATTRIBUTES* xpAttributes = {}, DWORD xdwAccess = {}, LPCWSTR xname = {}) : pAttributes(xpAttributes), dwAccess(xdwAccess), name(xname) {}

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

	D3D12FenceSubmitInfoKHR(uint32_t xwaitSemaphoreValuesCount = {}, const uint64_t* xpWaitSemaphoreValues = {}, uint32_t xsignalSemaphoreValuesCount = {}, const uint64_t* xpSignalSemaphoreValues = {}) : waitSemaphoreValuesCount(xwaitSemaphoreValuesCount), pWaitSemaphoreValues(xpWaitSemaphoreValues), signalSemaphoreValuesCount(xsignalSemaphoreValuesCount), pSignalSemaphoreValues(xpSignalSemaphoreValues) {}

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

	SemaphoreGetWin32HandleInfoKHR(Semaphore xsemaphore = {}, ExternalSemaphoreHandleTypeBits xhandleType = {}) : semaphore(xsemaphore), handleType(xhandleType) {}

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

	ImportSemaphoreFdInfoKHR(Semaphore xsemaphore = {}, SemaphoreImportFlags xflags = {}, ExternalSemaphoreHandleTypeBits xhandleType = {}, int xfd = {}) : semaphore(xsemaphore), flags(xflags), handleType(xhandleType), fd(xfd) {}

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

	SemaphoreGetFdInfoKHR(Semaphore xsemaphore = {}, ExternalSemaphoreHandleTypeBits xhandleType = {}) : semaphore(xsemaphore), handleType(xhandleType) {}

	const VkSemaphoreGetFdInfoKHR& vkHandle() const { return reinterpret_cast<const VkSemaphoreGetFdInfoKHR&>(*this); }
	VkSemaphoreGetFdInfoKHR& vkHandle() { return reinterpret_cast<VkSemaphoreGetFdInfoKHR&>(*this); }

	operator const VkSemaphoreGetFdInfoKHR&() const { return vkHandle(); };
	operator VkSemaphoreGetFdInfoKHR&() { return vkHandle(); };
};


struct PhysicalDevicePushDescriptorPropertiesKHR {
	StructureType sType {StructureType::physicalDevicePushDescriptorPropertiesKHR};
	void* pNext {};
	uint32_t maxPushDescriptors {};

	PhysicalDevicePushDescriptorPropertiesKHR(uint32_t xmaxPushDescriptors = {}) : maxPushDescriptors(xmaxPushDescriptors) {}

	const VkPhysicalDevicePushDescriptorPropertiesKHR& vkHandle() const { return reinterpret_cast<const VkPhysicalDevicePushDescriptorPropertiesKHR&>(*this); }
	VkPhysicalDevicePushDescriptorPropertiesKHR& vkHandle() { return reinterpret_cast<VkPhysicalDevicePushDescriptorPropertiesKHR&>(*this); }

	operator const VkPhysicalDevicePushDescriptorPropertiesKHR&() const { return vkHandle(); };
	operator VkPhysicalDevicePushDescriptorPropertiesKHR&() { return vkHandle(); };
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

	PresentRegionsKHR(uint32_t xswapchainCount = {}, const PresentRegionKHR* xpRegions = {}) : swapchainCount(xswapchainCount), pRegions(xpRegions) {}

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

	PipelineViewportWScalingStateCreateInfoNV(Bool32 xviewportWScalingEnable = {}, uint32_t xviewportCount = {}, const ViewportWScalingNV* xpViewportWScalings = {}) : viewportWScalingEnable(xviewportWScalingEnable), viewportCount(xviewportCount), pViewportWScalings(xpViewportWScalings) {}

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

	DisplayPowerInfoEXT(DisplayPowerStateEXT xpowerState = {}) : powerState(xpowerState) {}

	const VkDisplayPowerInfoEXT& vkHandle() const { return reinterpret_cast<const VkDisplayPowerInfoEXT&>(*this); }
	VkDisplayPowerInfoEXT& vkHandle() { return reinterpret_cast<VkDisplayPowerInfoEXT&>(*this); }

	operator const VkDisplayPowerInfoEXT&() const { return vkHandle(); };
	operator VkDisplayPowerInfoEXT&() { return vkHandle(); };
};

struct DeviceEventInfoEXT {
	StructureType sType {StructureType::deviceEventInfoEXT};
	const void* pNext {};
	DeviceEventTypeEXT deviceEvent {};

	DeviceEventInfoEXT(DeviceEventTypeEXT xdeviceEvent = {}) : deviceEvent(xdeviceEvent) {}

	const VkDeviceEventInfoEXT& vkHandle() const { return reinterpret_cast<const VkDeviceEventInfoEXT&>(*this); }
	VkDeviceEventInfoEXT& vkHandle() { return reinterpret_cast<VkDeviceEventInfoEXT&>(*this); }

	operator const VkDeviceEventInfoEXT&() const { return vkHandle(); };
	operator VkDeviceEventInfoEXT&() { return vkHandle(); };
};

struct DisplayEventInfoEXT {
	StructureType sType {StructureType::displayEventInfoEXT};
	const void* pNext {};
	DisplayEventTypeEXT displayEvent {};

	DisplayEventInfoEXT(DisplayEventTypeEXT xdisplayEvent = {}) : displayEvent(xdisplayEvent) {}

	const VkDisplayEventInfoEXT& vkHandle() const { return reinterpret_cast<const VkDisplayEventInfoEXT&>(*this); }
	VkDisplayEventInfoEXT& vkHandle() { return reinterpret_cast<VkDisplayEventInfoEXT&>(*this); }

	operator const VkDisplayEventInfoEXT&() const { return vkHandle(); };
	operator VkDisplayEventInfoEXT&() { return vkHandle(); };
};

struct SwapchainCounterCreateInfoEXT {
	StructureType sType {StructureType::swapchainCounterCreateInfoEXT};
	const void* pNext {};
	SurfaceCounterFlagsEXT surfaceCounters {};

	SwapchainCounterCreateInfoEXT(SurfaceCounterFlagsEXT xsurfaceCounters = {}) : surfaceCounters(xsurfaceCounters) {}

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

	PresentTimesInfoGOOGLE(uint32_t xswapchainCount = {}, const PresentTimeGOOGLE* xpTimes = {}) : swapchainCount(xswapchainCount), pTimes(xpTimes) {}

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

	PipelineViewportSwizzleStateCreateInfoNV(PipelineViewportSwizzleStateCreateFlagsNV xflags = {}, uint32_t xviewportCount = {}, const ViewportSwizzleNV* xpViewportSwizzles = {}) : flags(xflags), viewportCount(xviewportCount), pViewportSwizzles(xpViewportSwizzles) {}

	const VkPipelineViewportSwizzleStateCreateInfoNV& vkHandle() const { return reinterpret_cast<const VkPipelineViewportSwizzleStateCreateInfoNV&>(*this); }
	VkPipelineViewportSwizzleStateCreateInfoNV& vkHandle() { return reinterpret_cast<VkPipelineViewportSwizzleStateCreateInfoNV&>(*this); }

	operator const VkPipelineViewportSwizzleStateCreateInfoNV&() const { return vkHandle(); };
	operator VkPipelineViewportSwizzleStateCreateInfoNV&() { return vkHandle(); };
};


struct PhysicalDeviceDiscardRectanglePropertiesEXT {
	StructureType sType {StructureType::physicalDeviceDiscardRectanglePropertiesEXT};
	void* pNext {};
	uint32_t maxDiscardRectangles {};

	PhysicalDeviceDiscardRectanglePropertiesEXT(uint32_t xmaxDiscardRectangles = {}) : maxDiscardRectangles(xmaxDiscardRectangles) {}

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

	PipelineDiscardRectangleStateCreateInfoEXT(PipelineDiscardRectangleStateCreateFlagsEXT xflags = {}, DiscardRectangleModeEXT xdiscardRectangleMode = {}, uint32_t xdiscardRectangleCount = {}, const Rect2D* xpDiscardRectangles = {}) : flags(xflags), discardRectangleMode(xdiscardRectangleMode), discardRectangleCount(xdiscardRectangleCount), pDiscardRectangles(xpDiscardRectangles) {}

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

	PhysicalDeviceConservativeRasterizationPropertiesEXT(float xprimitiveOverestimationSize = {}, float xmaxExtraPrimitiveOverestimationSize = {}, float xextraPrimitiveOverestimationSizeGranularity = {}, Bool32 xprimitiveUnderestimation = {}, Bool32 xconservativePointAndLineRasterization = {}, Bool32 xdegenerateTrianglesRasterized = {}, Bool32 xdegenerateLinesRasterized = {}, Bool32 xfullyCoveredFragmentShaderInputVariable = {}, Bool32 xconservativeRasterizationPostDepthCoverage = {}) : primitiveOverestimationSize(xprimitiveOverestimationSize), maxExtraPrimitiveOverestimationSize(xmaxExtraPrimitiveOverestimationSize), extraPrimitiveOverestimationSizeGranularity(xextraPrimitiveOverestimationSizeGranularity), primitiveUnderestimation(xprimitiveUnderestimation), conservativePointAndLineRasterization(xconservativePointAndLineRasterization), degenerateTrianglesRasterized(xdegenerateTrianglesRasterized), degenerateLinesRasterized(xdegenerateLinesRasterized), fullyCoveredFragmentShaderInputVariable(xfullyCoveredFragmentShaderInputVariable), conservativeRasterizationPostDepthCoverage(xconservativeRasterizationPostDepthCoverage) {}

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

	PipelineRasterizationConservativeStateCreateInfoEXT(PipelineRasterizationConservativeStateCreateFlagsEXT xflags = {}, ConservativeRasterizationModeEXT xconservativeRasterizationMode = {}, float xextraPrimitiveOverestimationSize = {}) : flags(xflags), conservativeRasterizationMode(xconservativeRasterizationMode), extraPrimitiveOverestimationSize(xextraPrimitiveOverestimationSize) {}

	const VkPipelineRasterizationConservativeStateCreateInfoEXT& vkHandle() const { return reinterpret_cast<const VkPipelineRasterizationConservativeStateCreateInfoEXT&>(*this); }
	VkPipelineRasterizationConservativeStateCreateInfoEXT& vkHandle() { return reinterpret_cast<VkPipelineRasterizationConservativeStateCreateInfoEXT&>(*this); }

	operator const VkPipelineRasterizationConservativeStateCreateInfoEXT&() const { return vkHandle(); };
	operator VkPipelineRasterizationConservativeStateCreateInfoEXT&() { return vkHandle(); };
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

	HdrMetadataEXT(XYColorEXT xdisplayPrimaryRed = {}, XYColorEXT xdisplayPrimaryGreen = {}, XYColorEXT xdisplayPrimaryBlue = {}, XYColorEXT xwhitePoint = {}, float xmaxLuminance = {}, float xminLuminance = {}, float xmaxContentLightLevel = {}, float xmaxFrameAverageLightLevel = {}) : displayPrimaryRed(xdisplayPrimaryRed), displayPrimaryGreen(xdisplayPrimaryGreen), displayPrimaryBlue(xdisplayPrimaryBlue), whitePoint(xwhitePoint), maxLuminance(xmaxLuminance), minLuminance(xminLuminance), maxContentLightLevel(xmaxContentLightLevel), maxFrameAverageLightLevel(xmaxFrameAverageLightLevel) {}

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

	ImportFenceWin32HandleInfoKHR(Fence xfence = {}, FenceImportFlags xflags = {}, ExternalFenceHandleTypeBits xhandleType = {}, HANDLE xhandle = {}, LPCWSTR xname = {}) : fence(xfence), flags(xflags), handleType(xhandleType), handle(xhandle), name(xname) {}

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

	ExportFenceWin32HandleInfoKHR(const SECURITY_ATTRIBUTES* xpAttributes = {}, DWORD xdwAccess = {}, LPCWSTR xname = {}) : pAttributes(xpAttributes), dwAccess(xdwAccess), name(xname) {}

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

	FenceGetWin32HandleInfoKHR(Fence xfence = {}, ExternalFenceHandleTypeBits xhandleType = {}) : fence(xfence), handleType(xhandleType) {}

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

	ImportFenceFdInfoKHR(Fence xfence = {}, FenceImportFlags xflags = {}, ExternalFenceHandleTypeBits xhandleType = {}, int xfd = {}) : fence(xfence), flags(xflags), handleType(xhandleType), fd(xfd) {}

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

	FenceGetFdInfoKHR(Fence xfence = {}, ExternalFenceHandleTypeBits xhandleType = {}) : fence(xfence), handleType(xhandleType) {}

	const VkFenceGetFdInfoKHR& vkHandle() const { return reinterpret_cast<const VkFenceGetFdInfoKHR&>(*this); }
	VkFenceGetFdInfoKHR& vkHandle() { return reinterpret_cast<VkFenceGetFdInfoKHR&>(*this); }

	operator const VkFenceGetFdInfoKHR&() const { return vkHandle(); };
	operator VkFenceGetFdInfoKHR&() { return vkHandle(); };
};


struct PhysicalDeviceSurfaceInfo2KHR {
	StructureType sType {StructureType::physicalDeviceSurfaceInfo2KHR};
	const void* pNext {};
	SurfaceKHR surface {};

	PhysicalDeviceSurfaceInfo2KHR(SurfaceKHR xsurface = {}) : surface(xsurface) {}

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


#ifdef VK_USE_PLATFORM_IOS_MVK

struct IOSSurfaceCreateInfoMVK {
	StructureType sType {StructureType::iosSurfaceCreateInfoMVK};
	const void* pNext {};
	IOSSurfaceCreateFlagsMVK flags {};
	const void* pView {};

	IOSSurfaceCreateInfoMVK(IOSSurfaceCreateFlagsMVK xflags = {}, const void* xpView = {}) : flags(xflags), pView(xpView) {}

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

	MacOSSurfaceCreateInfoMVK(MacOSSurfaceCreateFlagsMVK xflags = {}, const void* xpView = {}) : flags(xflags), pView(xpView) {}

	const VkMacOSSurfaceCreateInfoMVK& vkHandle() const { return reinterpret_cast<const VkMacOSSurfaceCreateInfoMVK&>(*this); }
	VkMacOSSurfaceCreateInfoMVK& vkHandle() { return reinterpret_cast<VkMacOSSurfaceCreateInfoMVK&>(*this); }

	operator const VkMacOSSurfaceCreateInfoMVK&() const { return vkHandle(); };
	operator VkMacOSSurfaceCreateInfoMVK&() { return vkHandle(); };
};


#endif //VK_USE_PLATFORM_MACOS_MVK

struct DebugUtilsObjectNameInfoEXT {
	StructureType sType {StructureType::debugUtilsObjectNameInfoEXT};
	const void* pNext {};
	ObjectType objectType {};
	uint64_t objectHandle {};
	const char* pObjectName {};

	DebugUtilsObjectNameInfoEXT(ObjectType xobjectType = {}, uint64_t xobjectHandle = {}, const char* xpObjectName = {}) : objectType(xobjectType), objectHandle(xobjectHandle), pObjectName(xpObjectName) {}

	const VkDebugUtilsObjectNameInfoEXT& vkHandle() const { return reinterpret_cast<const VkDebugUtilsObjectNameInfoEXT&>(*this); }
	VkDebugUtilsObjectNameInfoEXT& vkHandle() { return reinterpret_cast<VkDebugUtilsObjectNameInfoEXT&>(*this); }

	operator const VkDebugUtilsObjectNameInfoEXT&() const { return vkHandle(); };
	operator VkDebugUtilsObjectNameInfoEXT&() { return vkHandle(); };
};

struct DebugUtilsObjectTagInfoEXT {
	StructureType sType {StructureType::debugUtilsObjectTagInfoEXT};
	const void* pNext {};
	ObjectType objectType {};
	uint64_t objectHandle {};
	uint64_t tagName {};
	size_t tagSize {};
	const void* pTag {};

	DebugUtilsObjectTagInfoEXT(ObjectType xobjectType = {}, uint64_t xobjectHandle = {}, uint64_t xtagName = {}, size_t xtagSize = {}, const void* xpTag = {}) : objectType(xobjectType), objectHandle(xobjectHandle), tagName(xtagName), tagSize(xtagSize), pTag(xpTag) {}

	const VkDebugUtilsObjectTagInfoEXT& vkHandle() const { return reinterpret_cast<const VkDebugUtilsObjectTagInfoEXT&>(*this); }
	VkDebugUtilsObjectTagInfoEXT& vkHandle() { return reinterpret_cast<VkDebugUtilsObjectTagInfoEXT&>(*this); }

	operator const VkDebugUtilsObjectTagInfoEXT&() const { return vkHandle(); };
	operator VkDebugUtilsObjectTagInfoEXT&() { return vkHandle(); };
};

struct DebugUtilsLabelEXT {
	StructureType sType {StructureType::debugUtilsLabelEXT};
	const void* pNext {};
	const char* pLabelName {};
	std::array<float, 4> color {};

	DebugUtilsLabelEXT(const char* xpLabelName = {}, std::array<float, 4> xcolor = {}) : pLabelName(xpLabelName), color(xcolor) {}

	const VkDebugUtilsLabelEXT& vkHandle() const { return reinterpret_cast<const VkDebugUtilsLabelEXT&>(*this); }
	VkDebugUtilsLabelEXT& vkHandle() { return reinterpret_cast<VkDebugUtilsLabelEXT&>(*this); }

	operator const VkDebugUtilsLabelEXT&() const { return vkHandle(); };
	operator VkDebugUtilsLabelEXT&() { return vkHandle(); };
};

struct DebugUtilsMessengerCallbackDataEXT {
	StructureType sType {StructureType::debugUtilsMessengerCallbackDataEXT};
	const void* pNext {};
	DebugUtilsMessengerCallbackDataFlagsEXT flags {};
	const char* pMessageIdName {};
	int32_t messageIdNumber {};
	const char* pMessage {};
	uint32_t queueLabelCount {};
	DebugUtilsLabelEXT* pQueueLabels {};
	uint32_t cmdBufLabelCount {};
	DebugUtilsLabelEXT* pCmdBufLabels {};
	uint32_t objectCount {};
	DebugUtilsObjectNameInfoEXT* pObjects {};

	DebugUtilsMessengerCallbackDataEXT(DebugUtilsMessengerCallbackDataFlagsEXT xflags = {}, const char* xpMessageIdName = {}, int32_t xmessageIdNumber = {}, const char* xpMessage = {}, uint32_t xqueueLabelCount = {}, DebugUtilsLabelEXT* xpQueueLabels = {}, uint32_t xcmdBufLabelCount = {}, DebugUtilsLabelEXT* xpCmdBufLabels = {}, uint32_t xobjectCount = {}, DebugUtilsObjectNameInfoEXT* xpObjects = {}) : flags(xflags), pMessageIdName(xpMessageIdName), messageIdNumber(xmessageIdNumber), pMessage(xpMessage), queueLabelCount(xqueueLabelCount), pQueueLabels(xpQueueLabels), cmdBufLabelCount(xcmdBufLabelCount), pCmdBufLabels(xpCmdBufLabels), objectCount(xobjectCount), pObjects(xpObjects) {}

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

	DebugUtilsMessengerCreateInfoEXT(DebugUtilsMessengerCreateFlagsEXT xflags = {}, DebugUtilsMessageSeverityFlagsEXT xmessageSeverity = {}, DebugUtilsMessageTypeFlagsEXT xmessageType = {}, PFN_vkDebugUtilsMessengerCallbackEXT xpfnUserCallback = {}, void* xpUserData = {}) : flags(xflags), messageSeverity(xmessageSeverity), messageType(xmessageType), pfnUserCallback(xpfnUserCallback), pUserData(xpUserData) {}

	const VkDebugUtilsMessengerCreateInfoEXT& vkHandle() const { return reinterpret_cast<const VkDebugUtilsMessengerCreateInfoEXT&>(*this); }
	VkDebugUtilsMessengerCreateInfoEXT& vkHandle() { return reinterpret_cast<VkDebugUtilsMessengerCreateInfoEXT&>(*this); }

	operator const VkDebugUtilsMessengerCreateInfoEXT&() const { return vkHandle(); };
	operator VkDebugUtilsMessengerCreateInfoEXT&() { return vkHandle(); };
};


struct SamplerReductionModeCreateInfoEXT {
	StructureType sType {StructureType::samplerReductionModeCreateInfoEXT};
	const void* pNext {};
	SamplerReductionModeEXT reductionMode {};

	SamplerReductionModeCreateInfoEXT(SamplerReductionModeEXT xreductionMode = {}) : reductionMode(xreductionMode) {}

	const VkSamplerReductionModeCreateInfoEXT& vkHandle() const { return reinterpret_cast<const VkSamplerReductionModeCreateInfoEXT&>(*this); }
	VkSamplerReductionModeCreateInfoEXT& vkHandle() { return reinterpret_cast<VkSamplerReductionModeCreateInfoEXT&>(*this); }

	operator const VkSamplerReductionModeCreateInfoEXT&() const { return vkHandle(); };
	operator VkSamplerReductionModeCreateInfoEXT&() { return vkHandle(); };
};

struct PhysicalDeviceSamplerFilterMinmaxPropertiesEXT {
	StructureType sType {StructureType::physicalDeviceSamplerFilterMinmaxPropertiesEXT};
	void* pNext {};
	Bool32 filterMinmaxSingleComponentFormats {};
	Bool32 filterMinmaxImageComponentMapping {};

	const VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT&>(*this); }
	VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT& vkHandle() { return reinterpret_cast<VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT&>(*this); }

	operator const VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT&() const { return vkHandle(); };
	operator VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT&() { return vkHandle(); };
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

	SampleLocationsInfoEXT(SampleCountBits xsampleLocationsPerPixel = {}, Extent2D xsampleLocationGridSize = {}, uint32_t xsampleLocationsCount = {}, const SampleLocationEXT* xpSampleLocations = {}) : sampleLocationsPerPixel(xsampleLocationsPerPixel), sampleLocationGridSize(xsampleLocationGridSize), sampleLocationsCount(xsampleLocationsCount), pSampleLocations(xpSampleLocations) {}

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

	RenderPassSampleLocationsBeginInfoEXT(uint32_t xattachmentInitialSampleLocationsCount = {}, const AttachmentSampleLocationsEXT* xpAttachmentInitialSampleLocations = {}, uint32_t xpostSubpassSampleLocationsCount = {}, const SubpassSampleLocationsEXT* xpPostSubpassSampleLocations = {}) : attachmentInitialSampleLocationsCount(xattachmentInitialSampleLocationsCount), pAttachmentInitialSampleLocations(xpAttachmentInitialSampleLocations), postSubpassSampleLocationsCount(xpostSubpassSampleLocationsCount), pPostSubpassSampleLocations(xpPostSubpassSampleLocations) {}

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

	PipelineSampleLocationsStateCreateInfoEXT(Bool32 xsampleLocationsEnable = {}, SampleLocationsInfoEXT xsampleLocationsInfo = {}) : sampleLocationsEnable(xsampleLocationsEnable), sampleLocationsInfo(xsampleLocationsInfo) {}

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


struct ImageFormatListCreateInfoKHR {
	StructureType sType {StructureType::imageFormatListCreateInfoKHR};
	const void* pNext {};
	uint32_t viewFormatCount {};
	const Format* pViewFormats {};

	ImageFormatListCreateInfoKHR(uint32_t xviewFormatCount = {}, const Format* xpViewFormats = {}) : viewFormatCount(xviewFormatCount), pViewFormats(xpViewFormats) {}

	const VkImageFormatListCreateInfoKHR& vkHandle() const { return reinterpret_cast<const VkImageFormatListCreateInfoKHR&>(*this); }
	VkImageFormatListCreateInfoKHR& vkHandle() { return reinterpret_cast<VkImageFormatListCreateInfoKHR&>(*this); }

	operator const VkImageFormatListCreateInfoKHR&() const { return vkHandle(); };
	operator VkImageFormatListCreateInfoKHR&() { return vkHandle(); };
};


struct PhysicalDeviceBlendOperationAdvancedFeaturesEXT {
	StructureType sType {StructureType::physicalDeviceBlendOperationAdvancedFeaturesEXT};
	void* pNext {};
	Bool32 advancedBlendCoherentOperations {};

	PhysicalDeviceBlendOperationAdvancedFeaturesEXT(Bool32 xadvancedBlendCoherentOperations = {}) : advancedBlendCoherentOperations(xadvancedBlendCoherentOperations) {}

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

	PipelineColorBlendAdvancedStateCreateInfoEXT(Bool32 xsrcPremultiplied = {}, Bool32 xdstPremultiplied = {}, BlendOverlapEXT xblendOverlap = {}) : srcPremultiplied(xsrcPremultiplied), dstPremultiplied(xdstPremultiplied), blendOverlap(xblendOverlap) {}

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

	PipelineCoverageToColorStateCreateInfoNV(PipelineCoverageToColorStateCreateFlagsNV xflags = {}, Bool32 xcoverageToColorEnable = {}, uint32_t xcoverageToColorLocation = {}) : flags(xflags), coverageToColorEnable(xcoverageToColorEnable), coverageToColorLocation(xcoverageToColorLocation) {}

	const VkPipelineCoverageToColorStateCreateInfoNV& vkHandle() const { return reinterpret_cast<const VkPipelineCoverageToColorStateCreateInfoNV&>(*this); }
	VkPipelineCoverageToColorStateCreateInfoNV& vkHandle() { return reinterpret_cast<VkPipelineCoverageToColorStateCreateInfoNV&>(*this); }

	operator const VkPipelineCoverageToColorStateCreateInfoNV&() const { return vkHandle(); };
	operator VkPipelineCoverageToColorStateCreateInfoNV&() { return vkHandle(); };
};


struct PipelineCoverageModulationStateCreateInfoNV {
	StructureType sType {StructureType::pipelineCoverageModulationStateCreateInfoNV};
	const void* pNext {};
	PipelineCoverageModulationStateCreateFlagsNV flags {};
	CoverageModulationModeNV coverageModulationMode {};
	Bool32 coverageModulationTableEnable {};
	uint32_t coverageModulationTableCount {};
	const float* pCoverageModulationTable {};

	PipelineCoverageModulationStateCreateInfoNV(PipelineCoverageModulationStateCreateFlagsNV xflags = {}, CoverageModulationModeNV xcoverageModulationMode = {}, Bool32 xcoverageModulationTableEnable = {}, uint32_t xcoverageModulationTableCount = {}, const float* xpCoverageModulationTable = {}) : flags(xflags), coverageModulationMode(xcoverageModulationMode), coverageModulationTableEnable(xcoverageModulationTableEnable), coverageModulationTableCount(xcoverageModulationTableCount), pCoverageModulationTable(xpCoverageModulationTable) {}

	const VkPipelineCoverageModulationStateCreateInfoNV& vkHandle() const { return reinterpret_cast<const VkPipelineCoverageModulationStateCreateInfoNV&>(*this); }
	VkPipelineCoverageModulationStateCreateInfoNV& vkHandle() { return reinterpret_cast<VkPipelineCoverageModulationStateCreateInfoNV&>(*this); }

	operator const VkPipelineCoverageModulationStateCreateInfoNV&() const { return vkHandle(); };
	operator VkPipelineCoverageModulationStateCreateInfoNV&() { return vkHandle(); };
};


struct ValidationCacheCreateInfoEXT {
	StructureType sType {StructureType::validationCacheCreateInfoEXT};
	const void* pNext {};
	ValidationCacheCreateFlagsEXT flags {};
	size_t initialDataSize {};
	const void* pInitialData {};

	ValidationCacheCreateInfoEXT(ValidationCacheCreateFlagsEXT xflags = {}, size_t xinitialDataSize = {}, const void* xpInitialData = {}) : flags(xflags), initialDataSize(xinitialDataSize), pInitialData(xpInitialData) {}

	const VkValidationCacheCreateInfoEXT& vkHandle() const { return reinterpret_cast<const VkValidationCacheCreateInfoEXT&>(*this); }
	VkValidationCacheCreateInfoEXT& vkHandle() { return reinterpret_cast<VkValidationCacheCreateInfoEXT&>(*this); }

	operator const VkValidationCacheCreateInfoEXT&() const { return vkHandle(); };
	operator VkValidationCacheCreateInfoEXT&() { return vkHandle(); };
};

struct ShaderModuleValidationCacheCreateInfoEXT {
	StructureType sType {StructureType::shaderModuleValidationCacheCreateInfoEXT};
	const void* pNext {};
	ValidationCacheEXT validationCache {};

	ShaderModuleValidationCacheCreateInfoEXT(ValidationCacheEXT xvalidationCache = {}) : validationCache(xvalidationCache) {}

	const VkShaderModuleValidationCacheCreateInfoEXT& vkHandle() const { return reinterpret_cast<const VkShaderModuleValidationCacheCreateInfoEXT&>(*this); }
	VkShaderModuleValidationCacheCreateInfoEXT& vkHandle() { return reinterpret_cast<VkShaderModuleValidationCacheCreateInfoEXT&>(*this); }

	operator const VkShaderModuleValidationCacheCreateInfoEXT&() const { return vkHandle(); };
	operator VkShaderModuleValidationCacheCreateInfoEXT&() { return vkHandle(); };
};


struct DeviceQueueGlobalPriorityCreateInfoEXT {
	StructureType sType {StructureType::deviceQueueGlobalPriorityCreateInfoEXT};
	const void* pNext {};
	QueueGlobalPriorityEXT globalPriority {};

	DeviceQueueGlobalPriorityCreateInfoEXT(QueueGlobalPriorityEXT xglobalPriority = {}) : globalPriority(xglobalPriority) {}

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

	ImportMemoryHostPointerInfoEXT(ExternalMemoryHandleTypeBits xhandleType = {}, void* xpHostPointer = {}) : handleType(xhandleType), pHostPointer(xpHostPointer) {}

	const VkImportMemoryHostPointerInfoEXT& vkHandle() const { return reinterpret_cast<const VkImportMemoryHostPointerInfoEXT&>(*this); }
	VkImportMemoryHostPointerInfoEXT& vkHandle() { return reinterpret_cast<VkImportMemoryHostPointerInfoEXT&>(*this); }

	operator const VkImportMemoryHostPointerInfoEXT&() const { return vkHandle(); };
	operator VkImportMemoryHostPointerInfoEXT&() { return vkHandle(); };
};

struct MemoryHostPointerPropertiesEXT {
	StructureType sType {StructureType::memoryHostPointerPropertiesEXT};
	void* pNext {};
	uint32_t memoryTypeBits {};

	MemoryHostPointerPropertiesEXT(uint32_t xmemoryTypeBits = {}) : memoryTypeBits(xmemoryTypeBits) {}

	const VkMemoryHostPointerPropertiesEXT& vkHandle() const { return reinterpret_cast<const VkMemoryHostPointerPropertiesEXT&>(*this); }
	VkMemoryHostPointerPropertiesEXT& vkHandle() { return reinterpret_cast<VkMemoryHostPointerPropertiesEXT&>(*this); }

	operator const VkMemoryHostPointerPropertiesEXT&() const { return vkHandle(); };
	operator VkMemoryHostPointerPropertiesEXT&() { return vkHandle(); };
};

struct PhysicalDeviceExternalMemoryHostPropertiesEXT {
	StructureType sType {StructureType::physicalDeviceExternalMemoryHostPropertiesEXT};
	void* pNext {};
	DeviceSize minImportedHostPointerAlignment {};

	PhysicalDeviceExternalMemoryHostPropertiesEXT(DeviceSize xminImportedHostPointerAlignment = {}) : minImportedHostPointerAlignment(xminImportedHostPointerAlignment) {}

	const VkPhysicalDeviceExternalMemoryHostPropertiesEXT& vkHandle() const { return reinterpret_cast<const VkPhysicalDeviceExternalMemoryHostPropertiesEXT&>(*this); }
	VkPhysicalDeviceExternalMemoryHostPropertiesEXT& vkHandle() { return reinterpret_cast<VkPhysicalDeviceExternalMemoryHostPropertiesEXT&>(*this); }

	operator const VkPhysicalDeviceExternalMemoryHostPropertiesEXT&() const { return vkHandle(); };
	operator VkPhysicalDeviceExternalMemoryHostPropertiesEXT&() { return vkHandle(); };
};


struct PhysicalDeviceVertexAttributeDivisorPropertiesEXT {
	StructureType sType {StructureType::physicalDeviceVertexAttributeDivisorPropertiesEXT};
	void* pNext {};
	uint32_t maxVertexAttribDivisor {};

	PhysicalDeviceVertexAttributeDivisorPropertiesEXT(uint32_t xmaxVertexAttribDivisor = {}) : maxVertexAttribDivisor(xmaxVertexAttribDivisor) {}

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

	PipelineVertexInputDivisorStateCreateInfoEXT(uint32_t xvertexBindingDivisorCount = {}, const VertexInputBindingDivisorDescriptionEXT* xpVertexBindingDivisors = {}) : vertexBindingDivisorCount(xvertexBindingDivisorCount), pVertexBindingDivisors(xpVertexBindingDivisors) {}

	const VkPipelineVertexInputDivisorStateCreateInfoEXT& vkHandle() const { return reinterpret_cast<const VkPipelineVertexInputDivisorStateCreateInfoEXT&>(*this); }
	VkPipelineVertexInputDivisorStateCreateInfoEXT& vkHandle() { return reinterpret_cast<VkPipelineVertexInputDivisorStateCreateInfoEXT&>(*this); }

	operator const VkPipelineVertexInputDivisorStateCreateInfoEXT&() const { return vkHandle(); };
	operator VkPipelineVertexInputDivisorStateCreateInfoEXT&() { return vkHandle(); };
};



} // namespace vk

// The specification (vk.xml) itself is published under the following license:

// Copyright (c) 2015-2018 The Khronos Group Inc.
// 
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// 
//     http://www.apache.org/licenses/LICENSE-2.0
// 
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// 
// ------------------------------------------------------------------------
// 
// This file, vk.xml, is the Vulkan API Registry. It is a critically important
// and normative part of the Vulkan Specification, including a canonical
// machine-readable definition of the API, parameter and member validation
// language incorporated into the Specification and reference pages, and other
// material which is registered by Khronos, such as tags used by extension and
// layer authors. The authoritative public version of vk.xml is maintained in
// the master branch of the Khronos Vulkan GitHub project. The authoritative
// private version is maintained in the 1.0 branch of the member gitlab server.
    