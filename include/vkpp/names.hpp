// Copyright (c) 2020 nyorain
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

// Automaitcally generated vulkan header, see nyorain/vkpp
// Do not edit manually, rather edit the codegen files.

#pragma once

#include <vkpp/fwd.hpp>
#include <vkpp/enums.hpp>
#include <string>

// Generated for vulkan version: 1.1.204

namespace vk {

inline std::string name(nytl::Flags<DummyEnum>) { return {}; } 

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
		case StructureType::physicalDeviceSubgroupProperties: return "physicalDeviceSubgroupProperties";
		case StructureType::bindBufferMemoryInfo: return "bindBufferMemoryInfo";
		case StructureType::bindImageMemoryInfo: return "bindImageMemoryInfo";
		case StructureType::physicalDevice16bitStorageFeatures: return "physicalDevice16bitStorageFeatures";
		case StructureType::memoryDedicatedRequirements: return "memoryDedicatedRequirements";
		case StructureType::memoryDedicatedAllocateInfo: return "memoryDedicatedAllocateInfo";
		case StructureType::memoryAllocateFlagsInfo: return "memoryAllocateFlagsInfo";
		case StructureType::deviceGroupRenderPassBeginInfo: return "deviceGroupRenderPassBeginInfo";
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
		case StructureType::physicalDevicePointClippingProperties: return "physicalDevicePointClippingProperties";
		case StructureType::renderPassInputAttachmentAspectCreateInfo: return "renderPassInputAttachmentAspectCreateInfo";
		case StructureType::imageViewUsageCreateInfo: return "imageViewUsageCreateInfo";
		case StructureType::pipelineTessellationDomainOriginStateCreateInfo: return "pipelineTessellationDomainOriginStateCreateInfo";
		case StructureType::renderPassMultiviewCreateInfo: return "renderPassMultiviewCreateInfo";
		case StructureType::physicalDeviceMultiviewFeatures: return "physicalDeviceMultiviewFeatures";
		case StructureType::physicalDeviceMultiviewProperties: return "physicalDeviceMultiviewProperties";
		case StructureType::physicalDeviceVariablePointersFeatures: return "physicalDeviceVariablePointersFeatures";
		case StructureType::protectedSubmitInfo: return "protectedSubmitInfo";
		case StructureType::physicalDeviceProtectedMemoryFeatures: return "physicalDeviceProtectedMemoryFeatures";
		case StructureType::physicalDeviceProtectedMemoryProperties: return "physicalDeviceProtectedMemoryProperties";
		case StructureType::deviceQueueInfo2: return "deviceQueueInfo2";
		case StructureType::samplerYcbcrConversionCreateInfo: return "samplerYcbcrConversionCreateInfo";
		case StructureType::samplerYcbcrConversionInfo: return "samplerYcbcrConversionInfo";
		case StructureType::bindImagePlaneMemoryInfo: return "bindImagePlaneMemoryInfo";
		case StructureType::imagePlaneMemoryRequirementsInfo: return "imagePlaneMemoryRequirementsInfo";
		case StructureType::physicalDeviceSamplerYcbcrConversionFeatures: return "physicalDeviceSamplerYcbcrConversionFeatures";
		case StructureType::samplerYcbcrConversionImageFormatProperties: return "samplerYcbcrConversionImageFormatProperties";
		case StructureType::descriptorUpdateTemplateCreateInfo: return "descriptorUpdateTemplateCreateInfo";
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
		case StructureType::physicalDeviceMaintenance3Properties: return "physicalDeviceMaintenance3Properties";
		case StructureType::descriptorSetLayoutSupport: return "descriptorSetLayoutSupport";
		case StructureType::physicalDeviceShaderDrawParametersFeatures: return "physicalDeviceShaderDrawParametersFeatures";
		case StructureType::physicalDeviceVulkan11Features: return "physicalDeviceVulkan11Features";
		case StructureType::physicalDeviceVulkan11Properties: return "physicalDeviceVulkan11Properties";
		case StructureType::physicalDeviceVulkan12Features: return "physicalDeviceVulkan12Features";
		case StructureType::physicalDeviceVulkan12Properties: return "physicalDeviceVulkan12Properties";
		case StructureType::imageFormatListCreateInfo: return "imageFormatListCreateInfo";
		case StructureType::attachmentDescription2: return "attachmentDescription2";
		case StructureType::attachmentReference2: return "attachmentReference2";
		case StructureType::subpassDescription2: return "subpassDescription2";
		case StructureType::subpassDependency2: return "subpassDependency2";
		case StructureType::renderPassCreateInfo2: return "renderPassCreateInfo2";
		case StructureType::subpassBeginInfo: return "subpassBeginInfo";
		case StructureType::subpassEndInfo: return "subpassEndInfo";
		case StructureType::physicalDevice8bitStorageFeatures: return "physicalDevice8bitStorageFeatures";
		case StructureType::physicalDeviceDriverProperties: return "physicalDeviceDriverProperties";
		case StructureType::physicalDeviceShaderAtomicInt64Features: return "physicalDeviceShaderAtomicInt64Features";
		case StructureType::physicalDeviceShaderFloat16Int8Features: return "physicalDeviceShaderFloat16Int8Features";
		case StructureType::physicalDeviceFloatControlsProperties: return "physicalDeviceFloatControlsProperties";
		case StructureType::descriptorSetLayoutBindingFlagsCreateInfo: return "descriptorSetLayoutBindingFlagsCreateInfo";
		case StructureType::physicalDeviceDescriptorIndexingFeatures: return "physicalDeviceDescriptorIndexingFeatures";
		case StructureType::physicalDeviceDescriptorIndexingProperties: return "physicalDeviceDescriptorIndexingProperties";
		case StructureType::descriptorSetVariableDescriptorCountAllocateInfo: return "descriptorSetVariableDescriptorCountAllocateInfo";
		case StructureType::descriptorSetVariableDescriptorCountLayoutSupport: return "descriptorSetVariableDescriptorCountLayoutSupport";
		case StructureType::physicalDeviceDepthStencilResolveProperties: return "physicalDeviceDepthStencilResolveProperties";
		case StructureType::subpassDescriptionDepthStencilResolve: return "subpassDescriptionDepthStencilResolve";
		case StructureType::physicalDeviceScalarBlockLayoutFeatures: return "physicalDeviceScalarBlockLayoutFeatures";
		case StructureType::imageStencilUsageCreateInfo: return "imageStencilUsageCreateInfo";
		case StructureType::physicalDeviceSamplerFilterMinmaxProperties: return "physicalDeviceSamplerFilterMinmaxProperties";
		case StructureType::samplerReductionModeCreateInfo: return "samplerReductionModeCreateInfo";
		case StructureType::physicalDeviceVulkanMemoryModelFeatures: return "physicalDeviceVulkanMemoryModelFeatures";
		case StructureType::physicalDeviceImagelessFramebufferFeatures: return "physicalDeviceImagelessFramebufferFeatures";
		case StructureType::framebufferAttachmentsCreateInfo: return "framebufferAttachmentsCreateInfo";
		case StructureType::framebufferAttachmentImageInfo: return "framebufferAttachmentImageInfo";
		case StructureType::renderPassAttachmentBeginInfo: return "renderPassAttachmentBeginInfo";
		case StructureType::physicalDeviceUniformBufferStandardLayoutFeatures: return "physicalDeviceUniformBufferStandardLayoutFeatures";
		case StructureType::physicalDeviceShaderSubgroupExtendedTypesFeatures: return "physicalDeviceShaderSubgroupExtendedTypesFeatures";
		case StructureType::physicalDeviceSeparateDepthStencilLayoutsFeatures: return "physicalDeviceSeparateDepthStencilLayoutsFeatures";
		case StructureType::attachmentReferenceStencilLayout: return "attachmentReferenceStencilLayout";
		case StructureType::attachmentDescriptionStencilLayout: return "attachmentDescriptionStencilLayout";
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
		case StructureType::physicalDeviceVulkan13Features: return "physicalDeviceVulkan13Features";
		case StructureType::physicalDeviceVulkan13Properties: return "physicalDeviceVulkan13Properties";
		case StructureType::pipelineCreationFeedbackCreateInfo: return "pipelineCreationFeedbackCreateInfo";
		case StructureType::physicalDeviceShaderTerminateInvocationFeatures: return "physicalDeviceShaderTerminateInvocationFeatures";
		case StructureType::physicalDeviceToolProperties: return "physicalDeviceToolProperties";
		case StructureType::physicalDeviceShaderDemoteToHelperInvocationFeatures: return "physicalDeviceShaderDemoteToHelperInvocationFeatures";
		case StructureType::physicalDevicePrivateDataFeatures: return "physicalDevicePrivateDataFeatures";
		case StructureType::devicePrivateDataCreateInfo: return "devicePrivateDataCreateInfo";
		case StructureType::privateDataSlotCreateInfo: return "privateDataSlotCreateInfo";
		case StructureType::physicalDevicePipelineCreationCacheControlFeatures: return "physicalDevicePipelineCreationCacheControlFeatures";
		case StructureType::memoryBarrier2: return "memoryBarrier2";
		case StructureType::bufferMemoryBarrier2: return "bufferMemoryBarrier2";
		case StructureType::imageMemoryBarrier2: return "imageMemoryBarrier2";
		case StructureType::dependencyInfo: return "dependencyInfo";
		case StructureType::submitInfo2: return "submitInfo2";
		case StructureType::semaphoreSubmitInfo: return "semaphoreSubmitInfo";
		case StructureType::commandBufferSubmitInfo: return "commandBufferSubmitInfo";
		case StructureType::physicalDeviceSynchronization2Features: return "physicalDeviceSynchronization2Features";
		case StructureType::physicalDeviceZeroInitializeWorkgroupMemoryFeatures: return "physicalDeviceZeroInitializeWorkgroupMemoryFeatures";
		case StructureType::physicalDeviceImageRobustnessFeatures: return "physicalDeviceImageRobustnessFeatures";
		case StructureType::copyBufferInfo2: return "copyBufferInfo2";
		case StructureType::copyImageInfo2: return "copyImageInfo2";
		case StructureType::copyBufferToImageInfo2: return "copyBufferToImageInfo2";
		case StructureType::copyImageToBufferInfo2: return "copyImageToBufferInfo2";
		case StructureType::blitImageInfo2: return "blitImageInfo2";
		case StructureType::resolveImageInfo2: return "resolveImageInfo2";
		case StructureType::bufferCopy2: return "bufferCopy2";
		case StructureType::imageCopy2: return "imageCopy2";
		case StructureType::imageBlit2: return "imageBlit2";
		case StructureType::bufferImageCopy2: return "bufferImageCopy2";
		case StructureType::imageResolve2: return "imageResolve2";
		case StructureType::physicalDeviceSubgroupSizeControlProperties: return "physicalDeviceSubgroupSizeControlProperties";
		case StructureType::pipelineShaderStageRequiredSubgroupSizeCreateInfo: return "pipelineShaderStageRequiredSubgroupSizeCreateInfo";
		case StructureType::physicalDeviceSubgroupSizeControlFeatures: return "physicalDeviceSubgroupSizeControlFeatures";
		case StructureType::physicalDeviceInlineUniformBlockFeatures: return "physicalDeviceInlineUniformBlockFeatures";
		case StructureType::physicalDeviceInlineUniformBlockProperties: return "physicalDeviceInlineUniformBlockProperties";
		case StructureType::writeDescriptorSetInlineUniformBlock: return "writeDescriptorSetInlineUniformBlock";
		case StructureType::descriptorPoolInlineUniformBlockCreateInfo: return "descriptorPoolInlineUniformBlockCreateInfo";
		case StructureType::physicalDeviceTextureCompressionAstcHdrFeatures: return "physicalDeviceTextureCompressionAstcHdrFeatures";
		case StructureType::renderingInfo: return "renderingInfo";
		case StructureType::renderingAttachmentInfo: return "renderingAttachmentInfo";
		case StructureType::pipelineRenderingCreateInfo: return "pipelineRenderingCreateInfo";
		case StructureType::physicalDeviceDynamicRenderingFeatures: return "physicalDeviceDynamicRenderingFeatures";
		case StructureType::commandBufferInheritanceRenderingInfo: return "commandBufferInheritanceRenderingInfo";
		case StructureType::physicalDeviceShaderIntegerDotProductFeatures: return "physicalDeviceShaderIntegerDotProductFeatures";
		case StructureType::physicalDeviceShaderIntegerDotProductProperties: return "physicalDeviceShaderIntegerDotProductProperties";
		case StructureType::physicalDeviceTexelBufferAlignmentProperties: return "physicalDeviceTexelBufferAlignmentProperties";
		case StructureType::formatProperties3: return "formatProperties3";
		case StructureType::physicalDeviceMaintenance4Features: return "physicalDeviceMaintenance4Features";
		case StructureType::physicalDeviceMaintenance4Properties: return "physicalDeviceMaintenance4Properties";
		case StructureType::deviceBufferMemoryRequirements: return "deviceBufferMemoryRequirements";
		case StructureType::deviceImageMemoryRequirements: return "deviceImageMemoryRequirements";
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
		case StructureType::dedicatedAllocationImageCreateInfoNV: return "dedicatedAllocationImageCreateInfoNV";
		case StructureType::dedicatedAllocationBufferCreateInfoNV: return "dedicatedAllocationBufferCreateInfoNV";
		case StructureType::dedicatedAllocationMemoryAllocateInfoNV: return "dedicatedAllocationMemoryAllocateInfoNV";
		case StructureType::physicalDeviceTransformFeedbackFeaturesEXT: return "physicalDeviceTransformFeedbackFeaturesEXT";
		case StructureType::physicalDeviceTransformFeedbackPropertiesEXT: return "physicalDeviceTransformFeedbackPropertiesEXT";
		case StructureType::pipelineRasterizationStateStreamCreateInfoEXT: return "pipelineRasterizationStateStreamCreateInfoEXT";
		case StructureType::textureLodGatherFormatPropertiesAMD: return "textureLodGatherFormatPropertiesAMD";
		case StructureType::renderingFragmentShadingRateAttachmentInfoKHR: return "renderingFragmentShadingRateAttachmentInfoKHR";
		case StructureType::renderingFragmentDensityMapAttachmentInfoEXT: return "renderingFragmentDensityMapAttachmentInfoEXT";
		case StructureType::attachmentSampleCountInfoAMD: return "attachmentSampleCountInfoAMD";
		case StructureType::multiviewPerViewAttributesInfoNVX: return "multiviewPerViewAttributesInfoNVX";
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
		case StructureType::physicalDevicePushDescriptorPropertiesKHR: return "physicalDevicePushDescriptorPropertiesKHR";
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
		case StructureType::importMemoryHostPointerInfoEXT: return "importMemoryHostPointerInfoEXT";
		case StructureType::memoryHostPointerPropertiesEXT: return "memoryHostPointerPropertiesEXT";
		case StructureType::physicalDeviceExternalMemoryHostPropertiesEXT: return "physicalDeviceExternalMemoryHostPropertiesEXT";
		case StructureType::physicalDeviceShaderClockFeaturesKHR: return "physicalDeviceShaderClockFeaturesKHR";
		case StructureType::pipelineCompilerControlCreateInfoAMD: return "pipelineCompilerControlCreateInfoAMD";
		case StructureType::calibratedTimestampInfoEXT: return "calibratedTimestampInfoEXT";
		case StructureType::physicalDeviceShaderCorePropertiesAMD: return "physicalDeviceShaderCorePropertiesAMD";
		case StructureType::deviceQueueGlobalPriorityCreateInfoKHR: return "deviceQueueGlobalPriorityCreateInfoKHR";
		case StructureType::physicalDeviceGlobalPriorityQueryFeaturesKHR: return "physicalDeviceGlobalPriorityQueryFeaturesKHR";
		case StructureType::queueFamilyGlobalPriorityPropertiesKHR: return "queueFamilyGlobalPriorityPropertiesKHR";
		case StructureType::deviceMemoryOverallocationCreateInfoAMD: return "deviceMemoryOverallocationCreateInfoAMD";
		case StructureType::physicalDeviceVertexAttributeDivisorPropertiesEXT: return "physicalDeviceVertexAttributeDivisorPropertiesEXT";
		case StructureType::pipelineVertexInputDivisorStateCreateInfoEXT: return "pipelineVertexInputDivisorStateCreateInfoEXT";
		case StructureType::physicalDeviceVertexAttributeDivisorFeaturesEXT: return "physicalDeviceVertexAttributeDivisorFeaturesEXT";
		case StructureType::presentFrameTokenGGP: return "presentFrameTokenGGP";
		case StructureType::physicalDeviceComputeShaderDerivativesFeaturesNV: return "physicalDeviceComputeShaderDerivativesFeaturesNV";
		case StructureType::physicalDeviceMeshShaderFeaturesNV: return "physicalDeviceMeshShaderFeaturesNV";
		case StructureType::physicalDeviceMeshShaderPropertiesNV: return "physicalDeviceMeshShaderPropertiesNV";
		case StructureType::physicalDeviceFragmentShaderBarycentricFeaturesNV: return "physicalDeviceFragmentShaderBarycentricFeaturesNV";
		case StructureType::physicalDeviceShaderImageFootprintFeaturesNV: return "physicalDeviceShaderImageFootprintFeaturesNV";
		case StructureType::pipelineViewportExclusiveScissorStateCreateInfoNV: return "pipelineViewportExclusiveScissorStateCreateInfoNV";
		case StructureType::physicalDeviceExclusiveScissorFeaturesNV: return "physicalDeviceExclusiveScissorFeaturesNV";
		case StructureType::checkpointDataNV: return "checkpointDataNV";
		case StructureType::queueFamilyCheckpointPropertiesNV: return "queueFamilyCheckpointPropertiesNV";
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
		case StructureType::fragmentShadingRateAttachmentInfoKHR: return "fragmentShadingRateAttachmentInfoKHR";
		case StructureType::pipelineFragmentShadingRateStateCreateInfoKHR: return "pipelineFragmentShadingRateStateCreateInfoKHR";
		case StructureType::physicalDeviceFragmentShadingRatePropertiesKHR: return "physicalDeviceFragmentShadingRatePropertiesKHR";
		case StructureType::physicalDeviceFragmentShadingRateFeaturesKHR: return "physicalDeviceFragmentShadingRateFeaturesKHR";
		case StructureType::physicalDeviceFragmentShadingRateKHR: return "physicalDeviceFragmentShadingRateKHR";
		case StructureType::physicalDeviceShaderCoreProperties2AMD: return "physicalDeviceShaderCoreProperties2AMD";
		case StructureType::physicalDeviceCoherentMemoryFeaturesAMD: return "physicalDeviceCoherentMemoryFeaturesAMD";
		case StructureType::physicalDeviceShaderImageAtomicInt64FeaturesEXT: return "physicalDeviceShaderImageAtomicInt64FeaturesEXT";
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
		case StructureType::physicalDeviceLineRasterizationFeaturesEXT: return "physicalDeviceLineRasterizationFeaturesEXT";
		case StructureType::pipelineRasterizationLineStateCreateInfoEXT: return "pipelineRasterizationLineStateCreateInfoEXT";
		case StructureType::physicalDeviceLineRasterizationPropertiesEXT: return "physicalDeviceLineRasterizationPropertiesEXT";
		case StructureType::physicalDeviceShaderAtomicFloatFeaturesEXT: return "physicalDeviceShaderAtomicFloatFeaturesEXT";
		case StructureType::physicalDeviceIndexTypeUint8FeaturesEXT: return "physicalDeviceIndexTypeUint8FeaturesEXT";
		case StructureType::physicalDeviceExtendedDynamicStateFeaturesEXT: return "physicalDeviceExtendedDynamicStateFeaturesEXT";
		case StructureType::physicalDevicePipelineExecutablePropertiesFeaturesKHR: return "physicalDevicePipelineExecutablePropertiesFeaturesKHR";
		case StructureType::pipelineInfoKHR: return "pipelineInfoKHR";
		case StructureType::pipelineExecutablePropertiesKHR: return "pipelineExecutablePropertiesKHR";
		case StructureType::pipelineExecutableInfoKHR: return "pipelineExecutableInfoKHR";
		case StructureType::pipelineExecutableStatisticKHR: return "pipelineExecutableStatisticKHR";
		case StructureType::pipelineExecutableInternalRepresentationKHR: return "pipelineExecutableInternalRepresentationKHR";
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
		case StructureType::physicalDeviceDeviceMemoryReportFeaturesEXT: return "physicalDeviceDeviceMemoryReportFeaturesEXT";
		case StructureType::deviceDeviceMemoryReportCreateInfoEXT: return "deviceDeviceMemoryReportCreateInfoEXT";
		case StructureType::deviceMemoryReportCallbackDataEXT: return "deviceMemoryReportCallbackDataEXT";
		case StructureType::physicalDeviceRobustness2FeaturesEXT: return "physicalDeviceRobustness2FeaturesEXT";
		case StructureType::physicalDeviceRobustness2PropertiesEXT: return "physicalDeviceRobustness2PropertiesEXT";
		case StructureType::samplerCustomBorderColorCreateInfoEXT: return "samplerCustomBorderColorCreateInfoEXT";
		case StructureType::physicalDeviceCustomBorderColorPropertiesEXT: return "physicalDeviceCustomBorderColorPropertiesEXT";
		case StructureType::physicalDeviceCustomBorderColorFeaturesEXT: return "physicalDeviceCustomBorderColorFeaturesEXT";
		case StructureType::pipelineLibraryCreateInfoKHR: return "pipelineLibraryCreateInfoKHR";
		case StructureType::presentIDKHR: return "presentIDKHR";
		case StructureType::physicalDevicePresentIDFeaturesKHR: return "physicalDevicePresentIDFeaturesKHR";
		case StructureType::physicalDeviceDiagnosticsConfigFeaturesNV: return "physicalDeviceDiagnosticsConfigFeaturesNV";
		case StructureType::deviceDiagnosticsConfigCreateInfoNV: return "deviceDiagnosticsConfigCreateInfoNV";
		case StructureType::queueFamilyCheckpointProperties2NV: return "queueFamilyCheckpointProperties2NV";
		case StructureType::checkpointData2NV: return "checkpointData2NV";
		case StructureType::physicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR: return "physicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR";
		case StructureType::physicalDeviceFragmentShadingRateEnumsPropertiesNV: return "physicalDeviceFragmentShadingRateEnumsPropertiesNV";
		case StructureType::physicalDeviceFragmentShadingRateEnumsFeaturesNV: return "physicalDeviceFragmentShadingRateEnumsFeaturesNV";
		case StructureType::pipelineFragmentShadingRateEnumStateCreateInfoNV: return "pipelineFragmentShadingRateEnumStateCreateInfoNV";
		case StructureType::accelerationStructureGeometryMotionTrianglesDataNV: return "accelerationStructureGeometryMotionTrianglesDataNV";
		case StructureType::physicalDeviceRayTracingMotionBlurFeaturesNV: return "physicalDeviceRayTracingMotionBlurFeaturesNV";
		case StructureType::accelerationStructureMotionInfoNV: return "accelerationStructureMotionInfoNV";
		case StructureType::physicalDeviceYcbcr2Plane444FormatsFeaturesEXT: return "physicalDeviceYcbcr2Plane444FormatsFeaturesEXT";
		case StructureType::physicalDeviceFragmentDensityMap2FeaturesEXT: return "physicalDeviceFragmentDensityMap2FeaturesEXT";
		case StructureType::physicalDeviceFragmentDensityMap2PropertiesEXT: return "physicalDeviceFragmentDensityMap2PropertiesEXT";
		case StructureType::copyCommandTransformInfoQCOM: return "copyCommandTransformInfoQCOM";
		case StructureType::physicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR: return "physicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR";
		case StructureType::physicalDevice4444FormatsFeaturesEXT: return "physicalDevice4444FormatsFeaturesEXT";
		case StructureType::physicalDeviceRasterizationOrderAttachmentAccessFeaturesARM: return "physicalDeviceRasterizationOrderAttachmentAccessFeaturesARM";
		case StructureType::physicalDeviceRgba10x6FormatsFeaturesEXT: return "physicalDeviceRgba10x6FormatsFeaturesEXT";
		case StructureType::directfbSurfaceCreateInfoEXT: return "directfbSurfaceCreateInfoEXT";
		case StructureType::physicalDeviceMutableDescriptorTypeFeaturesVALVE: return "physicalDeviceMutableDescriptorTypeFeaturesVALVE";
		case StructureType::mutableDescriptorTypeCreateInfoVALVE: return "mutableDescriptorTypeCreateInfoVALVE";
		case StructureType::physicalDeviceVertexInputDynamicStateFeaturesEXT: return "physicalDeviceVertexInputDynamicStateFeaturesEXT";
		case StructureType::vertexInputBindingDescription2EXT: return "vertexInputBindingDescription2EXT";
		case StructureType::vertexInputAttributeDescription2EXT: return "vertexInputAttributeDescription2EXT";
		case StructureType::physicalDeviceDrmPropertiesEXT: return "physicalDeviceDrmPropertiesEXT";
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
		case StructureType::physicalDeviceExtendedDynamicState2FeaturesEXT: return "physicalDeviceExtendedDynamicState2FeaturesEXT";
		case StructureType::screenSurfaceCreateInfoQNX: return "screenSurfaceCreateInfoQNX";
		case StructureType::physicalDeviceColorWriteEnableFeaturesEXT: return "physicalDeviceColorWriteEnableFeaturesEXT";
		case StructureType::pipelineColorWriteCreateInfoEXT: return "pipelineColorWriteCreateInfoEXT";
		case StructureType::physicalDeviceImageViewMinLodFeaturesEXT: return "physicalDeviceImageViewMinLodFeaturesEXT";
		case StructureType::imageViewMinLodCreateInfoEXT: return "imageViewMinLodCreateInfoEXT";
		case StructureType::physicalDeviceMultiDrawFeaturesEXT: return "physicalDeviceMultiDrawFeaturesEXT";
		case StructureType::physicalDeviceMultiDrawPropertiesEXT: return "physicalDeviceMultiDrawPropertiesEXT";
		case StructureType::physicalDeviceBorderColorSwizzleFeaturesEXT: return "physicalDeviceBorderColorSwizzleFeaturesEXT";
		case StructureType::samplerBorderColorComponentMappingCreateInfoEXT: return "samplerBorderColorComponentMappingCreateInfoEXT";
		case StructureType::physicalDevicePageableDeviceLocalMemoryFeaturesEXT: return "physicalDevicePageableDeviceLocalMemoryFeaturesEXT";
		case StructureType::physicalDeviceFragmentDensityMapOffsetFeaturesQCOM: return "physicalDeviceFragmentDensityMapOffsetFeaturesQCOM";
		case StructureType::physicalDeviceFragmentDensityMapOffsetPropertiesQCOM: return "physicalDeviceFragmentDensityMapOffsetPropertiesQCOM";
		case StructureType::subpassFragmentDensityMapOffsetEndInfoQCOM: return "subpassFragmentDensityMapOffsetEndInfoQCOM";
		case StructureType::physicalDeviceLinearColorAttachmentFeaturesNV: return "physicalDeviceLinearColorAttachmentFeaturesNV";
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
		case ShaderStageBits::taskNV: return "taskNV";
		case ShaderStageBits::meshNV: return "meshNV";
		case ShaderStageBits::subpassShadingHUAWEI: return "subpassShadingHUAWEI";
		default: return nullptr;
	}
}
inline const char* name(PipelineCreationFeedbackBits val) {
	switch(val) {
		case PipelineCreationFeedbackBits::valid: return "valid";
		case PipelineCreationFeedbackBits::applicationPipelineCacheHit: return "applicationPipelineCacheHit";
		case PipelineCreationFeedbackBits::basePipelineAcceleration: return "basePipelineAcceleration";
		default: return nullptr;
	}
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
		case Result::errorOutOfPoolMemory: return "errorOutOfPoolMemory";
		case Result::errorInvalidExternalHandle: return "errorInvalidExternalHandle";
		case Result::errorFragmentation: return "errorFragmentation";
		case Result::errorInvalidOpaqueCaptureAddress: return "errorInvalidOpaqueCaptureAddress";
		case Result::pipelineCompileRequired: return "pipelineCompileRequired";
		case Result::errorSurfaceLostKHR: return "errorSurfaceLostKHR";
		case Result::errorNativeWindowInUseKHR: return "errorNativeWindowInUseKHR";
		case Result::suboptimalKHR: return "suboptimalKHR";
		case Result::errorOutOfDateKHR: return "errorOutOfDateKHR";
		case Result::errorIncompatibleDisplayKHR: return "errorIncompatibleDisplayKHR";
		case Result::errorValidationFailedEXT: return "errorValidationFailedEXT";
		case Result::errorInvalidShaderNV: return "errorInvalidShaderNV";
		case Result::errorInvalidDrmFormatModifierPlaneLayoutEXT: return "errorInvalidDrmFormatModifierPlaneLayoutEXT";
		case Result::errorNotPermittedKHR: return "errorNotPermittedKHR";
		case Result::errorFullScreenExclusiveModeLostEXT: return "errorFullScreenExclusiveModeLostEXT";
		case Result::threadIDleKHR: return "threadIDleKHR";
		case Result::threadDoneKHR: return "threadDoneKHR";
		case Result::operationDeferredKHR: return "operationDeferredKHR";
		case Result::operationNotDeferredKHR: return "operationNotDeferredKHR";
		default: return nullptr;
	}
}
inline const char* name(PrivateDataSlotCreateBits val) {
	switch(val) {
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
		case ObjectType::samplerYcbcrConversion: return "samplerYcbcrConversion";
		case ObjectType::descriptorUpdateTemplate: return "descriptorUpdateTemplate";
		case ObjectType::privateDataSlot: return "privateDataSlot";
		case ObjectType::surfaceKHR: return "surfaceKHR";
		case ObjectType::swapchainKHR: return "swapchainKHR";
		case ObjectType::displayKHR: return "displayKHR";
		case ObjectType::displayModeKHR: return "displayModeKHR";
		case ObjectType::debugReportCallbackEXT: return "debugReportCallbackEXT";
		case ObjectType::debugUtilsMessengerEXT: return "debugUtilsMessengerEXT";
		case ObjectType::accelerationStructureKHR: return "accelerationStructureKHR";
		case ObjectType::validationCacheEXT: return "validationCacheEXT";
		case ObjectType::accelerationStructureNV: return "accelerationStructureNV";
		case ObjectType::performanceConfigurationINTEL: return "performanceConfigurationINTEL";
		case ObjectType::deferredOperationKHR: return "deferredOperationKHR";
		case ObjectType::indirectCommandsLayoutNV: return "indirectCommandsLayoutNV";
		case ObjectType::bufferCollectionFUCHSIA: return "bufferCollectionFUCHSIA";
		default: return nullptr;
	}
}
inline const char* name(PipelineStageBits2 val) {
	switch(val) {
		case PipelineStageBits2::e2None: return "e2None";
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
		case PipelineStageBits2::e2TransformFeedbackEXT: return "e2TransformFeedbackEXT";
		case PipelineStageBits2::e2ConditionalRenderingEXT: return "e2ConditionalRenderingEXT";
		case PipelineStageBits2::e2CommandPreprocessNV: return "e2CommandPreprocessNV";
		case PipelineStageBits2::e2FragmentShadingRateAttachmentKHR: return "e2FragmentShadingRateAttachmentKHR";
		case PipelineStageBits2::e2AccelerationStructureBuildKHR: return "e2AccelerationStructureBuildKHR";
		case PipelineStageBits2::e2RayTracingShaderKHR: return "e2RayTracingShaderKHR";
		case PipelineStageBits2::e2FragmentDensityProcessEXT: return "e2FragmentDensityProcessEXT";
		case PipelineStageBits2::e2TaskShaderNV: return "e2TaskShaderNV";
		case PipelineStageBits2::e2MeshShaderNV: return "e2MeshShaderNV";
		case PipelineStageBits2::e2SubpassShadingHUAWEI: return "e2SubpassShadingHUAWEI";
		case PipelineStageBits2::e2InvocationMaskHUAWEI: return "e2InvocationMaskHUAWEI";
		default: return nullptr;
	}
}
inline const char* name(AccessBits2 val) {
	switch(val) {
		case AccessBits2::e2None: return "e2None";
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
		case AccessBits2::e2TransformFeedbackWriteEXT: return "e2TransformFeedbackWriteEXT";
		case AccessBits2::e2TransformFeedbackCounterReadEXT: return "e2TransformFeedbackCounterReadEXT";
		case AccessBits2::e2TransformFeedbackCounterWriteEXT: return "e2TransformFeedbackCounterWriteEXT";
		case AccessBits2::e2ConditionalRenderingReadEXT: return "e2ConditionalRenderingReadEXT";
		case AccessBits2::e2CommandPreprocessReadNV: return "e2CommandPreprocessReadNV";
		case AccessBits2::e2CommandPreprocessWriteNV: return "e2CommandPreprocessWriteNV";
		case AccessBits2::e2FragmentShadingRateAttachmentReadKHR: return "e2FragmentShadingRateAttachmentReadKHR";
		case AccessBits2::e2AccelerationStructureReadKHR: return "e2AccelerationStructureReadKHR";
		case AccessBits2::e2AccelerationStructureWriteKHR: return "e2AccelerationStructureWriteKHR";
		case AccessBits2::e2FragmentDensityMapReadEXT: return "e2FragmentDensityMapReadEXT";
		case AccessBits2::e2ColorAttachmentReadNoncoherentEXT: return "e2ColorAttachmentReadNoncoherentEXT";
		case AccessBits2::e2InvocationMaskReadHUAWEI: return "e2InvocationMaskReadHUAWEI";
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
		case ImageLayout::presentSrcKHR: return "presentSrcKHR";
		case ImageLayout::sharedPresentKHR: return "sharedPresentKHR";
		case ImageLayout::fragmentDensityMapOptimalEXT: return "fragmentDensityMapOptimalEXT";
		case ImageLayout::fragmentShadingRateAttachmentOptimalKHR: return "fragmentShadingRateAttachmentOptimalKHR";
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
		case ImageAspectBits::memoryPlane0EXT: return "memoryPlane0EXT";
		case ImageAspectBits::memoryPlane1EXT: return "memoryPlane1EXT";
		case ImageAspectBits::memoryPlane2EXT: return "memoryPlane2EXT";
		case ImageAspectBits::memoryPlane3EXT: return "memoryPlane3EXT";
		default: return nullptr;
	}
}
inline const char* name(DependencyBits val) {
	switch(val) {
		case DependencyBits::byRegion: return "byRegion";
		case DependencyBits::deviceGroup: return "deviceGroup";
		case DependencyBits::viewLocal: return "viewLocal";
		default: return nullptr;
	}
}
inline const char* name(SubmitBits val) {
	switch(val) {
		case SubmitBits::eProtected: return "eProtected";
		default: return nullptr;
	}
}
inline const char* name(Filter val) {
	switch(val) {
		case Filter::nearest: return "nearest";
		case Filter::linear: return "linear";
		case Filter::cubicIMG: return "cubicIMG";
		default: return nullptr;
	}
}
inline const char* name(RenderingBits val) {
	switch(val) {
		case RenderingBits::contentsSecondaryCommandBuffers: return "contentsSecondaryCommandBuffers";
		case RenderingBits::suspending: return "suspending";
		case RenderingBits::resuming: return "resuming";
		default: return nullptr;
	}
}
inline const char* name(ResolveModeBits val) {
	switch(val) {
		case ResolveModeBits::none: return "none";
		case ResolveModeBits::average: return "average";
		case ResolveModeBits::min: return "min";
		case ResolveModeBits::max: return "max";
		default: return nullptr;
	}
}
inline const char* name(AttachmentLoadOp val) {
	switch(val) {
		case AttachmentLoadOp::load: return "load";
		case AttachmentLoadOp::clear: return "clear";
		case AttachmentLoadOp::dontCare: return "dontCare";
		case AttachmentLoadOp::noneEXT: return "noneEXT";
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
		case Format::pvrtc12bppUnormBlockIMG: return "pvrtc12bppUnormBlockIMG";
		case Format::pvrtc14bppUnormBlockIMG: return "pvrtc14bppUnormBlockIMG";
		case Format::pvrtc22bppUnormBlockIMG: return "pvrtc22bppUnormBlockIMG";
		case Format::pvrtc24bppUnormBlockIMG: return "pvrtc24bppUnormBlockIMG";
		case Format::pvrtc12bppSrgbBlockIMG: return "pvrtc12bppSrgbBlockIMG";
		case Format::pvrtc14bppSrgbBlockIMG: return "pvrtc14bppSrgbBlockIMG";
		case Format::pvrtc22bppSrgbBlockIMG: return "pvrtc22bppSrgbBlockIMG";
		case Format::pvrtc24bppSrgbBlockIMG: return "pvrtc24bppSrgbBlockIMG";
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
inline const char* name(CullModeBits val) {
	switch(val) {
		case CullModeBits::none: return "none";
		case CullModeBits::back: return "back";
		case CullModeBits::frontAndBack: return "frontAndBack";
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
inline const char* name(StencilFaceBits val) {
	switch(val) {
		case StencilFaceBits::front: return "front";
		case StencilFaceBits::back: return "back";
		case StencilFaceBits::frontAndBack: return "frontAndBack";
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
		case FormatFeatureBits2::e2SampledImageFilterCubic: return "e2SampledImageFilterCubic";
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
		case FormatFeatureBits2::e2AccelerationStructureVertexBufferKHR: return "e2AccelerationStructureVertexBufferKHR";
		case FormatFeatureBits2::e2FragmentDensityMapEXT: return "e2FragmentDensityMapEXT";
		case FormatFeatureBits2::e2FragmentShadingRateAttachmentKHR: return "e2FragmentShadingRateAttachmentKHR";
		case FormatFeatureBits2::e2LinearColorAttachmentNV: return "e2LinearColorAttachmentNV";
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
		case BufferUsageBits::transformFeedbackBufferEXT: return "transformFeedbackBufferEXT";
		case BufferUsageBits::transformFeedbackCounterBufferEXT: return "transformFeedbackCounterBufferEXT";
		case BufferUsageBits::conditionalRenderingEXT: return "conditionalRenderingEXT";
		case BufferUsageBits::accelerationStructureBuildInputReadOnlyKHR: return "accelerationStructureBuildInputReadOnlyKHR";
		case BufferUsageBits::accelerationStructureStorageKHR: return "accelerationStructureStorageKHR";
		case BufferUsageBits::shaderBindingTableKHR: return "shaderBindingTableKHR";
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
		case ImageCreateBits::sampleLocationsCompatibleDepthEXT: return "sampleLocationsCompatibleDepthEXT";
		case ImageCreateBits::subsampledEXT: return "subsampledEXT";
		case ImageCreateBits::fragmentDensityMapOffsetQCOM: return "fragmentDensityMapOffsetQCOM";
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
inline const char* name(ImageTiling val) {
	switch(val) {
		case ImageTiling::optimal: return "optimal";
		case ImageTiling::linear: return "linear";
		case ImageTiling::drmFormatModifierEXT: return "drmFormatModifierEXT";
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
		case ImageUsageBits::fragmentDensityMapEXT: return "fragmentDensityMapEXT";
		case ImageUsageBits::fragmentShadingRateAttachmentKHR: return "fragmentShadingRateAttachmentKHR";
		case ImageUsageBits::invocationMaskHUAWEI: return "invocationMaskHUAWEI";
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
	if((val & ShaderStageBits::taskNV) == ShaderStageBits::taskNV) ret += "taskNV | ";
	if((val & ShaderStageBits::meshNV) == ShaderStageBits::meshNV) ret += "meshNV | ";
	if((val & ShaderStageBits::subpassShadingHUAWEI) == ShaderStageBits::subpassShadingHUAWEI) ret += "subpassShadingHUAWEI | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(PipelineCreationFeedbackFlags val) {
	std::string ret;
	if((val & PipelineCreationFeedbackBits::valid) == PipelineCreationFeedbackBits::valid) ret += "valid | ";
	if((val & PipelineCreationFeedbackBits::applicationPipelineCacheHit) == PipelineCreationFeedbackBits::applicationPipelineCacheHit) ret += "applicationPipelineCacheHit | ";
	if((val & PipelineCreationFeedbackBits::basePipelineAcceleration) == PipelineCreationFeedbackBits::basePipelineAcceleration) ret += "basePipelineAcceleration | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

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
inline std::string name(PrivateDataSlotCreateFlags) {
	std::string ret;
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(PipelineStageFlags2 val) {
	std::string ret;
	if((val & PipelineStageBits2::e2None) == PipelineStageBits2::e2None) ret += "e2None | ";
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
	if((val & PipelineStageBits2::e2TransformFeedbackEXT) == PipelineStageBits2::e2TransformFeedbackEXT) ret += "e2TransformFeedbackEXT | ";
	if((val & PipelineStageBits2::e2ConditionalRenderingEXT) == PipelineStageBits2::e2ConditionalRenderingEXT) ret += "e2ConditionalRenderingEXT | ";
	if((val & PipelineStageBits2::e2CommandPreprocessNV) == PipelineStageBits2::e2CommandPreprocessNV) ret += "e2CommandPreprocessNV | ";
	if((val & PipelineStageBits2::e2FragmentShadingRateAttachmentKHR) == PipelineStageBits2::e2FragmentShadingRateAttachmentKHR) ret += "e2FragmentShadingRateAttachmentKHR | ";
	if((val & PipelineStageBits2::e2AccelerationStructureBuildKHR) == PipelineStageBits2::e2AccelerationStructureBuildKHR) ret += "e2AccelerationStructureBuildKHR | ";
	if((val & PipelineStageBits2::e2RayTracingShaderKHR) == PipelineStageBits2::e2RayTracingShaderKHR) ret += "e2RayTracingShaderKHR | ";
	if((val & PipelineStageBits2::e2FragmentDensityProcessEXT) == PipelineStageBits2::e2FragmentDensityProcessEXT) ret += "e2FragmentDensityProcessEXT | ";
	if((val & PipelineStageBits2::e2TaskShaderNV) == PipelineStageBits2::e2TaskShaderNV) ret += "e2TaskShaderNV | ";
	if((val & PipelineStageBits2::e2MeshShaderNV) == PipelineStageBits2::e2MeshShaderNV) ret += "e2MeshShaderNV | ";
	if((val & PipelineStageBits2::e2SubpassShadingHUAWEI) == PipelineStageBits2::e2SubpassShadingHUAWEI) ret += "e2SubpassShadingHUAWEI | ";
	if((val & PipelineStageBits2::e2InvocationMaskHUAWEI) == PipelineStageBits2::e2InvocationMaskHUAWEI) ret += "e2InvocationMaskHUAWEI | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(AccessFlags2 val) {
	std::string ret;
	if((val & AccessBits2::e2None) == AccessBits2::e2None) ret += "e2None | ";
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
	if((val & AccessBits2::e2TransformFeedbackWriteEXT) == AccessBits2::e2TransformFeedbackWriteEXT) ret += "e2TransformFeedbackWriteEXT | ";
	if((val & AccessBits2::e2TransformFeedbackCounterReadEXT) == AccessBits2::e2TransformFeedbackCounterReadEXT) ret += "e2TransformFeedbackCounterReadEXT | ";
	if((val & AccessBits2::e2TransformFeedbackCounterWriteEXT) == AccessBits2::e2TransformFeedbackCounterWriteEXT) ret += "e2TransformFeedbackCounterWriteEXT | ";
	if((val & AccessBits2::e2ConditionalRenderingReadEXT) == AccessBits2::e2ConditionalRenderingReadEXT) ret += "e2ConditionalRenderingReadEXT | ";
	if((val & AccessBits2::e2CommandPreprocessReadNV) == AccessBits2::e2CommandPreprocessReadNV) ret += "e2CommandPreprocessReadNV | ";
	if((val & AccessBits2::e2CommandPreprocessWriteNV) == AccessBits2::e2CommandPreprocessWriteNV) ret += "e2CommandPreprocessWriteNV | ";
	if((val & AccessBits2::e2FragmentShadingRateAttachmentReadKHR) == AccessBits2::e2FragmentShadingRateAttachmentReadKHR) ret += "e2FragmentShadingRateAttachmentReadKHR | ";
	if((val & AccessBits2::e2AccelerationStructureReadKHR) == AccessBits2::e2AccelerationStructureReadKHR) ret += "e2AccelerationStructureReadKHR | ";
	if((val & AccessBits2::e2AccelerationStructureWriteKHR) == AccessBits2::e2AccelerationStructureWriteKHR) ret += "e2AccelerationStructureWriteKHR | ";
	if((val & AccessBits2::e2FragmentDensityMapReadEXT) == AccessBits2::e2FragmentDensityMapReadEXT) ret += "e2FragmentDensityMapReadEXT | ";
	if((val & AccessBits2::e2ColorAttachmentReadNoncoherentEXT) == AccessBits2::e2ColorAttachmentReadNoncoherentEXT) ret += "e2ColorAttachmentReadNoncoherentEXT | ";
	if((val & AccessBits2::e2InvocationMaskReadHUAWEI) == AccessBits2::e2InvocationMaskReadHUAWEI) ret += "e2InvocationMaskReadHUAWEI | ";
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
	if((val & ImageAspectBits::memoryPlane0EXT) == ImageAspectBits::memoryPlane0EXT) ret += "memoryPlane0EXT | ";
	if((val & ImageAspectBits::memoryPlane1EXT) == ImageAspectBits::memoryPlane1EXT) ret += "memoryPlane1EXT | ";
	if((val & ImageAspectBits::memoryPlane2EXT) == ImageAspectBits::memoryPlane2EXT) ret += "memoryPlane2EXT | ";
	if((val & ImageAspectBits::memoryPlane3EXT) == ImageAspectBits::memoryPlane3EXT) ret += "memoryPlane3EXT | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(DependencyFlags val) {
	std::string ret;
	if((val & DependencyBits::byRegion) == DependencyBits::byRegion) ret += "byRegion | ";
	if((val & DependencyBits::deviceGroup) == DependencyBits::deviceGroup) ret += "deviceGroup | ";
	if((val & DependencyBits::viewLocal) == DependencyBits::viewLocal) ret += "viewLocal | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(SubmitFlags val) {
	std::string ret;
	if((val & SubmitBits::eProtected) == SubmitBits::eProtected) ret += "eProtected | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(RenderingFlags val) {
	std::string ret;
	if((val & RenderingBits::contentsSecondaryCommandBuffers) == RenderingBits::contentsSecondaryCommandBuffers) ret += "contentsSecondaryCommandBuffers | ";
	if((val & RenderingBits::suspending) == RenderingBits::suspending) ret += "suspending | ";
	if((val & RenderingBits::resuming) == RenderingBits::resuming) ret += "resuming | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(CullModeFlags val) {
	std::string ret;
	if((val & CullModeBits::none) == CullModeBits::none) ret += "none | ";
	if((val & CullModeBits::back) == CullModeBits::back) ret += "back | ";
	if((val & CullModeBits::frontAndBack) == CullModeBits::frontAndBack) ret += "frontAndBack | ";
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
	if((val & FormatFeatureBits2::e2SampledImageFilterCubic) == FormatFeatureBits2::e2SampledImageFilterCubic) ret += "e2SampledImageFilterCubic | ";
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
	if((val & FormatFeatureBits2::e2AccelerationStructureVertexBufferKHR) == FormatFeatureBits2::e2AccelerationStructureVertexBufferKHR) ret += "e2AccelerationStructureVertexBufferKHR | ";
	if((val & FormatFeatureBits2::e2FragmentDensityMapEXT) == FormatFeatureBits2::e2FragmentDensityMapEXT) ret += "e2FragmentDensityMapEXT | ";
	if((val & FormatFeatureBits2::e2FragmentShadingRateAttachmentKHR) == FormatFeatureBits2::e2FragmentShadingRateAttachmentKHR) ret += "e2FragmentShadingRateAttachmentKHR | ";
	if((val & FormatFeatureBits2::e2LinearColorAttachmentNV) == FormatFeatureBits2::e2LinearColorAttachmentNV) ret += "e2LinearColorAttachmentNV | ";
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
	if((val & BufferUsageBits::transformFeedbackBufferEXT) == BufferUsageBits::transformFeedbackBufferEXT) ret += "transformFeedbackBufferEXT | ";
	if((val & BufferUsageBits::transformFeedbackCounterBufferEXT) == BufferUsageBits::transformFeedbackCounterBufferEXT) ret += "transformFeedbackCounterBufferEXT | ";
	if((val & BufferUsageBits::conditionalRenderingEXT) == BufferUsageBits::conditionalRenderingEXT) ret += "conditionalRenderingEXT | ";
	if((val & BufferUsageBits::accelerationStructureBuildInputReadOnlyKHR) == BufferUsageBits::accelerationStructureBuildInputReadOnlyKHR) ret += "accelerationStructureBuildInputReadOnlyKHR | ";
	if((val & BufferUsageBits::accelerationStructureStorageKHR) == BufferUsageBits::accelerationStructureStorageKHR) ret += "accelerationStructureStorageKHR | ";
	if((val & BufferUsageBits::shaderBindingTableKHR) == BufferUsageBits::shaderBindingTableKHR) ret += "shaderBindingTableKHR | ";
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
	if((val & ImageCreateBits::sampleLocationsCompatibleDepthEXT) == ImageCreateBits::sampleLocationsCompatibleDepthEXT) ret += "sampleLocationsCompatibleDepthEXT | ";
	if((val & ImageCreateBits::subsampledEXT) == ImageCreateBits::subsampledEXT) ret += "subsampledEXT | ";
	if((val & ImageCreateBits::fragmentDensityMapOffsetQCOM) == ImageCreateBits::fragmentDensityMapOffsetQCOM) ret += "fragmentDensityMapOffsetQCOM | ";
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
	if((val & ImageUsageBits::fragmentDensityMapEXT) == ImageUsageBits::fragmentDensityMapEXT) ret += "fragmentDensityMapEXT | ";
	if((val & ImageUsageBits::fragmentShadingRateAttachmentKHR) == ImageUsageBits::fragmentShadingRateAttachmentKHR) ret += "fragmentShadingRateAttachmentKHR | ";
	if((val & ImageUsageBits::invocationMaskHUAWEI) == ImageUsageBits::invocationMaskHUAWEI) ret += "invocationMaskHUAWEI | ";
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
		case SubgroupFeatureBits::partitionedNV: return "partitionedNV";
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
inline const char* name(RenderPassCreateBits val) {
	switch(val) {
		case RenderPassCreateBits::transformQCOM: return "transformQCOM";
		default: return nullptr;
	}
}
inline const char* name(AttachmentDescriptionBits val) {
	switch(val) {
		case AttachmentDescriptionBits::mayAlias: return "mayAlias";
		default: return nullptr;
	}
}
inline const char* name(SubpassDescriptionBits val) {
	switch(val) {
		case SubpassDescriptionBits::fragmentRegionQCOM: return "fragmentRegionQCOM";
		case SubpassDescriptionBits::shaderResolveQCOM: return "shaderResolveQCOM";
		case SubpassDescriptionBits::rasterizationOrderAttachmentColorAccessARM: return "rasterizationOrderAttachmentColorAccessARM";
		case SubpassDescriptionBits::rasterizationOrderAttachmentDepthAccessARM: return "rasterizationOrderAttachmentDepthAccessARM";
		case SubpassDescriptionBits::rasterizationOrderAttachmentStencilAccessARM: return "rasterizationOrderAttachmentStencilAccessARM";
		default: return nullptr;
	}
}
inline const char* name(PipelineBindPoint val) {
	switch(val) {
		case PipelineBindPoint::graphics: return "graphics";
		case PipelineBindPoint::compute: return "compute";
		case PipelineBindPoint::rayTracingKHR: return "rayTracingKHR";
		case PipelineBindPoint::subpassShadingHUAWEI: return "subpassShadingHUAWEI";
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
		case PipelineStageBits::transformFeedbackEXT: return "transformFeedbackEXT";
		case PipelineStageBits::conditionalRenderingEXT: return "conditionalRenderingEXT";
		case PipelineStageBits::accelerationStructureBuildKHR: return "accelerationStructureBuildKHR";
		case PipelineStageBits::rayTracingShaderKHR: return "rayTracingShaderKHR";
		case PipelineStageBits::taskShaderNV: return "taskShaderNV";
		case PipelineStageBits::meshShaderNV: return "meshShaderNV";
		case PipelineStageBits::fragmentDensityProcessEXT: return "fragmentDensityProcessEXT";
		case PipelineStageBits::fragmentShadingRateAttachmentKHR: return "fragmentShadingRateAttachmentKHR";
		case PipelineStageBits::commandPreprocessNV: return "commandPreprocessNV";
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
		case AccessBits::transformFeedbackWriteEXT: return "transformFeedbackWriteEXT";
		case AccessBits::transformFeedbackCounterReadEXT: return "transformFeedbackCounterReadEXT";
		case AccessBits::transformFeedbackCounterWriteEXT: return "transformFeedbackCounterWriteEXT";
		case AccessBits::conditionalRenderingReadEXT: return "conditionalRenderingReadEXT";
		case AccessBits::colorAttachmentReadNoncoherentEXT: return "colorAttachmentReadNoncoherentEXT";
		case AccessBits::accelerationStructureReadKHR: return "accelerationStructureReadKHR";
		case AccessBits::accelerationStructureWriteKHR: return "accelerationStructureWriteKHR";
		case AccessBits::fragmentDensityMapReadEXT: return "fragmentDensityMapReadEXT";
		case AccessBits::fragmentShadingRateAttachmentReadKHR: return "fragmentShadingRateAttachmentReadKHR";
		case AccessBits::commandPreprocessReadNV: return "commandPreprocessReadNV";
		case AccessBits::commandPreprocessWriteNV: return "commandPreprocessWriteNV";
		default: return nullptr;
	}
}
inline const char* name(SubpassContents val) {
	switch(val) {
		case SubpassContents::eInline: return "eInline";
		case SubpassContents::secondaryCommandBuffers: return "secondaryCommandBuffers";
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
	if((val & SubgroupFeatureBits::partitionedNV) == SubgroupFeatureBits::partitionedNV) ret += "partitionedNV | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(ResolveModeFlags val) {
	std::string ret;
	if((val & ResolveModeBits::none) == ResolveModeBits::none) ret += "none | ";
	if((val & ResolveModeBits::average) == ResolveModeBits::average) ret += "average | ";
	if((val & ResolveModeBits::min) == ResolveModeBits::min) ret += "min | ";
	if((val & ResolveModeBits::max) == ResolveModeBits::max) ret += "max | ";
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
inline std::string name(RenderPassCreateFlags val) {
	std::string ret;
	if((val & RenderPassCreateBits::transformQCOM) == RenderPassCreateBits::transformQCOM) ret += "transformQCOM | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(AttachmentDescriptionFlags val) {
	std::string ret;
	if((val & AttachmentDescriptionBits::mayAlias) == AttachmentDescriptionBits::mayAlias) ret += "mayAlias | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(SubpassDescriptionFlags val) {
	std::string ret;
	if((val & SubpassDescriptionBits::fragmentRegionQCOM) == SubpassDescriptionBits::fragmentRegionQCOM) ret += "fragmentRegionQCOM | ";
	if((val & SubpassDescriptionBits::shaderResolveQCOM) == SubpassDescriptionBits::shaderResolveQCOM) ret += "shaderResolveQCOM | ";
	if((val & SubpassDescriptionBits::rasterizationOrderAttachmentColorAccessARM) == SubpassDescriptionBits::rasterizationOrderAttachmentColorAccessARM) ret += "rasterizationOrderAttachmentColorAccessARM | ";
	if((val & SubpassDescriptionBits::rasterizationOrderAttachmentDepthAccessARM) == SubpassDescriptionBits::rasterizationOrderAttachmentDepthAccessARM) ret += "rasterizationOrderAttachmentDepthAccessARM | ";
	if((val & SubpassDescriptionBits::rasterizationOrderAttachmentStencilAccessARM) == SubpassDescriptionBits::rasterizationOrderAttachmentStencilAccessARM) ret += "rasterizationOrderAttachmentStencilAccessARM | ";
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
	if((val & PipelineStageBits::transformFeedbackEXT) == PipelineStageBits::transformFeedbackEXT) ret += "transformFeedbackEXT | ";
	if((val & PipelineStageBits::conditionalRenderingEXT) == PipelineStageBits::conditionalRenderingEXT) ret += "conditionalRenderingEXT | ";
	if((val & PipelineStageBits::accelerationStructureBuildKHR) == PipelineStageBits::accelerationStructureBuildKHR) ret += "accelerationStructureBuildKHR | ";
	if((val & PipelineStageBits::rayTracingShaderKHR) == PipelineStageBits::rayTracingShaderKHR) ret += "rayTracingShaderKHR | ";
	if((val & PipelineStageBits::taskShaderNV) == PipelineStageBits::taskShaderNV) ret += "taskShaderNV | ";
	if((val & PipelineStageBits::meshShaderNV) == PipelineStageBits::meshShaderNV) ret += "meshShaderNV | ";
	if((val & PipelineStageBits::fragmentDensityProcessEXT) == PipelineStageBits::fragmentDensityProcessEXT) ret += "fragmentDensityProcessEXT | ";
	if((val & PipelineStageBits::fragmentShadingRateAttachmentKHR) == PipelineStageBits::fragmentShadingRateAttachmentKHR) ret += "fragmentShadingRateAttachmentKHR | ";
	if((val & PipelineStageBits::commandPreprocessNV) == PipelineStageBits::commandPreprocessNV) ret += "commandPreprocessNV | ";
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
	if((val & AccessBits::transformFeedbackWriteEXT) == AccessBits::transformFeedbackWriteEXT) ret += "transformFeedbackWriteEXT | ";
	if((val & AccessBits::transformFeedbackCounterReadEXT) == AccessBits::transformFeedbackCounterReadEXT) ret += "transformFeedbackCounterReadEXT | ";
	if((val & AccessBits::transformFeedbackCounterWriteEXT) == AccessBits::transformFeedbackCounterWriteEXT) ret += "transformFeedbackCounterWriteEXT | ";
	if((val & AccessBits::conditionalRenderingReadEXT) == AccessBits::conditionalRenderingReadEXT) ret += "conditionalRenderingReadEXT | ";
	if((val & AccessBits::colorAttachmentReadNoncoherentEXT) == AccessBits::colorAttachmentReadNoncoherentEXT) ret += "colorAttachmentReadNoncoherentEXT | ";
	if((val & AccessBits::accelerationStructureReadKHR) == AccessBits::accelerationStructureReadKHR) ret += "accelerationStructureReadKHR | ";
	if((val & AccessBits::accelerationStructureWriteKHR) == AccessBits::accelerationStructureWriteKHR) ret += "accelerationStructureWriteKHR | ";
	if((val & AccessBits::fragmentDensityMapReadEXT) == AccessBits::fragmentDensityMapReadEXT) ret += "fragmentDensityMapReadEXT | ";
	if((val & AccessBits::fragmentShadingRateAttachmentReadKHR) == AccessBits::fragmentShadingRateAttachmentReadKHR) ret += "fragmentShadingRateAttachmentReadKHR | ";
	if((val & AccessBits::commandPreprocessReadNV) == AccessBits::commandPreprocessReadNV) ret += "commandPreprocessReadNV | ";
	if((val & AccessBits::commandPreprocessWriteNV) == AccessBits::commandPreprocessWriteNV) ret += "commandPreprocessWriteNV | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

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
inline std::string name(SemaphoreWaitFlags val) {
	std::string ret;
	if((val & SemaphoreWaitBits::any) == SemaphoreWaitBits::any) ret += "any | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

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
		case FormatFeatureBits::sampledImageFilterCubicIMG: return "sampledImageFilterCubicIMG";
		case FormatFeatureBits::accelerationStructureVertexBufferKHR: return "accelerationStructureVertexBufferKHR";
		case FormatFeatureBits::fragmentDensityMapEXT: return "fragmentDensityMapEXT";
		case FormatFeatureBits::fragmentShadingRateAttachmentKHR: return "fragmentShadingRateAttachmentKHR";
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
inline const char* name(MemoryHeapBits val) {
	switch(val) {
		case MemoryHeapBits::deviceLocal: return "deviceLocal";
		case MemoryHeapBits::multiInstance: return "multiInstance";
		default: return nullptr;
	}
}
inline const char* name(TessellationDomainOrigin val) {
	switch(val) {
		case TessellationDomainOrigin::upperLeft: return "upperLeft";
		case TessellationDomainOrigin::lowerLeft: return "lowerLeft";
		default: return nullptr;
	}
}
inline const char* name(DeviceQueueCreateBits val) {
	switch(val) {
		case DeviceQueueCreateBits::eProtected: return "eProtected";
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
inline const char* name(ChromaLocation val) {
	switch(val) {
		case ChromaLocation::cositedEven: return "cositedEven";
		case ChromaLocation::midpoint: return "midpoint";
		default: return nullptr;
	}
}
inline const char* name(DescriptorUpdateTemplateType val) {
	switch(val) {
		case DescriptorUpdateTemplateType::descriptorSet: return "descriptorSet";
		case DescriptorUpdateTemplateType::pushDescriptorsKHR: return "pushDescriptorsKHR";
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
		case DescriptorType::mutableVALVE: return "mutableVALVE";
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
inline const char* name(DescriptorSetLayoutCreateBits val) {
	switch(val) {
		case DescriptorSetLayoutCreateBits::updateAfterBindPool: return "updateAfterBindPool";
		case DescriptorSetLayoutCreateBits::pushDescriptorKHR: return "pushDescriptorKHR";
		case DescriptorSetLayoutCreateBits::hostOnlyPoolVALVE: return "hostOnlyPoolVALVE";
		default: return nullptr;
	}
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
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

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
	if((val & FormatFeatureBits::sampledImageFilterCubicIMG) == FormatFeatureBits::sampledImageFilterCubicIMG) ret += "sampledImageFilterCubicIMG | ";
	if((val & FormatFeatureBits::accelerationStructureVertexBufferKHR) == FormatFeatureBits::accelerationStructureVertexBufferKHR) ret += "accelerationStructureVertexBufferKHR | ";
	if((val & FormatFeatureBits::fragmentDensityMapEXT) == FormatFeatureBits::fragmentDensityMapEXT) ret += "fragmentDensityMapEXT | ";
	if((val & FormatFeatureBits::fragmentShadingRateAttachmentKHR) == FormatFeatureBits::fragmentShadingRateAttachmentKHR) ret += "fragmentShadingRateAttachmentKHR | ";
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
inline std::string name(MemoryHeapFlags val) {
	std::string ret;
	if((val & MemoryHeapBits::deviceLocal) == MemoryHeapBits::deviceLocal) ret += "deviceLocal | ";
	if((val & MemoryHeapBits::multiInstance) == MemoryHeapBits::multiInstance) ret += "multiInstance | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(DeviceQueueCreateFlags val) {
	std::string ret;
	if((val & DeviceQueueCreateBits::eProtected) == DeviceQueueCreateBits::eProtected) ret += "eProtected | ";
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
inline std::string name(DescriptorSetLayoutCreateFlags val) {
	std::string ret;
	if((val & DescriptorSetLayoutCreateBits::updateAfterBindPool) == DescriptorSetLayoutCreateBits::updateAfterBindPool) ret += "updateAfterBindPool | ";
	if((val & DescriptorSetLayoutCreateBits::pushDescriptorKHR) == DescriptorSetLayoutCreateBits::pushDescriptorKHR) ret += "pushDescriptorKHR | ";
	if((val & DescriptorSetLayoutCreateBits::hostOnlyPoolVALVE) == DescriptorSetLayoutCreateBits::hostOnlyPoolVALVE) ret += "hostOnlyPoolVALVE | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline const char* name(PipelineCacheHeaderVersion val) {
	switch(val) {
		case PipelineCacheHeaderVersion::one: return "one";
		default: return nullptr;
	}
}
inline const char* name(VendorId val) {
	switch(val) {
		case VendorId::vIV: return "vIV";
		case VendorId::vSI: return "vSI";
		case VendorId::kazan: return "kazan";
		case VendorId::codeplay: return "codeplay";
		case VendorId::mESA: return "mESA";
		case VendorId::pocl: return "pocl";
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
inline const char* name(EventCreateBits val) {
	switch(val) {
		case EventCreateBits::deviceOnly: return "deviceOnly";
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
		default: return nullptr;
	}
}
inline const char* name(QueryType val) {
	switch(val) {
		case QueryType::occlusion: return "occlusion";
		case QueryType::pipelineStatistics: return "pipelineStatistics";
		case QueryType::timestamp: return "timestamp";
		case QueryType::transformFeedbackStreamEXT: return "transformFeedbackStreamEXT";
		case QueryType::performanceQueryKHR: return "performanceQueryKHR";
		case QueryType::accelerationStructureCompactedSizeKHR: return "accelerationStructureCompactedSizeKHR";
		case QueryType::accelerationStructureSerializationSizeKHR: return "accelerationStructureSerializationSizeKHR";
		case QueryType::accelerationStructureCompactedSizeNV: return "accelerationStructureCompactedSizeNV";
		case QueryType::performanceQueryINTEL: return "performanceQueryINTEL";
		default: return nullptr;
	}
}
inline const char* name(QueryResultBits val) {
	switch(val) {
		case QueryResultBits::e64: return "e64";
		case QueryResultBits::wait: return "wait";
		case QueryResultBits::withAvailability: return "withAvailability";
		case QueryResultBits::partial: return "partial";
		default: return nullptr;
	}
}
inline const char* name(ImageViewCreateBits val) {
	switch(val) {
		case ImageViewCreateBits::fragmentDensityMapDynamicEXT: return "fragmentDensityMapDynamicEXT";
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
inline const char* name(PipelineCacheCreateBits val) {
	switch(val) {
		case PipelineCacheCreateBits::externallySynchronized: return "externallySynchronized";
		default: return nullptr;
	}
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
inline const char* name(PipelineCreateBits val) {
	switch(val) {
		case PipelineCreateBits::disableOptimization: return "disableOptimization";
		case PipelineCreateBits::allowDerivatives: return "allowDerivatives";
		case PipelineCreateBits::derivative: return "derivative";
		case PipelineCreateBits::viewIndexFromDeviceIndex: return "viewIndexFromDeviceIndex";
		case PipelineCreateBits::dispatchBase: return "dispatchBase";
		case PipelineCreateBits::failOnPipelineCompileRequired: return "failOnPipelineCompileRequired";
		case PipelineCreateBits::earlyReturnOnFailure: return "earlyReturnOnFailure";
		case PipelineCreateBits::renderingFragmentShadingRateAttachmentKHR: return "renderingFragmentShadingRateAttachmentKHR";
		case PipelineCreateBits::renderingFragmentDensityMapAttachmentEXT: return "renderingFragmentDensityMapAttachmentEXT";
		case PipelineCreateBits::rayTracingNoNullAnyHitShadersKHR: return "rayTracingNoNullAnyHitShadersKHR";
		case PipelineCreateBits::rayTracingNoNullClosestHitShadersKHR: return "rayTracingNoNullClosestHitShadersKHR";
		case PipelineCreateBits::rayTracingNoNullMissShadersKHR: return "rayTracingNoNullMissShadersKHR";
		case PipelineCreateBits::rayTracingNoNullIntersectionShadersKHR: return "rayTracingNoNullIntersectionShadersKHR";
		case PipelineCreateBits::rayTracingSkipTrianglesKHR: return "rayTracingSkipTrianglesKHR";
		case PipelineCreateBits::rayTracingSkipAabbsKHR: return "rayTracingSkipAabbsKHR";
		case PipelineCreateBits::rayTracingShaderGroupHandleCaptureReplayKHR: return "rayTracingShaderGroupHandleCaptureReplayKHR";
		case PipelineCreateBits::deferCompileNV: return "deferCompileNV";
		case PipelineCreateBits::captureStatisticsKHR: return "captureStatisticsKHR";
		case PipelineCreateBits::captureInternalRepresentationsKHR: return "captureInternalRepresentationsKHR";
		case PipelineCreateBits::indirectBindableNV: return "indirectBindableNV";
		case PipelineCreateBits::libraryKHR: return "libraryKHR";
		case PipelineCreateBits::rayTracingAllowMotionNV: return "rayTracingAllowMotionNV";
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
		case DynamicState::viewportWScalingNV: return "viewportWScalingNV";
		case DynamicState::discardRectangleEXT: return "discardRectangleEXT";
		case DynamicState::sampleLocationsEXT: return "sampleLocationsEXT";
		case DynamicState::rayTracingPipelineStackSizeKHR: return "rayTracingPipelineStackSizeKHR";
		case DynamicState::viewportShadingRatePaletteNV: return "viewportShadingRatePaletteNV";
		case DynamicState::viewportCoarseSampleOrderNV: return "viewportCoarseSampleOrderNV";
		case DynamicState::exclusiveScissorNV: return "exclusiveScissorNV";
		case DynamicState::fragmentShadingRateKHR: return "fragmentShadingRateKHR";
		case DynamicState::lineStippleEXT: return "lineStippleEXT";
		case DynamicState::vertexInputEXT: return "vertexInputEXT";
		case DynamicState::patchControlPointsEXT: return "patchControlPointsEXT";
		case DynamicState::logicOpEXT: return "logicOpEXT";
		case DynamicState::colorWriteEnableEXT: return "colorWriteEnableEXT";
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
inline const char* name(PolygonMode val) {
	switch(val) {
		case PolygonMode::fill: return "fill";
		case PolygonMode::line: return "line";
		case PolygonMode::point: return "point";
		case PolygonMode::fillRectangleNV: return "fillRectangleNV";
		default: return nullptr;
	}
}
inline const char* name(PipelineDepthStencilStateCreateBits val) {
	switch(val) {
		case PipelineDepthStencilStateCreateBits::rasterizationOrderAttachmentDepthAccessARM: return "rasterizationOrderAttachmentDepthAccessARM";
		case PipelineDepthStencilStateCreateBits::rasterizationOrderAttachmentStencilAccessARM: return "rasterizationOrderAttachmentStencilAccessARM";
		default: return nullptr;
	}
}
inline const char* name(PipelineColorBlendStateCreateBits val) {
	switch(val) {
		case PipelineColorBlendStateCreateBits::rasterizationOrderAttachmentAccessARM: return "rasterizationOrderAttachmentAccessARM";
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
inline const char* name(DescriptorPoolCreateBits val) {
	switch(val) {
		case DescriptorPoolCreateBits::freeDescriptorSet: return "freeDescriptorSet";
		case DescriptorPoolCreateBits::updateAfterBind: return "updateAfterBind";
		case DescriptorPoolCreateBits::hostOnlyVALVE: return "hostOnlyVALVE";
		default: return nullptr;
	}
}
inline const char* name(FramebufferCreateBits val) {
	switch(val) {
		case FramebufferCreateBits::imageless: return "imageless";
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
inline const char* name(CommandBufferUsageBits val) {
	switch(val) {
		case CommandBufferUsageBits::oneTimeSubmit: return "oneTimeSubmit";
		case CommandBufferUsageBits::renderPassContinue: return "renderPassContinue";
		case CommandBufferUsageBits::simultaneousUse: return "simultaneousUse";
		default: return nullptr;
	}
}
inline const char* name(QueryControlBits val) {
	switch(val) {
		case QueryControlBits::precise: return "precise";
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
		case IndexType::noneKHR: return "noneKHR";
		case IndexType::uint8EXT: return "uint8EXT";
		default: return nullptr;
	}
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
inline std::string name(EventCreateFlags val) {
	std::string ret;
	if((val & EventCreateBits::deviceOnly) == EventCreateBits::deviceOnly) ret += "deviceOnly | ";
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
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(QueryResultFlags val) {
	std::string ret;
	if((val & QueryResultBits::e64) == QueryResultBits::e64) ret += "e64 | ";
	if((val & QueryResultBits::wait) == QueryResultBits::wait) ret += "wait | ";
	if((val & QueryResultBits::withAvailability) == QueryResultBits::withAvailability) ret += "withAvailability | ";
	if((val & QueryResultBits::partial) == QueryResultBits::partial) ret += "partial | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(ImageViewCreateFlags val) {
	std::string ret;
	if((val & ImageViewCreateBits::fragmentDensityMapDynamicEXT) == ImageViewCreateBits::fragmentDensityMapDynamicEXT) ret += "fragmentDensityMapDynamicEXT | ";
	if((val & ImageViewCreateBits::fragmentDensityMapDeferredEXT) == ImageViewCreateBits::fragmentDensityMapDeferredEXT) ret += "fragmentDensityMapDeferredEXT | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(PipelineCacheCreateFlags val) {
	std::string ret;
	if((val & PipelineCacheCreateBits::externallySynchronized) == PipelineCacheCreateBits::externallySynchronized) ret += "externallySynchronized | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

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
inline std::string name(PipelineCreateFlags val) {
	std::string ret;
	if((val & PipelineCreateBits::disableOptimization) == PipelineCreateBits::disableOptimization) ret += "disableOptimization | ";
	if((val & PipelineCreateBits::allowDerivatives) == PipelineCreateBits::allowDerivatives) ret += "allowDerivatives | ";
	if((val & PipelineCreateBits::derivative) == PipelineCreateBits::derivative) ret += "derivative | ";
	if((val & PipelineCreateBits::viewIndexFromDeviceIndex) == PipelineCreateBits::viewIndexFromDeviceIndex) ret += "viewIndexFromDeviceIndex | ";
	if((val & PipelineCreateBits::dispatchBase) == PipelineCreateBits::dispatchBase) ret += "dispatchBase | ";
	if((val & PipelineCreateBits::failOnPipelineCompileRequired) == PipelineCreateBits::failOnPipelineCompileRequired) ret += "failOnPipelineCompileRequired | ";
	if((val & PipelineCreateBits::earlyReturnOnFailure) == PipelineCreateBits::earlyReturnOnFailure) ret += "earlyReturnOnFailure | ";
	if((val & PipelineCreateBits::renderingFragmentShadingRateAttachmentKHR) == PipelineCreateBits::renderingFragmentShadingRateAttachmentKHR) ret += "renderingFragmentShadingRateAttachmentKHR | ";
	if((val & PipelineCreateBits::renderingFragmentDensityMapAttachmentEXT) == PipelineCreateBits::renderingFragmentDensityMapAttachmentEXT) ret += "renderingFragmentDensityMapAttachmentEXT | ";
	if((val & PipelineCreateBits::rayTracingNoNullAnyHitShadersKHR) == PipelineCreateBits::rayTracingNoNullAnyHitShadersKHR) ret += "rayTracingNoNullAnyHitShadersKHR | ";
	if((val & PipelineCreateBits::rayTracingNoNullClosestHitShadersKHR) == PipelineCreateBits::rayTracingNoNullClosestHitShadersKHR) ret += "rayTracingNoNullClosestHitShadersKHR | ";
	if((val & PipelineCreateBits::rayTracingNoNullMissShadersKHR) == PipelineCreateBits::rayTracingNoNullMissShadersKHR) ret += "rayTracingNoNullMissShadersKHR | ";
	if((val & PipelineCreateBits::rayTracingNoNullIntersectionShadersKHR) == PipelineCreateBits::rayTracingNoNullIntersectionShadersKHR) ret += "rayTracingNoNullIntersectionShadersKHR | ";
	if((val & PipelineCreateBits::rayTracingSkipTrianglesKHR) == PipelineCreateBits::rayTracingSkipTrianglesKHR) ret += "rayTracingSkipTrianglesKHR | ";
	if((val & PipelineCreateBits::rayTracingSkipAabbsKHR) == PipelineCreateBits::rayTracingSkipAabbsKHR) ret += "rayTracingSkipAabbsKHR | ";
	if((val & PipelineCreateBits::rayTracingShaderGroupHandleCaptureReplayKHR) == PipelineCreateBits::rayTracingShaderGroupHandleCaptureReplayKHR) ret += "rayTracingShaderGroupHandleCaptureReplayKHR | ";
	if((val & PipelineCreateBits::deferCompileNV) == PipelineCreateBits::deferCompileNV) ret += "deferCompileNV | ";
	if((val & PipelineCreateBits::captureStatisticsKHR) == PipelineCreateBits::captureStatisticsKHR) ret += "captureStatisticsKHR | ";
	if((val & PipelineCreateBits::captureInternalRepresentationsKHR) == PipelineCreateBits::captureInternalRepresentationsKHR) ret += "captureInternalRepresentationsKHR | ";
	if((val & PipelineCreateBits::indirectBindableNV) == PipelineCreateBits::indirectBindableNV) ret += "indirectBindableNV | ";
	if((val & PipelineCreateBits::libraryKHR) == PipelineCreateBits::libraryKHR) ret += "libraryKHR | ";
	if((val & PipelineCreateBits::rayTracingAllowMotionNV) == PipelineCreateBits::rayTracingAllowMotionNV) ret += "rayTracingAllowMotionNV | ";
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
inline std::string name(PipelineDepthStencilStateCreateFlags val) {
	std::string ret;
	if((val & PipelineDepthStencilStateCreateBits::rasterizationOrderAttachmentDepthAccessARM) == PipelineDepthStencilStateCreateBits::rasterizationOrderAttachmentDepthAccessARM) ret += "rasterizationOrderAttachmentDepthAccessARM | ";
	if((val & PipelineDepthStencilStateCreateBits::rasterizationOrderAttachmentStencilAccessARM) == PipelineDepthStencilStateCreateBits::rasterizationOrderAttachmentStencilAccessARM) ret += "rasterizationOrderAttachmentStencilAccessARM | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(PipelineColorBlendStateCreateFlags val) {
	std::string ret;
	if((val & PipelineColorBlendStateCreateBits::rasterizationOrderAttachmentAccessARM) == PipelineColorBlendStateCreateBits::rasterizationOrderAttachmentAccessARM) ret += "rasterizationOrderAttachmentAccessARM | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(SamplerCreateFlags val) {
	std::string ret;
	if((val & SamplerCreateBits::subsampledEXT) == SamplerCreateBits::subsampledEXT) ret += "subsampledEXT | ";
	if((val & SamplerCreateBits::subsampledCoarseReconstructionEXT) == SamplerCreateBits::subsampledCoarseReconstructionEXT) ret += "subsampledCoarseReconstructionEXT | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(DescriptorPoolCreateFlags val) {
	std::string ret;
	if((val & DescriptorPoolCreateBits::freeDescriptorSet) == DescriptorPoolCreateBits::freeDescriptorSet) ret += "freeDescriptorSet | ";
	if((val & DescriptorPoolCreateBits::updateAfterBind) == DescriptorPoolCreateBits::updateAfterBind) ret += "updateAfterBind | ";
	if((val & DescriptorPoolCreateBits::hostOnlyVALVE) == DescriptorPoolCreateBits::hostOnlyVALVE) ret += "hostOnlyVALVE | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(FramebufferCreateFlags val) {
	std::string ret;
	if((val & FramebufferCreateBits::imageless) == FramebufferCreateBits::imageless) ret += "imageless | ";
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
inline std::string name(CommandBufferUsageFlags val) {
	std::string ret;
	if((val & CommandBufferUsageBits::oneTimeSubmit) == CommandBufferUsageBits::oneTimeSubmit) ret += "oneTimeSubmit | ";
	if((val & CommandBufferUsageBits::renderPassContinue) == CommandBufferUsageBits::renderPassContinue) ret += "renderPassContinue | ";
	if((val & CommandBufferUsageBits::simultaneousUse) == CommandBufferUsageBits::simultaneousUse) ret += "simultaneousUse | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(QueryControlFlags val) {
	std::string ret;
	if((val & QueryControlBits::precise) == QueryControlBits::precise) ret += "precise | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(CommandBufferResetFlags val) {
	std::string ret;
	if((val & CommandBufferResetBits::releaseResources) == CommandBufferResetBits::releaseResources) ret += "releaseResources | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

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
inline std::string name(CompositeAlphaFlagsKHR val) {
	std::string ret;
	if((val & CompositeAlphaBitsKHR::opaque) == CompositeAlphaBitsKHR::opaque) ret += "opaque | ";
	if((val & CompositeAlphaBitsKHR::preMultiplied) == CompositeAlphaBitsKHR::preMultiplied) ret += "preMultiplied | ";
	if((val & CompositeAlphaBitsKHR::postMultiplied) == CompositeAlphaBitsKHR::postMultiplied) ret += "postMultiplied | ";
	if((val & CompositeAlphaBitsKHR::inherit) == CompositeAlphaBitsKHR::inherit) ret += "inherit | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

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
inline const char* name(SwapchainCreateBitsKHR val) {
	switch(val) {
		case SwapchainCreateBitsKHR::splitInstanceBindRegions: return "splitInstanceBindRegions";
		case SwapchainCreateBitsKHR::eProtected: return "eProtected";
		case SwapchainCreateBitsKHR::mutableFormat: return "mutableFormat";
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
inline const char* name(ValidationCheckEXT val) {
	switch(val) {
		case ValidationCheckEXT::all: return "all";
		case ValidationCheckEXT::shaders: return "shaders";
		default: return nullptr;
	}
}

#ifdef VK_USE_PLATFORM_VI_NN
#endif //VK_USE_PLATFORM_VI_NN

inline const char* name(ConditionalRenderingBitsEXT val) {
	switch(val) {
		case ConditionalRenderingBitsEXT::inverted: return "inverted";
		default: return nullptr;
	}
}
inline std::string name(ConditionalRenderingFlagsEXT val) {
	std::string ret;
	if((val & ConditionalRenderingBitsEXT::inverted) == ConditionalRenderingBitsEXT::inverted) ret += "inverted | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

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

#ifdef VK_USE_PLATFORM_IOS_MVK
#endif //VK_USE_PLATFORM_IOS_MVK


#ifdef VK_USE_PLATFORM_MACOS_MVK
#endif //VK_USE_PLATFORM_MACOS_MVK

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
		default: return nullptr;
	}
}
inline std::string name(DebugUtilsMessageTypeFlagsEXT val) {
	std::string ret;
	if((val & DebugUtilsMessageTypeBitsEXT::general) == DebugUtilsMessageTypeBitsEXT::general) ret += "general | ";
	if((val & DebugUtilsMessageTypeBitsEXT::validation) == DebugUtilsMessageTypeBitsEXT::validation) ret += "validation | ";
	if((val & DebugUtilsMessageTypeBitsEXT::performance) == DebugUtilsMessageTypeBitsEXT::performance) ret += "performance | ";
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
inline const char* name(BlendOverlapEXT val) {
	switch(val) {
		case BlendOverlapEXT::uncorrelated: return "uncorrelated";
		case BlendOverlapEXT::disjoint: return "disjoint";
		case BlendOverlapEXT::conjoint: return "conjoint";
		default: return nullptr;
	}
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
		default: return nullptr;
	}
}
inline const char* name(AccelerationStructureCreateBitsKHR val) {
	switch(val) {
		case AccelerationStructureCreateBitsKHR::deviceAddressCaptureReplay: return "deviceAddressCaptureReplay";
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
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
inline std::string name(AccelerationStructureCreateFlagsKHR val) {
	std::string ret;
	if((val & AccelerationStructureCreateBitsKHR::deviceAddressCaptureReplay) == AccelerationStructureCreateBitsKHR::deviceAddressCaptureReplay) ret += "deviceAddressCaptureReplay | ";
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
inline const char* name(CoverageModulationModeNV val) {
	switch(val) {
		case CoverageModulationModeNV::none: return "none";
		case CoverageModulationModeNV::rgb: return "rgb";
		case CoverageModulationModeNV::alpha: return "alpha";
		case CoverageModulationModeNV::rgba: return "rgba";
		default: return nullptr;
	}
}
inline const char* name(ValidationCacheHeaderVersionEXT val) {
	switch(val) {
		case ValidationCacheHeaderVersionEXT::one: return "one";
		default: return nullptr;
	}
}
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
inline const char* name(TimeDomainEXT val) {
	switch(val) {
		case TimeDomainEXT::device: return "device";
		case TimeDomainEXT::clockMonotonic: return "clockMonotonic";
		case TimeDomainEXT::clockMonotonicRaw: return "clockMonotonicRaw";
		case TimeDomainEXT::queryPerformanceCounter: return "queryPerformanceCounter";
		default: return nullptr;
	}
}
inline const char* name(QueueGlobalPriorityKHR val) {
	switch(val) {
		case QueueGlobalPriorityKHR::low: return "low";
		case QueueGlobalPriorityKHR::medium: return "medium";
		case QueueGlobalPriorityKHR::high: return "high";
		case QueueGlobalPriorityKHR::realtime: return "realtime";
		default: return nullptr;
	}
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
inline const char* name(ComponentTypeNV val) {
	switch(val) {
		case ComponentTypeNV::float16: return "float16";
		case ComponentTypeNV::float32: return "float32";
		case ComponentTypeNV::float64: return "float64";
		case ComponentTypeNV::sint8: return "sint8";
		case ComponentTypeNV::sint16: return "sint16";
		case ComponentTypeNV::sint32: return "sint32";
		case ComponentTypeNV::sint64: return "sint64";
		case ComponentTypeNV::uint8: return "uint8";
		case ComponentTypeNV::uint16: return "uint16";
		case ComponentTypeNV::uint32: return "uint32";
		case ComponentTypeNV::uint64: return "uint64";
		default: return nullptr;
	}
}
inline const char* name(ScopeNV val) {
	switch(val) {
		case ScopeNV::device: return "device";
		case ScopeNV::workgroup: return "workgroup";
		case ScopeNV::subgroup: return "subgroup";
		case ScopeNV::queueFamily: return "queueFamily";
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

inline const char* name(LineRasterizationModeEXT val) {
	switch(val) {
		case LineRasterizationModeEXT::eDefault: return "eDefault";
		case LineRasterizationModeEXT::rectangular: return "rectangular";
		case LineRasterizationModeEXT::bresenham: return "bresenham";
		case LineRasterizationModeEXT::rectangularSmooth: return "rectangularSmooth";
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
inline const char* name(DeviceDiagnosticsConfigBitsNV val) {
	switch(val) {
		case DeviceDiagnosticsConfigBitsNV::enableShaderDebugInfo: return "enableShaderDebugInfo";
		case DeviceDiagnosticsConfigBitsNV::enableResourceTracking: return "enableResourceTracking";
		case DeviceDiagnosticsConfigBitsNV::enableAutomaticCheckpoints: return "enableAutomaticCheckpoints";
		default: return nullptr;
	}
}
inline std::string name(DeviceDiagnosticsConfigFlagsNV val) {
	std::string ret;
	if((val & DeviceDiagnosticsConfigBitsNV::enableShaderDebugInfo) == DeviceDiagnosticsConfigBitsNV::enableShaderDebugInfo) ret += "enableShaderDebugInfo | ";
	if((val & DeviceDiagnosticsConfigBitsNV::enableResourceTracking) == DeviceDiagnosticsConfigBitsNV::enableResourceTracking) ret += "enableResourceTracking | ";
	if((val & DeviceDiagnosticsConfigBitsNV::enableAutomaticCheckpoints) == DeviceDiagnosticsConfigBitsNV::enableAutomaticCheckpoints) ret += "enableAutomaticCheckpoints | ";
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
inline const char* name(AccelerationStructureMotionInstanceTypeNV val) {
	switch(val) {
		case AccelerationStructureMotionInstanceTypeNV::eStatic: return "eStatic";
		case AccelerationStructureMotionInstanceTypeNV::matrixMotion: return "matrixMotion";
		case AccelerationStructureMotionInstanceTypeNV::srtMotion: return "srtMotion";
		default: return nullptr;
	}
}

#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
#endif //VK_USE_PLATFORM_DIRECTFB_EXT


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


} // namespace vk

// The specification (vk.xml) itself is published under the following license:

// Copyright 2015-2022 The Khronos Group Inc.
// SPDX-License-Identifier: Apache-2.0 OR MIT
    