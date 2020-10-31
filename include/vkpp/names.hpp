// Copyright (c) 2020 nyorain
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

// Automaitcally generated vulkan header, see nyorain/vkpp
// Do not edit manually, rather edit the codegen files.

#pragma once

#include <vkpp/fwd.hpp>
#include <vkpp/enums.hpp>
#include <string>

// Generated for vulkan version: 1.1.108

namespace vk {

std::string name(nytl::Flags<DummyEnum>) { return {}; } 

const char* name(Result val) {
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
		case Result::errorOutOfPoolMemory: return "errorOutOfPoolMemory";
		case Result::errorInvalidExternalHandle: return "errorInvalidExternalHandle";
		case Result::errorSurfaceLostKHR: return "errorSurfaceLostKHR";
		case Result::errorNativeWindowInUseKHR: return "errorNativeWindowInUseKHR";
		case Result::suboptimalKHR: return "suboptimalKHR";
		case Result::errorOutOfDateKHR: return "errorOutOfDateKHR";
		case Result::errorIncompatibleDisplayKHR: return "errorIncompatibleDisplayKHR";
		case Result::errorValidationFailedEXT: return "errorValidationFailedEXT";
		case Result::errorInvalidShaderNV: return "errorInvalidShaderNV";
		case Result::errorInvalidDrmFormatModifierPlaneLayoutEXT: return "errorInvalidDrmFormatModifierPlaneLayoutEXT";
		case Result::errorFragmentationEXT: return "errorFragmentationEXT";
		case Result::errorNotPermittedEXT: return "errorNotPermittedEXT";
		case Result::errorInvalidDeviceAddressEXT: return "errorInvalidDeviceAddressEXT";
		case Result::errorFullScreenExclusiveModeLostEXT: return "errorFullScreenExclusiveModeLostEXT";
		default: return nullptr;
	}
}
const char* name(StructureType val) {
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
		case StructureType::physicalDeviceFloat16Int8FeaturesKHR: return "physicalDeviceFloat16Int8FeaturesKHR";
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
		case StructureType::attachmentDescription2KHR: return "attachmentDescription2KHR";
		case StructureType::attachmentReference2KHR: return "attachmentReference2KHR";
		case StructureType::subpassDescription2KHR: return "subpassDescription2KHR";
		case StructureType::subpassDependency2KHR: return "subpassDependency2KHR";
		case StructureType::renderPassCreateInfo2KHR: return "renderPassCreateInfo2KHR";
		case StructureType::subpassBeginInfoKHR: return "subpassBeginInfoKHR";
		case StructureType::subpassEndInfoKHR: return "subpassEndInfoKHR";
		case StructureType::sharedPresentSurfaceCapabilitiesKHR: return "sharedPresentSurfaceCapabilitiesKHR";
		case StructureType::importFenceWin32HandleInfoKHR: return "importFenceWin32HandleInfoKHR";
		case StructureType::exportFenceWin32HandleInfoKHR: return "exportFenceWin32HandleInfoKHR";
		case StructureType::fenceGetWin32HandleInfoKHR: return "fenceGetWin32HandleInfoKHR";
		case StructureType::importFenceFdInfoKHR: return "importFenceFdInfoKHR";
		case StructureType::fenceGetFdInfoKHR: return "fenceGetFdInfoKHR";
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
		case StructureType::physicalDeviceSamplerFilterMinmaxPropertiesEXT: return "physicalDeviceSamplerFilterMinmaxPropertiesEXT";
		case StructureType::samplerReductionModeCreateInfoEXT: return "samplerReductionModeCreateInfoEXT";
		case StructureType::physicalDeviceInlineUniformBlockFeaturesEXT: return "physicalDeviceInlineUniformBlockFeaturesEXT";
		case StructureType::physicalDeviceInlineUniformBlockPropertiesEXT: return "physicalDeviceInlineUniformBlockPropertiesEXT";
		case StructureType::writeDescriptorSetInlineUniformBlockEXT: return "writeDescriptorSetInlineUniformBlockEXT";
		case StructureType::descriptorPoolInlineUniformBlockCreateInfoEXT: return "descriptorPoolInlineUniformBlockCreateInfoEXT";
		case StructureType::sampleLocationsInfoEXT: return "sampleLocationsInfoEXT";
		case StructureType::renderPassSampleLocationsBeginInfoEXT: return "renderPassSampleLocationsBeginInfoEXT";
		case StructureType::pipelineSampleLocationsStateCreateInfoEXT: return "pipelineSampleLocationsStateCreateInfoEXT";
		case StructureType::physicalDeviceSampleLocationsPropertiesEXT: return "physicalDeviceSampleLocationsPropertiesEXT";
		case StructureType::multisamplePropertiesEXT: return "multisamplePropertiesEXT";
		case StructureType::imageFormatListCreateInfoKHR: return "imageFormatListCreateInfoKHR";
		case StructureType::physicalDeviceBlendOperationAdvancedFeaturesEXT: return "physicalDeviceBlendOperationAdvancedFeaturesEXT";
		case StructureType::physicalDeviceBlendOperationAdvancedPropertiesEXT: return "physicalDeviceBlendOperationAdvancedPropertiesEXT";
		case StructureType::pipelineColorBlendAdvancedStateCreateInfoEXT: return "pipelineColorBlendAdvancedStateCreateInfoEXT";
		case StructureType::pipelineCoverageToColorStateCreateInfoNV: return "pipelineCoverageToColorStateCreateInfoNV";
		case StructureType::pipelineCoverageModulationStateCreateInfoNV: return "pipelineCoverageModulationStateCreateInfoNV";
		case StructureType::drmFormatModifierPropertiesListEXT: return "drmFormatModifierPropertiesListEXT";
		case StructureType::drmFormatModifierPropertiesEXT: return "drmFormatModifierPropertiesEXT";
		case StructureType::physicalDeviceImageDrmFormatModifierInfoEXT: return "physicalDeviceImageDrmFormatModifierInfoEXT";
		case StructureType::imageDrmFormatModifierListCreateInfoEXT: return "imageDrmFormatModifierListCreateInfoEXT";
		case StructureType::imageDrmFormatModifierExplicitCreateInfoEXT: return "imageDrmFormatModifierExplicitCreateInfoEXT";
		case StructureType::imageDrmFormatModifierPropertiesEXT: return "imageDrmFormatModifierPropertiesEXT";
		case StructureType::validationCacheCreateInfoEXT: return "validationCacheCreateInfoEXT";
		case StructureType::shaderModuleValidationCacheCreateInfoEXT: return "shaderModuleValidationCacheCreateInfoEXT";
		case StructureType::descriptorSetLayoutBindingFlagsCreateInfoEXT: return "descriptorSetLayoutBindingFlagsCreateInfoEXT";
		case StructureType::physicalDeviceDescriptorIndexingFeaturesEXT: return "physicalDeviceDescriptorIndexingFeaturesEXT";
		case StructureType::physicalDeviceDescriptorIndexingPropertiesEXT: return "physicalDeviceDescriptorIndexingPropertiesEXT";
		case StructureType::descriptorSetVariableDescriptorCountAllocateInfoEXT: return "descriptorSetVariableDescriptorCountAllocateInfoEXT";
		case StructureType::descriptorSetVariableDescriptorCountLayoutSupportEXT: return "descriptorSetVariableDescriptorCountLayoutSupportEXT";
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
		case StructureType::deviceQueueGlobalPriorityCreateInfoEXT: return "deviceQueueGlobalPriorityCreateInfoEXT";
		case StructureType::physicalDevice8bitStorageFeaturesKHR: return "physicalDevice8bitStorageFeaturesKHR";
		case StructureType::importMemoryHostPointerInfoEXT: return "importMemoryHostPointerInfoEXT";
		case StructureType::memoryHostPointerPropertiesEXT: return "memoryHostPointerPropertiesEXT";
		case StructureType::physicalDeviceExternalMemoryHostPropertiesEXT: return "physicalDeviceExternalMemoryHostPropertiesEXT";
		case StructureType::physicalDeviceShaderAtomicInt64FeaturesKHR: return "physicalDeviceShaderAtomicInt64FeaturesKHR";
		case StructureType::calibratedTimestampInfoEXT: return "calibratedTimestampInfoEXT";
		case StructureType::physicalDeviceShaderCorePropertiesAMD: return "physicalDeviceShaderCorePropertiesAMD";
		case StructureType::deviceMemoryOverallocationCreateInfoAMD: return "deviceMemoryOverallocationCreateInfoAMD";
		case StructureType::physicalDeviceVertexAttributeDivisorPropertiesEXT: return "physicalDeviceVertexAttributeDivisorPropertiesEXT";
		case StructureType::pipelineVertexInputDivisorStateCreateInfoEXT: return "pipelineVertexInputDivisorStateCreateInfoEXT";
		case StructureType::physicalDeviceVertexAttributeDivisorFeaturesEXT: return "physicalDeviceVertexAttributeDivisorFeaturesEXT";
		case StructureType::presentFrameTokenGGP: return "presentFrameTokenGGP";
		case StructureType::pipelineCreationFeedbackCreateInfoEXT: return "pipelineCreationFeedbackCreateInfoEXT";
		case StructureType::physicalDeviceDriverPropertiesKHR: return "physicalDeviceDriverPropertiesKHR";
		case StructureType::physicalDeviceFloatControlsPropertiesKHR: return "physicalDeviceFloatControlsPropertiesKHR";
		case StructureType::physicalDeviceDepthStencilResolvePropertiesKHR: return "physicalDeviceDepthStencilResolvePropertiesKHR";
		case StructureType::subpassDescriptionDepthStencilResolveKHR: return "subpassDescriptionDepthStencilResolveKHR";
		case StructureType::physicalDeviceComputeShaderDerivativesFeaturesNV: return "physicalDeviceComputeShaderDerivativesFeaturesNV";
		case StructureType::physicalDeviceMeshShaderFeaturesNV: return "physicalDeviceMeshShaderFeaturesNV";
		case StructureType::physicalDeviceMeshShaderPropertiesNV: return "physicalDeviceMeshShaderPropertiesNV";
		case StructureType::physicalDeviceFragmentShaderBarycentricFeaturesNV: return "physicalDeviceFragmentShaderBarycentricFeaturesNV";
		case StructureType::physicalDeviceShaderImageFootprintFeaturesNV: return "physicalDeviceShaderImageFootprintFeaturesNV";
		case StructureType::pipelineViewportExclusiveScissorStateCreateInfoNV: return "pipelineViewportExclusiveScissorStateCreateInfoNV";
		case StructureType::physicalDeviceExclusiveScissorFeaturesNV: return "physicalDeviceExclusiveScissorFeaturesNV";
		case StructureType::checkpointDataNV: return "checkpointDataNV";
		case StructureType::queueFamilyCheckpointPropertiesNV: return "queueFamilyCheckpointPropertiesNV";
		case StructureType::physicalDeviceVulkanMemoryModelFeaturesKHR: return "physicalDeviceVulkanMemoryModelFeaturesKHR";
		case StructureType::physicalDevicePciBusInfoPropertiesEXT: return "physicalDevicePciBusInfoPropertiesEXT";
		case StructureType::displayNativeHdrSurfaceCapabilitiesAMD: return "displayNativeHdrSurfaceCapabilitiesAMD";
		case StructureType::swapchainDisplayNativeHdrCreateInfoAMD: return "swapchainDisplayNativeHdrCreateInfoAMD";
		case StructureType::imagepipeSurfaceCreateInfoFUCHSIA: return "imagepipeSurfaceCreateInfoFUCHSIA";
		case StructureType::physicalDeviceFragmentDensityMapFeaturesEXT: return "physicalDeviceFragmentDensityMapFeaturesEXT";
		case StructureType::physicalDeviceFragmentDensityMapPropertiesEXT: return "physicalDeviceFragmentDensityMapPropertiesEXT";
		case StructureType::renderPassFragmentDensityMapCreateInfoEXT: return "renderPassFragmentDensityMapCreateInfoEXT";
		case StructureType::physicalDeviceScalarBlockLayoutFeaturesEXT: return "physicalDeviceScalarBlockLayoutFeaturesEXT";
		case StructureType::physicalDeviceMemoryBudgetPropertiesEXT: return "physicalDeviceMemoryBudgetPropertiesEXT";
		case StructureType::physicalDeviceMemoryPriorityFeaturesEXT: return "physicalDeviceMemoryPriorityFeaturesEXT";
		case StructureType::memoryPriorityAllocateInfoEXT: return "memoryPriorityAllocateInfoEXT";
		case StructureType::surfaceProtectedCapabilitiesKHR: return "surfaceProtectedCapabilitiesKHR";
		case StructureType::physicalDeviceDedicatedAllocationImageAliasingFeaturesNV: return "physicalDeviceDedicatedAllocationImageAliasingFeaturesNV";
		case StructureType::physicalDeviceBufferDeviceAddressFeaturesEXT: return "physicalDeviceBufferDeviceAddressFeaturesEXT";
		case StructureType::bufferDeviceAddressInfoEXT: return "bufferDeviceAddressInfoEXT";
		case StructureType::bufferDeviceAddressCreateInfoEXT: return "bufferDeviceAddressCreateInfoEXT";
		case StructureType::imageStencilUsageCreateInfoEXT: return "imageStencilUsageCreateInfoEXT";
		case StructureType::validationFeaturesEXT: return "validationFeaturesEXT";
		case StructureType::physicalDeviceCooperativeMatrixFeaturesNV: return "physicalDeviceCooperativeMatrixFeaturesNV";
		case StructureType::cooperativeMatrixPropertiesNV: return "cooperativeMatrixPropertiesNV";
		case StructureType::physicalDeviceCooperativeMatrixPropertiesNV: return "physicalDeviceCooperativeMatrixPropertiesNV";
		case StructureType::physicalDeviceCoverageReductionModeFeaturesNV: return "physicalDeviceCoverageReductionModeFeaturesNV";
		case StructureType::pipelineCoverageReductionStateCreateInfoNV: return "pipelineCoverageReductionStateCreateInfoNV";
		case StructureType::framebufferMixedSamplesCombinationNV: return "framebufferMixedSamplesCombinationNV";
		case StructureType::physicalDeviceYcbcrImageArraysFeaturesEXT: return "physicalDeviceYcbcrImageArraysFeaturesEXT";
		case StructureType::physicalDeviceUniformBufferStandardLayoutFeaturesKHR: return "physicalDeviceUniformBufferStandardLayoutFeaturesKHR";
		case StructureType::surfaceFullScreenExclusiveInfoEXT: return "surfaceFullScreenExclusiveInfoEXT";
		case StructureType::surfaceCapabilitiesFullScreenExclusiveEXT: return "surfaceCapabilitiesFullScreenExclusiveEXT";
		case StructureType::surfaceFullScreenExclusiveWin32InfoEXT: return "surfaceFullScreenExclusiveWin32InfoEXT";
		case StructureType::headlessSurfaceCreateInfoEXT: return "headlessSurfaceCreateInfoEXT";
		case StructureType::physicalDeviceHostQueryResetFeaturesEXT: return "physicalDeviceHostQueryResetFeaturesEXT";
		default: return nullptr;
	}
}
const char* name(ShaderStageBits val) {
	switch(val) {
		case ShaderStageBits::vertex: return "vertex";
		case ShaderStageBits::tessellationControl: return "tessellationControl";
		case ShaderStageBits::tessellationEvaluation: return "tessellationEvaluation";
		case ShaderStageBits::geometry: return "geometry";
		case ShaderStageBits::fragment: return "fragment";
		case ShaderStageBits::compute: return "compute";
		case ShaderStageBits::allGraphics: return "allGraphics";
		case ShaderStageBits::all: return "all";
		case ShaderStageBits::raygenNV: return "raygenNV";
		case ShaderStageBits::anyHitNV: return "anyHitNV";
		case ShaderStageBits::closestHitNV: return "closestHitNV";
		case ShaderStageBits::missNV: return "missNV";
		case ShaderStageBits::intersectionNV: return "intersectionNV";
		case ShaderStageBits::callableNV: return "callableNV";
		case ShaderStageBits::taskNV: return "taskNV";
		case ShaderStageBits::meshNV: return "meshNV";
		default: return nullptr;
	}
}
const char* name(SubgroupFeatureBits val) {
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
const char* name(PeerMemoryFeatureBits val) {
	switch(val) {
		case PeerMemoryFeatureBits::copySrc: return "copySrc";
		case PeerMemoryFeatureBits::copyDst: return "copyDst";
		case PeerMemoryFeatureBits::genericSrc: return "genericSrc";
		case PeerMemoryFeatureBits::genericDst: return "genericDst";
		default: return nullptr;
	}
}
const char* name(MemoryAllocateBits val) {
	switch(val) {
		case MemoryAllocateBits::deviceMask: return "deviceMask";
		default: return nullptr;
	}
}
const char* name(ImageAspectBits val) {
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
const char* name(SparseImageFormatBits val) {
	switch(val) {
		case SparseImageFormatBits::singleMiptail: return "singleMiptail";
		case SparseImageFormatBits::alignedMipSize: return "alignedMipSize";
		case SparseImageFormatBits::nonstandardBlockSize: return "nonstandardBlockSize";
		default: return nullptr;
	}
}
const char* name(PhysicalDeviceType val) {
	switch(val) {
		case PhysicalDeviceType::other: return "other";
		case PhysicalDeviceType::integratedGpu: return "integratedGpu";
		case PhysicalDeviceType::discreteGpu: return "discreteGpu";
		case PhysicalDeviceType::virtualGpu: return "virtualGpu";
		case PhysicalDeviceType::cpu: return "cpu";
		default: return nullptr;
	}
}
const char* name(SampleCountBits val) {
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
const char* name(FormatFeatureBits val) {
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
		case FormatFeatureBits::sampledImageFilterCubicIMG: return "sampledImageFilterCubicIMG";
		case FormatFeatureBits::sampledImageFilterMinmaxEXT: return "sampledImageFilterMinmaxEXT";
		case FormatFeatureBits::fragmentDensityMapEXT: return "fragmentDensityMapEXT";
		default: return nullptr;
	}
}
const char* name(Format val) {
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
const char* name(ImageType val) {
	switch(val) {
		case ImageType::e1d: return "e1d";
		case ImageType::e2d: return "e2d";
		case ImageType::e3d: return "e3d";
		default: return nullptr;
	}
}
const char* name(ImageTiling val) {
	switch(val) {
		case ImageTiling::optimal: return "optimal";
		case ImageTiling::linear: return "linear";
		case ImageTiling::drmFormatModifierEXT: return "drmFormatModifierEXT";
		default: return nullptr;
	}
}
const char* name(ImageUsageBits val) {
	switch(val) {
		case ImageUsageBits::transferSrc: return "transferSrc";
		case ImageUsageBits::transferDst: return "transferDst";
		case ImageUsageBits::sampled: return "sampled";
		case ImageUsageBits::storage: return "storage";
		case ImageUsageBits::colorAttachment: return "colorAttachment";
		case ImageUsageBits::depthStencilAttachment: return "depthStencilAttachment";
		case ImageUsageBits::transientAttachment: return "transientAttachment";
		case ImageUsageBits::inputAttachment: return "inputAttachment";
		case ImageUsageBits::shadingRateImageNV: return "shadingRateImageNV";
		case ImageUsageBits::fragmentDensityMapEXT: return "fragmentDensityMapEXT";
		default: return nullptr;
	}
}
const char* name(ImageCreateBits val) {
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
		default: return nullptr;
	}
}
const char* name(QueueBits val) {
	switch(val) {
		case QueueBits::graphics: return "graphics";
		case QueueBits::compute: return "compute";
		case QueueBits::transfer: return "transfer";
		case QueueBits::sparseBinding: return "sparseBinding";
		case QueueBits::eProtected: return "eProtected";
		default: return nullptr;
	}
}
const char* name(MemoryPropertyBits val) {
	switch(val) {
		case MemoryPropertyBits::deviceLocal: return "deviceLocal";
		case MemoryPropertyBits::hostVisible: return "hostVisible";
		case MemoryPropertyBits::hostCoherent: return "hostCoherent";
		case MemoryPropertyBits::hostCached: return "hostCached";
		case MemoryPropertyBits::lazilyAllocated: return "lazilyAllocated";
		case MemoryPropertyBits::eProtected: return "eProtected";
		default: return nullptr;
	}
}
const char* name(MemoryHeapBits val) {
	switch(val) {
		case MemoryHeapBits::deviceLocal: return "deviceLocal";
		case MemoryHeapBits::multiInstance: return "multiInstance";
		default: return nullptr;
	}
}
const char* name(PointClippingBehavior val) {
	switch(val) {
		case PointClippingBehavior::allClipPlanes: return "allClipPlanes";
		case PointClippingBehavior::userClipPlanesOnly: return "userClipPlanesOnly";
		default: return nullptr;
	}
}
const char* name(TessellationDomainOrigin val) {
	switch(val) {
		case TessellationDomainOrigin::upperLeft: return "upperLeft";
		case TessellationDomainOrigin::lowerLeft: return "lowerLeft";
		default: return nullptr;
	}
}
const char* name(DeviceQueueCreateBits val) {
	switch(val) {
		case DeviceQueueCreateBits::eProtected: return "eProtected";
		default: return nullptr;
	}
}
const char* name(SamplerYcbcrModelConversion val) {
	switch(val) {
		case SamplerYcbcrModelConversion::rgbIDentity: return "rgbIDentity";
		case SamplerYcbcrModelConversion::ycbcrIDentity: return "ycbcrIDentity";
		case SamplerYcbcrModelConversion::ycbcr709: return "ycbcr709";
		case SamplerYcbcrModelConversion::ycbcr601: return "ycbcr601";
		case SamplerYcbcrModelConversion::ycbcr2020: return "ycbcr2020";
		default: return nullptr;
	}
}
const char* name(SamplerYcbcrRange val) {
	switch(val) {
		case SamplerYcbcrRange::ituFull: return "ituFull";
		case SamplerYcbcrRange::ituNarrow: return "ituNarrow";
		default: return nullptr;
	}
}
const char* name(ComponentSwizzle val) {
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
const char* name(ChromaLocation val) {
	switch(val) {
		case ChromaLocation::cositedEven: return "cositedEven";
		case ChromaLocation::midpoint: return "midpoint";
		default: return nullptr;
	}
}
const char* name(Filter val) {
	switch(val) {
		case Filter::nearest: return "nearest";
		case Filter::linear: return "linear";
		case Filter::cubicIMG: return "cubicIMG";
		default: return nullptr;
	}
}
const char* name(SystemAllocationScope val) {
	switch(val) {
		case SystemAllocationScope::command: return "command";
		case SystemAllocationScope::object: return "object";
		case SystemAllocationScope::cache: return "cache";
		case SystemAllocationScope::device: return "device";
		case SystemAllocationScope::instance: return "instance";
		default: return nullptr;
	}
}
const char* name(InternalAllocationType val) {
	switch(val) {
		case InternalAllocationType::executable: return "executable";
		default: return nullptr;
	}
}
const char* name(DescriptorUpdateTemplateType val) {
	switch(val) {
		case DescriptorUpdateTemplateType::descriptorSet: return "descriptorSet";
		case DescriptorUpdateTemplateType::pushDescriptorsKHR: return "pushDescriptorsKHR";
		default: return nullptr;
	}
}
const char* name(DescriptorType val) {
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
		case DescriptorType::inlineUniformBlockEXT: return "inlineUniformBlockEXT";
		case DescriptorType::accelerationStructureNV: return "accelerationStructureNV";
		default: return nullptr;
	}
}
const char* name(PipelineBindPoint val) {
	switch(val) {
		case PipelineBindPoint::graphics: return "graphics";
		case PipelineBindPoint::compute: return "compute";
		case PipelineBindPoint::rayTracingNV: return "rayTracingNV";
		default: return nullptr;
	}
}
const char* name(ExternalMemoryHandleTypeBits val) {
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
		default: return nullptr;
	}
}
const char* name(ExternalMemoryFeatureBits val) {
	switch(val) {
		case ExternalMemoryFeatureBits::dedicatedOnly: return "dedicatedOnly";
		case ExternalMemoryFeatureBits::exportable: return "exportable";
		case ExternalMemoryFeatureBits::importable: return "importable";
		default: return nullptr;
	}
}
const char* name(BufferCreateBits val) {
	switch(val) {
		case BufferCreateBits::sparseBinding: return "sparseBinding";
		case BufferCreateBits::sparseResidency: return "sparseResidency";
		case BufferCreateBits::sparseAliased: return "sparseAliased";
		case BufferCreateBits::eProtected: return "eProtected";
		case BufferCreateBits::deviceAddressCaptureReplayEXT: return "deviceAddressCaptureReplayEXT";
		default: return nullptr;
	}
}
const char* name(BufferUsageBits val) {
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
		case BufferUsageBits::transformFeedbackBufferEXT: return "transformFeedbackBufferEXT";
		case BufferUsageBits::transformFeedbackCounterBufferEXT: return "transformFeedbackCounterBufferEXT";
		case BufferUsageBits::conditionalRenderingEXT: return "conditionalRenderingEXT";
		case BufferUsageBits::rayTracingNV: return "rayTracingNV";
		case BufferUsageBits::shaderDeviceAddressEXT: return "shaderDeviceAddressEXT";
		default: return nullptr;
	}
}
const char* name(ExternalFenceHandleTypeBits val) {
	switch(val) {
		case ExternalFenceHandleTypeBits::opaqueFd: return "opaqueFd";
		case ExternalFenceHandleTypeBits::opaqueWin32: return "opaqueWin32";
		case ExternalFenceHandleTypeBits::opaqueWin32Kmt: return "opaqueWin32Kmt";
		case ExternalFenceHandleTypeBits::syncFd: return "syncFd";
		default: return nullptr;
	}
}
const char* name(ExternalFenceFeatureBits val) {
	switch(val) {
		case ExternalFenceFeatureBits::exportable: return "exportable";
		case ExternalFenceFeatureBits::importable: return "importable";
		default: return nullptr;
	}
}
const char* name(FenceImportBits val) {
	switch(val) {
		case FenceImportBits::temporary: return "temporary";
		default: return nullptr;
	}
}
const char* name(SemaphoreImportBits val) {
	switch(val) {
		case SemaphoreImportBits::temporary: return "temporary";
		default: return nullptr;
	}
}
const char* name(ExternalSemaphoreHandleTypeBits val) {
	switch(val) {
		case ExternalSemaphoreHandleTypeBits::opaqueFd: return "opaqueFd";
		case ExternalSemaphoreHandleTypeBits::opaqueWin32: return "opaqueWin32";
		case ExternalSemaphoreHandleTypeBits::opaqueWin32Kmt: return "opaqueWin32Kmt";
		case ExternalSemaphoreHandleTypeBits::d3d12Fence: return "d3d12Fence";
		case ExternalSemaphoreHandleTypeBits::syncFd: return "syncFd";
		default: return nullptr;
	}
}
const char* name(ExternalSemaphoreFeatureBits val) {
	switch(val) {
		case ExternalSemaphoreFeatureBits::exportable: return "exportable";
		case ExternalSemaphoreFeatureBits::importable: return "importable";
		default: return nullptr;
	}
}
const char* name(DescriptorSetLayoutCreateBits val) {
	switch(val) {
		case DescriptorSetLayoutCreateBits::pushDescriptorKHR: return "pushDescriptorKHR";
		case DescriptorSetLayoutCreateBits::updateAfterBindPoolEXT: return "updateAfterBindPoolEXT";
		default: return nullptr;
	}
}
std::string name(ShaderStageFlags val) {
	std::string ret;
	if((val & ShaderStageBits::vertex)) ret += "vertex | ";
	if((val & ShaderStageBits::tessellationControl)) ret += "tessellationControl | ";
	if((val & ShaderStageBits::tessellationEvaluation)) ret += "tessellationEvaluation | ";
	if((val & ShaderStageBits::geometry)) ret += "geometry | ";
	if((val & ShaderStageBits::fragment)) ret += "fragment | ";
	if((val & ShaderStageBits::compute)) ret += "compute | ";
	if((val & ShaderStageBits::allGraphics)) ret += "allGraphics | ";
	if((val & ShaderStageBits::all)) ret += "all | ";
	if((val & ShaderStageBits::raygenNV)) ret += "raygenNV | ";
	if((val & ShaderStageBits::anyHitNV)) ret += "anyHitNV | ";
	if((val & ShaderStageBits::closestHitNV)) ret += "closestHitNV | ";
	if((val & ShaderStageBits::missNV)) ret += "missNV | ";
	if((val & ShaderStageBits::intersectionNV)) ret += "intersectionNV | ";
	if((val & ShaderStageBits::callableNV)) ret += "callableNV | ";
	if((val & ShaderStageBits::taskNV)) ret += "taskNV | ";
	if((val & ShaderStageBits::meshNV)) ret += "meshNV | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
std::string name(SubgroupFeatureFlags val) {
	std::string ret;
	if((val & SubgroupFeatureBits::basic)) ret += "basic | ";
	if((val & SubgroupFeatureBits::vote)) ret += "vote | ";
	if((val & SubgroupFeatureBits::arithmetic)) ret += "arithmetic | ";
	if((val & SubgroupFeatureBits::ballot)) ret += "ballot | ";
	if((val & SubgroupFeatureBits::shuffle)) ret += "shuffle | ";
	if((val & SubgroupFeatureBits::shuffleRelative)) ret += "shuffleRelative | ";
	if((val & SubgroupFeatureBits::clustered)) ret += "clustered | ";
	if((val & SubgroupFeatureBits::quad)) ret += "quad | ";
	if((val & SubgroupFeatureBits::partitionedNV)) ret += "partitionedNV | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
std::string name(PeerMemoryFeatureFlags val) {
	std::string ret;
	if((val & PeerMemoryFeatureBits::copySrc)) ret += "copySrc | ";
	if((val & PeerMemoryFeatureBits::copyDst)) ret += "copyDst | ";
	if((val & PeerMemoryFeatureBits::genericSrc)) ret += "genericSrc | ";
	if((val & PeerMemoryFeatureBits::genericDst)) ret += "genericDst | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
std::string name(MemoryAllocateFlags val) {
	std::string ret;
	if((val & MemoryAllocateBits::deviceMask)) ret += "deviceMask | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
std::string name(ImageAspectFlags val) {
	std::string ret;
	if((val & ImageAspectBits::color)) ret += "color | ";
	if((val & ImageAspectBits::depth)) ret += "depth | ";
	if((val & ImageAspectBits::stencil)) ret += "stencil | ";
	if((val & ImageAspectBits::metadata)) ret += "metadata | ";
	if((val & ImageAspectBits::plane0)) ret += "plane0 | ";
	if((val & ImageAspectBits::plane1)) ret += "plane1 | ";
	if((val & ImageAspectBits::plane2)) ret += "plane2 | ";
	if((val & ImageAspectBits::memoryPlane0EXT)) ret += "memoryPlane0EXT | ";
	if((val & ImageAspectBits::memoryPlane1EXT)) ret += "memoryPlane1EXT | ";
	if((val & ImageAspectBits::memoryPlane2EXT)) ret += "memoryPlane2EXT | ";
	if((val & ImageAspectBits::memoryPlane3EXT)) ret += "memoryPlane3EXT | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
std::string name(SparseImageFormatFlags val) {
	std::string ret;
	if((val & SparseImageFormatBits::singleMiptail)) ret += "singleMiptail | ";
	if((val & SparseImageFormatBits::alignedMipSize)) ret += "alignedMipSize | ";
	if((val & SparseImageFormatBits::nonstandardBlockSize)) ret += "nonstandardBlockSize | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
std::string name(SampleCountFlags val) {
	std::string ret;
	if((val & SampleCountBits::e1)) ret += "e1 | ";
	if((val & SampleCountBits::e2)) ret += "e2 | ";
	if((val & SampleCountBits::e4)) ret += "e4 | ";
	if((val & SampleCountBits::e8)) ret += "e8 | ";
	if((val & SampleCountBits::e16)) ret += "e16 | ";
	if((val & SampleCountBits::e32)) ret += "e32 | ";
	if((val & SampleCountBits::e64)) ret += "e64 | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
std::string name(FormatFeatureFlags val) {
	std::string ret;
	if((val & FormatFeatureBits::sampledImage)) ret += "sampledImage | ";
	if((val & FormatFeatureBits::storageImage)) ret += "storageImage | ";
	if((val & FormatFeatureBits::storageImageAtomic)) ret += "storageImageAtomic | ";
	if((val & FormatFeatureBits::uniformTexelBuffer)) ret += "uniformTexelBuffer | ";
	if((val & FormatFeatureBits::storageTexelBuffer)) ret += "storageTexelBuffer | ";
	if((val & FormatFeatureBits::storageTexelBufferAtomic)) ret += "storageTexelBufferAtomic | ";
	if((val & FormatFeatureBits::vertexBuffer)) ret += "vertexBuffer | ";
	if((val & FormatFeatureBits::colorAttachment)) ret += "colorAttachment | ";
	if((val & FormatFeatureBits::colorAttachmentBlend)) ret += "colorAttachmentBlend | ";
	if((val & FormatFeatureBits::depthStencilAttachment)) ret += "depthStencilAttachment | ";
	if((val & FormatFeatureBits::blitSrc)) ret += "blitSrc | ";
	if((val & FormatFeatureBits::blitDst)) ret += "blitDst | ";
	if((val & FormatFeatureBits::sampledImageFilterLinear)) ret += "sampledImageFilterLinear | ";
	if((val & FormatFeatureBits::transferSrc)) ret += "transferSrc | ";
	if((val & FormatFeatureBits::transferDst)) ret += "transferDst | ";
	if((val & FormatFeatureBits::midpointChromaSamples)) ret += "midpointChromaSamples | ";
	if((val & FormatFeatureBits::sampledImageYcbcrConversionLinearFilter)) ret += "sampledImageYcbcrConversionLinearFilter | ";
	if((val & FormatFeatureBits::sampledImageYcbcrConversionSeparateReconstructionFilter)) ret += "sampledImageYcbcrConversionSeparateReconstructionFilter | ";
	if((val & FormatFeatureBits::sampledImageYcbcrConversionChromaReconstructionExplicit)) ret += "sampledImageYcbcrConversionChromaReconstructionExplicit | ";
	if((val & FormatFeatureBits::sampledImageYcbcrConversionChromaReconstructionExplicitForceable)) ret += "sampledImageYcbcrConversionChromaReconstructionExplicitForceable | ";
	if((val & FormatFeatureBits::disjoint)) ret += "disjoint | ";
	if((val & FormatFeatureBits::cositedChromaSamples)) ret += "cositedChromaSamples | ";
	if((val & FormatFeatureBits::sampledImageFilterCubicIMG)) ret += "sampledImageFilterCubicIMG | ";
	if((val & FormatFeatureBits::sampledImageFilterMinmaxEXT)) ret += "sampledImageFilterMinmaxEXT | ";
	if((val & FormatFeatureBits::fragmentDensityMapEXT)) ret += "fragmentDensityMapEXT | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
std::string name(ImageUsageFlags val) {
	std::string ret;
	if((val & ImageUsageBits::transferSrc)) ret += "transferSrc | ";
	if((val & ImageUsageBits::transferDst)) ret += "transferDst | ";
	if((val & ImageUsageBits::sampled)) ret += "sampled | ";
	if((val & ImageUsageBits::storage)) ret += "storage | ";
	if((val & ImageUsageBits::colorAttachment)) ret += "colorAttachment | ";
	if((val & ImageUsageBits::depthStencilAttachment)) ret += "depthStencilAttachment | ";
	if((val & ImageUsageBits::transientAttachment)) ret += "transientAttachment | ";
	if((val & ImageUsageBits::inputAttachment)) ret += "inputAttachment | ";
	if((val & ImageUsageBits::shadingRateImageNV)) ret += "shadingRateImageNV | ";
	if((val & ImageUsageBits::fragmentDensityMapEXT)) ret += "fragmentDensityMapEXT | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
std::string name(ImageCreateFlags val) {
	std::string ret;
	if((val & ImageCreateBits::sparseBinding)) ret += "sparseBinding | ";
	if((val & ImageCreateBits::sparseResidency)) ret += "sparseResidency | ";
	if((val & ImageCreateBits::sparseAliased)) ret += "sparseAliased | ";
	if((val & ImageCreateBits::mutableFormat)) ret += "mutableFormat | ";
	if((val & ImageCreateBits::cubeCompatible)) ret += "cubeCompatible | ";
	if((val & ImageCreateBits::alias)) ret += "alias | ";
	if((val & ImageCreateBits::splitInstanceBindRegions)) ret += "splitInstanceBindRegions | ";
	if((val & ImageCreateBits::e2dArrayCompatible)) ret += "e2dArrayCompatible | ";
	if((val & ImageCreateBits::blockTexelViewCompatible)) ret += "blockTexelViewCompatible | ";
	if((val & ImageCreateBits::extendedUsage)) ret += "extendedUsage | ";
	if((val & ImageCreateBits::eProtected)) ret += "eProtected | ";
	if((val & ImageCreateBits::disjoint)) ret += "disjoint | ";
	if((val & ImageCreateBits::cornerSampledNV)) ret += "cornerSampledNV | ";
	if((val & ImageCreateBits::sampleLocationsCompatibleDepthEXT)) ret += "sampleLocationsCompatibleDepthEXT | ";
	if((val & ImageCreateBits::subsampledEXT)) ret += "subsampledEXT | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
std::string name(QueueFlags val) {
	std::string ret;
	if((val & QueueBits::graphics)) ret += "graphics | ";
	if((val & QueueBits::compute)) ret += "compute | ";
	if((val & QueueBits::transfer)) ret += "transfer | ";
	if((val & QueueBits::sparseBinding)) ret += "sparseBinding | ";
	if((val & QueueBits::eProtected)) ret += "eProtected | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
std::string name(MemoryPropertyFlags val) {
	std::string ret;
	if((val & MemoryPropertyBits::deviceLocal)) ret += "deviceLocal | ";
	if((val & MemoryPropertyBits::hostVisible)) ret += "hostVisible | ";
	if((val & MemoryPropertyBits::hostCoherent)) ret += "hostCoherent | ";
	if((val & MemoryPropertyBits::hostCached)) ret += "hostCached | ";
	if((val & MemoryPropertyBits::lazilyAllocated)) ret += "lazilyAllocated | ";
	if((val & MemoryPropertyBits::eProtected)) ret += "eProtected | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
std::string name(MemoryHeapFlags val) {
	std::string ret;
	if((val & MemoryHeapBits::deviceLocal)) ret += "deviceLocal | ";
	if((val & MemoryHeapBits::multiInstance)) ret += "multiInstance | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
std::string name(DeviceQueueCreateFlags val) {
	std::string ret;
	if((val & DeviceQueueCreateBits::eProtected)) ret += "eProtected | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
std::string name(ExternalMemoryHandleTypeFlags val) {
	std::string ret;
	if((val & ExternalMemoryHandleTypeBits::opaqueFd)) ret += "opaqueFd | ";
	if((val & ExternalMemoryHandleTypeBits::opaqueWin32)) ret += "opaqueWin32 | ";
	if((val & ExternalMemoryHandleTypeBits::opaqueWin32Kmt)) ret += "opaqueWin32Kmt | ";
	if((val & ExternalMemoryHandleTypeBits::d3d11Texture)) ret += "d3d11Texture | ";
	if((val & ExternalMemoryHandleTypeBits::d3d11TextureKmt)) ret += "d3d11TextureKmt | ";
	if((val & ExternalMemoryHandleTypeBits::d3d12Heap)) ret += "d3d12Heap | ";
	if((val & ExternalMemoryHandleTypeBits::d3d12Resource)) ret += "d3d12Resource | ";
	if((val & ExternalMemoryHandleTypeBits::dmaBufEXT)) ret += "dmaBufEXT | ";
	if((val & ExternalMemoryHandleTypeBits::hostAllocationEXT)) ret += "hostAllocationEXT | ";
	if((val & ExternalMemoryHandleTypeBits::hostMappedForeignMemoryEXT)) ret += "hostMappedForeignMemoryEXT | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
std::string name(ExternalMemoryFeatureFlags val) {
	std::string ret;
	if((val & ExternalMemoryFeatureBits::dedicatedOnly)) ret += "dedicatedOnly | ";
	if((val & ExternalMemoryFeatureBits::exportable)) ret += "exportable | ";
	if((val & ExternalMemoryFeatureBits::importable)) ret += "importable | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
std::string name(BufferCreateFlags val) {
	std::string ret;
	if((val & BufferCreateBits::sparseBinding)) ret += "sparseBinding | ";
	if((val & BufferCreateBits::sparseResidency)) ret += "sparseResidency | ";
	if((val & BufferCreateBits::sparseAliased)) ret += "sparseAliased | ";
	if((val & BufferCreateBits::eProtected)) ret += "eProtected | ";
	if((val & BufferCreateBits::deviceAddressCaptureReplayEXT)) ret += "deviceAddressCaptureReplayEXT | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
std::string name(BufferUsageFlags val) {
	std::string ret;
	if((val & BufferUsageBits::transferSrc)) ret += "transferSrc | ";
	if((val & BufferUsageBits::transferDst)) ret += "transferDst | ";
	if((val & BufferUsageBits::uniformTexelBuffer)) ret += "uniformTexelBuffer | ";
	if((val & BufferUsageBits::storageTexelBuffer)) ret += "storageTexelBuffer | ";
	if((val & BufferUsageBits::uniformBuffer)) ret += "uniformBuffer | ";
	if((val & BufferUsageBits::storageBuffer)) ret += "storageBuffer | ";
	if((val & BufferUsageBits::indexBuffer)) ret += "indexBuffer | ";
	if((val & BufferUsageBits::vertexBuffer)) ret += "vertexBuffer | ";
	if((val & BufferUsageBits::indirectBuffer)) ret += "indirectBuffer | ";
	if((val & BufferUsageBits::transformFeedbackBufferEXT)) ret += "transformFeedbackBufferEXT | ";
	if((val & BufferUsageBits::transformFeedbackCounterBufferEXT)) ret += "transformFeedbackCounterBufferEXT | ";
	if((val & BufferUsageBits::conditionalRenderingEXT)) ret += "conditionalRenderingEXT | ";
	if((val & BufferUsageBits::rayTracingNV)) ret += "rayTracingNV | ";
	if((val & BufferUsageBits::shaderDeviceAddressEXT)) ret += "shaderDeviceAddressEXT | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
std::string name(ExternalFenceHandleTypeFlags val) {
	std::string ret;
	if((val & ExternalFenceHandleTypeBits::opaqueFd)) ret += "opaqueFd | ";
	if((val & ExternalFenceHandleTypeBits::opaqueWin32)) ret += "opaqueWin32 | ";
	if((val & ExternalFenceHandleTypeBits::opaqueWin32Kmt)) ret += "opaqueWin32Kmt | ";
	if((val & ExternalFenceHandleTypeBits::syncFd)) ret += "syncFd | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
std::string name(ExternalFenceFeatureFlags val) {
	std::string ret;
	if((val & ExternalFenceFeatureBits::exportable)) ret += "exportable | ";
	if((val & ExternalFenceFeatureBits::importable)) ret += "importable | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
std::string name(FenceImportFlags val) {
	std::string ret;
	if((val & FenceImportBits::temporary)) ret += "temporary | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
std::string name(SemaphoreImportFlags val) {
	std::string ret;
	if((val & SemaphoreImportBits::temporary)) ret += "temporary | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
std::string name(ExternalSemaphoreHandleTypeFlags val) {
	std::string ret;
	if((val & ExternalSemaphoreHandleTypeBits::opaqueFd)) ret += "opaqueFd | ";
	if((val & ExternalSemaphoreHandleTypeBits::opaqueWin32)) ret += "opaqueWin32 | ";
	if((val & ExternalSemaphoreHandleTypeBits::opaqueWin32Kmt)) ret += "opaqueWin32Kmt | ";
	if((val & ExternalSemaphoreHandleTypeBits::d3d12Fence)) ret += "d3d12Fence | ";
	if((val & ExternalSemaphoreHandleTypeBits::syncFd)) ret += "syncFd | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
std::string name(ExternalSemaphoreFeatureFlags val) {
	std::string ret;
	if((val & ExternalSemaphoreFeatureBits::exportable)) ret += "exportable | ";
	if((val & ExternalSemaphoreFeatureBits::importable)) ret += "importable | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
std::string name(DescriptorSetLayoutCreateFlags val) {
	std::string ret;
	if((val & DescriptorSetLayoutCreateBits::pushDescriptorKHR)) ret += "pushDescriptorKHR | ";
	if((val & DescriptorSetLayoutCreateBits::updateAfterBindPoolEXT)) ret += "updateAfterBindPoolEXT | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
const char* name(PipelineCacheHeaderVersion val) {
	switch(val) {
		case PipelineCacheHeaderVersion::one: return "one";
		default: return nullptr;
	}
}
const char* name(PipelineStageBits val) {
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
		case PipelineStageBits::shadingRateImageNV: return "shadingRateImageNV";
		case PipelineStageBits::rayTracingShaderNV: return "rayTracingShaderNV";
		case PipelineStageBits::accelerationStructureBuildNV: return "accelerationStructureBuildNV";
		case PipelineStageBits::taskShaderNV: return "taskShaderNV";
		case PipelineStageBits::meshShaderNV: return "meshShaderNV";
		case PipelineStageBits::fragmentDensityProcessEXT: return "fragmentDensityProcessEXT";
		default: return nullptr;
	}
}
const char* name(SparseMemoryBindBits val) {
	switch(val) {
		case SparseMemoryBindBits::metadata: return "metadata";
		default: return nullptr;
	}
}
const char* name(FenceCreateBits val) {
	switch(val) {
		case FenceCreateBits::signaled: return "signaled";
		default: return nullptr;
	}
}
const char* name(QueryType val) {
	switch(val) {
		case QueryType::occlusion: return "occlusion";
		case QueryType::pipelineStatistics: return "pipelineStatistics";
		case QueryType::timestamp: return "timestamp";
		case QueryType::transformFeedbackStreamEXT: return "transformFeedbackStreamEXT";
		case QueryType::accelerationStructureCompactedSizeNV: return "accelerationStructureCompactedSizeNV";
		default: return nullptr;
	}
}
const char* name(QueryPipelineStatisticBits val) {
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
const char* name(QueryResultBits val) {
	switch(val) {
		case QueryResultBits::e64: return "e64";
		case QueryResultBits::wait: return "wait";
		case QueryResultBits::withAvailability: return "withAvailability";
		case QueryResultBits::partial: return "partial";
		default: return nullptr;
	}
}
const char* name(SharingMode val) {
	switch(val) {
		case SharingMode::exclusive: return "exclusive";
		case SharingMode::concurrent: return "concurrent";
		default: return nullptr;
	}
}
const char* name(ImageLayout val) {
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
		case ImageLayout::presentSrcKHR: return "presentSrcKHR";
		case ImageLayout::sharedPresentKHR: return "sharedPresentKHR";
		case ImageLayout::shadingRateOptimalNV: return "shadingRateOptimalNV";
		case ImageLayout::fragmentDensityMapOptimalEXT: return "fragmentDensityMapOptimalEXT";
		default: return nullptr;
	}
}
const char* name(ImageViewCreateBits val) {
	switch(val) {
		case ImageViewCreateBits::fragmentDensityMapDynamicEXT: return "fragmentDensityMapDynamicEXT";
		default: return nullptr;
	}
}
const char* name(ImageViewType val) {
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
const char* name(PipelineCreateBits val) {
	switch(val) {
		case PipelineCreateBits::disableOptimization: return "disableOptimization";
		case PipelineCreateBits::allowDerivatives: return "allowDerivatives";
		case PipelineCreateBits::derivative: return "derivative";
		case PipelineCreateBits::viewIndexFromDeviceIndex: return "viewIndexFromDeviceIndex";
		case PipelineCreateBits::dispatchBase: return "dispatchBase";
		case PipelineCreateBits::deferCompileNV: return "deferCompileNV";
		default: return nullptr;
	}
}
const char* name(VertexInputRate val) {
	switch(val) {
		case VertexInputRate::vertex: return "vertex";
		case VertexInputRate::instance: return "instance";
		default: return nullptr;
	}
}
const char* name(PrimitiveTopology val) {
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
const char* name(PolygonMode val) {
	switch(val) {
		case PolygonMode::fill: return "fill";
		case PolygonMode::line: return "line";
		case PolygonMode::point: return "point";
		case PolygonMode::fillRectangleNV: return "fillRectangleNV";
		default: return nullptr;
	}
}
const char* name(CullModeBits val) {
	switch(val) {
		case CullModeBits::none: return "none";
		case CullModeBits::back: return "back";
		case CullModeBits::frontAndBack: return "frontAndBack";
		default: return nullptr;
	}
}
const char* name(FrontFace val) {
	switch(val) {
		case FrontFace::counterClockwise: return "counterClockwise";
		case FrontFace::clockwise: return "clockwise";
		default: return nullptr;
	}
}
const char* name(CompareOp val) {
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
const char* name(StencilOp val) {
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
const char* name(LogicOp val) {
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
const char* name(BlendFactor val) {
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
const char* name(BlendOp val) {
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
const char* name(ColorComponentBits val) {
	switch(val) {
		case ColorComponentBits::r: return "r";
		case ColorComponentBits::g: return "g";
		case ColorComponentBits::b: return "b";
		case ColorComponentBits::a: return "a";
		default: return nullptr;
	}
}
const char* name(DynamicState val) {
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
		case DynamicState::viewportWScalingNV: return "viewportWScalingNV";
		case DynamicState::discardRectangleEXT: return "discardRectangleEXT";
		case DynamicState::sampleLocationsEXT: return "sampleLocationsEXT";
		case DynamicState::viewportShadingRatePaletteNV: return "viewportShadingRatePaletteNV";
		case DynamicState::viewportCoarseSampleOrderNV: return "viewportCoarseSampleOrderNV";
		case DynamicState::exclusiveScissorNV: return "exclusiveScissorNV";
		default: return nullptr;
	}
}
const char* name(SamplerCreateBits val) {
	switch(val) {
		case SamplerCreateBits::subsampledEXT: return "subsampledEXT";
		case SamplerCreateBits::subsampledCoarseReconstructionEXT: return "subsampledCoarseReconstructionEXT";
		default: return nullptr;
	}
}
const char* name(SamplerMipmapMode val) {
	switch(val) {
		case SamplerMipmapMode::nearest: return "nearest";
		case SamplerMipmapMode::linear: return "linear";
		default: return nullptr;
	}
}
const char* name(SamplerAddressMode val) {
	switch(val) {
		case SamplerAddressMode::repeat: return "repeat";
		case SamplerAddressMode::mirroredRepeat: return "mirroredRepeat";
		case SamplerAddressMode::clampToEdge: return "clampToEdge";
		case SamplerAddressMode::clampToBorder: return "clampToBorder";
		case SamplerAddressMode::mirrorClampToEdge: return "mirrorClampToEdge";
		default: return nullptr;
	}
}
const char* name(BorderColor val) {
	switch(val) {
		case BorderColor::floatTransparentBlack: return "floatTransparentBlack";
		case BorderColor::intTransparentBlack: return "intTransparentBlack";
		case BorderColor::floatOpaqueBlack: return "floatOpaqueBlack";
		case BorderColor::intOpaqueBlack: return "intOpaqueBlack";
		case BorderColor::floatOpaqueWhite: return "floatOpaqueWhite";
		case BorderColor::intOpaqueWhite: return "intOpaqueWhite";
		default: return nullptr;
	}
}
const char* name(DescriptorPoolCreateBits val) {
	switch(val) {
		case DescriptorPoolCreateBits::freeDescriptorSet: return "freeDescriptorSet";
		case DescriptorPoolCreateBits::updateAfterBindEXT: return "updateAfterBindEXT";
		default: return nullptr;
	}
}
const char* name(AttachmentDescriptionBits val) {
	switch(val) {
		case AttachmentDescriptionBits::mayAlias: return "mayAlias";
		default: return nullptr;
	}
}
const char* name(AttachmentLoadOp val) {
	switch(val) {
		case AttachmentLoadOp::load: return "load";
		case AttachmentLoadOp::clear: return "clear";
		case AttachmentLoadOp::dontCare: return "dontCare";
		default: return nullptr;
	}
}
const char* name(AttachmentStoreOp val) {
	switch(val) {
		case AttachmentStoreOp::store: return "store";
		case AttachmentStoreOp::dontCare: return "dontCare";
		default: return nullptr;
	}
}
const char* name(SubpassDescriptionBits val) {
	switch(val) {
		default: return nullptr;
	}
}
const char* name(AccessBits val) {
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
		case AccessBits::shadingRateImageReadNV: return "shadingRateImageReadNV";
		case AccessBits::accelerationStructureReadNV: return "accelerationStructureReadNV";
		case AccessBits::accelerationStructureWriteNV: return "accelerationStructureWriteNV";
		case AccessBits::fragmentDensityMapReadEXT: return "fragmentDensityMapReadEXT";
		default: return nullptr;
	}
}
const char* name(DependencyBits val) {
	switch(val) {
		case DependencyBits::byRegion: return "byRegion";
		case DependencyBits::deviceGroup: return "deviceGroup";
		case DependencyBits::viewLocal: return "viewLocal";
		default: return nullptr;
	}
}
const char* name(CommandPoolCreateBits val) {
	switch(val) {
		case CommandPoolCreateBits::transient: return "transient";
		case CommandPoolCreateBits::resetCommandBuffer: return "resetCommandBuffer";
		case CommandPoolCreateBits::eProtected: return "eProtected";
		default: return nullptr;
	}
}
const char* name(CommandPoolResetBits val) {
	switch(val) {
		case CommandPoolResetBits::releaseResources: return "releaseResources";
		default: return nullptr;
	}
}
const char* name(CommandBufferLevel val) {
	switch(val) {
		case CommandBufferLevel::primary: return "primary";
		case CommandBufferLevel::secondary: return "secondary";
		default: return nullptr;
	}
}
const char* name(CommandBufferUsageBits val) {
	switch(val) {
		case CommandBufferUsageBits::oneTimeSubmit: return "oneTimeSubmit";
		case CommandBufferUsageBits::renderPassContinue: return "renderPassContinue";
		case CommandBufferUsageBits::simultaneousUse: return "simultaneousUse";
		default: return nullptr;
	}
}
const char* name(QueryControlBits val) {
	switch(val) {
		case QueryControlBits::precise: return "precise";
		default: return nullptr;
	}
}
const char* name(CommandBufferResetBits val) {
	switch(val) {
		case CommandBufferResetBits::releaseResources: return "releaseResources";
		default: return nullptr;
	}
}
const char* name(StencilFaceBits val) {
	switch(val) {
		case StencilFaceBits::front: return "front";
		case StencilFaceBits::back: return "back";
		case StencilFaceBits::rontAndBack: return "rontAndBack";
		default: return nullptr;
	}
}
const char* name(IndexType val) {
	switch(val) {
		case IndexType::uint16: return "uint16";
		case IndexType::uint32: return "uint32";
		case IndexType::noneNV: return "noneNV";
		default: return nullptr;
	}
}
const char* name(SubpassContents val) {
	switch(val) {
		case SubpassContents::eInline: return "eInline";
		case SubpassContents::secondaryCommandBuffers: return "secondaryCommandBuffers";
		default: return nullptr;
	}
}
const char* name(ObjectType val) {
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
		case ObjectType::surfaceKHR: return "surfaceKHR";
		case ObjectType::swapchainKHR: return "swapchainKHR";
		case ObjectType::displayKHR: return "displayKHR";
		case ObjectType::displayModeKHR: return "displayModeKHR";
		case ObjectType::debugReportCallbackEXT: return "debugReportCallbackEXT";
		case ObjectType::debugUtilsMessengerEXT: return "debugUtilsMessengerEXT";
		case ObjectType::validationCacheEXT: return "validationCacheEXT";
		case ObjectType::accelerationStructureNV: return "accelerationStructureNV";
		default: return nullptr;
	}
}
const char* name(VendorId val) {
	switch(val) {
		case VendorId::vIV: return "vIV";
		case VendorId::vSI: return "vSI";
		case VendorId::kazan: return "kazan";
		default: return nullptr;
	}
}
std::string name(PipelineStageFlags val) {
	std::string ret;
	if((val & PipelineStageBits::topOfPipe)) ret += "topOfPipe | ";
	if((val & PipelineStageBits::drawIndirect)) ret += "drawIndirect | ";
	if((val & PipelineStageBits::vertexInput)) ret += "vertexInput | ";
	if((val & PipelineStageBits::vertexShader)) ret += "vertexShader | ";
	if((val & PipelineStageBits::tessellationControlShader)) ret += "tessellationControlShader | ";
	if((val & PipelineStageBits::tessellationEvaluationShader)) ret += "tessellationEvaluationShader | ";
	if((val & PipelineStageBits::geometryShader)) ret += "geometryShader | ";
	if((val & PipelineStageBits::fragmentShader)) ret += "fragmentShader | ";
	if((val & PipelineStageBits::earlyFragmentTests)) ret += "earlyFragmentTests | ";
	if((val & PipelineStageBits::lateFragmentTests)) ret += "lateFragmentTests | ";
	if((val & PipelineStageBits::colorAttachmentOutput)) ret += "colorAttachmentOutput | ";
	if((val & PipelineStageBits::computeShader)) ret += "computeShader | ";
	if((val & PipelineStageBits::transfer)) ret += "transfer | ";
	if((val & PipelineStageBits::bottomOfPipe)) ret += "bottomOfPipe | ";
	if((val & PipelineStageBits::host)) ret += "host | ";
	if((val & PipelineStageBits::allGraphics)) ret += "allGraphics | ";
	if((val & PipelineStageBits::allCommands)) ret += "allCommands | ";
	if((val & PipelineStageBits::transformFeedbackEXT)) ret += "transformFeedbackEXT | ";
	if((val & PipelineStageBits::conditionalRenderingEXT)) ret += "conditionalRenderingEXT | ";
	if((val & PipelineStageBits::shadingRateImageNV)) ret += "shadingRateImageNV | ";
	if((val & PipelineStageBits::rayTracingShaderNV)) ret += "rayTracingShaderNV | ";
	if((val & PipelineStageBits::accelerationStructureBuildNV)) ret += "accelerationStructureBuildNV | ";
	if((val & PipelineStageBits::taskShaderNV)) ret += "taskShaderNV | ";
	if((val & PipelineStageBits::meshShaderNV)) ret += "meshShaderNV | ";
	if((val & PipelineStageBits::fragmentDensityProcessEXT)) ret += "fragmentDensityProcessEXT | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
std::string name(SparseMemoryBindFlags val) {
	std::string ret;
	if((val & SparseMemoryBindBits::metadata)) ret += "metadata | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
std::string name(FenceCreateFlags val) {
	std::string ret;
	if((val & FenceCreateBits::signaled)) ret += "signaled | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
std::string name(QueryPipelineStatisticFlags val) {
	std::string ret;
	if((val & QueryPipelineStatisticBits::inputAssemblyVertices)) ret += "inputAssemblyVertices | ";
	if((val & QueryPipelineStatisticBits::inputAssemblyPrimitives)) ret += "inputAssemblyPrimitives | ";
	if((val & QueryPipelineStatisticBits::vertexShaderInvocations)) ret += "vertexShaderInvocations | ";
	if((val & QueryPipelineStatisticBits::geometryShaderInvocations)) ret += "geometryShaderInvocations | ";
	if((val & QueryPipelineStatisticBits::geometryShaderPrimitives)) ret += "geometryShaderPrimitives | ";
	if((val & QueryPipelineStatisticBits::clippingInvocations)) ret += "clippingInvocations | ";
	if((val & QueryPipelineStatisticBits::clippingPrimitives)) ret += "clippingPrimitives | ";
	if((val & QueryPipelineStatisticBits::fragmentShaderInvocations)) ret += "fragmentShaderInvocations | ";
	if((val & QueryPipelineStatisticBits::tessellationControlShaderPatches)) ret += "tessellationControlShaderPatches | ";
	if((val & QueryPipelineStatisticBits::tessellationEvaluationShaderInvocations)) ret += "tessellationEvaluationShaderInvocations | ";
	if((val & QueryPipelineStatisticBits::computeShaderInvocations)) ret += "computeShaderInvocations | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
std::string name(QueryResultFlags val) {
	std::string ret;
	if((val & QueryResultBits::e64)) ret += "e64 | ";
	if((val & QueryResultBits::wait)) ret += "wait | ";
	if((val & QueryResultBits::withAvailability)) ret += "withAvailability | ";
	if((val & QueryResultBits::partial)) ret += "partial | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
std::string name(ImageViewCreateFlags val) {
	std::string ret;
	if((val & ImageViewCreateBits::fragmentDensityMapDynamicEXT)) ret += "fragmentDensityMapDynamicEXT | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
std::string name(PipelineCreateFlags val) {
	std::string ret;
	if((val & PipelineCreateBits::disableOptimization)) ret += "disableOptimization | ";
	if((val & PipelineCreateBits::allowDerivatives)) ret += "allowDerivatives | ";
	if((val & PipelineCreateBits::derivative)) ret += "derivative | ";
	if((val & PipelineCreateBits::viewIndexFromDeviceIndex)) ret += "viewIndexFromDeviceIndex | ";
	if((val & PipelineCreateBits::dispatchBase)) ret += "dispatchBase | ";
	if((val & PipelineCreateBits::deferCompileNV)) ret += "deferCompileNV | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
std::string name(CullModeFlags val) {
	std::string ret;
	if((val & CullModeBits::none)) ret += "none | ";
	if((val & CullModeBits::back)) ret += "back | ";
	if((val & CullModeBits::frontAndBack)) ret += "frontAndBack | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
std::string name(ColorComponentFlags val) {
	std::string ret;
	if((val & ColorComponentBits::r)) ret += "r | ";
	if((val & ColorComponentBits::g)) ret += "g | ";
	if((val & ColorComponentBits::b)) ret += "b | ";
	if((val & ColorComponentBits::a)) ret += "a | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
std::string name(SamplerCreateFlags val) {
	std::string ret;
	if((val & SamplerCreateBits::subsampledEXT)) ret += "subsampledEXT | ";
	if((val & SamplerCreateBits::subsampledCoarseReconstructionEXT)) ret += "subsampledCoarseReconstructionEXT | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
std::string name(DescriptorPoolCreateFlags val) {
	std::string ret;
	if((val & DescriptorPoolCreateBits::freeDescriptorSet)) ret += "freeDescriptorSet | ";
	if((val & DescriptorPoolCreateBits::updateAfterBindEXT)) ret += "updateAfterBindEXT | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
std::string name(AttachmentDescriptionFlags val) {
	std::string ret;
	if((val & AttachmentDescriptionBits::mayAlias)) ret += "mayAlias | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
std::string name(SubpassDescriptionFlags val) {
	std::string ret;
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
std::string name(AccessFlags val) {
	std::string ret;
	if((val & AccessBits::indirectCommandRead)) ret += "indirectCommandRead | ";
	if((val & AccessBits::indexRead)) ret += "indexRead | ";
	if((val & AccessBits::vertexAttributeRead)) ret += "vertexAttributeRead | ";
	if((val & AccessBits::uniformRead)) ret += "uniformRead | ";
	if((val & AccessBits::inputAttachmentRead)) ret += "inputAttachmentRead | ";
	if((val & AccessBits::shaderRead)) ret += "shaderRead | ";
	if((val & AccessBits::shaderWrite)) ret += "shaderWrite | ";
	if((val & AccessBits::colorAttachmentRead)) ret += "colorAttachmentRead | ";
	if((val & AccessBits::colorAttachmentWrite)) ret += "colorAttachmentWrite | ";
	if((val & AccessBits::depthStencilAttachmentRead)) ret += "depthStencilAttachmentRead | ";
	if((val & AccessBits::depthStencilAttachmentWrite)) ret += "depthStencilAttachmentWrite | ";
	if((val & AccessBits::transferRead)) ret += "transferRead | ";
	if((val & AccessBits::transferWrite)) ret += "transferWrite | ";
	if((val & AccessBits::hostRead)) ret += "hostRead | ";
	if((val & AccessBits::hostWrite)) ret += "hostWrite | ";
	if((val & AccessBits::memoryRead)) ret += "memoryRead | ";
	if((val & AccessBits::memoryWrite)) ret += "memoryWrite | ";
	if((val & AccessBits::transformFeedbackWriteEXT)) ret += "transformFeedbackWriteEXT | ";
	if((val & AccessBits::transformFeedbackCounterReadEXT)) ret += "transformFeedbackCounterReadEXT | ";
	if((val & AccessBits::transformFeedbackCounterWriteEXT)) ret += "transformFeedbackCounterWriteEXT | ";
	if((val & AccessBits::conditionalRenderingReadEXT)) ret += "conditionalRenderingReadEXT | ";
	if((val & AccessBits::colorAttachmentReadNoncoherentEXT)) ret += "colorAttachmentReadNoncoherentEXT | ";
	if((val & AccessBits::shadingRateImageReadNV)) ret += "shadingRateImageReadNV | ";
	if((val & AccessBits::accelerationStructureReadNV)) ret += "accelerationStructureReadNV | ";
	if((val & AccessBits::accelerationStructureWriteNV)) ret += "accelerationStructureWriteNV | ";
	if((val & AccessBits::fragmentDensityMapReadEXT)) ret += "fragmentDensityMapReadEXT | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
std::string name(DependencyFlags val) {
	std::string ret;
	if((val & DependencyBits::byRegion)) ret += "byRegion | ";
	if((val & DependencyBits::deviceGroup)) ret += "deviceGroup | ";
	if((val & DependencyBits::viewLocal)) ret += "viewLocal | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
std::string name(CommandPoolCreateFlags val) {
	std::string ret;
	if((val & CommandPoolCreateBits::transient)) ret += "transient | ";
	if((val & CommandPoolCreateBits::resetCommandBuffer)) ret += "resetCommandBuffer | ";
	if((val & CommandPoolCreateBits::eProtected)) ret += "eProtected | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
std::string name(CommandPoolResetFlags val) {
	std::string ret;
	if((val & CommandPoolResetBits::releaseResources)) ret += "releaseResources | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
std::string name(CommandBufferUsageFlags val) {
	std::string ret;
	if((val & CommandBufferUsageBits::oneTimeSubmit)) ret += "oneTimeSubmit | ";
	if((val & CommandBufferUsageBits::renderPassContinue)) ret += "renderPassContinue | ";
	if((val & CommandBufferUsageBits::simultaneousUse)) ret += "simultaneousUse | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
std::string name(QueryControlFlags val) {
	std::string ret;
	if((val & QueryControlBits::precise)) ret += "precise | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
std::string name(CommandBufferResetFlags val) {
	std::string ret;
	if((val & CommandBufferResetBits::releaseResources)) ret += "releaseResources | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
std::string name(StencilFaceFlags val) {
	std::string ret;
	if((val & StencilFaceBits::front)) ret += "front | ";
	if((val & StencilFaceBits::back)) ret += "back | ";
	if((val & StencilFaceBits::rontAndBack)) ret += "rontAndBack | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
const char* name(SurfaceTransformBitsKHR val) {
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
const char* name(CompositeAlphaBitsKHR val) {
	switch(val) {
		case CompositeAlphaBitsKHR::opaque: return "opaque";
		case CompositeAlphaBitsKHR::preMultiplied: return "preMultiplied";
		case CompositeAlphaBitsKHR::postMultiplied: return "postMultiplied";
		case CompositeAlphaBitsKHR::inherit: return "inherit";
		default: return nullptr;
	}
}
const char* name(ColorSpaceKHR val) {
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
const char* name(PresentModeKHR val) {
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
std::string name(SurfaceTransformFlagsKHR val) {
	std::string ret;
	if((val & SurfaceTransformBitsKHR::identity)) ret += "identity | ";
	if((val & SurfaceTransformBitsKHR::rotate90)) ret += "rotate90 | ";
	if((val & SurfaceTransformBitsKHR::rotate180)) ret += "rotate180 | ";
	if((val & SurfaceTransformBitsKHR::rotate270)) ret += "rotate270 | ";
	if((val & SurfaceTransformBitsKHR::horizontalMirror)) ret += "horizontalMirror | ";
	if((val & SurfaceTransformBitsKHR::horizontalMirrorRotate90)) ret += "horizontalMirrorRotate90 | ";
	if((val & SurfaceTransformBitsKHR::horizontalMirrorRotate180)) ret += "horizontalMirrorRotate180 | ";
	if((val & SurfaceTransformBitsKHR::horizontalMirrorRotate270)) ret += "horizontalMirrorRotate270 | ";
	if((val & SurfaceTransformBitsKHR::inherit)) ret += "inherit | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
std::string name(CompositeAlphaFlagsKHR val) {
	std::string ret;
	if((val & CompositeAlphaBitsKHR::opaque)) ret += "opaque | ";
	if((val & CompositeAlphaBitsKHR::preMultiplied)) ret += "preMultiplied | ";
	if((val & CompositeAlphaBitsKHR::postMultiplied)) ret += "postMultiplied | ";
	if((val & CompositeAlphaBitsKHR::inherit)) ret += "inherit | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
const char* name(SwapchainCreateBitsKHR val) {
	switch(val) {
		case SwapchainCreateBitsKHR::splitInstanceBindRegions: return "splitInstanceBindRegions";
		case SwapchainCreateBitsKHR::eProtected: return "eProtected";
		case SwapchainCreateBitsKHR::mutableFormat: return "mutableFormat";
		default: return nullptr;
	}
}
const char* name(DeviceGroupPresentModeBitsKHR val) {
	switch(val) {
		case DeviceGroupPresentModeBitsKHR::local: return "local";
		case DeviceGroupPresentModeBitsKHR::remote: return "remote";
		case DeviceGroupPresentModeBitsKHR::sum: return "sum";
		case DeviceGroupPresentModeBitsKHR::localMultiDevice: return "localMultiDevice";
		default: return nullptr;
	}
}
std::string name(SwapchainCreateFlagsKHR val) {
	std::string ret;
	if((val & SwapchainCreateBitsKHR::splitInstanceBindRegions)) ret += "splitInstanceBindRegions | ";
	if((val & SwapchainCreateBitsKHR::eProtected)) ret += "eProtected | ";
	if((val & SwapchainCreateBitsKHR::mutableFormat)) ret += "mutableFormat | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
std::string name(DeviceGroupPresentModeFlagsKHR val) {
	std::string ret;
	if((val & DeviceGroupPresentModeBitsKHR::local)) ret += "local | ";
	if((val & DeviceGroupPresentModeBitsKHR::remote)) ret += "remote | ";
	if((val & DeviceGroupPresentModeBitsKHR::sum)) ret += "sum | ";
	if((val & DeviceGroupPresentModeBitsKHR::localMultiDevice)) ret += "localMultiDevice | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
const char* name(DisplayPlaneAlphaBitsKHR val) {
	switch(val) {
		case DisplayPlaneAlphaBitsKHR::opaque: return "opaque";
		case DisplayPlaneAlphaBitsKHR::global: return "global";
		case DisplayPlaneAlphaBitsKHR::perPixel: return "perPixel";
		case DisplayPlaneAlphaBitsKHR::perPixelPremultiplied: return "perPixelPremultiplied";
		default: return nullptr;
	}
}
std::string name(DisplayPlaneAlphaFlagsKHR val) {
	std::string ret;
	if((val & DisplayPlaneAlphaBitsKHR::opaque)) ret += "opaque | ";
	if((val & DisplayPlaneAlphaBitsKHR::global)) ret += "global | ";
	if((val & DisplayPlaneAlphaBitsKHR::perPixel)) ret += "perPixel | ";
	if((val & DisplayPlaneAlphaBitsKHR::perPixelPremultiplied)) ret += "perPixelPremultiplied | ";
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

const char* name(DebugReportObjectTypeEXT val) {
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
		case DebugReportObjectTypeEXT::objectTableNVX: return "objectTableNVX";
		case DebugReportObjectTypeEXT::indirectCommandsLayoutNVX: return "indirectCommandsLayoutNVX";
		case DebugReportObjectTypeEXT::validationCacheEXT: return "validationCacheEXT";
		case DebugReportObjectTypeEXT::samplerYcbcrConversion: return "samplerYcbcrConversion";
		case DebugReportObjectTypeEXT::descriptorUpdateTemplate: return "descriptorUpdateTemplate";
		case DebugReportObjectTypeEXT::accelerationStructureNV: return "accelerationStructureNV";
		default: return nullptr;
	}
}
const char* name(DebugReportBitsEXT val) {
	switch(val) {
		case DebugReportBitsEXT::information: return "information";
		case DebugReportBitsEXT::warning: return "warning";
		case DebugReportBitsEXT::performanceWarning: return "performanceWarning";
		case DebugReportBitsEXT::error: return "error";
		case DebugReportBitsEXT::debug: return "debug";
		default: return nullptr;
	}
}
std::string name(DebugReportFlagsEXT val) {
	std::string ret;
	if((val & DebugReportBitsEXT::information)) ret += "information | ";
	if((val & DebugReportBitsEXT::warning)) ret += "warning | ";
	if((val & DebugReportBitsEXT::performanceWarning)) ret += "performanceWarning | ";
	if((val & DebugReportBitsEXT::error)) ret += "error | ";
	if((val & DebugReportBitsEXT::debug)) ret += "debug | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
const char* name(RasterizationOrderAMD val) {
	switch(val) {
		case RasterizationOrderAMD::strict: return "strict";
		case RasterizationOrderAMD::relaxed: return "relaxed";
		default: return nullptr;
	}
}
const char* name(ShaderInfoTypeAMD val) {
	switch(val) {
		case ShaderInfoTypeAMD::statistics: return "statistics";
		case ShaderInfoTypeAMD::binary: return "binary";
		case ShaderInfoTypeAMD::disassembly: return "disassembly";
		default: return nullptr;
	}
}

#ifdef VK_USE_PLATFORM_GGP
#endif //VK_USE_PLATFORM_GGP

const char* name(ExternalMemoryHandleTypeBitsNV val) {
	switch(val) {
		case ExternalMemoryHandleTypeBitsNV::opaqueWin32: return "opaqueWin32";
		case ExternalMemoryHandleTypeBitsNV::opaqueWin32Kmt: return "opaqueWin32Kmt";
		case ExternalMemoryHandleTypeBitsNV::d3d11Image: return "d3d11Image";
		case ExternalMemoryHandleTypeBitsNV::d3d11ImageKmt: return "d3d11ImageKmt";
		default: return nullptr;
	}
}
const char* name(ExternalMemoryFeatureBitsNV val) {
	switch(val) {
		case ExternalMemoryFeatureBitsNV::dedicatedOnly: return "dedicatedOnly";
		case ExternalMemoryFeatureBitsNV::exportable: return "exportable";
		case ExternalMemoryFeatureBitsNV::importable: return "importable";
		default: return nullptr;
	}
}
std::string name(ExternalMemoryHandleTypeFlagsNV val) {
	std::string ret;
	if((val & ExternalMemoryHandleTypeBitsNV::opaqueWin32)) ret += "opaqueWin32 | ";
	if((val & ExternalMemoryHandleTypeBitsNV::opaqueWin32Kmt)) ret += "opaqueWin32Kmt | ";
	if((val & ExternalMemoryHandleTypeBitsNV::d3d11Image)) ret += "d3d11Image | ";
	if((val & ExternalMemoryHandleTypeBitsNV::d3d11ImageKmt)) ret += "d3d11ImageKmt | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
std::string name(ExternalMemoryFeatureFlagsNV val) {
	std::string ret;
	if((val & ExternalMemoryFeatureBitsNV::dedicatedOnly)) ret += "dedicatedOnly | ";
	if((val & ExternalMemoryFeatureBitsNV::exportable)) ret += "exportable | ";
	if((val & ExternalMemoryFeatureBitsNV::importable)) ret += "importable | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
const char* name(ValidationCheckEXT val) {
	switch(val) {
		case ValidationCheckEXT::all: return "all";
		case ValidationCheckEXT::shaders: return "shaders";
		default: return nullptr;
	}
}

#ifdef VK_USE_PLATFORM_VI_NN
#endif //VK_USE_PLATFORM_VI_NN

const char* name(ConditionalRenderingBitsEXT val) {
	switch(val) {
		case ConditionalRenderingBitsEXT::inverted: return "inverted";
		default: return nullptr;
	}
}
std::string name(ConditionalRenderingFlagsEXT val) {
	std::string ret;
	if((val & ConditionalRenderingBitsEXT::inverted)) ret += "inverted | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
const char* name(SurfaceCounterBitsEXT val) {
	switch(val) {
		case SurfaceCounterBitsEXT::vblank: return "vblank";
		default: return nullptr;
	}
}
std::string name(SurfaceCounterFlagsEXT val) {
	std::string ret;
	if((val & SurfaceCounterBitsEXT::vblank)) ret += "vblank | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
const char* name(DisplayPowerStateEXT val) {
	switch(val) {
		case DisplayPowerStateEXT::off: return "off";
		case DisplayPowerStateEXT::suspend: return "suspend";
		case DisplayPowerStateEXT::on: return "on";
		default: return nullptr;
	}
}
const char* name(DeviceEventTypeEXT val) {
	switch(val) {
		case DeviceEventTypeEXT::displayHotplug: return "displayHotplug";
		default: return nullptr;
	}
}
const char* name(DisplayEventTypeEXT val) {
	switch(val) {
		case DisplayEventTypeEXT::firstPixelOut: return "firstPixelOut";
		default: return nullptr;
	}
}
const char* name(ViewportCoordinateSwizzleNV val) {
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
const char* name(DiscardRectangleModeEXT val) {
	switch(val) {
		case DiscardRectangleModeEXT::inclusive: return "inclusive";
		case DiscardRectangleModeEXT::exclusive: return "exclusive";
		default: return nullptr;
	}
}
const char* name(ConservativeRasterizationModeEXT val) {
	switch(val) {
		case ConservativeRasterizationModeEXT::disabled: return "disabled";
		case ConservativeRasterizationModeEXT::overestimate: return "overestimate";
		case ConservativeRasterizationModeEXT::underestimate: return "underestimate";
		default: return nullptr;
	}
}

#ifdef VK_USE_PLATFORM_IOS_MVK
#endif //VK_USE_PLATFORM_IOS_MVK


#ifdef VK_USE_PLATFORM_MACOS_MVK
#endif //VK_USE_PLATFORM_MACOS_MVK

const char* name(DebugUtilsMessageSeverityBitsEXT val) {
	switch(val) {
		case DebugUtilsMessageSeverityBitsEXT::verbose: return "verbose";
		case DebugUtilsMessageSeverityBitsEXT::info: return "info";
		case DebugUtilsMessageSeverityBitsEXT::warning: return "warning";
		case DebugUtilsMessageSeverityBitsEXT::error: return "error";
		default: return nullptr;
	}
}
const char* name(DebugUtilsMessageTypeBitsEXT val) {
	switch(val) {
		case DebugUtilsMessageTypeBitsEXT::general: return "general";
		case DebugUtilsMessageTypeBitsEXT::validation: return "validation";
		case DebugUtilsMessageTypeBitsEXT::performance: return "performance";
		default: return nullptr;
	}
}
std::string name(DebugUtilsMessageSeverityFlagsEXT val) {
	std::string ret;
	if((val & DebugUtilsMessageSeverityBitsEXT::verbose)) ret += "verbose | ";
	if((val & DebugUtilsMessageSeverityBitsEXT::info)) ret += "info | ";
	if((val & DebugUtilsMessageSeverityBitsEXT::warning)) ret += "warning | ";
	if((val & DebugUtilsMessageSeverityBitsEXT::error)) ret += "error | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
std::string name(DebugUtilsMessageTypeFlagsEXT val) {
	std::string ret;
	if((val & DebugUtilsMessageTypeBitsEXT::general)) ret += "general | ";
	if((val & DebugUtilsMessageTypeBitsEXT::validation)) ret += "validation | ";
	if((val & DebugUtilsMessageTypeBitsEXT::performance)) ret += "performance | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
const char* name(SamplerReductionModeEXT val) {
	switch(val) {
		case SamplerReductionModeEXT::weightedAverage: return "weightedAverage";
		case SamplerReductionModeEXT::min: return "min";
		case SamplerReductionModeEXT::max: return "max";
		default: return nullptr;
	}
}
const char* name(BlendOverlapEXT val) {
	switch(val) {
		case BlendOverlapEXT::uncorrelated: return "uncorrelated";
		case BlendOverlapEXT::disjoint: return "disjoint";
		case BlendOverlapEXT::conjoint: return "conjoint";
		default: return nullptr;
	}
}
const char* name(CoverageModulationModeNV val) {
	switch(val) {
		case CoverageModulationModeNV::none: return "none";
		case CoverageModulationModeNV::rgb: return "rgb";
		case CoverageModulationModeNV::alpha: return "alpha";
		case CoverageModulationModeNV::rgba: return "rgba";
		default: return nullptr;
	}
}
const char* name(ValidationCacheHeaderVersionEXT val) {
	switch(val) {
		case ValidationCacheHeaderVersionEXT::one: return "one";
		default: return nullptr;
	}
}
const char* name(DescriptorBindingBitsEXT val) {
	switch(val) {
		case DescriptorBindingBitsEXT::updateAfterBind: return "updateAfterBind";
		case DescriptorBindingBitsEXT::updateUnusedWhilePending: return "updateUnusedWhilePending";
		case DescriptorBindingBitsEXT::partiallyBound: return "partiallyBound";
		case DescriptorBindingBitsEXT::variableDescriptorCount: return "variableDescriptorCount";
		default: return nullptr;
	}
}
std::string name(DescriptorBindingFlagsEXT val) {
	std::string ret;
	if((val & DescriptorBindingBitsEXT::updateAfterBind)) ret += "updateAfterBind | ";
	if((val & DescriptorBindingBitsEXT::updateUnusedWhilePending)) ret += "updateUnusedWhilePending | ";
	if((val & DescriptorBindingBitsEXT::partiallyBound)) ret += "partiallyBound | ";
	if((val & DescriptorBindingBitsEXT::variableDescriptorCount)) ret += "variableDescriptorCount | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
const char* name(ShadingRatePaletteEntryNV val) {
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
const char* name(CoarseSampleOrderTypeNV val) {
	switch(val) {
		case CoarseSampleOrderTypeNV::eDefault: return "eDefault";
		case CoarseSampleOrderTypeNV::custom: return "custom";
		case CoarseSampleOrderTypeNV::pixelMajor: return "pixelMajor";
		case CoarseSampleOrderTypeNV::sampleMajor: return "sampleMajor";
		default: return nullptr;
	}
}
const char* name(RayTracingShaderGroupTypeNV val) {
	switch(val) {
		case RayTracingShaderGroupTypeNV::general: return "general";
		case RayTracingShaderGroupTypeNV::trianglesHitGroup: return "trianglesHitGroup";
		case RayTracingShaderGroupTypeNV::proceduralHitGroup: return "proceduralHitGroup";
		default: return nullptr;
	}
}
const char* name(GeometryTypeNV val) {
	switch(val) {
		case GeometryTypeNV::triangles: return "triangles";
		case GeometryTypeNV::aabbs: return "aabbs";
		default: return nullptr;
	}
}
const char* name(GeometryBitsNV val) {
	switch(val) {
		case GeometryBitsNV::opaque: return "opaque";
		case GeometryBitsNV::noDuplicateAnyHitInvocation: return "noDuplicateAnyHitInvocation";
		default: return nullptr;
	}
}
const char* name(GeometryInstanceBitsNV val) {
	switch(val) {
		case GeometryInstanceBitsNV::triangleCullDisable: return "triangleCullDisable";
		case GeometryInstanceBitsNV::triangleFrontCounterclockwise: return "triangleFrontCounterclockwise";
		case GeometryInstanceBitsNV::forceOpaque: return "forceOpaque";
		case GeometryInstanceBitsNV::forceNoOpaque: return "forceNoOpaque";
		default: return nullptr;
	}
}
const char* name(AccelerationStructureTypeNV val) {
	switch(val) {
		case AccelerationStructureTypeNV::topLevel: return "topLevel";
		case AccelerationStructureTypeNV::bottomLevel: return "bottomLevel";
		default: return nullptr;
	}
}
const char* name(BuildAccelerationStructureBitsNV val) {
	switch(val) {
		case BuildAccelerationStructureBitsNV::allowUpdate: return "allowUpdate";
		case BuildAccelerationStructureBitsNV::allowCompaction: return "allowCompaction";
		case BuildAccelerationStructureBitsNV::preferFastTrace: return "preferFastTrace";
		case BuildAccelerationStructureBitsNV::preferFastBuild: return "preferFastBuild";
		case BuildAccelerationStructureBitsNV::lowMemory: return "lowMemory";
		default: return nullptr;
	}
}
const char* name(CopyAccelerationStructureModeNV val) {
	switch(val) {
		case CopyAccelerationStructureModeNV::clone: return "clone";
		case CopyAccelerationStructureModeNV::compact: return "compact";
		default: return nullptr;
	}
}
const char* name(AccelerationStructureMemoryRequirementsTypeNV val) {
	switch(val) {
		case AccelerationStructureMemoryRequirementsTypeNV::object: return "object";
		case AccelerationStructureMemoryRequirementsTypeNV::buildScratch: return "buildScratch";
		case AccelerationStructureMemoryRequirementsTypeNV::updateScratch: return "updateScratch";
		default: return nullptr;
	}
}
std::string name(GeometryFlagsNV val) {
	std::string ret;
	if((val & GeometryBitsNV::opaque)) ret += "opaque | ";
	if((val & GeometryBitsNV::noDuplicateAnyHitInvocation)) ret += "noDuplicateAnyHitInvocation | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
std::string name(GeometryInstanceFlagsNV val) {
	std::string ret;
	if((val & GeometryInstanceBitsNV::triangleCullDisable)) ret += "triangleCullDisable | ";
	if((val & GeometryInstanceBitsNV::triangleFrontCounterclockwise)) ret += "triangleFrontCounterclockwise | ";
	if((val & GeometryInstanceBitsNV::forceOpaque)) ret += "forceOpaque | ";
	if((val & GeometryInstanceBitsNV::forceNoOpaque)) ret += "forceNoOpaque | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
std::string name(BuildAccelerationStructureFlagsNV val) {
	std::string ret;
	if((val & BuildAccelerationStructureBitsNV::allowUpdate)) ret += "allowUpdate | ";
	if((val & BuildAccelerationStructureBitsNV::allowCompaction)) ret += "allowCompaction | ";
	if((val & BuildAccelerationStructureBitsNV::preferFastTrace)) ret += "preferFastTrace | ";
	if((val & BuildAccelerationStructureBitsNV::preferFastBuild)) ret += "preferFastBuild | ";
	if((val & BuildAccelerationStructureBitsNV::lowMemory)) ret += "lowMemory | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
const char* name(QueueGlobalPriorityEXT val) {
	switch(val) {
		case QueueGlobalPriorityEXT::low: return "low";
		case QueueGlobalPriorityEXT::medium: return "medium";
		case QueueGlobalPriorityEXT::high: return "high";
		case QueueGlobalPriorityEXT::realtime: return "realtime";
		default: return nullptr;
	}
}
const char* name(TimeDomainEXT val) {
	switch(val) {
		case TimeDomainEXT::device: return "device";
		case TimeDomainEXT::clockMonotonic: return "clockMonotonic";
		case TimeDomainEXT::clockMonotonicRaw: return "clockMonotonicRaw";
		case TimeDomainEXT::queryPerformanceCounter: return "queryPerformanceCounter";
		default: return nullptr;
	}
}
const char* name(MemoryOverallocationBehaviorAMD val) {
	switch(val) {
		case MemoryOverallocationBehaviorAMD::eDefault: return "eDefault";
		case MemoryOverallocationBehaviorAMD::allowed: return "allowed";
		case MemoryOverallocationBehaviorAMD::disallowed: return "disallowed";
		default: return nullptr;
	}
}
const char* name(PipelineCreationFeedbackBitsEXT val) {
	switch(val) {
		case PipelineCreationFeedbackBitsEXT::valid: return "valid";
		case PipelineCreationFeedbackBitsEXT::applicationPipelineCacheHit: return "applicationPipelineCacheHit";
		case PipelineCreationFeedbackBitsEXT::basePipelineAcceleration: return "basePipelineAcceleration";
		default: return nullptr;
	}
}
std::string name(PipelineCreationFeedbackFlagsEXT val) {
	std::string ret;
	if((val & PipelineCreationFeedbackBitsEXT::valid)) ret += "valid | ";
	if((val & PipelineCreationFeedbackBitsEXT::applicationPipelineCacheHit)) ret += "applicationPipelineCacheHit | ";
	if((val & PipelineCreationFeedbackBitsEXT::basePipelineAcceleration)) ret += "basePipelineAcceleration | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}
const char* name(DriverIdKHR val) {
	switch(val) {
		case DriverIdKHR::amdProprietary: return "amdProprietary";
		case DriverIdKHR::amdOpenSource: return "amdOpenSource";
		case DriverIdKHR::mesaRadv: return "mesaRadv";
		case DriverIdKHR::nvidiaProprietary: return "nvidiaProprietary";
		case DriverIdKHR::intelProprietaryWindows: return "intelProprietaryWindows";
		case DriverIdKHR::intelOpenSourceMESA: return "intelOpenSourceMESA";
		case DriverIdKHR::imaginationProprietary: return "imaginationProprietary";
		case DriverIdKHR::qualcommProprietary: return "qualcommProprietary";
		case DriverIdKHR::armProprietary: return "armProprietary";
		case DriverIdKHR::googlePastel: return "googlePastel";
		case DriverIdKHR::ggpProprietary: return "ggpProprietary";
		default: return nullptr;
	}
}
const char* name(ResolveModeBitsKHR val) {
	switch(val) {
		case ResolveModeBitsKHR::none: return "none";
		case ResolveModeBitsKHR::average: return "average";
		case ResolveModeBitsKHR::min: return "min";
		case ResolveModeBitsKHR::max: return "max";
		default: return nullptr;
	}
}
std::string name(ResolveModeFlagsKHR val) {
	std::string ret;
	if((val & ResolveModeBitsKHR::none)) ret += "none | ";
	if((val & ResolveModeBitsKHR::average)) ret += "average | ";
	if((val & ResolveModeBitsKHR::min)) ret += "min | ";
	if((val & ResolveModeBitsKHR::max)) ret += "max | ";
	if(!ret.empty()) ret.erase(ret.size() - 2, 2);
	return ret;

}

#ifdef VK_USE_PLATFORM_FUCHSIA
#endif //VK_USE_PLATFORM_FUCHSIA

const char* name(ValidationFeatureEnableEXT val) {
	switch(val) {
		case ValidationFeatureEnableEXT::gpuAssisted: return "gpuAssisted";
		case ValidationFeatureEnableEXT::gpuAssistedReserveBindingSlot: return "gpuAssistedReserveBindingSlot";
		default: return nullptr;
	}
}
const char* name(ValidationFeatureDisableEXT val) {
	switch(val) {
		case ValidationFeatureDisableEXT::all: return "all";
		case ValidationFeatureDisableEXT::shaders: return "shaders";
		case ValidationFeatureDisableEXT::threadSafety: return "threadSafety";
		case ValidationFeatureDisableEXT::apiParameters: return "apiParameters";
		case ValidationFeatureDisableEXT::objectLifetimes: return "objectLifetimes";
		case ValidationFeatureDisableEXT::coreChecks: return "coreChecks";
		case ValidationFeatureDisableEXT::uniqueHandles: return "uniqueHandles";
		default: return nullptr;
	}
}
const char* name(ComponentTypeNV val) {
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
const char* name(ScopeNV val) {
	switch(val) {
		case ScopeNV::device: return "device";
		case ScopeNV::workgroup: return "workgroup";
		case ScopeNV::subgroup: return "subgroup";
		case ScopeNV::queueFamily: return "queueFamily";
		default: return nullptr;
	}
}
const char* name(CoverageReductionModeNV val) {
	switch(val) {
		case CoverageReductionModeNV::merge: return "merge";
		case CoverageReductionModeNV::truncate: return "truncate";
		default: return nullptr;
	}
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
const char* name(FullScreenExclusiveEXT val) {
	switch(val) {
		case FullScreenExclusiveEXT::eDefault: return "eDefault";
		case FullScreenExclusiveEXT::allowed: return "allowed";
		case FullScreenExclusiveEXT::disallowed: return "disallowed";
		case FullScreenExclusiveEXT::applicationControlled: return "applicationControlled";
		default: return nullptr;
	}
}
#endif //VK_USE_PLATFORM_WIN32_KHR


} // namespace vk

// The specification (vk.xml) itself is published under the following license:

// Copyright (c) 2015-2019 The Khronos Group Inc.
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
// ---- Exceptions to the Apache 2.0 License: ----
// 
// As an exception, if you use this Software to generate code and portions of
// this Software are embedded into the generated code as a result, you may
// redistribute such product without providing attribution as would otherwise
// be required by Sections 4(a), 4(b) and 4(d) of the License.
// 
// In addition, if you combine or link code generated by this Software with
// software that is licensed under the GPLv2 or the LGPL v2.0 or 2.1
// ("`Combined Software`") and if a court of competent jurisdiction determines
// that the patent provision (Section 3), the indemnity provision (Section 9)
// or other Section of the License conflicts with the conditions of the
// applicable GPL or LGPL license, you may retroactively and prospectively
// choose to deem waived or otherwise exclude such Section(s) of the License,
// but only in their entirety and only with respect to the Combined Software.
    