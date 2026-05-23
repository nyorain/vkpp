// Copyright (c) 2020 nyorain
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

// Automaitcally generated vulkan header, see nyorain/vkpp
// Do not edit manually, rather edit the codegen files.

#pragma once

#include <vkpp/fwd.hpp>
#include <vkpp/enums.hpp>
#include <string>

// Generated for vulkan version: 1.4.350

namespace vk {

inline std::string name(nytl::Flags<DummyEnum>) { return {}; } 

inline const char* name(Result val) {
	switch(val) {
		case Result::success: return "success";
		case Result::notReady: return "notReady";
		case Result::timeout: return "timeout";
		case Result::eventSet: return "eventSet";
		case Result::eventReset: return "eventReset";
		case Result::incomplete: return "incomplete";
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
		case Result::errorFragmentedPool: return "errorFragmentedPool";
		case Result::errorUnknown: return "errorUnknown";
		case Result::errorValidationFailed: return "errorValidationFailed";
		case Result::errorOutOfPoolMemory: return "errorOutOfPoolMemory";
		case Result::errorInvalidExternalHandle: return "errorInvalidExternalHandle";
		case Result::errorInvalidOpaqueCaptureAddress: return "errorInvalidOpaqueCaptureAddress";
		case Result::errorFragmentation: return "errorFragmentation";
		case Result::pipelineCompileRequired: return "pipelineCompileRequired";
		case Result::errorNotPermitted: return "errorNotPermitted";
		case Result::errorInvalidPipelineCacheData: return "errorInvalidPipelineCacheData";
		case Result::errorNoPipelineMatch: return "errorNoPipelineMatch";
		case Result::errorSurfaceLostKHR: return "errorSurfaceLostKHR";
		case Result::errorNativeWindowInUseKHR: return "errorNativeWindowInUseKHR";
		case Result::suboptimalKHR: return "suboptimalKHR";
		case Result::errorOutOfDateKHR: return "errorOutOfDateKHR";
		case Result::errorIncompatibleDisplayKHR: return "errorIncompatibleDisplayKHR";
		case Result::errorInvalidShaderNV: return "errorInvalidShaderNV";
		case Result::errorImageUsageNotSupportedKHR: return "errorImageUsageNotSupportedKHR";
		case Result::errorVideoPictureLayoutNotSupportedKHR: return "errorVideoPictureLayoutNotSupportedKHR";
		case Result::errorVideoProfileOperationNotSupportedKHR: return "errorVideoProfileOperationNotSupportedKHR";
		case Result::errorVideoProfileFormatNotSupportedKHR: return "errorVideoProfileFormatNotSupportedKHR";
		case Result::errorVideoProfileCodecNotSupportedKHR: return "errorVideoProfileCodecNotSupportedKHR";
		case Result::errorVideoStdVersionNotSupportedKHR: return "errorVideoStdVersionNotSupportedKHR";
		case Result::errorInvalidDrmFormatModifierPlaneLayoutEXT: return "errorInvalidDrmFormatModifierPlaneLayoutEXT";
		case Result::errorPresentTimingQueueFullEXT: return "errorPresentTimingQueueFullEXT";
		case Result::errorFullScreenExclusiveModeLostEXT: return "errorFullScreenExclusiveModeLostEXT";
		case Result::threadIDleKHR: return "threadIDleKHR";
		case Result::threadDoneKHR: return "threadDoneKHR";
		case Result::operationDeferredKHR: return "operationDeferredKHR";
		case Result::operationNotDeferredKHR: return "operationNotDeferredKHR";
		case Result::errorInvalidVideoStdParametersKHR: return "errorInvalidVideoStdParametersKHR";
		case Result::errorCompressionExhaustedEXT: return "errorCompressionExhaustedEXT";
		case Result::incompatibleShaderBinaryEXT: return "incompatibleShaderBinaryEXT";
		case Result::pipelineBinaryMissingKHR: return "pipelineBinaryMissingKHR";
		case Result::errorNotEnoughSpaceKHR: return "errorNotEnoughSpaceKHR";
		default: return nullptr;
	}
}
inline const char* name(StructureType val) {
	switch(val) {
		case StructureType::applicationInfo: return "applicationInfo";
		case StructureType::instanceCreateInfo: return "instanceCreateInfo";
		case StructureType::deviceQueueCreateInfo: return "deviceQueueCreateInfo";
		case StructureType::deviceCreateInfo: return "deviceCreateInfo";
		case StructureType::submitInfo: return "submitInfo";
		case StructureType::memoryAllocateInfo: return "memoryAllocateInfo";
		case StructureType::mappedMemoryRange: return "mappedMemoryRange";
		case StructureType::bindSparseInfo: return "bindSparseInfo";
		case StructureType::fenceCreateInfo: return "fenceCreateInfo";
		case StructureType::semaphoreCreateInfo: return "semaphoreCreateInfo";
		case StructureType::eventCreateInfo: return "eventCreateInfo";
		case StructureType::queryPoolCreateInfo: return "queryPoolCreateInfo";
		case StructureType::bufferCreateInfo: return "bufferCreateInfo";
		case StructureType::bufferViewCreateInfo: return "bufferViewCreateInfo";
		case StructureType::imageCreateInfo: return "imageCreateInfo";
		case StructureType::imageViewCreateInfo: return "imageViewCreateInfo";
		case StructureType::shaderModuleCreateInfo: return "shaderModuleCreateInfo";
		case StructureType::pipelineCacheCreateInfo: return "pipelineCacheCreateInfo";
		case StructureType::pipelineShaderStageCreateInfo: return "pipelineShaderStageCreateInfo";
		case StructureType::pipelineVertexInputStateCreateInfo: return "pipelineVertexInputStateCreateInfo";
		case StructureType::pipelineInputAssemblyStateCreateInfo: return "pipelineInputAssemblyStateCreateInfo";
		case StructureType::pipelineTessellationStateCreateInfo: return "pipelineTessellationStateCreateInfo";
		case StructureType::pipelineViewportStateCreateInfo: return "pipelineViewportStateCreateInfo";
		case StructureType::pipelineRasterizationStateCreateInfo: return "pipelineRasterizationStateCreateInfo";
		case StructureType::pipelineMultisampleStateCreateInfo: return "pipelineMultisampleStateCreateInfo";
		case StructureType::pipelineDepthStencilStateCreateInfo: return "pipelineDepthStencilStateCreateInfo";
		case StructureType::pipelineColorBlendStateCreateInfo: return "pipelineColorBlendStateCreateInfo";
		case StructureType::pipelineDynamicStateCreateInfo: return "pipelineDynamicStateCreateInfo";
		case StructureType::graphicsPipelineCreateInfo: return "graphicsPipelineCreateInfo";
		case StructureType::computePipelineCreateInfo: return "computePipelineCreateInfo";
		case StructureType::pipelineLayoutCreateInfo: return "pipelineLayoutCreateInfo";
		case StructureType::samplerCreateInfo: return "samplerCreateInfo";
		case StructureType::descriptorSetLayoutCreateInfo: return "descriptorSetLayoutCreateInfo";
		case StructureType::descriptorPoolCreateInfo: return "descriptorPoolCreateInfo";
		case StructureType::descriptorSetAllocateInfo: return "descriptorSetAllocateInfo";
		case StructureType::writeDescriptorSet: return "writeDescriptorSet";
		case StructureType::copyDescriptorSet: return "copyDescriptorSet";
		case StructureType::framebufferCreateInfo: return "framebufferCreateInfo";
		case StructureType::renderPassCreateInfo: return "renderPassCreateInfo";
		case StructureType::commandPoolCreateInfo: return "commandPoolCreateInfo";
		case StructureType::commandBufferAllocateInfo: return "commandBufferAllocateInfo";
		case StructureType::commandBufferInheritanceInfo: return "commandBufferInheritanceInfo";
		case StructureType::commandBufferBeginInfo: return "commandBufferBeginInfo";
		case StructureType::renderPassBeginInfo: return "renderPassBeginInfo";
		case StructureType::bufferMemoryBarrier: return "bufferMemoryBarrier";
		case StructureType::imageMemoryBarrier: return "imageMemoryBarrier";
		case StructureType::memoryBarrier: return "memoryBarrier";
		case StructureType::loaderInstanceCreateInfo: return "loaderInstanceCreateInfo";
		case StructureType::loaderDeviceCreateInfo: return "loaderDeviceCreateInfo";
		case StructureType::bindBufferMemoryInfo: return "bindBufferMemoryInfo";
		case StructureType::bindImageMemoryInfo: return "bindImageMemoryInfo";
		case StructureType::memoryDedicatedRequirements: return "memoryDedicatedRequirements";
		case StructureType::memoryDedicatedAllocateInfo: return "memoryDedicatedAllocateInfo";
		case StructureType::memoryAllocateFlagsInfo: return "memoryAllocateFlagsInfo";
		case StructureType::deviceGroupCommandBufferBeginInfo: return "deviceGroupCommandBufferBeginInfo";
		case StructureType::deviceGroupSubmitInfo: return "deviceGroupSubmitInfo";
		case StructureType::deviceGroupBindSparseInfo: return "deviceGroupBindSparseInfo";
		case StructureType::bindBufferMemoryDeviceGroupInfo: return "bindBufferMemoryDeviceGroupInfo";
		case StructureType::bindImageMemoryDeviceGroupInfo: return "bindImageMemoryDeviceGroupInfo";
		case StructureType::physicalDeviceGroupProperties: return "physicalDeviceGroupProperties";
		case StructureType::deviceGroupDeviceCreateInfo: return "deviceGroupDeviceCreateInfo";
		case StructureType::bufferMemoryRequirementsInfo2: return "bufferMemoryRequirementsInfo2";
		case StructureType::imageMemoryRequirementsInfo2: return "imageMemoryRequirementsInfo2";
		case StructureType::imageSparseMemoryRequirementsInfo2: return "imageSparseMemoryRequirementsInfo2";
		case StructureType::memoryRequirements2: return "memoryRequirements2";
		case StructureType::sparseImageMemoryRequirements2: return "sparseImageMemoryRequirements2";
		case StructureType::physicalDeviceFeatures2: return "physicalDeviceFeatures2";
		case StructureType::physicalDeviceProperties2: return "physicalDeviceProperties2";
		case StructureType::formatProperties2: return "formatProperties2";
		case StructureType::imageFormatProperties2: return "imageFormatProperties2";
		case StructureType::physicalDeviceImageFormatInfo2: return "physicalDeviceImageFormatInfo2";
		case StructureType::queueFamilyProperties2: return "queueFamilyProperties2";
		case StructureType::physicalDeviceMemoryProperties2: return "physicalDeviceMemoryProperties2";
		case StructureType::sparseImageFormatProperties2: return "sparseImageFormatProperties2";
		case StructureType::physicalDeviceSparseImageFormatInfo2: return "physicalDeviceSparseImageFormatInfo2";
		case StructureType::imageViewUsageCreateInfo: return "imageViewUsageCreateInfo";
		case StructureType::protectedSubmitInfo: return "protectedSubmitInfo";
		case StructureType::physicalDeviceProtectedMemoryFeatures: return "physicalDeviceProtectedMemoryFeatures";
		case StructureType::physicalDeviceProtectedMemoryProperties: return "physicalDeviceProtectedMemoryProperties";
		case StructureType::deviceQueueInfo2: return "deviceQueueInfo2";
		case StructureType::physicalDeviceExternalImageFormatInfo: return "physicalDeviceExternalImageFormatInfo";
		case StructureType::externalImageFormatProperties: return "externalImageFormatProperties";
		case StructureType::physicalDeviceExternalBufferInfo: return "physicalDeviceExternalBufferInfo";
		case StructureType::externalBufferProperties: return "externalBufferProperties";
		case StructureType::physicalDeviceIDProperties: return "physicalDeviceIDProperties";
		case StructureType::externalMemoryBufferCreateInfo: return "externalMemoryBufferCreateInfo";
		case StructureType::externalMemoryImageCreateInfo: return "externalMemoryImageCreateInfo";
		case StructureType::exportMemoryAllocateInfo: return "exportMemoryAllocateInfo";
		case StructureType::physicalDeviceExternalFenceInfo: return "physicalDeviceExternalFenceInfo";
		case StructureType::externalFenceProperties: return "externalFenceProperties";
		case StructureType::exportFenceCreateInfo: return "exportFenceCreateInfo";
		case StructureType::exportSemaphoreCreateInfo: return "exportSemaphoreCreateInfo";
		case StructureType::physicalDeviceExternalSemaphoreInfo: return "physicalDeviceExternalSemaphoreInfo";
		case StructureType::externalSemaphoreProperties: return "externalSemaphoreProperties";
		case StructureType::physicalDeviceSubgroupProperties: return "physicalDeviceSubgroupProperties";
		case StructureType::physicalDevice16bitStorageFeatures: return "physicalDevice16bitStorageFeatures";
		case StructureType::physicalDeviceVariablePointersFeatures: return "physicalDeviceVariablePointersFeatures";
		case StructureType::descriptorUpdateTemplateCreateInfo: return "descriptorUpdateTemplateCreateInfo";
		case StructureType::physicalDeviceMaintenance3Properties: return "physicalDeviceMaintenance3Properties";
		case StructureType::descriptorSetLayoutSupport: return "descriptorSetLayoutSupport";
		case StructureType::samplerYcbcrConversionCreateInfo: return "samplerYcbcrConversionCreateInfo";
		case StructureType::samplerYcbcrConversionInfo: return "samplerYcbcrConversionInfo";
		case StructureType::bindImagePlaneMemoryInfo: return "bindImagePlaneMemoryInfo";
		case StructureType::imagePlaneMemoryRequirementsInfo: return "imagePlaneMemoryRequirementsInfo";
		case StructureType::physicalDeviceSamplerYcbcrConversionFeatures: return "physicalDeviceSamplerYcbcrConversionFeatures";
		case StructureType::samplerYcbcrConversionImageFormatProperties: return "samplerYcbcrConversionImageFormatProperties";
		case StructureType::deviceGroupRenderPassBeginInfo: return "deviceGroupRenderPassBeginInfo";
		case StructureType::physicalDevicePointClippingProperties: return "physicalDevicePointClippingProperties";
		case StructureType::renderPassInputAttachmentAspectCreateInfo: return "renderPassInputAttachmentAspectCreateInfo";
		case StructureType::pipelineTessellationDomainOriginStateCreateInfo: return "pipelineTessellationDomainOriginStateCreateInfo";
		case StructureType::renderPassMultiviewCreateInfo: return "renderPassMultiviewCreateInfo";
		case StructureType::physicalDeviceMultiviewFeatures: return "physicalDeviceMultiviewFeatures";
		case StructureType::physicalDeviceMultiviewProperties: return "physicalDeviceMultiviewProperties";
		case StructureType::physicalDeviceShaderDrawParametersFeatures: return "physicalDeviceShaderDrawParametersFeatures";
		case StructureType::physicalDeviceDriverProperties: return "physicalDeviceDriverProperties";
		case StructureType::physicalDeviceVulkan11Features: return "physicalDeviceVulkan11Features";
		case StructureType::physicalDeviceVulkan11Properties: return "physicalDeviceVulkan11Properties";
		case StructureType::physicalDeviceVulkan12Features: return "physicalDeviceVulkan12Features";
		case StructureType::physicalDeviceVulkan12Properties: return "physicalDeviceVulkan12Properties";
		case StructureType::imageFormatListCreateInfo: return "imageFormatListCreateInfo";
		case StructureType::physicalDeviceVulkanMemoryModelFeatures: return "physicalDeviceVulkanMemoryModelFeatures";
		case StructureType::physicalDeviceHostQueryResetFeatures: return "physicalDeviceHostQueryResetFeatures";
		case StructureType::physicalDeviceTimelineSemaphoreFeatures: return "physicalDeviceTimelineSemaphoreFeatures";
		case StructureType::physicalDeviceTimelineSemaphoreProperties: return "physicalDeviceTimelineSemaphoreProperties";
		case StructureType::semaphoreTypeCreateInfo: return "semaphoreTypeCreateInfo";
		case StructureType::timelineSemaphoreSubmitInfo: return "timelineSemaphoreSubmitInfo";
		case StructureType::semaphoreWaitInfo: return "semaphoreWaitInfo";
		case StructureType::semaphoreSignalInfo: return "semaphoreSignalInfo";
		case StructureType::physicalDeviceBufferDeviceAddressFeatures: return "physicalDeviceBufferDeviceAddressFeatures";
		case StructureType::bufferDeviceAddressInfo: return "bufferDeviceAddressInfo";
		case StructureType::bufferOpaqueCaptureAddressCreateInfo: return "bufferOpaqueCaptureAddressCreateInfo";
		case StructureType::memoryOpaqueCaptureAddressAllocateInfo: return "memoryOpaqueCaptureAddressAllocateInfo";
		case StructureType::deviceMemoryOpaqueCaptureAddressInfo: return "deviceMemoryOpaqueCaptureAddressInfo";
		case StructureType::physicalDevice8bitStorageFeatures: return "physicalDevice8bitStorageFeatures";
		case StructureType::physicalDeviceShaderAtomicInt64Features: return "physicalDeviceShaderAtomicInt64Features";
		case StructureType::physicalDeviceShaderFloat16Int8Features: return "physicalDeviceShaderFloat16Int8Features";
		case StructureType::physicalDeviceFloatControlsProperties: return "physicalDeviceFloatControlsProperties";
		case StructureType::descriptorSetLayoutBindingFlagsCreateInfo: return "descriptorSetLayoutBindingFlagsCreateInfo";
		case StructureType::physicalDeviceDescriptorIndexingFeatures: return "physicalDeviceDescriptorIndexingFeatures";
		case StructureType::physicalDeviceDescriptorIndexingProperties: return "physicalDeviceDescriptorIndexingProperties";
		case StructureType::descriptorSetVariableDescriptorCountAllocateInfo: return "descriptorSetVariableDescriptorCountAllocateInfo";
		case StructureType::descriptorSetVariableDescriptorCountLayoutSupport: return "descriptorSetVariableDescriptorCountLayoutSupport";
		case StructureType::physicalDeviceScalarBlockLayoutFeatures: return "physicalDeviceScalarBlockLayoutFeatures";
		case StructureType::physicalDeviceSamplerFilterMinmaxProperties: return "physicalDeviceSamplerFilterMinmaxProperties";
		case StructureType::samplerReductionModeCreateInfo: return "samplerReductionModeCreateInfo";
		case StructureType::physicalDeviceUniformBufferStandardLayoutFeatures: return "physicalDeviceUniformBufferStandardLayoutFeatures";
		case StructureType::physicalDeviceShaderSubgroupExtendedTypesFeatures: return "physicalDeviceShaderSubgroupExtendedTypesFeatures";
		case StructureType::attachmentDescription2: return "attachmentDescription2";
		case StructureType::attachmentReference2: return "attachmentReference2";
		case StructureType::subpassDescription2: return "subpassDescription2";
		case StructureType::subpassDependency2: return "subpassDependency2";
		case StructureType::renderPassCreateInfo2: return "renderPassCreateInfo2";
		case StructureType::subpassBeginInfo: return "subpassBeginInfo";
		case StructureType::subpassEndInfo: return "subpassEndInfo";
		case StructureType::physicalDeviceDepthStencilResolveProperties: return "physicalDeviceDepthStencilResolveProperties";
		case StructureType::subpassDescriptionDepthStencilResolve: return "subpassDescriptionDepthStencilResolve";
		case StructureType::imageStencilUsageCreateInfo: return "imageStencilUsageCreateInfo";
		case StructureType::physicalDeviceImagelessFramebufferFeatures: return "physicalDeviceImagelessFramebufferFeatures";
		case StructureType::framebufferAttachmentsCreateInfo: return "framebufferAttachmentsCreateInfo";
		case StructureType::framebufferAttachmentImageInfo: return "framebufferAttachmentImageInfo";
		case StructureType::renderPassAttachmentBeginInfo: return "renderPassAttachmentBeginInfo";
		case StructureType::physicalDeviceSeparateDepthStencilLayoutsFeatures: return "physicalDeviceSeparateDepthStencilLayoutsFeatures";
		case StructureType::attachmentReferenceStencilLayout: return "attachmentReferenceStencilLayout";
		case StructureType::attachmentDescriptionStencilLayout: return "attachmentDescriptionStencilLayout";
		case StructureType::physicalDeviceVulkan13Features: return "physicalDeviceVulkan13Features";
		case StructureType::physicalDeviceVulkan13Properties: return "physicalDeviceVulkan13Properties";
		case StructureType::physicalDeviceToolProperties: return "physicalDeviceToolProperties";
		case StructureType::physicalDevicePrivateDataFeatures: return "physicalDevicePrivateDataFeatures";
		case StructureType::devicePrivateDataCreateInfo: return "devicePrivateDataCreateInfo";
		case StructureType::privateDataSlotCreateInfo: return "privateDataSlotCreateInfo";
		case StructureType::memoryBarrier2: return "memoryBarrier2";
		case StructureType::bufferMemoryBarrier2: return "bufferMemoryBarrier2";
		case StructureType::imageMemoryBarrier2: return "imageMemoryBarrier2";
		case StructureType::dependencyInfo: return "dependencyInfo";
		case StructureType::submitInfo2: return "submitInfo2";
		case StructureType::semaphoreSubmitInfo: return "semaphoreSubmitInfo";
		case StructureType::commandBufferSubmitInfo: return "commandBufferSubmitInfo";
		case StructureType::physicalDeviceSynchronization2Features: return "physicalDeviceSynchronization2Features";
		case StructureType::copyBufferInfo2: return "copyBufferInfo2";
		case StructureType::copyImageInfo2: return "copyImageInfo2";
		case StructureType::copyBufferToImageInfo2: return "copyBufferToImageInfo2";
		case StructureType::copyImageToBufferInfo2: return "copyImageToBufferInfo2";
		case StructureType::bufferCopy2: return "bufferCopy2";
		case StructureType::imageCopy2: return "imageCopy2";
		case StructureType::bufferImageCopy2: return "bufferImageCopy2";
		case StructureType::physicalDeviceTextureCompressionAstcHdrFeatures: return "physicalDeviceTextureCompressionAstcHdrFeatures";
		case StructureType::formatProperties3: return "formatProperties3";
		case StructureType::physicalDeviceMaintenance4Features: return "physicalDeviceMaintenance4Features";
		case StructureType::physicalDeviceMaintenance4Properties: return "physicalDeviceMaintenance4Properties";
		case StructureType::deviceBufferMemoryRequirements: return "deviceBufferMemoryRequirements";
		case StructureType::deviceImageMemoryRequirements: return "deviceImageMemoryRequirements";
		case StructureType::pipelineCreationFeedbackCreateInfo: return "pipelineCreationFeedbackCreateInfo";
		case StructureType::physicalDeviceShaderTerminateInvocationFeatures: return "physicalDeviceShaderTerminateInvocationFeatures";
		case StructureType::physicalDeviceShaderDemoteToHelperInvocationFeatures: return "physicalDeviceShaderDemoteToHelperInvocationFeatures";
		case StructureType::physicalDevicePipelineCreationCacheControlFeatures: return "physicalDevicePipelineCreationCacheControlFeatures";
		case StructureType::physicalDeviceZeroInitializeWorkgroupMemoryFeatures: return "physicalDeviceZeroInitializeWorkgroupMemoryFeatures";
		case StructureType::physicalDeviceImageRobustnessFeatures: return "physicalDeviceImageRobustnessFeatures";
		case StructureType::physicalDeviceSubgroupSizeControlProperties: return "physicalDeviceSubgroupSizeControlProperties";
		case StructureType::pipelineShaderStageRequiredSubgroupSizeCreateInfo: return "pipelineShaderStageRequiredSubgroupSizeCreateInfo";
		case StructureType::physicalDeviceSubgroupSizeControlFeatures: return "physicalDeviceSubgroupSizeControlFeatures";
		case StructureType::physicalDeviceInlineUniformBlockFeatures: return "physicalDeviceInlineUniformBlockFeatures";
		case StructureType::physicalDeviceInlineUniformBlockProperties: return "physicalDeviceInlineUniformBlockProperties";
		case StructureType::writeDescriptorSetInlineUniformBlock: return "writeDescriptorSetInlineUniformBlock";
		case StructureType::descriptorPoolInlineUniformBlockCreateInfo: return "descriptorPoolInlineUniformBlockCreateInfo";
		case StructureType::physicalDeviceShaderIntegerDotProductFeatures: return "physicalDeviceShaderIntegerDotProductFeatures";
		case StructureType::physicalDeviceShaderIntegerDotProductProperties: return "physicalDeviceShaderIntegerDotProductProperties";
		case StructureType::physicalDeviceTexelBufferAlignmentProperties: return "physicalDeviceTexelBufferAlignmentProperties";
		case StructureType::blitImageInfo2: return "blitImageInfo2";
		case StructureType::resolveImageInfo2: return "resolveImageInfo2";
		case StructureType::imageBlit2: return "imageBlit2";
		case StructureType::imageResolve2: return "imageResolve2";
		case StructureType::renderingInfo: return "renderingInfo";
		case StructureType::renderingAttachmentInfo: return "renderingAttachmentInfo";
		case StructureType::pipelineRenderingCreateInfo: return "pipelineRenderingCreateInfo";
		case StructureType::physicalDeviceDynamicRenderingFeatures: return "physicalDeviceDynamicRenderingFeatures";
		case StructureType::commandBufferInheritanceRenderingInfo: return "commandBufferInheritanceRenderingInfo";
		case StructureType::physicalDeviceVulkan14Features: return "physicalDeviceVulkan14Features";
		case StructureType::physicalDeviceVulkan14Properties: return "physicalDeviceVulkan14Properties";
		case StructureType::deviceQueueGlobalPriorityCreateInfo: return "deviceQueueGlobalPriorityCreateInfo";
		case StructureType::physicalDeviceGlobalPriorityQueryFeatures: return "physicalDeviceGlobalPriorityQueryFeatures";
		case StructureType::queueFamilyGlobalPriorityProperties: return "queueFamilyGlobalPriorityProperties";
		case StructureType::physicalDeviceIndexTypeUint8Features: return "physicalDeviceIndexTypeUint8Features";
		case StructureType::memoryMapInfo: return "memoryMapInfo";
		case StructureType::memoryUnmapInfo: return "memoryUnmapInfo";
		case StructureType::physicalDeviceMaintenance5Features: return "physicalDeviceMaintenance5Features";
		case StructureType::physicalDeviceMaintenance5Properties: return "physicalDeviceMaintenance5Properties";
		case StructureType::deviceImageSubresourceInfo: return "deviceImageSubresourceInfo";
		case StructureType::subresourceLayout2: return "subresourceLayout2";
		case StructureType::imageSubresource2: return "imageSubresource2";
		case StructureType::bufferUsageFlags2CreateInfo: return "bufferUsageFlags2CreateInfo";
		case StructureType::physicalDeviceMaintenance6Features: return "physicalDeviceMaintenance6Features";
		case StructureType::physicalDeviceMaintenance6Properties: return "physicalDeviceMaintenance6Properties";
		case StructureType::bindMemoryStatus: return "bindMemoryStatus";
		case StructureType::physicalDeviceHostImageCopyFeatures: return "physicalDeviceHostImageCopyFeatures";
		case StructureType::physicalDeviceHostImageCopyProperties: return "physicalDeviceHostImageCopyProperties";
		case StructureType::memoryToImageCopy: return "memoryToImageCopy";
		case StructureType::imageToMemoryCopy: return "imageToMemoryCopy";
		case StructureType::copyImageToMemoryInfo: return "copyImageToMemoryInfo";
		case StructureType::copyMemoryToImageInfo: return "copyMemoryToImageInfo";
		case StructureType::hostImageLayoutTransitionInfo: return "hostImageLayoutTransitionInfo";
		case StructureType::copyImageToImageInfo: return "copyImageToImageInfo";
		case StructureType::subresourceHostMemcpySize: return "subresourceHostMemcpySize";
		case StructureType::hostImageCopyDevicePerformanceQuery: return "hostImageCopyDevicePerformanceQuery";
		case StructureType::physicalDeviceShaderSubgroupRotateFeatures: return "physicalDeviceShaderSubgroupRotateFeatures";
		case StructureType::physicalDeviceShaderFloatControls2Features: return "physicalDeviceShaderFloatControls2Features";
		case StructureType::physicalDeviceShaderExpectAssumeFeatures: return "physicalDeviceShaderExpectAssumeFeatures";
		case StructureType::pipelineCreateFlags2CreateInfo: return "pipelineCreateFlags2CreateInfo";
		case StructureType::physicalDevicePushDescriptorProperties: return "physicalDevicePushDescriptorProperties";
		case StructureType::bindDescriptorSetsInfo: return "bindDescriptorSetsInfo";
		case StructureType::pushConstantsInfo: return "pushConstantsInfo";
		case StructureType::pushDescriptorSetInfo: return "pushDescriptorSetInfo";
		case StructureType::pushDescriptorSetWithTemplateInfo: return "pushDescriptorSetWithTemplateInfo";
		case StructureType::physicalDevicePipelineProtectedAccessFeatures: return "physicalDevicePipelineProtectedAccessFeatures";
		case StructureType::pipelineRobustnessCreateInfo: return "pipelineRobustnessCreateInfo";
		case StructureType::physicalDevicePipelineRobustnessFeatures: return "physicalDevicePipelineRobustnessFeatures";
		case StructureType::physicalDevicePipelineRobustnessProperties: return "physicalDevicePipelineRobustnessProperties";
		case StructureType::physicalDeviceLineRasterizationFeatures: return "physicalDeviceLineRasterizationFeatures";
		case StructureType::pipelineRasterizationLineStateCreateInfo: return "pipelineRasterizationLineStateCreateInfo";
		case StructureType::physicalDeviceLineRasterizationProperties: return "physicalDeviceLineRasterizationProperties";
		case StructureType::physicalDeviceVertexAttributeDivisorProperties: return "physicalDeviceVertexAttributeDivisorProperties";
		case StructureType::pipelineVertexInputDivisorStateCreateInfo: return "pipelineVertexInputDivisorStateCreateInfo";
		case StructureType::physicalDeviceVertexAttributeDivisorFeatures: return "physicalDeviceVertexAttributeDivisorFeatures";
		case StructureType::renderingAreaInfo: return "renderingAreaInfo";
		case StructureType::physicalDeviceDynamicRenderingLocalReadFeatures: return "physicalDeviceDynamicRenderingLocalReadFeatures";
		case StructureType::renderingAttachmentLocationInfo: return "renderingAttachmentLocationInfo";
		case StructureType::renderingInputAttachmentIndexInfo: return "renderingInputAttachmentIndexInfo";
		case StructureType::physicalDeviceVulkanSc10Features: return "physicalDeviceVulkanSc10Features";
		case StructureType::physicalDeviceVulkanSc10Properties: return "physicalDeviceVulkanSc10Properties";
		case StructureType::deviceObjectReservationCreateInfo: return "deviceObjectReservationCreateInfo";
		case StructureType::commandPoolMemoryReservationCreateInfo: return "commandPoolMemoryReservationCreateInfo";
		case StructureType::commandPoolMemoryConsumption: return "commandPoolMemoryConsumption";
		case StructureType::pipelinePoolSize: return "pipelinePoolSize";
		case StructureType::faultData: return "faultData";
		case StructureType::faultCallbackInfo: return "faultCallbackInfo";
		case StructureType::pipelineOfflineCreateInfo: return "pipelineOfflineCreateInfo";
		case StructureType::swapchainCreateInfoKHR: return "swapchainCreateInfoKHR";
		case StructureType::presentInfoKHR: return "presentInfoKHR";
		case StructureType::deviceGroupPresentCapabilitiesKHR: return "deviceGroupPresentCapabilitiesKHR";
		case StructureType::imageSwapchainCreateInfoKHR: return "imageSwapchainCreateInfoKHR";
		case StructureType::bindImageMemorySwapchainInfoKHR: return "bindImageMemorySwapchainInfoKHR";
		case StructureType::acquireNextImageInfoKHR: return "acquireNextImageInfoKHR";
		case StructureType::deviceGroupPresentInfoKHR: return "deviceGroupPresentInfoKHR";
		case StructureType::deviceGroupSwapchainCreateInfoKHR: return "deviceGroupSwapchainCreateInfoKHR";
		case StructureType::displayModeCreateInfoKHR: return "displayModeCreateInfoKHR";
		case StructureType::displaySurfaceCreateInfoKHR: return "displaySurfaceCreateInfoKHR";
		case StructureType::displayPresentInfoKHR: return "displayPresentInfoKHR";
		case StructureType::xlibSurfaceCreateInfoKHR: return "xlibSurfaceCreateInfoKHR";
		case StructureType::xcbSurfaceCreateInfoKHR: return "xcbSurfaceCreateInfoKHR";
		case StructureType::waylandSurfaceCreateInfoKHR: return "waylandSurfaceCreateInfoKHR";
		case StructureType::win32SurfaceCreateInfoKHR: return "win32SurfaceCreateInfoKHR";
		case StructureType::debugReportCallbackCreateInfoEXT: return "debugReportCallbackCreateInfoEXT";
		case StructureType::pipelineRasterizationStateRasterizationOrderAMD: return "pipelineRasterizationStateRasterizationOrderAMD";
		case StructureType::debugMarkerObjectNameInfoEXT: return "debugMarkerObjectNameInfoEXT";
		case StructureType::debugMarkerObjectTagInfoEXT: return "debugMarkerObjectTagInfoEXT";
		case StructureType::debugMarkerMarkerInfoEXT: return "debugMarkerMarkerInfoEXT";
		case StructureType::videoProfileInfoKHR: return "videoProfileInfoKHR";
		case StructureType::videoCapabilitiesKHR: return "videoCapabilitiesKHR";
		case StructureType::videoPictureResourceInfoKHR: return "videoPictureResourceInfoKHR";
		case StructureType::videoSessionMemoryRequirementsKHR: return "videoSessionMemoryRequirementsKHR";
		case StructureType::bindVideoSessionMemoryInfoKHR: return "bindVideoSessionMemoryInfoKHR";
		case StructureType::videoSessionCreateInfoKHR: return "videoSessionCreateInfoKHR";
		case StructureType::videoSessionParametersCreateInfoKHR: return "videoSessionParametersCreateInfoKHR";
		case StructureType::videoSessionParametersUpdateInfoKHR: return "videoSessionParametersUpdateInfoKHR";
		case StructureType::videoBeginCodingInfoKHR: return "videoBeginCodingInfoKHR";
		case StructureType::videoEndCodingInfoKHR: return "videoEndCodingInfoKHR";
		case StructureType::videoCodingControlInfoKHR: return "videoCodingControlInfoKHR";
		case StructureType::videoReferenceSlotInfoKHR: return "videoReferenceSlotInfoKHR";
		case StructureType::queueFamilyVideoPropertiesKHR: return "queueFamilyVideoPropertiesKHR";
		case StructureType::videoProfileListInfoKHR: return "videoProfileListInfoKHR";
		case StructureType::physicalDeviceVideoFormatInfoKHR: return "physicalDeviceVideoFormatInfoKHR";
		case StructureType::videoFormatPropertiesKHR: return "videoFormatPropertiesKHR";
		case StructureType::queueFamilyQueryResultStatusPropertiesKHR: return "queueFamilyQueryResultStatusPropertiesKHR";
		case StructureType::videoDecodeInfoKHR: return "videoDecodeInfoKHR";
		case StructureType::videoDecodeCapabilitiesKHR: return "videoDecodeCapabilitiesKHR";
		case StructureType::videoDecodeUsageInfoKHR: return "videoDecodeUsageInfoKHR";
		case StructureType::dedicatedAllocationImageCreateInfoNV: return "dedicatedAllocationImageCreateInfoNV";
		case StructureType::dedicatedAllocationBufferCreateInfoNV: return "dedicatedAllocationBufferCreateInfoNV";
		case StructureType::dedicatedAllocationMemoryAllocateInfoNV: return "dedicatedAllocationMemoryAllocateInfoNV";
		case StructureType::physicalDeviceTransformFeedbackFeaturesEXT: return "physicalDeviceTransformFeedbackFeaturesEXT";
		case StructureType::physicalDeviceTransformFeedbackPropertiesEXT: return "physicalDeviceTransformFeedbackPropertiesEXT";
		case StructureType::pipelineRasterizationStateStreamCreateInfoEXT: return "pipelineRasterizationStateStreamCreateInfoEXT";
		case StructureType::videoEncodeH264CapabilitiesKHR: return "videoEncodeH264CapabilitiesKHR";
		case StructureType::videoEncodeH264SessionParametersCreateInfoKHR: return "videoEncodeH264SessionParametersCreateInfoKHR";
		case StructureType::videoEncodeH264SessionParametersAddInfoKHR: return "videoEncodeH264SessionParametersAddInfoKHR";
		case StructureType::videoEncodeH264PictureInfoKHR: return "videoEncodeH264PictureInfoKHR";
		case StructureType::videoEncodeH264DpbSlotInfoKHR: return "videoEncodeH264DpbSlotInfoKHR";
		case StructureType::videoEncodeH264NaluSliceInfoKHR: return "videoEncodeH264NaluSliceInfoKHR";
		case StructureType::videoEncodeH264GopRemainingFrameInfoKHR: return "videoEncodeH264GopRemainingFrameInfoKHR";
		case StructureType::videoEncodeH264ProfileInfoKHR: return "videoEncodeH264ProfileInfoKHR";
		case StructureType::videoEncodeH264RateControlInfoKHR: return "videoEncodeH264RateControlInfoKHR";
		case StructureType::videoEncodeH264RateControlLayerInfoKHR: return "videoEncodeH264RateControlLayerInfoKHR";
		case StructureType::videoEncodeH264SessionCreateInfoKHR: return "videoEncodeH264SessionCreateInfoKHR";
		case StructureType::videoEncodeH264QualityLevelPropertiesKHR: return "videoEncodeH264QualityLevelPropertiesKHR";
		case StructureType::videoEncodeH264SessionParametersGetInfoKHR: return "videoEncodeH264SessionParametersGetInfoKHR";
		case StructureType::videoEncodeH264SessionParametersFeedbackInfoKHR: return "videoEncodeH264SessionParametersFeedbackInfoKHR";
		case StructureType::videoEncodeH265CapabilitiesKHR: return "videoEncodeH265CapabilitiesKHR";
		case StructureType::videoEncodeH265SessionParametersCreateInfoKHR: return "videoEncodeH265SessionParametersCreateInfoKHR";
		case StructureType::videoEncodeH265SessionParametersAddInfoKHR: return "videoEncodeH265SessionParametersAddInfoKHR";
		case StructureType::videoEncodeH265PictureInfoKHR: return "videoEncodeH265PictureInfoKHR";
		case StructureType::videoEncodeH265DpbSlotInfoKHR: return "videoEncodeH265DpbSlotInfoKHR";
		case StructureType::videoEncodeH265NaluSliceSegmentInfoKHR: return "videoEncodeH265NaluSliceSegmentInfoKHR";
		case StructureType::videoEncodeH265GopRemainingFrameInfoKHR: return "videoEncodeH265GopRemainingFrameInfoKHR";
		case StructureType::videoEncodeH265ProfileInfoKHR: return "videoEncodeH265ProfileInfoKHR";
		case StructureType::videoEncodeH265RateControlInfoKHR: return "videoEncodeH265RateControlInfoKHR";
		case StructureType::videoEncodeH265RateControlLayerInfoKHR: return "videoEncodeH265RateControlLayerInfoKHR";
		case StructureType::videoEncodeH265SessionCreateInfoKHR: return "videoEncodeH265SessionCreateInfoKHR";
		case StructureType::videoEncodeH265QualityLevelPropertiesKHR: return "videoEncodeH265QualityLevelPropertiesKHR";
		case StructureType::videoEncodeH265SessionParametersGetInfoKHR: return "videoEncodeH265SessionParametersGetInfoKHR";
		case StructureType::videoEncodeH265SessionParametersFeedbackInfoKHR: return "videoEncodeH265SessionParametersFeedbackInfoKHR";
		case StructureType::videoDecodeH264CapabilitiesKHR: return "videoDecodeH264CapabilitiesKHR";
		case StructureType::videoDecodeH264PictureInfoKHR: return "videoDecodeH264PictureInfoKHR";
		case StructureType::videoDecodeH264ProfileInfoKHR: return "videoDecodeH264ProfileInfoKHR";
		case StructureType::videoDecodeH264SessionParametersCreateInfoKHR: return "videoDecodeH264SessionParametersCreateInfoKHR";
		case StructureType::videoDecodeH264SessionParametersAddInfoKHR: return "videoDecodeH264SessionParametersAddInfoKHR";
		case StructureType::videoDecodeH264DpbSlotInfoKHR: return "videoDecodeH264DpbSlotInfoKHR";
		case StructureType::textureLodGatherFormatPropertiesAMD: return "textureLodGatherFormatPropertiesAMD";
		case StructureType::streamDescriptorSurfaceCreateInfoGGP: return "streamDescriptorSurfaceCreateInfoGGP";
		case StructureType::physicalDeviceCornerSampledImageFeaturesNV: return "physicalDeviceCornerSampledImageFeaturesNV";
		case StructureType::externalMemoryImageCreateInfoNV: return "externalMemoryImageCreateInfoNV";
		case StructureType::exportMemoryAllocateInfoNV: return "exportMemoryAllocateInfoNV";
		case StructureType::importMemoryWin32HandleInfoNV: return "importMemoryWin32HandleInfoNV";
		case StructureType::exportMemoryWin32HandleInfoNV: return "exportMemoryWin32HandleInfoNV";
		case StructureType::win32KeyedMutexAcquireReleaseInfoNV: return "win32KeyedMutexAcquireReleaseInfoNV";
		case StructureType::validationFlagsEXT: return "validationFlagsEXT";
		case StructureType::viSurfaceCreateInfoNN: return "viSurfaceCreateInfoNN";
		case StructureType::imageViewAstcDecodeModeEXT: return "imageViewAstcDecodeModeEXT";
		case StructureType::physicalDeviceAstcDecodeFeaturesEXT: return "physicalDeviceAstcDecodeFeaturesEXT";
		case StructureType::importMemoryWin32HandleInfoKHR: return "importMemoryWin32HandleInfoKHR";
		case StructureType::exportMemoryWin32HandleInfoKHR: return "exportMemoryWin32HandleInfoKHR";
		case StructureType::memoryWin32HandlePropertiesKHR: return "memoryWin32HandlePropertiesKHR";
		case StructureType::memoryGetWin32HandleInfoKHR: return "memoryGetWin32HandleInfoKHR";
		case StructureType::importMemoryFdInfoKHR: return "importMemoryFdInfoKHR";
		case StructureType::memoryFdPropertiesKHR: return "memoryFdPropertiesKHR";
		case StructureType::memoryGetFdInfoKHR: return "memoryGetFdInfoKHR";
		case StructureType::win32KeyedMutexAcquireReleaseInfoKHR: return "win32KeyedMutexAcquireReleaseInfoKHR";
		case StructureType::importSemaphoreWin32HandleInfoKHR: return "importSemaphoreWin32HandleInfoKHR";
		case StructureType::exportSemaphoreWin32HandleInfoKHR: return "exportSemaphoreWin32HandleInfoKHR";
		case StructureType::d3d12FenceSubmitInfoKHR: return "d3d12FenceSubmitInfoKHR";
		case StructureType::semaphoreGetWin32HandleInfoKHR: return "semaphoreGetWin32HandleInfoKHR";
		case StructureType::importSemaphoreFdInfoKHR: return "importSemaphoreFdInfoKHR";
		case StructureType::semaphoreGetFdInfoKHR: return "semaphoreGetFdInfoKHR";
		case StructureType::commandBufferInheritanceConditionalRenderingInfoEXT: return "commandBufferInheritanceConditionalRenderingInfoEXT";
		case StructureType::physicalDeviceConditionalRenderingFeaturesEXT: return "physicalDeviceConditionalRenderingFeaturesEXT";
		case StructureType::conditionalRenderingBeginInfoEXT: return "conditionalRenderingBeginInfoEXT";
		case StructureType::presentRegionsKHR: return "presentRegionsKHR";
		case StructureType::pipelineViewportWScalingStateCreateInfoNV: return "pipelineViewportWScalingStateCreateInfoNV";
		case StructureType::surfaceCapabilities2EXT: return "surfaceCapabilities2EXT";
		case StructureType::displayPowerInfoEXT: return "displayPowerInfoEXT";
		case StructureType::deviceEventInfoEXT: return "deviceEventInfoEXT";
		case StructureType::displayEventInfoEXT: return "displayEventInfoEXT";
		case StructureType::swapchainCounterCreateInfoEXT: return "swapchainCounterCreateInfoEXT";
		case StructureType::presentTimesInfoGOOGLE: return "presentTimesInfoGOOGLE";
		case StructureType::pipelineViewportSwizzleStateCreateInfoNV: return "pipelineViewportSwizzleStateCreateInfoNV";
		case StructureType::physicalDeviceDiscardRectanglePropertiesEXT: return "physicalDeviceDiscardRectanglePropertiesEXT";
		case StructureType::pipelineDiscardRectangleStateCreateInfoEXT: return "pipelineDiscardRectangleStateCreateInfoEXT";
		case StructureType::physicalDeviceConservativeRasterizationPropertiesEXT: return "physicalDeviceConservativeRasterizationPropertiesEXT";
		case StructureType::pipelineRasterizationConservativeStateCreateInfoEXT: return "pipelineRasterizationConservativeStateCreateInfoEXT";
		case StructureType::physicalDeviceDepthClipEnableFeaturesEXT: return "physicalDeviceDepthClipEnableFeaturesEXT";
		case StructureType::pipelineRasterizationDepthClipStateCreateInfoEXT: return "pipelineRasterizationDepthClipStateCreateInfoEXT";
		case StructureType::hdrMetadataEXT: return "hdrMetadataEXT";
		case StructureType::physicalDeviceRelaxedLineRasterizationFeaturesIMG: return "physicalDeviceRelaxedLineRasterizationFeaturesIMG";
		case StructureType::sharedPresentSurfaceCapabilitiesKHR: return "sharedPresentSurfaceCapabilitiesKHR";
		case StructureType::importFenceWin32HandleInfoKHR: return "importFenceWin32HandleInfoKHR";
		case StructureType::exportFenceWin32HandleInfoKHR: return "exportFenceWin32HandleInfoKHR";
		case StructureType::fenceGetWin32HandleInfoKHR: return "fenceGetWin32HandleInfoKHR";
		case StructureType::importFenceFdInfoKHR: return "importFenceFdInfoKHR";
		case StructureType::fenceGetFdInfoKHR: return "fenceGetFdInfoKHR";
		case StructureType::physicalDevicePerformanceQueryFeaturesKHR: return "physicalDevicePerformanceQueryFeaturesKHR";
		case StructureType::physicalDevicePerformanceQueryPropertiesKHR: return "physicalDevicePerformanceQueryPropertiesKHR";
		case StructureType::queryPoolPerformanceCreateInfoKHR: return "queryPoolPerformanceCreateInfoKHR";
		case StructureType::performanceQuerySubmitInfoKHR: return "performanceQuerySubmitInfoKHR";
		case StructureType::acquireProfilingLockInfoKHR: return "acquireProfilingLockInfoKHR";
		case StructureType::performanceCounterKHR: return "performanceCounterKHR";
		case StructureType::performanceCounterDescriptionKHR: return "performanceCounterDescriptionKHR";
		case StructureType::physicalDeviceSurfaceInfo2KHR: return "physicalDeviceSurfaceInfo2KHR";
		case StructureType::surfaceCapabilities2KHR: return "surfaceCapabilities2KHR";
		case StructureType::surfaceFormat2KHR: return "surfaceFormat2KHR";
		case StructureType::displayProperties2KHR: return "displayProperties2KHR";
		case StructureType::displayPlaneProperties2KHR: return "displayPlaneProperties2KHR";
		case StructureType::displayModeProperties2KHR: return "displayModeProperties2KHR";
		case StructureType::displayPlaneInfo2KHR: return "displayPlaneInfo2KHR";
		case StructureType::displayPlaneCapabilities2KHR: return "displayPlaneCapabilities2KHR";
		case StructureType::iosSurfaceCreateInfoMVK: return "iosSurfaceCreateInfoMVK";
		case StructureType::macosSurfaceCreateInfoMVK: return "macosSurfaceCreateInfoMVK";
		case StructureType::debugUtilsObjectNameInfoEXT: return "debugUtilsObjectNameInfoEXT";
		case StructureType::debugUtilsObjectTagInfoEXT: return "debugUtilsObjectTagInfoEXT";
		case StructureType::debugUtilsLabelEXT: return "debugUtilsLabelEXT";
		case StructureType::debugUtilsMessengerCallbackDataEXT: return "debugUtilsMessengerCallbackDataEXT";
		case StructureType::debugUtilsMessengerCreateInfoEXT: return "debugUtilsMessengerCreateInfoEXT";
		case StructureType::texelBufferDescriptorInfoEXT: return "texelBufferDescriptorInfoEXT";
		case StructureType::imageDescriptorInfoEXT: return "imageDescriptorInfoEXT";
		case StructureType::resourceDescriptorInfoEXT: return "resourceDescriptorInfoEXT";
		case StructureType::bindHeapInfoEXT: return "bindHeapInfoEXT";
		case StructureType::pushDataInfoEXT: return "pushDataInfoEXT";
		case StructureType::descriptorSetAndBindingMappingEXT: return "descriptorSetAndBindingMappingEXT";
		case StructureType::shaderDescriptorSetAndBindingMappingInfoEXT: return "shaderDescriptorSetAndBindingMappingInfoEXT";
		case StructureType::opaqueCaptureDataCreateInfoEXT: return "opaqueCaptureDataCreateInfoEXT";
		case StructureType::physicalDeviceDescriptorHeapPropertiesEXT: return "physicalDeviceDescriptorHeapPropertiesEXT";
		case StructureType::physicalDeviceDescriptorHeapFeaturesEXT: return "physicalDeviceDescriptorHeapFeaturesEXT";
		case StructureType::commandBufferInheritanceDescriptorHeapInfoEXT: return "commandBufferInheritanceDescriptorHeapInfoEXT";
		case StructureType::samplerCustomBorderColorIndexCreateInfoEXT: return "samplerCustomBorderColorIndexCreateInfoEXT";
		case StructureType::indirectCommandsLayoutPushDataTokenNV: return "indirectCommandsLayoutPushDataTokenNV";
		case StructureType::subsampledImageFormatPropertiesEXT: return "subsampledImageFormatPropertiesEXT";
		case StructureType::physicalDeviceDescriptorHeapTensorPropertiesARM: return "physicalDeviceDescriptorHeapTensorPropertiesARM";
		case StructureType::attachmentSampleCountInfoAMD: return "attachmentSampleCountInfoAMD";
		case StructureType::physicalDeviceShaderBfloat16FeaturesKHR: return "physicalDeviceShaderBfloat16FeaturesKHR";
		case StructureType::sampleLocationsInfoEXT: return "sampleLocationsInfoEXT";
		case StructureType::renderPassSampleLocationsBeginInfoEXT: return "renderPassSampleLocationsBeginInfoEXT";
		case StructureType::pipelineSampleLocationsStateCreateInfoEXT: return "pipelineSampleLocationsStateCreateInfoEXT";
		case StructureType::physicalDeviceSampleLocationsPropertiesEXT: return "physicalDeviceSampleLocationsPropertiesEXT";
		case StructureType::multisamplePropertiesEXT: return "multisamplePropertiesEXT";
		case StructureType::physicalDeviceBlendOperationAdvancedFeaturesEXT: return "physicalDeviceBlendOperationAdvancedFeaturesEXT";
		case StructureType::physicalDeviceBlendOperationAdvancedPropertiesEXT: return "physicalDeviceBlendOperationAdvancedPropertiesEXT";
		case StructureType::pipelineColorBlendAdvancedStateCreateInfoEXT: return "pipelineColorBlendAdvancedStateCreateInfoEXT";
		case StructureType::pipelineCoverageToColorStateCreateInfoNV: return "pipelineCoverageToColorStateCreateInfoNV";
		case StructureType::writeDescriptorSetAccelerationStructureKHR: return "writeDescriptorSetAccelerationStructureKHR";
		case StructureType::accelerationStructureBuildGeometryInfoKHR: return "accelerationStructureBuildGeometryInfoKHR";
		case StructureType::accelerationStructureDeviceAddressInfoKHR: return "accelerationStructureDeviceAddressInfoKHR";
		case StructureType::accelerationStructureGeometryAabbsDataKHR: return "accelerationStructureGeometryAabbsDataKHR";
		case StructureType::accelerationStructureGeometryInstancesDataKHR: return "accelerationStructureGeometryInstancesDataKHR";
		case StructureType::accelerationStructureGeometryTrianglesDataKHR: return "accelerationStructureGeometryTrianglesDataKHR";
		case StructureType::accelerationStructureGeometryKHR: return "accelerationStructureGeometryKHR";
		case StructureType::accelerationStructureVersionInfoKHR: return "accelerationStructureVersionInfoKHR";
		case StructureType::copyAccelerationStructureInfoKHR: return "copyAccelerationStructureInfoKHR";
		case StructureType::copyAccelerationStructureToMemoryInfoKHR: return "copyAccelerationStructureToMemoryInfoKHR";
		case StructureType::copyMemoryToAccelerationStructureInfoKHR: return "copyMemoryToAccelerationStructureInfoKHR";
		case StructureType::physicalDeviceAccelerationStructureFeaturesKHR: return "physicalDeviceAccelerationStructureFeaturesKHR";
		case StructureType::physicalDeviceAccelerationStructurePropertiesKHR: return "physicalDeviceAccelerationStructurePropertiesKHR";
		case StructureType::accelerationStructureCreateInfoKHR: return "accelerationStructureCreateInfoKHR";
		case StructureType::accelerationStructureBuildSizesInfoKHR: return "accelerationStructureBuildSizesInfoKHR";
		case StructureType::physicalDeviceRayTracingPipelineFeaturesKHR: return "physicalDeviceRayTracingPipelineFeaturesKHR";
		case StructureType::physicalDeviceRayTracingPipelinePropertiesKHR: return "physicalDeviceRayTracingPipelinePropertiesKHR";
		case StructureType::rayTracingPipelineCreateInfoKHR: return "rayTracingPipelineCreateInfoKHR";
		case StructureType::rayTracingShaderGroupCreateInfoKHR: return "rayTracingShaderGroupCreateInfoKHR";
		case StructureType::rayTracingPipelineInterfaceCreateInfoKHR: return "rayTracingPipelineInterfaceCreateInfoKHR";
		case StructureType::physicalDeviceRayQueryFeaturesKHR: return "physicalDeviceRayQueryFeaturesKHR";
		case StructureType::pipelineCoverageModulationStateCreateInfoNV: return "pipelineCoverageModulationStateCreateInfoNV";
		case StructureType::physicalDeviceShaderSmBuiltinsFeaturesNV: return "physicalDeviceShaderSmBuiltinsFeaturesNV";
		case StructureType::physicalDeviceShaderSmBuiltinsPropertiesNV: return "physicalDeviceShaderSmBuiltinsPropertiesNV";
		case StructureType::drmFormatModifierPropertiesListEXT: return "drmFormatModifierPropertiesListEXT";
		case StructureType::physicalDeviceImageDrmFormatModifierInfoEXT: return "physicalDeviceImageDrmFormatModifierInfoEXT";
		case StructureType::imageDrmFormatModifierListCreateInfoEXT: return "imageDrmFormatModifierListCreateInfoEXT";
		case StructureType::imageDrmFormatModifierExplicitCreateInfoEXT: return "imageDrmFormatModifierExplicitCreateInfoEXT";
		case StructureType::imageDrmFormatModifierPropertiesEXT: return "imageDrmFormatModifierPropertiesEXT";
		case StructureType::drmFormatModifierPropertiesList2EXT: return "drmFormatModifierPropertiesList2EXT";
		case StructureType::validationCacheCreateInfoEXT: return "validationCacheCreateInfoEXT";
		case StructureType::shaderModuleValidationCacheCreateInfoEXT: return "shaderModuleValidationCacheCreateInfoEXT";
		case StructureType::pipelineViewportShadingRateImageStateCreateInfoNV: return "pipelineViewportShadingRateImageStateCreateInfoNV";
		case StructureType::physicalDeviceShadingRateImageFeaturesNV: return "physicalDeviceShadingRateImageFeaturesNV";
		case StructureType::physicalDeviceShadingRateImagePropertiesNV: return "physicalDeviceShadingRateImagePropertiesNV";
		case StructureType::pipelineViewportCoarseSampleOrderStateCreateInfoNV: return "pipelineViewportCoarseSampleOrderStateCreateInfoNV";
		case StructureType::rayTracingPipelineCreateInfoNV: return "rayTracingPipelineCreateInfoNV";
		case StructureType::accelerationStructureCreateInfoNV: return "accelerationStructureCreateInfoNV";
		case StructureType::geometryNV: return "geometryNV";
		case StructureType::geometryTrianglesNV: return "geometryTrianglesNV";
		case StructureType::geometryAabbNV: return "geometryAabbNV";
		case StructureType::bindAccelerationStructureMemoryInfoNV: return "bindAccelerationStructureMemoryInfoNV";
		case StructureType::writeDescriptorSetAccelerationStructureNV: return "writeDescriptorSetAccelerationStructureNV";
		case StructureType::accelerationStructureMemoryRequirementsInfoNV: return "accelerationStructureMemoryRequirementsInfoNV";
		case StructureType::physicalDeviceRayTracingPropertiesNV: return "physicalDeviceRayTracingPropertiesNV";
		case StructureType::rayTracingShaderGroupCreateInfoNV: return "rayTracingShaderGroupCreateInfoNV";
		case StructureType::accelerationStructureInfoNV: return "accelerationStructureInfoNV";
		case StructureType::physicalDeviceRepresentativeFragmentTestFeaturesNV: return "physicalDeviceRepresentativeFragmentTestFeaturesNV";
		case StructureType::pipelineRepresentativeFragmentTestStateCreateInfoNV: return "pipelineRepresentativeFragmentTestStateCreateInfoNV";
		case StructureType::physicalDeviceImageViewImageFormatInfoEXT: return "physicalDeviceImageViewImageFormatInfoEXT";
		case StructureType::filterCubicImageViewImageFormatPropertiesEXT: return "filterCubicImageViewImageFormatPropertiesEXT";
		case StructureType::physicalDeviceCooperativeMatrixConversionFeaturesQCOM: return "physicalDeviceCooperativeMatrixConversionFeaturesQCOM";
		case StructureType::importMemoryHostPointerInfoEXT: return "importMemoryHostPointerInfoEXT";
		case StructureType::memoryHostPointerPropertiesEXT: return "memoryHostPointerPropertiesEXT";
		case StructureType::physicalDeviceExternalMemoryHostPropertiesEXT: return "physicalDeviceExternalMemoryHostPropertiesEXT";
		case StructureType::physicalDeviceShaderClockFeaturesKHR: return "physicalDeviceShaderClockFeaturesKHR";
		case StructureType::pipelineCompilerControlCreateInfoAMD: return "pipelineCompilerControlCreateInfoAMD";
		case StructureType::physicalDeviceShaderCorePropertiesAMD: return "physicalDeviceShaderCorePropertiesAMD";
		case StructureType::videoDecodeH265CapabilitiesKHR: return "videoDecodeH265CapabilitiesKHR";
		case StructureType::videoDecodeH265SessionParametersCreateInfoKHR: return "videoDecodeH265SessionParametersCreateInfoKHR";
		case StructureType::videoDecodeH265SessionParametersAddInfoKHR: return "videoDecodeH265SessionParametersAddInfoKHR";
		case StructureType::videoDecodeH265ProfileInfoKHR: return "videoDecodeH265ProfileInfoKHR";
		case StructureType::videoDecodeH265PictureInfoKHR: return "videoDecodeH265PictureInfoKHR";
		case StructureType::videoDecodeH265DpbSlotInfoKHR: return "videoDecodeH265DpbSlotInfoKHR";
		case StructureType::deviceMemoryOverallocationCreateInfoAMD: return "deviceMemoryOverallocationCreateInfoAMD";
		case StructureType::physicalDeviceVertexAttributeDivisorPropertiesEXT: return "physicalDeviceVertexAttributeDivisorPropertiesEXT";
		case StructureType::presentFrameTokenGGP: return "presentFrameTokenGGP";
		case StructureType::physicalDeviceMeshShaderFeaturesNV: return "physicalDeviceMeshShaderFeaturesNV";
		case StructureType::physicalDeviceMeshShaderPropertiesNV: return "physicalDeviceMeshShaderPropertiesNV";
		case StructureType::physicalDeviceShaderImageFootprintFeaturesNV: return "physicalDeviceShaderImageFootprintFeaturesNV";
		case StructureType::pipelineViewportExclusiveScissorStateCreateInfoNV: return "pipelineViewportExclusiveScissorStateCreateInfoNV";
		case StructureType::physicalDeviceExclusiveScissorFeaturesNV: return "physicalDeviceExclusiveScissorFeaturesNV";
		case StructureType::checkpointDataNV: return "checkpointDataNV";
		case StructureType::queueFamilyCheckpointPropertiesNV: return "queueFamilyCheckpointPropertiesNV";
		case StructureType::queueFamilyCheckpointProperties2NV: return "queueFamilyCheckpointProperties2NV";
		case StructureType::checkpointData2NV: return "checkpointData2NV";
		case StructureType::physicalDevicePresentTimingFeaturesEXT: return "physicalDevicePresentTimingFeaturesEXT";
		case StructureType::swapchainTimingPropertiesEXT: return "swapchainTimingPropertiesEXT";
		case StructureType::swapchainTimeDomainPropertiesEXT: return "swapchainTimeDomainPropertiesEXT";
		case StructureType::presentTimingsInfoEXT: return "presentTimingsInfoEXT";
		case StructureType::presentTimingInfoEXT: return "presentTimingInfoEXT";
		case StructureType::pastPresentationTimingInfoEXT: return "pastPresentationTimingInfoEXT";
		case StructureType::pastPresentationTimingPropertiesEXT: return "pastPresentationTimingPropertiesEXT";
		case StructureType::pastPresentationTimingEXT: return "pastPresentationTimingEXT";
		case StructureType::presentTimingSurfaceCapabilitiesEXT: return "presentTimingSurfaceCapabilitiesEXT";
		case StructureType::swapchainCalibratedTimestampInfoEXT: return "swapchainCalibratedTimestampInfoEXT";
		case StructureType::physicalDeviceShaderIntegerFunctions2FeaturesINTEL: return "physicalDeviceShaderIntegerFunctions2FeaturesINTEL";
		case StructureType::queryPoolPerformanceQueryCreateInfoINTEL: return "queryPoolPerformanceQueryCreateInfoINTEL";
		case StructureType::initializePerformanceApiInfoINTEL: return "initializePerformanceApiInfoINTEL";
		case StructureType::performanceMarkerInfoINTEL: return "performanceMarkerInfoINTEL";
		case StructureType::performanceStreamMarkerInfoINTEL: return "performanceStreamMarkerInfoINTEL";
		case StructureType::performanceOverrideInfoINTEL: return "performanceOverrideInfoINTEL";
		case StructureType::performanceConfigurationAcquireInfoINTEL: return "performanceConfigurationAcquireInfoINTEL";
		case StructureType::physicalDevicePciBusInfoPropertiesEXT: return "physicalDevicePciBusInfoPropertiesEXT";
		case StructureType::displayNativeHdrSurfaceCapabilitiesAMD: return "displayNativeHdrSurfaceCapabilitiesAMD";
		case StructureType::swapchainDisplayNativeHdrCreateInfoAMD: return "swapchainDisplayNativeHdrCreateInfoAMD";
		case StructureType::imagepipeSurfaceCreateInfoFUCHSIA: return "imagepipeSurfaceCreateInfoFUCHSIA";
		case StructureType::physicalDeviceFragmentDensityMapFeaturesEXT: return "physicalDeviceFragmentDensityMapFeaturesEXT";
		case StructureType::physicalDeviceFragmentDensityMapPropertiesEXT: return "physicalDeviceFragmentDensityMapPropertiesEXT";
		case StructureType::renderPassFragmentDensityMapCreateInfoEXT: return "renderPassFragmentDensityMapCreateInfoEXT";
		case StructureType::renderingFragmentDensityMapAttachmentInfoEXT: return "renderingFragmentDensityMapAttachmentInfoEXT";
		case StructureType::fragmentShadingRateAttachmentInfoKHR: return "fragmentShadingRateAttachmentInfoKHR";
		case StructureType::pipelineFragmentShadingRateStateCreateInfoKHR: return "pipelineFragmentShadingRateStateCreateInfoKHR";
		case StructureType::physicalDeviceFragmentShadingRatePropertiesKHR: return "physicalDeviceFragmentShadingRatePropertiesKHR";
		case StructureType::physicalDeviceFragmentShadingRateFeaturesKHR: return "physicalDeviceFragmentShadingRateFeaturesKHR";
		case StructureType::physicalDeviceFragmentShadingRateKHR: return "physicalDeviceFragmentShadingRateKHR";
		case StructureType::renderingFragmentShadingRateAttachmentInfoKHR: return "renderingFragmentShadingRateAttachmentInfoKHR";
		case StructureType::physicalDeviceShaderCoreProperties2AMD: return "physicalDeviceShaderCoreProperties2AMD";
		case StructureType::physicalDeviceCoherentMemoryFeaturesAMD: return "physicalDeviceCoherentMemoryFeaturesAMD";
		case StructureType::physicalDeviceShaderConstantDataFeaturesKHR: return "physicalDeviceShaderConstantDataFeaturesKHR";
		case StructureType::physicalDeviceShaderAbortFeaturesKHR: return "physicalDeviceShaderAbortFeaturesKHR";
		case StructureType::deviceFaultShaderAbortMessageInfoKHR: return "deviceFaultShaderAbortMessageInfoKHR";
		case StructureType::physicalDeviceShaderAbortPropertiesKHR: return "physicalDeviceShaderAbortPropertiesKHR";
		case StructureType::physicalDeviceShaderImageAtomicInt64FeaturesEXT: return "physicalDeviceShaderImageAtomicInt64FeaturesEXT";
		case StructureType::physicalDeviceShaderQuadControlFeaturesKHR: return "physicalDeviceShaderQuadControlFeaturesKHR";
		case StructureType::physicalDeviceMemoryBudgetPropertiesEXT: return "physicalDeviceMemoryBudgetPropertiesEXT";
		case StructureType::physicalDeviceMemoryPriorityFeaturesEXT: return "physicalDeviceMemoryPriorityFeaturesEXT";
		case StructureType::memoryPriorityAllocateInfoEXT: return "memoryPriorityAllocateInfoEXT";
		case StructureType::surfaceProtectedCapabilitiesKHR: return "surfaceProtectedCapabilitiesKHR";
		case StructureType::physicalDeviceDedicatedAllocationImageAliasingFeaturesNV: return "physicalDeviceDedicatedAllocationImageAliasingFeaturesNV";
		case StructureType::physicalDeviceBufferDeviceAddressFeaturesEXT: return "physicalDeviceBufferDeviceAddressFeaturesEXT";
		case StructureType::bufferDeviceAddressCreateInfoEXT: return "bufferDeviceAddressCreateInfoEXT";
		case StructureType::validationFeaturesEXT: return "validationFeaturesEXT";
		case StructureType::physicalDevicePresentWaitFeaturesKHR: return "physicalDevicePresentWaitFeaturesKHR";
		case StructureType::physicalDeviceCooperativeMatrixFeaturesNV: return "physicalDeviceCooperativeMatrixFeaturesNV";
		case StructureType::cooperativeMatrixPropertiesNV: return "cooperativeMatrixPropertiesNV";
		case StructureType::physicalDeviceCooperativeMatrixPropertiesNV: return "physicalDeviceCooperativeMatrixPropertiesNV";
		case StructureType::physicalDeviceCoverageReductionModeFeaturesNV: return "physicalDeviceCoverageReductionModeFeaturesNV";
		case StructureType::pipelineCoverageReductionStateCreateInfoNV: return "pipelineCoverageReductionStateCreateInfoNV";
		case StructureType::framebufferMixedSamplesCombinationNV: return "framebufferMixedSamplesCombinationNV";
		case StructureType::physicalDeviceFragmentShaderInterlockFeaturesEXT: return "physicalDeviceFragmentShaderInterlockFeaturesEXT";
		case StructureType::physicalDeviceYcbcrImageArraysFeaturesEXT: return "physicalDeviceYcbcrImageArraysFeaturesEXT";
		case StructureType::physicalDeviceProvokingVertexFeaturesEXT: return "physicalDeviceProvokingVertexFeaturesEXT";
		case StructureType::pipelineRasterizationProvokingVertexStateCreateInfoEXT: return "pipelineRasterizationProvokingVertexStateCreateInfoEXT";
		case StructureType::physicalDeviceProvokingVertexPropertiesEXT: return "physicalDeviceProvokingVertexPropertiesEXT";
		case StructureType::surfaceFullScreenExclusiveInfoEXT: return "surfaceFullScreenExclusiveInfoEXT";
		case StructureType::surfaceCapabilitiesFullScreenExclusiveEXT: return "surfaceCapabilitiesFullScreenExclusiveEXT";
		case StructureType::surfaceFullScreenExclusiveWin32InfoEXT: return "surfaceFullScreenExclusiveWin32InfoEXT";
		case StructureType::headlessSurfaceCreateInfoEXT: return "headlessSurfaceCreateInfoEXT";
		case StructureType::physicalDeviceShaderAtomicFloatFeaturesEXT: return "physicalDeviceShaderAtomicFloatFeaturesEXT";
		case StructureType::physicalDeviceExtendedDynamicStateFeaturesEXT: return "physicalDeviceExtendedDynamicStateFeaturesEXT";
		case StructureType::physicalDevicePipelineExecutablePropertiesFeaturesKHR: return "physicalDevicePipelineExecutablePropertiesFeaturesKHR";
		case StructureType::pipelineInfoKHR: return "pipelineInfoKHR";
		case StructureType::pipelineExecutablePropertiesKHR: return "pipelineExecutablePropertiesKHR";
		case StructureType::pipelineExecutableInfoKHR: return "pipelineExecutableInfoKHR";
		case StructureType::pipelineExecutableStatisticKHR: return "pipelineExecutableStatisticKHR";
		case StructureType::pipelineExecutableInternalRepresentationKHR: return "pipelineExecutableInternalRepresentationKHR";
		case StructureType::physicalDeviceMapMemoryPlacedFeaturesEXT: return "physicalDeviceMapMemoryPlacedFeaturesEXT";
		case StructureType::physicalDeviceMapMemoryPlacedPropertiesEXT: return "physicalDeviceMapMemoryPlacedPropertiesEXT";
		case StructureType::memoryMapPlacedInfoEXT: return "memoryMapPlacedInfoEXT";
		case StructureType::physicalDeviceShaderAtomicFloat2FeaturesEXT: return "physicalDeviceShaderAtomicFloat2FeaturesEXT";
		case StructureType::physicalDeviceDeviceGeneratedCommandsPropertiesNV: return "physicalDeviceDeviceGeneratedCommandsPropertiesNV";
		case StructureType::graphicsShaderGroupCreateInfoNV: return "graphicsShaderGroupCreateInfoNV";
		case StructureType::graphicsPipelineShaderGroupsCreateInfoNV: return "graphicsPipelineShaderGroupsCreateInfoNV";
		case StructureType::indirectCommandsLayoutTokenNV: return "indirectCommandsLayoutTokenNV";
		case StructureType::indirectCommandsLayoutCreateInfoNV: return "indirectCommandsLayoutCreateInfoNV";
		case StructureType::generatedCommandsInfoNV: return "generatedCommandsInfoNV";
		case StructureType::generatedCommandsMemoryRequirementsInfoNV: return "generatedCommandsMemoryRequirementsInfoNV";
		case StructureType::physicalDeviceDeviceGeneratedCommandsFeaturesNV: return "physicalDeviceDeviceGeneratedCommandsFeaturesNV";
		case StructureType::physicalDeviceInheritedViewportScissorFeaturesNV: return "physicalDeviceInheritedViewportScissorFeaturesNV";
		case StructureType::commandBufferInheritanceViewportScissorInfoNV: return "commandBufferInheritanceViewportScissorInfoNV";
		case StructureType::physicalDeviceTexelBufferAlignmentFeaturesEXT: return "physicalDeviceTexelBufferAlignmentFeaturesEXT";
		case StructureType::commandBufferInheritanceRenderPassTransformInfoQCOM: return "commandBufferInheritanceRenderPassTransformInfoQCOM";
		case StructureType::renderPassTransformBeginInfoQCOM: return "renderPassTransformBeginInfoQCOM";
		case StructureType::physicalDeviceDepthBiasControlFeaturesEXT: return "physicalDeviceDepthBiasControlFeaturesEXT";
		case StructureType::depthBiasInfoEXT: return "depthBiasInfoEXT";
		case StructureType::depthBiasRepresentationInfoEXT: return "depthBiasRepresentationInfoEXT";
		case StructureType::physicalDeviceDeviceMemoryReportFeaturesEXT: return "physicalDeviceDeviceMemoryReportFeaturesEXT";
		case StructureType::deviceDeviceMemoryReportCreateInfoEXT: return "deviceDeviceMemoryReportCreateInfoEXT";
		case StructureType::deviceMemoryReportCallbackDataEXT: return "deviceMemoryReportCallbackDataEXT";
		case StructureType::samplerCustomBorderColorCreateInfoEXT: return "samplerCustomBorderColorCreateInfoEXT";
		case StructureType::physicalDeviceCustomBorderColorPropertiesEXT: return "physicalDeviceCustomBorderColorPropertiesEXT";
		case StructureType::physicalDeviceCustomBorderColorFeaturesEXT: return "physicalDeviceCustomBorderColorFeaturesEXT";
		case StructureType::physicalDeviceTextureCompressionAstc3dFeaturesEXT: return "physicalDeviceTextureCompressionAstc3dFeaturesEXT";
		case StructureType::pipelineLibraryCreateInfoKHR: return "pipelineLibraryCreateInfoKHR";
		case StructureType::physicalDevicePresentBarrierFeaturesNV: return "physicalDevicePresentBarrierFeaturesNV";
		case StructureType::surfaceCapabilitiesPresentBarrierNV: return "surfaceCapabilitiesPresentBarrierNV";
		case StructureType::swapchainPresentBarrierCreateInfoNV: return "swapchainPresentBarrierCreateInfoNV";
		case StructureType::presentIDKHR: return "presentIDKHR";
		case StructureType::physicalDevicePresentIDFeaturesKHR: return "physicalDevicePresentIDFeaturesKHR";
		case StructureType::videoEncodeInfoKHR: return "videoEncodeInfoKHR";
		case StructureType::videoEncodeRateControlInfoKHR: return "videoEncodeRateControlInfoKHR";
		case StructureType::videoEncodeRateControlLayerInfoKHR: return "videoEncodeRateControlLayerInfoKHR";
		case StructureType::videoEncodeCapabilitiesKHR: return "videoEncodeCapabilitiesKHR";
		case StructureType::videoEncodeUsageInfoKHR: return "videoEncodeUsageInfoKHR";
		case StructureType::queryPoolVideoEncodeFeedbackCreateInfoKHR: return "queryPoolVideoEncodeFeedbackCreateInfoKHR";
		case StructureType::physicalDeviceVideoEncodeQualityLevelInfoKHR: return "physicalDeviceVideoEncodeQualityLevelInfoKHR";
		case StructureType::videoEncodeQualityLevelPropertiesKHR: return "videoEncodeQualityLevelPropertiesKHR";
		case StructureType::videoEncodeQualityLevelInfoKHR: return "videoEncodeQualityLevelInfoKHR";
		case StructureType::videoEncodeSessionParametersGetInfoKHR: return "videoEncodeSessionParametersGetInfoKHR";
		case StructureType::videoEncodeSessionParametersFeedbackInfoKHR: return "videoEncodeSessionParametersFeedbackInfoKHR";
		case StructureType::physicalDeviceDiagnosticsConfigFeaturesNV: return "physicalDeviceDiagnosticsConfigFeaturesNV";
		case StructureType::deviceDiagnosticsConfigCreateInfoNV: return "deviceDiagnosticsConfigCreateInfoNV";
		case StructureType::perfHintInfoQCOM: return "perfHintInfoQCOM";
		case StructureType::physicalDeviceQueuePerfHintFeaturesQCOM: return "physicalDeviceQueuePerfHintFeaturesQCOM";
		case StructureType::physicalDeviceQueuePerfHintPropertiesQCOM: return "physicalDeviceQueuePerfHintPropertiesQCOM";
		case StructureType::physicalDeviceTileShadingFeaturesQCOM: return "physicalDeviceTileShadingFeaturesQCOM";
		case StructureType::physicalDeviceTileShadingPropertiesQCOM: return "physicalDeviceTileShadingPropertiesQCOM";
		case StructureType::renderPassTileShadingCreateInfoQCOM: return "renderPassTileShadingCreateInfoQCOM";
		case StructureType::perTileBeginInfoQCOM: return "perTileBeginInfoQCOM";
		case StructureType::perTileEndInfoQCOM: return "perTileEndInfoQCOM";
		case StructureType::dispatchTileInfoQCOM: return "dispatchTileInfoQCOM";
		case StructureType::queryLowLatencySupportNV: return "queryLowLatencySupportNV";
		case StructureType::physicalDeviceDescriptorBufferPropertiesEXT: return "physicalDeviceDescriptorBufferPropertiesEXT";
		case StructureType::physicalDeviceDescriptorBufferDensityMapPropertiesEXT: return "physicalDeviceDescriptorBufferDensityMapPropertiesEXT";
		case StructureType::physicalDeviceDescriptorBufferFeaturesEXT: return "physicalDeviceDescriptorBufferFeaturesEXT";
		case StructureType::descriptorAddressInfoEXT: return "descriptorAddressInfoEXT";
		case StructureType::descriptorGetInfoEXT: return "descriptorGetInfoEXT";
		case StructureType::bufferCaptureDescriptorDataInfoEXT: return "bufferCaptureDescriptorDataInfoEXT";
		case StructureType::imageCaptureDescriptorDataInfoEXT: return "imageCaptureDescriptorDataInfoEXT";
		case StructureType::imageViewCaptureDescriptorDataInfoEXT: return "imageViewCaptureDescriptorDataInfoEXT";
		case StructureType::samplerCaptureDescriptorDataInfoEXT: return "samplerCaptureDescriptorDataInfoEXT";
		case StructureType::opaqueCaptureDescriptorDataCreateInfoEXT: return "opaqueCaptureDescriptorDataCreateInfoEXT";
		case StructureType::descriptorBufferBindingInfoEXT: return "descriptorBufferBindingInfoEXT";
		case StructureType::descriptorBufferBindingPushDescriptorBufferHandleEXT: return "descriptorBufferBindingPushDescriptorBufferHandleEXT";
		case StructureType::accelerationStructureCaptureDescriptorDataInfoEXT: return "accelerationStructureCaptureDescriptorDataInfoEXT";
		case StructureType::deviceMemoryCopyKHR: return "deviceMemoryCopyKHR";
		case StructureType::copyDeviceMemoryInfoKHR: return "copyDeviceMemoryInfoKHR";
		case StructureType::deviceMemoryImageCopyKHR: return "deviceMemoryImageCopyKHR";
		case StructureType::copyDeviceMemoryImageInfoKHR: return "copyDeviceMemoryImageInfoKHR";
		case StructureType::memoryRangeBarriersInfoKHR: return "memoryRangeBarriersInfoKHR";
		case StructureType::memoryRangeBarrierKHR: return "memoryRangeBarrierKHR";
		case StructureType::physicalDeviceDeviceAddressCommandsFeaturesKHR: return "physicalDeviceDeviceAddressCommandsFeaturesKHR";
		case StructureType::bindIndexBuffer3InfoKHR: return "bindIndexBuffer3InfoKHR";
		case StructureType::bindVertexBuffer3InfoKHR: return "bindVertexBuffer3InfoKHR";
		case StructureType::drawIndirect2InfoKHR: return "drawIndirect2InfoKHR";
		case StructureType::drawIndirectCount2InfoKHR: return "drawIndirectCount2InfoKHR";
		case StructureType::dispatchIndirect2InfoKHR: return "dispatchIndirect2InfoKHR";
		case StructureType::conditionalRenderingBeginInfo2EXT: return "conditionalRenderingBeginInfo2EXT";
		case StructureType::bindTransformFeedbackBuffer2InfoEXT: return "bindTransformFeedbackBuffer2InfoEXT";
		case StructureType::memoryMarkerInfoAMD: return "memoryMarkerInfoAMD";
		case StructureType::accelerationStructureCreateInfo2KHR: return "accelerationStructureCreateInfo2KHR";
		case StructureType::physicalDeviceGraphicsPipelineLibraryFeaturesEXT: return "physicalDeviceGraphicsPipelineLibraryFeaturesEXT";
		case StructureType::physicalDeviceGraphicsPipelineLibraryPropertiesEXT: return "physicalDeviceGraphicsPipelineLibraryPropertiesEXT";
		case StructureType::graphicsPipelineLibraryCreateInfoEXT: return "graphicsPipelineLibraryCreateInfoEXT";
		case StructureType::physicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD: return "physicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD";
		case StructureType::physicalDeviceFragmentShaderBarycentricFeaturesKHR: return "physicalDeviceFragmentShaderBarycentricFeaturesKHR";
		case StructureType::physicalDeviceFragmentShaderBarycentricPropertiesKHR: return "physicalDeviceFragmentShaderBarycentricPropertiesKHR";
		case StructureType::physicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR: return "physicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR";
		case StructureType::physicalDeviceFragmentShadingRateEnumsPropertiesNV: return "physicalDeviceFragmentShadingRateEnumsPropertiesNV";
		case StructureType::physicalDeviceFragmentShadingRateEnumsFeaturesNV: return "physicalDeviceFragmentShadingRateEnumsFeaturesNV";
		case StructureType::pipelineFragmentShadingRateEnumStateCreateInfoNV: return "pipelineFragmentShadingRateEnumStateCreateInfoNV";
		case StructureType::accelerationStructureGeometryMotionTrianglesDataNV: return "accelerationStructureGeometryMotionTrianglesDataNV";
		case StructureType::physicalDeviceRayTracingMotionBlurFeaturesNV: return "physicalDeviceRayTracingMotionBlurFeaturesNV";
		case StructureType::accelerationStructureMotionInfoNV: return "accelerationStructureMotionInfoNV";
		case StructureType::physicalDeviceMeshShaderFeaturesEXT: return "physicalDeviceMeshShaderFeaturesEXT";
		case StructureType::physicalDeviceMeshShaderPropertiesEXT: return "physicalDeviceMeshShaderPropertiesEXT";
		case StructureType::physicalDeviceYcbcr2Plane444FormatsFeaturesEXT: return "physicalDeviceYcbcr2Plane444FormatsFeaturesEXT";
		case StructureType::physicalDeviceFragmentDensityMap2FeaturesEXT: return "physicalDeviceFragmentDensityMap2FeaturesEXT";
		case StructureType::physicalDeviceFragmentDensityMap2PropertiesEXT: return "physicalDeviceFragmentDensityMap2PropertiesEXT";
		case StructureType::copyCommandTransformInfoQCOM: return "copyCommandTransformInfoQCOM";
		case StructureType::physicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR: return "physicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR";
		case StructureType::physicalDeviceImageCompressionControlFeaturesEXT: return "physicalDeviceImageCompressionControlFeaturesEXT";
		case StructureType::imageCompressionControlEXT: return "imageCompressionControlEXT";
		case StructureType::imageCompressionPropertiesEXT: return "imageCompressionPropertiesEXT";
		case StructureType::physicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT: return "physicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT";
		case StructureType::physicalDevice4444FormatsFeaturesEXT: return "physicalDevice4444FormatsFeaturesEXT";
		case StructureType::physicalDeviceFaultFeaturesEXT: return "physicalDeviceFaultFeaturesEXT";
		case StructureType::deviceFaultCountsEXT: return "deviceFaultCountsEXT";
		case StructureType::deviceFaultInfoEXT: return "deviceFaultInfoEXT";
		case StructureType::physicalDeviceRgba10x6FormatsFeaturesEXT: return "physicalDeviceRgba10x6FormatsFeaturesEXT";
		case StructureType::directfbSurfaceCreateInfoEXT: return "directfbSurfaceCreateInfoEXT";
		case StructureType::physicalDeviceVertexInputDynamicStateFeaturesEXT: return "physicalDeviceVertexInputDynamicStateFeaturesEXT";
		case StructureType::vertexInputBindingDescription2EXT: return "vertexInputBindingDescription2EXT";
		case StructureType::vertexInputAttributeDescription2EXT: return "vertexInputAttributeDescription2EXT";
		case StructureType::physicalDeviceDrmPropertiesEXT: return "physicalDeviceDrmPropertiesEXT";
		case StructureType::physicalDeviceAddressBindingReportFeaturesEXT: return "physicalDeviceAddressBindingReportFeaturesEXT";
		case StructureType::deviceAddressBindingCallbackDataEXT: return "deviceAddressBindingCallbackDataEXT";
		case StructureType::physicalDeviceDepthClipControlFeaturesEXT: return "physicalDeviceDepthClipControlFeaturesEXT";
		case StructureType::pipelineViewportDepthClipControlCreateInfoEXT: return "pipelineViewportDepthClipControlCreateInfoEXT";
		case StructureType::physicalDevicePrimitiveTopologyListRestartFeaturesEXT: return "physicalDevicePrimitiveTopologyListRestartFeaturesEXT";
		case StructureType::importMemoryZirconHandleInfoFUCHSIA: return "importMemoryZirconHandleInfoFUCHSIA";
		case StructureType::memoryZirconHandlePropertiesFUCHSIA: return "memoryZirconHandlePropertiesFUCHSIA";
		case StructureType::memoryGetZirconHandleInfoFUCHSIA: return "memoryGetZirconHandleInfoFUCHSIA";
		case StructureType::importSemaphoreZirconHandleInfoFUCHSIA: return "importSemaphoreZirconHandleInfoFUCHSIA";
		case StructureType::semaphoreGetZirconHandleInfoFUCHSIA: return "semaphoreGetZirconHandleInfoFUCHSIA";
		case StructureType::bufferCollectionCreateInfoFUCHSIA: return "bufferCollectionCreateInfoFUCHSIA";
		case StructureType::importMemoryBufferCollectionFUCHSIA: return "importMemoryBufferCollectionFUCHSIA";
		case StructureType::bufferCollectionImageCreateInfoFUCHSIA: return "bufferCollectionImageCreateInfoFUCHSIA";
		case StructureType::bufferCollectionPropertiesFUCHSIA: return "bufferCollectionPropertiesFUCHSIA";
		case StructureType::bufferConstraintsInfoFUCHSIA: return "bufferConstraintsInfoFUCHSIA";
		case StructureType::bufferCollectionBufferCreateInfoFUCHSIA: return "bufferCollectionBufferCreateInfoFUCHSIA";
		case StructureType::imageConstraintsInfoFUCHSIA: return "imageConstraintsInfoFUCHSIA";
		case StructureType::imageFormatConstraintsInfoFUCHSIA: return "imageFormatConstraintsInfoFUCHSIA";
		case StructureType::sysmemColorSpaceFUCHSIA: return "sysmemColorSpaceFUCHSIA";
		case StructureType::bufferCollectionConstraintsInfoFUCHSIA: return "bufferCollectionConstraintsInfoFUCHSIA";
		case StructureType::subpassShadingPipelineCreateInfoHUAWEI: return "subpassShadingPipelineCreateInfoHUAWEI";
		case StructureType::physicalDeviceSubpassShadingFeaturesHUAWEI: return "physicalDeviceSubpassShadingFeaturesHUAWEI";
		case StructureType::physicalDeviceSubpassShadingPropertiesHUAWEI: return "physicalDeviceSubpassShadingPropertiesHUAWEI";
		case StructureType::physicalDeviceInvocationMaskFeaturesHUAWEI: return "physicalDeviceInvocationMaskFeaturesHUAWEI";
		case StructureType::memoryGetRemoteAddressInfoNV: return "memoryGetRemoteAddressInfoNV";
		case StructureType::physicalDeviceExternalMemoryRdmaFeaturesNV: return "physicalDeviceExternalMemoryRdmaFeaturesNV";
		case StructureType::pipelinePropertiesIDentifierEXT: return "pipelinePropertiesIDentifierEXT";
		case StructureType::physicalDevicePipelinePropertiesFeaturesEXT: return "physicalDevicePipelinePropertiesFeaturesEXT";
		case StructureType::physicalDeviceFrameBoundaryFeaturesEXT: return "physicalDeviceFrameBoundaryFeaturesEXT";
		case StructureType::frameBoundaryEXT: return "frameBoundaryEXT";
		case StructureType::physicalDeviceMultisampledRenderToSingleSampledFeaturesEXT: return "physicalDeviceMultisampledRenderToSingleSampledFeaturesEXT";
		case StructureType::subpassResolvePerformanceQueryEXT: return "subpassResolvePerformanceQueryEXT";
		case StructureType::multisampledRenderToSingleSampledInfoEXT: return "multisampledRenderToSingleSampledInfoEXT";
		case StructureType::physicalDeviceExtendedDynamicState2FeaturesEXT: return "physicalDeviceExtendedDynamicState2FeaturesEXT";
		case StructureType::screenSurfaceCreateInfoQNX: return "screenSurfaceCreateInfoQNX";
		case StructureType::physicalDeviceColorWriteEnableFeaturesEXT: return "physicalDeviceColorWriteEnableFeaturesEXT";
		case StructureType::pipelineColorWriteCreateInfoEXT: return "pipelineColorWriteCreateInfoEXT";
		case StructureType::physicalDevicePrimitivesGeneratedQueryFeaturesEXT: return "physicalDevicePrimitivesGeneratedQueryFeaturesEXT";
		case StructureType::physicalDeviceRayTracingMaintenance1FeaturesKHR: return "physicalDeviceRayTracingMaintenance1FeaturesKHR";
		case StructureType::physicalDeviceShaderUntypedPointersFeaturesKHR: return "physicalDeviceShaderUntypedPointersFeaturesKHR";
		case StructureType::physicalDeviceVideoEncodeRgbConversionFeaturesVALVE: return "physicalDeviceVideoEncodeRgbConversionFeaturesVALVE";
		case StructureType::videoEncodeRgbConversionCapabilitiesVALVE: return "videoEncodeRgbConversionCapabilitiesVALVE";
		case StructureType::videoEncodeProfileRgbConversionInfoVALVE: return "videoEncodeProfileRgbConversionInfoVALVE";
		case StructureType::videoEncodeSessionRgbConversionCreateInfoVALVE: return "videoEncodeSessionRgbConversionCreateInfoVALVE";
		case StructureType::physicalDeviceImageViewMinLodFeaturesEXT: return "physicalDeviceImageViewMinLodFeaturesEXT";
		case StructureType::imageViewMinLodCreateInfoEXT: return "imageViewMinLodCreateInfoEXT";
		case StructureType::physicalDeviceMultiDrawFeaturesEXT: return "physicalDeviceMultiDrawFeaturesEXT";
		case StructureType::physicalDeviceMultiDrawPropertiesEXT: return "physicalDeviceMultiDrawPropertiesEXT";
		case StructureType::physicalDeviceImage2dViewOf3dFeaturesEXT: return "physicalDeviceImage2dViewOf3dFeaturesEXT";
		case StructureType::physicalDeviceShaderTileImageFeaturesEXT: return "physicalDeviceShaderTileImageFeaturesEXT";
		case StructureType::physicalDeviceShaderTileImagePropertiesEXT: return "physicalDeviceShaderTileImagePropertiesEXT";
		case StructureType::micromapBuildInfoEXT: return "micromapBuildInfoEXT";
		case StructureType::micromapVersionInfoEXT: return "micromapVersionInfoEXT";
		case StructureType::copyMicromapInfoEXT: return "copyMicromapInfoEXT";
		case StructureType::copyMicromapToMemoryInfoEXT: return "copyMicromapToMemoryInfoEXT";
		case StructureType::copyMemoryToMicromapInfoEXT: return "copyMemoryToMicromapInfoEXT";
		case StructureType::physicalDeviceOpacityMicromapFeaturesEXT: return "physicalDeviceOpacityMicromapFeaturesEXT";
		case StructureType::physicalDeviceOpacityMicromapPropertiesEXT: return "physicalDeviceOpacityMicromapPropertiesEXT";
		case StructureType::micromapCreateInfoEXT: return "micromapCreateInfoEXT";
		case StructureType::micromapBuildSizesInfoEXT: return "micromapBuildSizesInfoEXT";
		case StructureType::accelerationStructureTrianglesOpacityMicromapEXT: return "accelerationStructureTrianglesOpacityMicromapEXT";
		case StructureType::physicalDeviceClusterCullingShaderFeaturesHUAWEI: return "physicalDeviceClusterCullingShaderFeaturesHUAWEI";
		case StructureType::physicalDeviceClusterCullingShaderPropertiesHUAWEI: return "physicalDeviceClusterCullingShaderPropertiesHUAWEI";
		case StructureType::physicalDeviceClusterCullingShaderVrsFeaturesHUAWEI: return "physicalDeviceClusterCullingShaderVrsFeaturesHUAWEI";
		case StructureType::physicalDeviceBorderColorSwizzleFeaturesEXT: return "physicalDeviceBorderColorSwizzleFeaturesEXT";
		case StructureType::samplerBorderColorComponentMappingCreateInfoEXT: return "samplerBorderColorComponentMappingCreateInfoEXT";
		case StructureType::physicalDevicePageableDeviceLocalMemoryFeaturesEXT: return "physicalDevicePageableDeviceLocalMemoryFeaturesEXT";
		case StructureType::physicalDeviceShaderCorePropertiesARM: return "physicalDeviceShaderCorePropertiesARM";
		case StructureType::deviceQueueShaderCoreControlCreateInfoARM: return "deviceQueueShaderCoreControlCreateInfoARM";
		case StructureType::physicalDeviceSchedulingControlsFeaturesARM: return "physicalDeviceSchedulingControlsFeaturesARM";
		case StructureType::physicalDeviceSchedulingControlsPropertiesARM: return "physicalDeviceSchedulingControlsPropertiesARM";
		case StructureType::dispatchParametersARM: return "dispatchParametersARM";
		case StructureType::physicalDeviceSchedulingControlsDispatchParametersPropertiesARM: return "physicalDeviceSchedulingControlsDispatchParametersPropertiesARM";
		case StructureType::physicalDeviceImageSlicedViewOf3dFeaturesEXT: return "physicalDeviceImageSlicedViewOf3dFeaturesEXT";
		case StructureType::imageViewSlicedCreateInfoEXT: return "imageViewSlicedCreateInfoEXT";
		case StructureType::physicalDeviceDescriptorSetHostMappingFeaturesVALVE: return "physicalDeviceDescriptorSetHostMappingFeaturesVALVE";
		case StructureType::descriptorSetBindingReferenceVALVE: return "descriptorSetBindingReferenceVALVE";
		case StructureType::descriptorSetLayoutHostMappingInfoVALVE: return "descriptorSetLayoutHostMappingInfoVALVE";
		case StructureType::physicalDeviceNonSeamlessCubeMapFeaturesEXT: return "physicalDeviceNonSeamlessCubeMapFeaturesEXT";
		case StructureType::physicalDeviceRenderPassStripedFeaturesARM: return "physicalDeviceRenderPassStripedFeaturesARM";
		case StructureType::physicalDeviceRenderPassStripedPropertiesARM: return "physicalDeviceRenderPassStripedPropertiesARM";
		case StructureType::renderPassStripeBeginInfoARM: return "renderPassStripeBeginInfoARM";
		case StructureType::renderPassStripeInfoARM: return "renderPassStripeInfoARM";
		case StructureType::renderPassStripeSubmitInfoARM: return "renderPassStripeSubmitInfoARM";
		case StructureType::physicalDeviceCopyMemoryIndirectFeaturesNV: return "physicalDeviceCopyMemoryIndirectFeaturesNV";
		case StructureType::physicalDeviceDeviceGeneratedCommandsComputeFeaturesNV: return "physicalDeviceDeviceGeneratedCommandsComputeFeaturesNV";
		case StructureType::computePipelineIndirectBufferInfoNV: return "computePipelineIndirectBufferInfoNV";
		case StructureType::pipelineIndirectDeviceAddressInfoNV: return "pipelineIndirectDeviceAddressInfoNV";
		case StructureType::physicalDeviceRayTracingLinearSweptSpheresFeaturesNV: return "physicalDeviceRayTracingLinearSweptSpheresFeaturesNV";
		case StructureType::accelerationStructureGeometryLinearSweptSpheresDataNV: return "accelerationStructureGeometryLinearSweptSpheresDataNV";
		case StructureType::accelerationStructureGeometrySpheresDataNV: return "accelerationStructureGeometrySpheresDataNV";
		case StructureType::physicalDeviceLinearColorAttachmentFeaturesNV: return "physicalDeviceLinearColorAttachmentFeaturesNV";
		case StructureType::physicalDeviceShaderMaximalReconvergenceFeaturesKHR: return "physicalDeviceShaderMaximalReconvergenceFeaturesKHR";
		case StructureType::physicalDeviceImageCompressionControlSwapchainFeaturesEXT: return "physicalDeviceImageCompressionControlSwapchainFeaturesEXT";
		case StructureType::physicalDeviceImageProcessingFeaturesQCOM: return "physicalDeviceImageProcessingFeaturesQCOM";
		case StructureType::physicalDeviceImageProcessingPropertiesQCOM: return "physicalDeviceImageProcessingPropertiesQCOM";
		case StructureType::imageViewSampleWeightCreateInfoQCOM: return "imageViewSampleWeightCreateInfoQCOM";
		case StructureType::physicalDeviceNestedCommandBufferFeaturesEXT: return "physicalDeviceNestedCommandBufferFeaturesEXT";
		case StructureType::physicalDeviceNestedCommandBufferPropertiesEXT: return "physicalDeviceNestedCommandBufferPropertiesEXT";
		case StructureType::nativeBufferUsageOHOS: return "nativeBufferUsageOHOS";
		case StructureType::nativeBufferPropertiesOHOS: return "nativeBufferPropertiesOHOS";
		case StructureType::nativeBufferFormatPropertiesOHOS: return "nativeBufferFormatPropertiesOHOS";
		case StructureType::importNativeBufferInfoOHOS: return "importNativeBufferInfoOHOS";
		case StructureType::memoryGetNativeBufferInfoOHOS: return "memoryGetNativeBufferInfoOHOS";
		case StructureType::externalFormatOHOS: return "externalFormatOHOS";
		case StructureType::externalMemoryAcquireUnmodifiedEXT: return "externalMemoryAcquireUnmodifiedEXT";
		case StructureType::physicalDeviceExtendedDynamicState3FeaturesEXT: return "physicalDeviceExtendedDynamicState3FeaturesEXT";
		case StructureType::physicalDeviceExtendedDynamicState3PropertiesEXT: return "physicalDeviceExtendedDynamicState3PropertiesEXT";
		case StructureType::physicalDeviceSubpassMergeFeedbackFeaturesEXT: return "physicalDeviceSubpassMergeFeedbackFeaturesEXT";
		case StructureType::renderPassCreationControlEXT: return "renderPassCreationControlEXT";
		case StructureType::renderPassCreationFeedbackCreateInfoEXT: return "renderPassCreationFeedbackCreateInfoEXT";
		case StructureType::renderPassSubpassFeedbackCreateInfoEXT: return "renderPassSubpassFeedbackCreateInfoEXT";
		case StructureType::directDriverLoadingInfoLUNARG: return "directDriverLoadingInfoLUNARG";
		case StructureType::directDriverLoadingListLUNARG: return "directDriverLoadingListLUNARG";
		case StructureType::tensorCreateInfoARM: return "tensorCreateInfoARM";
		case StructureType::tensorViewCreateInfoARM: return "tensorViewCreateInfoARM";
		case StructureType::bindTensorMemoryInfoARM: return "bindTensorMemoryInfoARM";
		case StructureType::writeDescriptorSetTensorARM: return "writeDescriptorSetTensorARM";
		case StructureType::physicalDeviceTensorPropertiesARM: return "physicalDeviceTensorPropertiesARM";
		case StructureType::tensorFormatPropertiesARM: return "tensorFormatPropertiesARM";
		case StructureType::tensorDescriptionARM: return "tensorDescriptionARM";
		case StructureType::tensorMemoryRequirementsInfoARM: return "tensorMemoryRequirementsInfoARM";
		case StructureType::tensorMemoryBarrierARM: return "tensorMemoryBarrierARM";
		case StructureType::physicalDeviceTensorFeaturesARM: return "physicalDeviceTensorFeaturesARM";
		case StructureType::deviceTensorMemoryRequirementsARM: return "deviceTensorMemoryRequirementsARM";
		case StructureType::copyTensorInfoARM: return "copyTensorInfoARM";
		case StructureType::tensorCopyARM: return "tensorCopyARM";
		case StructureType::tensorDependencyInfoARM: return "tensorDependencyInfoARM";
		case StructureType::memoryDedicatedAllocateInfoTensorARM: return "memoryDedicatedAllocateInfoTensorARM";
		case StructureType::physicalDeviceExternalTensorInfoARM: return "physicalDeviceExternalTensorInfoARM";
		case StructureType::externalTensorPropertiesARM: return "externalTensorPropertiesARM";
		case StructureType::externalMemoryTensorCreateInfoARM: return "externalMemoryTensorCreateInfoARM";
		case StructureType::physicalDeviceDescriptorBufferTensorFeaturesARM: return "physicalDeviceDescriptorBufferTensorFeaturesARM";
		case StructureType::physicalDeviceDescriptorBufferTensorPropertiesARM: return "physicalDeviceDescriptorBufferTensorPropertiesARM";
		case StructureType::descriptorGetTensorInfoARM: return "descriptorGetTensorInfoARM";
		case StructureType::tensorCaptureDescriptorDataInfoARM: return "tensorCaptureDescriptorDataInfoARM";
		case StructureType::tensorViewCaptureDescriptorDataInfoARM: return "tensorViewCaptureDescriptorDataInfoARM";
		case StructureType::frameBoundaryTensorsARM: return "frameBoundaryTensorsARM";
		case StructureType::physicalDeviceShaderModuleIDentifierFeaturesEXT: return "physicalDeviceShaderModuleIDentifierFeaturesEXT";
		case StructureType::physicalDeviceShaderModuleIDentifierPropertiesEXT: return "physicalDeviceShaderModuleIDentifierPropertiesEXT";
		case StructureType::pipelineShaderStageModuleIDentifierCreateInfoEXT: return "pipelineShaderStageModuleIDentifierCreateInfoEXT";
		case StructureType::shaderModuleIDentifierEXT: return "shaderModuleIDentifierEXT";
		case StructureType::physicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT: return "physicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT";
		case StructureType::physicalDeviceOpticalFlowFeaturesNV: return "physicalDeviceOpticalFlowFeaturesNV";
		case StructureType::physicalDeviceOpticalFlowPropertiesNV: return "physicalDeviceOpticalFlowPropertiesNV";
		case StructureType::opticalFlowImageFormatInfoNV: return "opticalFlowImageFormatInfoNV";
		case StructureType::opticalFlowImageFormatPropertiesNV: return "opticalFlowImageFormatPropertiesNV";
		case StructureType::opticalFlowSessionCreateInfoNV: return "opticalFlowSessionCreateInfoNV";
		case StructureType::opticalFlowExecuteInfoNV: return "opticalFlowExecuteInfoNV";
		case StructureType::opticalFlowSessionCreatePrivateDataInfoNV: return "opticalFlowSessionCreatePrivateDataInfoNV";
		case StructureType::physicalDeviceLegacyDitheringFeaturesEXT: return "physicalDeviceLegacyDitheringFeaturesEXT";
		case StructureType::physicalDeviceAntiLagFeaturesAMD: return "physicalDeviceAntiLagFeaturesAMD";
		case StructureType::antiLagDataAMD: return "antiLagDataAMD";
		case StructureType::antiLagPresentationInfoAMD: return "antiLagPresentationInfoAMD";
		case StructureType::surfaceCapabilitiesPresentID2KHR: return "surfaceCapabilitiesPresentID2KHR";
		case StructureType::presentID2KHR: return "presentID2KHR";
		case StructureType::physicalDevicePresentID2FeaturesKHR: return "physicalDevicePresentID2FeaturesKHR";
		case StructureType::surfaceCapabilitiesPresentWait2KHR: return "surfaceCapabilitiesPresentWait2KHR";
		case StructureType::physicalDevicePresentWait2FeaturesKHR: return "physicalDevicePresentWait2FeaturesKHR";
		case StructureType::presentWait2InfoKHR: return "presentWait2InfoKHR";
		case StructureType::physicalDeviceRayTracingPositionFetchFeaturesKHR: return "physicalDeviceRayTracingPositionFetchFeaturesKHR";
		case StructureType::physicalDeviceShaderObjectFeaturesEXT: return "physicalDeviceShaderObjectFeaturesEXT";
		case StructureType::physicalDeviceShaderObjectPropertiesEXT: return "physicalDeviceShaderObjectPropertiesEXT";
		case StructureType::shaderCreateInfoEXT: return "shaderCreateInfoEXT";
		case StructureType::physicalDevicePipelineBinaryFeaturesKHR: return "physicalDevicePipelineBinaryFeaturesKHR";
		case StructureType::pipelineBinaryCreateInfoKHR: return "pipelineBinaryCreateInfoKHR";
		case StructureType::pipelineBinaryInfoKHR: return "pipelineBinaryInfoKHR";
		case StructureType::pipelineBinaryKeyKHR: return "pipelineBinaryKeyKHR";
		case StructureType::physicalDevicePipelineBinaryPropertiesKHR: return "physicalDevicePipelineBinaryPropertiesKHR";
		case StructureType::releaseCapturedPipelineDataInfoKHR: return "releaseCapturedPipelineDataInfoKHR";
		case StructureType::pipelineBinaryDataInfoKHR: return "pipelineBinaryDataInfoKHR";
		case StructureType::pipelineCreateInfoKHR: return "pipelineCreateInfoKHR";
		case StructureType::devicePipelineBinaryInternalCacheControlKHR: return "devicePipelineBinaryInternalCacheControlKHR";
		case StructureType::pipelineBinaryHandlesInfoKHR: return "pipelineBinaryHandlesInfoKHR";
		case StructureType::physicalDeviceTilePropertiesFeaturesQCOM: return "physicalDeviceTilePropertiesFeaturesQCOM";
		case StructureType::tilePropertiesQCOM: return "tilePropertiesQCOM";
		case StructureType::physicalDeviceAmigoProfilingFeaturesSEC: return "physicalDeviceAmigoProfilingFeaturesSEC";
		case StructureType::amigoProfilingSubmitInfoSEC: return "amigoProfilingSubmitInfoSEC";
		case StructureType::surfacePresentModeKHR: return "surfacePresentModeKHR";
		case StructureType::surfacePresentScalingCapabilitiesKHR: return "surfacePresentScalingCapabilitiesKHR";
		case StructureType::surfacePresentModeCompatibilityKHR: return "surfacePresentModeCompatibilityKHR";
		case StructureType::physicalDeviceSwapchainMaintenance1FeaturesKHR: return "physicalDeviceSwapchainMaintenance1FeaturesKHR";
		case StructureType::swapchainPresentFenceInfoKHR: return "swapchainPresentFenceInfoKHR";
		case StructureType::swapchainPresentModesCreateInfoKHR: return "swapchainPresentModesCreateInfoKHR";
		case StructureType::swapchainPresentModeInfoKHR: return "swapchainPresentModeInfoKHR";
		case StructureType::swapchainPresentScalingCreateInfoKHR: return "swapchainPresentScalingCreateInfoKHR";
		case StructureType::releaseSwapchainImagesInfoKHR: return "releaseSwapchainImagesInfoKHR";
		case StructureType::physicalDeviceMultiviewPerViewViewportsFeaturesQCOM: return "physicalDeviceMultiviewPerViewViewportsFeaturesQCOM";
		case StructureType::physicalDeviceRayTracingInvocationReorderFeaturesNV: return "physicalDeviceRayTracingInvocationReorderFeaturesNV";
		case StructureType::physicalDeviceRayTracingInvocationReorderPropertiesNV: return "physicalDeviceRayTracingInvocationReorderPropertiesNV";
		case StructureType::physicalDeviceCooperativeVectorFeaturesNV: return "physicalDeviceCooperativeVectorFeaturesNV";
		case StructureType::physicalDeviceCooperativeVectorPropertiesNV: return "physicalDeviceCooperativeVectorPropertiesNV";
		case StructureType::cooperativeVectorPropertiesNV: return "cooperativeVectorPropertiesNV";
		case StructureType::convertCooperativeVectorMatrixInfoNV: return "convertCooperativeVectorMatrixInfoNV";
		case StructureType::physicalDeviceExtendedSparseAddressSpaceFeaturesNV: return "physicalDeviceExtendedSparseAddressSpaceFeaturesNV";
		case StructureType::physicalDeviceExtendedSparseAddressSpacePropertiesNV: return "physicalDeviceExtendedSparseAddressSpacePropertiesNV";
		case StructureType::physicalDeviceMutableDescriptorTypeFeaturesEXT: return "physicalDeviceMutableDescriptorTypeFeaturesEXT";
		case StructureType::mutableDescriptorTypeCreateInfoEXT: return "mutableDescriptorTypeCreateInfoEXT";
		case StructureType::physicalDeviceLegacyVertexAttributesFeaturesEXT: return "physicalDeviceLegacyVertexAttributesFeaturesEXT";
		case StructureType::physicalDeviceLegacyVertexAttributesPropertiesEXT: return "physicalDeviceLegacyVertexAttributesPropertiesEXT";
		case StructureType::layerSettingsCreateInfoEXT: return "layerSettingsCreateInfoEXT";
		case StructureType::physicalDeviceShaderCoreBuiltinsFeaturesARM: return "physicalDeviceShaderCoreBuiltinsFeaturesARM";
		case StructureType::physicalDeviceShaderCoreBuiltinsPropertiesARM: return "physicalDeviceShaderCoreBuiltinsPropertiesARM";
		case StructureType::physicalDevicePipelineLibraryGroupHandlesFeaturesEXT: return "physicalDevicePipelineLibraryGroupHandlesFeaturesEXT";
		case StructureType::physicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT: return "physicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT";
		case StructureType::physicalDeviceInternallySynchronizedQueuesFeaturesKHR: return "physicalDeviceInternallySynchronizedQueuesFeaturesKHR";
		case StructureType::latencySleepModeInfoNV: return "latencySleepModeInfoNV";
		case StructureType::latencySleepInfoNV: return "latencySleepInfoNV";
		case StructureType::setLatencyMarkerInfoNV: return "setLatencyMarkerInfoNV";
		case StructureType::getLatencyMarkerInfoNV: return "getLatencyMarkerInfoNV";
		case StructureType::latencyTimingsFrameReportNV: return "latencyTimingsFrameReportNV";
		case StructureType::latencySubmissionPresentIDNV: return "latencySubmissionPresentIDNV";
		case StructureType::outOfBandQueueTypeInfoNV: return "outOfBandQueueTypeInfoNV";
		case StructureType::swapchainLatencyCreateInfoNV: return "swapchainLatencyCreateInfoNV";
		case StructureType::latencySurfaceCapabilitiesNV: return "latencySurfaceCapabilitiesNV";
		case StructureType::physicalDeviceCooperativeMatrixFeaturesKHR: return "physicalDeviceCooperativeMatrixFeaturesKHR";
		case StructureType::cooperativeMatrixPropertiesKHR: return "cooperativeMatrixPropertiesKHR";
		case StructureType::physicalDeviceCooperativeMatrixPropertiesKHR: return "physicalDeviceCooperativeMatrixPropertiesKHR";
		case StructureType::dataGraphPipelineCreateInfoARM: return "dataGraphPipelineCreateInfoARM";
		case StructureType::dataGraphPipelineSessionCreateInfoARM: return "dataGraphPipelineSessionCreateInfoARM";
		case StructureType::dataGraphPipelineResourceInfoARM: return "dataGraphPipelineResourceInfoARM";
		case StructureType::dataGraphPipelineConstantARM: return "dataGraphPipelineConstantARM";
		case StructureType::dataGraphPipelineSessionMemoryRequirementsInfoARM: return "dataGraphPipelineSessionMemoryRequirementsInfoARM";
		case StructureType::bindDataGraphPipelineSessionMemoryInfoARM: return "bindDataGraphPipelineSessionMemoryInfoARM";
		case StructureType::physicalDeviceDataGraphFeaturesARM: return "physicalDeviceDataGraphFeaturesARM";
		case StructureType::dataGraphPipelineShaderModuleCreateInfoARM: return "dataGraphPipelineShaderModuleCreateInfoARM";
		case StructureType::dataGraphPipelinePropertyQueryResultARM: return "dataGraphPipelinePropertyQueryResultARM";
		case StructureType::dataGraphPipelineInfoARM: return "dataGraphPipelineInfoARM";
		case StructureType::dataGraphPipelineCompilerControlCreateInfoARM: return "dataGraphPipelineCompilerControlCreateInfoARM";
		case StructureType::dataGraphPipelineSessionBindPointRequirementsInfoARM: return "dataGraphPipelineSessionBindPointRequirementsInfoARM";
		case StructureType::dataGraphPipelineSessionBindPointRequirementARM: return "dataGraphPipelineSessionBindPointRequirementARM";
		case StructureType::dataGraphPipelineIDentifierCreateInfoARM: return "dataGraphPipelineIDentifierCreateInfoARM";
		case StructureType::dataGraphPipelineDispatchInfoARM: return "dataGraphPipelineDispatchInfoARM";
		case StructureType::dataGraphProcessingEngineCreateInfoARM: return "dataGraphProcessingEngineCreateInfoARM";
		case StructureType::queueFamilyDataGraphProcessingEnginePropertiesARM: return "queueFamilyDataGraphProcessingEnginePropertiesARM";
		case StructureType::queueFamilyDataGraphPropertiesARM: return "queueFamilyDataGraphPropertiesARM";
		case StructureType::physicalDeviceQueueFamilyDataGraphProcessingEngineInfoARM: return "physicalDeviceQueueFamilyDataGraphProcessingEngineInfoARM";
		case StructureType::dataGraphPipelineConstantTensorSemiStructuredSparsityInfoARM: return "dataGraphPipelineConstantTensorSemiStructuredSparsityInfoARM";
		case StructureType::queueFamilyDataGraphTosaPropertiesARM: return "queueFamilyDataGraphTosaPropertiesARM";
		case StructureType::physicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM: return "physicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM";
		case StructureType::multiviewPerViewRenderAreasRenderPassBeginInfoQCOM: return "multiviewPerViewRenderAreasRenderPassBeginInfoQCOM";
		case StructureType::physicalDeviceComputeShaderDerivativesFeaturesKHR: return "physicalDeviceComputeShaderDerivativesFeaturesKHR";
		case StructureType::physicalDeviceComputeShaderDerivativesPropertiesKHR: return "physicalDeviceComputeShaderDerivativesPropertiesKHR";
		case StructureType::videoDecodeAv1CapabilitiesKHR: return "videoDecodeAv1CapabilitiesKHR";
		case StructureType::videoDecodeAv1PictureInfoKHR: return "videoDecodeAv1PictureInfoKHR";
		case StructureType::videoDecodeAv1ProfileInfoKHR: return "videoDecodeAv1ProfileInfoKHR";
		case StructureType::videoDecodeAv1SessionParametersCreateInfoKHR: return "videoDecodeAv1SessionParametersCreateInfoKHR";
		case StructureType::videoDecodeAv1DpbSlotInfoKHR: return "videoDecodeAv1DpbSlotInfoKHR";
		case StructureType::videoEncodeAv1CapabilitiesKHR: return "videoEncodeAv1CapabilitiesKHR";
		case StructureType::videoEncodeAv1SessionParametersCreateInfoKHR: return "videoEncodeAv1SessionParametersCreateInfoKHR";
		case StructureType::videoEncodeAv1PictureInfoKHR: return "videoEncodeAv1PictureInfoKHR";
		case StructureType::videoEncodeAv1DpbSlotInfoKHR: return "videoEncodeAv1DpbSlotInfoKHR";
		case StructureType::physicalDeviceVideoEncodeAv1FeaturesKHR: return "physicalDeviceVideoEncodeAv1FeaturesKHR";
		case StructureType::videoEncodeAv1ProfileInfoKHR: return "videoEncodeAv1ProfileInfoKHR";
		case StructureType::videoEncodeAv1RateControlInfoKHR: return "videoEncodeAv1RateControlInfoKHR";
		case StructureType::videoEncodeAv1RateControlLayerInfoKHR: return "videoEncodeAv1RateControlLayerInfoKHR";
		case StructureType::videoEncodeAv1QualityLevelPropertiesKHR: return "videoEncodeAv1QualityLevelPropertiesKHR";
		case StructureType::videoEncodeAv1SessionCreateInfoKHR: return "videoEncodeAv1SessionCreateInfoKHR";
		case StructureType::videoEncodeAv1GopRemainingFrameInfoKHR: return "videoEncodeAv1GopRemainingFrameInfoKHR";
		case StructureType::physicalDeviceVideoDecodeVp9FeaturesKHR: return "physicalDeviceVideoDecodeVp9FeaturesKHR";
		case StructureType::videoDecodeVp9CapabilitiesKHR: return "videoDecodeVp9CapabilitiesKHR";
		case StructureType::videoDecodeVp9PictureInfoKHR: return "videoDecodeVp9PictureInfoKHR";
		case StructureType::videoDecodeVp9ProfileInfoKHR: return "videoDecodeVp9ProfileInfoKHR";
		case StructureType::physicalDeviceVideoMaintenance1FeaturesKHR: return "physicalDeviceVideoMaintenance1FeaturesKHR";
		case StructureType::videoInlineQueryInfoKHR: return "videoInlineQueryInfoKHR";
		case StructureType::physicalDevicePerStageDescriptorSetFeaturesNV: return "physicalDevicePerStageDescriptorSetFeaturesNV";
		case StructureType::physicalDeviceImageProcessing2FeaturesQCOM: return "physicalDeviceImageProcessing2FeaturesQCOM";
		case StructureType::physicalDeviceImageProcessing2PropertiesQCOM: return "physicalDeviceImageProcessing2PropertiesQCOM";
		case StructureType::samplerBlockMatchWindowCreateInfoQCOM: return "samplerBlockMatchWindowCreateInfoQCOM";
		case StructureType::samplerCubicWeightsCreateInfoQCOM: return "samplerCubicWeightsCreateInfoQCOM";
		case StructureType::physicalDeviceCubicWeightsFeaturesQCOM: return "physicalDeviceCubicWeightsFeaturesQCOM";
		case StructureType::blitImageCubicWeightsInfoQCOM: return "blitImageCubicWeightsInfoQCOM";
		case StructureType::physicalDeviceYcbcrDegammaFeaturesQCOM: return "physicalDeviceYcbcrDegammaFeaturesQCOM";
		case StructureType::samplerYcbcrConversionYcbcrDegammaCreateInfoQCOM: return "samplerYcbcrConversionYcbcrDegammaCreateInfoQCOM";
		case StructureType::physicalDeviceCubicClampFeaturesQCOM: return "physicalDeviceCubicClampFeaturesQCOM";
		case StructureType::physicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT: return "physicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT";
		case StructureType::physicalDeviceUnifiedImageLayoutsFeaturesKHR: return "physicalDeviceUnifiedImageLayoutsFeaturesKHR";
		case StructureType::attachmentFeedbackLoopInfoEXT: return "attachmentFeedbackLoopInfoEXT";
		case StructureType::screenBufferPropertiesQNX: return "screenBufferPropertiesQNX";
		case StructureType::screenBufferFormatPropertiesQNX: return "screenBufferFormatPropertiesQNX";
		case StructureType::importScreenBufferInfoQNX: return "importScreenBufferInfoQNX";
		case StructureType::externalFormatQNX: return "externalFormatQNX";
		case StructureType::physicalDeviceExternalMemoryScreenBufferFeaturesQNX: return "physicalDeviceExternalMemoryScreenBufferFeaturesQNX";
		case StructureType::physicalDeviceLayeredDriverPropertiesMSFT: return "physicalDeviceLayeredDriverPropertiesMSFT";
		case StructureType::calibratedTimestampInfoKHR: return "calibratedTimestampInfoKHR";
		case StructureType::setDescriptorBufferOffsetsInfoEXT: return "setDescriptorBufferOffsetsInfoEXT";
		case StructureType::bindDescriptorBufferEmbeddedSamplersInfoEXT: return "bindDescriptorBufferEmbeddedSamplersInfoEXT";
		case StructureType::physicalDeviceDescriptorPoolOverallocationFeaturesNV: return "physicalDeviceDescriptorPoolOverallocationFeaturesNV";
		case StructureType::physicalDeviceTileMemoryHeapFeaturesQCOM: return "physicalDeviceTileMemoryHeapFeaturesQCOM";
		case StructureType::physicalDeviceTileMemoryHeapPropertiesQCOM: return "physicalDeviceTileMemoryHeapPropertiesQCOM";
		case StructureType::tileMemoryRequirementsQCOM: return "tileMemoryRequirementsQCOM";
		case StructureType::tileMemoryBindInfoQCOM: return "tileMemoryBindInfoQCOM";
		case StructureType::tileMemorySizeInfoQCOM: return "tileMemorySizeInfoQCOM";
		case StructureType::physicalDeviceCopyMemoryIndirectFeaturesKHR: return "physicalDeviceCopyMemoryIndirectFeaturesKHR";
		case StructureType::physicalDeviceCopyMemoryIndirectPropertiesKHR: return "physicalDeviceCopyMemoryIndirectPropertiesKHR";
		case StructureType::copyMemoryIndirectInfoKHR: return "copyMemoryIndirectInfoKHR";
		case StructureType::copyMemoryToImageIndirectInfoKHR: return "copyMemoryToImageIndirectInfoKHR";
		case StructureType::physicalDeviceMemoryDecompressionFeaturesEXT: return "physicalDeviceMemoryDecompressionFeaturesEXT";
		case StructureType::physicalDeviceMemoryDecompressionPropertiesEXT: return "physicalDeviceMemoryDecompressionPropertiesEXT";
		case StructureType::decompressMemoryInfoEXT: return "decompressMemoryInfoEXT";
		case StructureType::displaySurfaceStereoCreateInfoNV: return "displaySurfaceStereoCreateInfoNV";
		case StructureType::displayModeStereoPropertiesNV: return "displayModeStereoPropertiesNV";
		case StructureType::videoEncodeIntraRefreshCapabilitiesKHR: return "videoEncodeIntraRefreshCapabilitiesKHR";
		case StructureType::videoEncodeSessionIntraRefreshCreateInfoKHR: return "videoEncodeSessionIntraRefreshCreateInfoKHR";
		case StructureType::videoEncodeIntraRefreshInfoKHR: return "videoEncodeIntraRefreshInfoKHR";
		case StructureType::videoReferenceIntraRefreshInfoKHR: return "videoReferenceIntraRefreshInfoKHR";
		case StructureType::physicalDeviceVideoEncodeIntraRefreshFeaturesKHR: return "physicalDeviceVideoEncodeIntraRefreshFeaturesKHR";
		case StructureType::videoEncodeQuantizationMapCapabilitiesKHR: return "videoEncodeQuantizationMapCapabilitiesKHR";
		case StructureType::videoFormatQuantizationMapPropertiesKHR: return "videoFormatQuantizationMapPropertiesKHR";
		case StructureType::videoEncodeQuantizationMapInfoKHR: return "videoEncodeQuantizationMapInfoKHR";
		case StructureType::videoEncodeQuantizationMapSessionParametersCreateInfoKHR: return "videoEncodeQuantizationMapSessionParametersCreateInfoKHR";
		case StructureType::physicalDeviceVideoEncodeQuantizationMapFeaturesKHR: return "physicalDeviceVideoEncodeQuantizationMapFeaturesKHR";
		case StructureType::videoEncodeH264QuantizationMapCapabilitiesKHR: return "videoEncodeH264QuantizationMapCapabilitiesKHR";
		case StructureType::videoEncodeH265QuantizationMapCapabilitiesKHR: return "videoEncodeH265QuantizationMapCapabilitiesKHR";
		case StructureType::videoFormatH265QuantizationMapPropertiesKHR: return "videoFormatH265QuantizationMapPropertiesKHR";
		case StructureType::videoEncodeAv1QuantizationMapCapabilitiesKHR: return "videoEncodeAv1QuantizationMapCapabilitiesKHR";
		case StructureType::videoFormatAv1QuantizationMapPropertiesKHR: return "videoFormatAv1QuantizationMapPropertiesKHR";
		case StructureType::physicalDeviceRawAccessChainsFeaturesNV: return "physicalDeviceRawAccessChainsFeaturesNV";
		case StructureType::externalComputeQueueDeviceCreateInfoNV: return "externalComputeQueueDeviceCreateInfoNV";
		case StructureType::externalComputeQueueCreateInfoNV: return "externalComputeQueueCreateInfoNV";
		case StructureType::externalComputeQueueDataParamsNV: return "externalComputeQueueDataParamsNV";
		case StructureType::physicalDeviceExternalComputeQueuePropertiesNV: return "physicalDeviceExternalComputeQueuePropertiesNV";
		case StructureType::physicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR: return "physicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR";
		case StructureType::physicalDeviceCommandBufferInheritanceFeaturesNV: return "physicalDeviceCommandBufferInheritanceFeaturesNV";
		case StructureType::physicalDeviceMaintenance7FeaturesKHR: return "physicalDeviceMaintenance7FeaturesKHR";
		case StructureType::physicalDeviceMaintenance7PropertiesKHR: return "physicalDeviceMaintenance7PropertiesKHR";
		case StructureType::physicalDeviceLayeredApiPropertiesListKHR: return "physicalDeviceLayeredApiPropertiesListKHR";
		case StructureType::physicalDeviceLayeredApiPropertiesKHR: return "physicalDeviceLayeredApiPropertiesKHR";
		case StructureType::physicalDeviceLayeredApiVulkanPropertiesKHR: return "physicalDeviceLayeredApiVulkanPropertiesKHR";
		case StructureType::physicalDeviceShaderAtomicFloat16VectorFeaturesNV: return "physicalDeviceShaderAtomicFloat16VectorFeaturesNV";
		case StructureType::physicalDeviceShaderReplicatedCompositesFeaturesEXT: return "physicalDeviceShaderReplicatedCompositesFeaturesEXT";
		case StructureType::physicalDeviceShaderFloat8FeaturesEXT: return "physicalDeviceShaderFloat8FeaturesEXT";
		case StructureType::physicalDeviceRayTracingValidationFeaturesNV: return "physicalDeviceRayTracingValidationFeaturesNV";
		case StructureType::physicalDeviceClusterAccelerationStructureFeaturesNV: return "physicalDeviceClusterAccelerationStructureFeaturesNV";
		case StructureType::physicalDeviceClusterAccelerationStructurePropertiesNV: return "physicalDeviceClusterAccelerationStructurePropertiesNV";
		case StructureType::clusterAccelerationStructureClustersBottomLevelInputNV: return "clusterAccelerationStructureClustersBottomLevelInputNV";
		case StructureType::clusterAccelerationStructureTriangleClusterInputNV: return "clusterAccelerationStructureTriangleClusterInputNV";
		case StructureType::clusterAccelerationStructureMoveObjectsInputNV: return "clusterAccelerationStructureMoveObjectsInputNV";
		case StructureType::clusterAccelerationStructureInputInfoNV: return "clusterAccelerationStructureInputInfoNV";
		case StructureType::clusterAccelerationStructureCommandsInfoNV: return "clusterAccelerationStructureCommandsInfoNV";
		case StructureType::rayTracingPipelineClusterAccelerationStructureCreateInfoNV: return "rayTracingPipelineClusterAccelerationStructureCreateInfoNV";
		case StructureType::physicalDevicePartitionedAccelerationStructureFeaturesNV: return "physicalDevicePartitionedAccelerationStructureFeaturesNV";
		case StructureType::physicalDevicePartitionedAccelerationStructurePropertiesNV: return "physicalDevicePartitionedAccelerationStructurePropertiesNV";
		case StructureType::writeDescriptorSetPartitionedAccelerationStructureNV: return "writeDescriptorSetPartitionedAccelerationStructureNV";
		case StructureType::partitionedAccelerationStructureInstancesInputNV: return "partitionedAccelerationStructureInstancesInputNV";
		case StructureType::buildPartitionedAccelerationStructureInfoNV: return "buildPartitionedAccelerationStructureInfoNV";
		case StructureType::partitionedAccelerationStructureFlagsNV: return "partitionedAccelerationStructureFlagsNV";
		case StructureType::physicalDeviceDeviceGeneratedCommandsFeaturesEXT: return "physicalDeviceDeviceGeneratedCommandsFeaturesEXT";
		case StructureType::physicalDeviceDeviceGeneratedCommandsPropertiesEXT: return "physicalDeviceDeviceGeneratedCommandsPropertiesEXT";
		case StructureType::generatedCommandsMemoryRequirementsInfoEXT: return "generatedCommandsMemoryRequirementsInfoEXT";
		case StructureType::indirectExecutionSetCreateInfoEXT: return "indirectExecutionSetCreateInfoEXT";
		case StructureType::generatedCommandsInfoEXT: return "generatedCommandsInfoEXT";
		case StructureType::indirectCommandsLayoutCreateInfoEXT: return "indirectCommandsLayoutCreateInfoEXT";
		case StructureType::indirectCommandsLayoutTokenEXT: return "indirectCommandsLayoutTokenEXT";
		case StructureType::writeIndirectExecutionSetPipelineEXT: return "writeIndirectExecutionSetPipelineEXT";
		case StructureType::writeIndirectExecutionSetShaderEXT: return "writeIndirectExecutionSetShaderEXT";
		case StructureType::indirectExecutionSetPipelineInfoEXT: return "indirectExecutionSetPipelineInfoEXT";
		case StructureType::indirectExecutionSetShaderInfoEXT: return "indirectExecutionSetShaderInfoEXT";
		case StructureType::indirectExecutionSetShaderLayoutInfoEXT: return "indirectExecutionSetShaderLayoutInfoEXT";
		case StructureType::generatedCommandsPipelineInfoEXT: return "generatedCommandsPipelineInfoEXT";
		case StructureType::generatedCommandsShaderInfoEXT: return "generatedCommandsShaderInfoEXT";
		case StructureType::physicalDeviceFaultFeaturesKHR: return "physicalDeviceFaultFeaturesKHR";
		case StructureType::physicalDeviceFaultPropertiesKHR: return "physicalDeviceFaultPropertiesKHR";
		case StructureType::deviceFaultInfoKHR: return "deviceFaultInfoKHR";
		case StructureType::deviceFaultDebugInfoKHR: return "deviceFaultDebugInfoKHR";
		case StructureType::physicalDeviceMaintenance8FeaturesKHR: return "physicalDeviceMaintenance8FeaturesKHR";
		case StructureType::memoryBarrierAccessFlags3KHR: return "memoryBarrierAccessFlags3KHR";
		case StructureType::physicalDeviceImageAlignmentControlFeaturesMESA: return "physicalDeviceImageAlignmentControlFeaturesMESA";
		case StructureType::physicalDeviceImageAlignmentControlPropertiesMESA: return "physicalDeviceImageAlignmentControlPropertiesMESA";
		case StructureType::imageAlignmentControlCreateInfoMESA: return "imageAlignmentControlCreateInfoMESA";
		case StructureType::physicalDeviceShaderFmaFeaturesKHR: return "physicalDeviceShaderFmaFeaturesKHR";
		case StructureType::pushConstantBankInfoNV: return "pushConstantBankInfoNV";
		case StructureType::physicalDevicePushConstantBankFeaturesNV: return "physicalDevicePushConstantBankFeaturesNV";
		case StructureType::physicalDevicePushConstantBankPropertiesNV: return "physicalDevicePushConstantBankPropertiesNV";
		case StructureType::physicalDeviceRayTracingInvocationReorderFeaturesEXT: return "physicalDeviceRayTracingInvocationReorderFeaturesEXT";
		case StructureType::physicalDeviceRayTracingInvocationReorderPropertiesEXT: return "physicalDeviceRayTracingInvocationReorderPropertiesEXT";
		case StructureType::physicalDeviceDepthClampControlFeaturesEXT: return "physicalDeviceDepthClampControlFeaturesEXT";
		case StructureType::pipelineViewportDepthClampControlCreateInfoEXT: return "pipelineViewportDepthClampControlCreateInfoEXT";
		case StructureType::physicalDeviceMaintenance9FeaturesKHR: return "physicalDeviceMaintenance9FeaturesKHR";
		case StructureType::physicalDeviceMaintenance9PropertiesKHR: return "physicalDeviceMaintenance9PropertiesKHR";
		case StructureType::queueFamilyOwnershipTransferPropertiesKHR: return "queueFamilyOwnershipTransferPropertiesKHR";
		case StructureType::physicalDeviceVideoMaintenance2FeaturesKHR: return "physicalDeviceVideoMaintenance2FeaturesKHR";
		case StructureType::videoDecodeH264InlineSessionParametersInfoKHR: return "videoDecodeH264InlineSessionParametersInfoKHR";
		case StructureType::videoDecodeH265InlineSessionParametersInfoKHR: return "videoDecodeH265InlineSessionParametersInfoKHR";
		case StructureType::videoDecodeAv1InlineSessionParametersInfoKHR: return "videoDecodeAv1InlineSessionParametersInfoKHR";
		case StructureType::surfaceCreateInfoOHOS: return "surfaceCreateInfoOHOS";
		case StructureType::physicalDeviceHdrVividFeaturesHUAWEI: return "physicalDeviceHdrVividFeaturesHUAWEI";
		case StructureType::hdrVividDynamicMetadataHUAWEI: return "hdrVividDynamicMetadataHUAWEI";
		case StructureType::physicalDeviceCooperativeMatrix2FeaturesNV: return "physicalDeviceCooperativeMatrix2FeaturesNV";
		case StructureType::cooperativeMatrixFlexibleDimensionsPropertiesNV: return "cooperativeMatrixFlexibleDimensionsPropertiesNV";
		case StructureType::physicalDeviceCooperativeMatrix2PropertiesNV: return "physicalDeviceCooperativeMatrix2PropertiesNV";
		case StructureType::physicalDevicePipelineOpacityMicromapFeaturesARM: return "physicalDevicePipelineOpacityMicromapFeaturesARM";
		case StructureType::physicalDeviceDepthClampZeroOneFeaturesKHR: return "physicalDeviceDepthClampZeroOneFeaturesKHR";
		case StructureType::physicalDevicePerformanceCountersByRegionFeaturesARM: return "physicalDevicePerformanceCountersByRegionFeaturesARM";
		case StructureType::physicalDevicePerformanceCountersByRegionPropertiesARM: return "physicalDevicePerformanceCountersByRegionPropertiesARM";
		case StructureType::performanceCounterARM: return "performanceCounterARM";
		case StructureType::performanceCounterDescriptionARM: return "performanceCounterDescriptionARM";
		case StructureType::renderPassPerformanceCountersByRegionBeginInfoARM: return "renderPassPerformanceCountersByRegionBeginInfoARM";
		case StructureType::physicalDeviceShaderInstrumentationFeaturesARM: return "physicalDeviceShaderInstrumentationFeaturesARM";
		case StructureType::physicalDeviceShaderInstrumentationPropertiesARM: return "physicalDeviceShaderInstrumentationPropertiesARM";
		case StructureType::shaderInstrumentationCreateInfoARM: return "shaderInstrumentationCreateInfoARM";
		case StructureType::shaderInstrumentationMetricDescriptionARM: return "shaderInstrumentationMetricDescriptionARM";
		case StructureType::physicalDeviceVertexAttributeRobustnessFeaturesEXT: return "physicalDeviceVertexAttributeRobustnessFeaturesEXT";
		case StructureType::physicalDeviceFormatPackFeaturesARM: return "physicalDeviceFormatPackFeaturesARM";
		case StructureType::physicalDeviceFragmentDensityMapLayeredFeaturesVALVE: return "physicalDeviceFragmentDensityMapLayeredFeaturesVALVE";
		case StructureType::physicalDeviceFragmentDensityMapLayeredPropertiesVALVE: return "physicalDeviceFragmentDensityMapLayeredPropertiesVALVE";
		case StructureType::pipelineFragmentDensityMapLayeredCreateInfoVALVE: return "pipelineFragmentDensityMapLayeredCreateInfoVALVE";
		case StructureType::physicalDeviceRobustness2FeaturesKHR: return "physicalDeviceRobustness2FeaturesKHR";
		case StructureType::physicalDeviceRobustness2PropertiesKHR: return "physicalDeviceRobustness2PropertiesKHR";
		case StructureType::setPresentConfigNV: return "setPresentConfigNV";
		case StructureType::physicalDevicePresentMeteringFeaturesNV: return "physicalDevicePresentMeteringFeaturesNV";
		case StructureType::physicalDeviceFragmentDensityMapOffsetFeaturesEXT: return "physicalDeviceFragmentDensityMapOffsetFeaturesEXT";
		case StructureType::physicalDeviceFragmentDensityMapOffsetPropertiesEXT: return "physicalDeviceFragmentDensityMapOffsetPropertiesEXT";
		case StructureType::renderPassFragmentDensityMapOffsetEndInfoEXT: return "renderPassFragmentDensityMapOffsetEndInfoEXT";
		case StructureType::physicalDeviceZeroInitializeDeviceMemoryFeaturesEXT: return "physicalDeviceZeroInitializeDeviceMemoryFeaturesEXT";
		case StructureType::physicalDevicePresentModeFifoLatestReadyFeaturesKHR: return "physicalDevicePresentModeFifoLatestReadyFeaturesKHR";
		case StructureType::physicalDeviceShader64BitIndexingFeaturesEXT: return "physicalDeviceShader64BitIndexingFeaturesEXT";
		case StructureType::physicalDeviceCustomResolveFeaturesEXT: return "physicalDeviceCustomResolveFeaturesEXT";
		case StructureType::beginCustomResolveInfoEXT: return "beginCustomResolveInfoEXT";
		case StructureType::customResolveCreateInfoEXT: return "customResolveCreateInfoEXT";
		case StructureType::physicalDeviceDataGraphModelFeaturesQCOM: return "physicalDeviceDataGraphModelFeaturesQCOM";
		case StructureType::dataGraphPipelineBuiltinModelCreateInfoQCOM: return "dataGraphPipelineBuiltinModelCreateInfoQCOM";
		case StructureType::physicalDeviceMaintenance10FeaturesKHR: return "physicalDeviceMaintenance10FeaturesKHR";
		case StructureType::physicalDeviceMaintenance10PropertiesKHR: return "physicalDeviceMaintenance10PropertiesKHR";
		case StructureType::renderingAttachmentFlagsInfoKHR: return "renderingAttachmentFlagsInfoKHR";
		case StructureType::renderingEndInfoKHR: return "renderingEndInfoKHR";
		case StructureType::resolveImageModeInfoKHR: return "resolveImageModeInfoKHR";
		case StructureType::physicalDeviceDataGraphOpticalFlowFeaturesARM: return "physicalDeviceDataGraphOpticalFlowFeaturesARM";
		case StructureType::queueFamilyDataGraphOpticalFlowPropertiesARM: return "queueFamilyDataGraphOpticalFlowPropertiesARM";
		case StructureType::dataGraphOpticalFlowImageFormatInfoARM: return "dataGraphOpticalFlowImageFormatInfoARM";
		case StructureType::dataGraphOpticalFlowImageFormatPropertiesARM: return "dataGraphOpticalFlowImageFormatPropertiesARM";
		case StructureType::dataGraphPipelineOpticalFlowDispatchInfoARM: return "dataGraphPipelineOpticalFlowDispatchInfoARM";
		case StructureType::dataGraphPipelineOpticalFlowCreateInfoARM: return "dataGraphPipelineOpticalFlowCreateInfoARM";
		case StructureType::dataGraphPipelineResourceInfoImageLayoutARM: return "dataGraphPipelineResourceInfoImageLayoutARM";
		case StructureType::dataGraphPipelineSingleNodeCreateInfoARM: return "dataGraphPipelineSingleNodeCreateInfoARM";
		case StructureType::dataGraphPipelineSingleNodeConnectionARM: return "dataGraphPipelineSingleNodeConnectionARM";
		case StructureType::physicalDeviceShaderLongVectorFeaturesEXT: return "physicalDeviceShaderLongVectorFeaturesEXT";
		case StructureType::physicalDeviceShaderLongVectorPropertiesEXT: return "physicalDeviceShaderLongVectorPropertiesEXT";
		case StructureType::physicalDevicePipelineCacheIncrementalModeFeaturesSEC: return "physicalDevicePipelineCacheIncrementalModeFeaturesSEC";
		case StructureType::physicalDeviceShaderUniformBufferUnsizedArrayFeaturesEXT: return "physicalDeviceShaderUniformBufferUnsizedArrayFeaturesEXT";
		case StructureType::computeOccupancyPriorityParametersNV: return "computeOccupancyPriorityParametersNV";
		case StructureType::physicalDeviceComputeOccupancyPriorityFeaturesNV: return "physicalDeviceComputeOccupancyPriorityFeaturesNV";
		case StructureType::physicalDeviceMaintenance11FeaturesKHR: return "physicalDeviceMaintenance11FeaturesKHR";
		case StructureType::queueFamilyOptimalImageTransferGranularityPropertiesKHR: return "queueFamilyOptimalImageTransferGranularityPropertiesKHR";
		case StructureType::physicalDeviceShaderSubgroupPartitionedFeaturesEXT: return "physicalDeviceShaderSubgroupPartitionedFeaturesEXT";
		case StructureType::ubmSurfaceCreateInfoSEC: return "ubmSurfaceCreateInfoSEC";
		case StructureType::physicalDeviceShaderMixedFloatDotProductFeaturesVALVE: return "physicalDeviceShaderMixedFloatDotProductFeaturesVALVE";
		case StructureType::physicalDeviceThrottleHintFeaturesSEC: return "physicalDeviceThrottleHintFeaturesSEC";
		case StructureType::throttleHintSubmitInfoSEC: return "throttleHintSubmitInfoSEC";
		case StructureType::dataGraphPipelineNeuralStatisticsCreateInfoARM: return "dataGraphPipelineNeuralStatisticsCreateInfoARM";
		case StructureType::dataGraphPipelineSessionNeuralStatisticsCreateInfoARM: return "dataGraphPipelineSessionNeuralStatisticsCreateInfoARM";
		case StructureType::physicalDeviceDataGraphNeuralAcceleratorStatisticsFeaturesARM: return "physicalDeviceDataGraphNeuralAcceleratorStatisticsFeaturesARM";
		case StructureType::physicalDevicePrimitiveRestartIndexFeaturesEXT: return "physicalDevicePrimitiveRestartIndexFeaturesEXT";
		default: return nullptr;
	}
}
inline const char* name(ObjectType val) {
	switch(val) {
		case ObjectType::unknown: return "unknown";
		case ObjectType::instance: return "instance";
		case ObjectType::physicalDevice: return "physicalDevice";
		case ObjectType::device: return "device";
		case ObjectType::queue: return "queue";
		case ObjectType::semaphore: return "semaphore";
		case ObjectType::commandBuffer: return "commandBuffer";
		case ObjectType::fence: return "fence";
		case ObjectType::deviceMemory: return "deviceMemory";
		case ObjectType::buffer: return "buffer";
		case ObjectType::image: return "image";
		case ObjectType::event: return "event";
		case ObjectType::queryPool: return "queryPool";
		case ObjectType::bufferView: return "bufferView";
		case ObjectType::imageView: return "imageView";
		case ObjectType::shaderModule: return "shaderModule";
		case ObjectType::pipelineCache: return "pipelineCache";
		case ObjectType::pipelineLayout: return "pipelineLayout";
		case ObjectType::renderPass: return "renderPass";
		case ObjectType::pipeline: return "pipeline";
		case ObjectType::descriptorSetLayout: return "descriptorSetLayout";
		case ObjectType::sampler: return "sampler";
		case ObjectType::descriptorPool: return "descriptorPool";
		case ObjectType::descriptorSet: return "descriptorSet";
		case ObjectType::framebuffer: return "framebuffer";
		case ObjectType::commandPool: return "commandPool";
		case ObjectType::descriptorUpdateTemplate: return "descriptorUpdateTemplate";
		case ObjectType::samplerYcbcrConversion: return "samplerYcbcrConversion";
		case ObjectType::privateDataSlot: return "privateDataSlot";
		case ObjectType::surfaceKHR: return "surfaceKHR";
		case ObjectType::swapchainKHR: return "swapchainKHR";
		case ObjectType::displayKHR: return "displayKHR";
		case ObjectType::displayModeKHR: return "displayModeKHR";
		case ObjectType::debugReportCallbackEXT: return "debugReportCallbackEXT";
		case ObjectType::videoSessionKHR: return "videoSessionKHR";
		case ObjectType::videoSessionParametersKHR: return "videoSessionParametersKHR";
		case ObjectType::debugUtilsMessengerEXT: return "debugUtilsMessengerEXT";
		case ObjectType::accelerationStructureKHR: return "accelerationStructureKHR";
		case ObjectType::validationCacheEXT: return "validationCacheEXT";
		case ObjectType::accelerationStructureNV: return "accelerationStructureNV";
		case ObjectType::performanceConfigurationINTEL: return "performanceConfigurationINTEL";
		case ObjectType::deferredOperationKHR: return "deferredOperationKHR";
		case ObjectType::indirectCommandsLayoutNV: return "indirectCommandsLayoutNV";
		case ObjectType::bufferCollectionFUCHSIA: return "bufferCollectionFUCHSIA";
		case ObjectType::micromapEXT: return "micromapEXT";
		case ObjectType::tensorARM: return "tensorARM";
		case ObjectType::tensorViewARM: return "tensorViewARM";
		case ObjectType::opticalFlowSessionNV: return "opticalFlowSessionNV";
		case ObjectType::shaderEXT: return "shaderEXT";
		case ObjectType::pipelineBinaryKHR: return "pipelineBinaryKHR";
		case ObjectType::dataGraphPipelineSessionARM: return "dataGraphPipelineSessionARM";
		case ObjectType::externalComputeQueueNV: return "externalComputeQueueNV";
		case ObjectType::indirectCommandsLayoutEXT: return "indirectCommandsLayoutEXT";
		case ObjectType::indirectExecutionSetEXT: return "indirectExecutionSetEXT";
		case ObjectType::shaderInstrumentationARM: return "shaderInstrumentationARM";
		default: return nullptr;
	}
}
inline const char* name(VendorId val) {
	switch(val) {
		case VendorId::khronos: return "khronos";
		case VendorId::vIV: return "vIV";
		case VendorId::vSI: return "vSI";
		case VendorId::kazan: return "kazan";
		case VendorId::codeplay: return "codeplay";
		case VendorId::mESA: return "mESA";
		case VendorId::pocl: return "pocl";
		case VendorId::mobileye: return "mobileye";
		default: return nullptr;
	}
}
inline const char* name(SystemAllocationScope val) {
	switch(val) {
		case SystemAllocationScope::command: return "command";
		case SystemAllocationScope::object: return "object";
		case SystemAllocationScope::cache: return "cache";
		case SystemAllocationScope::device: return "device";
		case SystemAllocationScope::instance: return "instance";
		default: return nullptr;
	}
}
inline const char* name(InternalAllocationType val) {
	switch(val) {
		case InternalAllocationType::executable: return "executable";
		default: return nullptr;
	}
}
inline const char* name(Format val) {
	switch(val) {
		case Format::undefined: return "undefined";
		case Format::r4g4UnormPack8: return "r4g4UnormPack8";
		case Format::r4g4b4a4UnormPack16: return "r4g4b4a4UnormPack16";
		case Format::b4g4r4a4UnormPack16: return "b4g4r4a4UnormPack16";
		case Format::r5g6b5UnormPack16: return "r5g6b5UnormPack16";
		case Format::b5g6r5UnormPack16: return "b5g6r5UnormPack16";
		case Format::r5g5b5a1UnormPack16: return "r5g5b5a1UnormPack16";
		case Format::b5g5r5a1UnormPack16: return "b5g5r5a1UnormPack16";
		case Format::a1r5g5b5UnormPack16: return "a1r5g5b5UnormPack16";
		case Format::r8Unorm: return "r8Unorm";
		case Format::r8Snorm: return "r8Snorm";
		case Format::r8Uscaled: return "r8Uscaled";
		case Format::r8Sscaled: return "r8Sscaled";
		case Format::r8Uint: return "r8Uint";
		case Format::r8Sint: return "r8Sint";
		case Format::r8Srgb: return "r8Srgb";
		case Format::r8g8Unorm: return "r8g8Unorm";
		case Format::r8g8Snorm: return "r8g8Snorm";
		case Format::r8g8Uscaled: return "r8g8Uscaled";
		case Format::r8g8Sscaled: return "r8g8Sscaled";
		case Format::r8g8Uint: return "r8g8Uint";
		case Format::r8g8Sint: return "r8g8Sint";
		case Format::r8g8Srgb: return "r8g8Srgb";
		case Format::r8g8b8Unorm: return "r8g8b8Unorm";
		case Format::r8g8b8Snorm: return "r8g8b8Snorm";
		case Format::r8g8b8Uscaled: return "r8g8b8Uscaled";
		case Format::r8g8b8Sscaled: return "r8g8b8Sscaled";
		case Format::r8g8b8Uint: return "r8g8b8Uint";
		case Format::r8g8b8Sint: return "r8g8b8Sint";
		case Format::r8g8b8Srgb: return "r8g8b8Srgb";
		case Format::b8g8r8Unorm: return "b8g8r8Unorm";
		case Format::b8g8r8Snorm: return "b8g8r8Snorm";
		case Format::b8g8r8Uscaled: return "b8g8r8Uscaled";
		case Format::b8g8r8Sscaled: return "b8g8r8Sscaled";
		case Format::b8g8r8Uint: return "b8g8r8Uint";
		case Format::b8g8r8Sint: return "b8g8r8Sint";
		case Format::b8g8r8Srgb: return "b8g8r8Srgb";
		case Format::r8g8b8a8Unorm: return "r8g8b8a8Unorm";
		case Format::r8g8b8a8Snorm: return "r8g8b8a8Snorm";
		case Format::r8g8b8a8Uscaled: return "r8g8b8a8Uscaled";
		case Format::r8g8b8a8Sscaled: return "r8g8b8a8Sscaled";
		case Format::r8g8b8a8Uint: return "r8g8b8a8Uint";
		case Format::r8g8b8a8Sint: return "r8g8b8a8Sint";
		case Format::r8g8b8a8Srgb: return "r8g8b8a8Srgb";
		case Format::b8g8r8a8Unorm: return "b8g8r8a8Unorm";
		case Format::b8g8r8a8Snorm: return "b8g8r8a8Snorm";
		case Format::b8g8r8a8Uscaled: return "b8g8r8a8Uscaled";
		case Format::b8g8r8a8Sscaled: return "b8g8r8a8Sscaled";
		case Format::b8g8r8a8Uint: return "b8g8r8a8Uint";
		case Format::b8g8r8a8Sint: return "b8g8r8a8Sint";
		case Format::b8g8r8a8Srgb: return "b8g8r8a8Srgb";
		case Format::a8b8g8r8UnormPack32: return "a8b8g8r8UnormPack32";
		case Format::a8b8g8r8SnormPack32: return "a8b8g8r8SnormPack32";
		case Format::a8b8g8r8UscaledPack32: return "a8b8g8r8UscaledPack32";
		case Format::a8b8g8r8SscaledPack32: return "a8b8g8r8SscaledPack32";
		case Format::a8b8g8r8UintPack32: return "a8b8g8r8UintPack32";
		case Format::a8b8g8r8SintPack32: return "a8b8g8r8SintPack32";
		case Format::a8b8g8r8SrgbPack32: return "a8b8g8r8SrgbPack32";
		case Format::a2r10g10b10UnormPack32: return "a2r10g10b10UnormPack32";
		case Format::a2r10g10b10SnormPack32: return "a2r10g10b10SnormPack32";
		case Format::a2r10g10b10UscaledPack32: return "a2r10g10b10UscaledPack32";
		case Format::a2r10g10b10SscaledPack32: return "a2r10g10b10SscaledPack32";
		case Format::a2r10g10b10UintPack32: return "a2r10g10b10UintPack32";
		case Format::a2r10g10b10SintPack32: return "a2r10g10b10SintPack32";
		case Format::a2b10g10r10UnormPack32: return "a2b10g10r10UnormPack32";
		case Format::a2b10g10r10SnormPack32: return "a2b10g10r10SnormPack32";
		case Format::a2b10g10r10UscaledPack32: return "a2b10g10r10UscaledPack32";
		case Format::a2b10g10r10SscaledPack32: return "a2b10g10r10SscaledPack32";
		case Format::a2b10g10r10UintPack32: return "a2b10g10r10UintPack32";
		case Format::a2b10g10r10SintPack32: return "a2b10g10r10SintPack32";
		case Format::r16Unorm: return "r16Unorm";
		case Format::r16Snorm: return "r16Snorm";
		case Format::r16Uscaled: return "r16Uscaled";
		case Format::r16Sscaled: return "r16Sscaled";
		case Format::r16Uint: return "r16Uint";
		case Format::r16Sint: return "r16Sint";
		case Format::r16Sfloat: return "r16Sfloat";
		case Format::r16g16Unorm: return "r16g16Unorm";
		case Format::r16g16Snorm: return "r16g16Snorm";
		case Format::r16g16Uscaled: return "r16g16Uscaled";
		case Format::r16g16Sscaled: return "r16g16Sscaled";
		case Format::r16g16Uint: return "r16g16Uint";
		case Format::r16g16Sint: return "r16g16Sint";
		case Format::r16g16Sfloat: return "r16g16Sfloat";
		case Format::r16g16b16Unorm: return "r16g16b16Unorm";
		case Format::r16g16b16Snorm: return "r16g16b16Snorm";
		case Format::r16g16b16Uscaled: return "r16g16b16Uscaled";
		case Format::r16g16b16Sscaled: return "r16g16b16Sscaled";
		case Format::r16g16b16Uint: return "r16g16b16Uint";
		case Format::r16g16b16Sint: return "r16g16b16Sint";
		case Format::r16g16b16Sfloat: return "r16g16b16Sfloat";
		case Format::r16g16b16a16Unorm: return "r16g16b16a16Unorm";
		case Format::r16g16b16a16Snorm: return "r16g16b16a16Snorm";
		case Format::r16g16b16a16Uscaled: return "r16g16b16a16Uscaled";
		case Format::r16g16b16a16Sscaled: return "r16g16b16a16Sscaled";
		case Format::r16g16b16a16Uint: return "r16g16b16a16Uint";
		case Format::r16g16b16a16Sint: return "r16g16b16a16Sint";
		case Format::r16g16b16a16Sfloat: return "r16g16b16a16Sfloat";
		case Format::r32Uint: return "r32Uint";
		case Format::r32Sint: return "r32Sint";
		case Format::r32Sfloat: return "r32Sfloat";
		case Format::r32g32Uint: return "r32g32Uint";
		case Format::r32g32Sint: return "r32g32Sint";
		case Format::r32g32Sfloat: return "r32g32Sfloat";
		case Format::r32g32b32Uint: return "r32g32b32Uint";
		case Format::r32g32b32Sint: return "r32g32b32Sint";
		case Format::r32g32b32Sfloat: return "r32g32b32Sfloat";
		case Format::r32g32b32a32Uint: return "r32g32b32a32Uint";
		case Format::r32g32b32a32Sint: return "r32g32b32a32Sint";
		case Format::r32g32b32a32Sfloat: return "r32g32b32a32Sfloat";
		case Format::r64Uint: return "r64Uint";
		case Format::r64Sint: return "r64Sint";
		case Format::r64Sfloat: return "r64Sfloat";
		case Format::r64g64Uint: return "r64g64Uint";
		case Format::r64g64Sint: return "r64g64Sint";
		case Format::r64g64Sfloat: return "r64g64Sfloat";
		case Format::r64g64b64Uint: return "r64g64b64Uint";
		case Format::r64g64b64Sint: return "r64g64b64Sint";
		case Format::r64g64b64Sfloat: return "r64g64b64Sfloat";
		case Format::r64g64b64a64Uint: return "r64g64b64a64Uint";
		case Format::r64g64b64a64Sint: return "r64g64b64a64Sint";
		case Format::r64g64b64a64Sfloat: return "r64g64b64a64Sfloat";
		case Format::b10g11r11UfloatPack32: return "b10g11r11UfloatPack32";
		case Format::e5b9g9r9UfloatPack32: return "e5b9g9r9UfloatPack32";
		case Format::d16Unorm: return "d16Unorm";
		case Format::x8D24UnormPack32: return "x8D24UnormPack32";
		case Format::d32Sfloat: return "d32Sfloat";
		case Format::s8Uint: return "s8Uint";
		case Format::d16UnormS8Uint: return "d16UnormS8Uint";
		case Format::d24UnormS8Uint: return "d24UnormS8Uint";
		case Format::d32SfloatS8Uint: return "d32SfloatS8Uint";
		case Format::bc1RgbUnormBlock: return "bc1RgbUnormBlock";
		case Format::bc1RgbSrgbBlock: return "bc1RgbSrgbBlock";
		case Format::bc1RgbaUnormBlock: return "bc1RgbaUnormBlock";
		case Format::bc1RgbaSrgbBlock: return "bc1RgbaSrgbBlock";
		case Format::bc2UnormBlock: return "bc2UnormBlock";
		case Format::bc2SrgbBlock: return "bc2SrgbBlock";
		case Format::bc3UnormBlock: return "bc3UnormBlock";
		case Format::bc3SrgbBlock: return "bc3SrgbBlock";
		case Format::bc4UnormBlock: return "bc4UnormBlock";
		case Format::bc4SnormBlock: return "bc4SnormBlock";
		case Format::bc5UnormBlock: return "bc5UnormBlock";
		case Format::bc5SnormBlock: return "bc5SnormBlock";
		case Format::bc6hUfloatBlock: return "bc6hUfloatBlock";
		case Format::bc6hSfloatBlock: return "bc6hSfloatBlock";
		case Format::bc7UnormBlock: return "bc7UnormBlock";
		case Format::bc7SrgbBlock: return "bc7SrgbBlock";
		case Format::etc2R8g8b8UnormBlock: return "etc2R8g8b8UnormBlock";
		case Format::etc2R8g8b8SrgbBlock: return "etc2R8g8b8SrgbBlock";
		case Format::etc2R8g8b8a1UnormBlock: return "etc2R8g8b8a1UnormBlock";
		case Format::etc2R8g8b8a1SrgbBlock: return "etc2R8g8b8a1SrgbBlock";
		case Format::etc2R8g8b8a8UnormBlock: return "etc2R8g8b8a8UnormBlock";
		case Format::etc2R8g8b8a8SrgbBlock: return "etc2R8g8b8a8SrgbBlock";
		case Format::eacR11UnormBlock: return "eacR11UnormBlock";
		case Format::eacR11SnormBlock: return "eacR11SnormBlock";
		case Format::eacR11g11UnormBlock: return "eacR11g11UnormBlock";
		case Format::eacR11g11SnormBlock: return "eacR11g11SnormBlock";
		case Format::astc4x4UnormBlock: return "astc4x4UnormBlock";
		case Format::astc4x4SrgbBlock: return "astc4x4SrgbBlock";
		case Format::astc5x4UnormBlock: return "astc5x4UnormBlock";
		case Format::astc5x4SrgbBlock: return "astc5x4SrgbBlock";
		case Format::astc5x5UnormBlock: return "astc5x5UnormBlock";
		case Format::astc5x5SrgbBlock: return "astc5x5SrgbBlock";
		case Format::astc6x5UnormBlock: return "astc6x5UnormBlock";
		case Format::astc6x5SrgbBlock: return "astc6x5SrgbBlock";
		case Format::astc6x6UnormBlock: return "astc6x6UnormBlock";
		case Format::astc6x6SrgbBlock: return "astc6x6SrgbBlock";
		case Format::astc8x5UnormBlock: return "astc8x5UnormBlock";
		case Format::astc8x5SrgbBlock: return "astc8x5SrgbBlock";
		case Format::astc8x6UnormBlock: return "astc8x6UnormBlock";
		case Format::astc8x6SrgbBlock: return "astc8x6SrgbBlock";
		case Format::astc8x8UnormBlock: return "astc8x8UnormBlock";
		case Format::astc8x8SrgbBlock: return "astc8x8SrgbBlock";
		case Format::astc10x5UnormBlock: return "astc10x5UnormBlock";
		case Format::astc10x5SrgbBlock: return "astc10x5SrgbBlock";
		case Format::astc10x6UnormBlock: return "astc10x6UnormBlock";
		case Format::astc10x6SrgbBlock: return "astc10x6SrgbBlock";
		case Format::astc10x8UnormBlock: return "astc10x8UnormBlock";
		case Format::astc10x8SrgbBlock: return "astc10x8SrgbBlock";
		case Format::astc10x10UnormBlock: return "astc10x10UnormBlock";
		case Format::astc10x10SrgbBlock: return "astc10x10SrgbBlock";
		case Format::astc12x10UnormBlock: return "astc12x10UnormBlock";
		case Format::astc12x10SrgbBlock: return "astc12x10SrgbBlock";
		case Format::astc12x12UnormBlock: return "astc12x12UnormBlock";
		case Format::astc12x12SrgbBlock: return "astc12x12SrgbBlock";
		case Format::g8b8g8r8422Unorm: return "g8b8g8r8422Unorm";
		case Format::b8g8r8g8422Unorm: return "b8g8r8g8422Unorm";
		case Format::g8B8R83plane420Unorm: return "g8B8R83plane420Unorm";
		case Format::g8B8r82plane420Unorm: return "g8B8r82plane420Unorm";
		case Format::g8B8R83plane422Unorm: return "g8B8R83plane422Unorm";
		case Format::g8B8r82plane422Unorm: return "g8B8r82plane422Unorm";
		case Format::g8B8R83plane444Unorm: return "g8B8R83plane444Unorm";
		case Format::r10x6UnormPack16: return "r10x6UnormPack16";
		case Format::r10x6g10x6Unorm2pack16: return "r10x6g10x6Unorm2pack16";
		case Format::r10x6g10x6b10x6a10x6Unorm4pack16: return "r10x6g10x6b10x6a10x6Unorm4pack16";
		case Format::g10x6b10x6g10x6r10x6422Unorm4pack16: return "g10x6b10x6g10x6r10x6422Unorm4pack16";
		case Format::b10x6g10x6r10x6g10x6422Unorm4pack16: return "b10x6g10x6r10x6g10x6422Unorm4pack16";
		case Format::g10x6B10x6R10x63plane420Unorm3pack16: return "g10x6B10x6R10x63plane420Unorm3pack16";
		case Format::g10x6B10x6r10x62plane420Unorm3pack16: return "g10x6B10x6r10x62plane420Unorm3pack16";
		case Format::g10x6B10x6R10x63plane422Unorm3pack16: return "g10x6B10x6R10x63plane422Unorm3pack16";
		case Format::g10x6B10x6r10x62plane422Unorm3pack16: return "g10x6B10x6r10x62plane422Unorm3pack16";
		case Format::g10x6B10x6R10x63plane444Unorm3pack16: return "g10x6B10x6R10x63plane444Unorm3pack16";
		case Format::r12x4UnormPack16: return "r12x4UnormPack16";
		case Format::r12x4g12x4Unorm2pack16: return "r12x4g12x4Unorm2pack16";
		case Format::r12x4g12x4b12x4a12x4Unorm4pack16: return "r12x4g12x4b12x4a12x4Unorm4pack16";
		case Format::g12x4b12x4g12x4r12x4422Unorm4pack16: return "g12x4b12x4g12x4r12x4422Unorm4pack16";
		case Format::b12x4g12x4r12x4g12x4422Unorm4pack16: return "b12x4g12x4r12x4g12x4422Unorm4pack16";
		case Format::g12x4B12x4R12x43plane420Unorm3pack16: return "g12x4B12x4R12x43plane420Unorm3pack16";
		case Format::g12x4B12x4r12x42plane420Unorm3pack16: return "g12x4B12x4r12x42plane420Unorm3pack16";
		case Format::g12x4B12x4R12x43plane422Unorm3pack16: return "g12x4B12x4R12x43plane422Unorm3pack16";
		case Format::g12x4B12x4r12x42plane422Unorm3pack16: return "g12x4B12x4r12x42plane422Unorm3pack16";
		case Format::g12x4B12x4R12x43plane444Unorm3pack16: return "g12x4B12x4R12x43plane444Unorm3pack16";
		case Format::g16b16g16r16422Unorm: return "g16b16g16r16422Unorm";
		case Format::b16g16r16g16422Unorm: return "b16g16r16g16422Unorm";
		case Format::g16B16R163plane420Unorm: return "g16B16R163plane420Unorm";
		case Format::g16B16r162plane420Unorm: return "g16B16r162plane420Unorm";
		case Format::g16B16R163plane422Unorm: return "g16B16R163plane422Unorm";
		case Format::g16B16r162plane422Unorm: return "g16B16r162plane422Unorm";
		case Format::g16B16R163plane444Unorm: return "g16B16R163plane444Unorm";
		case Format::g8B8r82plane444Unorm: return "g8B8r82plane444Unorm";
		case Format::g10x6B10x6r10x62plane444Unorm3pack16: return "g10x6B10x6r10x62plane444Unorm3pack16";
		case Format::g12x4B12x4r12x42plane444Unorm3pack16: return "g12x4B12x4r12x42plane444Unorm3pack16";
		case Format::g16B16r162plane444Unorm: return "g16B16r162plane444Unorm";
		case Format::a4r4g4b4UnormPack16: return "a4r4g4b4UnormPack16";
		case Format::a4b4g4r4UnormPack16: return "a4b4g4r4UnormPack16";
		case Format::astc4x4SfloatBlock: return "astc4x4SfloatBlock";
		case Format::astc5x4SfloatBlock: return "astc5x4SfloatBlock";
		case Format::astc5x5SfloatBlock: return "astc5x5SfloatBlock";
		case Format::astc6x5SfloatBlock: return "astc6x5SfloatBlock";
		case Format::astc6x6SfloatBlock: return "astc6x6SfloatBlock";
		case Format::astc8x5SfloatBlock: return "astc8x5SfloatBlock";
		case Format::astc8x6SfloatBlock: return "astc8x6SfloatBlock";
		case Format::astc8x8SfloatBlock: return "astc8x8SfloatBlock";
		case Format::astc10x5SfloatBlock: return "astc10x5SfloatBlock";
		case Format::astc10x6SfloatBlock: return "astc10x6SfloatBlock";
		case Format::astc10x8SfloatBlock: return "astc10x8SfloatBlock";
		case Format::astc10x10SfloatBlock: return "astc10x10SfloatBlock";
		case Format::astc12x10SfloatBlock: return "astc12x10SfloatBlock";
		case Format::astc12x12SfloatBlock: return "astc12x12SfloatBlock";
		case Format::a1b5g5r5UnormPack16: return "a1b5g5r5UnormPack16";
		case Format::a8Unorm: return "a8Unorm";
		case Format::pvrtc12bppUnormBlockIMG: return "pvrtc12bppUnormBlockIMG";
		case Format::pvrtc14bppUnormBlockIMG: return "pvrtc14bppUnormBlockIMG";
		case Format::pvrtc22bppUnormBlockIMG: return "pvrtc22bppUnormBlockIMG";
		case Format::pvrtc24bppUnormBlockIMG: return "pvrtc24bppUnormBlockIMG";
		case Format::pvrtc12bppSrgbBlockIMG: return "pvrtc12bppSrgbBlockIMG";
		case Format::pvrtc14bppSrgbBlockIMG: return "pvrtc14bppSrgbBlockIMG";
		case Format::pvrtc22bppSrgbBlockIMG: return "pvrtc22bppSrgbBlockIMG";
		case Format::pvrtc24bppSrgbBlockIMG: return "pvrtc24bppSrgbBlockIMG";
		case Format::astc3x3x3UnormBlockEXT: return "astc3x3x3UnormBlockEXT";
		case Format::astc3x3x3SrgbBlockEXT: return "astc3x3x3SrgbBlockEXT";
		case Format::astc3x3x3SfloatBlockEXT: return "astc3x3x3SfloatBlockEXT";
		case Format::astc4x3x3UnormBlockEXT: return "astc4x3x3UnormBlockEXT";
		case Format::astc4x3x3SrgbBlockEXT: return "astc4x3x3SrgbBlockEXT";
		case Format::astc4x3x3SfloatBlockEXT: return "astc4x3x3SfloatBlockEXT";
		case Format::astc4x4x3UnormBlockEXT: return "astc4x4x3UnormBlockEXT";
		case Format::astc4x4x3SrgbBlockEXT: return "astc4x4x3SrgbBlockEXT";
		case Format::astc4x4x3SfloatBlockEXT: return "astc4x4x3SfloatBlockEXT";
		case Format::astc4x4x4UnormBlockEXT: return "astc4x4x4UnormBlockEXT";
		case Format::astc4x4x4SrgbBlockEXT: return "astc4x4x4SrgbBlockEXT";
		case Format::astc4x4x4SfloatBlockEXT: return "astc4x4x4SfloatBlockEXT";
		case Format::astc5x4x4UnormBlockEXT: return "astc5x4x4UnormBlockEXT";
		case Format::astc5x4x4SrgbBlockEXT: return "astc5x4x4SrgbBlockEXT";
		case Format::astc5x4x4SfloatBlockEXT: return "astc5x4x4SfloatBlockEXT";
		case Format::astc5x5x4UnormBlockEXT: return "astc5x5x4UnormBlockEXT";
		case Format::astc5x5x4SrgbBlockEXT: return "astc5x5x4SrgbBlockEXT";
		case Format::astc5x5x4SfloatBlockEXT: return "astc5x5x4SfloatBlockEXT";
		case Format::astc5x5x5UnormBlockEXT: return "astc5x5x5UnormBlockEXT";
		case Format::astc5x5x5SrgbBlockEXT: return "astc5x5x5SrgbBlockEXT";
		case Format::astc5x5x5SfloatBlockEXT: return "astc5x5x5SfloatBlockEXT";
		case Format::astc6x5x5UnormBlockEXT: return "astc6x5x5UnormBlockEXT";
		case Format::astc6x5x5SrgbBlockEXT: return "astc6x5x5SrgbBlockEXT";
		case Format::astc6x5x5SfloatBlockEXT: return "astc6x5x5SfloatBlockEXT";
		case Format::astc6x6x5UnormBlockEXT: return "astc6x6x5UnormBlockEXT";
		case Format::astc6x6x5SrgbBlockEXT: return "astc6x6x5SrgbBlockEXT";
		case Format::astc6x6x5SfloatBlockEXT: return "astc6x6x5SfloatBlockEXT";
		case Format::astc6x6x6UnormBlockEXT: return "astc6x6x6UnormBlockEXT";
		case Format::astc6x6x6SrgbBlockEXT: return "astc6x6x6SrgbBlockEXT";
		case Format::astc6x6x6SfloatBlockEXT: return "astc6x6x6SfloatBlockEXT";
		case Format::r8BoolARM: return "r8BoolARM";
		case Format::r16SfloatFpencodingBfloat16ARM: return "r16SfloatFpencodingBfloat16ARM";
		case Format::r8SfloatFpencodingFloat8e4m3ARM: return "r8SfloatFpencodingFloat8e4m3ARM";
		case Format::r8SfloatFpencodingFloat8e5m2ARM: return "r8SfloatFpencodingFloat8e5m2ARM";
		case Format::r16g16Sfixed5NV: return "r16g16Sfixed5NV";
		case Format::r10x6UintPack16ARM: return "r10x6UintPack16ARM";
		case Format::r10x6g10x6Uint2pack16ARM: return "r10x6g10x6Uint2pack16ARM";
		case Format::r10x6g10x6b10x6a10x6Uint4pack16ARM: return "r10x6g10x6b10x6a10x6Uint4pack16ARM";
		case Format::r12x4UintPack16ARM: return "r12x4UintPack16ARM";
		case Format::r12x4g12x4Uint2pack16ARM: return "r12x4g12x4Uint2pack16ARM";
		case Format::r12x4g12x4b12x4a12x4Uint4pack16ARM: return "r12x4g12x4b12x4a12x4Uint4pack16ARM";
		case Format::r14x2UintPack16ARM: return "r14x2UintPack16ARM";
		case Format::r14x2g14x2Uint2pack16ARM: return "r14x2g14x2Uint2pack16ARM";
		case Format::r14x2g14x2b14x2a14x2Uint4pack16ARM: return "r14x2g14x2b14x2a14x2Uint4pack16ARM";
		case Format::r14x2UnormPack16ARM: return "r14x2UnormPack16ARM";
		case Format::r14x2g14x2Unorm2pack16ARM: return "r14x2g14x2Unorm2pack16ARM";
		case Format::r14x2g14x2b14x2a14x2Unorm4pack16ARM: return "r14x2g14x2b14x2a14x2Unorm4pack16ARM";
		case Format::g14x2B14x2r14x22plane420Unorm3pack16ARM: return "g14x2B14x2r14x22plane420Unorm3pack16ARM";
		case Format::g14x2B14x2r14x22plane422Unorm3pack16ARM: return "g14x2B14x2r14x22plane422Unorm3pack16ARM";
		default: return nullptr;
	}
}
inline const char* name(FormatFeatureBits val) {
	switch(val) {
		case FormatFeatureBits::sampledImage: return "sampledImage";
		case FormatFeatureBits::storageImage: return "storageImage";
		case FormatFeatureBits::storageImageAtomic: return "storageImageAtomic";
		case FormatFeatureBits::uniformTexelBuffer: return "uniformTexelBuffer";
		case FormatFeatureBits::storageTexelBuffer: return "storageTexelBuffer";
		case FormatFeatureBits::storageTexelBufferAtomic: return "storageTexelBufferAtomic";
		case FormatFeatureBits::vertexBuffer: return "vertexBuffer";
		case FormatFeatureBits::colorAttachment: return "colorAttachment";
		case FormatFeatureBits::colorAttachmentBlend: return "colorAttachmentBlend";
		case FormatFeatureBits::depthStencilAttachment: return "depthStencilAttachment";
		case FormatFeatureBits::blitSrc: return "blitSrc";
		case FormatFeatureBits::blitDst: return "blitDst";
		case FormatFeatureBits::sampledImageFilterLinear: return "sampledImageFilterLinear";
		case FormatFeatureBits::transferSrc: return "transferSrc";
		case FormatFeatureBits::transferDst: return "transferDst";
		case FormatFeatureBits::midpointChromaSamples: return "midpointChromaSamples";
		case FormatFeatureBits::sampledImageYcbcrConversionLinearFilter: return "sampledImageYcbcrConversionLinearFilter";
		case FormatFeatureBits::sampledImageYcbcrConversionSeparateReconstructionFilter: return "sampledImageYcbcrConversionSeparateReconstructionFilter";
		case FormatFeatureBits::sampledImageYcbcrConversionChromaReconstructionExplicit: return "sampledImageYcbcrConversionChromaReconstructionExplicit";
		case FormatFeatureBits::sampledImageYcbcrConversionChromaReconstructionExplicitForceable: return "sampledImageYcbcrConversionChromaReconstructionExplicitForceable";
		case FormatFeatureBits::disjoint: return "disjoint";
		case FormatFeatureBits::cositedChromaSamples: return "cositedChromaSamples";
		case FormatFeatureBits::sampledImageFilterMinmax: return "sampledImageFilterMinmax";
		case FormatFeatureBits::videoDecodeOutputKHR: return "videoDecodeOutputKHR";
		case FormatFeatureBits::videoDecodeDpbKHR: return "videoDecodeDpbKHR";
		case FormatFeatureBits::accelerationStructureVertexBufferKHR: return "accelerationStructureVertexBufferKHR";
		case FormatFeatureBits::sampledImageFilterCubicEXT: return "sampledImageFilterCubicEXT";
		case FormatFeatureBits::fragmentDensityMapEXT: return "fragmentDensityMapEXT";
		case FormatFeatureBits::fragmentShadingRateAttachmentKHR: return "fragmentShadingRateAttachmentKHR";
		case FormatFeatureBits::videoEncodeInputKHR: return "videoEncodeInputKHR";
		case FormatFeatureBits::videoEncodeDpbKHR: return "videoEncodeDpbKHR";
		default: return nullptr;
	}
}
inline const char* name(ImageCreateBits val) {
	switch(val) {
		case ImageCreateBits::sparseBinding: return "sparseBinding";
		case ImageCreateBits::sparseResidency: return "sparseResidency";
		case ImageCreateBits::sparseAliased: return "sparseAliased";
		case ImageCreateBits::mutableFormat: return "mutableFormat";
		case ImageCreateBits::cubeCompatible: return "cubeCompatible";
		case ImageCreateBits::alias: return "alias";
		case ImageCreateBits::splitInstanceBindRegions: return "splitInstanceBindRegions";
		case ImageCreateBits::e2dArrayCompatible: return "e2dArrayCompatible";
		case ImageCreateBits::blockTexelViewCompatible: return "blockTexelViewCompatible";
		case ImageCreateBits::extendedUsage: return "extendedUsage";
		case ImageCreateBits::eProtected: return "eProtected";
		case ImageCreateBits::disjoint: return "disjoint";
		case ImageCreateBits::cornerSampledNV: return "cornerSampledNV";
		case ImageCreateBits::descriptorHeapCaptureReplayEXT: return "descriptorHeapCaptureReplayEXT";
		case ImageCreateBits::sampleLocationsCompatibleDepthEXT: return "sampleLocationsCompatibleDepthEXT";
		case ImageCreateBits::subsampledEXT: return "subsampledEXT";
		case ImageCreateBits::multisampledRenderToSingleSampledEXT: return "multisampledRenderToSingleSampledEXT";
		case ImageCreateBits::e2dViewCompatibleEXT: return "e2dViewCompatibleEXT";
		case ImageCreateBits::videoProfileIndependentKHR: return "videoProfileIndependentKHR";
		case ImageCreateBits::fragmentDensityMapOffsetEXT: return "fragmentDensityMapOffsetEXT";
		case ImageCreateBits::aliasSingleLayerDescriptorKHR: return "aliasSingleLayerDescriptorKHR";
		default: return nullptr;
	}
}
inline const char* name(SampleCountBits val) {
	switch(val) {
		case SampleCountBits::e1: return "e1";
		case SampleCountBits::e2: return "e2";
		case SampleCountBits::e4: return "e4";
		case SampleCountBits::e8: return "e8";
		case SampleCountBits::e16: return "e16";
		case SampleCountBits::e32: return "e32";
		case SampleCountBits::e64: return "e64";
		default: return nullptr;
	}
}
inline const char* name(ImageTiling val) {
	switch(val) {
		case ImageTiling::optimal: return "optimal";
		case ImageTiling::linear: return "linear";
		case ImageTiling::drmFormatModifierEXT: return "drmFormatModifierEXT";
		default: return nullptr;
	}
}
inline const char* name(ImageType val) {
	switch(val) {
		case ImageType::e1d: return "e1d";
		case ImageType::e2d: return "e2d";
		case ImageType::e3d: return "e3d";
		default: return nullptr;
	}
}
inline const char* name(ImageUsageBits val) {
	switch(val) {
		case ImageUsageBits::transferSrc: return "transferSrc";
		case ImageUsageBits::transferDst: return "transferDst";
		case ImageUsageBits::sampled: return "sampled";
		case ImageUsageBits::storage: return "storage";
		case ImageUsageBits::colorAttachment: return "colorAttachment";
		case ImageUsageBits::depthStencilAttachment: return "depthStencilAttachment";
		case ImageUsageBits::transientAttachment: return "transientAttachment";
		case ImageUsageBits::inputAttachment: return "inputAttachment";
		case ImageUsageBits::hostTransfer: return "hostTransfer";
		case ImageUsageBits::videoDecodeDstKHR: return "videoDecodeDstKHR";
		case ImageUsageBits::videoDecodeSrcKHR: return "videoDecodeSrcKHR";
		case ImageUsageBits::videoDecodeDpbKHR: return "videoDecodeDpbKHR";
		case ImageUsageBits::fragmentDensityMapEXT: return "fragmentDensityMapEXT";
		case ImageUsageBits::fragmentShadingRateAttachmentKHR: return "fragmentShadingRateAttachmentKHR";
		case ImageUsageBits::videoEncodeDstKHR: return "videoEncodeDstKHR";
		case ImageUsageBits::videoEncodeSrcKHR: return "videoEncodeSrcKHR";
		case ImageUsageBits::videoEncodeDpbKHR: return "videoEncodeDpbKHR";
		case ImageUsageBits::attachmentFeedbackLoopEXT: return "attachmentFeedbackLoopEXT";
		case ImageUsageBits::invocationMaskHUAWEI: return "invocationMaskHUAWEI";
		case ImageUsageBits::sampleWeightQCOM: return "sampleWeightQCOM";
		case ImageUsageBits::sampleBlockMatchQCOM: return "sampleBlockMatchQCOM";
		case ImageUsageBits::tensorAliasingARM: return "tensorAliasingARM";
		case ImageUsageBits::tileMemoryQCOM: return "tileMemoryQCOM";
		case ImageUsageBits::videoEncodeQuantizationDeltaMapKHR: return "videoEncodeQuantizationDeltaMapKHR";
		case ImageUsageBits::videoEncodeEmphasisMapKHR: return "videoEncodeEmphasisMapKHR";
		default: return nullptr;
	}
}
inline const char* name(InstanceCreateBits val) {
	switch(val) {
		case InstanceCreateBits::enumeratePortabilityKHR: return "enumeratePortabilityKHR";
		default: return nullptr;
	}
}
inline const char* name(MemoryHeapBits val) {
	switch(val) {
		case MemoryHeapBits::deviceLocal: return "deviceLocal";
		case MemoryHeapBits::multiInstance: return "multiInstance";
		case MemoryHeapBits::seuSafe: return "seuSafe";
		case MemoryHeapBits::tileMemoryQCOM: return "tileMemoryQCOM";
		default: return nullptr;
	}
}
inline const char* name(MemoryPropertyBits val) {
	switch(val) {
		case MemoryPropertyBits::deviceLocal: return "deviceLocal";
		case MemoryPropertyBits::hostVisible: return "hostVisible";
		case MemoryPropertyBits::hostCoherent: return "hostCoherent";
		case MemoryPropertyBits::hostCached: return "hostCached";
		case MemoryPropertyBits::lazilyAllocated: return "lazilyAllocated";
		case MemoryPropertyBits::eProtected: return "eProtected";
		case MemoryPropertyBits::deviceCoherentAMD: return "deviceCoherentAMD";
		case MemoryPropertyBits::deviceUncachedAMD: return "deviceUncachedAMD";
		case MemoryPropertyBits::rdmaCapableNV: return "rdmaCapableNV";
		default: return nullptr;
	}
}
inline const char* name(PhysicalDeviceType val) {
	switch(val) {
		case PhysicalDeviceType::other: return "other";
		case PhysicalDeviceType::integratedGpu: return "integratedGpu";
		case PhysicalDeviceType::discreteGpu: return "discreteGpu";
		case PhysicalDeviceType::virtualGpu: return "virtualGpu";
		case PhysicalDeviceType::cpu: return "cpu";
		default: return nullptr;
	}
}
inline const char* name(QueueBits val) {
	switch(val) {
		case QueueBits::graphics: return "graphics";
		case QueueBits::compute: return "compute";
		case QueueBits::transfer: return "transfer";
		case QueueBits::sparseBinding: return "sparseBinding";
		case QueueBits::eProtected: return "eProtected";
		case QueueBits::videoDecodeKHR: return "videoDecodeKHR";
		case QueueBits::videoEncodeKHR: return "videoEncodeKHR";
		case QueueBits::opticalFlowNV: return "opticalFlowNV";
		case QueueBits::dataGraphARM: return "dataGraphARM";
		default: return nullptr;
	}
}
inline const char* name(ShaderStageBits val) {
	switch(val) {
		case ShaderStageBits::vertex: return "vertex";
		case ShaderStageBits::tessellationControl: return "tessellationControl";
		case ShaderStageBits::tessellationEvaluation: return "tessellationEvaluation";
		case ShaderStageBits::geometry: return "geometry";
		case ShaderStageBits::fragment: return "fragment";
		case ShaderStageBits::compute: return "compute";
		case ShaderStageBits::allGraphics: return "allGraphics";
		case ShaderStageBits::all: return "all";
		case ShaderStageBits::raygenKHR: return "raygenKHR";
		case ShaderStageBits::anyHitKHR: return "anyHitKHR";
		case ShaderStageBits::closestHitKHR: return "closestHitKHR";
		case ShaderStageBits::missKHR: return "missKHR";
		case ShaderStageBits::intersectionKHR: return "intersectionKHR";
		case ShaderStageBits::callableKHR: return "callableKHR";
		case ShaderStageBits::taskEXT: return "taskEXT";
		case ShaderStageBits::meshEXT: return "meshEXT";
		case ShaderStageBits::subpassShadingHUAWEI: return "subpassShadingHUAWEI";
		case ShaderStageBits::clusterCullingHUAWEI: return "clusterCullingHUAWEI";
		default: return nullptr;
	}
}
inline const char* name(DeviceQueueCreateBits val) {
	switch(val) {
		case DeviceQueueCreateBits::eProtected: return "eProtected";
		case DeviceQueueCreateBits::internallySynchronizedKHR: return "internallySynchronizedKHR";
		default: return nullptr;
	}
}
inline const char* name(PipelineStageBits val) {
	switch(val) {
		case PipelineStageBits::topOfPipe: return "topOfPipe";
		case PipelineStageBits::drawIndirect: return "drawIndirect";
		case PipelineStageBits::vertexInput: return "vertexInput";
		case PipelineStageBits::vertexShader: return "vertexShader";
		case PipelineStageBits::tessellationControlShader: return "tessellationControlShader";
		case PipelineStageBits::tessellationEvaluationShader: return "tessellationEvaluationShader";
		case PipelineStageBits::geometryShader: return "geometryShader";
		case PipelineStageBits::fragmentShader: return "fragmentShader";
		case PipelineStageBits::earlyFragmentTests: return "earlyFragmentTests";
		case PipelineStageBits::lateFragmentTests: return "lateFragmentTests";
		case PipelineStageBits::colorAttachmentOutput: return "colorAttachmentOutput";
		case PipelineStageBits::computeShader: return "computeShader";
		case PipelineStageBits::transfer: return "transfer";
		case PipelineStageBits::bottomOfPipe: return "bottomOfPipe";
		case PipelineStageBits::host: return "host";
		case PipelineStageBits::allGraphics: return "allGraphics";
		case PipelineStageBits::allCommands: return "allCommands";
		case PipelineStageBits::none: return "none";
		case PipelineStageBits::transformFeedbackEXT: return "transformFeedbackEXT";
		case PipelineStageBits::conditionalRenderingEXT: return "conditionalRenderingEXT";
		case PipelineStageBits::accelerationStructureBuildKHR: return "accelerationStructureBuildKHR";
		case PipelineStageBits::rayTracingShaderKHR: return "rayTracingShaderKHR";
		case PipelineStageBits::fragmentDensityProcessEXT: return "fragmentDensityProcessEXT";
		case PipelineStageBits::fragmentShadingRateAttachmentKHR: return "fragmentShadingRateAttachmentKHR";
		case PipelineStageBits::taskShaderEXT: return "taskShaderEXT";
		case PipelineStageBits::meshShaderEXT: return "meshShaderEXT";
		case PipelineStageBits::commandPreprocessEXT: return "commandPreprocessEXT";
		default: return nullptr;
	}
}
inline const char* name(MemoryMapBits val) {
	switch(val) {
		case MemoryMapBits::placedEXT: return "placedEXT";
		default: return nullptr;
	}
}
inline const char* name(ImageAspectBits val) {
	switch(val) {
		case ImageAspectBits::color: return "color";
		case ImageAspectBits::depth: return "depth";
		case ImageAspectBits::stencil: return "stencil";
		case ImageAspectBits::metadata: return "metadata";
		case ImageAspectBits::plane0: return "plane0";
		case ImageAspectBits::plane1: return "plane1";
		case ImageAspectBits::plane2: return "plane2";
		case ImageAspectBits::none: return "none";
		case ImageAspectBits::memoryPlane0EXT: return "memoryPlane0EXT";
		case ImageAspectBits::memoryPlane1EXT: return "memoryPlane1EXT";
		case ImageAspectBits::memoryPlane2EXT: return "memoryPlane2EXT";
		case ImageAspectBits::memoryPlane3EXT: return "memoryPlane3EXT";
		default: return nullptr;
	}
}
inline const char* name(SparseImageFormatBits val) {
	switch(val) {
		case SparseImageFormatBits::singleMiptail: return "singleMiptail";
		case SparseImageFormatBits::alignedMipSize: return "alignedMipSize";
		case SparseImageFormatBits::nonstandardBlockSize: return "nonstandardBlockSize";
		default: return nullptr;
	}
}
inline const char* name(SparseMemoryBindBits val) {
	switch(val) {
		case SparseMemoryBindBits::metadata: return "metadata";
		default: return nullptr;
	}
}
inline const char* name(FenceCreateBits val) {
	switch(val) {
		case FenceCreateBits::signaled: return "signaled";
		default: return nullptr;
	}
}
inline const char* name(QueryPoolCreateBits val) {
	switch(val) {
		case QueryPoolCreateBits::resetKHR: return "resetKHR";
		default: return nullptr;
	}
}
inline const char* name(QueryPipelineStatisticBits val) {
	switch(val) {
		case QueryPipelineStatisticBits::inputAssemblyVertices: return "inputAssemblyVertices";
		case QueryPipelineStatisticBits::inputAssemblyPrimitives: return "inputAssemblyPrimitives";
		case QueryPipelineStatisticBits::vertexShaderInvocations: return "vertexShaderInvocations";
		case QueryPipelineStatisticBits::geometryShaderInvocations: return "geometryShaderInvocations";
		case QueryPipelineStatisticBits::geometryShaderPrimitives: return "geometryShaderPrimitives";
		case QueryPipelineStatisticBits::clippingInvocations: return "clippingInvocations";
		case QueryPipelineStatisticBits::clippingPrimitives: return "clippingPrimitives";
		case QueryPipelineStatisticBits::fragmentShaderInvocations: return "fragmentShaderInvocations";
		case QueryPipelineStatisticBits::tessellationControlShaderPatches: return "tessellationControlShaderPatches";
		case QueryPipelineStatisticBits::tessellationEvaluationShaderInvocations: return "tessellationEvaluationShaderInvocations";
		case QueryPipelineStatisticBits::computeShaderInvocations: return "computeShaderInvocations";
		case QueryPipelineStatisticBits::taskShaderInvocationsEXT: return "taskShaderInvocationsEXT";
		case QueryPipelineStatisticBits::meshShaderInvocationsEXT: return "meshShaderInvocationsEXT";
		case QueryPipelineStatisticBits::clusterCullingShaderInvocationsHUAWEI: return "clusterCullingShaderInvocationsHUAWEI";
		default: return nullptr;
	}
}
inline const char* name(QueryType val) {
	switch(val) {
		case QueryType::occlusion: return "occlusion";
		case QueryType::pipelineStatistics: return "pipelineStatistics";
		case QueryType::timestamp: return "timestamp";
		case QueryType::resultStatusOnlyKHR: return "resultStatusOnlyKHR";
		case QueryType::transformFeedbackStreamEXT: return "transformFeedbackStreamEXT";
		case QueryType::performanceQueryKHR: return "performanceQueryKHR";
		case QueryType::accelerationStructureCompactedSizeKHR: return "accelerationStructureCompactedSizeKHR";
		case QueryType::accelerationStructureSerializationSizeKHR: return "accelerationStructureSerializationSizeKHR";
		case QueryType::accelerationStructureCompactedSizeNV: return "accelerationStructureCompactedSizeNV";
		case QueryType::performanceQueryINTEL: return "performanceQueryINTEL";
		case QueryType::videoEncodeFeedbackKHR: return "videoEncodeFeedbackKHR";
		case QueryType::meshPrimitivesGeneratedEXT: return "meshPrimitivesGeneratedEXT";
		case QueryType::primitivesGeneratedEXT: return "primitivesGeneratedEXT";
		case QueryType::accelerationStructureSerializationBottomLevelPointersKHR: return "accelerationStructureSerializationBottomLevelPointersKHR";
		case QueryType::accelerationStructureSizeKHR: return "accelerationStructureSizeKHR";
		case QueryType::micromapSerializationSizeEXT: return "micromapSerializationSizeEXT";
		case QueryType::micromapCompactedSizeEXT: return "micromapCompactedSizeEXT";
		default: return nullptr;
	}
}
inline const char* name(QueryResultBits val) {
	switch(val) {
		case QueryResultBits::e64: return "e64";
		case QueryResultBits::wait: return "wait";
		case QueryResultBits::withAvailability: return "withAvailability";
		case QueryResultBits::partial: return "partial";
		case QueryResultBits::withStatusKHR: return "withStatusKHR";
		default: return nullptr;
	}
}
inline const char* name(BufferCreateBits val) {
	switch(val) {
		case BufferCreateBits::sparseBinding: return "sparseBinding";
		case BufferCreateBits::sparseResidency: return "sparseResidency";
		case BufferCreateBits::sparseAliased: return "sparseAliased";
		case BufferCreateBits::eProtected: return "eProtected";
		case BufferCreateBits::deviceAddressCaptureReplay: return "deviceAddressCaptureReplay";
		case BufferCreateBits::descriptorBufferCaptureReplayEXT: return "descriptorBufferCaptureReplayEXT";
		case BufferCreateBits::videoProfileIndependentKHR: return "videoProfileIndependentKHR";
		default: return nullptr;
	}
}
inline const char* name(BufferUsageBits val) {
	switch(val) {
		case BufferUsageBits::transferSrc: return "transferSrc";
		case BufferUsageBits::transferDst: return "transferDst";
		case BufferUsageBits::uniformTexelBuffer: return "uniformTexelBuffer";
		case BufferUsageBits::storageTexelBuffer: return "storageTexelBuffer";
		case BufferUsageBits::uniformBuffer: return "uniformBuffer";
		case BufferUsageBits::storageBuffer: return "storageBuffer";
		case BufferUsageBits::indexBuffer: return "indexBuffer";
		case BufferUsageBits::vertexBuffer: return "vertexBuffer";
		case BufferUsageBits::indirectBuffer: return "indirectBuffer";
		case BufferUsageBits::shaderDeviceAddress: return "shaderDeviceAddress";
		case BufferUsageBits::videoDecodeSrcKHR: return "videoDecodeSrcKHR";
		case BufferUsageBits::videoDecodeDstKHR: return "videoDecodeDstKHR";
		case BufferUsageBits::transformFeedbackBufferEXT: return "transformFeedbackBufferEXT";
		case BufferUsageBits::transformFeedbackCounterBufferEXT: return "transformFeedbackCounterBufferEXT";
		case BufferUsageBits::conditionalRenderingEXT: return "conditionalRenderingEXT";
		case BufferUsageBits::descriptorHeapEXT: return "descriptorHeapEXT";
		case BufferUsageBits::accelerationStructureBuildInputReadOnlyKHR: return "accelerationStructureBuildInputReadOnlyKHR";
		case BufferUsageBits::accelerationStructureStorageKHR: return "accelerationStructureStorageKHR";
		case BufferUsageBits::shaderBindingTableKHR: return "shaderBindingTableKHR";
		case BufferUsageBits::videoEncodeDstKHR: return "videoEncodeDstKHR";
		case BufferUsageBits::videoEncodeSrcKHR: return "videoEncodeSrcKHR";
		case BufferUsageBits::samplerDescriptorBufferEXT: return "samplerDescriptorBufferEXT";
		case BufferUsageBits::resourceDescriptorBufferEXT: return "resourceDescriptorBufferEXT";
		case BufferUsageBits::pushDescriptorsDescriptorBufferEXT: return "pushDescriptorsDescriptorBufferEXT";
		case BufferUsageBits::micromapBuildInputReadOnlyEXT: return "micromapBuildInputReadOnlyEXT";
		case BufferUsageBits::micromapStorageEXT: return "micromapStorageEXT";
		case BufferUsageBits::tileMemoryQCOM: return "tileMemoryQCOM";
		default: return nullptr;
	}
}
inline const char* name(SharingMode val) {
	switch(val) {
		case SharingMode::exclusive: return "exclusive";
		case SharingMode::concurrent: return "concurrent";
		default: return nullptr;
	}
}
inline const char* name(ImageLayout val) {
	switch(val) {
		case ImageLayout::undefined: return "undefined";
		case ImageLayout::general: return "general";
		case ImageLayout::colorAttachmentOptimal: return "colorAttachmentOptimal";
		case ImageLayout::depthStencilAttachmentOptimal: return "depthStencilAttachmentOptimal";
		case ImageLayout::depthStencilReadOnlyOptimal: return "depthStencilReadOnlyOptimal";
		case ImageLayout::shaderReadOnlyOptimal: return "shaderReadOnlyOptimal";
		case ImageLayout::transferSrcOptimal: return "transferSrcOptimal";
		case ImageLayout::transferDstOptimal: return "transferDstOptimal";
		case ImageLayout::preinitialized: return "preinitialized";
		case ImageLayout::depthReadOnlyStencilAttachmentOptimal: return "depthReadOnlyStencilAttachmentOptimal";
		case ImageLayout::depthAttachmentStencilReadOnlyOptimal: return "depthAttachmentStencilReadOnlyOptimal";
		case ImageLayout::depthAttachmentOptimal: return "depthAttachmentOptimal";
		case ImageLayout::depthReadOnlyOptimal: return "depthReadOnlyOptimal";
		case ImageLayout::stencilAttachmentOptimal: return "stencilAttachmentOptimal";
		case ImageLayout::stencilReadOnlyOptimal: return "stencilReadOnlyOptimal";
		case ImageLayout::readOnlyOptimal: return "readOnlyOptimal";
		case ImageLayout::attachmentOptimal: return "attachmentOptimal";
		case ImageLayout::renderingLocalRead: return "renderingLocalRead";
		case ImageLayout::presentSrcKHR: return "presentSrcKHR";
		case ImageLayout::videoDecodeDstKHR: return "videoDecodeDstKHR";
		case ImageLayout::videoDecodeSrcKHR: return "videoDecodeSrcKHR";
		case ImageLayout::videoDecodeDpbKHR: return "videoDecodeDpbKHR";
		case ImageLayout::sharedPresentKHR: return "sharedPresentKHR";
		case ImageLayout::fragmentDensityMapOptimalEXT: return "fragmentDensityMapOptimalEXT";
		case ImageLayout::fragmentShadingRateAttachmentOptimalKHR: return "fragmentShadingRateAttachmentOptimalKHR";
		case ImageLayout::videoEncodeDstKHR: return "videoEncodeDstKHR";
		case ImageLayout::videoEncodeSrcKHR: return "videoEncodeSrcKHR";
		case ImageLayout::videoEncodeDpbKHR: return "videoEncodeDpbKHR";
		case ImageLayout::attachmentFeedbackLoopOptimalEXT: return "attachmentFeedbackLoopOptimalEXT";
		case ImageLayout::tensorAliasingARM: return "tensorAliasingARM";
		case ImageLayout::videoEncodeQuantizationMapKHR: return "videoEncodeQuantizationMapKHR";
		case ImageLayout::zeroInitializedEXT: return "zeroInitializedEXT";
		default: return nullptr;
	}
}
inline const char* name(ComponentSwizzle val) {
	switch(val) {
		case ComponentSwizzle::identity: return "identity";
		case ComponentSwizzle::zero: return "zero";
		case ComponentSwizzle::one: return "one";
		case ComponentSwizzle::r: return "r";
		case ComponentSwizzle::g: return "g";
		case ComponentSwizzle::b: return "b";
		case ComponentSwizzle::a: return "a";
		default: return nullptr;
	}
}
inline const char* name(ImageViewCreateBits val) {
	switch(val) {
		case ImageViewCreateBits::fragmentDensityMapDynamicEXT: return "fragmentDensityMapDynamicEXT";
		case ImageViewCreateBits::descriptorBufferCaptureReplayEXT: return "descriptorBufferCaptureReplayEXT";
		case ImageViewCreateBits::fragmentDensityMapDeferredEXT: return "fragmentDensityMapDeferredEXT";
		default: return nullptr;
	}
}
inline const char* name(ImageViewType val) {
	switch(val) {
		case ImageViewType::e1d: return "e1d";
		case ImageViewType::e2d: return "e2d";
		case ImageViewType::e3d: return "e3d";
		case ImageViewType::cube: return "cube";
		case ImageViewType::e1dArray: return "e1dArray";
		case ImageViewType::e2dArray: return "e2dArray";
		case ImageViewType::cubeArray: return "cubeArray";
		default: return nullptr;
	}
}
inline const char* name(AccessBits val) {
	switch(val) {
		case AccessBits::indirectCommandRead: return "indirectCommandRead";
		case AccessBits::indexRead: return "indexRead";
		case AccessBits::vertexAttributeRead: return "vertexAttributeRead";
		case AccessBits::uniformRead: return "uniformRead";
		case AccessBits::inputAttachmentRead: return "inputAttachmentRead";
		case AccessBits::shaderRead: return "shaderRead";
		case AccessBits::shaderWrite: return "shaderWrite";
		case AccessBits::colorAttachmentRead: return "colorAttachmentRead";
		case AccessBits::colorAttachmentWrite: return "colorAttachmentWrite";
		case AccessBits::depthStencilAttachmentRead: return "depthStencilAttachmentRead";
		case AccessBits::depthStencilAttachmentWrite: return "depthStencilAttachmentWrite";
		case AccessBits::transferRead: return "transferRead";
		case AccessBits::transferWrite: return "transferWrite";
		case AccessBits::hostRead: return "hostRead";
		case AccessBits::hostWrite: return "hostWrite";
		case AccessBits::memoryRead: return "memoryRead";
		case AccessBits::memoryWrite: return "memoryWrite";
		case AccessBits::none: return "none";
		case AccessBits::transformFeedbackWriteEXT: return "transformFeedbackWriteEXT";
		case AccessBits::transformFeedbackCounterReadEXT: return "transformFeedbackCounterReadEXT";
		case AccessBits::transformFeedbackCounterWriteEXT: return "transformFeedbackCounterWriteEXT";
		case AccessBits::conditionalRenderingReadEXT: return "conditionalRenderingReadEXT";
		case AccessBits::colorAttachmentReadNoncoherentEXT: return "colorAttachmentReadNoncoherentEXT";
		case AccessBits::accelerationStructureReadKHR: return "accelerationStructureReadKHR";
		case AccessBits::accelerationStructureWriteKHR: return "accelerationStructureWriteKHR";
		case AccessBits::fragmentDensityMapReadEXT: return "fragmentDensityMapReadEXT";
		case AccessBits::fragmentShadingRateAttachmentReadKHR: return "fragmentShadingRateAttachmentReadKHR";
		case AccessBits::commandPreprocessReadEXT: return "commandPreprocessReadEXT";
		case AccessBits::commandPreprocessWriteEXT: return "commandPreprocessWriteEXT";
		default: return nullptr;
	}
}
inline const char* name(DependencyBits val) {
	switch(val) {
		case DependencyBits::byRegion: return "byRegion";
		case DependencyBits::deviceGroup: return "deviceGroup";
		case DependencyBits::viewLocal: return "viewLocal";
		case DependencyBits::feedbackLoopEXT: return "feedbackLoopEXT";
		case DependencyBits::queueFamilyOwnershipTransferUseAllStagesKHR: return "queueFamilyOwnershipTransferUseAllStagesKHR";
		case DependencyBits::asymmetricEventKHR: return "asymmetricEventKHR";
		default: return nullptr;
	}
}
inline const char* name(CommandPoolCreateBits val) {
	switch(val) {
		case CommandPoolCreateBits::transient: return "transient";
		case CommandPoolCreateBits::resetCommandBuffer: return "resetCommandBuffer";
		case CommandPoolCreateBits::eProtected: return "eProtected";
		default: return nullptr;
	}
}
inline const char* name(CommandPoolResetBits val) {
	switch(val) {
		case CommandPoolResetBits::releaseResources: return "releaseResources";
		default: return nullptr;
	}
}
inline const char* name(CommandBufferLevel val) {
	switch(val) {
		case CommandBufferLevel::primary: return "primary";
		case CommandBufferLevel::secondary: return "secondary";
		default: return nullptr;
	}
}
inline const char* name(QueryControlBits val) {
	switch(val) {
		case QueryControlBits::precise: return "precise";
		default: return nullptr;
	}
}
inline const char* name(CommandBufferUsageBits val) {
	switch(val) {
		case CommandBufferUsageBits::oneTimeSubmit: return "oneTimeSubmit";
		case CommandBufferUsageBits::renderPassContinue: return "renderPassContinue";
		case CommandBufferUsageBits::simultaneousUse: return "simultaneousUse";
		default: return nullptr;
	}
}
inline const char* name(CommandBufferResetBits val) {
	switch(val) {
		case CommandBufferResetBits::releaseResources: return "releaseResources";
		default: return nullptr;
	}
}
inline const char* name(IndexType val) {
	switch(val) {
		case IndexType::uint16: return "uint16";
		case IndexType::uint32: return "uint32";
		case IndexType::uint8: return "uint8";
		case IndexType::noneKHR: return "noneKHR";
		default: return nullptr;
	}
}
inline std::string name(FormatFeatureFlags val) {
	std::string ret;
	if((val & FormatFeatureBits::sampledImage) == FormatFeatureBits::sampledImage) ret += "sampledImage | ";
	if((val & FormatFeatureBits::storageImage) == FormatFeatureBits::storageImage) ret += "storageImage | ";
	if((val & FormatFeatureBits::storageImageAtomic) == FormatFeatureBits::storageImageAtomic) ret += "storageImageAtomic | ";
	if((val & FormatFeatureBits::uniformTexelBuffer) == FormatFeatureBits::uniformTexelBuffer) ret += "uniformTexelBuffer | ";
	if((val & FormatFeatureBits::storageTexelBuffer) == FormatFeatureBits::storageTexelBuffer) ret += "storageTexelBuffer | ";
	if((val & FormatFeatureBits::storageTexelBufferAtomic) == FormatFeatureBits::storageTexelBufferAtomic) ret += "storageTexelBufferAtomic | ";
	if((val & FormatFeatureBits::vertexBuffer) == FormatFeatureBits::vertexBuffer) ret += "vertexBuffer | ";
	if((val & FormatFeatureBits::colorAttachment) == FormatFeatureBits::colorAttachment) ret += "colorAttachment | ";
	if((val & FormatFeatureBits::colorAttachmentBlend) == FormatFeatureBits::colorAttachmentBlend) ret += "colorAttachmentBlend | ";
	if((val & FormatFeatureBits::depthStencilAttachment) == FormatFeatureBits::depthStencilAttachment) ret += "depthStencilAttachment | ";
	if((val & FormatFeatureBits::blitSrc) == FormatFeatureBits::blitSrc) ret += "blitSrc | ";
	if((val & FormatFeatureBits::blitDst) == FormatFeatureBits::blitDst) ret += "blitDst | ";
	if((val & FormatFeatureBits::sampledImageFilterLinear) == FormatFeatureBits::sampledImageFilterLinear) ret += "sampledImageFilterLinear | ";
	if((val & FormatFeatureBits::transferSrc) == FormatFeatureBits::transferSrc) ret += "transferSrc | ";
	if((val & FormatFeatureBits::transferDst) == FormatFeatureBits::transferDst) ret += "transferDst | ";
	if((val & FormatFeatureBits::midpointChromaSamples) == FormatFeatureBits::midpointChromaSamples) ret += "midpointChromaSamples | ";
	if((val & FormatFeatureBits::sampledImageYcbcrConversionLinearFilter) == FormatFeatureBits::sampledImageYcbcrConversionLinearFilter) ret += "sampledImageYcbcrConversionLinearFilter | ";
	if((val & FormatFeatureBits::sampledImageYcbcrConversionSeparateReconstructionFilter) == FormatFeatureBits::sampledImageYcbcrConversionSeparateReconstructionFilter) ret += "sampledImageYcbcrConversionSeparateReconstructionFilter | ";
	if((val & FormatFeatureBits::sampledImageYcbcrConversionChromaReconstructionExplicit) == FormatFeatureBits::sampledImageYcbcrConversionChromaReconstructionExplicit) ret += "sampledImageYcbcrConversionChromaReconstructionExplicit | ";
	if((val & FormatFeatureBits::sampledImageYcbcrConversionChromaReconstructionExplicitForceable) == FormatFeatureBits::sampledImageYcbcrConversionChromaReconstructionExplicitForceable) ret += "sampledImageYcbcrConversionChromaReconstructionExplicitForceable | ";
	if((val & FormatFeatureBits::disjoint) == FormatFeatureBits::disjoint) ret += "disjoint | ";
	if((val & FormatFeatureBits::cositedChromaSamples) == FormatFeatureBits::cositedChromaSamples) ret += "cositedChromaSamples | ";
	if((val & FormatFeatureBits::sampledImageFilterMinmax) == FormatFeatureBits::sampledImageFilterMinmax) ret += "sampledImageFilterMinmax | ";
	if((val & FormatFeatureBits::videoDecodeOutputKHR) == FormatFeatureBits::videoDecodeOutputKHR) ret += "videoDecodeOutputKHR | ";
	if((val & FormatFeatureBits::videoDecodeDpbKHR) == FormatFeatureBits::videoDecodeDpbKHR) ret += "videoDecodeDpbKHR | ";
	if((val & FormatFeatureBits::accelerationStructureVertexBufferKHR) == FormatFeatureBits::accelerationStructureVertexBufferKHR) ret += "accelerationStructureVertexBufferKHR | ";
	if((val & FormatFeatureBits::sampledImageFilterCubicEXT) == FormatFeatureBits::sampledImageFilterCubicEXT) ret += "sampledImageFilterCubicEXT | ";
	if((val & FormatFeatureBits::fragmentDensityMapEXT) == FormatFeatureBits::fragmentDensityMapEXT) ret += "fragmentDensityMapEXT | ";
	if((val & FormatFeatureBits::fragmentShadingRateAttachmentKHR) == FormatFeatureBits::fragmentShadingRateAttachmentKHR) ret += "fragmentShadingRateAttachmentKHR | ";
	if((val & FormatFeatureBits::videoEncodeInputKHR) == FormatFeatureBits::videoEncodeInputKHR) ret += "videoEncodeInputKHR | ";
	if((val & FormatFeatureBits::videoEncodeDpbKHR) == FormatFeatureBits::videoEncodeDpbKHR) ret += "videoEncodeDpbKHR | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(ImageCreateFlags val) {
	std::string ret;
	if((val & ImageCreateBits::sparseBinding) == ImageCreateBits::sparseBinding) ret += "sparseBinding | ";
	if((val & ImageCreateBits::sparseResidency) == ImageCreateBits::sparseResidency) ret += "sparseResidency | ";
	if((val & ImageCreateBits::sparseAliased) == ImageCreateBits::sparseAliased) ret += "sparseAliased | ";
	if((val & ImageCreateBits::mutableFormat) == ImageCreateBits::mutableFormat) ret += "mutableFormat | ";
	if((val & ImageCreateBits::cubeCompatible) == ImageCreateBits::cubeCompatible) ret += "cubeCompatible | ";
	if((val & ImageCreateBits::alias) == ImageCreateBits::alias) ret += "alias | ";
	if((val & ImageCreateBits::splitInstanceBindRegions) == ImageCreateBits::splitInstanceBindRegions) ret += "splitInstanceBindRegions | ";
	if((val & ImageCreateBits::e2dArrayCompatible) == ImageCreateBits::e2dArrayCompatible) ret += "e2dArrayCompatible | ";
	if((val & ImageCreateBits::blockTexelViewCompatible) == ImageCreateBits::blockTexelViewCompatible) ret += "blockTexelViewCompatible | ";
	if((val & ImageCreateBits::extendedUsage) == ImageCreateBits::extendedUsage) ret += "extendedUsage | ";
	if((val & ImageCreateBits::eProtected) == ImageCreateBits::eProtected) ret += "eProtected | ";
	if((val & ImageCreateBits::disjoint) == ImageCreateBits::disjoint) ret += "disjoint | ";
	if((val & ImageCreateBits::cornerSampledNV) == ImageCreateBits::cornerSampledNV) ret += "cornerSampledNV | ";
	if((val & ImageCreateBits::descriptorHeapCaptureReplayEXT) == ImageCreateBits::descriptorHeapCaptureReplayEXT) ret += "descriptorHeapCaptureReplayEXT | ";
	if((val & ImageCreateBits::sampleLocationsCompatibleDepthEXT) == ImageCreateBits::sampleLocationsCompatibleDepthEXT) ret += "sampleLocationsCompatibleDepthEXT | ";
	if((val & ImageCreateBits::subsampledEXT) == ImageCreateBits::subsampledEXT) ret += "subsampledEXT | ";
	if((val & ImageCreateBits::multisampledRenderToSingleSampledEXT) == ImageCreateBits::multisampledRenderToSingleSampledEXT) ret += "multisampledRenderToSingleSampledEXT | ";
	if((val & ImageCreateBits::e2dViewCompatibleEXT) == ImageCreateBits::e2dViewCompatibleEXT) ret += "e2dViewCompatibleEXT | ";
	if((val & ImageCreateBits::videoProfileIndependentKHR) == ImageCreateBits::videoProfileIndependentKHR) ret += "videoProfileIndependentKHR | ";
	if((val & ImageCreateBits::fragmentDensityMapOffsetEXT) == ImageCreateBits::fragmentDensityMapOffsetEXT) ret += "fragmentDensityMapOffsetEXT | ";
	if((val & ImageCreateBits::aliasSingleLayerDescriptorKHR) == ImageCreateBits::aliasSingleLayerDescriptorKHR) ret += "aliasSingleLayerDescriptorKHR | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(SampleCountFlags val) {
	std::string ret;
	if((val & SampleCountBits::e1) == SampleCountBits::e1) ret += "e1 | ";
	if((val & SampleCountBits::e2) == SampleCountBits::e2) ret += "e2 | ";
	if((val & SampleCountBits::e4) == SampleCountBits::e4) ret += "e4 | ";
	if((val & SampleCountBits::e8) == SampleCountBits::e8) ret += "e8 | ";
	if((val & SampleCountBits::e16) == SampleCountBits::e16) ret += "e16 | ";
	if((val & SampleCountBits::e32) == SampleCountBits::e32) ret += "e32 | ";
	if((val & SampleCountBits::e64) == SampleCountBits::e64) ret += "e64 | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(ImageUsageFlags val) {
	std::string ret;
	if((val & ImageUsageBits::transferSrc) == ImageUsageBits::transferSrc) ret += "transferSrc | ";
	if((val & ImageUsageBits::transferDst) == ImageUsageBits::transferDst) ret += "transferDst | ";
	if((val & ImageUsageBits::sampled) == ImageUsageBits::sampled) ret += "sampled | ";
	if((val & ImageUsageBits::storage) == ImageUsageBits::storage) ret += "storage | ";
	if((val & ImageUsageBits::colorAttachment) == ImageUsageBits::colorAttachment) ret += "colorAttachment | ";
	if((val & ImageUsageBits::depthStencilAttachment) == ImageUsageBits::depthStencilAttachment) ret += "depthStencilAttachment | ";
	if((val & ImageUsageBits::transientAttachment) == ImageUsageBits::transientAttachment) ret += "transientAttachment | ";
	if((val & ImageUsageBits::inputAttachment) == ImageUsageBits::inputAttachment) ret += "inputAttachment | ";
	if((val & ImageUsageBits::hostTransfer) == ImageUsageBits::hostTransfer) ret += "hostTransfer | ";
	if((val & ImageUsageBits::videoDecodeDstKHR) == ImageUsageBits::videoDecodeDstKHR) ret += "videoDecodeDstKHR | ";
	if((val & ImageUsageBits::videoDecodeSrcKHR) == ImageUsageBits::videoDecodeSrcKHR) ret += "videoDecodeSrcKHR | ";
	if((val & ImageUsageBits::videoDecodeDpbKHR) == ImageUsageBits::videoDecodeDpbKHR) ret += "videoDecodeDpbKHR | ";
	if((val & ImageUsageBits::fragmentDensityMapEXT) == ImageUsageBits::fragmentDensityMapEXT) ret += "fragmentDensityMapEXT | ";
	if((val & ImageUsageBits::fragmentShadingRateAttachmentKHR) == ImageUsageBits::fragmentShadingRateAttachmentKHR) ret += "fragmentShadingRateAttachmentKHR | ";
	if((val & ImageUsageBits::videoEncodeDstKHR) == ImageUsageBits::videoEncodeDstKHR) ret += "videoEncodeDstKHR | ";
	if((val & ImageUsageBits::videoEncodeSrcKHR) == ImageUsageBits::videoEncodeSrcKHR) ret += "videoEncodeSrcKHR | ";
	if((val & ImageUsageBits::videoEncodeDpbKHR) == ImageUsageBits::videoEncodeDpbKHR) ret += "videoEncodeDpbKHR | ";
	if((val & ImageUsageBits::attachmentFeedbackLoopEXT) == ImageUsageBits::attachmentFeedbackLoopEXT) ret += "attachmentFeedbackLoopEXT | ";
	if((val & ImageUsageBits::invocationMaskHUAWEI) == ImageUsageBits::invocationMaskHUAWEI) ret += "invocationMaskHUAWEI | ";
	if((val & ImageUsageBits::sampleWeightQCOM) == ImageUsageBits::sampleWeightQCOM) ret += "sampleWeightQCOM | ";
	if((val & ImageUsageBits::sampleBlockMatchQCOM) == ImageUsageBits::sampleBlockMatchQCOM) ret += "sampleBlockMatchQCOM | ";
	if((val & ImageUsageBits::tensorAliasingARM) == ImageUsageBits::tensorAliasingARM) ret += "tensorAliasingARM | ";
	if((val & ImageUsageBits::tileMemoryQCOM) == ImageUsageBits::tileMemoryQCOM) ret += "tileMemoryQCOM | ";
	if((val & ImageUsageBits::videoEncodeQuantizationDeltaMapKHR) == ImageUsageBits::videoEncodeQuantizationDeltaMapKHR) ret += "videoEncodeQuantizationDeltaMapKHR | ";
	if((val & ImageUsageBits::videoEncodeEmphasisMapKHR) == ImageUsageBits::videoEncodeEmphasisMapKHR) ret += "videoEncodeEmphasisMapKHR | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(InstanceCreateFlags val) {
	std::string ret;
	if((val & InstanceCreateBits::enumeratePortabilityKHR) == InstanceCreateBits::enumeratePortabilityKHR) ret += "enumeratePortabilityKHR | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(MemoryHeapFlags val) {
	std::string ret;
	if((val & MemoryHeapBits::deviceLocal) == MemoryHeapBits::deviceLocal) ret += "deviceLocal | ";
	if((val & MemoryHeapBits::multiInstance) == MemoryHeapBits::multiInstance) ret += "multiInstance | ";
	if((val & MemoryHeapBits::seuSafe) == MemoryHeapBits::seuSafe) ret += "seuSafe | ";
	if((val & MemoryHeapBits::tileMemoryQCOM) == MemoryHeapBits::tileMemoryQCOM) ret += "tileMemoryQCOM | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(MemoryPropertyFlags val) {
	std::string ret;
	if((val & MemoryPropertyBits::deviceLocal) == MemoryPropertyBits::deviceLocal) ret += "deviceLocal | ";
	if((val & MemoryPropertyBits::hostVisible) == MemoryPropertyBits::hostVisible) ret += "hostVisible | ";
	if((val & MemoryPropertyBits::hostCoherent) == MemoryPropertyBits::hostCoherent) ret += "hostCoherent | ";
	if((val & MemoryPropertyBits::hostCached) == MemoryPropertyBits::hostCached) ret += "hostCached | ";
	if((val & MemoryPropertyBits::lazilyAllocated) == MemoryPropertyBits::lazilyAllocated) ret += "lazilyAllocated | ";
	if((val & MemoryPropertyBits::eProtected) == MemoryPropertyBits::eProtected) ret += "eProtected | ";
	if((val & MemoryPropertyBits::deviceCoherentAMD) == MemoryPropertyBits::deviceCoherentAMD) ret += "deviceCoherentAMD | ";
	if((val & MemoryPropertyBits::deviceUncachedAMD) == MemoryPropertyBits::deviceUncachedAMD) ret += "deviceUncachedAMD | ";
	if((val & MemoryPropertyBits::rdmaCapableNV) == MemoryPropertyBits::rdmaCapableNV) ret += "rdmaCapableNV | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(QueueFlags val) {
	std::string ret;
	if((val & QueueBits::graphics) == QueueBits::graphics) ret += "graphics | ";
	if((val & QueueBits::compute) == QueueBits::compute) ret += "compute | ";
	if((val & QueueBits::transfer) == QueueBits::transfer) ret += "transfer | ";
	if((val & QueueBits::sparseBinding) == QueueBits::sparseBinding) ret += "sparseBinding | ";
	if((val & QueueBits::eProtected) == QueueBits::eProtected) ret += "eProtected | ";
	if((val & QueueBits::videoDecodeKHR) == QueueBits::videoDecodeKHR) ret += "videoDecodeKHR | ";
	if((val & QueueBits::videoEncodeKHR) == QueueBits::videoEncodeKHR) ret += "videoEncodeKHR | ";
	if((val & QueueBits::opticalFlowNV) == QueueBits::opticalFlowNV) ret += "opticalFlowNV | ";
	if((val & QueueBits::dataGraphARM) == QueueBits::dataGraphARM) ret += "dataGraphARM | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(ShaderStageFlags val) {
	std::string ret;
	if((val & ShaderStageBits::vertex) == ShaderStageBits::vertex) ret += "vertex | ";
	if((val & ShaderStageBits::tessellationControl) == ShaderStageBits::tessellationControl) ret += "tessellationControl | ";
	if((val & ShaderStageBits::tessellationEvaluation) == ShaderStageBits::tessellationEvaluation) ret += "tessellationEvaluation | ";
	if((val & ShaderStageBits::geometry) == ShaderStageBits::geometry) ret += "geometry | ";
	if((val & ShaderStageBits::fragment) == ShaderStageBits::fragment) ret += "fragment | ";
	if((val & ShaderStageBits::compute) == ShaderStageBits::compute) ret += "compute | ";
	if((val & ShaderStageBits::allGraphics) == ShaderStageBits::allGraphics) ret += "allGraphics | ";
	if((val & ShaderStageBits::all) == ShaderStageBits::all) ret += "all | ";
	if((val & ShaderStageBits::raygenKHR) == ShaderStageBits::raygenKHR) ret += "raygenKHR | ";
	if((val & ShaderStageBits::anyHitKHR) == ShaderStageBits::anyHitKHR) ret += "anyHitKHR | ";
	if((val & ShaderStageBits::closestHitKHR) == ShaderStageBits::closestHitKHR) ret += "closestHitKHR | ";
	if((val & ShaderStageBits::missKHR) == ShaderStageBits::missKHR) ret += "missKHR | ";
	if((val & ShaderStageBits::intersectionKHR) == ShaderStageBits::intersectionKHR) ret += "intersectionKHR | ";
	if((val & ShaderStageBits::callableKHR) == ShaderStageBits::callableKHR) ret += "callableKHR | ";
	if((val & ShaderStageBits::taskEXT) == ShaderStageBits::taskEXT) ret += "taskEXT | ";
	if((val & ShaderStageBits::meshEXT) == ShaderStageBits::meshEXT) ret += "meshEXT | ";
	if((val & ShaderStageBits::subpassShadingHUAWEI) == ShaderStageBits::subpassShadingHUAWEI) ret += "subpassShadingHUAWEI | ";
	if((val & ShaderStageBits::clusterCullingHUAWEI) == ShaderStageBits::clusterCullingHUAWEI) ret += "clusterCullingHUAWEI | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(DeviceQueueCreateFlags val) {
	std::string ret;
	if((val & DeviceQueueCreateBits::eProtected) == DeviceQueueCreateBits::eProtected) ret += "eProtected | ";
	if((val & DeviceQueueCreateBits::internallySynchronizedKHR) == DeviceQueueCreateBits::internallySynchronizedKHR) ret += "internallySynchronizedKHR | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(PipelineStageFlags val) {
	std::string ret;
	if((val & PipelineStageBits::topOfPipe) == PipelineStageBits::topOfPipe) ret += "topOfPipe | ";
	if((val & PipelineStageBits::drawIndirect) == PipelineStageBits::drawIndirect) ret += "drawIndirect | ";
	if((val & PipelineStageBits::vertexInput) == PipelineStageBits::vertexInput) ret += "vertexInput | ";
	if((val & PipelineStageBits::vertexShader) == PipelineStageBits::vertexShader) ret += "vertexShader | ";
	if((val & PipelineStageBits::tessellationControlShader) == PipelineStageBits::tessellationControlShader) ret += "tessellationControlShader | ";
	if((val & PipelineStageBits::tessellationEvaluationShader) == PipelineStageBits::tessellationEvaluationShader) ret += "tessellationEvaluationShader | ";
	if((val & PipelineStageBits::geometryShader) == PipelineStageBits::geometryShader) ret += "geometryShader | ";
	if((val & PipelineStageBits::fragmentShader) == PipelineStageBits::fragmentShader) ret += "fragmentShader | ";
	if((val & PipelineStageBits::earlyFragmentTests) == PipelineStageBits::earlyFragmentTests) ret += "earlyFragmentTests | ";
	if((val & PipelineStageBits::lateFragmentTests) == PipelineStageBits::lateFragmentTests) ret += "lateFragmentTests | ";
	if((val & PipelineStageBits::colorAttachmentOutput) == PipelineStageBits::colorAttachmentOutput) ret += "colorAttachmentOutput | ";
	if((val & PipelineStageBits::computeShader) == PipelineStageBits::computeShader) ret += "computeShader | ";
	if((val & PipelineStageBits::transfer) == PipelineStageBits::transfer) ret += "transfer | ";
	if((val & PipelineStageBits::bottomOfPipe) == PipelineStageBits::bottomOfPipe) ret += "bottomOfPipe | ";
	if((val & PipelineStageBits::host) == PipelineStageBits::host) ret += "host | ";
	if((val & PipelineStageBits::allGraphics) == PipelineStageBits::allGraphics) ret += "allGraphics | ";
	if((val & PipelineStageBits::allCommands) == PipelineStageBits::allCommands) ret += "allCommands | ";
	if((val & PipelineStageBits::none) == PipelineStageBits::none) ret += "none | ";
	if((val & PipelineStageBits::transformFeedbackEXT) == PipelineStageBits::transformFeedbackEXT) ret += "transformFeedbackEXT | ";
	if((val & PipelineStageBits::conditionalRenderingEXT) == PipelineStageBits::conditionalRenderingEXT) ret += "conditionalRenderingEXT | ";
	if((val & PipelineStageBits::accelerationStructureBuildKHR) == PipelineStageBits::accelerationStructureBuildKHR) ret += "accelerationStructureBuildKHR | ";
	if((val & PipelineStageBits::rayTracingShaderKHR) == PipelineStageBits::rayTracingShaderKHR) ret += "rayTracingShaderKHR | ";
	if((val & PipelineStageBits::fragmentDensityProcessEXT) == PipelineStageBits::fragmentDensityProcessEXT) ret += "fragmentDensityProcessEXT | ";
	if((val & PipelineStageBits::fragmentShadingRateAttachmentKHR) == PipelineStageBits::fragmentShadingRateAttachmentKHR) ret += "fragmentShadingRateAttachmentKHR | ";
	if((val & PipelineStageBits::taskShaderEXT) == PipelineStageBits::taskShaderEXT) ret += "taskShaderEXT | ";
	if((val & PipelineStageBits::meshShaderEXT) == PipelineStageBits::meshShaderEXT) ret += "meshShaderEXT | ";
	if((val & PipelineStageBits::commandPreprocessEXT) == PipelineStageBits::commandPreprocessEXT) ret += "commandPreprocessEXT | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(MemoryMapFlags val) {
	std::string ret;
	if((val & MemoryMapBits::placedEXT) == MemoryMapBits::placedEXT) ret += "placedEXT | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(ImageAspectFlags val) {
	std::string ret;
	if((val & ImageAspectBits::color) == ImageAspectBits::color) ret += "color | ";
	if((val & ImageAspectBits::depth) == ImageAspectBits::depth) ret += "depth | ";
	if((val & ImageAspectBits::stencil) == ImageAspectBits::stencil) ret += "stencil | ";
	if((val & ImageAspectBits::metadata) == ImageAspectBits::metadata) ret += "metadata | ";
	if((val & ImageAspectBits::plane0) == ImageAspectBits::plane0) ret += "plane0 | ";
	if((val & ImageAspectBits::plane1) == ImageAspectBits::plane1) ret += "plane1 | ";
	if((val & ImageAspectBits::plane2) == ImageAspectBits::plane2) ret += "plane2 | ";
	if((val & ImageAspectBits::none) == ImageAspectBits::none) ret += "none | ";
	if((val & ImageAspectBits::memoryPlane0EXT) == ImageAspectBits::memoryPlane0EXT) ret += "memoryPlane0EXT | ";
	if((val & ImageAspectBits::memoryPlane1EXT) == ImageAspectBits::memoryPlane1EXT) ret += "memoryPlane1EXT | ";
	if((val & ImageAspectBits::memoryPlane2EXT) == ImageAspectBits::memoryPlane2EXT) ret += "memoryPlane2EXT | ";
	if((val & ImageAspectBits::memoryPlane3EXT) == ImageAspectBits::memoryPlane3EXT) ret += "memoryPlane3EXT | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(SparseImageFormatFlags val) {
	std::string ret;
	if((val & SparseImageFormatBits::singleMiptail) == SparseImageFormatBits::singleMiptail) ret += "singleMiptail | ";
	if((val & SparseImageFormatBits::alignedMipSize) == SparseImageFormatBits::alignedMipSize) ret += "alignedMipSize | ";
	if((val & SparseImageFormatBits::nonstandardBlockSize) == SparseImageFormatBits::nonstandardBlockSize) ret += "nonstandardBlockSize | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(SparseMemoryBindFlags val) {
	std::string ret;
	if((val & SparseMemoryBindBits::metadata) == SparseMemoryBindBits::metadata) ret += "metadata | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(FenceCreateFlags val) {
	std::string ret;
	if((val & FenceCreateBits::signaled) == FenceCreateBits::signaled) ret += "signaled | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(QueryPoolCreateFlags val) {
	std::string ret;
	if((val & QueryPoolCreateBits::resetKHR) == QueryPoolCreateBits::resetKHR) ret += "resetKHR | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(QueryPipelineStatisticFlags val) {
	std::string ret;
	if((val & QueryPipelineStatisticBits::inputAssemblyVertices) == QueryPipelineStatisticBits::inputAssemblyVertices) ret += "inputAssemblyVertices | ";
	if((val & QueryPipelineStatisticBits::inputAssemblyPrimitives) == QueryPipelineStatisticBits::inputAssemblyPrimitives) ret += "inputAssemblyPrimitives | ";
	if((val & QueryPipelineStatisticBits::vertexShaderInvocations) == QueryPipelineStatisticBits::vertexShaderInvocations) ret += "vertexShaderInvocations | ";
	if((val & QueryPipelineStatisticBits::geometryShaderInvocations) == QueryPipelineStatisticBits::geometryShaderInvocations) ret += "geometryShaderInvocations | ";
	if((val & QueryPipelineStatisticBits::geometryShaderPrimitives) == QueryPipelineStatisticBits::geometryShaderPrimitives) ret += "geometryShaderPrimitives | ";
	if((val & QueryPipelineStatisticBits::clippingInvocations) == QueryPipelineStatisticBits::clippingInvocations) ret += "clippingInvocations | ";
	if((val & QueryPipelineStatisticBits::clippingPrimitives) == QueryPipelineStatisticBits::clippingPrimitives) ret += "clippingPrimitives | ";
	if((val & QueryPipelineStatisticBits::fragmentShaderInvocations) == QueryPipelineStatisticBits::fragmentShaderInvocations) ret += "fragmentShaderInvocations | ";
	if((val & QueryPipelineStatisticBits::tessellationControlShaderPatches) == QueryPipelineStatisticBits::tessellationControlShaderPatches) ret += "tessellationControlShaderPatches | ";
	if((val & QueryPipelineStatisticBits::tessellationEvaluationShaderInvocations) == QueryPipelineStatisticBits::tessellationEvaluationShaderInvocations) ret += "tessellationEvaluationShaderInvocations | ";
	if((val & QueryPipelineStatisticBits::computeShaderInvocations) == QueryPipelineStatisticBits::computeShaderInvocations) ret += "computeShaderInvocations | ";
	if((val & QueryPipelineStatisticBits::taskShaderInvocationsEXT) == QueryPipelineStatisticBits::taskShaderInvocationsEXT) ret += "taskShaderInvocationsEXT | ";
	if((val & QueryPipelineStatisticBits::meshShaderInvocationsEXT) == QueryPipelineStatisticBits::meshShaderInvocationsEXT) ret += "meshShaderInvocationsEXT | ";
	if((val & QueryPipelineStatisticBits::clusterCullingShaderInvocationsHUAWEI) == QueryPipelineStatisticBits::clusterCullingShaderInvocationsHUAWEI) ret += "clusterCullingShaderInvocationsHUAWEI | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(QueryResultFlags val) {
	std::string ret;
	if((val & QueryResultBits::e64) == QueryResultBits::e64) ret += "e64 | ";
	if((val & QueryResultBits::wait) == QueryResultBits::wait) ret += "wait | ";
	if((val & QueryResultBits::withAvailability) == QueryResultBits::withAvailability) ret += "withAvailability | ";
	if((val & QueryResultBits::partial) == QueryResultBits::partial) ret += "partial | ";
	if((val & QueryResultBits::withStatusKHR) == QueryResultBits::withStatusKHR) ret += "withStatusKHR | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(BufferCreateFlags val) {
	std::string ret;
	if((val & BufferCreateBits::sparseBinding) == BufferCreateBits::sparseBinding) ret += "sparseBinding | ";
	if((val & BufferCreateBits::sparseResidency) == BufferCreateBits::sparseResidency) ret += "sparseResidency | ";
	if((val & BufferCreateBits::sparseAliased) == BufferCreateBits::sparseAliased) ret += "sparseAliased | ";
	if((val & BufferCreateBits::eProtected) == BufferCreateBits::eProtected) ret += "eProtected | ";
	if((val & BufferCreateBits::deviceAddressCaptureReplay) == BufferCreateBits::deviceAddressCaptureReplay) ret += "deviceAddressCaptureReplay | ";
	if((val & BufferCreateBits::descriptorBufferCaptureReplayEXT) == BufferCreateBits::descriptorBufferCaptureReplayEXT) ret += "descriptorBufferCaptureReplayEXT | ";
	if((val & BufferCreateBits::videoProfileIndependentKHR) == BufferCreateBits::videoProfileIndependentKHR) ret += "videoProfileIndependentKHR | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(BufferUsageFlags val) {
	std::string ret;
	if((val & BufferUsageBits::transferSrc) == BufferUsageBits::transferSrc) ret += "transferSrc | ";
	if((val & BufferUsageBits::transferDst) == BufferUsageBits::transferDst) ret += "transferDst | ";
	if((val & BufferUsageBits::uniformTexelBuffer) == BufferUsageBits::uniformTexelBuffer) ret += "uniformTexelBuffer | ";
	if((val & BufferUsageBits::storageTexelBuffer) == BufferUsageBits::storageTexelBuffer) ret += "storageTexelBuffer | ";
	if((val & BufferUsageBits::uniformBuffer) == BufferUsageBits::uniformBuffer) ret += "uniformBuffer | ";
	if((val & BufferUsageBits::storageBuffer) == BufferUsageBits::storageBuffer) ret += "storageBuffer | ";
	if((val & BufferUsageBits::indexBuffer) == BufferUsageBits::indexBuffer) ret += "indexBuffer | ";
	if((val & BufferUsageBits::vertexBuffer) == BufferUsageBits::vertexBuffer) ret += "vertexBuffer | ";
	if((val & BufferUsageBits::indirectBuffer) == BufferUsageBits::indirectBuffer) ret += "indirectBuffer | ";
	if((val & BufferUsageBits::shaderDeviceAddress) == BufferUsageBits::shaderDeviceAddress) ret += "shaderDeviceAddress | ";
	if((val & BufferUsageBits::videoDecodeSrcKHR) == BufferUsageBits::videoDecodeSrcKHR) ret += "videoDecodeSrcKHR | ";
	if((val & BufferUsageBits::videoDecodeDstKHR) == BufferUsageBits::videoDecodeDstKHR) ret += "videoDecodeDstKHR | ";
	if((val & BufferUsageBits::transformFeedbackBufferEXT) == BufferUsageBits::transformFeedbackBufferEXT) ret += "transformFeedbackBufferEXT | ";
	if((val & BufferUsageBits::transformFeedbackCounterBufferEXT) == BufferUsageBits::transformFeedbackCounterBufferEXT) ret += "transformFeedbackCounterBufferEXT | ";
	if((val & BufferUsageBits::conditionalRenderingEXT) == BufferUsageBits::conditionalRenderingEXT) ret += "conditionalRenderingEXT | ";
	if((val & BufferUsageBits::descriptorHeapEXT) == BufferUsageBits::descriptorHeapEXT) ret += "descriptorHeapEXT | ";
	if((val & BufferUsageBits::accelerationStructureBuildInputReadOnlyKHR) == BufferUsageBits::accelerationStructureBuildInputReadOnlyKHR) ret += "accelerationStructureBuildInputReadOnlyKHR | ";
	if((val & BufferUsageBits::accelerationStructureStorageKHR) == BufferUsageBits::accelerationStructureStorageKHR) ret += "accelerationStructureStorageKHR | ";
	if((val & BufferUsageBits::shaderBindingTableKHR) == BufferUsageBits::shaderBindingTableKHR) ret += "shaderBindingTableKHR | ";
	if((val & BufferUsageBits::videoEncodeDstKHR) == BufferUsageBits::videoEncodeDstKHR) ret += "videoEncodeDstKHR | ";
	if((val & BufferUsageBits::videoEncodeSrcKHR) == BufferUsageBits::videoEncodeSrcKHR) ret += "videoEncodeSrcKHR | ";
	if((val & BufferUsageBits::samplerDescriptorBufferEXT) == BufferUsageBits::samplerDescriptorBufferEXT) ret += "samplerDescriptorBufferEXT | ";
	if((val & BufferUsageBits::resourceDescriptorBufferEXT) == BufferUsageBits::resourceDescriptorBufferEXT) ret += "resourceDescriptorBufferEXT | ";
	if((val & BufferUsageBits::pushDescriptorsDescriptorBufferEXT) == BufferUsageBits::pushDescriptorsDescriptorBufferEXT) ret += "pushDescriptorsDescriptorBufferEXT | ";
	if((val & BufferUsageBits::micromapBuildInputReadOnlyEXT) == BufferUsageBits::micromapBuildInputReadOnlyEXT) ret += "micromapBuildInputReadOnlyEXT | ";
	if((val & BufferUsageBits::micromapStorageEXT) == BufferUsageBits::micromapStorageEXT) ret += "micromapStorageEXT | ";
	if((val & BufferUsageBits::tileMemoryQCOM) == BufferUsageBits::tileMemoryQCOM) ret += "tileMemoryQCOM | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(ImageViewCreateFlags val) {
	std::string ret;
	if((val & ImageViewCreateBits::fragmentDensityMapDynamicEXT) == ImageViewCreateBits::fragmentDensityMapDynamicEXT) ret += "fragmentDensityMapDynamicEXT | ";
	if((val & ImageViewCreateBits::descriptorBufferCaptureReplayEXT) == ImageViewCreateBits::descriptorBufferCaptureReplayEXT) ret += "descriptorBufferCaptureReplayEXT | ";
	if((val & ImageViewCreateBits::fragmentDensityMapDeferredEXT) == ImageViewCreateBits::fragmentDensityMapDeferredEXT) ret += "fragmentDensityMapDeferredEXT | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(AccessFlags val) {
	std::string ret;
	if((val & AccessBits::indirectCommandRead) == AccessBits::indirectCommandRead) ret += "indirectCommandRead | ";
	if((val & AccessBits::indexRead) == AccessBits::indexRead) ret += "indexRead | ";
	if((val & AccessBits::vertexAttributeRead) == AccessBits::vertexAttributeRead) ret += "vertexAttributeRead | ";
	if((val & AccessBits::uniformRead) == AccessBits::uniformRead) ret += "uniformRead | ";
	if((val & AccessBits::inputAttachmentRead) == AccessBits::inputAttachmentRead) ret += "inputAttachmentRead | ";
	if((val & AccessBits::shaderRead) == AccessBits::shaderRead) ret += "shaderRead | ";
	if((val & AccessBits::shaderWrite) == AccessBits::shaderWrite) ret += "shaderWrite | ";
	if((val & AccessBits::colorAttachmentRead) == AccessBits::colorAttachmentRead) ret += "colorAttachmentRead | ";
	if((val & AccessBits::colorAttachmentWrite) == AccessBits::colorAttachmentWrite) ret += "colorAttachmentWrite | ";
	if((val & AccessBits::depthStencilAttachmentRead) == AccessBits::depthStencilAttachmentRead) ret += "depthStencilAttachmentRead | ";
	if((val & AccessBits::depthStencilAttachmentWrite) == AccessBits::depthStencilAttachmentWrite) ret += "depthStencilAttachmentWrite | ";
	if((val & AccessBits::transferRead) == AccessBits::transferRead) ret += "transferRead | ";
	if((val & AccessBits::transferWrite) == AccessBits::transferWrite) ret += "transferWrite | ";
	if((val & AccessBits::hostRead) == AccessBits::hostRead) ret += "hostRead | ";
	if((val & AccessBits::hostWrite) == AccessBits::hostWrite) ret += "hostWrite | ";
	if((val & AccessBits::memoryRead) == AccessBits::memoryRead) ret += "memoryRead | ";
	if((val & AccessBits::memoryWrite) == AccessBits::memoryWrite) ret += "memoryWrite | ";
	if((val & AccessBits::none) == AccessBits::none) ret += "none | ";
	if((val & AccessBits::transformFeedbackWriteEXT) == AccessBits::transformFeedbackWriteEXT) ret += "transformFeedbackWriteEXT | ";
	if((val & AccessBits::transformFeedbackCounterReadEXT) == AccessBits::transformFeedbackCounterReadEXT) ret += "transformFeedbackCounterReadEXT | ";
	if((val & AccessBits::transformFeedbackCounterWriteEXT) == AccessBits::transformFeedbackCounterWriteEXT) ret += "transformFeedbackCounterWriteEXT | ";
	if((val & AccessBits::conditionalRenderingReadEXT) == AccessBits::conditionalRenderingReadEXT) ret += "conditionalRenderingReadEXT | ";
	if((val & AccessBits::colorAttachmentReadNoncoherentEXT) == AccessBits::colorAttachmentReadNoncoherentEXT) ret += "colorAttachmentReadNoncoherentEXT | ";
	if((val & AccessBits::accelerationStructureReadKHR) == AccessBits::accelerationStructureReadKHR) ret += "accelerationStructureReadKHR | ";
	if((val & AccessBits::accelerationStructureWriteKHR) == AccessBits::accelerationStructureWriteKHR) ret += "accelerationStructureWriteKHR | ";
	if((val & AccessBits::fragmentDensityMapReadEXT) == AccessBits::fragmentDensityMapReadEXT) ret += "fragmentDensityMapReadEXT | ";
	if((val & AccessBits::fragmentShadingRateAttachmentReadKHR) == AccessBits::fragmentShadingRateAttachmentReadKHR) ret += "fragmentShadingRateAttachmentReadKHR | ";
	if((val & AccessBits::commandPreprocessReadEXT) == AccessBits::commandPreprocessReadEXT) ret += "commandPreprocessReadEXT | ";
	if((val & AccessBits::commandPreprocessWriteEXT) == AccessBits::commandPreprocessWriteEXT) ret += "commandPreprocessWriteEXT | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(DependencyFlags val) {
	std::string ret;
	if((val & DependencyBits::byRegion) == DependencyBits::byRegion) ret += "byRegion | ";
	if((val & DependencyBits::deviceGroup) == DependencyBits::deviceGroup) ret += "deviceGroup | ";
	if((val & DependencyBits::viewLocal) == DependencyBits::viewLocal) ret += "viewLocal | ";
	if((val & DependencyBits::feedbackLoopEXT) == DependencyBits::feedbackLoopEXT) ret += "feedbackLoopEXT | ";
	if((val & DependencyBits::queueFamilyOwnershipTransferUseAllStagesKHR) == DependencyBits::queueFamilyOwnershipTransferUseAllStagesKHR) ret += "queueFamilyOwnershipTransferUseAllStagesKHR | ";
	if((val & DependencyBits::asymmetricEventKHR) == DependencyBits::asymmetricEventKHR) ret += "asymmetricEventKHR | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(CommandPoolCreateFlags val) {
	std::string ret;
	if((val & CommandPoolCreateBits::transient) == CommandPoolCreateBits::transient) ret += "transient | ";
	if((val & CommandPoolCreateBits::resetCommandBuffer) == CommandPoolCreateBits::resetCommandBuffer) ret += "resetCommandBuffer | ";
	if((val & CommandPoolCreateBits::eProtected) == CommandPoolCreateBits::eProtected) ret += "eProtected | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(CommandPoolResetFlags val) {
	std::string ret;
	if((val & CommandPoolResetBits::releaseResources) == CommandPoolResetBits::releaseResources) ret += "releaseResources | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(QueryControlFlags val) {
	std::string ret;
	if((val & QueryControlBits::precise) == QueryControlBits::precise) ret += "precise | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(CommandBufferUsageFlags val) {
	std::string ret;
	if((val & CommandBufferUsageBits::oneTimeSubmit) == CommandBufferUsageBits::oneTimeSubmit) ret += "oneTimeSubmit | ";
	if((val & CommandBufferUsageBits::renderPassContinue) == CommandBufferUsageBits::renderPassContinue) ret += "renderPassContinue | ";
	if((val & CommandBufferUsageBits::simultaneousUse) == CommandBufferUsageBits::simultaneousUse) ret += "simultaneousUse | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(CommandBufferResetFlags val) {
	std::string ret;
	if((val & CommandBufferResetBits::releaseResources) == CommandBufferResetBits::releaseResources) ret += "releaseResources | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(SubgroupFeatureBits val) {
	switch(val) {
		case SubgroupFeatureBits::basic: return "basic";
		case SubgroupFeatureBits::vote: return "vote";
		case SubgroupFeatureBits::arithmetic: return "arithmetic";
		case SubgroupFeatureBits::ballot: return "ballot";
		case SubgroupFeatureBits::shuffle: return "shuffle";
		case SubgroupFeatureBits::shuffleRelative: return "shuffleRelative";
		case SubgroupFeatureBits::clustered: return "clustered";
		case SubgroupFeatureBits::quad: return "quad";
		case SubgroupFeatureBits::rotate: return "rotate";
		case SubgroupFeatureBits::rotateClustered: return "rotateClustered";
		case SubgroupFeatureBits::partitionedEXT: return "partitionedEXT";
		default: return nullptr;
	}
}
inline const char* name(PointClippingBehavior val) {
	switch(val) {
		case PointClippingBehavior::allClipPlanes: return "allClipPlanes";
		case PointClippingBehavior::userClipPlanesOnly: return "userClipPlanesOnly";
		default: return nullptr;
	}
}
inline const char* name(PeerMemoryFeatureBits val) {
	switch(val) {
		case PeerMemoryFeatureBits::copySrc: return "copySrc";
		case PeerMemoryFeatureBits::copyDst: return "copyDst";
		case PeerMemoryFeatureBits::genericSrc: return "genericSrc";
		case PeerMemoryFeatureBits::genericDst: return "genericDst";
		default: return nullptr;
	}
}
inline const char* name(MemoryAllocateBits val) {
	switch(val) {
		case MemoryAllocateBits::deviceMask: return "deviceMask";
		case MemoryAllocateBits::deviceAddress: return "deviceAddress";
		case MemoryAllocateBits::deviceAddressCaptureReplay: return "deviceAddressCaptureReplay";
		case MemoryAllocateBits::zeroInitializeEXT: return "zeroInitializeEXT";
		default: return nullptr;
	}
}
inline const char* name(ExternalMemoryHandleTypeBits val) {
	switch(val) {
		case ExternalMemoryHandleTypeBits::opaqueFd: return "opaqueFd";
		case ExternalMemoryHandleTypeBits::opaqueWin32: return "opaqueWin32";
		case ExternalMemoryHandleTypeBits::opaqueWin32Kmt: return "opaqueWin32Kmt";
		case ExternalMemoryHandleTypeBits::d3d11Texture: return "d3d11Texture";
		case ExternalMemoryHandleTypeBits::d3d11TextureKmt: return "d3d11TextureKmt";
		case ExternalMemoryHandleTypeBits::d3d12Heap: return "d3d12Heap";
		case ExternalMemoryHandleTypeBits::d3d12Resource: return "d3d12Resource";
		case ExternalMemoryHandleTypeBits::dmaBufEXT: return "dmaBufEXT";
		case ExternalMemoryHandleTypeBits::hostAllocationEXT: return "hostAllocationEXT";
		case ExternalMemoryHandleTypeBits::hostMappedForeignMemoryEXT: return "hostMappedForeignMemoryEXT";
		case ExternalMemoryHandleTypeBits::zirconVmoFUCHSIA: return "zirconVmoFUCHSIA";
		case ExternalMemoryHandleTypeBits::rdmaAddressNV: return "rdmaAddressNV";
		case ExternalMemoryHandleTypeBits::ohNativeBufferOHOS: return "ohNativeBufferOHOS";
		case ExternalMemoryHandleTypeBits::screenBufferQNX: return "screenBufferQNX";
		default: return nullptr;
	}
}
inline const char* name(ExternalMemoryFeatureBits val) {
	switch(val) {
		case ExternalMemoryFeatureBits::dedicatedOnly: return "dedicatedOnly";
		case ExternalMemoryFeatureBits::exportable: return "exportable";
		case ExternalMemoryFeatureBits::importable: return "importable";
		default: return nullptr;
	}
}
inline const char* name(ExternalFenceHandleTypeBits val) {
	switch(val) {
		case ExternalFenceHandleTypeBits::opaqueFd: return "opaqueFd";
		case ExternalFenceHandleTypeBits::opaqueWin32: return "opaqueWin32";
		case ExternalFenceHandleTypeBits::opaqueWin32Kmt: return "opaqueWin32Kmt";
		case ExternalFenceHandleTypeBits::syncFd: return "syncFd";
		default: return nullptr;
	}
}
inline const char* name(ExternalFenceFeatureBits val) {
	switch(val) {
		case ExternalFenceFeatureBits::exportable: return "exportable";
		case ExternalFenceFeatureBits::importable: return "importable";
		default: return nullptr;
	}
}
inline const char* name(FenceImportBits val) {
	switch(val) {
		case FenceImportBits::temporary: return "temporary";
		default: return nullptr;
	}
}
inline const char* name(SemaphoreImportBits val) {
	switch(val) {
		case SemaphoreImportBits::temporary: return "temporary";
		default: return nullptr;
	}
}
inline const char* name(ExternalSemaphoreHandleTypeBits val) {
	switch(val) {
		case ExternalSemaphoreHandleTypeBits::opaqueFd: return "opaqueFd";
		case ExternalSemaphoreHandleTypeBits::opaqueWin32: return "opaqueWin32";
		case ExternalSemaphoreHandleTypeBits::opaqueWin32Kmt: return "opaqueWin32Kmt";
		case ExternalSemaphoreHandleTypeBits::d3d12Fence: return "d3d12Fence";
		case ExternalSemaphoreHandleTypeBits::syncFd: return "syncFd";
		case ExternalSemaphoreHandleTypeBits::zirconEventFUCHSIA: return "zirconEventFUCHSIA";
		default: return nullptr;
	}
}
inline const char* name(ExternalSemaphoreFeatureBits val) {
	switch(val) {
		case ExternalSemaphoreFeatureBits::exportable: return "exportable";
		case ExternalSemaphoreFeatureBits::importable: return "importable";
		default: return nullptr;
	}
}
inline std::string name(SubgroupFeatureFlags val) {
	std::string ret;
	if((val & SubgroupFeatureBits::basic) == SubgroupFeatureBits::basic) ret += "basic | ";
	if((val & SubgroupFeatureBits::vote) == SubgroupFeatureBits::vote) ret += "vote | ";
	if((val & SubgroupFeatureBits::arithmetic) == SubgroupFeatureBits::arithmetic) ret += "arithmetic | ";
	if((val & SubgroupFeatureBits::ballot) == SubgroupFeatureBits::ballot) ret += "ballot | ";
	if((val & SubgroupFeatureBits::shuffle) == SubgroupFeatureBits::shuffle) ret += "shuffle | ";
	if((val & SubgroupFeatureBits::shuffleRelative) == SubgroupFeatureBits::shuffleRelative) ret += "shuffleRelative | ";
	if((val & SubgroupFeatureBits::clustered) == SubgroupFeatureBits::clustered) ret += "clustered | ";
	if((val & SubgroupFeatureBits::quad) == SubgroupFeatureBits::quad) ret += "quad | ";
	if((val & SubgroupFeatureBits::rotate) == SubgroupFeatureBits::rotate) ret += "rotate | ";
	if((val & SubgroupFeatureBits::rotateClustered) == SubgroupFeatureBits::rotateClustered) ret += "rotateClustered | ";
	if((val & SubgroupFeatureBits::partitionedEXT) == SubgroupFeatureBits::partitionedEXT) ret += "partitionedEXT | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(PeerMemoryFeatureFlags val) {
	std::string ret;
	if((val & PeerMemoryFeatureBits::copySrc) == PeerMemoryFeatureBits::copySrc) ret += "copySrc | ";
	if((val & PeerMemoryFeatureBits::copyDst) == PeerMemoryFeatureBits::copyDst) ret += "copyDst | ";
	if((val & PeerMemoryFeatureBits::genericSrc) == PeerMemoryFeatureBits::genericSrc) ret += "genericSrc | ";
	if((val & PeerMemoryFeatureBits::genericDst) == PeerMemoryFeatureBits::genericDst) ret += "genericDst | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(MemoryAllocateFlags val) {
	std::string ret;
	if((val & MemoryAllocateBits::deviceMask) == MemoryAllocateBits::deviceMask) ret += "deviceMask | ";
	if((val & MemoryAllocateBits::deviceAddress) == MemoryAllocateBits::deviceAddress) ret += "deviceAddress | ";
	if((val & MemoryAllocateBits::deviceAddressCaptureReplay) == MemoryAllocateBits::deviceAddressCaptureReplay) ret += "deviceAddressCaptureReplay | ";
	if((val & MemoryAllocateBits::zeroInitializeEXT) == MemoryAllocateBits::zeroInitializeEXT) ret += "zeroInitializeEXT | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(ExternalMemoryHandleTypeFlags val) {
	std::string ret;
	if((val & ExternalMemoryHandleTypeBits::opaqueFd) == ExternalMemoryHandleTypeBits::opaqueFd) ret += "opaqueFd | ";
	if((val & ExternalMemoryHandleTypeBits::opaqueWin32) == ExternalMemoryHandleTypeBits::opaqueWin32) ret += "opaqueWin32 | ";
	if((val & ExternalMemoryHandleTypeBits::opaqueWin32Kmt) == ExternalMemoryHandleTypeBits::opaqueWin32Kmt) ret += "opaqueWin32Kmt | ";
	if((val & ExternalMemoryHandleTypeBits::d3d11Texture) == ExternalMemoryHandleTypeBits::d3d11Texture) ret += "d3d11Texture | ";
	if((val & ExternalMemoryHandleTypeBits::d3d11TextureKmt) == ExternalMemoryHandleTypeBits::d3d11TextureKmt) ret += "d3d11TextureKmt | ";
	if((val & ExternalMemoryHandleTypeBits::d3d12Heap) == ExternalMemoryHandleTypeBits::d3d12Heap) ret += "d3d12Heap | ";
	if((val & ExternalMemoryHandleTypeBits::d3d12Resource) == ExternalMemoryHandleTypeBits::d3d12Resource) ret += "d3d12Resource | ";
	if((val & ExternalMemoryHandleTypeBits::dmaBufEXT) == ExternalMemoryHandleTypeBits::dmaBufEXT) ret += "dmaBufEXT | ";
	if((val & ExternalMemoryHandleTypeBits::hostAllocationEXT) == ExternalMemoryHandleTypeBits::hostAllocationEXT) ret += "hostAllocationEXT | ";
	if((val & ExternalMemoryHandleTypeBits::hostMappedForeignMemoryEXT) == ExternalMemoryHandleTypeBits::hostMappedForeignMemoryEXT) ret += "hostMappedForeignMemoryEXT | ";
	if((val & ExternalMemoryHandleTypeBits::zirconVmoFUCHSIA) == ExternalMemoryHandleTypeBits::zirconVmoFUCHSIA) ret += "zirconVmoFUCHSIA | ";
	if((val & ExternalMemoryHandleTypeBits::rdmaAddressNV) == ExternalMemoryHandleTypeBits::rdmaAddressNV) ret += "rdmaAddressNV | ";
	if((val & ExternalMemoryHandleTypeBits::ohNativeBufferOHOS) == ExternalMemoryHandleTypeBits::ohNativeBufferOHOS) ret += "ohNativeBufferOHOS | ";
	if((val & ExternalMemoryHandleTypeBits::screenBufferQNX) == ExternalMemoryHandleTypeBits::screenBufferQNX) ret += "screenBufferQNX | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(ExternalMemoryFeatureFlags val) {
	std::string ret;
	if((val & ExternalMemoryFeatureBits::dedicatedOnly) == ExternalMemoryFeatureBits::dedicatedOnly) ret += "dedicatedOnly | ";
	if((val & ExternalMemoryFeatureBits::exportable) == ExternalMemoryFeatureBits::exportable) ret += "exportable | ";
	if((val & ExternalMemoryFeatureBits::importable) == ExternalMemoryFeatureBits::importable) ret += "importable | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(ExternalFenceHandleTypeFlags val) {
	std::string ret;
	if((val & ExternalFenceHandleTypeBits::opaqueFd) == ExternalFenceHandleTypeBits::opaqueFd) ret += "opaqueFd | ";
	if((val & ExternalFenceHandleTypeBits::opaqueWin32) == ExternalFenceHandleTypeBits::opaqueWin32) ret += "opaqueWin32 | ";
	if((val & ExternalFenceHandleTypeBits::opaqueWin32Kmt) == ExternalFenceHandleTypeBits::opaqueWin32Kmt) ret += "opaqueWin32Kmt | ";
	if((val & ExternalFenceHandleTypeBits::syncFd) == ExternalFenceHandleTypeBits::syncFd) ret += "syncFd | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(ExternalFenceFeatureFlags val) {
	std::string ret;
	if((val & ExternalFenceFeatureBits::exportable) == ExternalFenceFeatureBits::exportable) ret += "exportable | ";
	if((val & ExternalFenceFeatureBits::importable) == ExternalFenceFeatureBits::importable) ret += "importable | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(FenceImportFlags val) {
	std::string ret;
	if((val & FenceImportBits::temporary) == FenceImportBits::temporary) ret += "temporary | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(SemaphoreImportFlags val) {
	std::string ret;
	if((val & SemaphoreImportBits::temporary) == SemaphoreImportBits::temporary) ret += "temporary | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(ExternalSemaphoreHandleTypeFlags val) {
	std::string ret;
	if((val & ExternalSemaphoreHandleTypeBits::opaqueFd) == ExternalSemaphoreHandleTypeBits::opaqueFd) ret += "opaqueFd | ";
	if((val & ExternalSemaphoreHandleTypeBits::opaqueWin32) == ExternalSemaphoreHandleTypeBits::opaqueWin32) ret += "opaqueWin32 | ";
	if((val & ExternalSemaphoreHandleTypeBits::opaqueWin32Kmt) == ExternalSemaphoreHandleTypeBits::opaqueWin32Kmt) ret += "opaqueWin32Kmt | ";
	if((val & ExternalSemaphoreHandleTypeBits::d3d12Fence) == ExternalSemaphoreHandleTypeBits::d3d12Fence) ret += "d3d12Fence | ";
	if((val & ExternalSemaphoreHandleTypeBits::syncFd) == ExternalSemaphoreHandleTypeBits::syncFd) ret += "syncFd | ";
	if((val & ExternalSemaphoreHandleTypeBits::zirconEventFUCHSIA) == ExternalSemaphoreHandleTypeBits::zirconEventFUCHSIA) ret += "zirconEventFUCHSIA | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(ExternalSemaphoreFeatureFlags val) {
	std::string ret;
	if((val & ExternalSemaphoreFeatureBits::exportable) == ExternalSemaphoreFeatureBits::exportable) ret += "exportable | ";
	if((val & ExternalSemaphoreFeatureBits::importable) == ExternalSemaphoreFeatureBits::importable) ret += "importable | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(DriverId val) {
	switch(val) {
		case DriverId::amdProprietary: return "amdProprietary";
		case DriverId::amdOpenSource: return "amdOpenSource";
		case DriverId::mesaRadv: return "mesaRadv";
		case DriverId::nvidiaProprietary: return "nvidiaProprietary";
		case DriverId::intelProprietaryWindows: return "intelProprietaryWindows";
		case DriverId::intelOpenSourceMESA: return "intelOpenSourceMESA";
		case DriverId::imaginationProprietary: return "imaginationProprietary";
		case DriverId::qualcommProprietary: return "qualcommProprietary";
		case DriverId::armProprietary: return "armProprietary";
		case DriverId::googleSwiftshader: return "googleSwiftshader";
		case DriverId::ggpProprietary: return "ggpProprietary";
		case DriverId::broadcomProprietary: return "broadcomProprietary";
		case DriverId::mesaLlvmpipe: return "mesaLlvmpipe";
		case DriverId::moltenvk: return "moltenvk";
		case DriverId::coreaviProprietary: return "coreaviProprietary";
		case DriverId::juiceProprietary: return "juiceProprietary";
		case DriverId::verisiliconProprietary: return "verisiliconProprietary";
		case DriverId::mesaTurnip: return "mesaTurnip";
		case DriverId::mesaV3dv: return "mesaV3dv";
		case DriverId::mesaPanvk: return "mesaPanvk";
		case DriverId::samsungProprietary: return "samsungProprietary";
		case DriverId::mesaVenus: return "mesaVenus";
		case DriverId::mesaDozen: return "mesaDozen";
		case DriverId::mesaNvk: return "mesaNvk";
		case DriverId::imaginationOpenSourceMESA: return "imaginationOpenSourceMESA";
		case DriverId::mesaHoneykrisp: return "mesaHoneykrisp";
		case DriverId::vulkanScEmulationOnVulkan: return "vulkanScEmulationOnVulkan";
		case DriverId::mesaKosmickrisp: return "mesaKosmickrisp";
		default: return nullptr;
	}
}
inline const char* name(ShaderFloatControlsIndependence val) {
	switch(val) {
		case ShaderFloatControlsIndependence::e32BitOnly: return "e32BitOnly";
		case ShaderFloatControlsIndependence::all: return "all";
		case ShaderFloatControlsIndependence::none: return "none";
		default: return nullptr;
	}
}
inline const char* name(ResolveModeBits val) {
	switch(val) {
		case ResolveModeBits::none: return "none";
		case ResolveModeBits::sampleZero: return "sampleZero";
		case ResolveModeBits::average: return "average";
		case ResolveModeBits::min: return "min";
		case ResolveModeBits::max: return "max";
		case ResolveModeBits::customEXT: return "customEXT";
		default: return nullptr;
	}
}
inline const char* name(SemaphoreType val) {
	switch(val) {
		case SemaphoreType::binary: return "binary";
		case SemaphoreType::timeline: return "timeline";
		default: return nullptr;
	}
}
inline const char* name(SemaphoreWaitBits val) {
	switch(val) {
		case SemaphoreWaitBits::any: return "any";
		default: return nullptr;
	}
}
inline std::string name(ResolveModeFlags val) {
	std::string ret;
	if((val & ResolveModeBits::none) == ResolveModeBits::none) ret += "none | ";
	if((val & ResolveModeBits::sampleZero) == ResolveModeBits::sampleZero) ret += "sampleZero | ";
	if((val & ResolveModeBits::average) == ResolveModeBits::average) ret += "average | ";
	if((val & ResolveModeBits::min) == ResolveModeBits::min) ret += "min | ";
	if((val & ResolveModeBits::max) == ResolveModeBits::max) ret += "max | ";
	if((val & ResolveModeBits::customEXT) == ResolveModeBits::customEXT) ret += "customEXT | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(SemaphoreWaitFlags val) {
	std::string ret;
	if((val & SemaphoreWaitBits::any) == SemaphoreWaitBits::any) ret += "any | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(ToolPurposeBits val) {
	switch(val) {
		case ToolPurposeBits::validation: return "validation";
		case ToolPurposeBits::profiling: return "profiling";
		case ToolPurposeBits::tracing: return "tracing";
		case ToolPurposeBits::additionalFeatures: return "additionalFeatures";
		case ToolPurposeBits::modifyingFeatures: return "modifyingFeatures";
		case ToolPurposeBits::debugReportingEXT: return "debugReportingEXT";
		case ToolPurposeBits::debugMarkersEXT: return "debugMarkersEXT";
		default: return nullptr;
	}
}
inline const char* name(PipelineStageBits2 val) {
	switch(val) {
		case PipelineStageBits2::e2None: return "e2None";
		case PipelineStageBits2::e2TopOfPipe: return "e2TopOfPipe";
		case PipelineStageBits2::e2DrawIndirect: return "e2DrawIndirect";
		case PipelineStageBits2::e2VertexInput: return "e2VertexInput";
		case PipelineStageBits2::e2VertexShader: return "e2VertexShader";
		case PipelineStageBits2::e2TessellationControlShader: return "e2TessellationControlShader";
		case PipelineStageBits2::e2TessellationEvaluationShader: return "e2TessellationEvaluationShader";
		case PipelineStageBits2::e2GeometryShader: return "e2GeometryShader";
		case PipelineStageBits2::e2FragmentShader: return "e2FragmentShader";
		case PipelineStageBits2::e2EarlyFragmentTests: return "e2EarlyFragmentTests";
		case PipelineStageBits2::e2LateFragmentTests: return "e2LateFragmentTests";
		case PipelineStageBits2::e2ColorAttachmentOutput: return "e2ColorAttachmentOutput";
		case PipelineStageBits2::e2ComputeShader: return "e2ComputeShader";
		case PipelineStageBits2::e2AllTransfer: return "e2AllTransfer";
		case PipelineStageBits2::e2BottomOfPipe: return "e2BottomOfPipe";
		case PipelineStageBits2::e2Host: return "e2Host";
		case PipelineStageBits2::e2AllGraphics: return "e2AllGraphics";
		case PipelineStageBits2::e2AllCommands: return "e2AllCommands";
		case PipelineStageBits2::e2Copy: return "e2Copy";
		case PipelineStageBits2::e2Resolve: return "e2Resolve";
		case PipelineStageBits2::e2Blit: return "e2Blit";
		case PipelineStageBits2::e2Clear: return "e2Clear";
		case PipelineStageBits2::e2IndexInput: return "e2IndexInput";
		case PipelineStageBits2::e2VertexAttributeInput: return "e2VertexAttributeInput";
		case PipelineStageBits2::e2PreRasterizationShaders: return "e2PreRasterizationShaders";
		case PipelineStageBits2::e2VideoDecodeKHR: return "e2VideoDecodeKHR";
		case PipelineStageBits2::e2VideoEncodeKHR: return "e2VideoEncodeKHR";
		case PipelineStageBits2::e2TransformFeedbackEXT: return "e2TransformFeedbackEXT";
		case PipelineStageBits2::e2ConditionalRenderingEXT: return "e2ConditionalRenderingEXT";
		case PipelineStageBits2::e2CommandPreprocessEXT: return "e2CommandPreprocessEXT";
		case PipelineStageBits2::e2FragmentShadingRateAttachmentKHR: return "e2FragmentShadingRateAttachmentKHR";
		case PipelineStageBits2::e2AccelerationStructureBuildKHR: return "e2AccelerationStructureBuildKHR";
		case PipelineStageBits2::e2RayTracingShaderKHR: return "e2RayTracingShaderKHR";
		case PipelineStageBits2::e2FragmentDensityProcessEXT: return "e2FragmentDensityProcessEXT";
		case PipelineStageBits2::e2TaskShaderEXT: return "e2TaskShaderEXT";
		case PipelineStageBits2::e2MeshShaderEXT: return "e2MeshShaderEXT";
		case PipelineStageBits2::e2SubpassShaderHUAWEI: return "e2SubpassShaderHUAWEI";
		case PipelineStageBits2::e2InvocationMaskHUAWEI: return "e2InvocationMaskHUAWEI";
		case PipelineStageBits2::e2AccelerationStructureCopyKHR: return "e2AccelerationStructureCopyKHR";
		case PipelineStageBits2::e2MicromapBuildEXT: return "e2MicromapBuildEXT";
		case PipelineStageBits2::e2ClusterCullingShaderHUAWEI: return "e2ClusterCullingShaderHUAWEI";
		case PipelineStageBits2::e2OpticalFlowNV: return "e2OpticalFlowNV";
		case PipelineStageBits2::e2ConvertCooperativeVectorMatrixNV: return "e2ConvertCooperativeVectorMatrixNV";
		case PipelineStageBits2::e2DataGraphARM: return "e2DataGraphARM";
		case PipelineStageBits2::e2CopyIndirectKHR: return "e2CopyIndirectKHR";
		case PipelineStageBits2::e2MemoryDecompressionEXT: return "e2MemoryDecompressionEXT";
		default: return nullptr;
	}
}
inline const char* name(AccessBits2 val) {
	switch(val) {
		case AccessBits2::e2None: return "e2None";
		case AccessBits2::e2IndirectCommandRead: return "e2IndirectCommandRead";
		case AccessBits2::e2IndexRead: return "e2IndexRead";
		case AccessBits2::e2VertexAttributeRead: return "e2VertexAttributeRead";
		case AccessBits2::e2UniformRead: return "e2UniformRead";
		case AccessBits2::e2InputAttachmentRead: return "e2InputAttachmentRead";
		case AccessBits2::e2ShaderRead: return "e2ShaderRead";
		case AccessBits2::e2ShaderWrite: return "e2ShaderWrite";
		case AccessBits2::e2ColorAttachmentRead: return "e2ColorAttachmentRead";
		case AccessBits2::e2ColorAttachmentWrite: return "e2ColorAttachmentWrite";
		case AccessBits2::e2DepthStencilAttachmentRead: return "e2DepthStencilAttachmentRead";
		case AccessBits2::e2DepthStencilAttachmentWrite: return "e2DepthStencilAttachmentWrite";
		case AccessBits2::e2TransferRead: return "e2TransferRead";
		case AccessBits2::e2TransferWrite: return "e2TransferWrite";
		case AccessBits2::e2HostRead: return "e2HostRead";
		case AccessBits2::e2HostWrite: return "e2HostWrite";
		case AccessBits2::e2MemoryRead: return "e2MemoryRead";
		case AccessBits2::e2MemoryWrite: return "e2MemoryWrite";
		case AccessBits2::e2ShaderSampledRead: return "e2ShaderSampledRead";
		case AccessBits2::e2ShaderStorageRead: return "e2ShaderStorageRead";
		case AccessBits2::e2ShaderStorageWrite: return "e2ShaderStorageWrite";
		case AccessBits2::e2VideoDecodeReadKHR: return "e2VideoDecodeReadKHR";
		case AccessBits2::e2VideoDecodeWriteKHR: return "e2VideoDecodeWriteKHR";
		case AccessBits2::e2SamplerHeapReadEXT: return "e2SamplerHeapReadEXT";
		case AccessBits2::e2ResourceHeapReadEXT: return "e2ResourceHeapReadEXT";
		case AccessBits2::e2VideoEncodeReadKHR: return "e2VideoEncodeReadKHR";
		case AccessBits2::e2VideoEncodeWriteKHR: return "e2VideoEncodeWriteKHR";
		case AccessBits2::e2ShaderTileAttachmentReadQCOM: return "e2ShaderTileAttachmentReadQCOM";
		case AccessBits2::e2ShaderTileAttachmentWriteQCOM: return "e2ShaderTileAttachmentWriteQCOM";
		case AccessBits2::e2TransformFeedbackWriteEXT: return "e2TransformFeedbackWriteEXT";
		case AccessBits2::e2TransformFeedbackCounterReadEXT: return "e2TransformFeedbackCounterReadEXT";
		case AccessBits2::e2TransformFeedbackCounterWriteEXT: return "e2TransformFeedbackCounterWriteEXT";
		case AccessBits2::e2ConditionalRenderingReadEXT: return "e2ConditionalRenderingReadEXT";
		case AccessBits2::e2CommandPreprocessReadEXT: return "e2CommandPreprocessReadEXT";
		case AccessBits2::e2CommandPreprocessWriteEXT: return "e2CommandPreprocessWriteEXT";
		case AccessBits2::e2FragmentShadingRateAttachmentReadKHR: return "e2FragmentShadingRateAttachmentReadKHR";
		case AccessBits2::e2AccelerationStructureReadKHR: return "e2AccelerationStructureReadKHR";
		case AccessBits2::e2AccelerationStructureWriteKHR: return "e2AccelerationStructureWriteKHR";
		case AccessBits2::e2FragmentDensityMapReadEXT: return "e2FragmentDensityMapReadEXT";
		case AccessBits2::e2ColorAttachmentReadNoncoherentEXT: return "e2ColorAttachmentReadNoncoherentEXT";
		case AccessBits2::e2DescriptorBufferReadEXT: return "e2DescriptorBufferReadEXT";
		case AccessBits2::e2InvocationMaskReadHUAWEI: return "e2InvocationMaskReadHUAWEI";
		case AccessBits2::e2ShaderBindingTableReadKHR: return "e2ShaderBindingTableReadKHR";
		case AccessBits2::e2MicromapReadEXT: return "e2MicromapReadEXT";
		case AccessBits2::e2MicromapWriteEXT: return "e2MicromapWriteEXT";
		case AccessBits2::e2OpticalFlowReadNV: return "e2OpticalFlowReadNV";
		case AccessBits2::e2OpticalFlowWriteNV: return "e2OpticalFlowWriteNV";
		case AccessBits2::e2DataGraphReadARM: return "e2DataGraphReadARM";
		case AccessBits2::e2DataGraphWriteARM: return "e2DataGraphWriteARM";
		case AccessBits2::e2MemoryDecompressionReadEXT: return "e2MemoryDecompressionReadEXT";
		case AccessBits2::e2MemoryDecompressionWriteEXT: return "e2MemoryDecompressionWriteEXT";
		default: return nullptr;
	}
}
inline const char* name(SubmitBits val) {
	switch(val) {
		case SubmitBits::eProtected: return "eProtected";
		default: return nullptr;
	}
}
inline const char* name(FormatFeatureBits2 val) {
	switch(val) {
		case FormatFeatureBits2::e2SampledImage: return "e2SampledImage";
		case FormatFeatureBits2::e2StorageImage: return "e2StorageImage";
		case FormatFeatureBits2::e2StorageImageAtomic: return "e2StorageImageAtomic";
		case FormatFeatureBits2::e2UniformTexelBuffer: return "e2UniformTexelBuffer";
		case FormatFeatureBits2::e2StorageTexelBuffer: return "e2StorageTexelBuffer";
		case FormatFeatureBits2::e2StorageTexelBufferAtomic: return "e2StorageTexelBufferAtomic";
		case FormatFeatureBits2::e2VertexBuffer: return "e2VertexBuffer";
		case FormatFeatureBits2::e2ColorAttachment: return "e2ColorAttachment";
		case FormatFeatureBits2::e2ColorAttachmentBlend: return "e2ColorAttachmentBlend";
		case FormatFeatureBits2::e2DepthStencilAttachment: return "e2DepthStencilAttachment";
		case FormatFeatureBits2::e2BlitSrc: return "e2BlitSrc";
		case FormatFeatureBits2::e2BlitDst: return "e2BlitDst";
		case FormatFeatureBits2::e2SampledImageFilterLinear: return "e2SampledImageFilterLinear";
		case FormatFeatureBits2::e2TransferSrc: return "e2TransferSrc";
		case FormatFeatureBits2::e2TransferDst: return "e2TransferDst";
		case FormatFeatureBits2::e2SampledImageFilterMinmax: return "e2SampledImageFilterMinmax";
		case FormatFeatureBits2::e2MidpointChromaSamples: return "e2MidpointChromaSamples";
		case FormatFeatureBits2::e2SampledImageYcbcrConversionLinearFilter: return "e2SampledImageYcbcrConversionLinearFilter";
		case FormatFeatureBits2::e2SampledImageYcbcrConversionSeparateReconstructionFilter: return "e2SampledImageYcbcrConversionSeparateReconstructionFilter";
		case FormatFeatureBits2::e2SampledImageYcbcrConversionChromaReconstructionExplicit: return "e2SampledImageYcbcrConversionChromaReconstructionExplicit";
		case FormatFeatureBits2::e2SampledImageYcbcrConversionChromaReconstructionExplicitForceable: return "e2SampledImageYcbcrConversionChromaReconstructionExplicitForceable";
		case FormatFeatureBits2::e2Disjoint: return "e2Disjoint";
		case FormatFeatureBits2::e2CositedChromaSamples: return "e2CositedChromaSamples";
		case FormatFeatureBits2::e2StorageReadWithoutFormat: return "e2StorageReadWithoutFormat";
		case FormatFeatureBits2::e2StorageWriteWithoutFormat: return "e2StorageWriteWithoutFormat";
		case FormatFeatureBits2::e2SampledImageDepthComparison: return "e2SampledImageDepthComparison";
		case FormatFeatureBits2::e2SampledImageFilterCubic: return "e2SampledImageFilterCubic";
		case FormatFeatureBits2::e2HostImageTransfer: return "e2HostImageTransfer";
		case FormatFeatureBits2::e2VideoDecodeOutputKHR: return "e2VideoDecodeOutputKHR";
		case FormatFeatureBits2::e2VideoDecodeDpbKHR: return "e2VideoDecodeDpbKHR";
		case FormatFeatureBits2::e2AccelerationStructureVertexBufferKHR: return "e2AccelerationStructureVertexBufferKHR";
		case FormatFeatureBits2::e2FragmentDensityMapEXT: return "e2FragmentDensityMapEXT";
		case FormatFeatureBits2::e2FragmentShadingRateAttachmentKHR: return "e2FragmentShadingRateAttachmentKHR";
		case FormatFeatureBits2::e2VideoEncodeInputKHR: return "e2VideoEncodeInputKHR";
		case FormatFeatureBits2::e2VideoEncodeDpbKHR: return "e2VideoEncodeDpbKHR";
		case FormatFeatureBits2::e2AccelerationStructureRadiusBufferNV: return "e2AccelerationStructureRadiusBufferNV";
		case FormatFeatureBits2::e2LinearColorAttachmentNV: return "e2LinearColorAttachmentNV";
		case FormatFeatureBits2::e2WeightImageQCOM: return "e2WeightImageQCOM";
		case FormatFeatureBits2::e2WeightSampledImageQCOM: return "e2WeightSampledImageQCOM";
		case FormatFeatureBits2::e2BlockMatchingQCOM: return "e2BlockMatchingQCOM";
		case FormatFeatureBits2::e2BoxFilterSampledQCOM: return "e2BoxFilterSampledQCOM";
		case FormatFeatureBits2::e2TensorShaderARM: return "e2TensorShaderARM";
		case FormatFeatureBits2::e2TensorImageAliasingARM: return "e2TensorImageAliasingARM";
		case FormatFeatureBits2::e2OpticalFlowImageNV: return "e2OpticalFlowImageNV";
		case FormatFeatureBits2::e2OpticalFlowVectorNV: return "e2OpticalFlowVectorNV";
		case FormatFeatureBits2::e2OpticalFlowCostNV: return "e2OpticalFlowCostNV";
		case FormatFeatureBits2::e2TensorDataGraphARM: return "e2TensorDataGraphARM";
		case FormatFeatureBits2::e2CopyImageIndirectDstKHR: return "e2CopyImageIndirectDstKHR";
		case FormatFeatureBits2::e2VideoEncodeQuantizationDeltaMapKHR: return "e2VideoEncodeQuantizationDeltaMapKHR";
		case FormatFeatureBits2::e2VideoEncodeEmphasisMapKHR: return "e2VideoEncodeEmphasisMapKHR";
		case FormatFeatureBits2::e2DepthCopyOnComputeQueueKHR: return "e2DepthCopyOnComputeQueueKHR";
		case FormatFeatureBits2::e2DepthCopyOnTransferQueueKHR: return "e2DepthCopyOnTransferQueueKHR";
		case FormatFeatureBits2::e2StencilCopyOnComputeQueueKHR: return "e2StencilCopyOnComputeQueueKHR";
		case FormatFeatureBits2::e2StencilCopyOnTransferQueueKHR: return "e2StencilCopyOnTransferQueueKHR";
		case FormatFeatureBits2::e2DataGraphOpticalFlowImageARM: return "e2DataGraphOpticalFlowImageARM";
		case FormatFeatureBits2::e2DataGraphOpticalFlowVectorARM: return "e2DataGraphOpticalFlowVectorARM";
		case FormatFeatureBits2::e2DataGraphOpticalFlowCostARM: return "e2DataGraphOpticalFlowCostARM";
		default: return nullptr;
	}
}
inline std::string name(ToolPurposeFlags val) {
	std::string ret;
	if((val & ToolPurposeBits::validation) == ToolPurposeBits::validation) ret += "validation | ";
	if((val & ToolPurposeBits::profiling) == ToolPurposeBits::profiling) ret += "profiling | ";
	if((val & ToolPurposeBits::tracing) == ToolPurposeBits::tracing) ret += "tracing | ";
	if((val & ToolPurposeBits::additionalFeatures) == ToolPurposeBits::additionalFeatures) ret += "additionalFeatures | ";
	if((val & ToolPurposeBits::modifyingFeatures) == ToolPurposeBits::modifyingFeatures) ret += "modifyingFeatures | ";
	if((val & ToolPurposeBits::debugReportingEXT) == ToolPurposeBits::debugReportingEXT) ret += "debugReportingEXT | ";
	if((val & ToolPurposeBits::debugMarkersEXT) == ToolPurposeBits::debugMarkersEXT) ret += "debugMarkersEXT | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(PipelineStageFlags2 val) {
	std::string ret;
	if((val & PipelineStageBits2::e2None) == PipelineStageBits2::e2None) ret += "e2None | ";
	if((val & PipelineStageBits2::e2TopOfPipe) == PipelineStageBits2::e2TopOfPipe) ret += "e2TopOfPipe | ";
	if((val & PipelineStageBits2::e2DrawIndirect) == PipelineStageBits2::e2DrawIndirect) ret += "e2DrawIndirect | ";
	if((val & PipelineStageBits2::e2VertexInput) == PipelineStageBits2::e2VertexInput) ret += "e2VertexInput | ";
	if((val & PipelineStageBits2::e2VertexShader) == PipelineStageBits2::e2VertexShader) ret += "e2VertexShader | ";
	if((val & PipelineStageBits2::e2TessellationControlShader) == PipelineStageBits2::e2TessellationControlShader) ret += "e2TessellationControlShader | ";
	if((val & PipelineStageBits2::e2TessellationEvaluationShader) == PipelineStageBits2::e2TessellationEvaluationShader) ret += "e2TessellationEvaluationShader | ";
	if((val & PipelineStageBits2::e2GeometryShader) == PipelineStageBits2::e2GeometryShader) ret += "e2GeometryShader | ";
	if((val & PipelineStageBits2::e2FragmentShader) == PipelineStageBits2::e2FragmentShader) ret += "e2FragmentShader | ";
	if((val & PipelineStageBits2::e2EarlyFragmentTests) == PipelineStageBits2::e2EarlyFragmentTests) ret += "e2EarlyFragmentTests | ";
	if((val & PipelineStageBits2::e2LateFragmentTests) == PipelineStageBits2::e2LateFragmentTests) ret += "e2LateFragmentTests | ";
	if((val & PipelineStageBits2::e2ColorAttachmentOutput) == PipelineStageBits2::e2ColorAttachmentOutput) ret += "e2ColorAttachmentOutput | ";
	if((val & PipelineStageBits2::e2ComputeShader) == PipelineStageBits2::e2ComputeShader) ret += "e2ComputeShader | ";
	if((val & PipelineStageBits2::e2AllTransfer) == PipelineStageBits2::e2AllTransfer) ret += "e2AllTransfer | ";
	if((val & PipelineStageBits2::e2BottomOfPipe) == PipelineStageBits2::e2BottomOfPipe) ret += "e2BottomOfPipe | ";
	if((val & PipelineStageBits2::e2Host) == PipelineStageBits2::e2Host) ret += "e2Host | ";
	if((val & PipelineStageBits2::e2AllGraphics) == PipelineStageBits2::e2AllGraphics) ret += "e2AllGraphics | ";
	if((val & PipelineStageBits2::e2AllCommands) == PipelineStageBits2::e2AllCommands) ret += "e2AllCommands | ";
	if((val & PipelineStageBits2::e2Copy) == PipelineStageBits2::e2Copy) ret += "e2Copy | ";
	if((val & PipelineStageBits2::e2Resolve) == PipelineStageBits2::e2Resolve) ret += "e2Resolve | ";
	if((val & PipelineStageBits2::e2Blit) == PipelineStageBits2::e2Blit) ret += "e2Blit | ";
	if((val & PipelineStageBits2::e2Clear) == PipelineStageBits2::e2Clear) ret += "e2Clear | ";
	if((val & PipelineStageBits2::e2IndexInput) == PipelineStageBits2::e2IndexInput) ret += "e2IndexInput | ";
	if((val & PipelineStageBits2::e2VertexAttributeInput) == PipelineStageBits2::e2VertexAttributeInput) ret += "e2VertexAttributeInput | ";
	if((val & PipelineStageBits2::e2PreRasterizationShaders) == PipelineStageBits2::e2PreRasterizationShaders) ret += "e2PreRasterizationShaders | ";
	if((val & PipelineStageBits2::e2VideoDecodeKHR) == PipelineStageBits2::e2VideoDecodeKHR) ret += "e2VideoDecodeKHR | ";
	if((val & PipelineStageBits2::e2VideoEncodeKHR) == PipelineStageBits2::e2VideoEncodeKHR) ret += "e2VideoEncodeKHR | ";
	if((val & PipelineStageBits2::e2TransformFeedbackEXT) == PipelineStageBits2::e2TransformFeedbackEXT) ret += "e2TransformFeedbackEXT | ";
	if((val & PipelineStageBits2::e2ConditionalRenderingEXT) == PipelineStageBits2::e2ConditionalRenderingEXT) ret += "e2ConditionalRenderingEXT | ";
	if((val & PipelineStageBits2::e2CommandPreprocessEXT) == PipelineStageBits2::e2CommandPreprocessEXT) ret += "e2CommandPreprocessEXT | ";
	if((val & PipelineStageBits2::e2FragmentShadingRateAttachmentKHR) == PipelineStageBits2::e2FragmentShadingRateAttachmentKHR) ret += "e2FragmentShadingRateAttachmentKHR | ";
	if((val & PipelineStageBits2::e2AccelerationStructureBuildKHR) == PipelineStageBits2::e2AccelerationStructureBuildKHR) ret += "e2AccelerationStructureBuildKHR | ";
	if((val & PipelineStageBits2::e2RayTracingShaderKHR) == PipelineStageBits2::e2RayTracingShaderKHR) ret += "e2RayTracingShaderKHR | ";
	if((val & PipelineStageBits2::e2FragmentDensityProcessEXT) == PipelineStageBits2::e2FragmentDensityProcessEXT) ret += "e2FragmentDensityProcessEXT | ";
	if((val & PipelineStageBits2::e2TaskShaderEXT) == PipelineStageBits2::e2TaskShaderEXT) ret += "e2TaskShaderEXT | ";
	if((val & PipelineStageBits2::e2MeshShaderEXT) == PipelineStageBits2::e2MeshShaderEXT) ret += "e2MeshShaderEXT | ";
	if((val & PipelineStageBits2::e2SubpassShaderHUAWEI) == PipelineStageBits2::e2SubpassShaderHUAWEI) ret += "e2SubpassShaderHUAWEI | ";
	if((val & PipelineStageBits2::e2InvocationMaskHUAWEI) == PipelineStageBits2::e2InvocationMaskHUAWEI) ret += "e2InvocationMaskHUAWEI | ";
	if((val & PipelineStageBits2::e2AccelerationStructureCopyKHR) == PipelineStageBits2::e2AccelerationStructureCopyKHR) ret += "e2AccelerationStructureCopyKHR | ";
	if((val & PipelineStageBits2::e2MicromapBuildEXT) == PipelineStageBits2::e2MicromapBuildEXT) ret += "e2MicromapBuildEXT | ";
	if((val & PipelineStageBits2::e2ClusterCullingShaderHUAWEI) == PipelineStageBits2::e2ClusterCullingShaderHUAWEI) ret += "e2ClusterCullingShaderHUAWEI | ";
	if((val & PipelineStageBits2::e2OpticalFlowNV) == PipelineStageBits2::e2OpticalFlowNV) ret += "e2OpticalFlowNV | ";
	if((val & PipelineStageBits2::e2ConvertCooperativeVectorMatrixNV) == PipelineStageBits2::e2ConvertCooperativeVectorMatrixNV) ret += "e2ConvertCooperativeVectorMatrixNV | ";
	if((val & PipelineStageBits2::e2DataGraphARM) == PipelineStageBits2::e2DataGraphARM) ret += "e2DataGraphARM | ";
	if((val & PipelineStageBits2::e2CopyIndirectKHR) == PipelineStageBits2::e2CopyIndirectKHR) ret += "e2CopyIndirectKHR | ";
	if((val & PipelineStageBits2::e2MemoryDecompressionEXT) == PipelineStageBits2::e2MemoryDecompressionEXT) ret += "e2MemoryDecompressionEXT | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(AccessFlags2 val) {
	std::string ret;
	if((val & AccessBits2::e2None) == AccessBits2::e2None) ret += "e2None | ";
	if((val & AccessBits2::e2IndirectCommandRead) == AccessBits2::e2IndirectCommandRead) ret += "e2IndirectCommandRead | ";
	if((val & AccessBits2::e2IndexRead) == AccessBits2::e2IndexRead) ret += "e2IndexRead | ";
	if((val & AccessBits2::e2VertexAttributeRead) == AccessBits2::e2VertexAttributeRead) ret += "e2VertexAttributeRead | ";
	if((val & AccessBits2::e2UniformRead) == AccessBits2::e2UniformRead) ret += "e2UniformRead | ";
	if((val & AccessBits2::e2InputAttachmentRead) == AccessBits2::e2InputAttachmentRead) ret += "e2InputAttachmentRead | ";
	if((val & AccessBits2::e2ShaderRead) == AccessBits2::e2ShaderRead) ret += "e2ShaderRead | ";
	if((val & AccessBits2::e2ShaderWrite) == AccessBits2::e2ShaderWrite) ret += "e2ShaderWrite | ";
	if((val & AccessBits2::e2ColorAttachmentRead) == AccessBits2::e2ColorAttachmentRead) ret += "e2ColorAttachmentRead | ";
	if((val & AccessBits2::e2ColorAttachmentWrite) == AccessBits2::e2ColorAttachmentWrite) ret += "e2ColorAttachmentWrite | ";
	if((val & AccessBits2::e2DepthStencilAttachmentRead) == AccessBits2::e2DepthStencilAttachmentRead) ret += "e2DepthStencilAttachmentRead | ";
	if((val & AccessBits2::e2DepthStencilAttachmentWrite) == AccessBits2::e2DepthStencilAttachmentWrite) ret += "e2DepthStencilAttachmentWrite | ";
	if((val & AccessBits2::e2TransferRead) == AccessBits2::e2TransferRead) ret += "e2TransferRead | ";
	if((val & AccessBits2::e2TransferWrite) == AccessBits2::e2TransferWrite) ret += "e2TransferWrite | ";
	if((val & AccessBits2::e2HostRead) == AccessBits2::e2HostRead) ret += "e2HostRead | ";
	if((val & AccessBits2::e2HostWrite) == AccessBits2::e2HostWrite) ret += "e2HostWrite | ";
	if((val & AccessBits2::e2MemoryRead) == AccessBits2::e2MemoryRead) ret += "e2MemoryRead | ";
	if((val & AccessBits2::e2MemoryWrite) == AccessBits2::e2MemoryWrite) ret += "e2MemoryWrite | ";
	if((val & AccessBits2::e2ShaderSampledRead) == AccessBits2::e2ShaderSampledRead) ret += "e2ShaderSampledRead | ";
	if((val & AccessBits2::e2ShaderStorageRead) == AccessBits2::e2ShaderStorageRead) ret += "e2ShaderStorageRead | ";
	if((val & AccessBits2::e2ShaderStorageWrite) == AccessBits2::e2ShaderStorageWrite) ret += "e2ShaderStorageWrite | ";
	if((val & AccessBits2::e2VideoDecodeReadKHR) == AccessBits2::e2VideoDecodeReadKHR) ret += "e2VideoDecodeReadKHR | ";
	if((val & AccessBits2::e2VideoDecodeWriteKHR) == AccessBits2::e2VideoDecodeWriteKHR) ret += "e2VideoDecodeWriteKHR | ";
	if((val & AccessBits2::e2SamplerHeapReadEXT) == AccessBits2::e2SamplerHeapReadEXT) ret += "e2SamplerHeapReadEXT | ";
	if((val & AccessBits2::e2ResourceHeapReadEXT) == AccessBits2::e2ResourceHeapReadEXT) ret += "e2ResourceHeapReadEXT | ";
	if((val & AccessBits2::e2VideoEncodeReadKHR) == AccessBits2::e2VideoEncodeReadKHR) ret += "e2VideoEncodeReadKHR | ";
	if((val & AccessBits2::e2VideoEncodeWriteKHR) == AccessBits2::e2VideoEncodeWriteKHR) ret += "e2VideoEncodeWriteKHR | ";
	if((val & AccessBits2::e2ShaderTileAttachmentReadQCOM) == AccessBits2::e2ShaderTileAttachmentReadQCOM) ret += "e2ShaderTileAttachmentReadQCOM | ";
	if((val & AccessBits2::e2ShaderTileAttachmentWriteQCOM) == AccessBits2::e2ShaderTileAttachmentWriteQCOM) ret += "e2ShaderTileAttachmentWriteQCOM | ";
	if((val & AccessBits2::e2TransformFeedbackWriteEXT) == AccessBits2::e2TransformFeedbackWriteEXT) ret += "e2TransformFeedbackWriteEXT | ";
	if((val & AccessBits2::e2TransformFeedbackCounterReadEXT) == AccessBits2::e2TransformFeedbackCounterReadEXT) ret += "e2TransformFeedbackCounterReadEXT | ";
	if((val & AccessBits2::e2TransformFeedbackCounterWriteEXT) == AccessBits2::e2TransformFeedbackCounterWriteEXT) ret += "e2TransformFeedbackCounterWriteEXT | ";
	if((val & AccessBits2::e2ConditionalRenderingReadEXT) == AccessBits2::e2ConditionalRenderingReadEXT) ret += "e2ConditionalRenderingReadEXT | ";
	if((val & AccessBits2::e2CommandPreprocessReadEXT) == AccessBits2::e2CommandPreprocessReadEXT) ret += "e2CommandPreprocessReadEXT | ";
	if((val & AccessBits2::e2CommandPreprocessWriteEXT) == AccessBits2::e2CommandPreprocessWriteEXT) ret += "e2CommandPreprocessWriteEXT | ";
	if((val & AccessBits2::e2FragmentShadingRateAttachmentReadKHR) == AccessBits2::e2FragmentShadingRateAttachmentReadKHR) ret += "e2FragmentShadingRateAttachmentReadKHR | ";
	if((val & AccessBits2::e2AccelerationStructureReadKHR) == AccessBits2::e2AccelerationStructureReadKHR) ret += "e2AccelerationStructureReadKHR | ";
	if((val & AccessBits2::e2AccelerationStructureWriteKHR) == AccessBits2::e2AccelerationStructureWriteKHR) ret += "e2AccelerationStructureWriteKHR | ";
	if((val & AccessBits2::e2FragmentDensityMapReadEXT) == AccessBits2::e2FragmentDensityMapReadEXT) ret += "e2FragmentDensityMapReadEXT | ";
	if((val & AccessBits2::e2ColorAttachmentReadNoncoherentEXT) == AccessBits2::e2ColorAttachmentReadNoncoherentEXT) ret += "e2ColorAttachmentReadNoncoherentEXT | ";
	if((val & AccessBits2::e2DescriptorBufferReadEXT) == AccessBits2::e2DescriptorBufferReadEXT) ret += "e2DescriptorBufferReadEXT | ";
	if((val & AccessBits2::e2InvocationMaskReadHUAWEI) == AccessBits2::e2InvocationMaskReadHUAWEI) ret += "e2InvocationMaskReadHUAWEI | ";
	if((val & AccessBits2::e2ShaderBindingTableReadKHR) == AccessBits2::e2ShaderBindingTableReadKHR) ret += "e2ShaderBindingTableReadKHR | ";
	if((val & AccessBits2::e2MicromapReadEXT) == AccessBits2::e2MicromapReadEXT) ret += "e2MicromapReadEXT | ";
	if((val & AccessBits2::e2MicromapWriteEXT) == AccessBits2::e2MicromapWriteEXT) ret += "e2MicromapWriteEXT | ";
	if((val & AccessBits2::e2OpticalFlowReadNV) == AccessBits2::e2OpticalFlowReadNV) ret += "e2OpticalFlowReadNV | ";
	if((val & AccessBits2::e2OpticalFlowWriteNV) == AccessBits2::e2OpticalFlowWriteNV) ret += "e2OpticalFlowWriteNV | ";
	if((val & AccessBits2::e2DataGraphReadARM) == AccessBits2::e2DataGraphReadARM) ret += "e2DataGraphReadARM | ";
	if((val & AccessBits2::e2DataGraphWriteARM) == AccessBits2::e2DataGraphWriteARM) ret += "e2DataGraphWriteARM | ";
	if((val & AccessBits2::e2MemoryDecompressionReadEXT) == AccessBits2::e2MemoryDecompressionReadEXT) ret += "e2MemoryDecompressionReadEXT | ";
	if((val & AccessBits2::e2MemoryDecompressionWriteEXT) == AccessBits2::e2MemoryDecompressionWriteEXT) ret += "e2MemoryDecompressionWriteEXT | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(SubmitFlags val) {
	std::string ret;
	if((val & SubmitBits::eProtected) == SubmitBits::eProtected) ret += "eProtected | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(FormatFeatureFlags2 val) {
	std::string ret;
	if((val & FormatFeatureBits2::e2SampledImage) == FormatFeatureBits2::e2SampledImage) ret += "e2SampledImage | ";
	if((val & FormatFeatureBits2::e2StorageImage) == FormatFeatureBits2::e2StorageImage) ret += "e2StorageImage | ";
	if((val & FormatFeatureBits2::e2StorageImageAtomic) == FormatFeatureBits2::e2StorageImageAtomic) ret += "e2StorageImageAtomic | ";
	if((val & FormatFeatureBits2::e2UniformTexelBuffer) == FormatFeatureBits2::e2UniformTexelBuffer) ret += "e2UniformTexelBuffer | ";
	if((val & FormatFeatureBits2::e2StorageTexelBuffer) == FormatFeatureBits2::e2StorageTexelBuffer) ret += "e2StorageTexelBuffer | ";
	if((val & FormatFeatureBits2::e2StorageTexelBufferAtomic) == FormatFeatureBits2::e2StorageTexelBufferAtomic) ret += "e2StorageTexelBufferAtomic | ";
	if((val & FormatFeatureBits2::e2VertexBuffer) == FormatFeatureBits2::e2VertexBuffer) ret += "e2VertexBuffer | ";
	if((val & FormatFeatureBits2::e2ColorAttachment) == FormatFeatureBits2::e2ColorAttachment) ret += "e2ColorAttachment | ";
	if((val & FormatFeatureBits2::e2ColorAttachmentBlend) == FormatFeatureBits2::e2ColorAttachmentBlend) ret += "e2ColorAttachmentBlend | ";
	if((val & FormatFeatureBits2::e2DepthStencilAttachment) == FormatFeatureBits2::e2DepthStencilAttachment) ret += "e2DepthStencilAttachment | ";
	if((val & FormatFeatureBits2::e2BlitSrc) == FormatFeatureBits2::e2BlitSrc) ret += "e2BlitSrc | ";
	if((val & FormatFeatureBits2::e2BlitDst) == FormatFeatureBits2::e2BlitDst) ret += "e2BlitDst | ";
	if((val & FormatFeatureBits2::e2SampledImageFilterLinear) == FormatFeatureBits2::e2SampledImageFilterLinear) ret += "e2SampledImageFilterLinear | ";
	if((val & FormatFeatureBits2::e2TransferSrc) == FormatFeatureBits2::e2TransferSrc) ret += "e2TransferSrc | ";
	if((val & FormatFeatureBits2::e2TransferDst) == FormatFeatureBits2::e2TransferDst) ret += "e2TransferDst | ";
	if((val & FormatFeatureBits2::e2SampledImageFilterMinmax) == FormatFeatureBits2::e2SampledImageFilterMinmax) ret += "e2SampledImageFilterMinmax | ";
	if((val & FormatFeatureBits2::e2MidpointChromaSamples) == FormatFeatureBits2::e2MidpointChromaSamples) ret += "e2MidpointChromaSamples | ";
	if((val & FormatFeatureBits2::e2SampledImageYcbcrConversionLinearFilter) == FormatFeatureBits2::e2SampledImageYcbcrConversionLinearFilter) ret += "e2SampledImageYcbcrConversionLinearFilter | ";
	if((val & FormatFeatureBits2::e2SampledImageYcbcrConversionSeparateReconstructionFilter) == FormatFeatureBits2::e2SampledImageYcbcrConversionSeparateReconstructionFilter) ret += "e2SampledImageYcbcrConversionSeparateReconstructionFilter | ";
	if((val & FormatFeatureBits2::e2SampledImageYcbcrConversionChromaReconstructionExplicit) == FormatFeatureBits2::e2SampledImageYcbcrConversionChromaReconstructionExplicit) ret += "e2SampledImageYcbcrConversionChromaReconstructionExplicit | ";
	if((val & FormatFeatureBits2::e2SampledImageYcbcrConversionChromaReconstructionExplicitForceable) == FormatFeatureBits2::e2SampledImageYcbcrConversionChromaReconstructionExplicitForceable) ret += "e2SampledImageYcbcrConversionChromaReconstructionExplicitForceable | ";
	if((val & FormatFeatureBits2::e2Disjoint) == FormatFeatureBits2::e2Disjoint) ret += "e2Disjoint | ";
	if((val & FormatFeatureBits2::e2CositedChromaSamples) == FormatFeatureBits2::e2CositedChromaSamples) ret += "e2CositedChromaSamples | ";
	if((val & FormatFeatureBits2::e2StorageReadWithoutFormat) == FormatFeatureBits2::e2StorageReadWithoutFormat) ret += "e2StorageReadWithoutFormat | ";
	if((val & FormatFeatureBits2::e2StorageWriteWithoutFormat) == FormatFeatureBits2::e2StorageWriteWithoutFormat) ret += "e2StorageWriteWithoutFormat | ";
	if((val & FormatFeatureBits2::e2SampledImageDepthComparison) == FormatFeatureBits2::e2SampledImageDepthComparison) ret += "e2SampledImageDepthComparison | ";
	if((val & FormatFeatureBits2::e2SampledImageFilterCubic) == FormatFeatureBits2::e2SampledImageFilterCubic) ret += "e2SampledImageFilterCubic | ";
	if((val & FormatFeatureBits2::e2HostImageTransfer) == FormatFeatureBits2::e2HostImageTransfer) ret += "e2HostImageTransfer | ";
	if((val & FormatFeatureBits2::e2VideoDecodeOutputKHR) == FormatFeatureBits2::e2VideoDecodeOutputKHR) ret += "e2VideoDecodeOutputKHR | ";
	if((val & FormatFeatureBits2::e2VideoDecodeDpbKHR) == FormatFeatureBits2::e2VideoDecodeDpbKHR) ret += "e2VideoDecodeDpbKHR | ";
	if((val & FormatFeatureBits2::e2AccelerationStructureVertexBufferKHR) == FormatFeatureBits2::e2AccelerationStructureVertexBufferKHR) ret += "e2AccelerationStructureVertexBufferKHR | ";
	if((val & FormatFeatureBits2::e2FragmentDensityMapEXT) == FormatFeatureBits2::e2FragmentDensityMapEXT) ret += "e2FragmentDensityMapEXT | ";
	if((val & FormatFeatureBits2::e2FragmentShadingRateAttachmentKHR) == FormatFeatureBits2::e2FragmentShadingRateAttachmentKHR) ret += "e2FragmentShadingRateAttachmentKHR | ";
	if((val & FormatFeatureBits2::e2VideoEncodeInputKHR) == FormatFeatureBits2::e2VideoEncodeInputKHR) ret += "e2VideoEncodeInputKHR | ";
	if((val & FormatFeatureBits2::e2VideoEncodeDpbKHR) == FormatFeatureBits2::e2VideoEncodeDpbKHR) ret += "e2VideoEncodeDpbKHR | ";
	if((val & FormatFeatureBits2::e2AccelerationStructureRadiusBufferNV) == FormatFeatureBits2::e2AccelerationStructureRadiusBufferNV) ret += "e2AccelerationStructureRadiusBufferNV | ";
	if((val & FormatFeatureBits2::e2LinearColorAttachmentNV) == FormatFeatureBits2::e2LinearColorAttachmentNV) ret += "e2LinearColorAttachmentNV | ";
	if((val & FormatFeatureBits2::e2WeightImageQCOM) == FormatFeatureBits2::e2WeightImageQCOM) ret += "e2WeightImageQCOM | ";
	if((val & FormatFeatureBits2::e2WeightSampledImageQCOM) == FormatFeatureBits2::e2WeightSampledImageQCOM) ret += "e2WeightSampledImageQCOM | ";
	if((val & FormatFeatureBits2::e2BlockMatchingQCOM) == FormatFeatureBits2::e2BlockMatchingQCOM) ret += "e2BlockMatchingQCOM | ";
	if((val & FormatFeatureBits2::e2BoxFilterSampledQCOM) == FormatFeatureBits2::e2BoxFilterSampledQCOM) ret += "e2BoxFilterSampledQCOM | ";
	if((val & FormatFeatureBits2::e2TensorShaderARM) == FormatFeatureBits2::e2TensorShaderARM) ret += "e2TensorShaderARM | ";
	if((val & FormatFeatureBits2::e2TensorImageAliasingARM) == FormatFeatureBits2::e2TensorImageAliasingARM) ret += "e2TensorImageAliasingARM | ";
	if((val & FormatFeatureBits2::e2OpticalFlowImageNV) == FormatFeatureBits2::e2OpticalFlowImageNV) ret += "e2OpticalFlowImageNV | ";
	if((val & FormatFeatureBits2::e2OpticalFlowVectorNV) == FormatFeatureBits2::e2OpticalFlowVectorNV) ret += "e2OpticalFlowVectorNV | ";
	if((val & FormatFeatureBits2::e2OpticalFlowCostNV) == FormatFeatureBits2::e2OpticalFlowCostNV) ret += "e2OpticalFlowCostNV | ";
	if((val & FormatFeatureBits2::e2TensorDataGraphARM) == FormatFeatureBits2::e2TensorDataGraphARM) ret += "e2TensorDataGraphARM | ";
	if((val & FormatFeatureBits2::e2CopyImageIndirectDstKHR) == FormatFeatureBits2::e2CopyImageIndirectDstKHR) ret += "e2CopyImageIndirectDstKHR | ";
	if((val & FormatFeatureBits2::e2VideoEncodeQuantizationDeltaMapKHR) == FormatFeatureBits2::e2VideoEncodeQuantizationDeltaMapKHR) ret += "e2VideoEncodeQuantizationDeltaMapKHR | ";
	if((val & FormatFeatureBits2::e2VideoEncodeEmphasisMapKHR) == FormatFeatureBits2::e2VideoEncodeEmphasisMapKHR) ret += "e2VideoEncodeEmphasisMapKHR | ";
	if((val & FormatFeatureBits2::e2DepthCopyOnComputeQueueKHR) == FormatFeatureBits2::e2DepthCopyOnComputeQueueKHR) ret += "e2DepthCopyOnComputeQueueKHR | ";
	if((val & FormatFeatureBits2::e2DepthCopyOnTransferQueueKHR) == FormatFeatureBits2::e2DepthCopyOnTransferQueueKHR) ret += "e2DepthCopyOnTransferQueueKHR | ";
	if((val & FormatFeatureBits2::e2StencilCopyOnComputeQueueKHR) == FormatFeatureBits2::e2StencilCopyOnComputeQueueKHR) ret += "e2StencilCopyOnComputeQueueKHR | ";
	if((val & FormatFeatureBits2::e2StencilCopyOnTransferQueueKHR) == FormatFeatureBits2::e2StencilCopyOnTransferQueueKHR) ret += "e2StencilCopyOnTransferQueueKHR | ";
	if((val & FormatFeatureBits2::e2DataGraphOpticalFlowImageARM) == FormatFeatureBits2::e2DataGraphOpticalFlowImageARM) ret += "e2DataGraphOpticalFlowImageARM | ";
	if((val & FormatFeatureBits2::e2DataGraphOpticalFlowVectorARM) == FormatFeatureBits2::e2DataGraphOpticalFlowVectorARM) ret += "e2DataGraphOpticalFlowVectorARM | ";
	if((val & FormatFeatureBits2::e2DataGraphOpticalFlowCostARM) == FormatFeatureBits2::e2DataGraphOpticalFlowCostARM) ret += "e2DataGraphOpticalFlowCostARM | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(PipelineRobustnessBufferBehavior val) {
	switch(val) {
		case PipelineRobustnessBufferBehavior::deviceDefault: return "deviceDefault";
		case PipelineRobustnessBufferBehavior::disabled: return "disabled";
		case PipelineRobustnessBufferBehavior::robustBufferAccess: return "robustBufferAccess";
		case PipelineRobustnessBufferBehavior::robustBufferAccess2: return "robustBufferAccess2";
		default: return nullptr;
	}
}
inline const char* name(PipelineRobustnessImageBehavior val) {
	switch(val) {
		case PipelineRobustnessImageBehavior::deviceDefault: return "deviceDefault";
		case PipelineRobustnessImageBehavior::disabled: return "disabled";
		case PipelineRobustnessImageBehavior::robustImageAccess: return "robustImageAccess";
		case PipelineRobustnessImageBehavior::robustImageAccess2: return "robustImageAccess2";
		default: return nullptr;
	}
}
inline const char* name(QueueGlobalPriority val) {
	switch(val) {
		case QueueGlobalPriority::low: return "low";
		case QueueGlobalPriority::medium: return "medium";
		case QueueGlobalPriority::high: return "high";
		case QueueGlobalPriority::realtime: return "realtime";
		default: return nullptr;
	}
}
inline const char* name(MemoryUnmapBits val) {
	switch(val) {
		case MemoryUnmapBits::reserveEXT: return "reserveEXT";
		default: return nullptr;
	}
}
inline const char* name(BufferUsageBits2 val) {
	switch(val) {
		case BufferUsageBits2::e2TransferSrc: return "e2TransferSrc";
		case BufferUsageBits2::e2TransferDst: return "e2TransferDst";
		case BufferUsageBits2::e2UniformTexelBuffer: return "e2UniformTexelBuffer";
		case BufferUsageBits2::e2StorageTexelBuffer: return "e2StorageTexelBuffer";
		case BufferUsageBits2::e2UniformBuffer: return "e2UniformBuffer";
		case BufferUsageBits2::e2StorageBuffer: return "e2StorageBuffer";
		case BufferUsageBits2::e2IndexBuffer: return "e2IndexBuffer";
		case BufferUsageBits2::e2VertexBuffer: return "e2VertexBuffer";
		case BufferUsageBits2::e2IndirectBuffer: return "e2IndirectBuffer";
		case BufferUsageBits2::e2ShaderDeviceAddress: return "e2ShaderDeviceAddress";
		case BufferUsageBits2::e2DescriptorHeapEXT: return "e2DescriptorHeapEXT";
		case BufferUsageBits2::e2ConditionalRenderingEXT: return "e2ConditionalRenderingEXT";
		case BufferUsageBits2::e2ShaderBindingTableKHR: return "e2ShaderBindingTableKHR";
		case BufferUsageBits2::e2TransformFeedbackBufferEXT: return "e2TransformFeedbackBufferEXT";
		case BufferUsageBits2::e2TransformFeedbackCounterBufferEXT: return "e2TransformFeedbackCounterBufferEXT";
		case BufferUsageBits2::e2VideoDecodeSrcKHR: return "e2VideoDecodeSrcKHR";
		case BufferUsageBits2::e2VideoDecodeDstKHR: return "e2VideoDecodeDstKHR";
		case BufferUsageBits2::e2VideoEncodeDstKHR: return "e2VideoEncodeDstKHR";
		case BufferUsageBits2::e2VideoEncodeSrcKHR: return "e2VideoEncodeSrcKHR";
		case BufferUsageBits2::e2AccelerationStructureBuildInputReadOnlyKHR: return "e2AccelerationStructureBuildInputReadOnlyKHR";
		case BufferUsageBits2::e2AccelerationStructureStorageKHR: return "e2AccelerationStructureStorageKHR";
		case BufferUsageBits2::e2SamplerDescriptorBufferEXT: return "e2SamplerDescriptorBufferEXT";
		case BufferUsageBits2::e2ResourceDescriptorBufferEXT: return "e2ResourceDescriptorBufferEXT";
		case BufferUsageBits2::e2PushDescriptorsDescriptorBufferEXT: return "e2PushDescriptorsDescriptorBufferEXT";
		case BufferUsageBits2::e2MicromapBuildInputReadOnlyEXT: return "e2MicromapBuildInputReadOnlyEXT";
		case BufferUsageBits2::e2MicromapStorageEXT: return "e2MicromapStorageEXT";
		case BufferUsageBits2::e2DataGraphForeignDescriptorARM: return "e2DataGraphForeignDescriptorARM";
		case BufferUsageBits2::e2TileMemoryQCOM: return "e2TileMemoryQCOM";
		case BufferUsageBits2::e2MemoryDecompressionEXT: return "e2MemoryDecompressionEXT";
		case BufferUsageBits2::e2PreprocessBufferEXT: return "e2PreprocessBufferEXT";
		default: return nullptr;
	}
}
inline const char* name(HostImageCopyBits val) {
	switch(val) {
		case HostImageCopyBits::memcpy: return "memcpy";
		default: return nullptr;
	}
}
inline std::string name(MemoryUnmapFlags val) {
	std::string ret;
	if((val & MemoryUnmapBits::reserveEXT) == MemoryUnmapBits::reserveEXT) ret += "reserveEXT | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(BufferUsageFlags2 val) {
	std::string ret;
	if((val & BufferUsageBits2::e2TransferSrc) == BufferUsageBits2::e2TransferSrc) ret += "e2TransferSrc | ";
	if((val & BufferUsageBits2::e2TransferDst) == BufferUsageBits2::e2TransferDst) ret += "e2TransferDst | ";
	if((val & BufferUsageBits2::e2UniformTexelBuffer) == BufferUsageBits2::e2UniformTexelBuffer) ret += "e2UniformTexelBuffer | ";
	if((val & BufferUsageBits2::e2StorageTexelBuffer) == BufferUsageBits2::e2StorageTexelBuffer) ret += "e2StorageTexelBuffer | ";
	if((val & BufferUsageBits2::e2UniformBuffer) == BufferUsageBits2::e2UniformBuffer) ret += "e2UniformBuffer | ";
	if((val & BufferUsageBits2::e2StorageBuffer) == BufferUsageBits2::e2StorageBuffer) ret += "e2StorageBuffer | ";
	if((val & BufferUsageBits2::e2IndexBuffer) == BufferUsageBits2::e2IndexBuffer) ret += "e2IndexBuffer | ";
	if((val & BufferUsageBits2::e2VertexBuffer) == BufferUsageBits2::e2VertexBuffer) ret += "e2VertexBuffer | ";
	if((val & BufferUsageBits2::e2IndirectBuffer) == BufferUsageBits2::e2IndirectBuffer) ret += "e2IndirectBuffer | ";
	if((val & BufferUsageBits2::e2ShaderDeviceAddress) == BufferUsageBits2::e2ShaderDeviceAddress) ret += "e2ShaderDeviceAddress | ";
	if((val & BufferUsageBits2::e2DescriptorHeapEXT) == BufferUsageBits2::e2DescriptorHeapEXT) ret += "e2DescriptorHeapEXT | ";
	if((val & BufferUsageBits2::e2ConditionalRenderingEXT) == BufferUsageBits2::e2ConditionalRenderingEXT) ret += "e2ConditionalRenderingEXT | ";
	if((val & BufferUsageBits2::e2ShaderBindingTableKHR) == BufferUsageBits2::e2ShaderBindingTableKHR) ret += "e2ShaderBindingTableKHR | ";
	if((val & BufferUsageBits2::e2TransformFeedbackBufferEXT) == BufferUsageBits2::e2TransformFeedbackBufferEXT) ret += "e2TransformFeedbackBufferEXT | ";
	if((val & BufferUsageBits2::e2TransformFeedbackCounterBufferEXT) == BufferUsageBits2::e2TransformFeedbackCounterBufferEXT) ret += "e2TransformFeedbackCounterBufferEXT | ";
	if((val & BufferUsageBits2::e2VideoDecodeSrcKHR) == BufferUsageBits2::e2VideoDecodeSrcKHR) ret += "e2VideoDecodeSrcKHR | ";
	if((val & BufferUsageBits2::e2VideoDecodeDstKHR) == BufferUsageBits2::e2VideoDecodeDstKHR) ret += "e2VideoDecodeDstKHR | ";
	if((val & BufferUsageBits2::e2VideoEncodeDstKHR) == BufferUsageBits2::e2VideoEncodeDstKHR) ret += "e2VideoEncodeDstKHR | ";
	if((val & BufferUsageBits2::e2VideoEncodeSrcKHR) == BufferUsageBits2::e2VideoEncodeSrcKHR) ret += "e2VideoEncodeSrcKHR | ";
	if((val & BufferUsageBits2::e2AccelerationStructureBuildInputReadOnlyKHR) == BufferUsageBits2::e2AccelerationStructureBuildInputReadOnlyKHR) ret += "e2AccelerationStructureBuildInputReadOnlyKHR | ";
	if((val & BufferUsageBits2::e2AccelerationStructureStorageKHR) == BufferUsageBits2::e2AccelerationStructureStorageKHR) ret += "e2AccelerationStructureStorageKHR | ";
	if((val & BufferUsageBits2::e2SamplerDescriptorBufferEXT) == BufferUsageBits2::e2SamplerDescriptorBufferEXT) ret += "e2SamplerDescriptorBufferEXT | ";
	if((val & BufferUsageBits2::e2ResourceDescriptorBufferEXT) == BufferUsageBits2::e2ResourceDescriptorBufferEXT) ret += "e2ResourceDescriptorBufferEXT | ";
	if((val & BufferUsageBits2::e2PushDescriptorsDescriptorBufferEXT) == BufferUsageBits2::e2PushDescriptorsDescriptorBufferEXT) ret += "e2PushDescriptorsDescriptorBufferEXT | ";
	if((val & BufferUsageBits2::e2MicromapBuildInputReadOnlyEXT) == BufferUsageBits2::e2MicromapBuildInputReadOnlyEXT) ret += "e2MicromapBuildInputReadOnlyEXT | ";
	if((val & BufferUsageBits2::e2MicromapStorageEXT) == BufferUsageBits2::e2MicromapStorageEXT) ret += "e2MicromapStorageEXT | ";
	if((val & BufferUsageBits2::e2DataGraphForeignDescriptorARM) == BufferUsageBits2::e2DataGraphForeignDescriptorARM) ret += "e2DataGraphForeignDescriptorARM | ";
	if((val & BufferUsageBits2::e2TileMemoryQCOM) == BufferUsageBits2::e2TileMemoryQCOM) ret += "e2TileMemoryQCOM | ";
	if((val & BufferUsageBits2::e2MemoryDecompressionEXT) == BufferUsageBits2::e2MemoryDecompressionEXT) ret += "e2MemoryDecompressionEXT | ";
	if((val & BufferUsageBits2::e2PreprocessBufferEXT) == BufferUsageBits2::e2PreprocessBufferEXT) ret += "e2PreprocessBufferEXT | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(HostImageCopyFlags val) {
	std::string ret;
	if((val & HostImageCopyBits::memcpy) == HostImageCopyBits::memcpy) ret += "memcpy | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(PipelineCacheHeaderVersion val) {
	switch(val) {
		case PipelineCacheHeaderVersion::one: return "one";
		case PipelineCacheHeaderVersion::safetyCriticalOne: return "safetyCriticalOne";
		case PipelineCacheHeaderVersion::dataGraphQCOM: return "dataGraphQCOM";
		default: return nullptr;
	}
}
inline const char* name(EventCreateBits val) {
	switch(val) {
		case EventCreateBits::deviceOnly: return "deviceOnly";
		default: return nullptr;
	}
}
inline const char* name(PipelineCacheCreateBits val) {
	switch(val) {
		case PipelineCacheCreateBits::externallySynchronized: return "externallySynchronized";
		case PipelineCacheCreateBits::readOnly: return "readOnly";
		case PipelineCacheCreateBits::useApplicationStorage: return "useApplicationStorage";
		case PipelineCacheCreateBits::internallySynchronizedMergeKHR: return "internallySynchronizedMergeKHR";
		default: return nullptr;
	}
}
inline const char* name(PipelineCreateBits val) {
	switch(val) {
		case PipelineCreateBits::disableOptimization: return "disableOptimization";
		case PipelineCreateBits::allowDerivatives: return "allowDerivatives";
		case PipelineCreateBits::derivative: return "derivative";
		case PipelineCreateBits::dispatchBase: return "dispatchBase";
		case PipelineCreateBits::viewIndexFromDeviceIndex: return "viewIndexFromDeviceIndex";
		case PipelineCreateBits::failOnPipelineCompileRequired: return "failOnPipelineCompileRequired";
		case PipelineCreateBits::earlyReturnOnFailure: return "earlyReturnOnFailure";
		case PipelineCreateBits::noProtectedAccess: return "noProtectedAccess";
		case PipelineCreateBits::protectedAccessOnly: return "protectedAccessOnly";
		case PipelineCreateBits::rayTracingNoNullAnyHitShadersKHR: return "rayTracingNoNullAnyHitShadersKHR";
		case PipelineCreateBits::rayTracingNoNullClosestHitShadersKHR: return "rayTracingNoNullClosestHitShadersKHR";
		case PipelineCreateBits::rayTracingNoNullMissShadersKHR: return "rayTracingNoNullMissShadersKHR";
		case PipelineCreateBits::rayTracingNoNullIntersectionShadersKHR: return "rayTracingNoNullIntersectionShadersKHR";
		case PipelineCreateBits::rayTracingSkipTrianglesKHR: return "rayTracingSkipTrianglesKHR";
		case PipelineCreateBits::rayTracingSkipAabbsKHR: return "rayTracingSkipAabbsKHR";
		case PipelineCreateBits::rayTracingShaderGroupHandleCaptureReplayKHR: return "rayTracingShaderGroupHandleCaptureReplayKHR";
		case PipelineCreateBits::deferCompileNV: return "deferCompileNV";
		case PipelineCreateBits::renderingFragmentDensityMapAttachmentEXT: return "renderingFragmentDensityMapAttachmentEXT";
		case PipelineCreateBits::renderingFragmentShadingRateAttachmentKHR: return "renderingFragmentShadingRateAttachmentKHR";
		case PipelineCreateBits::captureStatisticsKHR: return "captureStatisticsKHR";
		case PipelineCreateBits::captureInternalRepresentationsKHR: return "captureInternalRepresentationsKHR";
		case PipelineCreateBits::indirectBindableNV: return "indirectBindableNV";
		case PipelineCreateBits::libraryKHR: return "libraryKHR";
		case PipelineCreateBits::descriptorBufferEXT: return "descriptorBufferEXT";
		case PipelineCreateBits::retainLinkTimeOptimizationInfoEXT: return "retainLinkTimeOptimizationInfoEXT";
		case PipelineCreateBits::linkTimeOptimizationEXT: return "linkTimeOptimizationEXT";
		case PipelineCreateBits::rayTracingAllowMotionNV: return "rayTracingAllowMotionNV";
		case PipelineCreateBits::colorAttachmentFeedbackLoopEXT: return "colorAttachmentFeedbackLoopEXT";
		case PipelineCreateBits::depthStencilAttachmentFeedbackLoopEXT: return "depthStencilAttachmentFeedbackLoopEXT";
		case PipelineCreateBits::rayTracingOpacityMicromapEXT: return "rayTracingOpacityMicromapEXT";
		default: return nullptr;
	}
}
inline const char* name(PipelineLayoutCreateBits val) {
	switch(val) {
		case PipelineLayoutCreateBits::independentSetsEXT: return "independentSetsEXT";
		case PipelineLayoutCreateBits::noTaskShaderKHR: return "noTaskShaderKHR";
		default: return nullptr;
	}
}
inline const char* name(PipelineShaderStageCreateBits val) {
	switch(val) {
		case PipelineShaderStageCreateBits::allowVaryingSubgroupSize: return "allowVaryingSubgroupSize";
		case PipelineShaderStageCreateBits::requireFullSubgroups: return "requireFullSubgroups";
		default: return nullptr;
	}
}
inline const char* name(BorderColor val) {
	switch(val) {
		case BorderColor::floatTransparentBlack: return "floatTransparentBlack";
		case BorderColor::intTransparentBlack: return "intTransparentBlack";
		case BorderColor::floatOpaqueBlack: return "floatOpaqueBlack";
		case BorderColor::intOpaqueBlack: return "intOpaqueBlack";
		case BorderColor::floatOpaqueWhite: return "floatOpaqueWhite";
		case BorderColor::intOpaqueWhite: return "intOpaqueWhite";
		case BorderColor::floatCustomEXT: return "floatCustomEXT";
		case BorderColor::intCustomEXT: return "intCustomEXT";
		default: return nullptr;
	}
}
inline const char* name(Filter val) {
	switch(val) {
		case Filter::nearest: return "nearest";
		case Filter::linear: return "linear";
		case Filter::cubicEXT: return "cubicEXT";
		default: return nullptr;
	}
}
inline const char* name(SamplerAddressMode val) {
	switch(val) {
		case SamplerAddressMode::repeat: return "repeat";
		case SamplerAddressMode::mirroredRepeat: return "mirroredRepeat";
		case SamplerAddressMode::clampToEdge: return "clampToEdge";
		case SamplerAddressMode::clampToBorder: return "clampToBorder";
		case SamplerAddressMode::mirrorClampToEdge: return "mirrorClampToEdge";
		default: return nullptr;
	}
}
inline const char* name(SamplerCreateBits val) {
	switch(val) {
		case SamplerCreateBits::subsampledEXT: return "subsampledEXT";
		case SamplerCreateBits::subsampledCoarseReconstructionEXT: return "subsampledCoarseReconstructionEXT";
		case SamplerCreateBits::descriptorBufferCaptureReplayEXT: return "descriptorBufferCaptureReplayEXT";
		case SamplerCreateBits::nonSeamlessCubeMapEXT: return "nonSeamlessCubeMapEXT";
		case SamplerCreateBits::imageProcessingQCOM: return "imageProcessingQCOM";
		default: return nullptr;
	}
}
inline const char* name(CompareOp val) {
	switch(val) {
		case CompareOp::never: return "never";
		case CompareOp::less: return "less";
		case CompareOp::equal: return "equal";
		case CompareOp::lessOrEqual: return "lessOrEqual";
		case CompareOp::greater: return "greater";
		case CompareOp::notEqual: return "notEqual";
		case CompareOp::greaterOrEqual: return "greaterOrEqual";
		case CompareOp::always: return "always";
		default: return nullptr;
	}
}
inline const char* name(SamplerMipmapMode val) {
	switch(val) {
		case SamplerMipmapMode::nearest: return "nearest";
		case SamplerMipmapMode::linear: return "linear";
		default: return nullptr;
	}
}
inline const char* name(DescriptorType val) {
	switch(val) {
		case DescriptorType::sampler: return "sampler";
		case DescriptorType::combinedImageSampler: return "combinedImageSampler";
		case DescriptorType::sampledImage: return "sampledImage";
		case DescriptorType::storageImage: return "storageImage";
		case DescriptorType::uniformTexelBuffer: return "uniformTexelBuffer";
		case DescriptorType::storageTexelBuffer: return "storageTexelBuffer";
		case DescriptorType::uniformBuffer: return "uniformBuffer";
		case DescriptorType::storageBuffer: return "storageBuffer";
		case DescriptorType::uniformBufferDynamic: return "uniformBufferDynamic";
		case DescriptorType::storageBufferDynamic: return "storageBufferDynamic";
		case DescriptorType::inputAttachment: return "inputAttachment";
		case DescriptorType::inlineUniformBlock: return "inlineUniformBlock";
		case DescriptorType::accelerationStructureKHR: return "accelerationStructureKHR";
		case DescriptorType::accelerationStructureNV: return "accelerationStructureNV";
		case DescriptorType::sampleWeightImageQCOM: return "sampleWeightImageQCOM";
		case DescriptorType::blockMatchImageQCOM: return "blockMatchImageQCOM";
		case DescriptorType::tensorARM: return "tensorARM";
		case DescriptorType::mutableEXT: return "mutableEXT";
		case DescriptorType::partitionedAccelerationStructureNV: return "partitionedAccelerationStructureNV";
		default: return nullptr;
	}
}
inline const char* name(DescriptorPoolCreateBits val) {
	switch(val) {
		case DescriptorPoolCreateBits::freeDescriptorSet: return "freeDescriptorSet";
		case DescriptorPoolCreateBits::updateAfterBind: return "updateAfterBind";
		case DescriptorPoolCreateBits::hostOnlyEXT: return "hostOnlyEXT";
		case DescriptorPoolCreateBits::allowOverallocationSetsNV: return "allowOverallocationSetsNV";
		case DescriptorPoolCreateBits::allowOverallocationPoolsNV: return "allowOverallocationPoolsNV";
		default: return nullptr;
	}
}
inline const char* name(DescriptorSetLayoutCreateBits val) {
	switch(val) {
		case DescriptorSetLayoutCreateBits::updateAfterBindPool: return "updateAfterBindPool";
		case DescriptorSetLayoutCreateBits::pushDescriptor: return "pushDescriptor";
		case DescriptorSetLayoutCreateBits::descriptorBufferEXT: return "descriptorBufferEXT";
		case DescriptorSetLayoutCreateBits::embeddedImmutableSamplersEXT: return "embeddedImmutableSamplersEXT";
		case DescriptorSetLayoutCreateBits::indirectBindableNV: return "indirectBindableNV";
		case DescriptorSetLayoutCreateBits::hostOnlyPoolEXT: return "hostOnlyPoolEXT";
		case DescriptorSetLayoutCreateBits::perStageNV: return "perStageNV";
		default: return nullptr;
	}
}
inline const char* name(PipelineBindPoint val) {
	switch(val) {
		case PipelineBindPoint::graphics: return "graphics";
		case PipelineBindPoint::compute: return "compute";
		case PipelineBindPoint::rayTracingKHR: return "rayTracingKHR";
		case PipelineBindPoint::subpassShadingHUAWEI: return "subpassShadingHUAWEI";
		case PipelineBindPoint::dataGraphARM: return "dataGraphARM";
		default: return nullptr;
	}
}
inline std::string name(EventCreateFlags val) {
	std::string ret;
	if((val & EventCreateBits::deviceOnly) == EventCreateBits::deviceOnly) ret += "deviceOnly | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(PipelineCacheCreateFlags val) {
	std::string ret;
	if((val & PipelineCacheCreateBits::externallySynchronized) == PipelineCacheCreateBits::externallySynchronized) ret += "externallySynchronized | ";
	if((val & PipelineCacheCreateBits::readOnly) == PipelineCacheCreateBits::readOnly) ret += "readOnly | ";
	if((val & PipelineCacheCreateBits::useApplicationStorage) == PipelineCacheCreateBits::useApplicationStorage) ret += "useApplicationStorage | ";
	if((val & PipelineCacheCreateBits::internallySynchronizedMergeKHR) == PipelineCacheCreateBits::internallySynchronizedMergeKHR) ret += "internallySynchronizedMergeKHR | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(PipelineCreateFlags val) {
	std::string ret;
	if((val & PipelineCreateBits::disableOptimization) == PipelineCreateBits::disableOptimization) ret += "disableOptimization | ";
	if((val & PipelineCreateBits::allowDerivatives) == PipelineCreateBits::allowDerivatives) ret += "allowDerivatives | ";
	if((val & PipelineCreateBits::derivative) == PipelineCreateBits::derivative) ret += "derivative | ";
	if((val & PipelineCreateBits::dispatchBase) == PipelineCreateBits::dispatchBase) ret += "dispatchBase | ";
	if((val & PipelineCreateBits::viewIndexFromDeviceIndex) == PipelineCreateBits::viewIndexFromDeviceIndex) ret += "viewIndexFromDeviceIndex | ";
	if((val & PipelineCreateBits::failOnPipelineCompileRequired) == PipelineCreateBits::failOnPipelineCompileRequired) ret += "failOnPipelineCompileRequired | ";
	if((val & PipelineCreateBits::earlyReturnOnFailure) == PipelineCreateBits::earlyReturnOnFailure) ret += "earlyReturnOnFailure | ";
	if((val & PipelineCreateBits::noProtectedAccess) == PipelineCreateBits::noProtectedAccess) ret += "noProtectedAccess | ";
	if((val & PipelineCreateBits::protectedAccessOnly) == PipelineCreateBits::protectedAccessOnly) ret += "protectedAccessOnly | ";
	if((val & PipelineCreateBits::rayTracingNoNullAnyHitShadersKHR) == PipelineCreateBits::rayTracingNoNullAnyHitShadersKHR) ret += "rayTracingNoNullAnyHitShadersKHR | ";
	if((val & PipelineCreateBits::rayTracingNoNullClosestHitShadersKHR) == PipelineCreateBits::rayTracingNoNullClosestHitShadersKHR) ret += "rayTracingNoNullClosestHitShadersKHR | ";
	if((val & PipelineCreateBits::rayTracingNoNullMissShadersKHR) == PipelineCreateBits::rayTracingNoNullMissShadersKHR) ret += "rayTracingNoNullMissShadersKHR | ";
	if((val & PipelineCreateBits::rayTracingNoNullIntersectionShadersKHR) == PipelineCreateBits::rayTracingNoNullIntersectionShadersKHR) ret += "rayTracingNoNullIntersectionShadersKHR | ";
	if((val & PipelineCreateBits::rayTracingSkipTrianglesKHR) == PipelineCreateBits::rayTracingSkipTrianglesKHR) ret += "rayTracingSkipTrianglesKHR | ";
	if((val & PipelineCreateBits::rayTracingSkipAabbsKHR) == PipelineCreateBits::rayTracingSkipAabbsKHR) ret += "rayTracingSkipAabbsKHR | ";
	if((val & PipelineCreateBits::rayTracingShaderGroupHandleCaptureReplayKHR) == PipelineCreateBits::rayTracingShaderGroupHandleCaptureReplayKHR) ret += "rayTracingShaderGroupHandleCaptureReplayKHR | ";
	if((val & PipelineCreateBits::deferCompileNV) == PipelineCreateBits::deferCompileNV) ret += "deferCompileNV | ";
	if((val & PipelineCreateBits::renderingFragmentDensityMapAttachmentEXT) == PipelineCreateBits::renderingFragmentDensityMapAttachmentEXT) ret += "renderingFragmentDensityMapAttachmentEXT | ";
	if((val & PipelineCreateBits::renderingFragmentShadingRateAttachmentKHR) == PipelineCreateBits::renderingFragmentShadingRateAttachmentKHR) ret += "renderingFragmentShadingRateAttachmentKHR | ";
	if((val & PipelineCreateBits::captureStatisticsKHR) == PipelineCreateBits::captureStatisticsKHR) ret += "captureStatisticsKHR | ";
	if((val & PipelineCreateBits::captureInternalRepresentationsKHR) == PipelineCreateBits::captureInternalRepresentationsKHR) ret += "captureInternalRepresentationsKHR | ";
	if((val & PipelineCreateBits::indirectBindableNV) == PipelineCreateBits::indirectBindableNV) ret += "indirectBindableNV | ";
	if((val & PipelineCreateBits::libraryKHR) == PipelineCreateBits::libraryKHR) ret += "libraryKHR | ";
	if((val & PipelineCreateBits::descriptorBufferEXT) == PipelineCreateBits::descriptorBufferEXT) ret += "descriptorBufferEXT | ";
	if((val & PipelineCreateBits::retainLinkTimeOptimizationInfoEXT) == PipelineCreateBits::retainLinkTimeOptimizationInfoEXT) ret += "retainLinkTimeOptimizationInfoEXT | ";
	if((val & PipelineCreateBits::linkTimeOptimizationEXT) == PipelineCreateBits::linkTimeOptimizationEXT) ret += "linkTimeOptimizationEXT | ";
	if((val & PipelineCreateBits::rayTracingAllowMotionNV) == PipelineCreateBits::rayTracingAllowMotionNV) ret += "rayTracingAllowMotionNV | ";
	if((val & PipelineCreateBits::colorAttachmentFeedbackLoopEXT) == PipelineCreateBits::colorAttachmentFeedbackLoopEXT) ret += "colorAttachmentFeedbackLoopEXT | ";
	if((val & PipelineCreateBits::depthStencilAttachmentFeedbackLoopEXT) == PipelineCreateBits::depthStencilAttachmentFeedbackLoopEXT) ret += "depthStencilAttachmentFeedbackLoopEXT | ";
	if((val & PipelineCreateBits::rayTracingOpacityMicromapEXT) == PipelineCreateBits::rayTracingOpacityMicromapEXT) ret += "rayTracingOpacityMicromapEXT | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(PipelineLayoutCreateFlags val) {
	std::string ret;
	if((val & PipelineLayoutCreateBits::independentSetsEXT) == PipelineLayoutCreateBits::independentSetsEXT) ret += "independentSetsEXT | ";
	if((val & PipelineLayoutCreateBits::noTaskShaderKHR) == PipelineLayoutCreateBits::noTaskShaderKHR) ret += "noTaskShaderKHR | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(PipelineShaderStageCreateFlags val) {
	std::string ret;
	if((val & PipelineShaderStageCreateBits::allowVaryingSubgroupSize) == PipelineShaderStageCreateBits::allowVaryingSubgroupSize) ret += "allowVaryingSubgroupSize | ";
	if((val & PipelineShaderStageCreateBits::requireFullSubgroups) == PipelineShaderStageCreateBits::requireFullSubgroups) ret += "requireFullSubgroups | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(SamplerCreateFlags val) {
	std::string ret;
	if((val & SamplerCreateBits::subsampledEXT) == SamplerCreateBits::subsampledEXT) ret += "subsampledEXT | ";
	if((val & SamplerCreateBits::subsampledCoarseReconstructionEXT) == SamplerCreateBits::subsampledCoarseReconstructionEXT) ret += "subsampledCoarseReconstructionEXT | ";
	if((val & SamplerCreateBits::descriptorBufferCaptureReplayEXT) == SamplerCreateBits::descriptorBufferCaptureReplayEXT) ret += "descriptorBufferCaptureReplayEXT | ";
	if((val & SamplerCreateBits::nonSeamlessCubeMapEXT) == SamplerCreateBits::nonSeamlessCubeMapEXT) ret += "nonSeamlessCubeMapEXT | ";
	if((val & SamplerCreateBits::imageProcessingQCOM) == SamplerCreateBits::imageProcessingQCOM) ret += "imageProcessingQCOM | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(DescriptorPoolCreateFlags val) {
	std::string ret;
	if((val & DescriptorPoolCreateBits::freeDescriptorSet) == DescriptorPoolCreateBits::freeDescriptorSet) ret += "freeDescriptorSet | ";
	if((val & DescriptorPoolCreateBits::updateAfterBind) == DescriptorPoolCreateBits::updateAfterBind) ret += "updateAfterBind | ";
	if((val & DescriptorPoolCreateBits::hostOnlyEXT) == DescriptorPoolCreateBits::hostOnlyEXT) ret += "hostOnlyEXT | ";
	if((val & DescriptorPoolCreateBits::allowOverallocationSetsNV) == DescriptorPoolCreateBits::allowOverallocationSetsNV) ret += "allowOverallocationSetsNV | ";
	if((val & DescriptorPoolCreateBits::allowOverallocationPoolsNV) == DescriptorPoolCreateBits::allowOverallocationPoolsNV) ret += "allowOverallocationPoolsNV | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(DescriptorSetLayoutCreateFlags val) {
	std::string ret;
	if((val & DescriptorSetLayoutCreateBits::updateAfterBindPool) == DescriptorSetLayoutCreateBits::updateAfterBindPool) ret += "updateAfterBindPool | ";
	if((val & DescriptorSetLayoutCreateBits::pushDescriptor) == DescriptorSetLayoutCreateBits::pushDescriptor) ret += "pushDescriptor | ";
	if((val & DescriptorSetLayoutCreateBits::descriptorBufferEXT) == DescriptorSetLayoutCreateBits::descriptorBufferEXT) ret += "descriptorBufferEXT | ";
	if((val & DescriptorSetLayoutCreateBits::embeddedImmutableSamplersEXT) == DescriptorSetLayoutCreateBits::embeddedImmutableSamplersEXT) ret += "embeddedImmutableSamplersEXT | ";
	if((val & DescriptorSetLayoutCreateBits::indirectBindableNV) == DescriptorSetLayoutCreateBits::indirectBindableNV) ret += "indirectBindableNV | ";
	if((val & DescriptorSetLayoutCreateBits::hostOnlyPoolEXT) == DescriptorSetLayoutCreateBits::hostOnlyPoolEXT) ret += "hostOnlyPoolEXT | ";
	if((val & DescriptorSetLayoutCreateBits::perStageNV) == DescriptorSetLayoutCreateBits::perStageNV) ret += "perStageNV | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(DescriptorUpdateTemplateType val) {
	switch(val) {
		case DescriptorUpdateTemplateType::descriptorSet: return "descriptorSet";
		case DescriptorUpdateTemplateType::pushDescriptors: return "pushDescriptors";
		default: return nullptr;
	}
}
inline const char* name(SamplerYcbcrModelConversion val) {
	switch(val) {
		case SamplerYcbcrModelConversion::rgbIDentity: return "rgbIDentity";
		case SamplerYcbcrModelConversion::ycbcrIDentity: return "ycbcrIDentity";
		case SamplerYcbcrModelConversion::ycbcr709: return "ycbcr709";
		case SamplerYcbcrModelConversion::ycbcr601: return "ycbcr601";
		case SamplerYcbcrModelConversion::ycbcr2020: return "ycbcr2020";
		default: return nullptr;
	}
}
inline const char* name(SamplerYcbcrRange val) {
	switch(val) {
		case SamplerYcbcrRange::ituFull: return "ituFull";
		case SamplerYcbcrRange::ituNarrow: return "ituNarrow";
		default: return nullptr;
	}
}
inline const char* name(ChromaLocation val) {
	switch(val) {
		case ChromaLocation::cositedEven: return "cositedEven";
		case ChromaLocation::midpoint: return "midpoint";
		default: return nullptr;
	}
}
inline const char* name(DescriptorBindingBits val) {
	switch(val) {
		case DescriptorBindingBits::updateAfterBind: return "updateAfterBind";
		case DescriptorBindingBits::updateUnusedWhilePending: return "updateUnusedWhilePending";
		case DescriptorBindingBits::partiallyBound: return "partiallyBound";
		case DescriptorBindingBits::variableDescriptorCount: return "variableDescriptorCount";
		default: return nullptr;
	}
}
inline const char* name(SamplerReductionMode val) {
	switch(val) {
		case SamplerReductionMode::weightedAverage: return "weightedAverage";
		case SamplerReductionMode::min: return "min";
		case SamplerReductionMode::max: return "max";
		case SamplerReductionMode::weightedAverageRangeclampQCOM: return "weightedAverageRangeclampQCOM";
		default: return nullptr;
	}
}
inline std::string name(DescriptorBindingFlags val) {
	std::string ret;
	if((val & DescriptorBindingBits::updateAfterBind) == DescriptorBindingBits::updateAfterBind) ret += "updateAfterBind | ";
	if((val & DescriptorBindingBits::updateUnusedWhilePending) == DescriptorBindingBits::updateUnusedWhilePending) ret += "updateUnusedWhilePending | ";
	if((val & DescriptorBindingBits::partiallyBound) == DescriptorBindingBits::partiallyBound) ret += "partiallyBound | ";
	if((val & DescriptorBindingBits::variableDescriptorCount) == DescriptorBindingBits::variableDescriptorCount) ret += "variableDescriptorCount | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(PipelineCreationFeedbackBits val) {
	switch(val) {
		case PipelineCreationFeedbackBits::valid: return "valid";
		case PipelineCreationFeedbackBits::applicationPipelineCacheHit: return "applicationPipelineCacheHit";
		case PipelineCreationFeedbackBits::basePipelineAcceleration: return "basePipelineAcceleration";
		default: return nullptr;
	}
}
inline std::string name(PipelineCreationFeedbackFlags val) {
	std::string ret;
	if((val & PipelineCreationFeedbackBits::valid) == PipelineCreationFeedbackBits::valid) ret += "valid | ";
	if((val & PipelineCreationFeedbackBits::applicationPipelineCacheHit) == PipelineCreationFeedbackBits::applicationPipelineCacheHit) ret += "applicationPipelineCacheHit | ";
	if((val & PipelineCreationFeedbackBits::basePipelineAcceleration) == PipelineCreationFeedbackBits::basePipelineAcceleration) ret += "basePipelineAcceleration | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(PipelineCreateBits2 val) {
	switch(val) {
		case PipelineCreateBits2::e2DisableOptimization: return "e2DisableOptimization";
		case PipelineCreateBits2::e2AllowDerivatives: return "e2AllowDerivatives";
		case PipelineCreateBits2::e2Derivative: return "e2Derivative";
		case PipelineCreateBits2::e2ViewIndexFromDeviceIndex: return "e2ViewIndexFromDeviceIndex";
		case PipelineCreateBits2::e2DispatchBase: return "e2DispatchBase";
		case PipelineCreateBits2::e2FailOnPipelineCompileRequired: return "e2FailOnPipelineCompileRequired";
		case PipelineCreateBits2::e2EarlyReturnOnFailure: return "e2EarlyReturnOnFailure";
		case PipelineCreateBits2::e2NoProtectedAccess: return "e2NoProtectedAccess";
		case PipelineCreateBits2::e2ProtectedAccessOnly: return "e2ProtectedAccessOnly";
		case PipelineCreateBits2::e2DescriptorHeapEXT: return "e2DescriptorHeapEXT";
		case PipelineCreateBits2::e2RayTracingAllowSpheresAndLinearSweptSpheresNV: return "e2RayTracingAllowSpheresAndLinearSweptSpheresNV";
		case PipelineCreateBits2::e2EnableLegacyDitheringEXT: return "e2EnableLegacyDitheringEXT";
		case PipelineCreateBits2::e2DeferCompileNV: return "e2DeferCompileNV";
		case PipelineCreateBits2::e2CaptureStatisticsKHR: return "e2CaptureStatisticsKHR";
		case PipelineCreateBits2::e2CaptureInternalRepresentationsKHR: return "e2CaptureInternalRepresentationsKHR";
		case PipelineCreateBits2::e2LinkTimeOptimizationEXT: return "e2LinkTimeOptimizationEXT";
		case PipelineCreateBits2::e2RetainLinkTimeOptimizationInfoEXT: return "e2RetainLinkTimeOptimizationInfoEXT";
		case PipelineCreateBits2::e2LibraryKHR: return "e2LibraryKHR";
		case PipelineCreateBits2::e2RayTracingSkipTrianglesKHR: return "e2RayTracingSkipTrianglesKHR";
		case PipelineCreateBits2::e2RayTracingSkipAabbsKHR: return "e2RayTracingSkipAabbsKHR";
		case PipelineCreateBits2::e2RayTracingNoNullAnyHitShadersKHR: return "e2RayTracingNoNullAnyHitShadersKHR";
		case PipelineCreateBits2::e2RayTracingNoNullClosestHitShadersKHR: return "e2RayTracingNoNullClosestHitShadersKHR";
		case PipelineCreateBits2::e2RayTracingNoNullMissShadersKHR: return "e2RayTracingNoNullMissShadersKHR";
		case PipelineCreateBits2::e2RayTracingNoNullIntersectionShadersKHR: return "e2RayTracingNoNullIntersectionShadersKHR";
		case PipelineCreateBits2::e2RayTracingShaderGroupHandleCaptureReplayKHR: return "e2RayTracingShaderGroupHandleCaptureReplayKHR";
		case PipelineCreateBits2::e2IndirectBindableNV: return "e2IndirectBindableNV";
		case PipelineCreateBits2::e2RayTracingAllowMotionNV: return "e2RayTracingAllowMotionNV";
		case PipelineCreateBits2::e2RenderingFragmentShadingRateAttachmentKHR: return "e2RenderingFragmentShadingRateAttachmentKHR";
		case PipelineCreateBits2::e2RenderingFragmentDensityMapAttachmentEXT: return "e2RenderingFragmentDensityMapAttachmentEXT";
		case PipelineCreateBits2::e2RayTracingOpacityMicromapEXT: return "e2RayTracingOpacityMicromapEXT";
		case PipelineCreateBits2::e2ColorAttachmentFeedbackLoopEXT: return "e2ColorAttachmentFeedbackLoopEXT";
		case PipelineCreateBits2::e2DepthStencilAttachmentFeedbackLoopEXT: return "e2DepthStencilAttachmentFeedbackLoopEXT";
		case PipelineCreateBits2::e2RayTracingDisplacementMicromapNV: return "e2RayTracingDisplacementMicromapNV";
		case PipelineCreateBits2::e2DescriptorBufferEXT: return "e2DescriptorBufferEXT";
		case PipelineCreateBits2::e2DisallowOpacityMicromapARM: return "e2DisallowOpacityMicromapARM";
		case PipelineCreateBits2::e2InstrumentShadersARM: return "e2InstrumentShadersARM";
		case PipelineCreateBits2::e2CaptureDataKHR: return "e2CaptureDataKHR";
		case PipelineCreateBits2::e2IndirectBindableEXT: return "e2IndirectBindableEXT";
		case PipelineCreateBits2::e2PerLayerFragmentDensityVALVE: return "e2PerLayerFragmentDensityVALVE";
		case PipelineCreateBits2::e264BitIndexingEXT: return "e264BitIndexingEXT";
		default: return nullptr;
	}
}
inline std::string name(PipelineCreateFlags2 val) {
	std::string ret;
	if((val & PipelineCreateBits2::e2DisableOptimization) == PipelineCreateBits2::e2DisableOptimization) ret += "e2DisableOptimization | ";
	if((val & PipelineCreateBits2::e2AllowDerivatives) == PipelineCreateBits2::e2AllowDerivatives) ret += "e2AllowDerivatives | ";
	if((val & PipelineCreateBits2::e2Derivative) == PipelineCreateBits2::e2Derivative) ret += "e2Derivative | ";
	if((val & PipelineCreateBits2::e2ViewIndexFromDeviceIndex) == PipelineCreateBits2::e2ViewIndexFromDeviceIndex) ret += "e2ViewIndexFromDeviceIndex | ";
	if((val & PipelineCreateBits2::e2DispatchBase) == PipelineCreateBits2::e2DispatchBase) ret += "e2DispatchBase | ";
	if((val & PipelineCreateBits2::e2FailOnPipelineCompileRequired) == PipelineCreateBits2::e2FailOnPipelineCompileRequired) ret += "e2FailOnPipelineCompileRequired | ";
	if((val & PipelineCreateBits2::e2EarlyReturnOnFailure) == PipelineCreateBits2::e2EarlyReturnOnFailure) ret += "e2EarlyReturnOnFailure | ";
	if((val & PipelineCreateBits2::e2NoProtectedAccess) == PipelineCreateBits2::e2NoProtectedAccess) ret += "e2NoProtectedAccess | ";
	if((val & PipelineCreateBits2::e2ProtectedAccessOnly) == PipelineCreateBits2::e2ProtectedAccessOnly) ret += "e2ProtectedAccessOnly | ";
	if((val & PipelineCreateBits2::e2DescriptorHeapEXT) == PipelineCreateBits2::e2DescriptorHeapEXT) ret += "e2DescriptorHeapEXT | ";
	if((val & PipelineCreateBits2::e2RayTracingAllowSpheresAndLinearSweptSpheresNV) == PipelineCreateBits2::e2RayTracingAllowSpheresAndLinearSweptSpheresNV) ret += "e2RayTracingAllowSpheresAndLinearSweptSpheresNV | ";
	if((val & PipelineCreateBits2::e2EnableLegacyDitheringEXT) == PipelineCreateBits2::e2EnableLegacyDitheringEXT) ret += "e2EnableLegacyDitheringEXT | ";
	if((val & PipelineCreateBits2::e2DeferCompileNV) == PipelineCreateBits2::e2DeferCompileNV) ret += "e2DeferCompileNV | ";
	if((val & PipelineCreateBits2::e2CaptureStatisticsKHR) == PipelineCreateBits2::e2CaptureStatisticsKHR) ret += "e2CaptureStatisticsKHR | ";
	if((val & PipelineCreateBits2::e2CaptureInternalRepresentationsKHR) == PipelineCreateBits2::e2CaptureInternalRepresentationsKHR) ret += "e2CaptureInternalRepresentationsKHR | ";
	if((val & PipelineCreateBits2::e2LinkTimeOptimizationEXT) == PipelineCreateBits2::e2LinkTimeOptimizationEXT) ret += "e2LinkTimeOptimizationEXT | ";
	if((val & PipelineCreateBits2::e2RetainLinkTimeOptimizationInfoEXT) == PipelineCreateBits2::e2RetainLinkTimeOptimizationInfoEXT) ret += "e2RetainLinkTimeOptimizationInfoEXT | ";
	if((val & PipelineCreateBits2::e2LibraryKHR) == PipelineCreateBits2::e2LibraryKHR) ret += "e2LibraryKHR | ";
	if((val & PipelineCreateBits2::e2RayTracingSkipTrianglesKHR) == PipelineCreateBits2::e2RayTracingSkipTrianglesKHR) ret += "e2RayTracingSkipTrianglesKHR | ";
	if((val & PipelineCreateBits2::e2RayTracingSkipAabbsKHR) == PipelineCreateBits2::e2RayTracingSkipAabbsKHR) ret += "e2RayTracingSkipAabbsKHR | ";
	if((val & PipelineCreateBits2::e2RayTracingNoNullAnyHitShadersKHR) == PipelineCreateBits2::e2RayTracingNoNullAnyHitShadersKHR) ret += "e2RayTracingNoNullAnyHitShadersKHR | ";
	if((val & PipelineCreateBits2::e2RayTracingNoNullClosestHitShadersKHR) == PipelineCreateBits2::e2RayTracingNoNullClosestHitShadersKHR) ret += "e2RayTracingNoNullClosestHitShadersKHR | ";
	if((val & PipelineCreateBits2::e2RayTracingNoNullMissShadersKHR) == PipelineCreateBits2::e2RayTracingNoNullMissShadersKHR) ret += "e2RayTracingNoNullMissShadersKHR | ";
	if((val & PipelineCreateBits2::e2RayTracingNoNullIntersectionShadersKHR) == PipelineCreateBits2::e2RayTracingNoNullIntersectionShadersKHR) ret += "e2RayTracingNoNullIntersectionShadersKHR | ";
	if((val & PipelineCreateBits2::e2RayTracingShaderGroupHandleCaptureReplayKHR) == PipelineCreateBits2::e2RayTracingShaderGroupHandleCaptureReplayKHR) ret += "e2RayTracingShaderGroupHandleCaptureReplayKHR | ";
	if((val & PipelineCreateBits2::e2IndirectBindableNV) == PipelineCreateBits2::e2IndirectBindableNV) ret += "e2IndirectBindableNV | ";
	if((val & PipelineCreateBits2::e2RayTracingAllowMotionNV) == PipelineCreateBits2::e2RayTracingAllowMotionNV) ret += "e2RayTracingAllowMotionNV | ";
	if((val & PipelineCreateBits2::e2RenderingFragmentShadingRateAttachmentKHR) == PipelineCreateBits2::e2RenderingFragmentShadingRateAttachmentKHR) ret += "e2RenderingFragmentShadingRateAttachmentKHR | ";
	if((val & PipelineCreateBits2::e2RenderingFragmentDensityMapAttachmentEXT) == PipelineCreateBits2::e2RenderingFragmentDensityMapAttachmentEXT) ret += "e2RenderingFragmentDensityMapAttachmentEXT | ";
	if((val & PipelineCreateBits2::e2RayTracingOpacityMicromapEXT) == PipelineCreateBits2::e2RayTracingOpacityMicromapEXT) ret += "e2RayTracingOpacityMicromapEXT | ";
	if((val & PipelineCreateBits2::e2ColorAttachmentFeedbackLoopEXT) == PipelineCreateBits2::e2ColorAttachmentFeedbackLoopEXT) ret += "e2ColorAttachmentFeedbackLoopEXT | ";
	if((val & PipelineCreateBits2::e2DepthStencilAttachmentFeedbackLoopEXT) == PipelineCreateBits2::e2DepthStencilAttachmentFeedbackLoopEXT) ret += "e2DepthStencilAttachmentFeedbackLoopEXT | ";
	if((val & PipelineCreateBits2::e2RayTracingDisplacementMicromapNV) == PipelineCreateBits2::e2RayTracingDisplacementMicromapNV) ret += "e2RayTracingDisplacementMicromapNV | ";
	if((val & PipelineCreateBits2::e2DescriptorBufferEXT) == PipelineCreateBits2::e2DescriptorBufferEXT) ret += "e2DescriptorBufferEXT | ";
	if((val & PipelineCreateBits2::e2DisallowOpacityMicromapARM) == PipelineCreateBits2::e2DisallowOpacityMicromapARM) ret += "e2DisallowOpacityMicromapARM | ";
	if((val & PipelineCreateBits2::e2InstrumentShadersARM) == PipelineCreateBits2::e2InstrumentShadersARM) ret += "e2InstrumentShadersARM | ";
	if((val & PipelineCreateBits2::e2CaptureDataKHR) == PipelineCreateBits2::e2CaptureDataKHR) ret += "e2CaptureDataKHR | ";
	if((val & PipelineCreateBits2::e2IndirectBindableEXT) == PipelineCreateBits2::e2IndirectBindableEXT) ret += "e2IndirectBindableEXT | ";
	if((val & PipelineCreateBits2::e2PerLayerFragmentDensityVALVE) == PipelineCreateBits2::e2PerLayerFragmentDensityVALVE) ret += "e2PerLayerFragmentDensityVALVE | ";
	if((val & PipelineCreateBits2::e264BitIndexingEXT) == PipelineCreateBits2::e264BitIndexingEXT) ret += "e264BitIndexingEXT | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(BlendFactor val) {
	switch(val) {
		case BlendFactor::zero: return "zero";
		case BlendFactor::one: return "one";
		case BlendFactor::srcColor: return "srcColor";
		case BlendFactor::oneMinusSrcColor: return "oneMinusSrcColor";
		case BlendFactor::dstColor: return "dstColor";
		case BlendFactor::oneMinusDstColor: return "oneMinusDstColor";
		case BlendFactor::srcAlpha: return "srcAlpha";
		case BlendFactor::oneMinusSrcAlpha: return "oneMinusSrcAlpha";
		case BlendFactor::dstAlpha: return "dstAlpha";
		case BlendFactor::oneMinusDstAlpha: return "oneMinusDstAlpha";
		case BlendFactor::constantColor: return "constantColor";
		case BlendFactor::oneMinusConstantColor: return "oneMinusConstantColor";
		case BlendFactor::constantAlpha: return "constantAlpha";
		case BlendFactor::oneMinusConstantAlpha: return "oneMinusConstantAlpha";
		case BlendFactor::srcAlphaSaturate: return "srcAlphaSaturate";
		case BlendFactor::src1Color: return "src1Color";
		case BlendFactor::oneMinusSrc1Color: return "oneMinusSrc1Color";
		case BlendFactor::src1Alpha: return "src1Alpha";
		case BlendFactor::oneMinusSrc1Alpha: return "oneMinusSrc1Alpha";
		default: return nullptr;
	}
}
inline const char* name(BlendOp val) {
	switch(val) {
		case BlendOp::add: return "add";
		case BlendOp::subtract: return "subtract";
		case BlendOp::reverseSubtract: return "reverseSubtract";
		case BlendOp::min: return "min";
		case BlendOp::max: return "max";
		case BlendOp::zeroEXT: return "zeroEXT";
		case BlendOp::srcEXT: return "srcEXT";
		case BlendOp::dstEXT: return "dstEXT";
		case BlendOp::srcOverEXT: return "srcOverEXT";
		case BlendOp::dstOverEXT: return "dstOverEXT";
		case BlendOp::srcInEXT: return "srcInEXT";
		case BlendOp::dstInEXT: return "dstInEXT";
		case BlendOp::srcOutEXT: return "srcOutEXT";
		case BlendOp::dstOutEXT: return "dstOutEXT";
		case BlendOp::srcAtopEXT: return "srcAtopEXT";
		case BlendOp::dstAtopEXT: return "dstAtopEXT";
		case BlendOp::xorEXT: return "xorEXT";
		case BlendOp::multiplyEXT: return "multiplyEXT";
		case BlendOp::screenEXT: return "screenEXT";
		case BlendOp::overlayEXT: return "overlayEXT";
		case BlendOp::darkenEXT: return "darkenEXT";
		case BlendOp::lightenEXT: return "lightenEXT";
		case BlendOp::colordodgeEXT: return "colordodgeEXT";
		case BlendOp::colorburnEXT: return "colorburnEXT";
		case BlendOp::hardlightEXT: return "hardlightEXT";
		case BlendOp::softlightEXT: return "softlightEXT";
		case BlendOp::differenceEXT: return "differenceEXT";
		case BlendOp::exclusionEXT: return "exclusionEXT";
		case BlendOp::invertEXT: return "invertEXT";
		case BlendOp::invertRgbEXT: return "invertRgbEXT";
		case BlendOp::lineardodgeEXT: return "lineardodgeEXT";
		case BlendOp::linearburnEXT: return "linearburnEXT";
		case BlendOp::vividlightEXT: return "vividlightEXT";
		case BlendOp::linearlightEXT: return "linearlightEXT";
		case BlendOp::pinlightEXT: return "pinlightEXT";
		case BlendOp::hardmixEXT: return "hardmixEXT";
		case BlendOp::hslHueEXT: return "hslHueEXT";
		case BlendOp::hslSaturationEXT: return "hslSaturationEXT";
		case BlendOp::hslColorEXT: return "hslColorEXT";
		case BlendOp::hslLuminosityEXT: return "hslLuminosityEXT";
		case BlendOp::plusEXT: return "plusEXT";
		case BlendOp::plusClampedEXT: return "plusClampedEXT";
		case BlendOp::plusClampedAlphaEXT: return "plusClampedAlphaEXT";
		case BlendOp::plusDarkerEXT: return "plusDarkerEXT";
		case BlendOp::minusEXT: return "minusEXT";
		case BlendOp::minusClampedEXT: return "minusClampedEXT";
		case BlendOp::contrastEXT: return "contrastEXT";
		case BlendOp::invertOvgEXT: return "invertOvgEXT";
		case BlendOp::redEXT: return "redEXT";
		case BlendOp::greenEXT: return "greenEXT";
		case BlendOp::blueEXT: return "blueEXT";
		default: return nullptr;
	}
}
inline const char* name(ColorComponentBits val) {
	switch(val) {
		case ColorComponentBits::r: return "r";
		case ColorComponentBits::g: return "g";
		case ColorComponentBits::b: return "b";
		case ColorComponentBits::a: return "a";
		default: return nullptr;
	}
}
inline const char* name(CullModeBits val) {
	switch(val) {
		case CullModeBits::none: return "none";
		case CullModeBits::front: return "front";
		case CullModeBits::back: return "back";
		case CullModeBits::frontAndBack: return "frontAndBack";
		default: return nullptr;
	}
}
inline const char* name(DynamicState val) {
	switch(val) {
		case DynamicState::viewport: return "viewport";
		case DynamicState::scissor: return "scissor";
		case DynamicState::lineWidth: return "lineWidth";
		case DynamicState::depthBias: return "depthBias";
		case DynamicState::blendConstants: return "blendConstants";
		case DynamicState::depthBounds: return "depthBounds";
		case DynamicState::stencilCompareMask: return "stencilCompareMask";
		case DynamicState::stencilWriteMask: return "stencilWriteMask";
		case DynamicState::stencilReference: return "stencilReference";
		case DynamicState::cullMode: return "cullMode";
		case DynamicState::frontFace: return "frontFace";
		case DynamicState::primitiveTopology: return "primitiveTopology";
		case DynamicState::viewportWithCount: return "viewportWithCount";
		case DynamicState::scissorWithCount: return "scissorWithCount";
		case DynamicState::vertexInputBindingStride: return "vertexInputBindingStride";
		case DynamicState::depthTestEnable: return "depthTestEnable";
		case DynamicState::depthWriteEnable: return "depthWriteEnable";
		case DynamicState::depthCompareOp: return "depthCompareOp";
		case DynamicState::depthBoundsTestEnable: return "depthBoundsTestEnable";
		case DynamicState::stencilTestEnable: return "stencilTestEnable";
		case DynamicState::stencilOp: return "stencilOp";
		case DynamicState::rasterizerDiscardEnable: return "rasterizerDiscardEnable";
		case DynamicState::depthBiasEnable: return "depthBiasEnable";
		case DynamicState::primitiveRestartEnable: return "primitiveRestartEnable";
		case DynamicState::lineStipple: return "lineStipple";
		case DynamicState::viewportWScalingNV: return "viewportWScalingNV";
		case DynamicState::discardRectangleEXT: return "discardRectangleEXT";
		case DynamicState::discardRectangleEnableEXT: return "discardRectangleEnableEXT";
		case DynamicState::discardRectangleModeEXT: return "discardRectangleModeEXT";
		case DynamicState::sampleLocationsEXT: return "sampleLocationsEXT";
		case DynamicState::rayTracingPipelineStackSizeKHR: return "rayTracingPipelineStackSizeKHR";
		case DynamicState::viewportShadingRatePaletteNV: return "viewportShadingRatePaletteNV";
		case DynamicState::viewportCoarseSampleOrderNV: return "viewportCoarseSampleOrderNV";
		case DynamicState::exclusiveScissorEnableNV: return "exclusiveScissorEnableNV";
		case DynamicState::exclusiveScissorNV: return "exclusiveScissorNV";
		case DynamicState::fragmentShadingRateKHR: return "fragmentShadingRateKHR";
		case DynamicState::vertexInputEXT: return "vertexInputEXT";
		case DynamicState::patchControlPointsEXT: return "patchControlPointsEXT";
		case DynamicState::logicOpEXT: return "logicOpEXT";
		case DynamicState::colorWriteEnableEXT: return "colorWriteEnableEXT";
		case DynamicState::depthClampEnableEXT: return "depthClampEnableEXT";
		case DynamicState::polygonModeEXT: return "polygonModeEXT";
		case DynamicState::rasterizationSamplesEXT: return "rasterizationSamplesEXT";
		case DynamicState::sampleMaskEXT: return "sampleMaskEXT";
		case DynamicState::alphaToCoverageEnableEXT: return "alphaToCoverageEnableEXT";
		case DynamicState::alphaToOneEnableEXT: return "alphaToOneEnableEXT";
		case DynamicState::logicOpEnableEXT: return "logicOpEnableEXT";
		case DynamicState::colorBlendEnableEXT: return "colorBlendEnableEXT";
		case DynamicState::colorBlendEquationEXT: return "colorBlendEquationEXT";
		case DynamicState::colorWriteMaskEXT: return "colorWriteMaskEXT";
		case DynamicState::tessellationDomainOriginEXT: return "tessellationDomainOriginEXT";
		case DynamicState::rasterizationStreamEXT: return "rasterizationStreamEXT";
		case DynamicState::conservativeRasterizationModeEXT: return "conservativeRasterizationModeEXT";
		case DynamicState::extraPrimitiveOverestimationSizeEXT: return "extraPrimitiveOverestimationSizeEXT";
		case DynamicState::depthClipEnableEXT: return "depthClipEnableEXT";
		case DynamicState::sampleLocationsEnableEXT: return "sampleLocationsEnableEXT";
		case DynamicState::colorBlendAdvancedEXT: return "colorBlendAdvancedEXT";
		case DynamicState::provokingVertexModeEXT: return "provokingVertexModeEXT";
		case DynamicState::lineRasterizationModeEXT: return "lineRasterizationModeEXT";
		case DynamicState::lineStippleEnableEXT: return "lineStippleEnableEXT";
		case DynamicState::depthClipNegativeOneToOneEXT: return "depthClipNegativeOneToOneEXT";
		case DynamicState::viewportWScalingEnableNV: return "viewportWScalingEnableNV";
		case DynamicState::viewportSwizzleNV: return "viewportSwizzleNV";
		case DynamicState::coverageToColorEnableNV: return "coverageToColorEnableNV";
		case DynamicState::coverageToColorLocationNV: return "coverageToColorLocationNV";
		case DynamicState::coverageModulationModeNV: return "coverageModulationModeNV";
		case DynamicState::coverageModulationTableEnableNV: return "coverageModulationTableEnableNV";
		case DynamicState::coverageModulationTableNV: return "coverageModulationTableNV";
		case DynamicState::shadingRateImageEnableNV: return "shadingRateImageEnableNV";
		case DynamicState::representativeFragmentTestEnableNV: return "representativeFragmentTestEnableNV";
		case DynamicState::coverageReductionModeNV: return "coverageReductionModeNV";
		case DynamicState::attachmentFeedbackLoopEnableEXT: return "attachmentFeedbackLoopEnableEXT";
		case DynamicState::depthClampRangeEXT: return "depthClampRangeEXT";
		default: return nullptr;
	}
}
inline const char* name(FrontFace val) {
	switch(val) {
		case FrontFace::counterClockwise: return "counterClockwise";
		case FrontFace::clockwise: return "clockwise";
		default: return nullptr;
	}
}
inline const char* name(LogicOp val) {
	switch(val) {
		case LogicOp::clear: return "clear";
		case LogicOp::eAnd: return "eAnd";
		case LogicOp::andReverse: return "andReverse";
		case LogicOp::copy: return "copy";
		case LogicOp::andInverted: return "andInverted";
		case LogicOp::noOp: return "noOp";
		case LogicOp::eXor: return "eXor";
		case LogicOp::eOr: return "eOr";
		case LogicOp::nor: return "nor";
		case LogicOp::equivalent: return "equivalent";
		case LogicOp::invert: return "invert";
		case LogicOp::orReverse: return "orReverse";
		case LogicOp::copyInverted: return "copyInverted";
		case LogicOp::orInverted: return "orInverted";
		case LogicOp::nand: return "nand";
		case LogicOp::set: return "set";
		default: return nullptr;
	}
}
inline const char* name(StencilOp val) {
	switch(val) {
		case StencilOp::keep: return "keep";
		case StencilOp::zero: return "zero";
		case StencilOp::replace: return "replace";
		case StencilOp::incrementAndClamp: return "incrementAndClamp";
		case StencilOp::decrementAndClamp: return "decrementAndClamp";
		case StencilOp::invert: return "invert";
		case StencilOp::incrementAndWrap: return "incrementAndWrap";
		case StencilOp::decrementAndWrap: return "decrementAndWrap";
		default: return nullptr;
	}
}
inline const char* name(VertexInputRate val) {
	switch(val) {
		case VertexInputRate::vertex: return "vertex";
		case VertexInputRate::instance: return "instance";
		default: return nullptr;
	}
}
inline const char* name(PipelineColorBlendStateCreateBits val) {
	switch(val) {
		case PipelineColorBlendStateCreateBits::rasterizationOrderAttachmentAccessEXT: return "rasterizationOrderAttachmentAccessEXT";
		default: return nullptr;
	}
}
inline const char* name(PipelineDepthStencilStateCreateBits val) {
	switch(val) {
		case PipelineDepthStencilStateCreateBits::rasterizationOrderAttachmentDepthAccessEXT: return "rasterizationOrderAttachmentDepthAccessEXT";
		case PipelineDepthStencilStateCreateBits::rasterizationOrderAttachmentStencilAccessEXT: return "rasterizationOrderAttachmentStencilAccessEXT";
		default: return nullptr;
	}
}
inline const char* name(PrimitiveTopology val) {
	switch(val) {
		case PrimitiveTopology::pointList: return "pointList";
		case PrimitiveTopology::lineList: return "lineList";
		case PrimitiveTopology::lineStrip: return "lineStrip";
		case PrimitiveTopology::triangleList: return "triangleList";
		case PrimitiveTopology::triangleStrip: return "triangleStrip";
		case PrimitiveTopology::triangleFan: return "triangleFan";
		case PrimitiveTopology::lineListWithAdjacency: return "lineListWithAdjacency";
		case PrimitiveTopology::lineStripWithAdjacency: return "lineStripWithAdjacency";
		case PrimitiveTopology::triangleListWithAdjacency: return "triangleListWithAdjacency";
		case PrimitiveTopology::triangleStripWithAdjacency: return "triangleStripWithAdjacency";
		case PrimitiveTopology::patchList: return "patchList";
		default: return nullptr;
	}
}
inline const char* name(PolygonMode val) {
	switch(val) {
		case PolygonMode::fill: return "fill";
		case PolygonMode::line: return "line";
		case PolygonMode::point: return "point";
		case PolygonMode::fillRectangleNV: return "fillRectangleNV";
		default: return nullptr;
	}
}
inline const char* name(AttachmentDescriptionBits val) {
	switch(val) {
		case AttachmentDescriptionBits::mayAlias: return "mayAlias";
		case AttachmentDescriptionBits::resolveSkipTransferFunctionKHR: return "resolveSkipTransferFunctionKHR";
		case AttachmentDescriptionBits::resolveEnableTransferFunctionKHR: return "resolveEnableTransferFunctionKHR";
		default: return nullptr;
	}
}
inline const char* name(AttachmentLoadOp val) {
	switch(val) {
		case AttachmentLoadOp::load: return "load";
		case AttachmentLoadOp::clear: return "clear";
		case AttachmentLoadOp::dontCare: return "dontCare";
		case AttachmentLoadOp::none: return "none";
		default: return nullptr;
	}
}
inline const char* name(AttachmentStoreOp val) {
	switch(val) {
		case AttachmentStoreOp::store: return "store";
		case AttachmentStoreOp::dontCare: return "dontCare";
		case AttachmentStoreOp::none: return "none";
		default: return nullptr;
	}
}
inline const char* name(FramebufferCreateBits val) {
	switch(val) {
		case FramebufferCreateBits::imageless: return "imageless";
		default: return nullptr;
	}
}
inline const char* name(RenderPassCreateBits val) {
	switch(val) {
		case RenderPassCreateBits::transformQCOM: return "transformQCOM";
		case RenderPassCreateBits::perLayerFragmentDensityVALVE: return "perLayerFragmentDensityVALVE";
		default: return nullptr;
	}
}
inline const char* name(SubpassDescriptionBits val) {
	switch(val) {
		case SubpassDescriptionBits::tileShadingApronQCOM: return "tileShadingApronQCOM";
		case SubpassDescriptionBits::rasterizationOrderAttachmentColorAccessEXT: return "rasterizationOrderAttachmentColorAccessEXT";
		case SubpassDescriptionBits::rasterizationOrderAttachmentDepthAccessEXT: return "rasterizationOrderAttachmentDepthAccessEXT";
		case SubpassDescriptionBits::rasterizationOrderAttachmentStencilAccessEXT: return "rasterizationOrderAttachmentStencilAccessEXT";
		case SubpassDescriptionBits::enableLegacyDitheringEXT: return "enableLegacyDitheringEXT";
		case SubpassDescriptionBits::fragmentRegionEXT: return "fragmentRegionEXT";
		case SubpassDescriptionBits::customResolveEXT: return "customResolveEXT";
		default: return nullptr;
	}
}
inline const char* name(StencilFaceBits val) {
	switch(val) {
		case StencilFaceBits::front: return "front";
		case StencilFaceBits::back: return "back";
		case StencilFaceBits::frontAndBack: return "frontAndBack";
		default: return nullptr;
	}
}
inline const char* name(SubpassContents val) {
	switch(val) {
		case SubpassContents::eInline: return "eInline";
		case SubpassContents::secondaryCommandBuffers: return "secondaryCommandBuffers";
		case SubpassContents::inlineAndSecondaryCommandBuffersKHR: return "inlineAndSecondaryCommandBuffersKHR";
		default: return nullptr;
	}
}
inline std::string name(ColorComponentFlags val) {
	std::string ret;
	if((val & ColorComponentBits::r) == ColorComponentBits::r) ret += "r | ";
	if((val & ColorComponentBits::g) == ColorComponentBits::g) ret += "g | ";
	if((val & ColorComponentBits::b) == ColorComponentBits::b) ret += "b | ";
	if((val & ColorComponentBits::a) == ColorComponentBits::a) ret += "a | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(CullModeFlags val) {
	std::string ret;
	if((val & CullModeBits::none) == CullModeBits::none) ret += "none | ";
	if((val & CullModeBits::front) == CullModeBits::front) ret += "front | ";
	if((val & CullModeBits::back) == CullModeBits::back) ret += "back | ";
	if((val & CullModeBits::frontAndBack) == CullModeBits::frontAndBack) ret += "frontAndBack | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(PipelineColorBlendStateCreateFlags val) {
	std::string ret;
	if((val & PipelineColorBlendStateCreateBits::rasterizationOrderAttachmentAccessEXT) == PipelineColorBlendStateCreateBits::rasterizationOrderAttachmentAccessEXT) ret += "rasterizationOrderAttachmentAccessEXT | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(PipelineDepthStencilStateCreateFlags val) {
	std::string ret;
	if((val & PipelineDepthStencilStateCreateBits::rasterizationOrderAttachmentDepthAccessEXT) == PipelineDepthStencilStateCreateBits::rasterizationOrderAttachmentDepthAccessEXT) ret += "rasterizationOrderAttachmentDepthAccessEXT | ";
	if((val & PipelineDepthStencilStateCreateBits::rasterizationOrderAttachmentStencilAccessEXT) == PipelineDepthStencilStateCreateBits::rasterizationOrderAttachmentStencilAccessEXT) ret += "rasterizationOrderAttachmentStencilAccessEXT | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(AttachmentDescriptionFlags val) {
	std::string ret;
	if((val & AttachmentDescriptionBits::mayAlias) == AttachmentDescriptionBits::mayAlias) ret += "mayAlias | ";
	if((val & AttachmentDescriptionBits::resolveSkipTransferFunctionKHR) == AttachmentDescriptionBits::resolveSkipTransferFunctionKHR) ret += "resolveSkipTransferFunctionKHR | ";
	if((val & AttachmentDescriptionBits::resolveEnableTransferFunctionKHR) == AttachmentDescriptionBits::resolveEnableTransferFunctionKHR) ret += "resolveEnableTransferFunctionKHR | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(FramebufferCreateFlags val) {
	std::string ret;
	if((val & FramebufferCreateBits::imageless) == FramebufferCreateBits::imageless) ret += "imageless | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(RenderPassCreateFlags val) {
	std::string ret;
	if((val & RenderPassCreateBits::transformQCOM) == RenderPassCreateBits::transformQCOM) ret += "transformQCOM | ";
	if((val & RenderPassCreateBits::perLayerFragmentDensityVALVE) == RenderPassCreateBits::perLayerFragmentDensityVALVE) ret += "perLayerFragmentDensityVALVE | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(SubpassDescriptionFlags val) {
	std::string ret;
	if((val & SubpassDescriptionBits::tileShadingApronQCOM) == SubpassDescriptionBits::tileShadingApronQCOM) ret += "tileShadingApronQCOM | ";
	if((val & SubpassDescriptionBits::rasterizationOrderAttachmentColorAccessEXT) == SubpassDescriptionBits::rasterizationOrderAttachmentColorAccessEXT) ret += "rasterizationOrderAttachmentColorAccessEXT | ";
	if((val & SubpassDescriptionBits::rasterizationOrderAttachmentDepthAccessEXT) == SubpassDescriptionBits::rasterizationOrderAttachmentDepthAccessEXT) ret += "rasterizationOrderAttachmentDepthAccessEXT | ";
	if((val & SubpassDescriptionBits::rasterizationOrderAttachmentStencilAccessEXT) == SubpassDescriptionBits::rasterizationOrderAttachmentStencilAccessEXT) ret += "rasterizationOrderAttachmentStencilAccessEXT | ";
	if((val & SubpassDescriptionBits::enableLegacyDitheringEXT) == SubpassDescriptionBits::enableLegacyDitheringEXT) ret += "enableLegacyDitheringEXT | ";
	if((val & SubpassDescriptionBits::fragmentRegionEXT) == SubpassDescriptionBits::fragmentRegionEXT) ret += "fragmentRegionEXT | ";
	if((val & SubpassDescriptionBits::customResolveEXT) == SubpassDescriptionBits::customResolveEXT) ret += "customResolveEXT | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(StencilFaceFlags val) {
	std::string ret;
	if((val & StencilFaceBits::front) == StencilFaceBits::front) ret += "front | ";
	if((val & StencilFaceBits::back) == StencilFaceBits::back) ret += "back | ";
	if((val & StencilFaceBits::frontAndBack) == StencilFaceBits::frontAndBack) ret += "frontAndBack | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(TessellationDomainOrigin val) {
	switch(val) {
		case TessellationDomainOrigin::upperLeft: return "upperLeft";
		case TessellationDomainOrigin::lowerLeft: return "lowerLeft";
		default: return nullptr;
	}
}
inline const char* name(RenderingBits val) {
	switch(val) {
		case RenderingBits::contentsSecondaryCommandBuffers: return "contentsSecondaryCommandBuffers";
		case RenderingBits::suspending: return "suspending";
		case RenderingBits::resuming: return "resuming";
		case RenderingBits::enableLegacyDitheringEXT: return "enableLegacyDitheringEXT";
		case RenderingBits::contentsInlineKHR: return "contentsInlineKHR";
		case RenderingBits::perLayerFragmentDensityVALVE: return "perLayerFragmentDensityVALVE";
		case RenderingBits::fragmentRegionEXT: return "fragmentRegionEXT";
		case RenderingBits::customResolveEXT: return "customResolveEXT";
		case RenderingBits::localReadConcurrentAccessControlKHR: return "localReadConcurrentAccessControlKHR";
		default: return nullptr;
	}
}
inline std::string name(RenderingFlags val) {
	std::string ret;
	if((val & RenderingBits::contentsSecondaryCommandBuffers) == RenderingBits::contentsSecondaryCommandBuffers) ret += "contentsSecondaryCommandBuffers | ";
	if((val & RenderingBits::suspending) == RenderingBits::suspending) ret += "suspending | ";
	if((val & RenderingBits::resuming) == RenderingBits::resuming) ret += "resuming | ";
	if((val & RenderingBits::enableLegacyDitheringEXT) == RenderingBits::enableLegacyDitheringEXT) ret += "enableLegacyDitheringEXT | ";
	if((val & RenderingBits::contentsInlineKHR) == RenderingBits::contentsInlineKHR) ret += "contentsInlineKHR | ";
	if((val & RenderingBits::perLayerFragmentDensityVALVE) == RenderingBits::perLayerFragmentDensityVALVE) ret += "perLayerFragmentDensityVALVE | ";
	if((val & RenderingBits::fragmentRegionEXT) == RenderingBits::fragmentRegionEXT) ret += "fragmentRegionEXT | ";
	if((val & RenderingBits::customResolveEXT) == RenderingBits::customResolveEXT) ret += "customResolveEXT | ";
	if((val & RenderingBits::localReadConcurrentAccessControlKHR) == RenderingBits::localReadConcurrentAccessControlKHR) ret += "localReadConcurrentAccessControlKHR | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(LineRasterizationMode val) {
	switch(val) {
		case LineRasterizationMode::eDefault: return "eDefault";
		case LineRasterizationMode::rectangular: return "rectangular";
		case LineRasterizationMode::bresenham: return "bresenham";
		case LineRasterizationMode::rectangularSmooth: return "rectangularSmooth";
		default: return nullptr;
	}
}
inline const char* name(SurfaceTransformBitsKHR val) {
	switch(val) {
		case SurfaceTransformBitsKHR::identity: return "identity";
		case SurfaceTransformBitsKHR::rotate90: return "rotate90";
		case SurfaceTransformBitsKHR::rotate180: return "rotate180";
		case SurfaceTransformBitsKHR::rotate270: return "rotate270";
		case SurfaceTransformBitsKHR::horizontalMirror: return "horizontalMirror";
		case SurfaceTransformBitsKHR::horizontalMirrorRotate90: return "horizontalMirrorRotate90";
		case SurfaceTransformBitsKHR::horizontalMirrorRotate180: return "horizontalMirrorRotate180";
		case SurfaceTransformBitsKHR::horizontalMirrorRotate270: return "horizontalMirrorRotate270";
		case SurfaceTransformBitsKHR::inherit: return "inherit";
		default: return nullptr;
	}
}
inline const char* name(PresentModeKHR val) {
	switch(val) {
		case PresentModeKHR::immediate: return "immediate";
		case PresentModeKHR::mailbox: return "mailbox";
		case PresentModeKHR::fifo: return "fifo";
		case PresentModeKHR::fifoRelaxed: return "fifoRelaxed";
		case PresentModeKHR::sharedDemandRefresh: return "sharedDemandRefresh";
		case PresentModeKHR::sharedContinuousRefresh: return "sharedContinuousRefresh";
		case PresentModeKHR::fifoLatestReady: return "fifoLatestReady";
		default: return nullptr;
	}
}
inline const char* name(ColorSpaceKHR val) {
	switch(val) {
		case ColorSpaceKHR::srgbNonlinear: return "srgbNonlinear";
		case ColorSpaceKHR::displayP3NonlinearEXT: return "displayP3NonlinearEXT";
		case ColorSpaceKHR::extendedSrgbLinearEXT: return "extendedSrgbLinearEXT";
		case ColorSpaceKHR::displayP3LinearEXT: return "displayP3LinearEXT";
		case ColorSpaceKHR::dciP3NonlinearEXT: return "dciP3NonlinearEXT";
		case ColorSpaceKHR::bt709LinearEXT: return "bt709LinearEXT";
		case ColorSpaceKHR::bt709NonlinearEXT: return "bt709NonlinearEXT";
		case ColorSpaceKHR::bt2020LinearEXT: return "bt2020LinearEXT";
		case ColorSpaceKHR::hdr10St2084EXT: return "hdr10St2084EXT";
		case ColorSpaceKHR::dolbyvisionEXT: return "dolbyvisionEXT";
		case ColorSpaceKHR::hdr10HlgEXT: return "hdr10HlgEXT";
		case ColorSpaceKHR::adobergbLinearEXT: return "adobergbLinearEXT";
		case ColorSpaceKHR::adobergbNonlinearEXT: return "adobergbNonlinearEXT";
		case ColorSpaceKHR::passThroughEXT: return "passThroughEXT";
		case ColorSpaceKHR::extendedSrgbNonlinearEXT: return "extendedSrgbNonlinearEXT";
		case ColorSpaceKHR::displayNativeAMD: return "displayNativeAMD";
		default: return nullptr;
	}
}
inline const char* name(CompositeAlphaBitsKHR val) {
	switch(val) {
		case CompositeAlphaBitsKHR::opaque: return "opaque";
		case CompositeAlphaBitsKHR::preMultiplied: return "preMultiplied";
		case CompositeAlphaBitsKHR::postMultiplied: return "postMultiplied";
		case CompositeAlphaBitsKHR::inherit: return "inherit";
		default: return nullptr;
	}
}
inline std::string name(SurfaceTransformFlagsKHR val) {
	std::string ret;
	if((val & SurfaceTransformBitsKHR::identity) == SurfaceTransformBitsKHR::identity) ret += "identity | ";
	if((val & SurfaceTransformBitsKHR::rotate90) == SurfaceTransformBitsKHR::rotate90) ret += "rotate90 | ";
	if((val & SurfaceTransformBitsKHR::rotate180) == SurfaceTransformBitsKHR::rotate180) ret += "rotate180 | ";
	if((val & SurfaceTransformBitsKHR::rotate270) == SurfaceTransformBitsKHR::rotate270) ret += "rotate270 | ";
	if((val & SurfaceTransformBitsKHR::horizontalMirror) == SurfaceTransformBitsKHR::horizontalMirror) ret += "horizontalMirror | ";
	if((val & SurfaceTransformBitsKHR::horizontalMirrorRotate90) == SurfaceTransformBitsKHR::horizontalMirrorRotate90) ret += "horizontalMirrorRotate90 | ";
	if((val & SurfaceTransformBitsKHR::horizontalMirrorRotate180) == SurfaceTransformBitsKHR::horizontalMirrorRotate180) ret += "horizontalMirrorRotate180 | ";
	if((val & SurfaceTransformBitsKHR::horizontalMirrorRotate270) == SurfaceTransformBitsKHR::horizontalMirrorRotate270) ret += "horizontalMirrorRotate270 | ";
	if((val & SurfaceTransformBitsKHR::inherit) == SurfaceTransformBitsKHR::inherit) ret += "inherit | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(CompositeAlphaFlagsKHR val) {
	std::string ret;
	if((val & CompositeAlphaBitsKHR::opaque) == CompositeAlphaBitsKHR::opaque) ret += "opaque | ";
	if((val & CompositeAlphaBitsKHR::preMultiplied) == CompositeAlphaBitsKHR::preMultiplied) ret += "preMultiplied | ";
	if((val & CompositeAlphaBitsKHR::postMultiplied) == CompositeAlphaBitsKHR::postMultiplied) ret += "postMultiplied | ";
	if((val & CompositeAlphaBitsKHR::inherit) == CompositeAlphaBitsKHR::inherit) ret += "inherit | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(SwapchainCreateBitsKHR val) {
	switch(val) {
		case SwapchainCreateBitsKHR::splitInstanceBindRegions: return "splitInstanceBindRegions";
		case SwapchainCreateBitsKHR::eProtected: return "eProtected";
		case SwapchainCreateBitsKHR::mutableFormat: return "mutableFormat";
		case SwapchainCreateBitsKHR::presentTimingEXT: return "presentTimingEXT";
		case SwapchainCreateBitsKHR::presentID2: return "presentID2";
		case SwapchainCreateBitsKHR::presentWait2: return "presentWait2";
		case SwapchainCreateBitsKHR::deferredMemoryAllocation: return "deferredMemoryAllocation";
		default: return nullptr;
	}
}
inline const char* name(DeviceGroupPresentModeBitsKHR val) {
	switch(val) {
		case DeviceGroupPresentModeBitsKHR::local: return "local";
		case DeviceGroupPresentModeBitsKHR::remote: return "remote";
		case DeviceGroupPresentModeBitsKHR::sum: return "sum";
		case DeviceGroupPresentModeBitsKHR::localMultiDevice: return "localMultiDevice";
		default: return nullptr;
	}
}
inline std::string name(SwapchainCreateFlagsKHR val) {
	std::string ret;
	if((val & SwapchainCreateBitsKHR::splitInstanceBindRegions) == SwapchainCreateBitsKHR::splitInstanceBindRegions) ret += "splitInstanceBindRegions | ";
	if((val & SwapchainCreateBitsKHR::eProtected) == SwapchainCreateBitsKHR::eProtected) ret += "eProtected | ";
	if((val & SwapchainCreateBitsKHR::mutableFormat) == SwapchainCreateBitsKHR::mutableFormat) ret += "mutableFormat | ";
	if((val & SwapchainCreateBitsKHR::presentTimingEXT) == SwapchainCreateBitsKHR::presentTimingEXT) ret += "presentTimingEXT | ";
	if((val & SwapchainCreateBitsKHR::presentID2) == SwapchainCreateBitsKHR::presentID2) ret += "presentID2 | ";
	if((val & SwapchainCreateBitsKHR::presentWait2) == SwapchainCreateBitsKHR::presentWait2) ret += "presentWait2 | ";
	if((val & SwapchainCreateBitsKHR::deferredMemoryAllocation) == SwapchainCreateBitsKHR::deferredMemoryAllocation) ret += "deferredMemoryAllocation | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(DeviceGroupPresentModeFlagsKHR val) {
	std::string ret;
	if((val & DeviceGroupPresentModeBitsKHR::local) == DeviceGroupPresentModeBitsKHR::local) ret += "local | ";
	if((val & DeviceGroupPresentModeBitsKHR::remote) == DeviceGroupPresentModeBitsKHR::remote) ret += "remote | ";
	if((val & DeviceGroupPresentModeBitsKHR::sum) == DeviceGroupPresentModeBitsKHR::sum) ret += "sum | ";
	if((val & DeviceGroupPresentModeBitsKHR::localMultiDevice) == DeviceGroupPresentModeBitsKHR::localMultiDevice) ret += "localMultiDevice | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(DisplayPlaneAlphaBitsKHR val) {
	switch(val) {
		case DisplayPlaneAlphaBitsKHR::opaque: return "opaque";
		case DisplayPlaneAlphaBitsKHR::global: return "global";
		case DisplayPlaneAlphaBitsKHR::perPixel: return "perPixel";
		case DisplayPlaneAlphaBitsKHR::perPixelPremultiplied: return "perPixelPremultiplied";
		default: return nullptr;
	}
}
inline std::string name(DisplayPlaneAlphaFlagsKHR val) {
	std::string ret;
	if((val & DisplayPlaneAlphaBitsKHR::opaque) == DisplayPlaneAlphaBitsKHR::opaque) ret += "opaque | ";
	if((val & DisplayPlaneAlphaBitsKHR::global) == DisplayPlaneAlphaBitsKHR::global) ret += "global | ";
	if((val & DisplayPlaneAlphaBitsKHR::perPixel) == DisplayPlaneAlphaBitsKHR::perPixel) ret += "perPixel | ";
	if((val & DisplayPlaneAlphaBitsKHR::perPixelPremultiplied) == DisplayPlaneAlphaBitsKHR::perPixelPremultiplied) ret += "perPixelPremultiplied | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}

#ifdef VK_USE_PLATFORM_XLIB_KHR
#endif //VK_USE_PLATFORM_XLIB_KHR


#ifdef VK_USE_PLATFORM_XCB_KHR
#endif //VK_USE_PLATFORM_XCB_KHR


#ifdef VK_USE_PLATFORM_WAYLAND_KHR
#endif //VK_USE_PLATFORM_WAYLAND_KHR


#ifdef VK_USE_PLATFORM_WIN32_KHR
#endif //VK_USE_PLATFORM_WIN32_KHR

inline const char* name(VideoCodecOperationBitsKHR val) {
	switch(val) {
		case VideoCodecOperationBitsKHR::none: return "none";
		case VideoCodecOperationBitsKHR::encodeH264: return "encodeH264";
		case VideoCodecOperationBitsKHR::encodeH265: return "encodeH265";
		case VideoCodecOperationBitsKHR::decodeH264: return "decodeH264";
		case VideoCodecOperationBitsKHR::decodeH265: return "decodeH265";
		case VideoCodecOperationBitsKHR::decodeAv1: return "decodeAv1";
		case VideoCodecOperationBitsKHR::encodeAv1: return "encodeAv1";
		case VideoCodecOperationBitsKHR::decodeVp9: return "decodeVp9";
		default: return nullptr;
	}
}
inline const char* name(VideoChromaSubsamplingBitsKHR val) {
	switch(val) {
		case VideoChromaSubsamplingBitsKHR::invalid: return "invalid";
		case VideoChromaSubsamplingBitsKHR::monochrome: return "monochrome";
		case VideoChromaSubsamplingBitsKHR::e420: return "e420";
		case VideoChromaSubsamplingBitsKHR::e422: return "e422";
		case VideoChromaSubsamplingBitsKHR::e444: return "e444";
		default: return nullptr;
	}
}
inline const char* name(VideoComponentBitDepthBitsKHR val) {
	switch(val) {
		case VideoComponentBitDepthBitsKHR::invalid: return "invalid";
		case VideoComponentBitDepthBitsKHR::e8: return "e8";
		case VideoComponentBitDepthBitsKHR::e10: return "e10";
		case VideoComponentBitDepthBitsKHR::e12: return "e12";
		default: return nullptr;
	}
}
inline const char* name(VideoCapabilityBitsKHR val) {
	switch(val) {
		case VideoCapabilityBitsKHR::protectedContent: return "protectedContent";
		case VideoCapabilityBitsKHR::separateReferenceImages: return "separateReferenceImages";
		default: return nullptr;
	}
}
inline const char* name(VideoSessionCreateBitsKHR val) {
	switch(val) {
		case VideoSessionCreateBitsKHR::protectedContent: return "protectedContent";
		case VideoSessionCreateBitsKHR::allowEncodeParameterOptimizations: return "allowEncodeParameterOptimizations";
		case VideoSessionCreateBitsKHR::inlineQueries: return "inlineQueries";
		case VideoSessionCreateBitsKHR::allowEncodeQuantizationDeltaMap: return "allowEncodeQuantizationDeltaMap";
		case VideoSessionCreateBitsKHR::allowEncodeEmphasisMap: return "allowEncodeEmphasisMap";
		case VideoSessionCreateBitsKHR::inlineSessionParameters: return "inlineSessionParameters";
		default: return nullptr;
	}
}
inline const char* name(VideoSessionParametersCreateBitsKHR val) {
	switch(val) {
		case VideoSessionParametersCreateBitsKHR::quantizationMapCompatible: return "quantizationMapCompatible";
		default: return nullptr;
	}
}
inline const char* name(VideoCodingControlBitsKHR val) {
	switch(val) {
		case VideoCodingControlBitsKHR::reset: return "reset";
		case VideoCodingControlBitsKHR::encodeRateControl: return "encodeRateControl";
		case VideoCodingControlBitsKHR::encodeQualityLevel: return "encodeQualityLevel";
		default: return nullptr;
	}
}
inline const char* name(QueryResultStatusKHR val) {
	switch(val) {
		case QueryResultStatusKHR::error: return "error";
		case QueryResultStatusKHR::notReady: return "notReady";
		case QueryResultStatusKHR::complete: return "complete";
		case QueryResultStatusKHR::insufficientBitstreamBufferRange: return "insufficientBitstreamBufferRange";
		default: return nullptr;
	}
}
inline std::string name(VideoCodecOperationFlagsKHR val) {
	std::string ret;
	if((val & VideoCodecOperationBitsKHR::none) == VideoCodecOperationBitsKHR::none) ret += "none | ";
	if((val & VideoCodecOperationBitsKHR::encodeH264) == VideoCodecOperationBitsKHR::encodeH264) ret += "encodeH264 | ";
	if((val & VideoCodecOperationBitsKHR::encodeH265) == VideoCodecOperationBitsKHR::encodeH265) ret += "encodeH265 | ";
	if((val & VideoCodecOperationBitsKHR::decodeH264) == VideoCodecOperationBitsKHR::decodeH264) ret += "decodeH264 | ";
	if((val & VideoCodecOperationBitsKHR::decodeH265) == VideoCodecOperationBitsKHR::decodeH265) ret += "decodeH265 | ";
	if((val & VideoCodecOperationBitsKHR::decodeAv1) == VideoCodecOperationBitsKHR::decodeAv1) ret += "decodeAv1 | ";
	if((val & VideoCodecOperationBitsKHR::encodeAv1) == VideoCodecOperationBitsKHR::encodeAv1) ret += "encodeAv1 | ";
	if((val & VideoCodecOperationBitsKHR::decodeVp9) == VideoCodecOperationBitsKHR::decodeVp9) ret += "decodeVp9 | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(VideoChromaSubsamplingFlagsKHR val) {
	std::string ret;
	if((val & VideoChromaSubsamplingBitsKHR::invalid) == VideoChromaSubsamplingBitsKHR::invalid) ret += "invalid | ";
	if((val & VideoChromaSubsamplingBitsKHR::monochrome) == VideoChromaSubsamplingBitsKHR::monochrome) ret += "monochrome | ";
	if((val & VideoChromaSubsamplingBitsKHR::e420) == VideoChromaSubsamplingBitsKHR::e420) ret += "e420 | ";
	if((val & VideoChromaSubsamplingBitsKHR::e422) == VideoChromaSubsamplingBitsKHR::e422) ret += "e422 | ";
	if((val & VideoChromaSubsamplingBitsKHR::e444) == VideoChromaSubsamplingBitsKHR::e444) ret += "e444 | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(VideoComponentBitDepthFlagsKHR val) {
	std::string ret;
	if((val & VideoComponentBitDepthBitsKHR::invalid) == VideoComponentBitDepthBitsKHR::invalid) ret += "invalid | ";
	if((val & VideoComponentBitDepthBitsKHR::e8) == VideoComponentBitDepthBitsKHR::e8) ret += "e8 | ";
	if((val & VideoComponentBitDepthBitsKHR::e10) == VideoComponentBitDepthBitsKHR::e10) ret += "e10 | ";
	if((val & VideoComponentBitDepthBitsKHR::e12) == VideoComponentBitDepthBitsKHR::e12) ret += "e12 | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(VideoCapabilityFlagsKHR val) {
	std::string ret;
	if((val & VideoCapabilityBitsKHR::protectedContent) == VideoCapabilityBitsKHR::protectedContent) ret += "protectedContent | ";
	if((val & VideoCapabilityBitsKHR::separateReferenceImages) == VideoCapabilityBitsKHR::separateReferenceImages) ret += "separateReferenceImages | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(VideoSessionCreateFlagsKHR val) {
	std::string ret;
	if((val & VideoSessionCreateBitsKHR::protectedContent) == VideoSessionCreateBitsKHR::protectedContent) ret += "protectedContent | ";
	if((val & VideoSessionCreateBitsKHR::allowEncodeParameterOptimizations) == VideoSessionCreateBitsKHR::allowEncodeParameterOptimizations) ret += "allowEncodeParameterOptimizations | ";
	if((val & VideoSessionCreateBitsKHR::inlineQueries) == VideoSessionCreateBitsKHR::inlineQueries) ret += "inlineQueries | ";
	if((val & VideoSessionCreateBitsKHR::allowEncodeQuantizationDeltaMap) == VideoSessionCreateBitsKHR::allowEncodeQuantizationDeltaMap) ret += "allowEncodeQuantizationDeltaMap | ";
	if((val & VideoSessionCreateBitsKHR::allowEncodeEmphasisMap) == VideoSessionCreateBitsKHR::allowEncodeEmphasisMap) ret += "allowEncodeEmphasisMap | ";
	if((val & VideoSessionCreateBitsKHR::inlineSessionParameters) == VideoSessionCreateBitsKHR::inlineSessionParameters) ret += "inlineSessionParameters | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(VideoSessionParametersCreateFlagsKHR val) {
	std::string ret;
	if((val & VideoSessionParametersCreateBitsKHR::quantizationMapCompatible) == VideoSessionParametersCreateBitsKHR::quantizationMapCompatible) ret += "quantizationMapCompatible | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(VideoCodingControlFlagsKHR val) {
	std::string ret;
	if((val & VideoCodingControlBitsKHR::reset) == VideoCodingControlBitsKHR::reset) ret += "reset | ";
	if((val & VideoCodingControlBitsKHR::encodeRateControl) == VideoCodingControlBitsKHR::encodeRateControl) ret += "encodeRateControl | ";
	if((val & VideoCodingControlBitsKHR::encodeQualityLevel) == VideoCodingControlBitsKHR::encodeQualityLevel) ret += "encodeQualityLevel | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(VideoDecodeCapabilityBitsKHR val) {
	switch(val) {
		case VideoDecodeCapabilityBitsKHR::dpbAndOutputCoincide: return "dpbAndOutputCoincide";
		case VideoDecodeCapabilityBitsKHR::dpbAndOutputDistinct: return "dpbAndOutputDistinct";
		default: return nullptr;
	}
}
inline const char* name(VideoDecodeUsageBitsKHR val) {
	switch(val) {
		case VideoDecodeUsageBitsKHR::eDefault: return "eDefault";
		case VideoDecodeUsageBitsKHR::transcoding: return "transcoding";
		case VideoDecodeUsageBitsKHR::offline: return "offline";
		case VideoDecodeUsageBitsKHR::streaming: return "streaming";
		default: return nullptr;
	}
}
inline std::string name(VideoDecodeCapabilityFlagsKHR val) {
	std::string ret;
	if((val & VideoDecodeCapabilityBitsKHR::dpbAndOutputCoincide) == VideoDecodeCapabilityBitsKHR::dpbAndOutputCoincide) ret += "dpbAndOutputCoincide | ";
	if((val & VideoDecodeCapabilityBitsKHR::dpbAndOutputDistinct) == VideoDecodeCapabilityBitsKHR::dpbAndOutputDistinct) ret += "dpbAndOutputDistinct | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(VideoDecodeUsageFlagsKHR val) {
	std::string ret;
	if((val & VideoDecodeUsageBitsKHR::eDefault) == VideoDecodeUsageBitsKHR::eDefault) ret += "eDefault | ";
	if((val & VideoDecodeUsageBitsKHR::transcoding) == VideoDecodeUsageBitsKHR::transcoding) ret += "transcoding | ";
	if((val & VideoDecodeUsageBitsKHR::offline) == VideoDecodeUsageBitsKHR::offline) ret += "offline | ";
	if((val & VideoDecodeUsageBitsKHR::streaming) == VideoDecodeUsageBitsKHR::streaming) ret += "streaming | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(VideoEncodeH264CapabilityBitsKHR val) {
	switch(val) {
		case VideoEncodeH264CapabilityBitsKHR::hrdCompliance: return "hrdCompliance";
		case VideoEncodeH264CapabilityBitsKHR::predictionWeightTableGenerated: return "predictionWeightTableGenerated";
		case VideoEncodeH264CapabilityBitsKHR::rowUnalignedSlice: return "rowUnalignedSlice";
		case VideoEncodeH264CapabilityBitsKHR::differentSliceType: return "differentSliceType";
		case VideoEncodeH264CapabilityBitsKHR::bFrameInL0List: return "bFrameInL0List";
		case VideoEncodeH264CapabilityBitsKHR::bFrameInL1List: return "bFrameInL1List";
		case VideoEncodeH264CapabilityBitsKHR::perPictureTypeMinMaxQp: return "perPictureTypeMinMaxQp";
		case VideoEncodeH264CapabilityBitsKHR::perSliceConstantQp: return "perSliceConstantQp";
		case VideoEncodeH264CapabilityBitsKHR::generatePrefixNalu: return "generatePrefixNalu";
		case VideoEncodeH264CapabilityBitsKHR::bPictureIntraRefresh: return "bPictureIntraRefresh";
		case VideoEncodeH264CapabilityBitsKHR::mbQpDiffWraparound: return "mbQpDiffWraparound";
		default: return nullptr;
	}
}
inline const char* name(VideoEncodeH264StdBitsKHR val) {
	switch(val) {
		case VideoEncodeH264StdBitsKHR::separateColorPlaneFlagSet: return "separateColorPlaneFlagSet";
		case VideoEncodeH264StdBitsKHR::qpprimeYZeroTransformBypassFlagSet: return "qpprimeYZeroTransformBypassFlagSet";
		case VideoEncodeH264StdBitsKHR::scalingMatrixPresentFlagSet: return "scalingMatrixPresentFlagSet";
		case VideoEncodeH264StdBitsKHR::chromaQpIndexOffset: return "chromaQpIndexOffset";
		case VideoEncodeH264StdBitsKHR::secondChromaQpIndexOffset: return "secondChromaQpIndexOffset";
		case VideoEncodeH264StdBitsKHR::picInitQpMinus26: return "picInitQpMinus26";
		case VideoEncodeH264StdBitsKHR::weightedPredFlagSet: return "weightedPredFlagSet";
		case VideoEncodeH264StdBitsKHR::weightedBipredIDcExplicit: return "weightedBipredIDcExplicit";
		case VideoEncodeH264StdBitsKHR::weightedBipredIDcImplicit: return "weightedBipredIDcImplicit";
		case VideoEncodeH264StdBitsKHR::transform8x8ModeFlagSet: return "transform8x8ModeFlagSet";
		case VideoEncodeH264StdBitsKHR::directSpatialMvPredFlagUnset: return "directSpatialMvPredFlagUnset";
		case VideoEncodeH264StdBitsKHR::entropyCodingModeFlagUnset: return "entropyCodingModeFlagUnset";
		case VideoEncodeH264StdBitsKHR::entropyCodingModeFlagSet: return "entropyCodingModeFlagSet";
		case VideoEncodeH264StdBitsKHR::direct8x8InferenceFlagUnset: return "direct8x8InferenceFlagUnset";
		case VideoEncodeH264StdBitsKHR::constrainedIntraPredFlagSet: return "constrainedIntraPredFlagSet";
		case VideoEncodeH264StdBitsKHR::deblockingFilterDisabled: return "deblockingFilterDisabled";
		case VideoEncodeH264StdBitsKHR::deblockingFilterEnabled: return "deblockingFilterEnabled";
		case VideoEncodeH264StdBitsKHR::deblockingFilterPartial: return "deblockingFilterPartial";
		case VideoEncodeH264StdBitsKHR::sliceQpDelta: return "sliceQpDelta";
		case VideoEncodeH264StdBitsKHR::differentSliceQpDelta: return "differentSliceQpDelta";
		default: return nullptr;
	}
}
inline const char* name(VideoEncodeH264RateControlBitsKHR val) {
	switch(val) {
		case VideoEncodeH264RateControlBitsKHR::attemptHrdCompliance: return "attemptHrdCompliance";
		case VideoEncodeH264RateControlBitsKHR::regularGop: return "regularGop";
		case VideoEncodeH264RateControlBitsKHR::referencePatternFlat: return "referencePatternFlat";
		case VideoEncodeH264RateControlBitsKHR::referencePatternDyadic: return "referencePatternDyadic";
		case VideoEncodeH264RateControlBitsKHR::temporalLayerPatternDyadic: return "temporalLayerPatternDyadic";
		default: return nullptr;
	}
}
inline std::string name(VideoEncodeH264CapabilityFlagsKHR val) {
	std::string ret;
	if((val & VideoEncodeH264CapabilityBitsKHR::hrdCompliance) == VideoEncodeH264CapabilityBitsKHR::hrdCompliance) ret += "hrdCompliance | ";
	if((val & VideoEncodeH264CapabilityBitsKHR::predictionWeightTableGenerated) == VideoEncodeH264CapabilityBitsKHR::predictionWeightTableGenerated) ret += "predictionWeightTableGenerated | ";
	if((val & VideoEncodeH264CapabilityBitsKHR::rowUnalignedSlice) == VideoEncodeH264CapabilityBitsKHR::rowUnalignedSlice) ret += "rowUnalignedSlice | ";
	if((val & VideoEncodeH264CapabilityBitsKHR::differentSliceType) == VideoEncodeH264CapabilityBitsKHR::differentSliceType) ret += "differentSliceType | ";
	if((val & VideoEncodeH264CapabilityBitsKHR::bFrameInL0List) == VideoEncodeH264CapabilityBitsKHR::bFrameInL0List) ret += "bFrameInL0List | ";
	if((val & VideoEncodeH264CapabilityBitsKHR::bFrameInL1List) == VideoEncodeH264CapabilityBitsKHR::bFrameInL1List) ret += "bFrameInL1List | ";
	if((val & VideoEncodeH264CapabilityBitsKHR::perPictureTypeMinMaxQp) == VideoEncodeH264CapabilityBitsKHR::perPictureTypeMinMaxQp) ret += "perPictureTypeMinMaxQp | ";
	if((val & VideoEncodeH264CapabilityBitsKHR::perSliceConstantQp) == VideoEncodeH264CapabilityBitsKHR::perSliceConstantQp) ret += "perSliceConstantQp | ";
	if((val & VideoEncodeH264CapabilityBitsKHR::generatePrefixNalu) == VideoEncodeH264CapabilityBitsKHR::generatePrefixNalu) ret += "generatePrefixNalu | ";
	if((val & VideoEncodeH264CapabilityBitsKHR::bPictureIntraRefresh) == VideoEncodeH264CapabilityBitsKHR::bPictureIntraRefresh) ret += "bPictureIntraRefresh | ";
	if((val & VideoEncodeH264CapabilityBitsKHR::mbQpDiffWraparound) == VideoEncodeH264CapabilityBitsKHR::mbQpDiffWraparound) ret += "mbQpDiffWraparound | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(VideoEncodeH264StdFlagsKHR val) {
	std::string ret;
	if((val & VideoEncodeH264StdBitsKHR::separateColorPlaneFlagSet) == VideoEncodeH264StdBitsKHR::separateColorPlaneFlagSet) ret += "separateColorPlaneFlagSet | ";
	if((val & VideoEncodeH264StdBitsKHR::qpprimeYZeroTransformBypassFlagSet) == VideoEncodeH264StdBitsKHR::qpprimeYZeroTransformBypassFlagSet) ret += "qpprimeYZeroTransformBypassFlagSet | ";
	if((val & VideoEncodeH264StdBitsKHR::scalingMatrixPresentFlagSet) == VideoEncodeH264StdBitsKHR::scalingMatrixPresentFlagSet) ret += "scalingMatrixPresentFlagSet | ";
	if((val & VideoEncodeH264StdBitsKHR::chromaQpIndexOffset) == VideoEncodeH264StdBitsKHR::chromaQpIndexOffset) ret += "chromaQpIndexOffset | ";
	if((val & VideoEncodeH264StdBitsKHR::secondChromaQpIndexOffset) == VideoEncodeH264StdBitsKHR::secondChromaQpIndexOffset) ret += "secondChromaQpIndexOffset | ";
	if((val & VideoEncodeH264StdBitsKHR::picInitQpMinus26) == VideoEncodeH264StdBitsKHR::picInitQpMinus26) ret += "picInitQpMinus26 | ";
	if((val & VideoEncodeH264StdBitsKHR::weightedPredFlagSet) == VideoEncodeH264StdBitsKHR::weightedPredFlagSet) ret += "weightedPredFlagSet | ";
	if((val & VideoEncodeH264StdBitsKHR::weightedBipredIDcExplicit) == VideoEncodeH264StdBitsKHR::weightedBipredIDcExplicit) ret += "weightedBipredIDcExplicit | ";
	if((val & VideoEncodeH264StdBitsKHR::weightedBipredIDcImplicit) == VideoEncodeH264StdBitsKHR::weightedBipredIDcImplicit) ret += "weightedBipredIDcImplicit | ";
	if((val & VideoEncodeH264StdBitsKHR::transform8x8ModeFlagSet) == VideoEncodeH264StdBitsKHR::transform8x8ModeFlagSet) ret += "transform8x8ModeFlagSet | ";
	if((val & VideoEncodeH264StdBitsKHR::directSpatialMvPredFlagUnset) == VideoEncodeH264StdBitsKHR::directSpatialMvPredFlagUnset) ret += "directSpatialMvPredFlagUnset | ";
	if((val & VideoEncodeH264StdBitsKHR::entropyCodingModeFlagUnset) == VideoEncodeH264StdBitsKHR::entropyCodingModeFlagUnset) ret += "entropyCodingModeFlagUnset | ";
	if((val & VideoEncodeH264StdBitsKHR::entropyCodingModeFlagSet) == VideoEncodeH264StdBitsKHR::entropyCodingModeFlagSet) ret += "entropyCodingModeFlagSet | ";
	if((val & VideoEncodeH264StdBitsKHR::direct8x8InferenceFlagUnset) == VideoEncodeH264StdBitsKHR::direct8x8InferenceFlagUnset) ret += "direct8x8InferenceFlagUnset | ";
	if((val & VideoEncodeH264StdBitsKHR::constrainedIntraPredFlagSet) == VideoEncodeH264StdBitsKHR::constrainedIntraPredFlagSet) ret += "constrainedIntraPredFlagSet | ";
	if((val & VideoEncodeH264StdBitsKHR::deblockingFilterDisabled) == VideoEncodeH264StdBitsKHR::deblockingFilterDisabled) ret += "deblockingFilterDisabled | ";
	if((val & VideoEncodeH264StdBitsKHR::deblockingFilterEnabled) == VideoEncodeH264StdBitsKHR::deblockingFilterEnabled) ret += "deblockingFilterEnabled | ";
	if((val & VideoEncodeH264StdBitsKHR::deblockingFilterPartial) == VideoEncodeH264StdBitsKHR::deblockingFilterPartial) ret += "deblockingFilterPartial | ";
	if((val & VideoEncodeH264StdBitsKHR::sliceQpDelta) == VideoEncodeH264StdBitsKHR::sliceQpDelta) ret += "sliceQpDelta | ";
	if((val & VideoEncodeH264StdBitsKHR::differentSliceQpDelta) == VideoEncodeH264StdBitsKHR::differentSliceQpDelta) ret += "differentSliceQpDelta | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(VideoEncodeH264RateControlFlagsKHR val) {
	std::string ret;
	if((val & VideoEncodeH264RateControlBitsKHR::attemptHrdCompliance) == VideoEncodeH264RateControlBitsKHR::attemptHrdCompliance) ret += "attemptHrdCompliance | ";
	if((val & VideoEncodeH264RateControlBitsKHR::regularGop) == VideoEncodeH264RateControlBitsKHR::regularGop) ret += "regularGop | ";
	if((val & VideoEncodeH264RateControlBitsKHR::referencePatternFlat) == VideoEncodeH264RateControlBitsKHR::referencePatternFlat) ret += "referencePatternFlat | ";
	if((val & VideoEncodeH264RateControlBitsKHR::referencePatternDyadic) == VideoEncodeH264RateControlBitsKHR::referencePatternDyadic) ret += "referencePatternDyadic | ";
	if((val & VideoEncodeH264RateControlBitsKHR::temporalLayerPatternDyadic) == VideoEncodeH264RateControlBitsKHR::temporalLayerPatternDyadic) ret += "temporalLayerPatternDyadic | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(VideoEncodeH265CapabilityBitsKHR val) {
	switch(val) {
		case VideoEncodeH265CapabilityBitsKHR::hrdCompliance: return "hrdCompliance";
		case VideoEncodeH265CapabilityBitsKHR::predictionWeightTableGenerated: return "predictionWeightTableGenerated";
		case VideoEncodeH265CapabilityBitsKHR::rowUnalignedSliceSegment: return "rowUnalignedSliceSegment";
		case VideoEncodeH265CapabilityBitsKHR::differentSliceSegmentType: return "differentSliceSegmentType";
		case VideoEncodeH265CapabilityBitsKHR::bFrameInL0List: return "bFrameInL0List";
		case VideoEncodeH265CapabilityBitsKHR::bFrameInL1List: return "bFrameInL1List";
		case VideoEncodeH265CapabilityBitsKHR::perPictureTypeMinMaxQp: return "perPictureTypeMinMaxQp";
		case VideoEncodeH265CapabilityBitsKHR::perSliceSegmentConstantQp: return "perSliceSegmentConstantQp";
		case VideoEncodeH265CapabilityBitsKHR::multipleTilesPerSliceSegment: return "multipleTilesPerSliceSegment";
		case VideoEncodeH265CapabilityBitsKHR::multipleSliceSegmentsPerTile: return "multipleSliceSegmentsPerTile";
		case VideoEncodeH265CapabilityBitsKHR::bPictureIntraRefresh: return "bPictureIntraRefresh";
		case VideoEncodeH265CapabilityBitsKHR::cuQpDiffWraparound: return "cuQpDiffWraparound";
		default: return nullptr;
	}
}
inline const char* name(VideoEncodeH265StdBitsKHR val) {
	switch(val) {
		case VideoEncodeH265StdBitsKHR::separateColorPlaneFlagSet: return "separateColorPlaneFlagSet";
		case VideoEncodeH265StdBitsKHR::sampleAdaptiveOffsetEnabledFlagSet: return "sampleAdaptiveOffsetEnabledFlagSet";
		case VideoEncodeH265StdBitsKHR::scalingListDataPresentFlagSet: return "scalingListDataPresentFlagSet";
		case VideoEncodeH265StdBitsKHR::pcmEnabledFlagSet: return "pcmEnabledFlagSet";
		case VideoEncodeH265StdBitsKHR::spsTemporalMvpEnabledFlagSet: return "spsTemporalMvpEnabledFlagSet";
		case VideoEncodeH265StdBitsKHR::initQpMinus26: return "initQpMinus26";
		case VideoEncodeH265StdBitsKHR::weightedPredFlagSet: return "weightedPredFlagSet";
		case VideoEncodeH265StdBitsKHR::weightedBipredFlagSet: return "weightedBipredFlagSet";
		case VideoEncodeH265StdBitsKHR::log2ParallelMergeLevelMinus2: return "log2ParallelMergeLevelMinus2";
		case VideoEncodeH265StdBitsKHR::signDataHidingEnabledFlagSet: return "signDataHidingEnabledFlagSet";
		case VideoEncodeH265StdBitsKHR::transformSkipEnabledFlagSet: return "transformSkipEnabledFlagSet";
		case VideoEncodeH265StdBitsKHR::transformSkipEnabledFlagUnset: return "transformSkipEnabledFlagUnset";
		case VideoEncodeH265StdBitsKHR::ppsSliceChromaQpOffsetsPresentFlagSet: return "ppsSliceChromaQpOffsetsPresentFlagSet";
		case VideoEncodeH265StdBitsKHR::transquantBypassEnabledFlagSet: return "transquantBypassEnabledFlagSet";
		case VideoEncodeH265StdBitsKHR::constrainedIntraPredFlagSet: return "constrainedIntraPredFlagSet";
		case VideoEncodeH265StdBitsKHR::entropyCodingSyncEnabledFlagSet: return "entropyCodingSyncEnabledFlagSet";
		case VideoEncodeH265StdBitsKHR::deblockingFilterOverrideEnabledFlagSet: return "deblockingFilterOverrideEnabledFlagSet";
		case VideoEncodeH265StdBitsKHR::dependentSliceSegmentsEnabledFlagSet: return "dependentSliceSegmentsEnabledFlagSet";
		case VideoEncodeH265StdBitsKHR::dependentSliceSegmentFlagSet: return "dependentSliceSegmentFlagSet";
		case VideoEncodeH265StdBitsKHR::sliceQpDelta: return "sliceQpDelta";
		case VideoEncodeH265StdBitsKHR::differentSliceQpDelta: return "differentSliceQpDelta";
		default: return nullptr;
	}
}
inline const char* name(VideoEncodeH265CtbSizeBitsKHR val) {
	switch(val) {
		case VideoEncodeH265CtbSizeBitsKHR::e16: return "e16";
		case VideoEncodeH265CtbSizeBitsKHR::e32: return "e32";
		case VideoEncodeH265CtbSizeBitsKHR::e64: return "e64";
		default: return nullptr;
	}
}
inline const char* name(VideoEncodeH265TransformBlockSizeBitsKHR val) {
	switch(val) {
		case VideoEncodeH265TransformBlockSizeBitsKHR::e4: return "e4";
		case VideoEncodeH265TransformBlockSizeBitsKHR::e8: return "e8";
		case VideoEncodeH265TransformBlockSizeBitsKHR::e16: return "e16";
		case VideoEncodeH265TransformBlockSizeBitsKHR::e32: return "e32";
		default: return nullptr;
	}
}
inline const char* name(VideoEncodeH265RateControlBitsKHR val) {
	switch(val) {
		case VideoEncodeH265RateControlBitsKHR::attemptHrdCompliance: return "attemptHrdCompliance";
		case VideoEncodeH265RateControlBitsKHR::regularGop: return "regularGop";
		case VideoEncodeH265RateControlBitsKHR::referencePatternFlat: return "referencePatternFlat";
		case VideoEncodeH265RateControlBitsKHR::referencePatternDyadic: return "referencePatternDyadic";
		case VideoEncodeH265RateControlBitsKHR::temporalSubLayerPatternDyadic: return "temporalSubLayerPatternDyadic";
		default: return nullptr;
	}
}
inline std::string name(VideoEncodeH265CapabilityFlagsKHR val) {
	std::string ret;
	if((val & VideoEncodeH265CapabilityBitsKHR::hrdCompliance) == VideoEncodeH265CapabilityBitsKHR::hrdCompliance) ret += "hrdCompliance | ";
	if((val & VideoEncodeH265CapabilityBitsKHR::predictionWeightTableGenerated) == VideoEncodeH265CapabilityBitsKHR::predictionWeightTableGenerated) ret += "predictionWeightTableGenerated | ";
	if((val & VideoEncodeH265CapabilityBitsKHR::rowUnalignedSliceSegment) == VideoEncodeH265CapabilityBitsKHR::rowUnalignedSliceSegment) ret += "rowUnalignedSliceSegment | ";
	if((val & VideoEncodeH265CapabilityBitsKHR::differentSliceSegmentType) == VideoEncodeH265CapabilityBitsKHR::differentSliceSegmentType) ret += "differentSliceSegmentType | ";
	if((val & VideoEncodeH265CapabilityBitsKHR::bFrameInL0List) == VideoEncodeH265CapabilityBitsKHR::bFrameInL0List) ret += "bFrameInL0List | ";
	if((val & VideoEncodeH265CapabilityBitsKHR::bFrameInL1List) == VideoEncodeH265CapabilityBitsKHR::bFrameInL1List) ret += "bFrameInL1List | ";
	if((val & VideoEncodeH265CapabilityBitsKHR::perPictureTypeMinMaxQp) == VideoEncodeH265CapabilityBitsKHR::perPictureTypeMinMaxQp) ret += "perPictureTypeMinMaxQp | ";
	if((val & VideoEncodeH265CapabilityBitsKHR::perSliceSegmentConstantQp) == VideoEncodeH265CapabilityBitsKHR::perSliceSegmentConstantQp) ret += "perSliceSegmentConstantQp | ";
	if((val & VideoEncodeH265CapabilityBitsKHR::multipleTilesPerSliceSegment) == VideoEncodeH265CapabilityBitsKHR::multipleTilesPerSliceSegment) ret += "multipleTilesPerSliceSegment | ";
	if((val & VideoEncodeH265CapabilityBitsKHR::multipleSliceSegmentsPerTile) == VideoEncodeH265CapabilityBitsKHR::multipleSliceSegmentsPerTile) ret += "multipleSliceSegmentsPerTile | ";
	if((val & VideoEncodeH265CapabilityBitsKHR::bPictureIntraRefresh) == VideoEncodeH265CapabilityBitsKHR::bPictureIntraRefresh) ret += "bPictureIntraRefresh | ";
	if((val & VideoEncodeH265CapabilityBitsKHR::cuQpDiffWraparound) == VideoEncodeH265CapabilityBitsKHR::cuQpDiffWraparound) ret += "cuQpDiffWraparound | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(VideoEncodeH265StdFlagsKHR val) {
	std::string ret;
	if((val & VideoEncodeH265StdBitsKHR::separateColorPlaneFlagSet) == VideoEncodeH265StdBitsKHR::separateColorPlaneFlagSet) ret += "separateColorPlaneFlagSet | ";
	if((val & VideoEncodeH265StdBitsKHR::sampleAdaptiveOffsetEnabledFlagSet) == VideoEncodeH265StdBitsKHR::sampleAdaptiveOffsetEnabledFlagSet) ret += "sampleAdaptiveOffsetEnabledFlagSet | ";
	if((val & VideoEncodeH265StdBitsKHR::scalingListDataPresentFlagSet) == VideoEncodeH265StdBitsKHR::scalingListDataPresentFlagSet) ret += "scalingListDataPresentFlagSet | ";
	if((val & VideoEncodeH265StdBitsKHR::pcmEnabledFlagSet) == VideoEncodeH265StdBitsKHR::pcmEnabledFlagSet) ret += "pcmEnabledFlagSet | ";
	if((val & VideoEncodeH265StdBitsKHR::spsTemporalMvpEnabledFlagSet) == VideoEncodeH265StdBitsKHR::spsTemporalMvpEnabledFlagSet) ret += "spsTemporalMvpEnabledFlagSet | ";
	if((val & VideoEncodeH265StdBitsKHR::initQpMinus26) == VideoEncodeH265StdBitsKHR::initQpMinus26) ret += "initQpMinus26 | ";
	if((val & VideoEncodeH265StdBitsKHR::weightedPredFlagSet) == VideoEncodeH265StdBitsKHR::weightedPredFlagSet) ret += "weightedPredFlagSet | ";
	if((val & VideoEncodeH265StdBitsKHR::weightedBipredFlagSet) == VideoEncodeH265StdBitsKHR::weightedBipredFlagSet) ret += "weightedBipredFlagSet | ";
	if((val & VideoEncodeH265StdBitsKHR::log2ParallelMergeLevelMinus2) == VideoEncodeH265StdBitsKHR::log2ParallelMergeLevelMinus2) ret += "log2ParallelMergeLevelMinus2 | ";
	if((val & VideoEncodeH265StdBitsKHR::signDataHidingEnabledFlagSet) == VideoEncodeH265StdBitsKHR::signDataHidingEnabledFlagSet) ret += "signDataHidingEnabledFlagSet | ";
	if((val & VideoEncodeH265StdBitsKHR::transformSkipEnabledFlagSet) == VideoEncodeH265StdBitsKHR::transformSkipEnabledFlagSet) ret += "transformSkipEnabledFlagSet | ";
	if((val & VideoEncodeH265StdBitsKHR::transformSkipEnabledFlagUnset) == VideoEncodeH265StdBitsKHR::transformSkipEnabledFlagUnset) ret += "transformSkipEnabledFlagUnset | ";
	if((val & VideoEncodeH265StdBitsKHR::ppsSliceChromaQpOffsetsPresentFlagSet) == VideoEncodeH265StdBitsKHR::ppsSliceChromaQpOffsetsPresentFlagSet) ret += "ppsSliceChromaQpOffsetsPresentFlagSet | ";
	if((val & VideoEncodeH265StdBitsKHR::transquantBypassEnabledFlagSet) == VideoEncodeH265StdBitsKHR::transquantBypassEnabledFlagSet) ret += "transquantBypassEnabledFlagSet | ";
	if((val & VideoEncodeH265StdBitsKHR::constrainedIntraPredFlagSet) == VideoEncodeH265StdBitsKHR::constrainedIntraPredFlagSet) ret += "constrainedIntraPredFlagSet | ";
	if((val & VideoEncodeH265StdBitsKHR::entropyCodingSyncEnabledFlagSet) == VideoEncodeH265StdBitsKHR::entropyCodingSyncEnabledFlagSet) ret += "entropyCodingSyncEnabledFlagSet | ";
	if((val & VideoEncodeH265StdBitsKHR::deblockingFilterOverrideEnabledFlagSet) == VideoEncodeH265StdBitsKHR::deblockingFilterOverrideEnabledFlagSet) ret += "deblockingFilterOverrideEnabledFlagSet | ";
	if((val & VideoEncodeH265StdBitsKHR::dependentSliceSegmentsEnabledFlagSet) == VideoEncodeH265StdBitsKHR::dependentSliceSegmentsEnabledFlagSet) ret += "dependentSliceSegmentsEnabledFlagSet | ";
	if((val & VideoEncodeH265StdBitsKHR::dependentSliceSegmentFlagSet) == VideoEncodeH265StdBitsKHR::dependentSliceSegmentFlagSet) ret += "dependentSliceSegmentFlagSet | ";
	if((val & VideoEncodeH265StdBitsKHR::sliceQpDelta) == VideoEncodeH265StdBitsKHR::sliceQpDelta) ret += "sliceQpDelta | ";
	if((val & VideoEncodeH265StdBitsKHR::differentSliceQpDelta) == VideoEncodeH265StdBitsKHR::differentSliceQpDelta) ret += "differentSliceQpDelta | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(VideoEncodeH265CtbSizeFlagsKHR val) {
	std::string ret;
	if((val & VideoEncodeH265CtbSizeBitsKHR::e16) == VideoEncodeH265CtbSizeBitsKHR::e16) ret += "e16 | ";
	if((val & VideoEncodeH265CtbSizeBitsKHR::e32) == VideoEncodeH265CtbSizeBitsKHR::e32) ret += "e32 | ";
	if((val & VideoEncodeH265CtbSizeBitsKHR::e64) == VideoEncodeH265CtbSizeBitsKHR::e64) ret += "e64 | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(VideoEncodeH265TransformBlockSizeFlagsKHR val) {
	std::string ret;
	if((val & VideoEncodeH265TransformBlockSizeBitsKHR::e4) == VideoEncodeH265TransformBlockSizeBitsKHR::e4) ret += "e4 | ";
	if((val & VideoEncodeH265TransformBlockSizeBitsKHR::e8) == VideoEncodeH265TransformBlockSizeBitsKHR::e8) ret += "e8 | ";
	if((val & VideoEncodeH265TransformBlockSizeBitsKHR::e16) == VideoEncodeH265TransformBlockSizeBitsKHR::e16) ret += "e16 | ";
	if((val & VideoEncodeH265TransformBlockSizeBitsKHR::e32) == VideoEncodeH265TransformBlockSizeBitsKHR::e32) ret += "e32 | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(VideoEncodeH265RateControlFlagsKHR val) {
	std::string ret;
	if((val & VideoEncodeH265RateControlBitsKHR::attemptHrdCompliance) == VideoEncodeH265RateControlBitsKHR::attemptHrdCompliance) ret += "attemptHrdCompliance | ";
	if((val & VideoEncodeH265RateControlBitsKHR::regularGop) == VideoEncodeH265RateControlBitsKHR::regularGop) ret += "regularGop | ";
	if((val & VideoEncodeH265RateControlBitsKHR::referencePatternFlat) == VideoEncodeH265RateControlBitsKHR::referencePatternFlat) ret += "referencePatternFlat | ";
	if((val & VideoEncodeH265RateControlBitsKHR::referencePatternDyadic) == VideoEncodeH265RateControlBitsKHR::referencePatternDyadic) ret += "referencePatternDyadic | ";
	if((val & VideoEncodeH265RateControlBitsKHR::temporalSubLayerPatternDyadic) == VideoEncodeH265RateControlBitsKHR::temporalSubLayerPatternDyadic) ret += "temporalSubLayerPatternDyadic | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(VideoDecodeH264PictureLayoutBitsKHR val) {
	switch(val) {
		case VideoDecodeH264PictureLayoutBitsKHR::progressive: return "progressive";
		case VideoDecodeH264PictureLayoutBitsKHR::interlacedInterleavedLines: return "interlacedInterleavedLines";
		case VideoDecodeH264PictureLayoutBitsKHR::interlacedSeparatePlanes: return "interlacedSeparatePlanes";
		default: return nullptr;
	}
}
inline std::string name(VideoDecodeH264PictureLayoutFlagsKHR val) {
	std::string ret;
	if((val & VideoDecodeH264PictureLayoutBitsKHR::progressive) == VideoDecodeH264PictureLayoutBitsKHR::progressive) ret += "progressive | ";
	if((val & VideoDecodeH264PictureLayoutBitsKHR::interlacedInterleavedLines) == VideoDecodeH264PictureLayoutBitsKHR::interlacedInterleavedLines) ret += "interlacedInterleavedLines | ";
	if((val & VideoDecodeH264PictureLayoutBitsKHR::interlacedSeparatePlanes) == VideoDecodeH264PictureLayoutBitsKHR::interlacedSeparatePlanes) ret += "interlacedSeparatePlanes | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(PerformanceCounterUnitKHR val) {
	switch(val) {
		case PerformanceCounterUnitKHR::generic: return "generic";
		case PerformanceCounterUnitKHR::percentage: return "percentage";
		case PerformanceCounterUnitKHR::nanoseconds: return "nanoseconds";
		case PerformanceCounterUnitKHR::bytes: return "bytes";
		case PerformanceCounterUnitKHR::bytesPerSecond: return "bytesPerSecond";
		case PerformanceCounterUnitKHR::kelvin: return "kelvin";
		case PerformanceCounterUnitKHR::watts: return "watts";
		case PerformanceCounterUnitKHR::volts: return "volts";
		case PerformanceCounterUnitKHR::amps: return "amps";
		case PerformanceCounterUnitKHR::hertz: return "hertz";
		case PerformanceCounterUnitKHR::cycles: return "cycles";
		default: return nullptr;
	}
}
inline const char* name(PerformanceCounterScopeKHR val) {
	switch(val) {
		case PerformanceCounterScopeKHR::commandBuffer: return "commandBuffer";
		case PerformanceCounterScopeKHR::renderPass: return "renderPass";
		case PerformanceCounterScopeKHR::command: return "command";
		default: return nullptr;
	}
}
inline const char* name(PerformanceCounterStorageKHR val) {
	switch(val) {
		case PerformanceCounterStorageKHR::int32: return "int32";
		case PerformanceCounterStorageKHR::int64: return "int64";
		case PerformanceCounterStorageKHR::uint32: return "uint32";
		case PerformanceCounterStorageKHR::uint64: return "uint64";
		case PerformanceCounterStorageKHR::float32: return "float32";
		case PerformanceCounterStorageKHR::float64: return "float64";
		default: return nullptr;
	}
}
inline const char* name(PerformanceCounterDescriptionBitsKHR val) {
	switch(val) {
		case PerformanceCounterDescriptionBitsKHR::performanceImpacting: return "performanceImpacting";
		case PerformanceCounterDescriptionBitsKHR::concurrentlyImpacted: return "concurrentlyImpacted";
		default: return nullptr;
	}
}
inline const char* name(AcquireProfilingLockBitsKHR val) {
	switch(val) {
		default: return nullptr;
	}
}
inline std::string name(PerformanceCounterDescriptionFlagsKHR val) {
	std::string ret;
	if((val & PerformanceCounterDescriptionBitsKHR::performanceImpacting) == PerformanceCounterDescriptionBitsKHR::performanceImpacting) ret += "performanceImpacting | ";
	if((val & PerformanceCounterDescriptionBitsKHR::concurrentlyImpacted) == PerformanceCounterDescriptionBitsKHR::concurrentlyImpacted) ret += "concurrentlyImpacted | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(AcquireProfilingLockFlagsKHR) {
	std::string ret;
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(AccelerationStructureTypeKHR val) {
	switch(val) {
		case AccelerationStructureTypeKHR::topLevel: return "topLevel";
		case AccelerationStructureTypeKHR::bottomLevel: return "bottomLevel";
		case AccelerationStructureTypeKHR::generic: return "generic";
		default: return nullptr;
	}
}
inline const char* name(BuildAccelerationStructureBitsKHR val) {
	switch(val) {
		case BuildAccelerationStructureBitsKHR::allowUpdate: return "allowUpdate";
		case BuildAccelerationStructureBitsKHR::allowCompaction: return "allowCompaction";
		case BuildAccelerationStructureBitsKHR::preferFastTrace: return "preferFastTrace";
		case BuildAccelerationStructureBitsKHR::preferFastBuild: return "preferFastBuild";
		case BuildAccelerationStructureBitsKHR::lowMemory: return "lowMemory";
		case BuildAccelerationStructureBitsKHR::motionNV: return "motionNV";
		case BuildAccelerationStructureBitsKHR::allowOpacityMicromapUpdateEXT: return "allowOpacityMicromapUpdateEXT";
		case BuildAccelerationStructureBitsKHR::allowDisableOpacityMicromapsEXT: return "allowDisableOpacityMicromapsEXT";
		case BuildAccelerationStructureBitsKHR::allowOpacityMicromapDataUpdateEXT: return "allowOpacityMicromapDataUpdateEXT";
		case BuildAccelerationStructureBitsKHR::allowDataAccess: return "allowDataAccess";
		case BuildAccelerationStructureBitsKHR::allowClusterOpacityMicromapsNV: return "allowClusterOpacityMicromapsNV";
		default: return nullptr;
	}
}
inline const char* name(BuildAccelerationStructureModeKHR val) {
	switch(val) {
		case BuildAccelerationStructureModeKHR::build: return "build";
		case BuildAccelerationStructureModeKHR::update: return "update";
		default: return nullptr;
	}
}
inline const char* name(GeometryTypeKHR val) {
	switch(val) {
		case GeometryTypeKHR::triangles: return "triangles";
		case GeometryTypeKHR::aabbs: return "aabbs";
		case GeometryTypeKHR::instances: return "instances";
		case GeometryTypeKHR::spheresNV: return "spheresNV";
		case GeometryTypeKHR::linearSweptSpheresNV: return "linearSweptSpheresNV";
		default: return nullptr;
	}
}
inline const char* name(GeometryBitsKHR val) {
	switch(val) {
		case GeometryBitsKHR::opaque: return "opaque";
		case GeometryBitsKHR::noDuplicateAnyHitInvocation: return "noDuplicateAnyHitInvocation";
		default: return nullptr;
	}
}
inline const char* name(AccelerationStructureBuildTypeKHR val) {
	switch(val) {
		case AccelerationStructureBuildTypeKHR::host: return "host";
		case AccelerationStructureBuildTypeKHR::device: return "device";
		case AccelerationStructureBuildTypeKHR::hostOrDevice: return "hostOrDevice";
		default: return nullptr;
	}
}
inline const char* name(GeometryInstanceBitsKHR val) {
	switch(val) {
		case GeometryInstanceBitsKHR::triangleFacingCullDisable: return "triangleFacingCullDisable";
		case GeometryInstanceBitsKHR::triangleFlipFacing: return "triangleFlipFacing";
		case GeometryInstanceBitsKHR::forceOpaque: return "forceOpaque";
		case GeometryInstanceBitsKHR::forceNoOpaque: return "forceNoOpaque";
		case GeometryInstanceBitsKHR::forceOpacityMicromap2StateEXT: return "forceOpacityMicromap2StateEXT";
		case GeometryInstanceBitsKHR::disableOpacityMicromapsEXT: return "disableOpacityMicromapsEXT";
		default: return nullptr;
	}
}
inline const char* name(AccelerationStructureCreateBitsKHR val) {
	switch(val) {
		case AccelerationStructureCreateBitsKHR::deviceAddressCaptureReplay: return "deviceAddressCaptureReplay";
		case AccelerationStructureCreateBitsKHR::descriptorBufferCaptureReplayEXT: return "descriptorBufferCaptureReplayEXT";
		case AccelerationStructureCreateBitsKHR::motionNV: return "motionNV";
		default: return nullptr;
	}
}
inline const char* name(CopyAccelerationStructureModeKHR val) {
	switch(val) {
		case CopyAccelerationStructureModeKHR::clone: return "clone";
		case CopyAccelerationStructureModeKHR::compact: return "compact";
		case CopyAccelerationStructureModeKHR::serialize: return "serialize";
		case CopyAccelerationStructureModeKHR::deserialize: return "deserialize";
		default: return nullptr;
	}
}
inline const char* name(AccelerationStructureCompatibilityKHR val) {
	switch(val) {
		case AccelerationStructureCompatibilityKHR::compatible: return "compatible";
		case AccelerationStructureCompatibilityKHR::incompatible: return "incompatible";
		default: return nullptr;
	}
}
inline std::string name(BuildAccelerationStructureFlagsKHR val) {
	std::string ret;
	if((val & BuildAccelerationStructureBitsKHR::allowUpdate) == BuildAccelerationStructureBitsKHR::allowUpdate) ret += "allowUpdate | ";
	if((val & BuildAccelerationStructureBitsKHR::allowCompaction) == BuildAccelerationStructureBitsKHR::allowCompaction) ret += "allowCompaction | ";
	if((val & BuildAccelerationStructureBitsKHR::preferFastTrace) == BuildAccelerationStructureBitsKHR::preferFastTrace) ret += "preferFastTrace | ";
	if((val & BuildAccelerationStructureBitsKHR::preferFastBuild) == BuildAccelerationStructureBitsKHR::preferFastBuild) ret += "preferFastBuild | ";
	if((val & BuildAccelerationStructureBitsKHR::lowMemory) == BuildAccelerationStructureBitsKHR::lowMemory) ret += "lowMemory | ";
	if((val & BuildAccelerationStructureBitsKHR::motionNV) == BuildAccelerationStructureBitsKHR::motionNV) ret += "motionNV | ";
	if((val & BuildAccelerationStructureBitsKHR::allowOpacityMicromapUpdateEXT) == BuildAccelerationStructureBitsKHR::allowOpacityMicromapUpdateEXT) ret += "allowOpacityMicromapUpdateEXT | ";
	if((val & BuildAccelerationStructureBitsKHR::allowDisableOpacityMicromapsEXT) == BuildAccelerationStructureBitsKHR::allowDisableOpacityMicromapsEXT) ret += "allowDisableOpacityMicromapsEXT | ";
	if((val & BuildAccelerationStructureBitsKHR::allowOpacityMicromapDataUpdateEXT) == BuildAccelerationStructureBitsKHR::allowOpacityMicromapDataUpdateEXT) ret += "allowOpacityMicromapDataUpdateEXT | ";
	if((val & BuildAccelerationStructureBitsKHR::allowDataAccess) == BuildAccelerationStructureBitsKHR::allowDataAccess) ret += "allowDataAccess | ";
	if((val & BuildAccelerationStructureBitsKHR::allowClusterOpacityMicromapsNV) == BuildAccelerationStructureBitsKHR::allowClusterOpacityMicromapsNV) ret += "allowClusterOpacityMicromapsNV | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(GeometryFlagsKHR val) {
	std::string ret;
	if((val & GeometryBitsKHR::opaque) == GeometryBitsKHR::opaque) ret += "opaque | ";
	if((val & GeometryBitsKHR::noDuplicateAnyHitInvocation) == GeometryBitsKHR::noDuplicateAnyHitInvocation) ret += "noDuplicateAnyHitInvocation | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(GeometryInstanceFlagsKHR val) {
	std::string ret;
	if((val & GeometryInstanceBitsKHR::triangleFacingCullDisable) == GeometryInstanceBitsKHR::triangleFacingCullDisable) ret += "triangleFacingCullDisable | ";
	if((val & GeometryInstanceBitsKHR::triangleFlipFacing) == GeometryInstanceBitsKHR::triangleFlipFacing) ret += "triangleFlipFacing | ";
	if((val & GeometryInstanceBitsKHR::forceOpaque) == GeometryInstanceBitsKHR::forceOpaque) ret += "forceOpaque | ";
	if((val & GeometryInstanceBitsKHR::forceNoOpaque) == GeometryInstanceBitsKHR::forceNoOpaque) ret += "forceNoOpaque | ";
	if((val & GeometryInstanceBitsKHR::forceOpacityMicromap2StateEXT) == GeometryInstanceBitsKHR::forceOpacityMicromap2StateEXT) ret += "forceOpacityMicromap2StateEXT | ";
	if((val & GeometryInstanceBitsKHR::disableOpacityMicromapsEXT) == GeometryInstanceBitsKHR::disableOpacityMicromapsEXT) ret += "disableOpacityMicromapsEXT | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(AccelerationStructureCreateFlagsKHR val) {
	std::string ret;
	if((val & AccelerationStructureCreateBitsKHR::deviceAddressCaptureReplay) == AccelerationStructureCreateBitsKHR::deviceAddressCaptureReplay) ret += "deviceAddressCaptureReplay | ";
	if((val & AccelerationStructureCreateBitsKHR::descriptorBufferCaptureReplayEXT) == AccelerationStructureCreateBitsKHR::descriptorBufferCaptureReplayEXT) ret += "descriptorBufferCaptureReplayEXT | ";
	if((val & AccelerationStructureCreateBitsKHR::motionNV) == AccelerationStructureCreateBitsKHR::motionNV) ret += "motionNV | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(RayTracingShaderGroupTypeKHR val) {
	switch(val) {
		case RayTracingShaderGroupTypeKHR::general: return "general";
		case RayTracingShaderGroupTypeKHR::trianglesHitGroup: return "trianglesHitGroup";
		case RayTracingShaderGroupTypeKHR::proceduralHitGroup: return "proceduralHitGroup";
		default: return nullptr;
	}
}
inline const char* name(ShaderGroupShaderKHR val) {
	switch(val) {
		case ShaderGroupShaderKHR::general: return "general";
		case ShaderGroupShaderKHR::closestHit: return "closestHit";
		case ShaderGroupShaderKHR::anyHit: return "anyHit";
		case ShaderGroupShaderKHR::intersection: return "intersection";
		default: return nullptr;
	}
}
inline const char* name(FragmentShadingRateCombinerOpKHR val) {
	switch(val) {
		case FragmentShadingRateCombinerOpKHR::keep: return "keep";
		case FragmentShadingRateCombinerOpKHR::replace: return "replace";
		case FragmentShadingRateCombinerOpKHR::min: return "min";
		case FragmentShadingRateCombinerOpKHR::max: return "max";
		case FragmentShadingRateCombinerOpKHR::mul: return "mul";
		default: return nullptr;
	}
}
inline const char* name(PipelineExecutableStatisticFormatKHR val) {
	switch(val) {
		case PipelineExecutableStatisticFormatKHR::bool32: return "bool32";
		case PipelineExecutableStatisticFormatKHR::int64: return "int64";
		case PipelineExecutableStatisticFormatKHR::uint64: return "uint64";
		case PipelineExecutableStatisticFormatKHR::float64: return "float64";
		default: return nullptr;
	}
}
inline const char* name(VideoEncodeBitsKHR val) {
	switch(val) {
		case VideoEncodeBitsKHR::intraRefresh: return "intraRefresh";
		case VideoEncodeBitsKHR::withQuantizationDeltaMap: return "withQuantizationDeltaMap";
		case VideoEncodeBitsKHR::withEmphasisMap: return "withEmphasisMap";
		default: return nullptr;
	}
}
inline const char* name(VideoEncodeCapabilityBitsKHR val) {
	switch(val) {
		case VideoEncodeCapabilityBitsKHR::precedingExternallyEncodedBytes: return "precedingExternallyEncodedBytes";
		case VideoEncodeCapabilityBitsKHR::insufficientBitstreamBufferRangeDetection: return "insufficientBitstreamBufferRangeDetection";
		case VideoEncodeCapabilityBitsKHR::quantizationDeltaMap: return "quantizationDeltaMap";
		case VideoEncodeCapabilityBitsKHR::emphasisMap: return "emphasisMap";
		default: return nullptr;
	}
}
inline const char* name(VideoEncodeRateControlModeBitsKHR val) {
	switch(val) {
		case VideoEncodeRateControlModeBitsKHR::eDefault: return "eDefault";
		case VideoEncodeRateControlModeBitsKHR::disabled: return "disabled";
		case VideoEncodeRateControlModeBitsKHR::cbr: return "cbr";
		case VideoEncodeRateControlModeBitsKHR::vbr: return "vbr";
		default: return nullptr;
	}
}
inline const char* name(VideoEncodeFeedbackBitsKHR val) {
	switch(val) {
		case VideoEncodeFeedbackBitsKHR::bitstreamBufferOffset: return "bitstreamBufferOffset";
		case VideoEncodeFeedbackBitsKHR::bitstreamBytesWritten: return "bitstreamBytesWritten";
		case VideoEncodeFeedbackBitsKHR::bitstreamHasOverrides: return "bitstreamHasOverrides";
		default: return nullptr;
	}
}
inline const char* name(VideoEncodeUsageBitsKHR val) {
	switch(val) {
		case VideoEncodeUsageBitsKHR::eDefault: return "eDefault";
		case VideoEncodeUsageBitsKHR::transcoding: return "transcoding";
		case VideoEncodeUsageBitsKHR::streaming: return "streaming";
		case VideoEncodeUsageBitsKHR::recording: return "recording";
		case VideoEncodeUsageBitsKHR::conferencing: return "conferencing";
		default: return nullptr;
	}
}
inline const char* name(VideoEncodeContentBitsKHR val) {
	switch(val) {
		case VideoEncodeContentBitsKHR::eDefault: return "eDefault";
		case VideoEncodeContentBitsKHR::camera: return "camera";
		case VideoEncodeContentBitsKHR::desktop: return "desktop";
		case VideoEncodeContentBitsKHR::rendered: return "rendered";
		default: return nullptr;
	}
}
inline const char* name(VideoEncodeTuningModeKHR val) {
	switch(val) {
		case VideoEncodeTuningModeKHR::eDefault: return "eDefault";
		case VideoEncodeTuningModeKHR::highQuality: return "highQuality";
		case VideoEncodeTuningModeKHR::lowLatency: return "lowLatency";
		case VideoEncodeTuningModeKHR::ultraLowLatency: return "ultraLowLatency";
		case VideoEncodeTuningModeKHR::lossless: return "lossless";
		default: return nullptr;
	}
}
inline std::string name(VideoEncodeFlagsKHR val) {
	std::string ret;
	if((val & VideoEncodeBitsKHR::intraRefresh) == VideoEncodeBitsKHR::intraRefresh) ret += "intraRefresh | ";
	if((val & VideoEncodeBitsKHR::withQuantizationDeltaMap) == VideoEncodeBitsKHR::withQuantizationDeltaMap) ret += "withQuantizationDeltaMap | ";
	if((val & VideoEncodeBitsKHR::withEmphasisMap) == VideoEncodeBitsKHR::withEmphasisMap) ret += "withEmphasisMap | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(VideoEncodeCapabilityFlagsKHR val) {
	std::string ret;
	if((val & VideoEncodeCapabilityBitsKHR::precedingExternallyEncodedBytes) == VideoEncodeCapabilityBitsKHR::precedingExternallyEncodedBytes) ret += "precedingExternallyEncodedBytes | ";
	if((val & VideoEncodeCapabilityBitsKHR::insufficientBitstreamBufferRangeDetection) == VideoEncodeCapabilityBitsKHR::insufficientBitstreamBufferRangeDetection) ret += "insufficientBitstreamBufferRangeDetection | ";
	if((val & VideoEncodeCapabilityBitsKHR::quantizationDeltaMap) == VideoEncodeCapabilityBitsKHR::quantizationDeltaMap) ret += "quantizationDeltaMap | ";
	if((val & VideoEncodeCapabilityBitsKHR::emphasisMap) == VideoEncodeCapabilityBitsKHR::emphasisMap) ret += "emphasisMap | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(VideoEncodeRateControlModeFlagsKHR val) {
	std::string ret;
	if((val & VideoEncodeRateControlModeBitsKHR::eDefault) == VideoEncodeRateControlModeBitsKHR::eDefault) ret += "eDefault | ";
	if((val & VideoEncodeRateControlModeBitsKHR::disabled) == VideoEncodeRateControlModeBitsKHR::disabled) ret += "disabled | ";
	if((val & VideoEncodeRateControlModeBitsKHR::cbr) == VideoEncodeRateControlModeBitsKHR::cbr) ret += "cbr | ";
	if((val & VideoEncodeRateControlModeBitsKHR::vbr) == VideoEncodeRateControlModeBitsKHR::vbr) ret += "vbr | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(VideoEncodeFeedbackFlagsKHR val) {
	std::string ret;
	if((val & VideoEncodeFeedbackBitsKHR::bitstreamBufferOffset) == VideoEncodeFeedbackBitsKHR::bitstreamBufferOffset) ret += "bitstreamBufferOffset | ";
	if((val & VideoEncodeFeedbackBitsKHR::bitstreamBytesWritten) == VideoEncodeFeedbackBitsKHR::bitstreamBytesWritten) ret += "bitstreamBytesWritten | ";
	if((val & VideoEncodeFeedbackBitsKHR::bitstreamHasOverrides) == VideoEncodeFeedbackBitsKHR::bitstreamHasOverrides) ret += "bitstreamHasOverrides | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(VideoEncodeUsageFlagsKHR val) {
	std::string ret;
	if((val & VideoEncodeUsageBitsKHR::eDefault) == VideoEncodeUsageBitsKHR::eDefault) ret += "eDefault | ";
	if((val & VideoEncodeUsageBitsKHR::transcoding) == VideoEncodeUsageBitsKHR::transcoding) ret += "transcoding | ";
	if((val & VideoEncodeUsageBitsKHR::streaming) == VideoEncodeUsageBitsKHR::streaming) ret += "streaming | ";
	if((val & VideoEncodeUsageBitsKHR::recording) == VideoEncodeUsageBitsKHR::recording) ret += "recording | ";
	if((val & VideoEncodeUsageBitsKHR::conferencing) == VideoEncodeUsageBitsKHR::conferencing) ret += "conferencing | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(VideoEncodeContentFlagsKHR val) {
	std::string ret;
	if((val & VideoEncodeContentBitsKHR::eDefault) == VideoEncodeContentBitsKHR::eDefault) ret += "eDefault | ";
	if((val & VideoEncodeContentBitsKHR::camera) == VideoEncodeContentBitsKHR::camera) ret += "camera | ";
	if((val & VideoEncodeContentBitsKHR::desktop) == VideoEncodeContentBitsKHR::desktop) ret += "desktop | ";
	if((val & VideoEncodeContentBitsKHR::rendered) == VideoEncodeContentBitsKHR::rendered) ret += "rendered | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(AddressCommandBitsKHR val) {
	switch(val) {
		case AddressCommandBitsKHR::eProtected: return "eProtected";
		case AddressCommandBitsKHR::fullyBound: return "fullyBound";
		case AddressCommandBitsKHR::storageBufferUsage: return "storageBufferUsage";
		case AddressCommandBitsKHR::unknownStorageBufferUsage: return "unknownStorageBufferUsage";
		case AddressCommandBitsKHR::transformFeedbackBufferUsage: return "transformFeedbackBufferUsage";
		case AddressCommandBitsKHR::unknownTransformFeedbackBufferUsage: return "unknownTransformFeedbackBufferUsage";
		default: return nullptr;
	}
}
inline const char* name(ConditionalRenderingBitsEXT val) {
	switch(val) {
		case ConditionalRenderingBitsEXT::inverted: return "inverted";
		default: return nullptr;
	}
}
inline std::string name(AddressCommandFlagsKHR val) {
	std::string ret;
	if((val & AddressCommandBitsKHR::eProtected) == AddressCommandBitsKHR::eProtected) ret += "eProtected | ";
	if((val & AddressCommandBitsKHR::fullyBound) == AddressCommandBitsKHR::fullyBound) ret += "fullyBound | ";
	if((val & AddressCommandBitsKHR::storageBufferUsage) == AddressCommandBitsKHR::storageBufferUsage) ret += "storageBufferUsage | ";
	if((val & AddressCommandBitsKHR::unknownStorageBufferUsage) == AddressCommandBitsKHR::unknownStorageBufferUsage) ret += "unknownStorageBufferUsage | ";
	if((val & AddressCommandBitsKHR::transformFeedbackBufferUsage) == AddressCommandBitsKHR::transformFeedbackBufferUsage) ret += "transformFeedbackBufferUsage | ";
	if((val & AddressCommandBitsKHR::unknownTransformFeedbackBufferUsage) == AddressCommandBitsKHR::unknownTransformFeedbackBufferUsage) ret += "unknownTransformFeedbackBufferUsage | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(ConditionalRenderingFlagsEXT val) {
	std::string ret;
	if((val & ConditionalRenderingBitsEXT::inverted) == ConditionalRenderingBitsEXT::inverted) ret += "inverted | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(PresentScalingBitsKHR val) {
	switch(val) {
		case PresentScalingBitsKHR::oneToOne: return "oneToOne";
		case PresentScalingBitsKHR::aspectRatioStretch: return "aspectRatioStretch";
		case PresentScalingBitsKHR::stretch: return "stretch";
		default: return nullptr;
	}
}
inline const char* name(PresentGravityBitsKHR val) {
	switch(val) {
		case PresentGravityBitsKHR::min: return "min";
		case PresentGravityBitsKHR::max: return "max";
		case PresentGravityBitsKHR::centered: return "centered";
		default: return nullptr;
	}
}
inline std::string name(PresentScalingFlagsKHR val) {
	std::string ret;
	if((val & PresentScalingBitsKHR::oneToOne) == PresentScalingBitsKHR::oneToOne) ret += "oneToOne | ";
	if((val & PresentScalingBitsKHR::aspectRatioStretch) == PresentScalingBitsKHR::aspectRatioStretch) ret += "aspectRatioStretch | ";
	if((val & PresentScalingBitsKHR::stretch) == PresentScalingBitsKHR::stretch) ret += "stretch | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(PresentGravityFlagsKHR val) {
	std::string ret;
	if((val & PresentGravityBitsKHR::min) == PresentGravityBitsKHR::min) ret += "min | ";
	if((val & PresentGravityBitsKHR::max) == PresentGravityBitsKHR::max) ret += "max | ";
	if((val & PresentGravityBitsKHR::centered) == PresentGravityBitsKHR::centered) ret += "centered | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(ComponentTypeKHR val) {
	switch(val) {
		case ComponentTypeKHR::float16: return "float16";
		case ComponentTypeKHR::float32: return "float32";
		case ComponentTypeKHR::float64: return "float64";
		case ComponentTypeKHR::sint8: return "sint8";
		case ComponentTypeKHR::sint16: return "sint16";
		case ComponentTypeKHR::sint32: return "sint32";
		case ComponentTypeKHR::sint64: return "sint64";
		case ComponentTypeKHR::uint8: return "uint8";
		case ComponentTypeKHR::uint16: return "uint16";
		case ComponentTypeKHR::uint32: return "uint32";
		case ComponentTypeKHR::uint64: return "uint64";
		case ComponentTypeKHR::bfloat16: return "bfloat16";
		case ComponentTypeKHR::sint8PackedNV: return "sint8PackedNV";
		case ComponentTypeKHR::uint8PackedNV: return "uint8PackedNV";
		case ComponentTypeKHR::float8E4m3EXT: return "float8E4m3EXT";
		case ComponentTypeKHR::float8E5m2EXT: return "float8E5m2EXT";
		default: return nullptr;
	}
}
inline const char* name(ScopeKHR val) {
	switch(val) {
		case ScopeKHR::device: return "device";
		case ScopeKHR::workgroup: return "workgroup";
		case ScopeKHR::subgroup: return "subgroup";
		case ScopeKHR::queueFamily: return "queueFamily";
		default: return nullptr;
	}
}
inline const char* name(VideoEncodeAV1PredictionModeKHR val) {
	switch(val) {
		case VideoEncodeAV1PredictionModeKHR::intraOnly: return "intraOnly";
		case VideoEncodeAV1PredictionModeKHR::singleReference: return "singleReference";
		case VideoEncodeAV1PredictionModeKHR::unidirectionalCompound: return "unidirectionalCompound";
		case VideoEncodeAV1PredictionModeKHR::bidirectionalCompound: return "bidirectionalCompound";
		default: return nullptr;
	}
}
inline const char* name(VideoEncodeAV1RateControlGroupKHR val) {
	switch(val) {
		case VideoEncodeAV1RateControlGroupKHR::intra: return "intra";
		case VideoEncodeAV1RateControlGroupKHR::predictive: return "predictive";
		case VideoEncodeAV1RateControlGroupKHR::bipredictive: return "bipredictive";
		default: return nullptr;
	}
}
inline const char* name(VideoEncodeAV1CapabilityBitsKHR val) {
	switch(val) {
		case VideoEncodeAV1CapabilityBitsKHR::perRateControlGroupMinMaxQIndex: return "perRateControlGroupMinMaxQIndex";
		case VideoEncodeAV1CapabilityBitsKHR::generateObuExtensionHeader: return "generateObuExtensionHeader";
		case VideoEncodeAV1CapabilityBitsKHR::primaryReferenceCdfOnly: return "primaryReferenceCdfOnly";
		case VideoEncodeAV1CapabilityBitsKHR::frameSizeOverride: return "frameSizeOverride";
		case VideoEncodeAV1CapabilityBitsKHR::motionVectorScaling: return "motionVectorScaling";
		case VideoEncodeAV1CapabilityBitsKHR::compoundPredictionIntraRefresh: return "compoundPredictionIntraRefresh";
		default: return nullptr;
	}
}
inline const char* name(VideoEncodeAV1StdBitsKHR val) {
	switch(val) {
		case VideoEncodeAV1StdBitsKHR::uniformTileSpacingFlagSet: return "uniformTileSpacingFlagSet";
		case VideoEncodeAV1StdBitsKHR::skipModePresentUnset: return "skipModePresentUnset";
		case VideoEncodeAV1StdBitsKHR::primaryRefFrame: return "primaryRefFrame";
		case VideoEncodeAV1StdBitsKHR::deltaQ: return "deltaQ";
		default: return nullptr;
	}
}
inline const char* name(VideoEncodeAV1SuperblockSizeBitsKHR val) {
	switch(val) {
		case VideoEncodeAV1SuperblockSizeBitsKHR::e64: return "e64";
		case VideoEncodeAV1SuperblockSizeBitsKHR::e128: return "e128";
		default: return nullptr;
	}
}
inline const char* name(VideoEncodeAV1RateControlBitsKHR val) {
	switch(val) {
		case VideoEncodeAV1RateControlBitsKHR::regularGop: return "regularGop";
		case VideoEncodeAV1RateControlBitsKHR::temporalLayerPatternDyadic: return "temporalLayerPatternDyadic";
		case VideoEncodeAV1RateControlBitsKHR::referencePatternFlat: return "referencePatternFlat";
		case VideoEncodeAV1RateControlBitsKHR::referencePatternDyadic: return "referencePatternDyadic";
		default: return nullptr;
	}
}
inline std::string name(VideoEncodeAV1CapabilityFlagsKHR val) {
	std::string ret;
	if((val & VideoEncodeAV1CapabilityBitsKHR::perRateControlGroupMinMaxQIndex) == VideoEncodeAV1CapabilityBitsKHR::perRateControlGroupMinMaxQIndex) ret += "perRateControlGroupMinMaxQIndex | ";
	if((val & VideoEncodeAV1CapabilityBitsKHR::generateObuExtensionHeader) == VideoEncodeAV1CapabilityBitsKHR::generateObuExtensionHeader) ret += "generateObuExtensionHeader | ";
	if((val & VideoEncodeAV1CapabilityBitsKHR::primaryReferenceCdfOnly) == VideoEncodeAV1CapabilityBitsKHR::primaryReferenceCdfOnly) ret += "primaryReferenceCdfOnly | ";
	if((val & VideoEncodeAV1CapabilityBitsKHR::frameSizeOverride) == VideoEncodeAV1CapabilityBitsKHR::frameSizeOverride) ret += "frameSizeOverride | ";
	if((val & VideoEncodeAV1CapabilityBitsKHR::motionVectorScaling) == VideoEncodeAV1CapabilityBitsKHR::motionVectorScaling) ret += "motionVectorScaling | ";
	if((val & VideoEncodeAV1CapabilityBitsKHR::compoundPredictionIntraRefresh) == VideoEncodeAV1CapabilityBitsKHR::compoundPredictionIntraRefresh) ret += "compoundPredictionIntraRefresh | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(VideoEncodeAV1StdFlagsKHR val) {
	std::string ret;
	if((val & VideoEncodeAV1StdBitsKHR::uniformTileSpacingFlagSet) == VideoEncodeAV1StdBitsKHR::uniformTileSpacingFlagSet) ret += "uniformTileSpacingFlagSet | ";
	if((val & VideoEncodeAV1StdBitsKHR::skipModePresentUnset) == VideoEncodeAV1StdBitsKHR::skipModePresentUnset) ret += "skipModePresentUnset | ";
	if((val & VideoEncodeAV1StdBitsKHR::primaryRefFrame) == VideoEncodeAV1StdBitsKHR::primaryRefFrame) ret += "primaryRefFrame | ";
	if((val & VideoEncodeAV1StdBitsKHR::deltaQ) == VideoEncodeAV1StdBitsKHR::deltaQ) ret += "deltaQ | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(VideoEncodeAV1SuperblockSizeFlagsKHR val) {
	std::string ret;
	if((val & VideoEncodeAV1SuperblockSizeBitsKHR::e64) == VideoEncodeAV1SuperblockSizeBitsKHR::e64) ret += "e64 | ";
	if((val & VideoEncodeAV1SuperblockSizeBitsKHR::e128) == VideoEncodeAV1SuperblockSizeBitsKHR::e128) ret += "e128 | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(VideoEncodeAV1RateControlFlagsKHR val) {
	std::string ret;
	if((val & VideoEncodeAV1RateControlBitsKHR::regularGop) == VideoEncodeAV1RateControlBitsKHR::regularGop) ret += "regularGop | ";
	if((val & VideoEncodeAV1RateControlBitsKHR::temporalLayerPatternDyadic) == VideoEncodeAV1RateControlBitsKHR::temporalLayerPatternDyadic) ret += "temporalLayerPatternDyadic | ";
	if((val & VideoEncodeAV1RateControlBitsKHR::referencePatternFlat) == VideoEncodeAV1RateControlBitsKHR::referencePatternFlat) ret += "referencePatternFlat | ";
	if((val & VideoEncodeAV1RateControlBitsKHR::referencePatternDyadic) == VideoEncodeAV1RateControlBitsKHR::referencePatternDyadic) ret += "referencePatternDyadic | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(TimeDomainKHR val) {
	switch(val) {
		case TimeDomainKHR::device: return "device";
		case TimeDomainKHR::clockMonotonic: return "clockMonotonic";
		case TimeDomainKHR::clockMonotonicRaw: return "clockMonotonicRaw";
		case TimeDomainKHR::queryPerformanceCounter: return "queryPerformanceCounter";
		case TimeDomainKHR::presentStageLocalEXT: return "presentStageLocalEXT";
		case TimeDomainKHR::swapchainLocalEXT: return "swapchainLocalEXT";
		default: return nullptr;
	}
}
inline const char* name(AddressCopyBitsKHR val) {
	switch(val) {
		case AddressCopyBitsKHR::deviceLocal: return "deviceLocal";
		case AddressCopyBitsKHR::sparse: return "sparse";
		case AddressCopyBitsKHR::eProtected: return "eProtected";
		default: return nullptr;
	}
}
inline std::string name(AddressCopyFlagsKHR val) {
	std::string ret;
	if((val & AddressCopyBitsKHR::deviceLocal) == AddressCopyBitsKHR::deviceLocal) ret += "deviceLocal | ";
	if((val & AddressCopyBitsKHR::sparse) == AddressCopyBitsKHR::sparse) ret += "sparse | ";
	if((val & AddressCopyBitsKHR::eProtected) == AddressCopyBitsKHR::eProtected) ret += "eProtected | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(VideoEncodeIntraRefreshModeBitsKHR val) {
	switch(val) {
		case VideoEncodeIntraRefreshModeBitsKHR::none: return "none";
		case VideoEncodeIntraRefreshModeBitsKHR::perPicturePartition: return "perPicturePartition";
		case VideoEncodeIntraRefreshModeBitsKHR::blockBased: return "blockBased";
		case VideoEncodeIntraRefreshModeBitsKHR::blockRowBased: return "blockRowBased";
		case VideoEncodeIntraRefreshModeBitsKHR::blockColumnBased: return "blockColumnBased";
		default: return nullptr;
	}
}
inline std::string name(VideoEncodeIntraRefreshModeFlagsKHR val) {
	std::string ret;
	if((val & VideoEncodeIntraRefreshModeBitsKHR::none) == VideoEncodeIntraRefreshModeBitsKHR::none) ret += "none | ";
	if((val & VideoEncodeIntraRefreshModeBitsKHR::perPicturePartition) == VideoEncodeIntraRefreshModeBitsKHR::perPicturePartition) ret += "perPicturePartition | ";
	if((val & VideoEncodeIntraRefreshModeBitsKHR::blockBased) == VideoEncodeIntraRefreshModeBitsKHR::blockBased) ret += "blockBased | ";
	if((val & VideoEncodeIntraRefreshModeBitsKHR::blockRowBased) == VideoEncodeIntraRefreshModeBitsKHR::blockRowBased) ret += "blockRowBased | ";
	if((val & VideoEncodeIntraRefreshModeBitsKHR::blockColumnBased) == VideoEncodeIntraRefreshModeBitsKHR::blockColumnBased) ret += "blockColumnBased | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(PhysicalDeviceLayeredApiKHR val) {
	switch(val) {
		case PhysicalDeviceLayeredApiKHR::vulkan: return "vulkan";
		case PhysicalDeviceLayeredApiKHR::d3d12: return "d3d12";
		case PhysicalDeviceLayeredApiKHR::metal: return "metal";
		case PhysicalDeviceLayeredApiKHR::opengl: return "opengl";
		case PhysicalDeviceLayeredApiKHR::opengles: return "opengles";
		default: return nullptr;
	}
}
inline const char* name(DeviceFaultBitsKHR val) {
	switch(val) {
		case DeviceFaultBitsKHR::flagDeviceLost: return "flagDeviceLost";
		case DeviceFaultBitsKHR::flagMemoryAddress: return "flagMemoryAddress";
		case DeviceFaultBitsKHR::flagInstructionAddress: return "flagInstructionAddress";
		case DeviceFaultBitsKHR::flagVendor: return "flagVendor";
		case DeviceFaultBitsKHR::flagWatchdogTimeout: return "flagWatchdogTimeout";
		case DeviceFaultBitsKHR::flagOverflow: return "flagOverflow";
		default: return nullptr;
	}
}
inline const char* name(DeviceFaultAddressTypeKHR val) {
	switch(val) {
		case DeviceFaultAddressTypeKHR::none: return "none";
		case DeviceFaultAddressTypeKHR::readInvalid: return "readInvalid";
		case DeviceFaultAddressTypeKHR::writeInvalid: return "writeInvalid";
		case DeviceFaultAddressTypeKHR::executeInvalid: return "executeInvalid";
		case DeviceFaultAddressTypeKHR::instructionPointerUnknown: return "instructionPointerUnknown";
		case DeviceFaultAddressTypeKHR::instructionPointerInvalid: return "instructionPointerInvalid";
		case DeviceFaultAddressTypeKHR::instructionPointerFault: return "instructionPointerFault";
		default: return nullptr;
	}
}
inline const char* name(DeviceFaultVendorBinaryHeaderVersionKHR val) {
	switch(val) {
		case DeviceFaultVendorBinaryHeaderVersionKHR::one: return "one";
		default: return nullptr;
	}
}
inline std::string name(DeviceFaultFlagsKHR val) {
	std::string ret;
	if((val & DeviceFaultBitsKHR::flagDeviceLost) == DeviceFaultBitsKHR::flagDeviceLost) ret += "flagDeviceLost | ";
	if((val & DeviceFaultBitsKHR::flagMemoryAddress) == DeviceFaultBitsKHR::flagMemoryAddress) ret += "flagMemoryAddress | ";
	if((val & DeviceFaultBitsKHR::flagInstructionAddress) == DeviceFaultBitsKHR::flagInstructionAddress) ret += "flagInstructionAddress | ";
	if((val & DeviceFaultBitsKHR::flagVendor) == DeviceFaultBitsKHR::flagVendor) ret += "flagVendor | ";
	if((val & DeviceFaultBitsKHR::flagWatchdogTimeout) == DeviceFaultBitsKHR::flagWatchdogTimeout) ret += "flagWatchdogTimeout | ";
	if((val & DeviceFaultBitsKHR::flagOverflow) == DeviceFaultBitsKHR::flagOverflow) ret += "flagOverflow | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(AccessBits3KHR val) {
	switch(val) {
		case AccessBits3KHR::e3None: return "e3None";
		default: return nullptr;
	}
}
inline std::string name(AccessFlags3KHR val) {
	std::string ret;
	if((val & AccessBits3KHR::e3None) == AccessBits3KHR::e3None) ret += "e3None | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(DefaultVertexAttributeValueKHR val) {
	switch(val) {
		case DefaultVertexAttributeValueKHR::zeroZeroZeroZero: return "zeroZeroZeroZero";
		case DefaultVertexAttributeValueKHR::zeroZeroZeroOne: return "zeroZeroZeroOne";
		default: return nullptr;
	}
}
inline const char* name(RenderingAttachmentBitsKHR val) {
	switch(val) {
		case RenderingAttachmentBitsKHR::inputAttachmentFeedback: return "inputAttachmentFeedback";
		case RenderingAttachmentBitsKHR::resolveSkipTransferFunction: return "resolveSkipTransferFunction";
		case RenderingAttachmentBitsKHR::resolveEnableTransferFunction: return "resolveEnableTransferFunction";
		default: return nullptr;
	}
}
inline const char* name(ResolveImageBitsKHR val) {
	switch(val) {
		case ResolveImageBitsKHR::skipTransferFunction: return "skipTransferFunction";
		case ResolveImageBitsKHR::enableTransferFunction: return "enableTransferFunction";
		default: return nullptr;
	}
}
inline std::string name(RenderingAttachmentFlagsKHR val) {
	std::string ret;
	if((val & RenderingAttachmentBitsKHR::inputAttachmentFeedback) == RenderingAttachmentBitsKHR::inputAttachmentFeedback) ret += "inputAttachmentFeedback | ";
	if((val & RenderingAttachmentBitsKHR::resolveSkipTransferFunction) == RenderingAttachmentBitsKHR::resolveSkipTransferFunction) ret += "resolveSkipTransferFunction | ";
	if((val & RenderingAttachmentBitsKHR::resolveEnableTransferFunction) == RenderingAttachmentBitsKHR::resolveEnableTransferFunction) ret += "resolveEnableTransferFunction | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(ResolveImageFlagsKHR val) {
	std::string ret;
	if((val & ResolveImageBitsKHR::skipTransferFunction) == ResolveImageBitsKHR::skipTransferFunction) ret += "skipTransferFunction | ";
	if((val & ResolveImageBitsKHR::enableTransferFunction) == ResolveImageBitsKHR::enableTransferFunction) ret += "enableTransferFunction | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(DebugReportBitsEXT val) {
	switch(val) {
		case DebugReportBitsEXT::information: return "information";
		case DebugReportBitsEXT::warning: return "warning";
		case DebugReportBitsEXT::performanceWarning: return "performanceWarning";
		case DebugReportBitsEXT::error: return "error";
		case DebugReportBitsEXT::debug: return "debug";
		default: return nullptr;
	}
}
inline const char* name(DebugReportObjectTypeEXT val) {
	switch(val) {
		case DebugReportObjectTypeEXT::unknown: return "unknown";
		case DebugReportObjectTypeEXT::instance: return "instance";
		case DebugReportObjectTypeEXT::physicalDevice: return "physicalDevice";
		case DebugReportObjectTypeEXT::device: return "device";
		case DebugReportObjectTypeEXT::queue: return "queue";
		case DebugReportObjectTypeEXT::semaphore: return "semaphore";
		case DebugReportObjectTypeEXT::commandBuffer: return "commandBuffer";
		case DebugReportObjectTypeEXT::fence: return "fence";
		case DebugReportObjectTypeEXT::deviceMemory: return "deviceMemory";
		case DebugReportObjectTypeEXT::buffer: return "buffer";
		case DebugReportObjectTypeEXT::image: return "image";
		case DebugReportObjectTypeEXT::event: return "event";
		case DebugReportObjectTypeEXT::queryPool: return "queryPool";
		case DebugReportObjectTypeEXT::bufferView: return "bufferView";
		case DebugReportObjectTypeEXT::imageView: return "imageView";
		case DebugReportObjectTypeEXT::shaderModule: return "shaderModule";
		case DebugReportObjectTypeEXT::pipelineCache: return "pipelineCache";
		case DebugReportObjectTypeEXT::pipelineLayout: return "pipelineLayout";
		case DebugReportObjectTypeEXT::renderPass: return "renderPass";
		case DebugReportObjectTypeEXT::pipeline: return "pipeline";
		case DebugReportObjectTypeEXT::descriptorSetLayout: return "descriptorSetLayout";
		case DebugReportObjectTypeEXT::sampler: return "sampler";
		case DebugReportObjectTypeEXT::descriptorPool: return "descriptorPool";
		case DebugReportObjectTypeEXT::descriptorSet: return "descriptorSet";
		case DebugReportObjectTypeEXT::framebuffer: return "framebuffer";
		case DebugReportObjectTypeEXT::commandPool: return "commandPool";
		case DebugReportObjectTypeEXT::surfaceKHR: return "surfaceKHR";
		case DebugReportObjectTypeEXT::swapchainKHR: return "swapchainKHR";
		case DebugReportObjectTypeEXT::debugReportCallbackEXT: return "debugReportCallbackEXT";
		case DebugReportObjectTypeEXT::displayKHR: return "displayKHR";
		case DebugReportObjectTypeEXT::displayModeKHR: return "displayModeKHR";
		case DebugReportObjectTypeEXT::validationCacheEXT: return "validationCacheEXT";
		case DebugReportObjectTypeEXT::samplerYcbcrConversion: return "samplerYcbcrConversion";
		case DebugReportObjectTypeEXT::descriptorUpdateTemplate: return "descriptorUpdateTemplate";
		case DebugReportObjectTypeEXT::accelerationStructureKHR: return "accelerationStructureKHR";
		case DebugReportObjectTypeEXT::accelerationStructureNV: return "accelerationStructureNV";
		case DebugReportObjectTypeEXT::bufferCollectionFUCHSIA: return "bufferCollectionFUCHSIA";
		default: return nullptr;
	}
}
inline std::string name(DebugReportFlagsEXT val) {
	std::string ret;
	if((val & DebugReportBitsEXT::information) == DebugReportBitsEXT::information) ret += "information | ";
	if((val & DebugReportBitsEXT::warning) == DebugReportBitsEXT::warning) ret += "warning | ";
	if((val & DebugReportBitsEXT::performanceWarning) == DebugReportBitsEXT::performanceWarning) ret += "performanceWarning | ";
	if((val & DebugReportBitsEXT::error) == DebugReportBitsEXT::error) ret += "error | ";
	if((val & DebugReportBitsEXT::debug) == DebugReportBitsEXT::debug) ret += "debug | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(ValidationCheckEXT val) {
	switch(val) {
		case ValidationCheckEXT::all: return "all";
		case ValidationCheckEXT::shaders: return "shaders";
		default: return nullptr;
	}
}
inline const char* name(SurfaceCounterBitsEXT val) {
	switch(val) {
		case SurfaceCounterBitsEXT::vblank: return "vblank";
		default: return nullptr;
	}
}
inline std::string name(SurfaceCounterFlagsEXT val) {
	std::string ret;
	if((val & SurfaceCounterBitsEXT::vblank) == SurfaceCounterBitsEXT::vblank) ret += "vblank | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(DisplayPowerStateEXT val) {
	switch(val) {
		case DisplayPowerStateEXT::off: return "off";
		case DisplayPowerStateEXT::suspend: return "suspend";
		case DisplayPowerStateEXT::on: return "on";
		default: return nullptr;
	}
}
inline const char* name(DeviceEventTypeEXT val) {
	switch(val) {
		case DeviceEventTypeEXT::displayHotplug: return "displayHotplug";
		default: return nullptr;
	}
}
inline const char* name(DisplayEventTypeEXT val) {
	switch(val) {
		case DisplayEventTypeEXT::firstPixelOut: return "firstPixelOut";
		default: return nullptr;
	}
}
inline const char* name(DiscardRectangleModeEXT val) {
	switch(val) {
		case DiscardRectangleModeEXT::inclusive: return "inclusive";
		case DiscardRectangleModeEXT::exclusive: return "exclusive";
		default: return nullptr;
	}
}
inline const char* name(ConservativeRasterizationModeEXT val) {
	switch(val) {
		case ConservativeRasterizationModeEXT::disabled: return "disabled";
		case ConservativeRasterizationModeEXT::overestimate: return "overestimate";
		case ConservativeRasterizationModeEXT::underestimate: return "underestimate";
		default: return nullptr;
	}
}
inline const char* name(DebugUtilsMessageSeverityBitsEXT val) {
	switch(val) {
		case DebugUtilsMessageSeverityBitsEXT::verbose: return "verbose";
		case DebugUtilsMessageSeverityBitsEXT::info: return "info";
		case DebugUtilsMessageSeverityBitsEXT::warning: return "warning";
		case DebugUtilsMessageSeverityBitsEXT::error: return "error";
		default: return nullptr;
	}
}
inline const char* name(DebugUtilsMessageTypeBitsEXT val) {
	switch(val) {
		case DebugUtilsMessageTypeBitsEXT::general: return "general";
		case DebugUtilsMessageTypeBitsEXT::validation: return "validation";
		case DebugUtilsMessageTypeBitsEXT::performance: return "performance";
		case DebugUtilsMessageTypeBitsEXT::deviceAddressBinding: return "deviceAddressBinding";
		default: return nullptr;
	}
}
inline std::string name(DebugUtilsMessageTypeFlagsEXT val) {
	std::string ret;
	if((val & DebugUtilsMessageTypeBitsEXT::general) == DebugUtilsMessageTypeBitsEXT::general) ret += "general | ";
	if((val & DebugUtilsMessageTypeBitsEXT::validation) == DebugUtilsMessageTypeBitsEXT::validation) ret += "validation | ";
	if((val & DebugUtilsMessageTypeBitsEXT::performance) == DebugUtilsMessageTypeBitsEXT::performance) ret += "performance | ";
	if((val & DebugUtilsMessageTypeBitsEXT::deviceAddressBinding) == DebugUtilsMessageTypeBitsEXT::deviceAddressBinding) ret += "deviceAddressBinding | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(DebugUtilsMessageSeverityFlagsEXT val) {
	std::string ret;
	if((val & DebugUtilsMessageSeverityBitsEXT::verbose) == DebugUtilsMessageSeverityBitsEXT::verbose) ret += "verbose | ";
	if((val & DebugUtilsMessageSeverityBitsEXT::info) == DebugUtilsMessageSeverityBitsEXT::info) ret += "info | ";
	if((val & DebugUtilsMessageSeverityBitsEXT::warning) == DebugUtilsMessageSeverityBitsEXT::warning) ret += "warning | ";
	if((val & DebugUtilsMessageSeverityBitsEXT::error) == DebugUtilsMessageSeverityBitsEXT::error) ret += "error | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(TensorViewCreateBitsARM val) {
	switch(val) {
		case TensorViewCreateBitsARM::descriptorBufferCaptureReplay: return "descriptorBufferCaptureReplay";
		default: return nullptr;
	}
}
inline const char* name(DescriptorMappingSourceEXT val) {
	switch(val) {
		case DescriptorMappingSourceEXT::heapWithConstantOffset: return "heapWithConstantOffset";
		case DescriptorMappingSourceEXT::heapWithPushIndex: return "heapWithPushIndex";
		case DescriptorMappingSourceEXT::heapWithIndirectIndex: return "heapWithIndirectIndex";
		case DescriptorMappingSourceEXT::heapWithIndirectIndexArray: return "heapWithIndirectIndexArray";
		case DescriptorMappingSourceEXT::resourceHeapData: return "resourceHeapData";
		case DescriptorMappingSourceEXT::pushData: return "pushData";
		case DescriptorMappingSourceEXT::pushAddress: return "pushAddress";
		case DescriptorMappingSourceEXT::indirectAddress: return "indirectAddress";
		case DescriptorMappingSourceEXT::heapWithShaderRecordIndex: return "heapWithShaderRecordIndex";
		case DescriptorMappingSourceEXT::shaderRecordData: return "shaderRecordData";
		case DescriptorMappingSourceEXT::shaderRecordAddress: return "shaderRecordAddress";
		default: return nullptr;
	}
}
inline const char* name(SpirvResourceTypeBitsEXT val) {
	switch(val) {
		case SpirvResourceTypeBitsEXT::all: return "all";
		case SpirvResourceTypeBitsEXT::sampler: return "sampler";
		case SpirvResourceTypeBitsEXT::sampledImage: return "sampledImage";
		case SpirvResourceTypeBitsEXT::readOnlyImage: return "readOnlyImage";
		case SpirvResourceTypeBitsEXT::readWriteImage: return "readWriteImage";
		case SpirvResourceTypeBitsEXT::combinedSampledImage: return "combinedSampledImage";
		case SpirvResourceTypeBitsEXT::uniformBuffer: return "uniformBuffer";
		case SpirvResourceTypeBitsEXT::readOnlyStorageBuffer: return "readOnlyStorageBuffer";
		case SpirvResourceTypeBitsEXT::readWriteStorageBuffer: return "readWriteStorageBuffer";
		case SpirvResourceTypeBitsEXT::accelerationStructure: return "accelerationStructure";
		case SpirvResourceTypeBitsEXT::tensorARM: return "tensorARM";
		default: return nullptr;
	}
}
inline std::string name(TensorViewCreateFlagsARM val) {
	std::string ret;
	if((val & TensorViewCreateBitsARM::descriptorBufferCaptureReplay) == TensorViewCreateBitsARM::descriptorBufferCaptureReplay) ret += "descriptorBufferCaptureReplay | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(SpirvResourceTypeFlagsEXT val) {
	std::string ret;
	if((val & SpirvResourceTypeBitsEXT::all) == SpirvResourceTypeBitsEXT::all) ret += "all | ";
	if((val & SpirvResourceTypeBitsEXT::sampler) == SpirvResourceTypeBitsEXT::sampler) ret += "sampler | ";
	if((val & SpirvResourceTypeBitsEXT::sampledImage) == SpirvResourceTypeBitsEXT::sampledImage) ret += "sampledImage | ";
	if((val & SpirvResourceTypeBitsEXT::readOnlyImage) == SpirvResourceTypeBitsEXT::readOnlyImage) ret += "readOnlyImage | ";
	if((val & SpirvResourceTypeBitsEXT::readWriteImage) == SpirvResourceTypeBitsEXT::readWriteImage) ret += "readWriteImage | ";
	if((val & SpirvResourceTypeBitsEXT::combinedSampledImage) == SpirvResourceTypeBitsEXT::combinedSampledImage) ret += "combinedSampledImage | ";
	if((val & SpirvResourceTypeBitsEXT::uniformBuffer) == SpirvResourceTypeBitsEXT::uniformBuffer) ret += "uniformBuffer | ";
	if((val & SpirvResourceTypeBitsEXT::readOnlyStorageBuffer) == SpirvResourceTypeBitsEXT::readOnlyStorageBuffer) ret += "readOnlyStorageBuffer | ";
	if((val & SpirvResourceTypeBitsEXT::readWriteStorageBuffer) == SpirvResourceTypeBitsEXT::readWriteStorageBuffer) ret += "readWriteStorageBuffer | ";
	if((val & SpirvResourceTypeBitsEXT::accelerationStructure) == SpirvResourceTypeBitsEXT::accelerationStructure) ret += "accelerationStructure | ";
	if((val & SpirvResourceTypeBitsEXT::tensorARM) == SpirvResourceTypeBitsEXT::tensorARM) ret += "tensorARM | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(BlendOverlapEXT val) {
	switch(val) {
		case BlendOverlapEXT::uncorrelated: return "uncorrelated";
		case BlendOverlapEXT::disjoint: return "disjoint";
		case BlendOverlapEXT::conjoint: return "conjoint";
		default: return nullptr;
	}
}
inline const char* name(ValidationCacheHeaderVersionEXT val) {
	switch(val) {
		case ValidationCacheHeaderVersionEXT::one: return "one";
		default: return nullptr;
	}
}
inline const char* name(PresentStageBitsEXT val) {
	switch(val) {
		case PresentStageBitsEXT::queueOperationsEnd: return "queueOperationsEnd";
		case PresentStageBitsEXT::requestDequeued: return "requestDequeued";
		case PresentStageBitsEXT::imageFirstPixelOut: return "imageFirstPixelOut";
		case PresentStageBitsEXT::imageFirstPixelVisible: return "imageFirstPixelVisible";
		default: return nullptr;
	}
}
inline const char* name(PastPresentationTimingBitsEXT val) {
	switch(val) {
		case PastPresentationTimingBitsEXT::allowPartialResults: return "allowPartialResults";
		case PastPresentationTimingBitsEXT::allowOutOfOrderResults: return "allowOutOfOrderResults";
		default: return nullptr;
	}
}
inline const char* name(PresentTimingInfoBitsEXT val) {
	switch(val) {
		case PresentTimingInfoBitsEXT::presentAtRelativeTime: return "presentAtRelativeTime";
		case PresentTimingInfoBitsEXT::presentAtNearestRefreshCycle: return "presentAtNearestRefreshCycle";
		default: return nullptr;
	}
}
inline std::string name(PresentStageFlagsEXT val) {
	std::string ret;
	if((val & PresentStageBitsEXT::queueOperationsEnd) == PresentStageBitsEXT::queueOperationsEnd) ret += "queueOperationsEnd | ";
	if((val & PresentStageBitsEXT::requestDequeued) == PresentStageBitsEXT::requestDequeued) ret += "requestDequeued | ";
	if((val & PresentStageBitsEXT::imageFirstPixelOut) == PresentStageBitsEXT::imageFirstPixelOut) ret += "imageFirstPixelOut | ";
	if((val & PresentStageBitsEXT::imageFirstPixelVisible) == PresentStageBitsEXT::imageFirstPixelVisible) ret += "imageFirstPixelVisible | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(PastPresentationTimingFlagsEXT val) {
	std::string ret;
	if((val & PastPresentationTimingBitsEXT::allowPartialResults) == PastPresentationTimingBitsEXT::allowPartialResults) ret += "allowPartialResults | ";
	if((val & PastPresentationTimingBitsEXT::allowOutOfOrderResults) == PastPresentationTimingBitsEXT::allowOutOfOrderResults) ret += "allowOutOfOrderResults | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(PresentTimingInfoFlagsEXT val) {
	std::string ret;
	if((val & PresentTimingInfoBitsEXT::presentAtRelativeTime) == PresentTimingInfoBitsEXT::presentAtRelativeTime) ret += "presentAtRelativeTime | ";
	if((val & PresentTimingInfoBitsEXT::presentAtNearestRefreshCycle) == PresentTimingInfoBitsEXT::presentAtNearestRefreshCycle) ret += "presentAtNearestRefreshCycle | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(ValidationFeatureEnableEXT val) {
	switch(val) {
		case ValidationFeatureEnableEXT::gpuAssisted: return "gpuAssisted";
		case ValidationFeatureEnableEXT::gpuAssistedReserveBindingSlot: return "gpuAssistedReserveBindingSlot";
		case ValidationFeatureEnableEXT::bestPractices: return "bestPractices";
		case ValidationFeatureEnableEXT::debugPrintf: return "debugPrintf";
		case ValidationFeatureEnableEXT::synchronizationValidation: return "synchronizationValidation";
		default: return nullptr;
	}
}
inline const char* name(ValidationFeatureDisableEXT val) {
	switch(val) {
		case ValidationFeatureDisableEXT::all: return "all";
		case ValidationFeatureDisableEXT::shaders: return "shaders";
		case ValidationFeatureDisableEXT::threadSafety: return "threadSafety";
		case ValidationFeatureDisableEXT::apiParameters: return "apiParameters";
		case ValidationFeatureDisableEXT::objectLifetimes: return "objectLifetimes";
		case ValidationFeatureDisableEXT::coreChecks: return "coreChecks";
		case ValidationFeatureDisableEXT::uniqueHandles: return "uniqueHandles";
		case ValidationFeatureDisableEXT::shaderValidationCache: return "shaderValidationCache";
		default: return nullptr;
	}
}
inline const char* name(ProvokingVertexModeEXT val) {
	switch(val) {
		case ProvokingVertexModeEXT::firstVertex: return "firstVertex";
		case ProvokingVertexModeEXT::lastVertex: return "lastVertex";
		default: return nullptr;
	}
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
inline const char* name(FullScreenExclusiveEXT val) {
	switch(val) {
		case FullScreenExclusiveEXT::eDefault: return "eDefault";
		case FullScreenExclusiveEXT::allowed: return "allowed";
		case FullScreenExclusiveEXT::disallowed: return "disallowed";
		case FullScreenExclusiveEXT::applicationControlled: return "applicationControlled";
		default: return nullptr;
	}
}
#endif //VK_USE_PLATFORM_WIN32_KHR

inline const char* name(DepthBiasRepresentationEXT val) {
	switch(val) {
		case DepthBiasRepresentationEXT::leastRepresentableValueFormat: return "leastRepresentableValueFormat";
		case DepthBiasRepresentationEXT::leastRepresentableValueForceUnorm: return "leastRepresentableValueForceUnorm";
		case DepthBiasRepresentationEXT::eFloat: return "eFloat";
		default: return nullptr;
	}
}
inline const char* name(DeviceMemoryReportEventTypeEXT val) {
	switch(val) {
		case DeviceMemoryReportEventTypeEXT::allocate: return "allocate";
		case DeviceMemoryReportEventTypeEXT::free: return "free";
		case DeviceMemoryReportEventTypeEXT::import: return "import";
		case DeviceMemoryReportEventTypeEXT::unimport: return "unimport";
		case DeviceMemoryReportEventTypeEXT::allocationFailed: return "allocationFailed";
		default: return nullptr;
	}
}
inline const char* name(GraphicsPipelineLibraryBitsEXT val) {
	switch(val) {
		case GraphicsPipelineLibraryBitsEXT::vertexInputInterface: return "vertexInputInterface";
		case GraphicsPipelineLibraryBitsEXT::preRasterizationShaders: return "preRasterizationShaders";
		case GraphicsPipelineLibraryBitsEXT::fragmentShader: return "fragmentShader";
		case GraphicsPipelineLibraryBitsEXT::fragmentOutputInterface: return "fragmentOutputInterface";
		default: return nullptr;
	}
}
inline std::string name(GraphicsPipelineLibraryFlagsEXT val) {
	std::string ret;
	if((val & GraphicsPipelineLibraryBitsEXT::vertexInputInterface) == GraphicsPipelineLibraryBitsEXT::vertexInputInterface) ret += "vertexInputInterface | ";
	if((val & GraphicsPipelineLibraryBitsEXT::preRasterizationShaders) == GraphicsPipelineLibraryBitsEXT::preRasterizationShaders) ret += "preRasterizationShaders | ";
	if((val & GraphicsPipelineLibraryBitsEXT::fragmentShader) == GraphicsPipelineLibraryBitsEXT::fragmentShader) ret += "fragmentShader | ";
	if((val & GraphicsPipelineLibraryBitsEXT::fragmentOutputInterface) == GraphicsPipelineLibraryBitsEXT::fragmentOutputInterface) ret += "fragmentOutputInterface | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(ImageCompressionBitsEXT val) {
	switch(val) {
		case ImageCompressionBitsEXT::eDefault: return "eDefault";
		case ImageCompressionBitsEXT::fixedRateDefault: return "fixedRateDefault";
		case ImageCompressionBitsEXT::fixedRateExplicit: return "fixedRateExplicit";
		case ImageCompressionBitsEXT::disabled: return "disabled";
		default: return nullptr;
	}
}
inline const char* name(ImageCompressionFixedRateBitsEXT val) {
	switch(val) {
		case ImageCompressionFixedRateBitsEXT::none: return "none";
		case ImageCompressionFixedRateBitsEXT::e1bpc: return "e1bpc";
		case ImageCompressionFixedRateBitsEXT::e2bpc: return "e2bpc";
		case ImageCompressionFixedRateBitsEXT::e3bpc: return "e3bpc";
		case ImageCompressionFixedRateBitsEXT::e4bpc: return "e4bpc";
		case ImageCompressionFixedRateBitsEXT::e5bpc: return "e5bpc";
		case ImageCompressionFixedRateBitsEXT::e6bpc: return "e6bpc";
		case ImageCompressionFixedRateBitsEXT::e7bpc: return "e7bpc";
		case ImageCompressionFixedRateBitsEXT::e8bpc: return "e8bpc";
		case ImageCompressionFixedRateBitsEXT::e9bpc: return "e9bpc";
		case ImageCompressionFixedRateBitsEXT::e10bpc: return "e10bpc";
		case ImageCompressionFixedRateBitsEXT::e11bpc: return "e11bpc";
		case ImageCompressionFixedRateBitsEXT::e12bpc: return "e12bpc";
		case ImageCompressionFixedRateBitsEXT::e13bpc: return "e13bpc";
		case ImageCompressionFixedRateBitsEXT::e14bpc: return "e14bpc";
		case ImageCompressionFixedRateBitsEXT::e15bpc: return "e15bpc";
		case ImageCompressionFixedRateBitsEXT::e16bpc: return "e16bpc";
		case ImageCompressionFixedRateBitsEXT::e17bpc: return "e17bpc";
		case ImageCompressionFixedRateBitsEXT::e18bpc: return "e18bpc";
		case ImageCompressionFixedRateBitsEXT::e19bpc: return "e19bpc";
		case ImageCompressionFixedRateBitsEXT::e20bpc: return "e20bpc";
		case ImageCompressionFixedRateBitsEXT::e21bpc: return "e21bpc";
		case ImageCompressionFixedRateBitsEXT::e22bpc: return "e22bpc";
		case ImageCompressionFixedRateBitsEXT::e23bpc: return "e23bpc";
		case ImageCompressionFixedRateBitsEXT::e24bpc: return "e24bpc";
		default: return nullptr;
	}
}
inline std::string name(ImageCompressionFlagsEXT val) {
	std::string ret;
	if((val & ImageCompressionBitsEXT::eDefault) == ImageCompressionBitsEXT::eDefault) ret += "eDefault | ";
	if((val & ImageCompressionBitsEXT::fixedRateDefault) == ImageCompressionBitsEXT::fixedRateDefault) ret += "fixedRateDefault | ";
	if((val & ImageCompressionBitsEXT::fixedRateExplicit) == ImageCompressionBitsEXT::fixedRateExplicit) ret += "fixedRateExplicit | ";
	if((val & ImageCompressionBitsEXT::disabled) == ImageCompressionBitsEXT::disabled) ret += "disabled | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(ImageCompressionFixedRateFlagsEXT val) {
	std::string ret;
	if((val & ImageCompressionFixedRateBitsEXT::none) == ImageCompressionFixedRateBitsEXT::none) ret += "none | ";
	if((val & ImageCompressionFixedRateBitsEXT::e1bpc) == ImageCompressionFixedRateBitsEXT::e1bpc) ret += "e1bpc | ";
	if((val & ImageCompressionFixedRateBitsEXT::e2bpc) == ImageCompressionFixedRateBitsEXT::e2bpc) ret += "e2bpc | ";
	if((val & ImageCompressionFixedRateBitsEXT::e3bpc) == ImageCompressionFixedRateBitsEXT::e3bpc) ret += "e3bpc | ";
	if((val & ImageCompressionFixedRateBitsEXT::e4bpc) == ImageCompressionFixedRateBitsEXT::e4bpc) ret += "e4bpc | ";
	if((val & ImageCompressionFixedRateBitsEXT::e5bpc) == ImageCompressionFixedRateBitsEXT::e5bpc) ret += "e5bpc | ";
	if((val & ImageCompressionFixedRateBitsEXT::e6bpc) == ImageCompressionFixedRateBitsEXT::e6bpc) ret += "e6bpc | ";
	if((val & ImageCompressionFixedRateBitsEXT::e7bpc) == ImageCompressionFixedRateBitsEXT::e7bpc) ret += "e7bpc | ";
	if((val & ImageCompressionFixedRateBitsEXT::e8bpc) == ImageCompressionFixedRateBitsEXT::e8bpc) ret += "e8bpc | ";
	if((val & ImageCompressionFixedRateBitsEXT::e9bpc) == ImageCompressionFixedRateBitsEXT::e9bpc) ret += "e9bpc | ";
	if((val & ImageCompressionFixedRateBitsEXT::e10bpc) == ImageCompressionFixedRateBitsEXT::e10bpc) ret += "e10bpc | ";
	if((val & ImageCompressionFixedRateBitsEXT::e11bpc) == ImageCompressionFixedRateBitsEXT::e11bpc) ret += "e11bpc | ";
	if((val & ImageCompressionFixedRateBitsEXT::e12bpc) == ImageCompressionFixedRateBitsEXT::e12bpc) ret += "e12bpc | ";
	if((val & ImageCompressionFixedRateBitsEXT::e13bpc) == ImageCompressionFixedRateBitsEXT::e13bpc) ret += "e13bpc | ";
	if((val & ImageCompressionFixedRateBitsEXT::e14bpc) == ImageCompressionFixedRateBitsEXT::e14bpc) ret += "e14bpc | ";
	if((val & ImageCompressionFixedRateBitsEXT::e15bpc) == ImageCompressionFixedRateBitsEXT::e15bpc) ret += "e15bpc | ";
	if((val & ImageCompressionFixedRateBitsEXT::e16bpc) == ImageCompressionFixedRateBitsEXT::e16bpc) ret += "e16bpc | ";
	if((val & ImageCompressionFixedRateBitsEXT::e17bpc) == ImageCompressionFixedRateBitsEXT::e17bpc) ret += "e17bpc | ";
	if((val & ImageCompressionFixedRateBitsEXT::e18bpc) == ImageCompressionFixedRateBitsEXT::e18bpc) ret += "e18bpc | ";
	if((val & ImageCompressionFixedRateBitsEXT::e19bpc) == ImageCompressionFixedRateBitsEXT::e19bpc) ret += "e19bpc | ";
	if((val & ImageCompressionFixedRateBitsEXT::e20bpc) == ImageCompressionFixedRateBitsEXT::e20bpc) ret += "e20bpc | ";
	if((val & ImageCompressionFixedRateBitsEXT::e21bpc) == ImageCompressionFixedRateBitsEXT::e21bpc) ret += "e21bpc | ";
	if((val & ImageCompressionFixedRateBitsEXT::e22bpc) == ImageCompressionFixedRateBitsEXT::e22bpc) ret += "e22bpc | ";
	if((val & ImageCompressionFixedRateBitsEXT::e23bpc) == ImageCompressionFixedRateBitsEXT::e23bpc) ret += "e23bpc | ";
	if((val & ImageCompressionFixedRateBitsEXT::e24bpc) == ImageCompressionFixedRateBitsEXT::e24bpc) ret += "e24bpc | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}

#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
#endif //VK_USE_PLATFORM_DIRECTFB_EXT

inline const char* name(DeviceAddressBindingBitsEXT val) {
	switch(val) {
		case DeviceAddressBindingBitsEXT::internalObject: return "internalObject";
		default: return nullptr;
	}
}
inline const char* name(DeviceAddressBindingTypeEXT val) {
	switch(val) {
		case DeviceAddressBindingTypeEXT::bind: return "bind";
		case DeviceAddressBindingTypeEXT::unbind: return "unbind";
		default: return nullptr;
	}
}
inline std::string name(DeviceAddressBindingFlagsEXT val) {
	std::string ret;
	if((val & DeviceAddressBindingBitsEXT::internalObject) == DeviceAddressBindingBitsEXT::internalObject) ret += "internalObject | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(FrameBoundaryBitsEXT val) {
	switch(val) {
		case FrameBoundaryBitsEXT::frameEnd: return "frameEnd";
		default: return nullptr;
	}
}
inline std::string name(FrameBoundaryFlagsEXT val) {
	std::string ret;
	if((val & FrameBoundaryBitsEXT::frameEnd) == FrameBoundaryBitsEXT::frameEnd) ret += "frameEnd | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(MicromapTypeEXT val) {
	switch(val) {
		case MicromapTypeEXT::opacityMicromap: return "opacityMicromap";
		default: return nullptr;
	}
}
inline const char* name(BuildMicromapBitsEXT val) {
	switch(val) {
		case BuildMicromapBitsEXT::preferFastTrace: return "preferFastTrace";
		case BuildMicromapBitsEXT::preferFastBuild: return "preferFastBuild";
		case BuildMicromapBitsEXT::allowCompaction: return "allowCompaction";
		default: return nullptr;
	}
}
inline const char* name(BuildMicromapModeEXT val) {
	switch(val) {
		case BuildMicromapModeEXT::build: return "build";
		default: return nullptr;
	}
}
inline const char* name(MicromapCreateBitsEXT val) {
	switch(val) {
		case MicromapCreateBitsEXT::deviceAddressCaptureReplay: return "deviceAddressCaptureReplay";
		default: return nullptr;
	}
}
inline const char* name(CopyMicromapModeEXT val) {
	switch(val) {
		case CopyMicromapModeEXT::clone: return "clone";
		case CopyMicromapModeEXT::serialize: return "serialize";
		case CopyMicromapModeEXT::deserialize: return "deserialize";
		case CopyMicromapModeEXT::compact: return "compact";
		default: return nullptr;
	}
}
inline const char* name(OpacityMicromapFormatEXT val) {
	switch(val) {
		case OpacityMicromapFormatEXT::e2State: return "e2State";
		case OpacityMicromapFormatEXT::e4State: return "e4State";
		default: return nullptr;
	}
}
inline const char* name(OpacityMicromapSpecialIndexEXT val) {
	switch(val) {
		case OpacityMicromapSpecialIndexEXT::fullyTransparent: return "fullyTransparent";
		case OpacityMicromapSpecialIndexEXT::fullyOpaque: return "fullyOpaque";
		case OpacityMicromapSpecialIndexEXT::fullyUnknownTransparent: return "fullyUnknownTransparent";
		case OpacityMicromapSpecialIndexEXT::fullyUnknownOpaque: return "fullyUnknownOpaque";
		case OpacityMicromapSpecialIndexEXT::clusterGeometryDisableOpacityMicromapNV: return "clusterGeometryDisableOpacityMicromapNV";
		default: return nullptr;
	}
}
inline std::string name(BuildMicromapFlagsEXT val) {
	std::string ret;
	if((val & BuildMicromapBitsEXT::preferFastTrace) == BuildMicromapBitsEXT::preferFastTrace) ret += "preferFastTrace | ";
	if((val & BuildMicromapBitsEXT::preferFastBuild) == BuildMicromapBitsEXT::preferFastBuild) ret += "preferFastBuild | ";
	if((val & BuildMicromapBitsEXT::allowCompaction) == BuildMicromapBitsEXT::allowCompaction) ret += "allowCompaction | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(MicromapCreateFlagsEXT val) {
	std::string ret;
	if((val & MicromapCreateBitsEXT::deviceAddressCaptureReplay) == MicromapCreateBitsEXT::deviceAddressCaptureReplay) ret += "deviceAddressCaptureReplay | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(ViewportCoordinateSwizzleNV val) {
	switch(val) {
		case ViewportCoordinateSwizzleNV::positiveX: return "positiveX";
		case ViewportCoordinateSwizzleNV::negativeX: return "negativeX";
		case ViewportCoordinateSwizzleNV::positiveY: return "positiveY";
		case ViewportCoordinateSwizzleNV::negativeY: return "negativeY";
		case ViewportCoordinateSwizzleNV::positiveZ: return "positiveZ";
		case ViewportCoordinateSwizzleNV::negativeZ: return "negativeZ";
		case ViewportCoordinateSwizzleNV::positiveW: return "positiveW";
		case ViewportCoordinateSwizzleNV::negativeW: return "negativeW";
		default: return nullptr;
	}
}
inline const char* name(CoverageModulationModeNV val) {
	switch(val) {
		case CoverageModulationModeNV::none: return "none";
		case CoverageModulationModeNV::rgb: return "rgb";
		case CoverageModulationModeNV::alpha: return "alpha";
		case CoverageModulationModeNV::rgba: return "rgba";
		default: return nullptr;
	}
}
inline const char* name(CoverageReductionModeNV val) {
	switch(val) {
		case CoverageReductionModeNV::merge: return "merge";
		case CoverageReductionModeNV::truncate: return "truncate";
		default: return nullptr;
	}
}
inline const char* name(SubpassMergeStatusEXT val) {
	switch(val) {
		case SubpassMergeStatusEXT::merged: return "merged";
		case SubpassMergeStatusEXT::disallowed: return "disallowed";
		case SubpassMergeStatusEXT::notMergedSideEffects: return "notMergedSideEffects";
		case SubpassMergeStatusEXT::notMergedSamplesMismatch: return "notMergedSamplesMismatch";
		case SubpassMergeStatusEXT::notMergedViewsMismatch: return "notMergedViewsMismatch";
		case SubpassMergeStatusEXT::notMergedAliasing: return "notMergedAliasing";
		case SubpassMergeStatusEXT::notMergedDependencies: return "notMergedDependencies";
		case SubpassMergeStatusEXT::notMergedIncompatibleInputAttachment: return "notMergedIncompatibleInputAttachment";
		case SubpassMergeStatusEXT::notMergedTooManyAttachments: return "notMergedTooManyAttachments";
		case SubpassMergeStatusEXT::notMergedInsufficientStorage: return "notMergedInsufficientStorage";
		case SubpassMergeStatusEXT::notMergedDepthStencilCount: return "notMergedDepthStencilCount";
		case SubpassMergeStatusEXT::notMergedResolveAttachmentReuse: return "notMergedResolveAttachmentReuse";
		case SubpassMergeStatusEXT::notMergedSingleSubpass: return "notMergedSingleSubpass";
		case SubpassMergeStatusEXT::notMergedUnspecified: return "notMergedUnspecified";
		default: return nullptr;
	}
}
inline const char* name(ShaderCreateBitsEXT val) {
	switch(val) {
		case ShaderCreateBitsEXT::linkStage: return "linkStage";
		case ShaderCreateBitsEXT::descriptorHeap: return "descriptorHeap";
		case ShaderCreateBitsEXT::instrumentShaderARM: return "instrumentShaderARM";
		case ShaderCreateBitsEXT::allowVaryingSubgroupSize: return "allowVaryingSubgroupSize";
		case ShaderCreateBitsEXT::requireFullSubgroups: return "requireFullSubgroups";
		case ShaderCreateBitsEXT::noTaskShader: return "noTaskShader";
		case ShaderCreateBitsEXT::dispatchBase: return "dispatchBase";
		case ShaderCreateBitsEXT::fragmentShadingRateAttachment: return "fragmentShadingRateAttachment";
		case ShaderCreateBitsEXT::fragmentDensityMapAttachment: return "fragmentDensityMapAttachment";
		case ShaderCreateBitsEXT::indirectBindable: return "indirectBindable";
		case ShaderCreateBitsEXT::e64BitIndexing: return "e64BitIndexing";
		case ShaderCreateBitsEXT::independentSetsKHR: return "independentSetsKHR";
		default: return nullptr;
	}
}
inline const char* name(ShaderCodeTypeEXT val) {
	switch(val) {
		case ShaderCodeTypeEXT::binary: return "binary";
		case ShaderCodeTypeEXT::spirv: return "spirv";
		default: return nullptr;
	}
}
inline const char* name(DepthClampModeEXT val) {
	switch(val) {
		case DepthClampModeEXT::viewportRange: return "viewportRange";
		case DepthClampModeEXT::userDefinedRange: return "userDefinedRange";
		default: return nullptr;
	}
}
inline std::string name(ShaderCreateFlagsEXT val) {
	std::string ret;
	if((val & ShaderCreateBitsEXT::linkStage) == ShaderCreateBitsEXT::linkStage) ret += "linkStage | ";
	if((val & ShaderCreateBitsEXT::descriptorHeap) == ShaderCreateBitsEXT::descriptorHeap) ret += "descriptorHeap | ";
	if((val & ShaderCreateBitsEXT::instrumentShaderARM) == ShaderCreateBitsEXT::instrumentShaderARM) ret += "instrumentShaderARM | ";
	if((val & ShaderCreateBitsEXT::allowVaryingSubgroupSize) == ShaderCreateBitsEXT::allowVaryingSubgroupSize) ret += "allowVaryingSubgroupSize | ";
	if((val & ShaderCreateBitsEXT::requireFullSubgroups) == ShaderCreateBitsEXT::requireFullSubgroups) ret += "requireFullSubgroups | ";
	if((val & ShaderCreateBitsEXT::noTaskShader) == ShaderCreateBitsEXT::noTaskShader) ret += "noTaskShader | ";
	if((val & ShaderCreateBitsEXT::dispatchBase) == ShaderCreateBitsEXT::dispatchBase) ret += "dispatchBase | ";
	if((val & ShaderCreateBitsEXT::fragmentShadingRateAttachment) == ShaderCreateBitsEXT::fragmentShadingRateAttachment) ret += "fragmentShadingRateAttachment | ";
	if((val & ShaderCreateBitsEXT::fragmentDensityMapAttachment) == ShaderCreateBitsEXT::fragmentDensityMapAttachment) ret += "fragmentDensityMapAttachment | ";
	if((val & ShaderCreateBitsEXT::indirectBindable) == ShaderCreateBitsEXT::indirectBindable) ret += "indirectBindable | ";
	if((val & ShaderCreateBitsEXT::e64BitIndexing) == ShaderCreateBitsEXT::e64BitIndexing) ret += "e64BitIndexing | ";
	if((val & ShaderCreateBitsEXT::independentSetsKHR) == ShaderCreateBitsEXT::independentSetsKHR) ret += "independentSetsKHR | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(LayerSettingTypeEXT val) {
	switch(val) {
		case LayerSettingTypeEXT::bool32: return "bool32";
		case LayerSettingTypeEXT::int32: return "int32";
		case LayerSettingTypeEXT::int64: return "int64";
		case LayerSettingTypeEXT::uint32: return "uint32";
		case LayerSettingTypeEXT::uint64: return "uint64";
		case LayerSettingTypeEXT::float32: return "float32";
		case LayerSettingTypeEXT::float64: return "float64";
		case LayerSettingTypeEXT::string: return "string";
		default: return nullptr;
	}
}
inline const char* name(MemoryDecompressionMethodBitsEXT val) {
	switch(val) {
		case MemoryDecompressionMethodBitsEXT::gdeflate10: return "gdeflate10";
		default: return nullptr;
	}
}
inline std::string name(MemoryDecompressionMethodFlagsEXT val) {
	std::string ret;
	if((val & MemoryDecompressionMethodBitsEXT::gdeflate10) == MemoryDecompressionMethodBitsEXT::gdeflate10) ret += "gdeflate10 | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(IndirectCommandsInputModeBitsEXT val) {
	switch(val) {
		case IndirectCommandsInputModeBitsEXT::vulkanIndexBuffer: return "vulkanIndexBuffer";
		case IndirectCommandsInputModeBitsEXT::dxgiIndexBuffer: return "dxgiIndexBuffer";
		default: return nullptr;
	}
}
inline const char* name(IndirectExecutionSetInfoTypeEXT val) {
	switch(val) {
		case IndirectExecutionSetInfoTypeEXT::pipelines: return "pipelines";
		case IndirectExecutionSetInfoTypeEXT::shaderObjects: return "shaderObjects";
		default: return nullptr;
	}
}
inline const char* name(IndirectCommandsLayoutUsageBitsEXT val) {
	switch(val) {
		case IndirectCommandsLayoutUsageBitsEXT::explicitPreprocess: return "explicitPreprocess";
		case IndirectCommandsLayoutUsageBitsEXT::unorderedSequences: return "unorderedSequences";
		default: return nullptr;
	}
}
inline const char* name(IndirectCommandsTokenTypeEXT val) {
	switch(val) {
		case IndirectCommandsTokenTypeEXT::executionSet: return "executionSet";
		case IndirectCommandsTokenTypeEXT::pushConstant: return "pushConstant";
		case IndirectCommandsTokenTypeEXT::sequenceIndex: return "sequenceIndex";
		case IndirectCommandsTokenTypeEXT::indexBuffer: return "indexBuffer";
		case IndirectCommandsTokenTypeEXT::vertexBuffer: return "vertexBuffer";
		case IndirectCommandsTokenTypeEXT::drawIndexed: return "drawIndexed";
		case IndirectCommandsTokenTypeEXT::draw: return "draw";
		case IndirectCommandsTokenTypeEXT::drawIndexedCount: return "drawIndexedCount";
		case IndirectCommandsTokenTypeEXT::drawCount: return "drawCount";
		case IndirectCommandsTokenTypeEXT::dispatch: return "dispatch";
		case IndirectCommandsTokenTypeEXT::pushData: return "pushData";
		case IndirectCommandsTokenTypeEXT::pushDataSequenceIndex: return "pushDataSequenceIndex";
		case IndirectCommandsTokenTypeEXT::drawMeshTasksNV: return "drawMeshTasksNV";
		case IndirectCommandsTokenTypeEXT::drawMeshTasksCountNV: return "drawMeshTasksCountNV";
		case IndirectCommandsTokenTypeEXT::drawMeshTasks: return "drawMeshTasks";
		case IndirectCommandsTokenTypeEXT::drawMeshTasksCount: return "drawMeshTasksCount";
		case IndirectCommandsTokenTypeEXT::traceRays2: return "traceRays2";
		default: return nullptr;
	}
}
inline std::string name(IndirectCommandsInputModeFlagsEXT val) {
	std::string ret;
	if((val & IndirectCommandsInputModeBitsEXT::vulkanIndexBuffer) == IndirectCommandsInputModeBitsEXT::vulkanIndexBuffer) ret += "vulkanIndexBuffer | ";
	if((val & IndirectCommandsInputModeBitsEXT::dxgiIndexBuffer) == IndirectCommandsInputModeBitsEXT::dxgiIndexBuffer) ret += "dxgiIndexBuffer | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(IndirectCommandsLayoutUsageFlagsEXT val) {
	std::string ret;
	if((val & IndirectCommandsLayoutUsageBitsEXT::explicitPreprocess) == IndirectCommandsLayoutUsageBitsEXT::explicitPreprocess) ret += "explicitPreprocess | ";
	if((val & IndirectCommandsLayoutUsageBitsEXT::unorderedSequences) == IndirectCommandsLayoutUsageBitsEXT::unorderedSequences) ret += "unorderedSequences | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(RayTracingInvocationReorderModeEXT val) {
	switch(val) {
		case RayTracingInvocationReorderModeEXT::none: return "none";
		case RayTracingInvocationReorderModeEXT::reorder: return "reorder";
		default: return nullptr;
	}
}
inline const char* name(RasterizationOrderAMD val) {
	switch(val) {
		case RasterizationOrderAMD::strict: return "strict";
		case RasterizationOrderAMD::relaxed: return "relaxed";
		default: return nullptr;
	}
}
inline const char* name(ShaderInfoTypeAMD val) {
	switch(val) {
		case ShaderInfoTypeAMD::statistics: return "statistics";
		case ShaderInfoTypeAMD::binary: return "binary";
		case ShaderInfoTypeAMD::disassembly: return "disassembly";
		default: return nullptr;
	}
}

#ifdef VK_USE_PLATFORM_GGP
#endif //VK_USE_PLATFORM_GGP

inline const char* name(ExternalMemoryHandleTypeBitsNV val) {
	switch(val) {
		case ExternalMemoryHandleTypeBitsNV::opaqueWin32: return "opaqueWin32";
		case ExternalMemoryHandleTypeBitsNV::opaqueWin32Kmt: return "opaqueWin32Kmt";
		case ExternalMemoryHandleTypeBitsNV::d3d11Image: return "d3d11Image";
		case ExternalMemoryHandleTypeBitsNV::d3d11ImageKmt: return "d3d11ImageKmt";
		default: return nullptr;
	}
}
inline const char* name(ExternalMemoryFeatureBitsNV val) {
	switch(val) {
		case ExternalMemoryFeatureBitsNV::dedicatedOnly: return "dedicatedOnly";
		case ExternalMemoryFeatureBitsNV::exportable: return "exportable";
		case ExternalMemoryFeatureBitsNV::importable: return "importable";
		default: return nullptr;
	}
}
inline std::string name(ExternalMemoryHandleTypeFlagsNV val) {
	std::string ret;
	if((val & ExternalMemoryHandleTypeBitsNV::opaqueWin32) == ExternalMemoryHandleTypeBitsNV::opaqueWin32) ret += "opaqueWin32 | ";
	if((val & ExternalMemoryHandleTypeBitsNV::opaqueWin32Kmt) == ExternalMemoryHandleTypeBitsNV::opaqueWin32Kmt) ret += "opaqueWin32Kmt | ";
	if((val & ExternalMemoryHandleTypeBitsNV::d3d11Image) == ExternalMemoryHandleTypeBitsNV::d3d11Image) ret += "d3d11Image | ";
	if((val & ExternalMemoryHandleTypeBitsNV::d3d11ImageKmt) == ExternalMemoryHandleTypeBitsNV::d3d11ImageKmt) ret += "d3d11ImageKmt | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(ExternalMemoryFeatureFlagsNV val) {
	std::string ret;
	if((val & ExternalMemoryFeatureBitsNV::dedicatedOnly) == ExternalMemoryFeatureBitsNV::dedicatedOnly) ret += "dedicatedOnly | ";
	if((val & ExternalMemoryFeatureBitsNV::exportable) == ExternalMemoryFeatureBitsNV::exportable) ret += "exportable | ";
	if((val & ExternalMemoryFeatureBitsNV::importable) == ExternalMemoryFeatureBitsNV::importable) ret += "importable | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}

#ifdef VK_USE_PLATFORM_VI_NN
#endif //VK_USE_PLATFORM_VI_NN


#ifdef VK_USE_PLATFORM_IOS_MVK
#endif //VK_USE_PLATFORM_IOS_MVK


#ifdef VK_USE_PLATFORM_MACOS_MVK
#endif //VK_USE_PLATFORM_MACOS_MVK

inline const char* name(ShadingRatePaletteEntryNV val) {
	switch(val) {
		case ShadingRatePaletteEntryNV::noInvocations: return "noInvocations";
		case ShadingRatePaletteEntryNV::e16InvocationsPerPixel: return "e16InvocationsPerPixel";
		case ShadingRatePaletteEntryNV::e8InvocationsPerPixel: return "e8InvocationsPerPixel";
		case ShadingRatePaletteEntryNV::e4InvocationsPerPixel: return "e4InvocationsPerPixel";
		case ShadingRatePaletteEntryNV::e2InvocationsPerPixel: return "e2InvocationsPerPixel";
		case ShadingRatePaletteEntryNV::e1InvocationPerPixel: return "e1InvocationPerPixel";
		case ShadingRatePaletteEntryNV::e1InvocationPer2x1Pixels: return "e1InvocationPer2x1Pixels";
		case ShadingRatePaletteEntryNV::e1InvocationPer1x2Pixels: return "e1InvocationPer1x2Pixels";
		case ShadingRatePaletteEntryNV::e1InvocationPer2x2Pixels: return "e1InvocationPer2x2Pixels";
		case ShadingRatePaletteEntryNV::e1InvocationPer4x2Pixels: return "e1InvocationPer4x2Pixels";
		case ShadingRatePaletteEntryNV::e1InvocationPer2x4Pixels: return "e1InvocationPer2x4Pixels";
		case ShadingRatePaletteEntryNV::e1InvocationPer4x4Pixels: return "e1InvocationPer4x4Pixels";
		default: return nullptr;
	}
}
inline const char* name(CoarseSampleOrderTypeNV val) {
	switch(val) {
		case CoarseSampleOrderTypeNV::eDefault: return "eDefault";
		case CoarseSampleOrderTypeNV::custom: return "custom";
		case CoarseSampleOrderTypeNV::pixelMajor: return "pixelMajor";
		case CoarseSampleOrderTypeNV::sampleMajor: return "sampleMajor";
		default: return nullptr;
	}
}
inline const char* name(AccelerationStructureMemoryRequirementsTypeNV val) {
	switch(val) {
		case AccelerationStructureMemoryRequirementsTypeNV::object: return "object";
		case AccelerationStructureMemoryRequirementsTypeNV::buildScratch: return "buildScratch";
		case AccelerationStructureMemoryRequirementsTypeNV::updateScratch: return "updateScratch";
		default: return nullptr;
	}
}
inline const char* name(PipelineCompilerControlBitsAMD val) {
	switch(val) {
		default: return nullptr;
	}
}
inline std::string name(PipelineCompilerControlFlagsAMD) {
	std::string ret;
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(MemoryOverallocationBehaviorAMD val) {
	switch(val) {
		case MemoryOverallocationBehaviorAMD::eDefault: return "eDefault";
		case MemoryOverallocationBehaviorAMD::allowed: return "allowed";
		case MemoryOverallocationBehaviorAMD::disallowed: return "disallowed";
		default: return nullptr;
	}
}
inline const char* name(PerformanceConfigurationTypeINTEL val) {
	switch(val) {
		case PerformanceConfigurationTypeINTEL::commandQueueMetricsDiscoveryActivated: return "commandQueueMetricsDiscoveryActivated";
		default: return nullptr;
	}
}
inline const char* name(QueryPoolSamplingModeINTEL val) {
	switch(val) {
		case QueryPoolSamplingModeINTEL::manual: return "manual";
		default: return nullptr;
	}
}
inline const char* name(PerformanceOverrideTypeINTEL val) {
	switch(val) {
		case PerformanceOverrideTypeINTEL::nullHardware: return "nullHardware";
		case PerformanceOverrideTypeINTEL::flushGpuCaches: return "flushGpuCaches";
		default: return nullptr;
	}
}
inline const char* name(PerformanceParameterTypeINTEL val) {
	switch(val) {
		case PerformanceParameterTypeINTEL::hwCountersSupported: return "hwCountersSupported";
		case PerformanceParameterTypeINTEL::streamMarkerValidBits: return "streamMarkerValidBits";
		default: return nullptr;
	}
}
inline const char* name(PerformanceValueTypeINTEL val) {
	switch(val) {
		case PerformanceValueTypeINTEL::uint32: return "uint32";
		case PerformanceValueTypeINTEL::uint64: return "uint64";
		case PerformanceValueTypeINTEL::eFloat: return "eFloat";
		case PerformanceValueTypeINTEL::eBool: return "eBool";
		case PerformanceValueTypeINTEL::string: return "string";
		default: return nullptr;
	}
}

#ifdef VK_USE_PLATFORM_FUCHSIA
#endif //VK_USE_PLATFORM_FUCHSIA

inline const char* name(ShaderCorePropertiesBitsAMD val) {
	switch(val) {
		default: return nullptr;
	}
}
inline std::string name(ShaderCorePropertiesFlagsAMD) {
	std::string ret;
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(IndirectStateBitsNV val) {
	switch(val) {
		case IndirectStateBitsNV::flagFrontface: return "flagFrontface";
		default: return nullptr;
	}
}
inline const char* name(IndirectCommandsTokenTypeNV val) {
	switch(val) {
		case IndirectCommandsTokenTypeNV::shaderGroup: return "shaderGroup";
		case IndirectCommandsTokenTypeNV::stateFlags: return "stateFlags";
		case IndirectCommandsTokenTypeNV::indexBuffer: return "indexBuffer";
		case IndirectCommandsTokenTypeNV::vertexBuffer: return "vertexBuffer";
		case IndirectCommandsTokenTypeNV::pushConstant: return "pushConstant";
		case IndirectCommandsTokenTypeNV::drawIndexed: return "drawIndexed";
		case IndirectCommandsTokenTypeNV::draw: return "draw";
		case IndirectCommandsTokenTypeNV::drawTasks: return "drawTasks";
		case IndirectCommandsTokenTypeNV::pushData: return "pushData";
		case IndirectCommandsTokenTypeNV::drawMeshTasks: return "drawMeshTasks";
		case IndirectCommandsTokenTypeNV::pipeline: return "pipeline";
		case IndirectCommandsTokenTypeNV::dispatch: return "dispatch";
		default: return nullptr;
	}
}
inline const char* name(IndirectCommandsLayoutUsageBitsNV val) {
	switch(val) {
		case IndirectCommandsLayoutUsageBitsNV::explicitPreprocess: return "explicitPreprocess";
		case IndirectCommandsLayoutUsageBitsNV::indexedSequences: return "indexedSequences";
		case IndirectCommandsLayoutUsageBitsNV::unorderedSequences: return "unorderedSequences";
		default: return nullptr;
	}
}
inline std::string name(IndirectStateFlagsNV val) {
	std::string ret;
	if((val & IndirectStateBitsNV::flagFrontface) == IndirectStateBitsNV::flagFrontface) ret += "flagFrontface | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(IndirectCommandsLayoutUsageFlagsNV val) {
	std::string ret;
	if((val & IndirectCommandsLayoutUsageBitsNV::explicitPreprocess) == IndirectCommandsLayoutUsageBitsNV::explicitPreprocess) ret += "explicitPreprocess | ";
	if((val & IndirectCommandsLayoutUsageBitsNV::indexedSequences) == IndirectCommandsLayoutUsageBitsNV::indexedSequences) ret += "indexedSequences | ";
	if((val & IndirectCommandsLayoutUsageBitsNV::unorderedSequences) == IndirectCommandsLayoutUsageBitsNV::unorderedSequences) ret += "unorderedSequences | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(DeviceDiagnosticsConfigBitsNV val) {
	switch(val) {
		case DeviceDiagnosticsConfigBitsNV::enableShaderDebugInfo: return "enableShaderDebugInfo";
		case DeviceDiagnosticsConfigBitsNV::enableResourceTracking: return "enableResourceTracking";
		case DeviceDiagnosticsConfigBitsNV::enableAutomaticCheckpoints: return "enableAutomaticCheckpoints";
		case DeviceDiagnosticsConfigBitsNV::enableShaderErrorReporting: return "enableShaderErrorReporting";
		default: return nullptr;
	}
}
inline std::string name(DeviceDiagnosticsConfigFlagsNV val) {
	std::string ret;
	if((val & DeviceDiagnosticsConfigBitsNV::enableShaderDebugInfo) == DeviceDiagnosticsConfigBitsNV::enableShaderDebugInfo) ret += "enableShaderDebugInfo | ";
	if((val & DeviceDiagnosticsConfigBitsNV::enableResourceTracking) == DeviceDiagnosticsConfigBitsNV::enableResourceTracking) ret += "enableResourceTracking | ";
	if((val & DeviceDiagnosticsConfigBitsNV::enableAutomaticCheckpoints) == DeviceDiagnosticsConfigBitsNV::enableAutomaticCheckpoints) ret += "enableAutomaticCheckpoints | ";
	if((val & DeviceDiagnosticsConfigBitsNV::enableShaderErrorReporting) == DeviceDiagnosticsConfigBitsNV::enableShaderErrorReporting) ret += "enableShaderErrorReporting | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(PerfHintTypeQCOM val) {
	switch(val) {
		case PerfHintTypeQCOM::eDefault: return "eDefault";
		case PerfHintTypeQCOM::frequencyMin: return "frequencyMin";
		case PerfHintTypeQCOM::frequencyMax: return "frequencyMax";
		case PerfHintTypeQCOM::frequencyScaled: return "frequencyScaled";
		default: return nullptr;
	}
}
inline const char* name(TileShadingRenderPassBitsQCOM val) {
	switch(val) {
		case TileShadingRenderPassBitsQCOM::enable: return "enable";
		case TileShadingRenderPassBitsQCOM::perTileExecution: return "perTileExecution";
		default: return nullptr;
	}
}
inline std::string name(TileShadingRenderPassFlagsQCOM val) {
	std::string ret;
	if((val & TileShadingRenderPassBitsQCOM::enable) == TileShadingRenderPassBitsQCOM::enable) ret += "enable | ";
	if((val & TileShadingRenderPassBitsQCOM::perTileExecution) == TileShadingRenderPassBitsQCOM::perTileExecution) ret += "perTileExecution | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(FragmentShadingRateTypeNV val) {
	switch(val) {
		case FragmentShadingRateTypeNV::fragmentSize: return "fragmentSize";
		case FragmentShadingRateTypeNV::enums: return "enums";
		default: return nullptr;
	}
}
inline const char* name(FragmentShadingRateNV val) {
	switch(val) {
		case FragmentShadingRateNV::e1InvocationPerPixel: return "e1InvocationPerPixel";
		case FragmentShadingRateNV::e1InvocationPer1x2Pixels: return "e1InvocationPer1x2Pixels";
		case FragmentShadingRateNV::e1InvocationPer2x1Pixels: return "e1InvocationPer2x1Pixels";
		case FragmentShadingRateNV::e1InvocationPer2x2Pixels: return "e1InvocationPer2x2Pixels";
		case FragmentShadingRateNV::e1InvocationPer2x4Pixels: return "e1InvocationPer2x4Pixels";
		case FragmentShadingRateNV::e1InvocationPer4x2Pixels: return "e1InvocationPer4x2Pixels";
		case FragmentShadingRateNV::e1InvocationPer4x4Pixels: return "e1InvocationPer4x4Pixels";
		case FragmentShadingRateNV::e2InvocationsPerPixel: return "e2InvocationsPerPixel";
		case FragmentShadingRateNV::e4InvocationsPerPixel: return "e4InvocationsPerPixel";
		case FragmentShadingRateNV::e8InvocationsPerPixel: return "e8InvocationsPerPixel";
		case FragmentShadingRateNV::e16InvocationsPerPixel: return "e16InvocationsPerPixel";
		case FragmentShadingRateNV::noInvocations: return "noInvocations";
		default: return nullptr;
	}
}

#ifdef VK_USE_PLATFORM_FUCHSIA
inline const char* name(ImageConstraintsInfoBitsFUCHSIA val) {
	switch(val) {
		case ImageConstraintsInfoBitsFUCHSIA::cpuReadRarely: return "cpuReadRarely";
		case ImageConstraintsInfoBitsFUCHSIA::cpuReadOften: return "cpuReadOften";
		case ImageConstraintsInfoBitsFUCHSIA::cpuWriteRarely: return "cpuWriteRarely";
		case ImageConstraintsInfoBitsFUCHSIA::cpuWriteOften: return "cpuWriteOften";
		case ImageConstraintsInfoBitsFUCHSIA::protectedOptional: return "protectedOptional";
		default: return nullptr;
	}
}
inline std::string name(ImageConstraintsInfoFlagsFUCHSIA val) {
	std::string ret;
	if((val & ImageConstraintsInfoBitsFUCHSIA::cpuReadRarely) == ImageConstraintsInfoBitsFUCHSIA::cpuReadRarely) ret += "cpuReadRarely | ";
	if((val & ImageConstraintsInfoBitsFUCHSIA::cpuReadOften) == ImageConstraintsInfoBitsFUCHSIA::cpuReadOften) ret += "cpuReadOften | ";
	if((val & ImageConstraintsInfoBitsFUCHSIA::cpuWriteRarely) == ImageConstraintsInfoBitsFUCHSIA::cpuWriteRarely) ret += "cpuWriteRarely | ";
	if((val & ImageConstraintsInfoBitsFUCHSIA::cpuWriteOften) == ImageConstraintsInfoBitsFUCHSIA::cpuWriteOften) ret += "cpuWriteOften | ";
	if((val & ImageConstraintsInfoBitsFUCHSIA::protectedOptional) == ImageConstraintsInfoBitsFUCHSIA::protectedOptional) ret += "protectedOptional | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
#endif //VK_USE_PLATFORM_FUCHSIA


#ifdef VK_USE_PLATFORM_SCREEN_QNX
#endif //VK_USE_PLATFORM_SCREEN_QNX

inline const char* name(VideoEncodeRgbModelConversionBitsVALVE val) {
	switch(val) {
		case VideoEncodeRgbModelConversionBitsVALVE::rgbIDentity: return "rgbIDentity";
		case VideoEncodeRgbModelConversionBitsVALVE::ycbcrIDentity: return "ycbcrIDentity";
		case VideoEncodeRgbModelConversionBitsVALVE::ycbcr709: return "ycbcr709";
		case VideoEncodeRgbModelConversionBitsVALVE::ycbcr601: return "ycbcr601";
		case VideoEncodeRgbModelConversionBitsVALVE::ycbcr2020: return "ycbcr2020";
		default: return nullptr;
	}
}
inline const char* name(VideoEncodeRgbRangeCompressionBitsVALVE val) {
	switch(val) {
		case VideoEncodeRgbRangeCompressionBitsVALVE::fullRange: return "fullRange";
		case VideoEncodeRgbRangeCompressionBitsVALVE::narrowRange: return "narrowRange";
		default: return nullptr;
	}
}
inline const char* name(VideoEncodeRgbChromaOffsetBitsVALVE val) {
	switch(val) {
		case VideoEncodeRgbChromaOffsetBitsVALVE::cositedEven: return "cositedEven";
		case VideoEncodeRgbChromaOffsetBitsVALVE::midpoint: return "midpoint";
		default: return nullptr;
	}
}
inline std::string name(VideoEncodeRgbModelConversionFlagsVALVE val) {
	std::string ret;
	if((val & VideoEncodeRgbModelConversionBitsVALVE::rgbIDentity) == VideoEncodeRgbModelConversionBitsVALVE::rgbIDentity) ret += "rgbIDentity | ";
	if((val & VideoEncodeRgbModelConversionBitsVALVE::ycbcrIDentity) == VideoEncodeRgbModelConversionBitsVALVE::ycbcrIDentity) ret += "ycbcrIDentity | ";
	if((val & VideoEncodeRgbModelConversionBitsVALVE::ycbcr709) == VideoEncodeRgbModelConversionBitsVALVE::ycbcr709) ret += "ycbcr709 | ";
	if((val & VideoEncodeRgbModelConversionBitsVALVE::ycbcr601) == VideoEncodeRgbModelConversionBitsVALVE::ycbcr601) ret += "ycbcr601 | ";
	if((val & VideoEncodeRgbModelConversionBitsVALVE::ycbcr2020) == VideoEncodeRgbModelConversionBitsVALVE::ycbcr2020) ret += "ycbcr2020 | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(VideoEncodeRgbRangeCompressionFlagsVALVE val) {
	std::string ret;
	if((val & VideoEncodeRgbRangeCompressionBitsVALVE::fullRange) == VideoEncodeRgbRangeCompressionBitsVALVE::fullRange) ret += "fullRange | ";
	if((val & VideoEncodeRgbRangeCompressionBitsVALVE::narrowRange) == VideoEncodeRgbRangeCompressionBitsVALVE::narrowRange) ret += "narrowRange | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(VideoEncodeRgbChromaOffsetFlagsVALVE val) {
	std::string ret;
	if((val & VideoEncodeRgbChromaOffsetBitsVALVE::cositedEven) == VideoEncodeRgbChromaOffsetBitsVALVE::cositedEven) ret += "cositedEven | ";
	if((val & VideoEncodeRgbChromaOffsetBitsVALVE::midpoint) == VideoEncodeRgbChromaOffsetBitsVALVE::midpoint) ret += "midpoint | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(PhysicalDeviceSchedulingControlsBitsARM val) {
	switch(val) {
		case PhysicalDeviceSchedulingControlsBitsARM::shaderCoreCount: return "shaderCoreCount";
		case PhysicalDeviceSchedulingControlsBitsARM::dispatchParameters: return "dispatchParameters";
		default: return nullptr;
	}
}
inline std::string name(PhysicalDeviceSchedulingControlsFlagsARM val) {
	std::string ret;
	if((val & PhysicalDeviceSchedulingControlsBitsARM::shaderCoreCount) == PhysicalDeviceSchedulingControlsBitsARM::shaderCoreCount) ret += "shaderCoreCount | ";
	if((val & PhysicalDeviceSchedulingControlsBitsARM::dispatchParameters) == PhysicalDeviceSchedulingControlsBitsARM::dispatchParameters) ret += "dispatchParameters | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(RayTracingLssIndexingModeNV val) {
	switch(val) {
		case RayTracingLssIndexingModeNV::list: return "list";
		case RayTracingLssIndexingModeNV::successive: return "successive";
		default: return nullptr;
	}
}
inline const char* name(RayTracingLssPrimitiveEndCapsModeNV val) {
	switch(val) {
		case RayTracingLssPrimitiveEndCapsModeNV::none: return "none";
		case RayTracingLssPrimitiveEndCapsModeNV::chained: return "chained";
		default: return nullptr;
	}
}
inline const char* name(DirectDriverLoadingModeLUNARG val) {
	switch(val) {
		case DirectDriverLoadingModeLUNARG::exclusive: return "exclusive";
		case DirectDriverLoadingModeLUNARG::inclusive: return "inclusive";
		default: return nullptr;
	}
}
inline const char* name(TensorCreateBitsARM val) {
	switch(val) {
		case TensorCreateBitsARM::mutableFormat: return "mutableFormat";
		case TensorCreateBitsARM::eProtected: return "eProtected";
		case TensorCreateBitsARM::descriptorHeapCaptureReplay: return "descriptorHeapCaptureReplay";
		case TensorCreateBitsARM::descriptorBufferCaptureReplay: return "descriptorBufferCaptureReplay";
		default: return nullptr;
	}
}
inline const char* name(TensorUsageBitsARM val) {
	switch(val) {
		case TensorUsageBitsARM::shader: return "shader";
		case TensorUsageBitsARM::transferSrc: return "transferSrc";
		case TensorUsageBitsARM::transferDst: return "transferDst";
		case TensorUsageBitsARM::imageAliasing: return "imageAliasing";
		case TensorUsageBitsARM::dataGraph: return "dataGraph";
		default: return nullptr;
	}
}
inline const char* name(TensorTilingARM val) {
	switch(val) {
		case TensorTilingARM::optimal: return "optimal";
		case TensorTilingARM::linear: return "linear";
		default: return nullptr;
	}
}
inline std::string name(TensorCreateFlagsARM val) {
	std::string ret;
	if((val & TensorCreateBitsARM::mutableFormat) == TensorCreateBitsARM::mutableFormat) ret += "mutableFormat | ";
	if((val & TensorCreateBitsARM::eProtected) == TensorCreateBitsARM::eProtected) ret += "eProtected | ";
	if((val & TensorCreateBitsARM::descriptorHeapCaptureReplay) == TensorCreateBitsARM::descriptorHeapCaptureReplay) ret += "descriptorHeapCaptureReplay | ";
	if((val & TensorCreateBitsARM::descriptorBufferCaptureReplay) == TensorCreateBitsARM::descriptorBufferCaptureReplay) ret += "descriptorBufferCaptureReplay | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(TensorUsageFlagsARM val) {
	std::string ret;
	if((val & TensorUsageBitsARM::shader) == TensorUsageBitsARM::shader) ret += "shader | ";
	if((val & TensorUsageBitsARM::transferSrc) == TensorUsageBitsARM::transferSrc) ret += "transferSrc | ";
	if((val & TensorUsageBitsARM::transferDst) == TensorUsageBitsARM::transferDst) ret += "transferDst | ";
	if((val & TensorUsageBitsARM::imageAliasing) == TensorUsageBitsARM::imageAliasing) ret += "imageAliasing | ";
	if((val & TensorUsageBitsARM::dataGraph) == TensorUsageBitsARM::dataGraph) ret += "dataGraph | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(OpticalFlowGridSizeBitsNV val) {
	switch(val) {
		case OpticalFlowGridSizeBitsNV::unknown: return "unknown";
		case OpticalFlowGridSizeBitsNV::e1x1: return "e1x1";
		case OpticalFlowGridSizeBitsNV::e2x2: return "e2x2";
		case OpticalFlowGridSizeBitsNV::e4x4: return "e4x4";
		case OpticalFlowGridSizeBitsNV::e8x8: return "e8x8";
		default: return nullptr;
	}
}
inline const char* name(OpticalFlowUsageBitsNV val) {
	switch(val) {
		case OpticalFlowUsageBitsNV::unknown: return "unknown";
		case OpticalFlowUsageBitsNV::input: return "input";
		case OpticalFlowUsageBitsNV::output: return "output";
		case OpticalFlowUsageBitsNV::hint: return "hint";
		case OpticalFlowUsageBitsNV::cost: return "cost";
		case OpticalFlowUsageBitsNV::globalFlow: return "globalFlow";
		default: return nullptr;
	}
}
inline const char* name(OpticalFlowPerformanceLevelNV val) {
	switch(val) {
		case OpticalFlowPerformanceLevelNV::unknown: return "unknown";
		case OpticalFlowPerformanceLevelNV::slow: return "slow";
		case OpticalFlowPerformanceLevelNV::medium: return "medium";
		case OpticalFlowPerformanceLevelNV::fast: return "fast";
		default: return nullptr;
	}
}
inline const char* name(OpticalFlowSessionBindingPointNV val) {
	switch(val) {
		case OpticalFlowSessionBindingPointNV::unknown: return "unknown";
		case OpticalFlowSessionBindingPointNV::input: return "input";
		case OpticalFlowSessionBindingPointNV::reference: return "reference";
		case OpticalFlowSessionBindingPointNV::hint: return "hint";
		case OpticalFlowSessionBindingPointNV::flowVector: return "flowVector";
		case OpticalFlowSessionBindingPointNV::backwardFlowVector: return "backwardFlowVector";
		case OpticalFlowSessionBindingPointNV::cost: return "cost";
		case OpticalFlowSessionBindingPointNV::backwardCost: return "backwardCost";
		case OpticalFlowSessionBindingPointNV::globalFlow: return "globalFlow";
		default: return nullptr;
	}
}
inline const char* name(OpticalFlowSessionCreateBitsNV val) {
	switch(val) {
		case OpticalFlowSessionCreateBitsNV::enableHint: return "enableHint";
		case OpticalFlowSessionCreateBitsNV::enableCost: return "enableCost";
		case OpticalFlowSessionCreateBitsNV::enableGlobalFlow: return "enableGlobalFlow";
		case OpticalFlowSessionCreateBitsNV::allowRegions: return "allowRegions";
		case OpticalFlowSessionCreateBitsNV::bothDirections: return "bothDirections";
		default: return nullptr;
	}
}
inline const char* name(OpticalFlowExecuteBitsNV val) {
	switch(val) {
		case OpticalFlowExecuteBitsNV::disableTemporalHints: return "disableTemporalHints";
		default: return nullptr;
	}
}
inline std::string name(OpticalFlowGridSizeFlagsNV val) {
	std::string ret;
	if((val & OpticalFlowGridSizeBitsNV::unknown) == OpticalFlowGridSizeBitsNV::unknown) ret += "unknown | ";
	if((val & OpticalFlowGridSizeBitsNV::e1x1) == OpticalFlowGridSizeBitsNV::e1x1) ret += "e1x1 | ";
	if((val & OpticalFlowGridSizeBitsNV::e2x2) == OpticalFlowGridSizeBitsNV::e2x2) ret += "e2x2 | ";
	if((val & OpticalFlowGridSizeBitsNV::e4x4) == OpticalFlowGridSizeBitsNV::e4x4) ret += "e4x4 | ";
	if((val & OpticalFlowGridSizeBitsNV::e8x8) == OpticalFlowGridSizeBitsNV::e8x8) ret += "e8x8 | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(OpticalFlowUsageFlagsNV val) {
	std::string ret;
	if((val & OpticalFlowUsageBitsNV::unknown) == OpticalFlowUsageBitsNV::unknown) ret += "unknown | ";
	if((val & OpticalFlowUsageBitsNV::input) == OpticalFlowUsageBitsNV::input) ret += "input | ";
	if((val & OpticalFlowUsageBitsNV::output) == OpticalFlowUsageBitsNV::output) ret += "output | ";
	if((val & OpticalFlowUsageBitsNV::hint) == OpticalFlowUsageBitsNV::hint) ret += "hint | ";
	if((val & OpticalFlowUsageBitsNV::cost) == OpticalFlowUsageBitsNV::cost) ret += "cost | ";
	if((val & OpticalFlowUsageBitsNV::globalFlow) == OpticalFlowUsageBitsNV::globalFlow) ret += "globalFlow | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(OpticalFlowSessionCreateFlagsNV val) {
	std::string ret;
	if((val & OpticalFlowSessionCreateBitsNV::enableHint) == OpticalFlowSessionCreateBitsNV::enableHint) ret += "enableHint | ";
	if((val & OpticalFlowSessionCreateBitsNV::enableCost) == OpticalFlowSessionCreateBitsNV::enableCost) ret += "enableCost | ";
	if((val & OpticalFlowSessionCreateBitsNV::enableGlobalFlow) == OpticalFlowSessionCreateBitsNV::enableGlobalFlow) ret += "enableGlobalFlow | ";
	if((val & OpticalFlowSessionCreateBitsNV::allowRegions) == OpticalFlowSessionCreateBitsNV::allowRegions) ret += "allowRegions | ";
	if((val & OpticalFlowSessionCreateBitsNV::bothDirections) == OpticalFlowSessionCreateBitsNV::bothDirections) ret += "bothDirections | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(OpticalFlowExecuteFlagsNV val) {
	std::string ret;
	if((val & OpticalFlowExecuteBitsNV::disableTemporalHints) == OpticalFlowExecuteBitsNV::disableTemporalHints) ret += "disableTemporalHints | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(AntiLagModeAMD val) {
	switch(val) {
		case AntiLagModeAMD::driverControl: return "driverControl";
		case AntiLagModeAMD::on: return "on";
		case AntiLagModeAMD::off: return "off";
		default: return nullptr;
	}
}
inline const char* name(AntiLagStageAMD val) {
	switch(val) {
		case AntiLagStageAMD::input: return "input";
		case AntiLagStageAMD::present: return "present";
		default: return nullptr;
	}
}
inline const char* name(CooperativeVectorMatrixLayoutNV val) {
	switch(val) {
		case CooperativeVectorMatrixLayoutNV::rowMajor: return "rowMajor";
		case CooperativeVectorMatrixLayoutNV::columnMajor: return "columnMajor";
		case CooperativeVectorMatrixLayoutNV::inferencingOptimal: return "inferencingOptimal";
		case CooperativeVectorMatrixLayoutNV::trainingOptimal: return "trainingOptimal";
		default: return nullptr;
	}
}
inline const char* name(LatencyMarkerNV val) {
	switch(val) {
		case LatencyMarkerNV::simulationStart: return "simulationStart";
		case LatencyMarkerNV::simulationEnd: return "simulationEnd";
		case LatencyMarkerNV::rendersubmitStart: return "rendersubmitStart";
		case LatencyMarkerNV::rendersubmitEnd: return "rendersubmitEnd";
		case LatencyMarkerNV::presentStart: return "presentStart";
		case LatencyMarkerNV::presentEnd: return "presentEnd";
		case LatencyMarkerNV::inputSample: return "inputSample";
		case LatencyMarkerNV::triggerFlash: return "triggerFlash";
		case LatencyMarkerNV::outOfBandRendersubmitStart: return "outOfBandRendersubmitStart";
		case LatencyMarkerNV::outOfBandRendersubmitEnd: return "outOfBandRendersubmitEnd";
		case LatencyMarkerNV::outOfBandPresentStart: return "outOfBandPresentStart";
		case LatencyMarkerNV::outOfBandPresentEnd: return "outOfBandPresentEnd";
		default: return nullptr;
	}
}
inline const char* name(OutOfBandQueueTypeNV val) {
	switch(val) {
		case OutOfBandQueueTypeNV::render: return "render";
		case OutOfBandQueueTypeNV::present: return "present";
		default: return nullptr;
	}
}
inline const char* name(DataGraphPipelineSessionBindPointARM val) {
	switch(val) {
		case DataGraphPipelineSessionBindPointARM::transient: return "transient";
		case DataGraphPipelineSessionBindPointARM::opticalFlowCache: return "opticalFlowCache";
		case DataGraphPipelineSessionBindPointARM::neuralAcceleratorStatistics: return "neuralAcceleratorStatistics";
		default: return nullptr;
	}
}
inline const char* name(DataGraphPipelineSessionBindPointTypeARM val) {
	switch(val) {
		case DataGraphPipelineSessionBindPointTypeARM::memory: return "memory";
		default: return nullptr;
	}
}
inline const char* name(DataGraphPipelineSessionCreateBitsARM val) {
	switch(val) {
		case DataGraphPipelineSessionCreateBitsARM::eProtected: return "eProtected";
		case DataGraphPipelineSessionCreateBitsARM::opticalFlowCache: return "opticalFlowCache";
		default: return nullptr;
	}
}
inline const char* name(DataGraphPipelinePropertyARM val) {
	switch(val) {
		case DataGraphPipelinePropertyARM::creationLog: return "creationLog";
		case DataGraphPipelinePropertyARM::identifier: return "identifier";
		case DataGraphPipelinePropertyARM::neuralAcceleratorDebugDatabase: return "neuralAcceleratorDebugDatabase";
		case DataGraphPipelinePropertyARM::neuralAcceleratorStatisticsInfo: return "neuralAcceleratorStatisticsInfo";
		default: return nullptr;
	}
}
inline const char* name(DataGraphPipelineDispatchBitsARM val) {
	switch(val) {
		default: return nullptr;
	}
}
inline const char* name(PhysicalDeviceDataGraphProcessingEngineTypeARM val) {
	switch(val) {
		case PhysicalDeviceDataGraphProcessingEngineTypeARM::eDefault: return "eDefault";
		case PhysicalDeviceDataGraphProcessingEngineTypeARM::neuralQCOM: return "neuralQCOM";
		case PhysicalDeviceDataGraphProcessingEngineTypeARM::computeQCOM: return "computeQCOM";
		default: return nullptr;
	}
}
inline const char* name(PhysicalDeviceDataGraphOperationTypeARM val) {
	switch(val) {
		case PhysicalDeviceDataGraphOperationTypeARM::spirvExtendedInstructionSet: return "spirvExtendedInstructionSet";
		case PhysicalDeviceDataGraphOperationTypeARM::neuralModelQCOM: return "neuralModelQCOM";
		case PhysicalDeviceDataGraphOperationTypeARM::builtinModelQCOM: return "builtinModelQCOM";
		case PhysicalDeviceDataGraphOperationTypeARM::opticalFlow: return "opticalFlow";
		default: return nullptr;
	}
}
inline std::string name(DataGraphPipelineSessionCreateFlagsARM val) {
	std::string ret;
	if((val & DataGraphPipelineSessionCreateBitsARM::eProtected) == DataGraphPipelineSessionCreateBitsARM::eProtected) ret += "eProtected | ";
	if((val & DataGraphPipelineSessionCreateBitsARM::opticalFlowCache) == DataGraphPipelineSessionCreateBitsARM::opticalFlowCache) ret += "opticalFlowCache | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(DataGraphPipelineDispatchFlagsARM) {
	std::string ret;
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(DataGraphTOSAQualityBitsARM val) {
	switch(val) {
		case DataGraphTOSAQualityBitsARM::accelerated: return "accelerated";
		case DataGraphTOSAQualityBitsARM::conformant: return "conformant";
		case DataGraphTOSAQualityBitsARM::experimental: return "experimental";
		case DataGraphTOSAQualityBitsARM::deprecated: return "deprecated";
		default: return nullptr;
	}
}
inline const char* name(DataGraphTOSALevelARM val) {
	switch(val) {
		case DataGraphTOSALevelARM::none: return "none";
		case DataGraphTOSALevelARM::e8k: return "e8k";
		default: return nullptr;
	}
}
inline std::string name(DataGraphTOSAQualityFlagsARM val) {
	std::string ret;
	if((val & DataGraphTOSAQualityBitsARM::accelerated) == DataGraphTOSAQualityBitsARM::accelerated) ret += "accelerated | ";
	if((val & DataGraphTOSAQualityBitsARM::conformant) == DataGraphTOSAQualityBitsARM::conformant) ret += "conformant | ";
	if((val & DataGraphTOSAQualityBitsARM::experimental) == DataGraphTOSAQualityBitsARM::experimental) ret += "experimental | ";
	if((val & DataGraphTOSAQualityBitsARM::deprecated) == DataGraphTOSAQualityBitsARM::deprecated) ret += "deprecated | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(BlockMatchWindowCompareModeQCOM val) {
	switch(val) {
		case BlockMatchWindowCompareModeQCOM::min: return "min";
		case BlockMatchWindowCompareModeQCOM::max: return "max";
		default: return nullptr;
	}
}
inline const char* name(CubicFilterWeightsQCOM val) {
	switch(val) {
		case CubicFilterWeightsQCOM::catmullRom: return "catmullRom";
		case CubicFilterWeightsQCOM::zeroTangentCardinal: return "zeroTangentCardinal";
		case CubicFilterWeightsQCOM::bSpline: return "bSpline";
		case CubicFilterWeightsQCOM::mitchellNetravali: return "mitchellNetravali";
		default: return nullptr;
	}
}
inline const char* name(LayeredDriverUnderlyingApiMSFT val) {
	switch(val) {
		case LayeredDriverUnderlyingApiMSFT::none: return "none";
		case LayeredDriverUnderlyingApiMSFT::d3d12: return "d3d12";
		default: return nullptr;
	}
}
inline const char* name(DisplaySurfaceStereoTypeNV val) {
	switch(val) {
		case DisplaySurfaceStereoTypeNV::none: return "none";
		case DisplaySurfaceStereoTypeNV::onboardDin: return "onboardDin";
		case DisplaySurfaceStereoTypeNV::hdmi3d: return "hdmi3d";
		case DisplaySurfaceStereoTypeNV::inbandDisplayport: return "inbandDisplayport";
		default: return nullptr;
	}
}
inline const char* name(ClusterAccelerationStructureTypeNV val) {
	switch(val) {
		case ClusterAccelerationStructureTypeNV::clustersBottomLevel: return "clustersBottomLevel";
		case ClusterAccelerationStructureTypeNV::triangleCluster: return "triangleCluster";
		case ClusterAccelerationStructureTypeNV::triangleClusterTemplate: return "triangleClusterTemplate";
		default: return nullptr;
	}
}
inline const char* name(ClusterAccelerationStructureOpTypeNV val) {
	switch(val) {
		case ClusterAccelerationStructureOpTypeNV::moveObjects: return "moveObjects";
		case ClusterAccelerationStructureOpTypeNV::buildClustersBottomLevel: return "buildClustersBottomLevel";
		case ClusterAccelerationStructureOpTypeNV::buildTriangleCluster: return "buildTriangleCluster";
		case ClusterAccelerationStructureOpTypeNV::buildTriangleClusterTemplate: return "buildTriangleClusterTemplate";
		case ClusterAccelerationStructureOpTypeNV::instantiateTriangleCluster: return "instantiateTriangleCluster";
		case ClusterAccelerationStructureOpTypeNV::getClusterTemplateIndices: return "getClusterTemplateIndices";
		default: return nullptr;
	}
}
inline const char* name(ClusterAccelerationStructureOpModeNV val) {
	switch(val) {
		case ClusterAccelerationStructureOpModeNV::implicitDestinations: return "implicitDestinations";
		case ClusterAccelerationStructureOpModeNV::explicitDestinations: return "explicitDestinations";
		case ClusterAccelerationStructureOpModeNV::computeSizes: return "computeSizes";
		default: return nullptr;
	}
}
inline const char* name(ClusterAccelerationStructureAddressResolutionBitsNV val) {
	switch(val) {
		case ClusterAccelerationStructureAddressResolutionBitsNV::none: return "none";
		case ClusterAccelerationStructureAddressResolutionBitsNV::indirectedDstImplicitData: return "indirectedDstImplicitData";
		case ClusterAccelerationStructureAddressResolutionBitsNV::indirectedScratchData: return "indirectedScratchData";
		case ClusterAccelerationStructureAddressResolutionBitsNV::indirectedDstAddressArray: return "indirectedDstAddressArray";
		case ClusterAccelerationStructureAddressResolutionBitsNV::indirectedDstSizesArray: return "indirectedDstSizesArray";
		case ClusterAccelerationStructureAddressResolutionBitsNV::indirectedSrcInfosArray: return "indirectedSrcInfosArray";
		case ClusterAccelerationStructureAddressResolutionBitsNV::indirectedSrcInfosCount: return "indirectedSrcInfosCount";
		default: return nullptr;
	}
}
inline const char* name(ClusterAccelerationStructureClusterBitsNV val) {
	switch(val) {
		case ClusterAccelerationStructureClusterBitsNV::allowDisableOpacityMicromaps: return "allowDisableOpacityMicromaps";
		default: return nullptr;
	}
}
inline const char* name(ClusterAccelerationStructureGeometryBitsNV val) {
	switch(val) {
		case ClusterAccelerationStructureGeometryBitsNV::cullDisable: return "cullDisable";
		case ClusterAccelerationStructureGeometryBitsNV::noDuplicateAnyhitInvocation: return "noDuplicateAnyhitInvocation";
		case ClusterAccelerationStructureGeometryBitsNV::opaque: return "opaque";
		default: return nullptr;
	}
}
inline const char* name(ClusterAccelerationStructureIndexFormatBitsNV val) {
	switch(val) {
		case ClusterAccelerationStructureIndexFormatBitsNV::e8bit: return "e8bit";
		case ClusterAccelerationStructureIndexFormatBitsNV::e16bit: return "e16bit";
		case ClusterAccelerationStructureIndexFormatBitsNV::e32bit: return "e32bit";
		default: return nullptr;
	}
}
inline std::string name(ClusterAccelerationStructureAddressResolutionFlagsNV val) {
	std::string ret;
	if((val & ClusterAccelerationStructureAddressResolutionBitsNV::none) == ClusterAccelerationStructureAddressResolutionBitsNV::none) ret += "none | ";
	if((val & ClusterAccelerationStructureAddressResolutionBitsNV::indirectedDstImplicitData) == ClusterAccelerationStructureAddressResolutionBitsNV::indirectedDstImplicitData) ret += "indirectedDstImplicitData | ";
	if((val & ClusterAccelerationStructureAddressResolutionBitsNV::indirectedScratchData) == ClusterAccelerationStructureAddressResolutionBitsNV::indirectedScratchData) ret += "indirectedScratchData | ";
	if((val & ClusterAccelerationStructureAddressResolutionBitsNV::indirectedDstAddressArray) == ClusterAccelerationStructureAddressResolutionBitsNV::indirectedDstAddressArray) ret += "indirectedDstAddressArray | ";
	if((val & ClusterAccelerationStructureAddressResolutionBitsNV::indirectedDstSizesArray) == ClusterAccelerationStructureAddressResolutionBitsNV::indirectedDstSizesArray) ret += "indirectedDstSizesArray | ";
	if((val & ClusterAccelerationStructureAddressResolutionBitsNV::indirectedSrcInfosArray) == ClusterAccelerationStructureAddressResolutionBitsNV::indirectedSrcInfosArray) ret += "indirectedSrcInfosArray | ";
	if((val & ClusterAccelerationStructureAddressResolutionBitsNV::indirectedSrcInfosCount) == ClusterAccelerationStructureAddressResolutionBitsNV::indirectedSrcInfosCount) ret += "indirectedSrcInfosCount | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(ClusterAccelerationStructureClusterFlagsNV val) {
	std::string ret;
	if((val & ClusterAccelerationStructureClusterBitsNV::allowDisableOpacityMicromaps) == ClusterAccelerationStructureClusterBitsNV::allowDisableOpacityMicromaps) ret += "allowDisableOpacityMicromaps | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(ClusterAccelerationStructureGeometryFlagsNV val) {
	std::string ret;
	if((val & ClusterAccelerationStructureGeometryBitsNV::cullDisable) == ClusterAccelerationStructureGeometryBitsNV::cullDisable) ret += "cullDisable | ";
	if((val & ClusterAccelerationStructureGeometryBitsNV::noDuplicateAnyhitInvocation) == ClusterAccelerationStructureGeometryBitsNV::noDuplicateAnyhitInvocation) ret += "noDuplicateAnyhitInvocation | ";
	if((val & ClusterAccelerationStructureGeometryBitsNV::opaque) == ClusterAccelerationStructureGeometryBitsNV::opaque) ret += "opaque | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(ClusterAccelerationStructureIndexFormatFlagsNV val) {
	std::string ret;
	if((val & ClusterAccelerationStructureIndexFormatBitsNV::e8bit) == ClusterAccelerationStructureIndexFormatBitsNV::e8bit) ret += "e8bit | ";
	if((val & ClusterAccelerationStructureIndexFormatBitsNV::e16bit) == ClusterAccelerationStructureIndexFormatBitsNV::e16bit) ret += "e16bit | ";
	if((val & ClusterAccelerationStructureIndexFormatBitsNV::e32bit) == ClusterAccelerationStructureIndexFormatBitsNV::e32bit) ret += "e32bit | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(PartitionedAccelerationStructureOpTypeNV val) {
	switch(val) {
		case PartitionedAccelerationStructureOpTypeNV::writeInstance: return "writeInstance";
		case PartitionedAccelerationStructureOpTypeNV::updateInstance: return "updateInstance";
		case PartitionedAccelerationStructureOpTypeNV::writePartitionTranslation: return "writePartitionTranslation";
		default: return nullptr;
	}
}
inline const char* name(PartitionedAccelerationStructureInstanceBitsNV val) {
	switch(val) {
		case PartitionedAccelerationStructureInstanceBitsNV::flagTriangleFacingCullDisable: return "flagTriangleFacingCullDisable";
		case PartitionedAccelerationStructureInstanceBitsNV::flagTriangleFlipFacing: return "flagTriangleFlipFacing";
		case PartitionedAccelerationStructureInstanceBitsNV::flagForceOpaque: return "flagForceOpaque";
		case PartitionedAccelerationStructureInstanceBitsNV::flagForceNoOpaque: return "flagForceNoOpaque";
		case PartitionedAccelerationStructureInstanceBitsNV::flagEnableExplicitBoundingBox: return "flagEnableExplicitBoundingBox";
		default: return nullptr;
	}
}
inline std::string name(PartitionedAccelerationStructureInstanceFlagsNV val) {
	std::string ret;
	if((val & PartitionedAccelerationStructureInstanceBitsNV::flagTriangleFacingCullDisable) == PartitionedAccelerationStructureInstanceBitsNV::flagTriangleFacingCullDisable) ret += "flagTriangleFacingCullDisable | ";
	if((val & PartitionedAccelerationStructureInstanceBitsNV::flagTriangleFlipFacing) == PartitionedAccelerationStructureInstanceBitsNV::flagTriangleFlipFacing) ret += "flagTriangleFlipFacing | ";
	if((val & PartitionedAccelerationStructureInstanceBitsNV::flagForceOpaque) == PartitionedAccelerationStructureInstanceBitsNV::flagForceOpaque) ret += "flagForceOpaque | ";
	if((val & PartitionedAccelerationStructureInstanceBitsNV::flagForceNoOpaque) == PartitionedAccelerationStructureInstanceBitsNV::flagForceNoOpaque) ret += "flagForceNoOpaque | ";
	if((val & PartitionedAccelerationStructureInstanceBitsNV::flagEnableExplicitBoundingBox) == PartitionedAccelerationStructureInstanceBitsNV::flagEnableExplicitBoundingBox) ret += "flagEnableExplicitBoundingBox | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}

#ifdef VK_USE_PLATFORM_OHOS
#endif //VK_USE_PLATFORM_OHOS

inline const char* name(DataGraphModelCacheTypeQCOM val) {
	switch(val) {
		case DataGraphModelCacheTypeQCOM::genericBinary: return "genericBinary";
		default: return nullptr;
	}
}
inline const char* name(DataGraphOpticalFlowGridSizeBitsARM val) {
	switch(val) {
		case DataGraphOpticalFlowGridSizeBitsARM::unknown: return "unknown";
		case DataGraphOpticalFlowGridSizeBitsARM::e1x1: return "e1x1";
		case DataGraphOpticalFlowGridSizeBitsARM::e2x2: return "e2x2";
		case DataGraphOpticalFlowGridSizeBitsARM::e4x4: return "e4x4";
		case DataGraphOpticalFlowGridSizeBitsARM::e8x8: return "e8x8";
		default: return nullptr;
	}
}
inline const char* name(DataGraphOpticalFlowPerformanceLevelARM val) {
	switch(val) {
		case DataGraphOpticalFlowPerformanceLevelARM::unknown: return "unknown";
		case DataGraphOpticalFlowPerformanceLevelARM::slow: return "slow";
		case DataGraphOpticalFlowPerformanceLevelARM::medium: return "medium";
		case DataGraphOpticalFlowPerformanceLevelARM::fast: return "fast";
		default: return nullptr;
	}
}
inline const char* name(DataGraphOpticalFlowCreateBitsARM val) {
	switch(val) {
		case DataGraphOpticalFlowCreateBitsARM::enableHint: return "enableHint";
		case DataGraphOpticalFlowCreateBitsARM::enableCost: return "enableCost";
		case DataGraphOpticalFlowCreateBitsARM::reserved30: return "reserved30";
		default: return nullptr;
	}
}
inline const char* name(DataGraphOpticalFlowImageUsageBitsARM val) {
	switch(val) {
		case DataGraphOpticalFlowImageUsageBitsARM::unknown: return "unknown";
		case DataGraphOpticalFlowImageUsageBitsARM::input: return "input";
		case DataGraphOpticalFlowImageUsageBitsARM::output: return "output";
		case DataGraphOpticalFlowImageUsageBitsARM::hint: return "hint";
		case DataGraphOpticalFlowImageUsageBitsARM::cost: return "cost";
		default: return nullptr;
	}
}
inline const char* name(DataGraphOpticalFlowExecuteBitsARM val) {
	switch(val) {
		case DataGraphOpticalFlowExecuteBitsARM::disableTemporalHints: return "disableTemporalHints";
		case DataGraphOpticalFlowExecuteBitsARM::inputUnchanged: return "inputUnchanged";
		case DataGraphOpticalFlowExecuteBitsARM::referenceUnchanged: return "referenceUnchanged";
		case DataGraphOpticalFlowExecuteBitsARM::inputIsPreviousReference: return "inputIsPreviousReference";
		case DataGraphOpticalFlowExecuteBitsARM::referenceIsPreviousInput: return "referenceIsPreviousInput";
		default: return nullptr;
	}
}
inline const char* name(DataGraphPipelineNodeTypeARM val) {
	switch(val) {
		case DataGraphPipelineNodeTypeARM::opticalFlow: return "opticalFlow";
		default: return nullptr;
	}
}
inline const char* name(DataGraphPipelineNodeConnectionTypeARM val) {
	switch(val) {
		case DataGraphPipelineNodeConnectionTypeARM::opticalFlowInput: return "opticalFlowInput";
		case DataGraphPipelineNodeConnectionTypeARM::opticalFlowReference: return "opticalFlowReference";
		case DataGraphPipelineNodeConnectionTypeARM::opticalFlowHint: return "opticalFlowHint";
		case DataGraphPipelineNodeConnectionTypeARM::opticalFlowFlowVector: return "opticalFlowFlowVector";
		case DataGraphPipelineNodeConnectionTypeARM::opticalFlowCost: return "opticalFlowCost";
		default: return nullptr;
	}
}
inline std::string name(DataGraphOpticalFlowGridSizeFlagsARM val) {
	std::string ret;
	if((val & DataGraphOpticalFlowGridSizeBitsARM::unknown) == DataGraphOpticalFlowGridSizeBitsARM::unknown) ret += "unknown | ";
	if((val & DataGraphOpticalFlowGridSizeBitsARM::e1x1) == DataGraphOpticalFlowGridSizeBitsARM::e1x1) ret += "e1x1 | ";
	if((val & DataGraphOpticalFlowGridSizeBitsARM::e2x2) == DataGraphOpticalFlowGridSizeBitsARM::e2x2) ret += "e2x2 | ";
	if((val & DataGraphOpticalFlowGridSizeBitsARM::e4x4) == DataGraphOpticalFlowGridSizeBitsARM::e4x4) ret += "e4x4 | ";
	if((val & DataGraphOpticalFlowGridSizeBitsARM::e8x8) == DataGraphOpticalFlowGridSizeBitsARM::e8x8) ret += "e8x8 | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(DataGraphOpticalFlowCreateFlagsARM val) {
	std::string ret;
	if((val & DataGraphOpticalFlowCreateBitsARM::enableHint) == DataGraphOpticalFlowCreateBitsARM::enableHint) ret += "enableHint | ";
	if((val & DataGraphOpticalFlowCreateBitsARM::enableCost) == DataGraphOpticalFlowCreateBitsARM::enableCost) ret += "enableCost | ";
	if((val & DataGraphOpticalFlowCreateBitsARM::reserved30) == DataGraphOpticalFlowCreateBitsARM::reserved30) ret += "reserved30 | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(DataGraphOpticalFlowImageUsageFlagsARM val) {
	std::string ret;
	if((val & DataGraphOpticalFlowImageUsageBitsARM::unknown) == DataGraphOpticalFlowImageUsageBitsARM::unknown) ret += "unknown | ";
	if((val & DataGraphOpticalFlowImageUsageBitsARM::input) == DataGraphOpticalFlowImageUsageBitsARM::input) ret += "input | ";
	if((val & DataGraphOpticalFlowImageUsageBitsARM::output) == DataGraphOpticalFlowImageUsageBitsARM::output) ret += "output | ";
	if((val & DataGraphOpticalFlowImageUsageBitsARM::hint) == DataGraphOpticalFlowImageUsageBitsARM::hint) ret += "hint | ";
	if((val & DataGraphOpticalFlowImageUsageBitsARM::cost) == DataGraphOpticalFlowImageUsageBitsARM::cost) ret += "cost | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(DataGraphOpticalFlowExecuteFlagsARM val) {
	std::string ret;
	if((val & DataGraphOpticalFlowExecuteBitsARM::disableTemporalHints) == DataGraphOpticalFlowExecuteBitsARM::disableTemporalHints) ret += "disableTemporalHints | ";
	if((val & DataGraphOpticalFlowExecuteBitsARM::inputUnchanged) == DataGraphOpticalFlowExecuteBitsARM::inputUnchanged) ret += "inputUnchanged | ";
	if((val & DataGraphOpticalFlowExecuteBitsARM::referenceUnchanged) == DataGraphOpticalFlowExecuteBitsARM::referenceUnchanged) ret += "referenceUnchanged | ";
	if((val & DataGraphOpticalFlowExecuteBitsARM::inputIsPreviousReference) == DataGraphOpticalFlowExecuteBitsARM::inputIsPreviousReference) ret += "inputIsPreviousReference | ";
	if((val & DataGraphOpticalFlowExecuteBitsARM::referenceIsPreviousInput) == DataGraphOpticalFlowExecuteBitsARM::referenceIsPreviousInput) ret += "referenceIsPreviousInput | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}

#ifdef VK_USE_PLATFORM_UBM_SEC
#endif //VK_USE_PLATFORM_UBM_SEC

inline const char* name(ThrottleHintTypeSEC val) {
	switch(val) {
		case ThrottleHintTypeSEC::eDefault: return "eDefault";
		case ThrottleHintTypeSEC::low: return "low";
		case ThrottleHintTypeSEC::high: return "high";
		default: return nullptr;
	}
}
inline const char* name(NeuralAcceleratorStatisticsModeARM val) {
	switch(val) {
		case NeuralAcceleratorStatisticsModeARM::disabled: return "disabled";
		case NeuralAcceleratorStatisticsModeARM::statistics0: return "statistics0";
		case NeuralAcceleratorStatisticsModeARM::statistics1: return "statistics1";
		default: return nullptr;
	}
}

} // namespace vk

// The specification (vk.xml) itself is published under the following license:

// Copyright 2015-2026 The Khronos Group Inc.
// 
// SPDX-License-Identifier: Apache-2.0 OR MIT
    