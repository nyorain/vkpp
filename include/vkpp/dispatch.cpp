
// Copyright (c) 2020 nyorain
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

// Automaitcally generated vulkan header, see nyorain/vkpp
// Do not edit manually, rather edit the codegen files.

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

	VKPP_LOAD(vkCreateInstance);
	VKPP_LOAD(vkDestroyInstance);
	VKPP_LOAD(vkEnumeratePhysicalDevices);
	VKPP_LOAD(vkGetPhysicalDeviceFeatures);
	VKPP_LOAD(vkGetPhysicalDeviceFormatProperties);
	VKPP_LOAD(vkGetPhysicalDeviceImageFormatProperties);
	VKPP_LOAD(vkGetPhysicalDeviceProperties);
	VKPP_LOAD(vkGetPhysicalDeviceQueueFamilyProperties);
	VKPP_LOAD(vkGetPhysicalDeviceMemoryProperties);
	VKPP_LOAD(vkGetInstanceProcAddr);
	VKPP_LOAD(vkCreateDevice);
	VKPP_LOAD(vkEnumerateInstanceExtensionProperties);
	VKPP_LOAD(vkEnumerateDeviceExtensionProperties);
	VKPP_LOAD(vkEnumerateInstanceLayerProperties);
	VKPP_LOAD(vkEnumerateDeviceLayerProperties);
	VKPP_LOAD(vkGetPhysicalDeviceSparseImageFormatProperties);
	VKPP_LOAD(vkEnumerateInstanceVersion);
	VKPP_LOAD(vkEnumeratePhysicalDeviceGroups);
	VKPP_LOAD(vkEnumeratePhysicalDeviceGroupsKHR);
	VKPP_LOAD(vkGetPhysicalDeviceFeatures2);
	VKPP_LOAD(vkGetPhysicalDeviceFeatures2KHR);
	VKPP_LOAD(vkGetPhysicalDeviceProperties2);
	VKPP_LOAD(vkGetPhysicalDeviceProperties2KHR);
	VKPP_LOAD(vkGetPhysicalDeviceFormatProperties2);
	VKPP_LOAD(vkGetPhysicalDeviceFormatProperties2KHR);
	VKPP_LOAD(vkGetPhysicalDeviceImageFormatProperties2);
	VKPP_LOAD(vkGetPhysicalDeviceImageFormatProperties2KHR);
	VKPP_LOAD(vkGetPhysicalDeviceQueueFamilyProperties2);
	VKPP_LOAD(vkGetPhysicalDeviceQueueFamilyProperties2KHR);
	VKPP_LOAD(vkGetPhysicalDeviceMemoryProperties2);
	VKPP_LOAD(vkGetPhysicalDeviceMemoryProperties2KHR);
	VKPP_LOAD(vkGetPhysicalDeviceSparseImageFormatProperties2);
	VKPP_LOAD(vkGetPhysicalDeviceSparseImageFormatProperties2KHR);
	VKPP_LOAD(vkGetPhysicalDeviceExternalBufferProperties);
	VKPP_LOAD(vkGetPhysicalDeviceExternalBufferPropertiesKHR);
	VKPP_LOAD(vkGetPhysicalDeviceExternalFenceProperties);
	VKPP_LOAD(vkGetPhysicalDeviceExternalFencePropertiesKHR);
	VKPP_LOAD(vkGetPhysicalDeviceExternalSemaphoreProperties);
	VKPP_LOAD(vkGetPhysicalDeviceExternalSemaphorePropertiesKHR);
	VKPP_LOAD(vkGetPhysicalDeviceToolProperties);
	VKPP_LOAD(vkGetPhysicalDeviceToolPropertiesEXT);
	VKPP_LOAD(vkDestroySurfaceKHR);
	VKPP_LOAD(vkGetPhysicalDeviceSurfaceSupportKHR);
	VKPP_LOAD(vkGetPhysicalDeviceSurfaceCapabilitiesKHR);
	VKPP_LOAD(vkGetPhysicalDeviceSurfaceFormatsKHR);
	VKPP_LOAD(vkGetPhysicalDeviceSurfacePresentModesKHR);
	VKPP_LOAD(vkGetPhysicalDevicePresentRectanglesKHR);
	VKPP_LOAD(vkGetPhysicalDeviceDisplayPropertiesKHR);
	VKPP_LOAD(vkGetPhysicalDeviceDisplayPlanePropertiesKHR);
	VKPP_LOAD(vkGetDisplayPlaneSupportedDisplaysKHR);
	VKPP_LOAD(vkGetDisplayModePropertiesKHR);
	VKPP_LOAD(vkCreateDisplayModeKHR);
	VKPP_LOAD(vkGetDisplayPlaneCapabilitiesKHR);
	VKPP_LOAD(vkCreateDisplayPlaneSurfaceKHR);

#ifdef VK_USE_PLATFORM_XLIB_KHR
	VKPP_LOAD(vkCreateXlibSurfaceKHR);
	VKPP_LOAD(vkGetPhysicalDeviceXlibPresentationSupportKHR);
#endif //VK_USE_PLATFORM_XLIB_KHR


#ifdef VK_USE_PLATFORM_XCB_KHR
	VKPP_LOAD(vkCreateXcbSurfaceKHR);
	VKPP_LOAD(vkGetPhysicalDeviceXcbPresentationSupportKHR);
#endif //VK_USE_PLATFORM_XCB_KHR


#ifdef VK_USE_PLATFORM_WAYLAND_KHR
	VKPP_LOAD(vkCreateWaylandSurfaceKHR);
	VKPP_LOAD(vkGetPhysicalDeviceWaylandPresentationSupportKHR);
#endif //VK_USE_PLATFORM_WAYLAND_KHR


#ifdef VK_USE_PLATFORM_WIN32_KHR
	VKPP_LOAD(vkCreateWin32SurfaceKHR);
	VKPP_LOAD(vkGetPhysicalDeviceWin32PresentationSupportKHR);
#endif //VK_USE_PLATFORM_WIN32_KHR

	VKPP_LOAD(vkGetPhysicalDeviceVideoCapabilitiesKHR);
	VKPP_LOAD(vkGetPhysicalDeviceVideoFormatPropertiesKHR);

#ifdef VK_USE_PLATFORM_WIN32_KHR
#endif //VK_USE_PLATFORM_WIN32_KHR


#ifdef VK_USE_PLATFORM_WIN32_KHR
#endif //VK_USE_PLATFORM_WIN32_KHR


#ifdef VK_USE_PLATFORM_WIN32_KHR
#endif //VK_USE_PLATFORM_WIN32_KHR

	VKPP_LOAD(vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR);
	VKPP_LOAD(vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR);
	VKPP_LOAD(vkGetPhysicalDeviceSurfaceCapabilities2KHR);
	VKPP_LOAD(vkGetPhysicalDeviceSurfaceFormats2KHR);
	VKPP_LOAD(vkGetPhysicalDeviceDisplayProperties2KHR);
	VKPP_LOAD(vkGetPhysicalDeviceDisplayPlaneProperties2KHR);
	VKPP_LOAD(vkGetDisplayModeProperties2KHR);
	VKPP_LOAD(vkGetDisplayPlaneCapabilities2KHR);
	VKPP_LOAD(vkGetPhysicalDeviceFragmentShadingRatesKHR);
	VKPP_LOAD(vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR);
	VKPP_LOAD(vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR);
	VKPP_LOAD(vkGetPhysicalDeviceCalibrateableTimeDomainsKHR);
	VKPP_LOAD(vkGetPhysicalDeviceCalibrateableTimeDomainsEXT);
	VKPP_LOAD(vkCreateDebugReportCallbackEXT);
	VKPP_LOAD(vkDestroyDebugReportCallbackEXT);
	VKPP_LOAD(vkDebugReportMessageEXT);
	VKPP_LOAD(vkReleaseDisplayEXT);

#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
	VKPP_LOAD(vkAcquireXlibDisplayEXT);
	VKPP_LOAD(vkGetRandROutputDisplayEXT);
#endif //VK_USE_PLATFORM_XLIB_XRANDR_EXT

	VKPP_LOAD(vkGetPhysicalDeviceSurfaceCapabilities2EXT);
	VKPP_LOAD(vkCreateDebugUtilsMessengerEXT);
	VKPP_LOAD(vkDestroyDebugUtilsMessengerEXT);
	VKPP_LOAD(vkSubmitDebugUtilsMessageEXT);
	VKPP_LOAD(vkGetPhysicalDeviceDescriptorSizeEXT);
	VKPP_LOAD(vkGetPhysicalDeviceMultisamplePropertiesEXT);

#ifdef VK_USE_PLATFORM_WIN32_KHR
	VKPP_LOAD(vkGetPhysicalDeviceSurfacePresentModes2EXT);
#endif //VK_USE_PLATFORM_WIN32_KHR

	VKPP_LOAD(vkCreateHeadlessSurfaceEXT);
	VKPP_LOAD(vkAcquireDrmDisplayEXT);
	VKPP_LOAD(vkGetDrmDisplayEXT);

#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
	VKPP_LOAD(vkCreateDirectFBSurfaceEXT);
	VKPP_LOAD(vkGetPhysicalDeviceDirectFBPresentationSupportEXT);
#endif //VK_USE_PLATFORM_DIRECTFB_EXT


#ifdef VK_USE_PLATFORM_GGP
	VKPP_LOAD(vkCreateStreamDescriptorSurfaceGGP);
#endif //VK_USE_PLATFORM_GGP

	VKPP_LOAD(vkGetPhysicalDeviceExternalImageFormatPropertiesNV);

#ifdef VK_USE_PLATFORM_WIN32_KHR
#endif //VK_USE_PLATFORM_WIN32_KHR


#ifdef VK_USE_PLATFORM_VI_NN
	VKPP_LOAD(vkCreateViSurfaceNN);
#endif //VK_USE_PLATFORM_VI_NN


#ifdef VK_USE_PLATFORM_IOS_MVK
	VKPP_LOAD(vkCreateIOSSurfaceMVK);
#endif //VK_USE_PLATFORM_IOS_MVK


#ifdef VK_USE_PLATFORM_MACOS_MVK
	VKPP_LOAD(vkCreateMacOSSurfaceMVK);
#endif //VK_USE_PLATFORM_MACOS_MVK


#ifdef VK_USE_PLATFORM_FUCHSIA
	VKPP_LOAD(vkCreateImagePipeSurfaceFUCHSIA);
#endif //VK_USE_PLATFORM_FUCHSIA

	VKPP_LOAD(vkGetPhysicalDeviceCooperativeMatrixPropertiesNV);
	VKPP_LOAD(vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV);

#ifdef VK_USE_PLATFORM_WIN32_KHR
	VKPP_LOAD(vkAcquireWinrtDisplayNV);
	VKPP_LOAD(vkGetWinrtDisplayNV);
#endif //VK_USE_PLATFORM_WIN32_KHR


#ifdef VK_USE_PLATFORM_FUCHSIA
#endif //VK_USE_PLATFORM_FUCHSIA


#ifdef VK_USE_PLATFORM_FUCHSIA
#endif //VK_USE_PLATFORM_FUCHSIA


#ifdef VK_USE_PLATFORM_FUCHSIA
#endif //VK_USE_PLATFORM_FUCHSIA


#ifdef VK_USE_PLATFORM_SCREEN_QNX
	VKPP_LOAD(vkCreateScreenSurfaceQNX);
	VKPP_LOAD(vkGetPhysicalDeviceScreenPresentationSupportQNX);
#endif //VK_USE_PLATFORM_SCREEN_QNX


#ifdef VK_USE_PLATFORM_OHOS
#endif //VK_USE_PLATFORM_OHOS

	VKPP_LOAD(vkGetPhysicalDeviceExternalTensorPropertiesARM);
	VKPP_LOAD(vkGetPhysicalDeviceOpticalFlowImageFormatsNV);
	VKPP_LOAD(vkGetPhysicalDeviceCooperativeVectorPropertiesNV);
	VKPP_LOAD(vkGetPhysicalDeviceQueueFamilyDataGraphPropertiesARM);
	VKPP_LOAD(vkGetPhysicalDeviceQueueFamilyDataGraphProcessingEnginePropertiesARM);
	VKPP_LOAD(vkGetPhysicalDeviceQueueFamilyDataGraphEngineOperationPropertiesARM);

#ifdef VK_USE_PLATFORM_SCREEN_QNX
#endif //VK_USE_PLATFORM_SCREEN_QNX

	VKPP_LOAD(vkGetExternalComputeQueueDataNV);

#ifdef VK_USE_PLATFORM_OHOS
	VKPP_LOAD(vkCreateSurfaceOHOS);
#endif //VK_USE_PLATFORM_OHOS

	VKPP_LOAD(vkGetPhysicalDeviceCooperativeMatrixFlexibleDimensionsPropertiesNV);
	VKPP_LOAD(vkEnumeratePhysicalDeviceQueueFamilyPerformanceCountersByRegionARM);
	VKPP_LOAD(vkEnumeratePhysicalDeviceShaderInstrumentationMetricsARM);
	VKPP_LOAD(vkGetPhysicalDeviceQueueFamilyDataGraphOpticalFlowImageFormatsARM);

#ifdef VK_USE_PLATFORM_UBM_SEC
	VKPP_LOAD(vkCreateUbmSurfaceSEC);
	VKPP_LOAD(vkGetPhysicalDeviceUbmPresentationSupportSEC);
#endif //VK_USE_PLATFORM_UBM_SEC



	if(all) {
		VKPP_LOAD(vkGetDeviceProcAddr);
		VKPP_LOAD(vkDestroyDevice);
		VKPP_LOAD(vkGetDeviceQueue);
		VKPP_LOAD(vkQueueSubmit);
		VKPP_LOAD(vkQueueWaitIdle);
		VKPP_LOAD(vkDeviceWaitIdle);
		VKPP_LOAD(vkAllocateMemory);
		VKPP_LOAD(vkFreeMemory);
		VKPP_LOAD(vkMapMemory);
		VKPP_LOAD(vkUnmapMemory);
		VKPP_LOAD(vkFlushMappedMemoryRanges);
		VKPP_LOAD(vkInvalidateMappedMemoryRanges);
		VKPP_LOAD(vkGetDeviceMemoryCommitment);
		VKPP_LOAD(vkBindBufferMemory);
		VKPP_LOAD(vkBindImageMemory);
		VKPP_LOAD(vkGetBufferMemoryRequirements);
		VKPP_LOAD(vkGetImageMemoryRequirements);
		VKPP_LOAD(vkGetImageSparseMemoryRequirements);
		VKPP_LOAD(vkQueueBindSparse);
		VKPP_LOAD(vkCreateFence);
		VKPP_LOAD(vkDestroyFence);
		VKPP_LOAD(vkResetFences);
		VKPP_LOAD(vkGetFenceStatus);
		VKPP_LOAD(vkWaitForFences);
		VKPP_LOAD(vkCreateSemaphore);
		VKPP_LOAD(vkDestroySemaphore);
		VKPP_LOAD(vkCreateQueryPool);
		VKPP_LOAD(vkDestroyQueryPool);
		VKPP_LOAD(vkGetQueryPoolResults);
		VKPP_LOAD(vkCreateBuffer);
		VKPP_LOAD(vkDestroyBuffer);
		VKPP_LOAD(vkCreateImage);
		VKPP_LOAD(vkDestroyImage);
		VKPP_LOAD(vkGetImageSubresourceLayout);
		VKPP_LOAD(vkCreateImageView);
		VKPP_LOAD(vkDestroyImageView);
		VKPP_LOAD(vkCreateCommandPool);
		VKPP_LOAD(vkDestroyCommandPool);
		VKPP_LOAD(vkResetCommandPool);
		VKPP_LOAD(vkAllocateCommandBuffers);
		VKPP_LOAD(vkFreeCommandBuffers);
		VKPP_LOAD(vkBeginCommandBuffer);
		VKPP_LOAD(vkEndCommandBuffer);
		VKPP_LOAD(vkResetCommandBuffer);
		VKPP_LOAD(vkCmdCopyBuffer);
		VKPP_LOAD(vkCmdCopyImage);
		VKPP_LOAD(vkCmdCopyBufferToImage);
		VKPP_LOAD(vkCmdCopyImageToBuffer);
		VKPP_LOAD(vkCmdUpdateBuffer);
		VKPP_LOAD(vkCmdFillBuffer);
		VKPP_LOAD(vkCmdPipelineBarrier);
		VKPP_LOAD(vkCmdBeginQuery);
		VKPP_LOAD(vkCmdEndQuery);
		VKPP_LOAD(vkCmdResetQueryPool);
		VKPP_LOAD(vkCmdWriteTimestamp);
		VKPP_LOAD(vkCmdCopyQueryPoolResults);
		VKPP_LOAD(vkCmdExecuteCommands);
		VKPP_LOAD(vkBindBufferMemory2);
		VKPP_LOAD(vkBindBufferMemory2KHR);
		VKPP_LOAD(vkBindImageMemory2);
		VKPP_LOAD(vkBindImageMemory2KHR);
		VKPP_LOAD(vkGetDeviceGroupPeerMemoryFeatures);
		VKPP_LOAD(vkGetDeviceGroupPeerMemoryFeaturesKHR);
		VKPP_LOAD(vkCmdSetDeviceMask);
		VKPP_LOAD(vkCmdSetDeviceMaskKHR);
		VKPP_LOAD(vkGetImageMemoryRequirements2);
		VKPP_LOAD(vkGetImageMemoryRequirements2KHR);
		VKPP_LOAD(vkGetBufferMemoryRequirements2);
		VKPP_LOAD(vkGetBufferMemoryRequirements2KHR);
		VKPP_LOAD(vkGetImageSparseMemoryRequirements2);
		VKPP_LOAD(vkGetImageSparseMemoryRequirements2KHR);
		VKPP_LOAD(vkTrimCommandPool);
		VKPP_LOAD(vkTrimCommandPoolKHR);
		VKPP_LOAD(vkGetDeviceQueue2);
		VKPP_LOAD(vkResetQueryPool);
		VKPP_LOAD(vkResetQueryPoolEXT);
		VKPP_LOAD(vkGetSemaphoreCounterValue);
		VKPP_LOAD(vkGetSemaphoreCounterValueKHR);
		VKPP_LOAD(vkWaitSemaphores);
		VKPP_LOAD(vkWaitSemaphoresKHR);
		VKPP_LOAD(vkSignalSemaphore);
		VKPP_LOAD(vkSignalSemaphoreKHR);
		VKPP_LOAD(vkGetBufferDeviceAddress);
		VKPP_LOAD(vkGetBufferDeviceAddressKHR);
		VKPP_LOAD(vkGetBufferDeviceAddressEXT);
		VKPP_LOAD(vkGetBufferOpaqueCaptureAddress);
		VKPP_LOAD(vkGetBufferOpaqueCaptureAddressKHR);
		VKPP_LOAD(vkGetDeviceMemoryOpaqueCaptureAddress);
		VKPP_LOAD(vkGetDeviceMemoryOpaqueCaptureAddressKHR);
		VKPP_LOAD(vkCreatePrivateDataSlot);
		VKPP_LOAD(vkCreatePrivateDataSlotEXT);
		VKPP_LOAD(vkDestroyPrivateDataSlot);
		VKPP_LOAD(vkDestroyPrivateDataSlotEXT);
		VKPP_LOAD(vkSetPrivateData);
		VKPP_LOAD(vkSetPrivateDataEXT);
		VKPP_LOAD(vkGetPrivateData);
		VKPP_LOAD(vkGetPrivateDataEXT);
		VKPP_LOAD(vkCmdPipelineBarrier2);
		VKPP_LOAD(vkCmdPipelineBarrier2KHR);
		VKPP_LOAD(vkCmdWriteTimestamp2);
		VKPP_LOAD(vkCmdWriteTimestamp2KHR);
		VKPP_LOAD(vkQueueSubmit2);
		VKPP_LOAD(vkQueueSubmit2KHR);
		VKPP_LOAD(vkCmdCopyBuffer2);
		VKPP_LOAD(vkCmdCopyBuffer2KHR);
		VKPP_LOAD(vkCmdCopyImage2);
		VKPP_LOAD(vkCmdCopyImage2KHR);
		VKPP_LOAD(vkCmdCopyBufferToImage2);
		VKPP_LOAD(vkCmdCopyBufferToImage2KHR);
		VKPP_LOAD(vkCmdCopyImageToBuffer2);
		VKPP_LOAD(vkCmdCopyImageToBuffer2KHR);
		VKPP_LOAD(vkGetDeviceBufferMemoryRequirements);
		VKPP_LOAD(vkGetDeviceBufferMemoryRequirementsKHR);
		VKPP_LOAD(vkGetDeviceImageMemoryRequirements);
		VKPP_LOAD(vkGetDeviceImageMemoryRequirementsKHR);
		VKPP_LOAD(vkGetDeviceImageSparseMemoryRequirements);
		VKPP_LOAD(vkGetDeviceImageSparseMemoryRequirementsKHR);
		VKPP_LOAD(vkMapMemory2);
		VKPP_LOAD(vkMapMemory2KHR);
		VKPP_LOAD(vkUnmapMemory2);
		VKPP_LOAD(vkUnmapMemory2KHR);
		VKPP_LOAD(vkGetDeviceImageSubresourceLayout);
		VKPP_LOAD(vkGetDeviceImageSubresourceLayoutKHR);
		VKPP_LOAD(vkGetImageSubresourceLayout2);
		VKPP_LOAD(vkGetImageSubresourceLayout2KHR);
		VKPP_LOAD(vkGetImageSubresourceLayout2EXT);
		VKPP_LOAD(vkCopyMemoryToImage);
		VKPP_LOAD(vkCopyMemoryToImageEXT);
		VKPP_LOAD(vkCopyImageToMemory);
		VKPP_LOAD(vkCopyImageToMemoryEXT);
		VKPP_LOAD(vkCopyImageToImage);
		VKPP_LOAD(vkCopyImageToImageEXT);
		VKPP_LOAD(vkTransitionImageLayout);
		VKPP_LOAD(vkTransitionImageLayoutEXT);
		VKPP_LOAD(vkCreateEvent);
		VKPP_LOAD(vkDestroyEvent);
		VKPP_LOAD(vkGetEventStatus);
		VKPP_LOAD(vkSetEvent);
		VKPP_LOAD(vkResetEvent);
		VKPP_LOAD(vkCreateBufferView);
		VKPP_LOAD(vkDestroyBufferView);
		VKPP_LOAD(vkCreateShaderModule);
		VKPP_LOAD(vkDestroyShaderModule);
		VKPP_LOAD(vkCreatePipelineCache);
		VKPP_LOAD(vkDestroyPipelineCache);
		VKPP_LOAD(vkGetPipelineCacheData);
		VKPP_LOAD(vkMergePipelineCaches);
		VKPP_LOAD(vkCreateComputePipelines);
		VKPP_LOAD(vkDestroyPipeline);
		VKPP_LOAD(vkCreatePipelineLayout);
		VKPP_LOAD(vkDestroyPipelineLayout);
		VKPP_LOAD(vkCreateSampler);
		VKPP_LOAD(vkDestroySampler);
		VKPP_LOAD(vkCreateDescriptorSetLayout);
		VKPP_LOAD(vkDestroyDescriptorSetLayout);
		VKPP_LOAD(vkCreateDescriptorPool);
		VKPP_LOAD(vkDestroyDescriptorPool);
		VKPP_LOAD(vkResetDescriptorPool);
		VKPP_LOAD(vkAllocateDescriptorSets);
		VKPP_LOAD(vkFreeDescriptorSets);
		VKPP_LOAD(vkUpdateDescriptorSets);
		VKPP_LOAD(vkCmdBindPipeline);
		VKPP_LOAD(vkCmdBindDescriptorSets);
		VKPP_LOAD(vkCmdClearColorImage);
		VKPP_LOAD(vkCmdDispatch);
		VKPP_LOAD(vkCmdDispatchIndirect);
		VKPP_LOAD(vkCmdSetEvent);
		VKPP_LOAD(vkCmdResetEvent);
		VKPP_LOAD(vkCmdWaitEvents);
		VKPP_LOAD(vkCmdPushConstants);
		VKPP_LOAD(vkCmdDispatchBase);
		VKPP_LOAD(vkCmdDispatchBaseKHR);
		VKPP_LOAD(vkCreateDescriptorUpdateTemplate);
		VKPP_LOAD(vkCreateDescriptorUpdateTemplateKHR);
		VKPP_LOAD(vkDestroyDescriptorUpdateTemplate);
		VKPP_LOAD(vkDestroyDescriptorUpdateTemplateKHR);
		VKPP_LOAD(vkUpdateDescriptorSetWithTemplate);
		VKPP_LOAD(vkUpdateDescriptorSetWithTemplateKHR);
		VKPP_LOAD(vkGetDescriptorSetLayoutSupport);
		VKPP_LOAD(vkGetDescriptorSetLayoutSupportKHR);
		VKPP_LOAD(vkCreateSamplerYcbcrConversion);
		VKPP_LOAD(vkCreateSamplerYcbcrConversionKHR);
		VKPP_LOAD(vkDestroySamplerYcbcrConversion);
		VKPP_LOAD(vkDestroySamplerYcbcrConversionKHR);
		VKPP_LOAD(vkCmdSetEvent2);
		VKPP_LOAD(vkCmdSetEvent2KHR);
		VKPP_LOAD(vkCmdResetEvent2);
		VKPP_LOAD(vkCmdResetEvent2KHR);
		VKPP_LOAD(vkCmdWaitEvents2);
		VKPP_LOAD(vkCmdWaitEvents2KHR);
		VKPP_LOAD(vkCmdPushDescriptorSet);
		VKPP_LOAD(vkCmdPushDescriptorSetKHR);
		VKPP_LOAD(vkCmdPushDescriptorSetWithTemplate);
		VKPP_LOAD(vkCmdPushDescriptorSetWithTemplateKHR);
		VKPP_LOAD(vkCmdBindDescriptorSets2);
		VKPP_LOAD(vkCmdBindDescriptorSets2KHR);
		VKPP_LOAD(vkCmdPushConstants2);
		VKPP_LOAD(vkCmdPushConstants2KHR);
		VKPP_LOAD(vkCmdPushDescriptorSet2);
		VKPP_LOAD(vkCmdPushDescriptorSet2KHR);
		VKPP_LOAD(vkCmdPushDescriptorSetWithTemplate2);
		VKPP_LOAD(vkCmdPushDescriptorSetWithTemplate2KHR);
		VKPP_LOAD(vkCreateGraphicsPipelines);
		VKPP_LOAD(vkCreateFramebuffer);
		VKPP_LOAD(vkDestroyFramebuffer);
		VKPP_LOAD(vkCreateRenderPass);
		VKPP_LOAD(vkDestroyRenderPass);
		VKPP_LOAD(vkGetRenderAreaGranularity);
		VKPP_LOAD(vkCmdSetViewport);
		VKPP_LOAD(vkCmdSetScissor);
		VKPP_LOAD(vkCmdSetLineWidth);
		VKPP_LOAD(vkCmdSetDepthBias);
		VKPP_LOAD(vkCmdSetBlendConstants);
		VKPP_LOAD(vkCmdSetDepthBounds);
		VKPP_LOAD(vkCmdSetStencilCompareMask);
		VKPP_LOAD(vkCmdSetStencilWriteMask);
		VKPP_LOAD(vkCmdSetStencilReference);
		VKPP_LOAD(vkCmdBindIndexBuffer);
		VKPP_LOAD(vkCmdBindVertexBuffers);
		VKPP_LOAD(vkCmdDraw);
		VKPP_LOAD(vkCmdDrawIndexed);
		VKPP_LOAD(vkCmdDrawIndirect);
		VKPP_LOAD(vkCmdDrawIndexedIndirect);
		VKPP_LOAD(vkCmdBlitImage);
		VKPP_LOAD(vkCmdClearDepthStencilImage);
		VKPP_LOAD(vkCmdClearAttachments);
		VKPP_LOAD(vkCmdResolveImage);
		VKPP_LOAD(vkCmdBeginRenderPass);
		VKPP_LOAD(vkCmdNextSubpass);
		VKPP_LOAD(vkCmdEndRenderPass);
		VKPP_LOAD(vkCmdDrawIndirectCount);
		VKPP_LOAD(vkCmdDrawIndirectCountKHR);
		VKPP_LOAD(vkCmdDrawIndirectCountAMD);
		VKPP_LOAD(vkCmdDrawIndexedIndirectCount);
		VKPP_LOAD(vkCmdDrawIndexedIndirectCountKHR);
		VKPP_LOAD(vkCmdDrawIndexedIndirectCountAMD);
		VKPP_LOAD(vkCreateRenderPass2);
		VKPP_LOAD(vkCreateRenderPass2KHR);
		VKPP_LOAD(vkCmdBeginRenderPass2);
		VKPP_LOAD(vkCmdBeginRenderPass2KHR);
		VKPP_LOAD(vkCmdNextSubpass2);
		VKPP_LOAD(vkCmdNextSubpass2KHR);
		VKPP_LOAD(vkCmdEndRenderPass2);
		VKPP_LOAD(vkCmdEndRenderPass2KHR);
		VKPP_LOAD(vkCmdBlitImage2);
		VKPP_LOAD(vkCmdBlitImage2KHR);
		VKPP_LOAD(vkCmdResolveImage2);
		VKPP_LOAD(vkCmdResolveImage2KHR);
		VKPP_LOAD(vkCmdBeginRendering);
		VKPP_LOAD(vkCmdBeginRenderingKHR);
		VKPP_LOAD(vkCmdEndRendering);
		VKPP_LOAD(vkCmdEndRenderingKHR);
		VKPP_LOAD(vkCmdSetCullMode);
		VKPP_LOAD(vkCmdSetCullModeEXT);
		VKPP_LOAD(vkCmdSetFrontFace);
		VKPP_LOAD(vkCmdSetFrontFaceEXT);
		VKPP_LOAD(vkCmdSetPrimitiveTopology);
		VKPP_LOAD(vkCmdSetPrimitiveTopologyEXT);
		VKPP_LOAD(vkCmdSetViewportWithCount);
		VKPP_LOAD(vkCmdSetViewportWithCountEXT);
		VKPP_LOAD(vkCmdSetScissorWithCount);
		VKPP_LOAD(vkCmdSetScissorWithCountEXT);
		VKPP_LOAD(vkCmdBindVertexBuffers2);
		VKPP_LOAD(vkCmdBindVertexBuffers2EXT);
		VKPP_LOAD(vkCmdSetDepthTestEnable);
		VKPP_LOAD(vkCmdSetDepthTestEnableEXT);
		VKPP_LOAD(vkCmdSetDepthWriteEnable);
		VKPP_LOAD(vkCmdSetDepthWriteEnableEXT);
		VKPP_LOAD(vkCmdSetDepthCompareOp);
		VKPP_LOAD(vkCmdSetDepthCompareOpEXT);
		VKPP_LOAD(vkCmdSetDepthBoundsTestEnable);
		VKPP_LOAD(vkCmdSetDepthBoundsTestEnableEXT);
		VKPP_LOAD(vkCmdSetStencilTestEnable);
		VKPP_LOAD(vkCmdSetStencilTestEnableEXT);
		VKPP_LOAD(vkCmdSetStencilOp);
		VKPP_LOAD(vkCmdSetStencilOpEXT);
		VKPP_LOAD(vkCmdSetRasterizerDiscardEnable);
		VKPP_LOAD(vkCmdSetRasterizerDiscardEnableEXT);
		VKPP_LOAD(vkCmdSetDepthBiasEnable);
		VKPP_LOAD(vkCmdSetDepthBiasEnableEXT);
		VKPP_LOAD(vkCmdSetPrimitiveRestartEnable);
		VKPP_LOAD(vkCmdSetPrimitiveRestartEnableEXT);
		VKPP_LOAD(vkCmdSetLineStipple);
		VKPP_LOAD(vkCmdSetLineStippleKHR);
		VKPP_LOAD(vkCmdSetLineStippleEXT);
		VKPP_LOAD(vkCmdBindIndexBuffer2);
		VKPP_LOAD(vkCmdBindIndexBuffer2KHR);
		VKPP_LOAD(vkGetRenderingAreaGranularity);
		VKPP_LOAD(vkGetRenderingAreaGranularityKHR);
		VKPP_LOAD(vkCmdSetRenderingAttachmentLocations);
		VKPP_LOAD(vkCmdSetRenderingAttachmentLocationsKHR);
		VKPP_LOAD(vkCmdSetRenderingInputAttachmentIndices);
		VKPP_LOAD(vkCmdSetRenderingInputAttachmentIndicesKHR);
		VKPP_LOAD(vkCreateSwapchainKHR);
		VKPP_LOAD(vkDestroySwapchainKHR);
		VKPP_LOAD(vkGetSwapchainImagesKHR);
		VKPP_LOAD(vkAcquireNextImageKHR);
		VKPP_LOAD(vkQueuePresentKHR);
		VKPP_LOAD(vkGetDeviceGroupPresentCapabilitiesKHR);
		VKPP_LOAD(vkGetDeviceGroupSurfacePresentModesKHR);
		VKPP_LOAD(vkAcquireNextImage2KHR);
		VKPP_LOAD(vkCreateSharedSwapchainsKHR);

#ifdef VK_USE_PLATFORM_XLIB_KHR
#endif //VK_USE_PLATFORM_XLIB_KHR


#ifdef VK_USE_PLATFORM_XCB_KHR
#endif //VK_USE_PLATFORM_XCB_KHR


#ifdef VK_USE_PLATFORM_WAYLAND_KHR
#endif //VK_USE_PLATFORM_WAYLAND_KHR


#ifdef VK_USE_PLATFORM_WIN32_KHR
#endif //VK_USE_PLATFORM_WIN32_KHR

		VKPP_LOAD(vkCreateVideoSessionKHR);
		VKPP_LOAD(vkDestroyVideoSessionKHR);
		VKPP_LOAD(vkGetVideoSessionMemoryRequirementsKHR);
		VKPP_LOAD(vkBindVideoSessionMemoryKHR);
		VKPP_LOAD(vkCreateVideoSessionParametersKHR);
		VKPP_LOAD(vkUpdateVideoSessionParametersKHR);
		VKPP_LOAD(vkDestroyVideoSessionParametersKHR);
		VKPP_LOAD(vkCmdBeginVideoCodingKHR);
		VKPP_LOAD(vkCmdEndVideoCodingKHR);
		VKPP_LOAD(vkCmdControlVideoCodingKHR);
		VKPP_LOAD(vkCmdDecodeVideoKHR);

#ifdef VK_USE_PLATFORM_WIN32_KHR
		VKPP_LOAD(vkGetMemoryWin32HandleKHR);
		VKPP_LOAD(vkGetMemoryWin32HandlePropertiesKHR);
#endif //VK_USE_PLATFORM_WIN32_KHR

		VKPP_LOAD(vkGetMemoryFdKHR);
		VKPP_LOAD(vkGetMemoryFdPropertiesKHR);

#ifdef VK_USE_PLATFORM_WIN32_KHR
		VKPP_LOAD(vkImportSemaphoreWin32HandleKHR);
		VKPP_LOAD(vkGetSemaphoreWin32HandleKHR);
#endif //VK_USE_PLATFORM_WIN32_KHR

		VKPP_LOAD(vkImportSemaphoreFdKHR);
		VKPP_LOAD(vkGetSemaphoreFdKHR);
		VKPP_LOAD(vkGetSwapchainStatusKHR);

#ifdef VK_USE_PLATFORM_WIN32_KHR
		VKPP_LOAD(vkImportFenceWin32HandleKHR);
		VKPP_LOAD(vkGetFenceWin32HandleKHR);
#endif //VK_USE_PLATFORM_WIN32_KHR

		VKPP_LOAD(vkImportFenceFdKHR);
		VKPP_LOAD(vkGetFenceFdKHR);
		VKPP_LOAD(vkAcquireProfilingLockKHR);
		VKPP_LOAD(vkReleaseProfilingLockKHR);
		VKPP_LOAD(vkCreateAccelerationStructureKHR);
		VKPP_LOAD(vkDestroyAccelerationStructureKHR);
		VKPP_LOAD(vkCmdBuildAccelerationStructuresKHR);
		VKPP_LOAD(vkCmdBuildAccelerationStructuresIndirectKHR);
		VKPP_LOAD(vkBuildAccelerationStructuresKHR);
		VKPP_LOAD(vkCopyAccelerationStructureKHR);
		VKPP_LOAD(vkCopyAccelerationStructureToMemoryKHR);
		VKPP_LOAD(vkCopyMemoryToAccelerationStructureKHR);
		VKPP_LOAD(vkWriteAccelerationStructuresPropertiesKHR);
		VKPP_LOAD(vkCmdCopyAccelerationStructureKHR);
		VKPP_LOAD(vkCmdCopyAccelerationStructureToMemoryKHR);
		VKPP_LOAD(vkCmdCopyMemoryToAccelerationStructureKHR);
		VKPP_LOAD(vkGetAccelerationStructureDeviceAddressKHR);
		VKPP_LOAD(vkCmdWriteAccelerationStructuresPropertiesKHR);
		VKPP_LOAD(vkGetDeviceAccelerationStructureCompatibilityKHR);
		VKPP_LOAD(vkGetAccelerationStructureBuildSizesKHR);
		VKPP_LOAD(vkCmdTraceRaysKHR);
		VKPP_LOAD(vkCreateRayTracingPipelinesKHR);
		VKPP_LOAD(vkGetRayTracingShaderGroupHandlesKHR);
		VKPP_LOAD(vkGetRayTracingShaderGroupHandlesNV);
		VKPP_LOAD(vkGetRayTracingCaptureReplayShaderGroupHandlesKHR);
		VKPP_LOAD(vkCmdTraceRaysIndirectKHR);
		VKPP_LOAD(vkGetRayTracingShaderGroupStackSizeKHR);
		VKPP_LOAD(vkCmdSetRayTracingPipelineStackSizeKHR);
		VKPP_LOAD(vkCmdSetFragmentShadingRateKHR);
		VKPP_LOAD(vkWaitForPresentKHR);
		VKPP_LOAD(vkCreateDeferredOperationKHR);
		VKPP_LOAD(vkDestroyDeferredOperationKHR);
		VKPP_LOAD(vkGetDeferredOperationMaxConcurrencyKHR);
		VKPP_LOAD(vkGetDeferredOperationResultKHR);
		VKPP_LOAD(vkDeferredOperationJoinKHR);
		VKPP_LOAD(vkGetPipelineExecutablePropertiesKHR);
		VKPP_LOAD(vkGetPipelineExecutableStatisticsKHR);
		VKPP_LOAD(vkGetPipelineExecutableInternalRepresentationsKHR);
		VKPP_LOAD(vkGetEncodedVideoSessionParametersKHR);
		VKPP_LOAD(vkCmdEncodeVideoKHR);
		VKPP_LOAD(vkCmdBindIndexBuffer3KHR);
		VKPP_LOAD(vkCmdBindVertexBuffers3KHR);
		VKPP_LOAD(vkCmdDrawIndirect2KHR);
		VKPP_LOAD(vkCmdDrawIndexedIndirect2KHR);
		VKPP_LOAD(vkCmdDispatchIndirect2KHR);
		VKPP_LOAD(vkCmdCopyMemoryKHR);
		VKPP_LOAD(vkCmdCopyMemoryToImageKHR);
		VKPP_LOAD(vkCmdCopyImageToMemoryKHR);
		VKPP_LOAD(vkCmdUpdateMemoryKHR);
		VKPP_LOAD(vkCmdFillMemoryKHR);
		VKPP_LOAD(vkCmdCopyQueryPoolResultsToMemoryKHR);
		VKPP_LOAD(vkCmdDrawIndirectCount2KHR);
		VKPP_LOAD(vkCmdDrawIndexedIndirectCount2KHR);
		VKPP_LOAD(vkCmdBeginConditionalRendering2EXT);
		VKPP_LOAD(vkCmdBindTransformFeedbackBuffers2EXT);
		VKPP_LOAD(vkCmdBeginTransformFeedback2EXT);
		VKPP_LOAD(vkCmdEndTransformFeedback2EXT);
		VKPP_LOAD(vkCmdDrawIndirectByteCount2EXT);
		VKPP_LOAD(vkCmdDrawMeshTasksIndirect2EXT);
		VKPP_LOAD(vkCmdDrawMeshTasksIndirectCount2EXT);
		VKPP_LOAD(vkCmdWriteMarkerToMemoryAMD);
		VKPP_LOAD(vkCreateAccelerationStructure2KHR);
		VKPP_LOAD(vkCmdTraceRaysIndirect2KHR);
		VKPP_LOAD(vkWaitForPresent2KHR);
		VKPP_LOAD(vkCreatePipelineBinariesKHR);
		VKPP_LOAD(vkDestroyPipelineBinaryKHR);
		VKPP_LOAD(vkGetPipelineKeyKHR);
		VKPP_LOAD(vkGetPipelineBinaryDataKHR);
		VKPP_LOAD(vkReleaseCapturedPipelineDataKHR);
		VKPP_LOAD(vkReleaseSwapchainImagesKHR);
		VKPP_LOAD(vkReleaseSwapchainImagesEXT);
		VKPP_LOAD(vkGetCalibratedTimestampsKHR);
		VKPP_LOAD(vkGetCalibratedTimestampsEXT);
		VKPP_LOAD(vkCmdSetDescriptorBufferOffsets2EXT);
		VKPP_LOAD(vkCmdBindDescriptorBufferEmbeddedSamplers2EXT);
		VKPP_LOAD(vkCmdCopyMemoryIndirectKHR);
		VKPP_LOAD(vkCmdCopyMemoryToImageIndirectKHR);
		VKPP_LOAD(vkGetDeviceFaultReportsKHR);
		VKPP_LOAD(vkGetDeviceFaultDebugInfoKHR);
		VKPP_LOAD(vkCmdEndRendering2KHR);
		VKPP_LOAD(vkCmdEndRendering2EXT);
		VKPP_LOAD(vkDebugMarkerSetObjectTagEXT);
		VKPP_LOAD(vkDebugMarkerSetObjectNameEXT);
		VKPP_LOAD(vkCmdDebugMarkerBeginEXT);
		VKPP_LOAD(vkCmdDebugMarkerEndEXT);
		VKPP_LOAD(vkCmdDebugMarkerInsertEXT);
		VKPP_LOAD(vkCmdBindTransformFeedbackBuffersEXT);
		VKPP_LOAD(vkCmdBeginTransformFeedbackEXT);
		VKPP_LOAD(vkCmdEndTransformFeedbackEXT);
		VKPP_LOAD(vkCmdBeginQueryIndexedEXT);
		VKPP_LOAD(vkCmdEndQueryIndexedEXT);
		VKPP_LOAD(vkCmdDrawIndirectByteCountEXT);
		VKPP_LOAD(vkCmdBeginConditionalRenderingEXT);
		VKPP_LOAD(vkCmdEndConditionalRenderingEXT);

#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
#endif //VK_USE_PLATFORM_XLIB_XRANDR_EXT

		VKPP_LOAD(vkDisplayPowerControlEXT);
		VKPP_LOAD(vkRegisterDeviceEventEXT);
		VKPP_LOAD(vkRegisterDisplayEventEXT);
		VKPP_LOAD(vkGetSwapchainCounterEXT);
		VKPP_LOAD(vkCmdSetDiscardRectangleEXT);
		VKPP_LOAD(vkCmdSetDiscardRectangleEnableEXT);
		VKPP_LOAD(vkCmdSetDiscardRectangleModeEXT);
		VKPP_LOAD(vkSetHdrMetadataEXT);
		VKPP_LOAD(vkSetDebugUtilsObjectNameEXT);
		VKPP_LOAD(vkSetDebugUtilsObjectTagEXT);
		VKPP_LOAD(vkQueueBeginDebugUtilsLabelEXT);
		VKPP_LOAD(vkQueueEndDebugUtilsLabelEXT);
		VKPP_LOAD(vkQueueInsertDebugUtilsLabelEXT);
		VKPP_LOAD(vkCmdBeginDebugUtilsLabelEXT);
		VKPP_LOAD(vkCmdEndDebugUtilsLabelEXT);
		VKPP_LOAD(vkCmdInsertDebugUtilsLabelEXT);
		VKPP_LOAD(vkWriteSamplerDescriptorsEXT);
		VKPP_LOAD(vkWriteResourceDescriptorsEXT);
		VKPP_LOAD(vkCmdBindSamplerHeapEXT);
		VKPP_LOAD(vkCmdBindResourceHeapEXT);
		VKPP_LOAD(vkCmdPushDataEXT);
		VKPP_LOAD(vkGetImageOpaqueCaptureDataEXT);
		VKPP_LOAD(vkRegisterCustomBorderColorEXT);
		VKPP_LOAD(vkUnregisterCustomBorderColorEXT);
		VKPP_LOAD(vkGetTensorOpaqueCaptureDataARM);
		VKPP_LOAD(vkCmdSetSampleLocationsEXT);
		VKPP_LOAD(vkGetImageDrmFormatModifierPropertiesEXT);
		VKPP_LOAD(vkCreateValidationCacheEXT);
		VKPP_LOAD(vkDestroyValidationCacheEXT);
		VKPP_LOAD(vkMergeValidationCachesEXT);
		VKPP_LOAD(vkGetValidationCacheDataEXT);
		VKPP_LOAD(vkGetMemoryHostPointerPropertiesEXT);
		VKPP_LOAD(vkSetSwapchainPresentTimingQueueSizeEXT);
		VKPP_LOAD(vkGetSwapchainTimingPropertiesEXT);
		VKPP_LOAD(vkGetSwapchainTimeDomainPropertiesEXT);
		VKPP_LOAD(vkGetPastPresentationTimingEXT);

#ifdef VK_USE_PLATFORM_WIN32_KHR
		VKPP_LOAD(vkAcquireFullScreenExclusiveModeEXT);
		VKPP_LOAD(vkReleaseFullScreenExclusiveModeEXT);
		VKPP_LOAD(vkGetDeviceGroupSurfacePresentModes2EXT);
#endif //VK_USE_PLATFORM_WIN32_KHR

		VKPP_LOAD(vkCmdSetDepthBias2EXT);
		VKPP_LOAD(vkGetDescriptorSetLayoutSizeEXT);
		VKPP_LOAD(vkGetDescriptorSetLayoutBindingOffsetEXT);
		VKPP_LOAD(vkGetDescriptorEXT);
		VKPP_LOAD(vkCmdBindDescriptorBuffersEXT);
		VKPP_LOAD(vkCmdSetDescriptorBufferOffsetsEXT);
		VKPP_LOAD(vkCmdBindDescriptorBufferEmbeddedSamplersEXT);
		VKPP_LOAD(vkGetBufferOpaqueCaptureDescriptorDataEXT);
		VKPP_LOAD(vkGetImageOpaqueCaptureDescriptorDataEXT);
		VKPP_LOAD(vkGetImageViewOpaqueCaptureDescriptorDataEXT);
		VKPP_LOAD(vkGetSamplerOpaqueCaptureDescriptorDataEXT);
		VKPP_LOAD(vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT);
		VKPP_LOAD(vkCmdDrawMeshTasksEXT);
		VKPP_LOAD(vkCmdDrawMeshTasksIndirectEXT);
		VKPP_LOAD(vkCmdDrawMeshTasksIndirectCountEXT);
		VKPP_LOAD(vkGetDeviceFaultInfoEXT);

#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
#endif //VK_USE_PLATFORM_DIRECTFB_EXT

		VKPP_LOAD(vkCmdSetVertexInputEXT);
		VKPP_LOAD(vkGetPipelinePropertiesEXT);
		VKPP_LOAD(vkCmdSetPatchControlPointsEXT);
		VKPP_LOAD(vkCmdSetLogicOpEXT);
		VKPP_LOAD(vkCmdSetColorWriteEnableEXT);
		VKPP_LOAD(vkCmdDrawMultiEXT);
		VKPP_LOAD(vkCmdDrawMultiIndexedEXT);
		VKPP_LOAD(vkCreateMicromapEXT);
		VKPP_LOAD(vkDestroyMicromapEXT);
		VKPP_LOAD(vkCmdBuildMicromapsEXT);
		VKPP_LOAD(vkBuildMicromapsEXT);
		VKPP_LOAD(vkCopyMicromapEXT);
		VKPP_LOAD(vkCopyMicromapToMemoryEXT);
		VKPP_LOAD(vkCopyMemoryToMicromapEXT);
		VKPP_LOAD(vkWriteMicromapsPropertiesEXT);
		VKPP_LOAD(vkCmdCopyMicromapEXT);
		VKPP_LOAD(vkCmdCopyMicromapToMemoryEXT);
		VKPP_LOAD(vkCmdCopyMemoryToMicromapEXT);
		VKPP_LOAD(vkCmdWriteMicromapsPropertiesEXT);
		VKPP_LOAD(vkGetDeviceMicromapCompatibilityEXT);
		VKPP_LOAD(vkGetMicromapBuildSizesEXT);
		VKPP_LOAD(vkSetDeviceMemoryPriorityEXT);
		VKPP_LOAD(vkCmdSetDepthClampEnableEXT);
		VKPP_LOAD(vkCmdSetPolygonModeEXT);
		VKPP_LOAD(vkCmdSetRasterizationSamplesEXT);
		VKPP_LOAD(vkCmdSetSampleMaskEXT);
		VKPP_LOAD(vkCmdSetAlphaToCoverageEnableEXT);
		VKPP_LOAD(vkCmdSetAlphaToOneEnableEXT);
		VKPP_LOAD(vkCmdSetLogicOpEnableEXT);
		VKPP_LOAD(vkCmdSetColorBlendEnableEXT);
		VKPP_LOAD(vkCmdSetColorBlendEquationEXT);
		VKPP_LOAD(vkCmdSetColorWriteMaskEXT);
		VKPP_LOAD(vkCmdSetTessellationDomainOriginEXT);
		VKPP_LOAD(vkCmdSetRasterizationStreamEXT);
		VKPP_LOAD(vkCmdSetConservativeRasterizationModeEXT);
		VKPP_LOAD(vkCmdSetExtraPrimitiveOverestimationSizeEXT);
		VKPP_LOAD(vkCmdSetDepthClipEnableEXT);
		VKPP_LOAD(vkCmdSetSampleLocationsEnableEXT);
		VKPP_LOAD(vkCmdSetColorBlendAdvancedEXT);
		VKPP_LOAD(vkCmdSetProvokingVertexModeEXT);
		VKPP_LOAD(vkCmdSetLineRasterizationModeEXT);
		VKPP_LOAD(vkCmdSetLineStippleEnableEXT);
		VKPP_LOAD(vkCmdSetDepthClipNegativeOneToOneEXT);
		VKPP_LOAD(vkCmdSetViewportWScalingEnableNV);
		VKPP_LOAD(vkCmdSetViewportSwizzleNV);
		VKPP_LOAD(vkCmdSetCoverageToColorEnableNV);
		VKPP_LOAD(vkCmdSetCoverageToColorLocationNV);
		VKPP_LOAD(vkCmdSetCoverageModulationModeNV);
		VKPP_LOAD(vkCmdSetCoverageModulationTableEnableNV);
		VKPP_LOAD(vkCmdSetCoverageModulationTableNV);
		VKPP_LOAD(vkCmdSetShadingRateImageEnableNV);
		VKPP_LOAD(vkCmdSetRepresentativeFragmentTestEnableNV);
		VKPP_LOAD(vkCmdSetCoverageReductionModeNV);
		VKPP_LOAD(vkGetShaderModuleIdentifierEXT);
		VKPP_LOAD(vkGetShaderModuleCreateInfoIdentifierEXT);
		VKPP_LOAD(vkCreateShadersEXT);
		VKPP_LOAD(vkDestroyShaderEXT);
		VKPP_LOAD(vkGetShaderBinaryDataEXT);
		VKPP_LOAD(vkCmdBindShadersEXT);
		VKPP_LOAD(vkCmdSetDepthClampRangeEXT);
		VKPP_LOAD(vkCmdSetAttachmentFeedbackLoopEnableEXT);
		VKPP_LOAD(vkCmdDecompressMemoryEXT);
		VKPP_LOAD(vkCmdDecompressMemoryIndirectCountEXT);
		VKPP_LOAD(vkGetGeneratedCommandsMemoryRequirementsEXT);
		VKPP_LOAD(vkCmdPreprocessGeneratedCommandsEXT);
		VKPP_LOAD(vkCmdExecuteGeneratedCommandsEXT);
		VKPP_LOAD(vkCreateIndirectCommandsLayoutEXT);
		VKPP_LOAD(vkDestroyIndirectCommandsLayoutEXT);
		VKPP_LOAD(vkCreateIndirectExecutionSetEXT);
		VKPP_LOAD(vkDestroyIndirectExecutionSetEXT);
		VKPP_LOAD(vkUpdateIndirectExecutionSetPipelineEXT);
		VKPP_LOAD(vkUpdateIndirectExecutionSetShaderEXT);
		VKPP_LOAD(vkCmdBeginCustomResolveEXT);
		VKPP_LOAD(vkCmdSetPrimitiveRestartIndexEXT);
		VKPP_LOAD(vkGetShaderInfoAMD);

#ifdef VK_USE_PLATFORM_GGP
#endif //VK_USE_PLATFORM_GGP


#ifdef VK_USE_PLATFORM_WIN32_KHR
		VKPP_LOAD(vkGetMemoryWin32HandleNV);
#endif //VK_USE_PLATFORM_WIN32_KHR


#ifdef VK_USE_PLATFORM_VI_NN
#endif //VK_USE_PLATFORM_VI_NN

		VKPP_LOAD(vkCmdSetViewportWScalingNV);
		VKPP_LOAD(vkGetRefreshCycleDurationGOOGLE);
		VKPP_LOAD(vkGetPastPresentationTimingGOOGLE);

#ifdef VK_USE_PLATFORM_IOS_MVK
#endif //VK_USE_PLATFORM_IOS_MVK


#ifdef VK_USE_PLATFORM_MACOS_MVK
#endif //VK_USE_PLATFORM_MACOS_MVK

		VKPP_LOAD(vkCmdBindShadingRateImageNV);
		VKPP_LOAD(vkCmdSetViewportShadingRatePaletteNV);
		VKPP_LOAD(vkCmdSetCoarseSampleOrderNV);
		VKPP_LOAD(vkCreateAccelerationStructureNV);
		VKPP_LOAD(vkDestroyAccelerationStructureNV);
		VKPP_LOAD(vkGetAccelerationStructureMemoryRequirementsNV);
		VKPP_LOAD(vkBindAccelerationStructureMemoryNV);
		VKPP_LOAD(vkCmdBuildAccelerationStructureNV);
		VKPP_LOAD(vkCmdCopyAccelerationStructureNV);
		VKPP_LOAD(vkCmdTraceRaysNV);
		VKPP_LOAD(vkCreateRayTracingPipelinesNV);
		VKPP_LOAD(vkGetAccelerationStructureHandleNV);
		VKPP_LOAD(vkCmdWriteAccelerationStructuresPropertiesNV);
		VKPP_LOAD(vkCompileDeferredNV);
		VKPP_LOAD(vkCmdWriteBufferMarkerAMD);
		VKPP_LOAD(vkCmdWriteBufferMarker2AMD);
		VKPP_LOAD(vkCmdDrawMeshTasksNV);
		VKPP_LOAD(vkCmdDrawMeshTasksIndirectNV);
		VKPP_LOAD(vkCmdDrawMeshTasksIndirectCountNV);
		VKPP_LOAD(vkCmdSetExclusiveScissorEnableNV);
		VKPP_LOAD(vkCmdSetExclusiveScissorNV);
		VKPP_LOAD(vkCmdSetCheckpointNV);
		VKPP_LOAD(vkGetQueueCheckpointDataNV);
		VKPP_LOAD(vkGetQueueCheckpointData2NV);
		VKPP_LOAD(vkInitializePerformanceApiINTEL);
		VKPP_LOAD(vkUninitializePerformanceApiINTEL);
		VKPP_LOAD(vkCmdSetPerformanceMarkerINTEL);
		VKPP_LOAD(vkCmdSetPerformanceStreamMarkerINTEL);
		VKPP_LOAD(vkCmdSetPerformanceOverrideINTEL);
		VKPP_LOAD(vkAcquirePerformanceConfigurationINTEL);
		VKPP_LOAD(vkReleasePerformanceConfigurationINTEL);
		VKPP_LOAD(vkQueueSetPerformanceConfigurationINTEL);
		VKPP_LOAD(vkGetPerformanceParameterINTEL);
		VKPP_LOAD(vkSetLocalDimmingAMD);

#ifdef VK_USE_PLATFORM_FUCHSIA
#endif //VK_USE_PLATFORM_FUCHSIA

		VKPP_LOAD(vkGetGeneratedCommandsMemoryRequirementsNV);
		VKPP_LOAD(vkCmdPreprocessGeneratedCommandsNV);
		VKPP_LOAD(vkCmdExecuteGeneratedCommandsNV);
		VKPP_LOAD(vkCmdBindPipelineShaderGroupNV);
		VKPP_LOAD(vkCreateIndirectCommandsLayoutNV);
		VKPP_LOAD(vkDestroyIndirectCommandsLayoutNV);
		VKPP_LOAD(vkQueueSetPerfHintQCOM);
		VKPP_LOAD(vkCmdDispatchTileQCOM);
		VKPP_LOAD(vkCmdBeginPerTileExecutionQCOM);
		VKPP_LOAD(vkCmdEndPerTileExecutionQCOM);
		VKPP_LOAD(vkCmdSetFragmentShadingRateEnumNV);

#ifdef VK_USE_PLATFORM_WIN32_KHR
#endif //VK_USE_PLATFORM_WIN32_KHR


#ifdef VK_USE_PLATFORM_FUCHSIA
		VKPP_LOAD(vkGetMemoryZirconHandleFUCHSIA);
		VKPP_LOAD(vkGetMemoryZirconHandlePropertiesFUCHSIA);
#endif //VK_USE_PLATFORM_FUCHSIA


#ifdef VK_USE_PLATFORM_FUCHSIA
		VKPP_LOAD(vkImportSemaphoreZirconHandleFUCHSIA);
		VKPP_LOAD(vkGetSemaphoreZirconHandleFUCHSIA);
#endif //VK_USE_PLATFORM_FUCHSIA


#ifdef VK_USE_PLATFORM_FUCHSIA
		VKPP_LOAD(vkCreateBufferCollectionFUCHSIA);
		VKPP_LOAD(vkSetBufferCollectionImageConstraintsFUCHSIA);
		VKPP_LOAD(vkSetBufferCollectionBufferConstraintsFUCHSIA);
		VKPP_LOAD(vkDestroyBufferCollectionFUCHSIA);
		VKPP_LOAD(vkGetBufferCollectionPropertiesFUCHSIA);
#endif //VK_USE_PLATFORM_FUCHSIA

		VKPP_LOAD(vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI);
		VKPP_LOAD(vkCmdSubpassShadingHUAWEI);
		VKPP_LOAD(vkCmdBindInvocationMaskHUAWEI);

#ifdef VK_USE_PLATFORM_SCREEN_QNX
#endif //VK_USE_PLATFORM_SCREEN_QNX

		VKPP_LOAD(vkCmdDrawClusterHUAWEI);
		VKPP_LOAD(vkCmdDrawClusterIndirectHUAWEI);
		VKPP_LOAD(vkCmdSetDispatchParametersARM);
		VKPP_LOAD(vkGetDescriptorSetLayoutHostMappingInfoVALVE);
		VKPP_LOAD(vkGetDescriptorSetHostMappingVALVE);
		VKPP_LOAD(vkCmdCopyMemoryIndirectNV);
		VKPP_LOAD(vkCmdCopyMemoryToImageIndirectNV);
		VKPP_LOAD(vkCmdDecompressMemoryNV);
		VKPP_LOAD(vkCmdDecompressMemoryIndirectCountNV);
		VKPP_LOAD(vkGetPipelineIndirectMemoryRequirementsNV);
		VKPP_LOAD(vkCmdUpdatePipelineIndirectBufferNV);
		VKPP_LOAD(vkGetPipelineIndirectDeviceAddressNV);

#ifdef VK_USE_PLATFORM_OHOS
		VKPP_LOAD(vkGetNativeBufferPropertiesOHOS);
		VKPP_LOAD(vkGetMemoryNativeBufferOHOS);
#endif //VK_USE_PLATFORM_OHOS

		VKPP_LOAD(vkCreateTensorARM);
		VKPP_LOAD(vkDestroyTensorARM);
		VKPP_LOAD(vkCreateTensorViewARM);
		VKPP_LOAD(vkDestroyTensorViewARM);
		VKPP_LOAD(vkGetTensorMemoryRequirementsARM);
		VKPP_LOAD(vkBindTensorMemoryARM);
		VKPP_LOAD(vkGetDeviceTensorMemoryRequirementsARM);
		VKPP_LOAD(vkCmdCopyTensorARM);
		VKPP_LOAD(vkGetTensorOpaqueCaptureDescriptorDataARM);
		VKPP_LOAD(vkGetTensorViewOpaqueCaptureDescriptorDataARM);
		VKPP_LOAD(vkCreateOpticalFlowSessionNV);
		VKPP_LOAD(vkDestroyOpticalFlowSessionNV);
		VKPP_LOAD(vkBindOpticalFlowSessionImageNV);
		VKPP_LOAD(vkCmdOpticalFlowExecuteNV);
		VKPP_LOAD(vkAntiLagUpdateAMD);
		VKPP_LOAD(vkGetFramebufferTilePropertiesQCOM);
		VKPP_LOAD(vkGetDynamicRenderingTilePropertiesQCOM);
		VKPP_LOAD(vkConvertCooperativeVectorMatrixNV);
		VKPP_LOAD(vkCmdConvertCooperativeVectorMatrixNV);
		VKPP_LOAD(vkSetLatencySleepModeNV);
		VKPP_LOAD(vkLatencySleepNV);
		VKPP_LOAD(vkSetLatencyMarkerNV);
		VKPP_LOAD(vkGetLatencyTimingsNV);
		VKPP_LOAD(vkQueueNotifyOutOfBandNV);
		VKPP_LOAD(vkCreateDataGraphPipelinesARM);
		VKPP_LOAD(vkCreateDataGraphPipelineSessionARM);
		VKPP_LOAD(vkGetDataGraphPipelineSessionBindPointRequirementsARM);
		VKPP_LOAD(vkGetDataGraphPipelineSessionMemoryRequirementsARM);
		VKPP_LOAD(vkBindDataGraphPipelineSessionMemoryARM);
		VKPP_LOAD(vkDestroyDataGraphPipelineSessionARM);
		VKPP_LOAD(vkCmdDispatchDataGraphARM);
		VKPP_LOAD(vkGetDataGraphPipelineAvailablePropertiesARM);
		VKPP_LOAD(vkGetDataGraphPipelinePropertiesARM);

#ifdef VK_USE_PLATFORM_SCREEN_QNX
		VKPP_LOAD(vkGetScreenBufferPropertiesQNX);
#endif //VK_USE_PLATFORM_SCREEN_QNX

		VKPP_LOAD(vkCmdBindTileMemoryQCOM);
		VKPP_LOAD(vkCreateExternalComputeQueueNV);
		VKPP_LOAD(vkDestroyExternalComputeQueueNV);
		VKPP_LOAD(vkGetClusterAccelerationStructureBuildSizesNV);
		VKPP_LOAD(vkCmdBuildClusterAccelerationStructureIndirectNV);
		VKPP_LOAD(vkGetPartitionedAccelerationStructuresBuildSizesNV);
		VKPP_LOAD(vkCmdBuildPartitionedAccelerationStructuresNV);

#ifdef VK_USE_PLATFORM_OHOS
#endif //VK_USE_PLATFORM_OHOS

		VKPP_LOAD(vkCreateShaderInstrumentationARM);
		VKPP_LOAD(vkDestroyShaderInstrumentationARM);
		VKPP_LOAD(vkCmdBeginShaderInstrumentationARM);
		VKPP_LOAD(vkCmdEndShaderInstrumentationARM);
		VKPP_LOAD(vkGetShaderInstrumentationValuesARM);
		VKPP_LOAD(vkClearShaderInstrumentationMetricsARM);
		VKPP_LOAD(vkCmdSetComputeOccupancyPriorityNV);

#ifdef VK_USE_PLATFORM_UBM_SEC
#endif //VK_USE_PLATFORM_UBM_SEC


	}

	#undef VKPP_LOAD
}

void DynamicDispatch::init(Device dev, PFN_vkGetDeviceProcAddr loader) {
	#define VKPP_LOAD(fn) this->fn = (PFN_##fn) loader((VkDevice) dev, #fn)

	{
		VKPP_LOAD(vkGetDeviceProcAddr);
		VKPP_LOAD(vkDestroyDevice);
		VKPP_LOAD(vkGetDeviceQueue);
		VKPP_LOAD(vkQueueSubmit);
		VKPP_LOAD(vkQueueWaitIdle);
		VKPP_LOAD(vkDeviceWaitIdle);
		VKPP_LOAD(vkAllocateMemory);
		VKPP_LOAD(vkFreeMemory);
		VKPP_LOAD(vkMapMemory);
		VKPP_LOAD(vkUnmapMemory);
		VKPP_LOAD(vkFlushMappedMemoryRanges);
		VKPP_LOAD(vkInvalidateMappedMemoryRanges);
		VKPP_LOAD(vkGetDeviceMemoryCommitment);
		VKPP_LOAD(vkBindBufferMemory);
		VKPP_LOAD(vkBindImageMemory);
		VKPP_LOAD(vkGetBufferMemoryRequirements);
		VKPP_LOAD(vkGetImageMemoryRequirements);
		VKPP_LOAD(vkGetImageSparseMemoryRequirements);
		VKPP_LOAD(vkQueueBindSparse);
		VKPP_LOAD(vkCreateFence);
		VKPP_LOAD(vkDestroyFence);
		VKPP_LOAD(vkResetFences);
		VKPP_LOAD(vkGetFenceStatus);
		VKPP_LOAD(vkWaitForFences);
		VKPP_LOAD(vkCreateSemaphore);
		VKPP_LOAD(vkDestroySemaphore);
		VKPP_LOAD(vkCreateQueryPool);
		VKPP_LOAD(vkDestroyQueryPool);
		VKPP_LOAD(vkGetQueryPoolResults);
		VKPP_LOAD(vkCreateBuffer);
		VKPP_LOAD(vkDestroyBuffer);
		VKPP_LOAD(vkCreateImage);
		VKPP_LOAD(vkDestroyImage);
		VKPP_LOAD(vkGetImageSubresourceLayout);
		VKPP_LOAD(vkCreateImageView);
		VKPP_LOAD(vkDestroyImageView);
		VKPP_LOAD(vkCreateCommandPool);
		VKPP_LOAD(vkDestroyCommandPool);
		VKPP_LOAD(vkResetCommandPool);
		VKPP_LOAD(vkAllocateCommandBuffers);
		VKPP_LOAD(vkFreeCommandBuffers);
		VKPP_LOAD(vkBeginCommandBuffer);
		VKPP_LOAD(vkEndCommandBuffer);
		VKPP_LOAD(vkResetCommandBuffer);
		VKPP_LOAD(vkCmdCopyBuffer);
		VKPP_LOAD(vkCmdCopyImage);
		VKPP_LOAD(vkCmdCopyBufferToImage);
		VKPP_LOAD(vkCmdCopyImageToBuffer);
		VKPP_LOAD(vkCmdUpdateBuffer);
		VKPP_LOAD(vkCmdFillBuffer);
		VKPP_LOAD(vkCmdPipelineBarrier);
		VKPP_LOAD(vkCmdBeginQuery);
		VKPP_LOAD(vkCmdEndQuery);
		VKPP_LOAD(vkCmdResetQueryPool);
		VKPP_LOAD(vkCmdWriteTimestamp);
		VKPP_LOAD(vkCmdCopyQueryPoolResults);
		VKPP_LOAD(vkCmdExecuteCommands);
		VKPP_LOAD(vkBindBufferMemory2);
		VKPP_LOAD(vkBindBufferMemory2KHR);
		VKPP_LOAD(vkBindImageMemory2);
		VKPP_LOAD(vkBindImageMemory2KHR);
		VKPP_LOAD(vkGetDeviceGroupPeerMemoryFeatures);
		VKPP_LOAD(vkGetDeviceGroupPeerMemoryFeaturesKHR);
		VKPP_LOAD(vkCmdSetDeviceMask);
		VKPP_LOAD(vkCmdSetDeviceMaskKHR);
		VKPP_LOAD(vkGetImageMemoryRequirements2);
		VKPP_LOAD(vkGetImageMemoryRequirements2KHR);
		VKPP_LOAD(vkGetBufferMemoryRequirements2);
		VKPP_LOAD(vkGetBufferMemoryRequirements2KHR);
		VKPP_LOAD(vkGetImageSparseMemoryRequirements2);
		VKPP_LOAD(vkGetImageSparseMemoryRequirements2KHR);
		VKPP_LOAD(vkTrimCommandPool);
		VKPP_LOAD(vkTrimCommandPoolKHR);
		VKPP_LOAD(vkGetDeviceQueue2);
		VKPP_LOAD(vkResetQueryPool);
		VKPP_LOAD(vkResetQueryPoolEXT);
		VKPP_LOAD(vkGetSemaphoreCounterValue);
		VKPP_LOAD(vkGetSemaphoreCounterValueKHR);
		VKPP_LOAD(vkWaitSemaphores);
		VKPP_LOAD(vkWaitSemaphoresKHR);
		VKPP_LOAD(vkSignalSemaphore);
		VKPP_LOAD(vkSignalSemaphoreKHR);
		VKPP_LOAD(vkGetBufferDeviceAddress);
		VKPP_LOAD(vkGetBufferDeviceAddressKHR);
		VKPP_LOAD(vkGetBufferDeviceAddressEXT);
		VKPP_LOAD(vkGetBufferOpaqueCaptureAddress);
		VKPP_LOAD(vkGetBufferOpaqueCaptureAddressKHR);
		VKPP_LOAD(vkGetDeviceMemoryOpaqueCaptureAddress);
		VKPP_LOAD(vkGetDeviceMemoryOpaqueCaptureAddressKHR);
		VKPP_LOAD(vkCreatePrivateDataSlot);
		VKPP_LOAD(vkCreatePrivateDataSlotEXT);
		VKPP_LOAD(vkDestroyPrivateDataSlot);
		VKPP_LOAD(vkDestroyPrivateDataSlotEXT);
		VKPP_LOAD(vkSetPrivateData);
		VKPP_LOAD(vkSetPrivateDataEXT);
		VKPP_LOAD(vkGetPrivateData);
		VKPP_LOAD(vkGetPrivateDataEXT);
		VKPP_LOAD(vkCmdPipelineBarrier2);
		VKPP_LOAD(vkCmdPipelineBarrier2KHR);
		VKPP_LOAD(vkCmdWriteTimestamp2);
		VKPP_LOAD(vkCmdWriteTimestamp2KHR);
		VKPP_LOAD(vkQueueSubmit2);
		VKPP_LOAD(vkQueueSubmit2KHR);
		VKPP_LOAD(vkCmdCopyBuffer2);
		VKPP_LOAD(vkCmdCopyBuffer2KHR);
		VKPP_LOAD(vkCmdCopyImage2);
		VKPP_LOAD(vkCmdCopyImage2KHR);
		VKPP_LOAD(vkCmdCopyBufferToImage2);
		VKPP_LOAD(vkCmdCopyBufferToImage2KHR);
		VKPP_LOAD(vkCmdCopyImageToBuffer2);
		VKPP_LOAD(vkCmdCopyImageToBuffer2KHR);
		VKPP_LOAD(vkGetDeviceBufferMemoryRequirements);
		VKPP_LOAD(vkGetDeviceBufferMemoryRequirementsKHR);
		VKPP_LOAD(vkGetDeviceImageMemoryRequirements);
		VKPP_LOAD(vkGetDeviceImageMemoryRequirementsKHR);
		VKPP_LOAD(vkGetDeviceImageSparseMemoryRequirements);
		VKPP_LOAD(vkGetDeviceImageSparseMemoryRequirementsKHR);
		VKPP_LOAD(vkMapMemory2);
		VKPP_LOAD(vkMapMemory2KHR);
		VKPP_LOAD(vkUnmapMemory2);
		VKPP_LOAD(vkUnmapMemory2KHR);
		VKPP_LOAD(vkGetDeviceImageSubresourceLayout);
		VKPP_LOAD(vkGetDeviceImageSubresourceLayoutKHR);
		VKPP_LOAD(vkGetImageSubresourceLayout2);
		VKPP_LOAD(vkGetImageSubresourceLayout2KHR);
		VKPP_LOAD(vkGetImageSubresourceLayout2EXT);
		VKPP_LOAD(vkCopyMemoryToImage);
		VKPP_LOAD(vkCopyMemoryToImageEXT);
		VKPP_LOAD(vkCopyImageToMemory);
		VKPP_LOAD(vkCopyImageToMemoryEXT);
		VKPP_LOAD(vkCopyImageToImage);
		VKPP_LOAD(vkCopyImageToImageEXT);
		VKPP_LOAD(vkTransitionImageLayout);
		VKPP_LOAD(vkTransitionImageLayoutEXT);
		VKPP_LOAD(vkCreateEvent);
		VKPP_LOAD(vkDestroyEvent);
		VKPP_LOAD(vkGetEventStatus);
		VKPP_LOAD(vkSetEvent);
		VKPP_LOAD(vkResetEvent);
		VKPP_LOAD(vkCreateBufferView);
		VKPP_LOAD(vkDestroyBufferView);
		VKPP_LOAD(vkCreateShaderModule);
		VKPP_LOAD(vkDestroyShaderModule);
		VKPP_LOAD(vkCreatePipelineCache);
		VKPP_LOAD(vkDestroyPipelineCache);
		VKPP_LOAD(vkGetPipelineCacheData);
		VKPP_LOAD(vkMergePipelineCaches);
		VKPP_LOAD(vkCreateComputePipelines);
		VKPP_LOAD(vkDestroyPipeline);
		VKPP_LOAD(vkCreatePipelineLayout);
		VKPP_LOAD(vkDestroyPipelineLayout);
		VKPP_LOAD(vkCreateSampler);
		VKPP_LOAD(vkDestroySampler);
		VKPP_LOAD(vkCreateDescriptorSetLayout);
		VKPP_LOAD(vkDestroyDescriptorSetLayout);
		VKPP_LOAD(vkCreateDescriptorPool);
		VKPP_LOAD(vkDestroyDescriptorPool);
		VKPP_LOAD(vkResetDescriptorPool);
		VKPP_LOAD(vkAllocateDescriptorSets);
		VKPP_LOAD(vkFreeDescriptorSets);
		VKPP_LOAD(vkUpdateDescriptorSets);
		VKPP_LOAD(vkCmdBindPipeline);
		VKPP_LOAD(vkCmdBindDescriptorSets);
		VKPP_LOAD(vkCmdClearColorImage);
		VKPP_LOAD(vkCmdDispatch);
		VKPP_LOAD(vkCmdDispatchIndirect);
		VKPP_LOAD(vkCmdSetEvent);
		VKPP_LOAD(vkCmdResetEvent);
		VKPP_LOAD(vkCmdWaitEvents);
		VKPP_LOAD(vkCmdPushConstants);
		VKPP_LOAD(vkCmdDispatchBase);
		VKPP_LOAD(vkCmdDispatchBaseKHR);
		VKPP_LOAD(vkCreateDescriptorUpdateTemplate);
		VKPP_LOAD(vkCreateDescriptorUpdateTemplateKHR);
		VKPP_LOAD(vkDestroyDescriptorUpdateTemplate);
		VKPP_LOAD(vkDestroyDescriptorUpdateTemplateKHR);
		VKPP_LOAD(vkUpdateDescriptorSetWithTemplate);
		VKPP_LOAD(vkUpdateDescriptorSetWithTemplateKHR);
		VKPP_LOAD(vkGetDescriptorSetLayoutSupport);
		VKPP_LOAD(vkGetDescriptorSetLayoutSupportKHR);
		VKPP_LOAD(vkCreateSamplerYcbcrConversion);
		VKPP_LOAD(vkCreateSamplerYcbcrConversionKHR);
		VKPP_LOAD(vkDestroySamplerYcbcrConversion);
		VKPP_LOAD(vkDestroySamplerYcbcrConversionKHR);
		VKPP_LOAD(vkCmdSetEvent2);
		VKPP_LOAD(vkCmdSetEvent2KHR);
		VKPP_LOAD(vkCmdResetEvent2);
		VKPP_LOAD(vkCmdResetEvent2KHR);
		VKPP_LOAD(vkCmdWaitEvents2);
		VKPP_LOAD(vkCmdWaitEvents2KHR);
		VKPP_LOAD(vkCmdPushDescriptorSet);
		VKPP_LOAD(vkCmdPushDescriptorSetKHR);
		VKPP_LOAD(vkCmdPushDescriptorSetWithTemplate);
		VKPP_LOAD(vkCmdPushDescriptorSetWithTemplateKHR);
		VKPP_LOAD(vkCmdBindDescriptorSets2);
		VKPP_LOAD(vkCmdBindDescriptorSets2KHR);
		VKPP_LOAD(vkCmdPushConstants2);
		VKPP_LOAD(vkCmdPushConstants2KHR);
		VKPP_LOAD(vkCmdPushDescriptorSet2);
		VKPP_LOAD(vkCmdPushDescriptorSet2KHR);
		VKPP_LOAD(vkCmdPushDescriptorSetWithTemplate2);
		VKPP_LOAD(vkCmdPushDescriptorSetWithTemplate2KHR);
		VKPP_LOAD(vkCreateGraphicsPipelines);
		VKPP_LOAD(vkCreateFramebuffer);
		VKPP_LOAD(vkDestroyFramebuffer);
		VKPP_LOAD(vkCreateRenderPass);
		VKPP_LOAD(vkDestroyRenderPass);
		VKPP_LOAD(vkGetRenderAreaGranularity);
		VKPP_LOAD(vkCmdSetViewport);
		VKPP_LOAD(vkCmdSetScissor);
		VKPP_LOAD(vkCmdSetLineWidth);
		VKPP_LOAD(vkCmdSetDepthBias);
		VKPP_LOAD(vkCmdSetBlendConstants);
		VKPP_LOAD(vkCmdSetDepthBounds);
		VKPP_LOAD(vkCmdSetStencilCompareMask);
		VKPP_LOAD(vkCmdSetStencilWriteMask);
		VKPP_LOAD(vkCmdSetStencilReference);
		VKPP_LOAD(vkCmdBindIndexBuffer);
		VKPP_LOAD(vkCmdBindVertexBuffers);
		VKPP_LOAD(vkCmdDraw);
		VKPP_LOAD(vkCmdDrawIndexed);
		VKPP_LOAD(vkCmdDrawIndirect);
		VKPP_LOAD(vkCmdDrawIndexedIndirect);
		VKPP_LOAD(vkCmdBlitImage);
		VKPP_LOAD(vkCmdClearDepthStencilImage);
		VKPP_LOAD(vkCmdClearAttachments);
		VKPP_LOAD(vkCmdResolveImage);
		VKPP_LOAD(vkCmdBeginRenderPass);
		VKPP_LOAD(vkCmdNextSubpass);
		VKPP_LOAD(vkCmdEndRenderPass);
		VKPP_LOAD(vkCmdDrawIndirectCount);
		VKPP_LOAD(vkCmdDrawIndirectCountKHR);
		VKPP_LOAD(vkCmdDrawIndirectCountAMD);
		VKPP_LOAD(vkCmdDrawIndexedIndirectCount);
		VKPP_LOAD(vkCmdDrawIndexedIndirectCountKHR);
		VKPP_LOAD(vkCmdDrawIndexedIndirectCountAMD);
		VKPP_LOAD(vkCreateRenderPass2);
		VKPP_LOAD(vkCreateRenderPass2KHR);
		VKPP_LOAD(vkCmdBeginRenderPass2);
		VKPP_LOAD(vkCmdBeginRenderPass2KHR);
		VKPP_LOAD(vkCmdNextSubpass2);
		VKPP_LOAD(vkCmdNextSubpass2KHR);
		VKPP_LOAD(vkCmdEndRenderPass2);
		VKPP_LOAD(vkCmdEndRenderPass2KHR);
		VKPP_LOAD(vkCmdBlitImage2);
		VKPP_LOAD(vkCmdBlitImage2KHR);
		VKPP_LOAD(vkCmdResolveImage2);
		VKPP_LOAD(vkCmdResolveImage2KHR);
		VKPP_LOAD(vkCmdBeginRendering);
		VKPP_LOAD(vkCmdBeginRenderingKHR);
		VKPP_LOAD(vkCmdEndRendering);
		VKPP_LOAD(vkCmdEndRenderingKHR);
		VKPP_LOAD(vkCmdSetCullMode);
		VKPP_LOAD(vkCmdSetCullModeEXT);
		VKPP_LOAD(vkCmdSetFrontFace);
		VKPP_LOAD(vkCmdSetFrontFaceEXT);
		VKPP_LOAD(vkCmdSetPrimitiveTopology);
		VKPP_LOAD(vkCmdSetPrimitiveTopologyEXT);
		VKPP_LOAD(vkCmdSetViewportWithCount);
		VKPP_LOAD(vkCmdSetViewportWithCountEXT);
		VKPP_LOAD(vkCmdSetScissorWithCount);
		VKPP_LOAD(vkCmdSetScissorWithCountEXT);
		VKPP_LOAD(vkCmdBindVertexBuffers2);
		VKPP_LOAD(vkCmdBindVertexBuffers2EXT);
		VKPP_LOAD(vkCmdSetDepthTestEnable);
		VKPP_LOAD(vkCmdSetDepthTestEnableEXT);
		VKPP_LOAD(vkCmdSetDepthWriteEnable);
		VKPP_LOAD(vkCmdSetDepthWriteEnableEXT);
		VKPP_LOAD(vkCmdSetDepthCompareOp);
		VKPP_LOAD(vkCmdSetDepthCompareOpEXT);
		VKPP_LOAD(vkCmdSetDepthBoundsTestEnable);
		VKPP_LOAD(vkCmdSetDepthBoundsTestEnableEXT);
		VKPP_LOAD(vkCmdSetStencilTestEnable);
		VKPP_LOAD(vkCmdSetStencilTestEnableEXT);
		VKPP_LOAD(vkCmdSetStencilOp);
		VKPP_LOAD(vkCmdSetStencilOpEXT);
		VKPP_LOAD(vkCmdSetRasterizerDiscardEnable);
		VKPP_LOAD(vkCmdSetRasterizerDiscardEnableEXT);
		VKPP_LOAD(vkCmdSetDepthBiasEnable);
		VKPP_LOAD(vkCmdSetDepthBiasEnableEXT);
		VKPP_LOAD(vkCmdSetPrimitiveRestartEnable);
		VKPP_LOAD(vkCmdSetPrimitiveRestartEnableEXT);
		VKPP_LOAD(vkCmdSetLineStipple);
		VKPP_LOAD(vkCmdSetLineStippleKHR);
		VKPP_LOAD(vkCmdSetLineStippleEXT);
		VKPP_LOAD(vkCmdBindIndexBuffer2);
		VKPP_LOAD(vkCmdBindIndexBuffer2KHR);
		VKPP_LOAD(vkGetRenderingAreaGranularity);
		VKPP_LOAD(vkGetRenderingAreaGranularityKHR);
		VKPP_LOAD(vkCmdSetRenderingAttachmentLocations);
		VKPP_LOAD(vkCmdSetRenderingAttachmentLocationsKHR);
		VKPP_LOAD(vkCmdSetRenderingInputAttachmentIndices);
		VKPP_LOAD(vkCmdSetRenderingInputAttachmentIndicesKHR);
		VKPP_LOAD(vkCreateSwapchainKHR);
		VKPP_LOAD(vkDestroySwapchainKHR);
		VKPP_LOAD(vkGetSwapchainImagesKHR);
		VKPP_LOAD(vkAcquireNextImageKHR);
		VKPP_LOAD(vkQueuePresentKHR);
		VKPP_LOAD(vkGetDeviceGroupPresentCapabilitiesKHR);
		VKPP_LOAD(vkGetDeviceGroupSurfacePresentModesKHR);
		VKPP_LOAD(vkAcquireNextImage2KHR);
		VKPP_LOAD(vkCreateSharedSwapchainsKHR);

#ifdef VK_USE_PLATFORM_XLIB_KHR
#endif //VK_USE_PLATFORM_XLIB_KHR


#ifdef VK_USE_PLATFORM_XCB_KHR
#endif //VK_USE_PLATFORM_XCB_KHR


#ifdef VK_USE_PLATFORM_WAYLAND_KHR
#endif //VK_USE_PLATFORM_WAYLAND_KHR


#ifdef VK_USE_PLATFORM_WIN32_KHR
#endif //VK_USE_PLATFORM_WIN32_KHR

		VKPP_LOAD(vkCreateVideoSessionKHR);
		VKPP_LOAD(vkDestroyVideoSessionKHR);
		VKPP_LOAD(vkGetVideoSessionMemoryRequirementsKHR);
		VKPP_LOAD(vkBindVideoSessionMemoryKHR);
		VKPP_LOAD(vkCreateVideoSessionParametersKHR);
		VKPP_LOAD(vkUpdateVideoSessionParametersKHR);
		VKPP_LOAD(vkDestroyVideoSessionParametersKHR);
		VKPP_LOAD(vkCmdBeginVideoCodingKHR);
		VKPP_LOAD(vkCmdEndVideoCodingKHR);
		VKPP_LOAD(vkCmdControlVideoCodingKHR);
		VKPP_LOAD(vkCmdDecodeVideoKHR);

#ifdef VK_USE_PLATFORM_WIN32_KHR
		VKPP_LOAD(vkGetMemoryWin32HandleKHR);
		VKPP_LOAD(vkGetMemoryWin32HandlePropertiesKHR);
#endif //VK_USE_PLATFORM_WIN32_KHR

		VKPP_LOAD(vkGetMemoryFdKHR);
		VKPP_LOAD(vkGetMemoryFdPropertiesKHR);

#ifdef VK_USE_PLATFORM_WIN32_KHR
		VKPP_LOAD(vkImportSemaphoreWin32HandleKHR);
		VKPP_LOAD(vkGetSemaphoreWin32HandleKHR);
#endif //VK_USE_PLATFORM_WIN32_KHR

		VKPP_LOAD(vkImportSemaphoreFdKHR);
		VKPP_LOAD(vkGetSemaphoreFdKHR);
		VKPP_LOAD(vkGetSwapchainStatusKHR);

#ifdef VK_USE_PLATFORM_WIN32_KHR
		VKPP_LOAD(vkImportFenceWin32HandleKHR);
		VKPP_LOAD(vkGetFenceWin32HandleKHR);
#endif //VK_USE_PLATFORM_WIN32_KHR

		VKPP_LOAD(vkImportFenceFdKHR);
		VKPP_LOAD(vkGetFenceFdKHR);
		VKPP_LOAD(vkAcquireProfilingLockKHR);
		VKPP_LOAD(vkReleaseProfilingLockKHR);
		VKPP_LOAD(vkCreateAccelerationStructureKHR);
		VKPP_LOAD(vkDestroyAccelerationStructureKHR);
		VKPP_LOAD(vkCmdBuildAccelerationStructuresKHR);
		VKPP_LOAD(vkCmdBuildAccelerationStructuresIndirectKHR);
		VKPP_LOAD(vkBuildAccelerationStructuresKHR);
		VKPP_LOAD(vkCopyAccelerationStructureKHR);
		VKPP_LOAD(vkCopyAccelerationStructureToMemoryKHR);
		VKPP_LOAD(vkCopyMemoryToAccelerationStructureKHR);
		VKPP_LOAD(vkWriteAccelerationStructuresPropertiesKHR);
		VKPP_LOAD(vkCmdCopyAccelerationStructureKHR);
		VKPP_LOAD(vkCmdCopyAccelerationStructureToMemoryKHR);
		VKPP_LOAD(vkCmdCopyMemoryToAccelerationStructureKHR);
		VKPP_LOAD(vkGetAccelerationStructureDeviceAddressKHR);
		VKPP_LOAD(vkCmdWriteAccelerationStructuresPropertiesKHR);
		VKPP_LOAD(vkGetDeviceAccelerationStructureCompatibilityKHR);
		VKPP_LOAD(vkGetAccelerationStructureBuildSizesKHR);
		VKPP_LOAD(vkCmdTraceRaysKHR);
		VKPP_LOAD(vkCreateRayTracingPipelinesKHR);
		VKPP_LOAD(vkGetRayTracingShaderGroupHandlesKHR);
		VKPP_LOAD(vkGetRayTracingShaderGroupHandlesNV);
		VKPP_LOAD(vkGetRayTracingCaptureReplayShaderGroupHandlesKHR);
		VKPP_LOAD(vkCmdTraceRaysIndirectKHR);
		VKPP_LOAD(vkGetRayTracingShaderGroupStackSizeKHR);
		VKPP_LOAD(vkCmdSetRayTracingPipelineStackSizeKHR);
		VKPP_LOAD(vkCmdSetFragmentShadingRateKHR);
		VKPP_LOAD(vkWaitForPresentKHR);
		VKPP_LOAD(vkCreateDeferredOperationKHR);
		VKPP_LOAD(vkDestroyDeferredOperationKHR);
		VKPP_LOAD(vkGetDeferredOperationMaxConcurrencyKHR);
		VKPP_LOAD(vkGetDeferredOperationResultKHR);
		VKPP_LOAD(vkDeferredOperationJoinKHR);
		VKPP_LOAD(vkGetPipelineExecutablePropertiesKHR);
		VKPP_LOAD(vkGetPipelineExecutableStatisticsKHR);
		VKPP_LOAD(vkGetPipelineExecutableInternalRepresentationsKHR);
		VKPP_LOAD(vkGetEncodedVideoSessionParametersKHR);
		VKPP_LOAD(vkCmdEncodeVideoKHR);
		VKPP_LOAD(vkCmdBindIndexBuffer3KHR);
		VKPP_LOAD(vkCmdBindVertexBuffers3KHR);
		VKPP_LOAD(vkCmdDrawIndirect2KHR);
		VKPP_LOAD(vkCmdDrawIndexedIndirect2KHR);
		VKPP_LOAD(vkCmdDispatchIndirect2KHR);
		VKPP_LOAD(vkCmdCopyMemoryKHR);
		VKPP_LOAD(vkCmdCopyMemoryToImageKHR);
		VKPP_LOAD(vkCmdCopyImageToMemoryKHR);
		VKPP_LOAD(vkCmdUpdateMemoryKHR);
		VKPP_LOAD(vkCmdFillMemoryKHR);
		VKPP_LOAD(vkCmdCopyQueryPoolResultsToMemoryKHR);
		VKPP_LOAD(vkCmdDrawIndirectCount2KHR);
		VKPP_LOAD(vkCmdDrawIndexedIndirectCount2KHR);
		VKPP_LOAD(vkCmdBeginConditionalRendering2EXT);
		VKPP_LOAD(vkCmdBindTransformFeedbackBuffers2EXT);
		VKPP_LOAD(vkCmdBeginTransformFeedback2EXT);
		VKPP_LOAD(vkCmdEndTransformFeedback2EXT);
		VKPP_LOAD(vkCmdDrawIndirectByteCount2EXT);
		VKPP_LOAD(vkCmdDrawMeshTasksIndirect2EXT);
		VKPP_LOAD(vkCmdDrawMeshTasksIndirectCount2EXT);
		VKPP_LOAD(vkCmdWriteMarkerToMemoryAMD);
		VKPP_LOAD(vkCreateAccelerationStructure2KHR);
		VKPP_LOAD(vkCmdTraceRaysIndirect2KHR);
		VKPP_LOAD(vkWaitForPresent2KHR);
		VKPP_LOAD(vkCreatePipelineBinariesKHR);
		VKPP_LOAD(vkDestroyPipelineBinaryKHR);
		VKPP_LOAD(vkGetPipelineKeyKHR);
		VKPP_LOAD(vkGetPipelineBinaryDataKHR);
		VKPP_LOAD(vkReleaseCapturedPipelineDataKHR);
		VKPP_LOAD(vkReleaseSwapchainImagesKHR);
		VKPP_LOAD(vkReleaseSwapchainImagesEXT);
		VKPP_LOAD(vkGetCalibratedTimestampsKHR);
		VKPP_LOAD(vkGetCalibratedTimestampsEXT);
		VKPP_LOAD(vkCmdSetDescriptorBufferOffsets2EXT);
		VKPP_LOAD(vkCmdBindDescriptorBufferEmbeddedSamplers2EXT);
		VKPP_LOAD(vkCmdCopyMemoryIndirectKHR);
		VKPP_LOAD(vkCmdCopyMemoryToImageIndirectKHR);
		VKPP_LOAD(vkGetDeviceFaultReportsKHR);
		VKPP_LOAD(vkGetDeviceFaultDebugInfoKHR);
		VKPP_LOAD(vkCmdEndRendering2KHR);
		VKPP_LOAD(vkCmdEndRendering2EXT);
		VKPP_LOAD(vkDebugMarkerSetObjectTagEXT);
		VKPP_LOAD(vkDebugMarkerSetObjectNameEXT);
		VKPP_LOAD(vkCmdDebugMarkerBeginEXT);
		VKPP_LOAD(vkCmdDebugMarkerEndEXT);
		VKPP_LOAD(vkCmdDebugMarkerInsertEXT);
		VKPP_LOAD(vkCmdBindTransformFeedbackBuffersEXT);
		VKPP_LOAD(vkCmdBeginTransformFeedbackEXT);
		VKPP_LOAD(vkCmdEndTransformFeedbackEXT);
		VKPP_LOAD(vkCmdBeginQueryIndexedEXT);
		VKPP_LOAD(vkCmdEndQueryIndexedEXT);
		VKPP_LOAD(vkCmdDrawIndirectByteCountEXT);
		VKPP_LOAD(vkCmdBeginConditionalRenderingEXT);
		VKPP_LOAD(vkCmdEndConditionalRenderingEXT);

#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
#endif //VK_USE_PLATFORM_XLIB_XRANDR_EXT

		VKPP_LOAD(vkDisplayPowerControlEXT);
		VKPP_LOAD(vkRegisterDeviceEventEXT);
		VKPP_LOAD(vkRegisterDisplayEventEXT);
		VKPP_LOAD(vkGetSwapchainCounterEXT);
		VKPP_LOAD(vkCmdSetDiscardRectangleEXT);
		VKPP_LOAD(vkCmdSetDiscardRectangleEnableEXT);
		VKPP_LOAD(vkCmdSetDiscardRectangleModeEXT);
		VKPP_LOAD(vkSetHdrMetadataEXT);
		VKPP_LOAD(vkSetDebugUtilsObjectNameEXT);
		VKPP_LOAD(vkSetDebugUtilsObjectTagEXT);
		VKPP_LOAD(vkQueueBeginDebugUtilsLabelEXT);
		VKPP_LOAD(vkQueueEndDebugUtilsLabelEXT);
		VKPP_LOAD(vkQueueInsertDebugUtilsLabelEXT);
		VKPP_LOAD(vkCmdBeginDebugUtilsLabelEXT);
		VKPP_LOAD(vkCmdEndDebugUtilsLabelEXT);
		VKPP_LOAD(vkCmdInsertDebugUtilsLabelEXT);
		VKPP_LOAD(vkWriteSamplerDescriptorsEXT);
		VKPP_LOAD(vkWriteResourceDescriptorsEXT);
		VKPP_LOAD(vkCmdBindSamplerHeapEXT);
		VKPP_LOAD(vkCmdBindResourceHeapEXT);
		VKPP_LOAD(vkCmdPushDataEXT);
		VKPP_LOAD(vkGetImageOpaqueCaptureDataEXT);
		VKPP_LOAD(vkRegisterCustomBorderColorEXT);
		VKPP_LOAD(vkUnregisterCustomBorderColorEXT);
		VKPP_LOAD(vkGetTensorOpaqueCaptureDataARM);
		VKPP_LOAD(vkCmdSetSampleLocationsEXT);
		VKPP_LOAD(vkGetImageDrmFormatModifierPropertiesEXT);
		VKPP_LOAD(vkCreateValidationCacheEXT);
		VKPP_LOAD(vkDestroyValidationCacheEXT);
		VKPP_LOAD(vkMergeValidationCachesEXT);
		VKPP_LOAD(vkGetValidationCacheDataEXT);
		VKPP_LOAD(vkGetMemoryHostPointerPropertiesEXT);
		VKPP_LOAD(vkSetSwapchainPresentTimingQueueSizeEXT);
		VKPP_LOAD(vkGetSwapchainTimingPropertiesEXT);
		VKPP_LOAD(vkGetSwapchainTimeDomainPropertiesEXT);
		VKPP_LOAD(vkGetPastPresentationTimingEXT);

#ifdef VK_USE_PLATFORM_WIN32_KHR
		VKPP_LOAD(vkAcquireFullScreenExclusiveModeEXT);
		VKPP_LOAD(vkReleaseFullScreenExclusiveModeEXT);
		VKPP_LOAD(vkGetDeviceGroupSurfacePresentModes2EXT);
#endif //VK_USE_PLATFORM_WIN32_KHR

		VKPP_LOAD(vkCmdSetDepthBias2EXT);
		VKPP_LOAD(vkGetDescriptorSetLayoutSizeEXT);
		VKPP_LOAD(vkGetDescriptorSetLayoutBindingOffsetEXT);
		VKPP_LOAD(vkGetDescriptorEXT);
		VKPP_LOAD(vkCmdBindDescriptorBuffersEXT);
		VKPP_LOAD(vkCmdSetDescriptorBufferOffsetsEXT);
		VKPP_LOAD(vkCmdBindDescriptorBufferEmbeddedSamplersEXT);
		VKPP_LOAD(vkGetBufferOpaqueCaptureDescriptorDataEXT);
		VKPP_LOAD(vkGetImageOpaqueCaptureDescriptorDataEXT);
		VKPP_LOAD(vkGetImageViewOpaqueCaptureDescriptorDataEXT);
		VKPP_LOAD(vkGetSamplerOpaqueCaptureDescriptorDataEXT);
		VKPP_LOAD(vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT);
		VKPP_LOAD(vkCmdDrawMeshTasksEXT);
		VKPP_LOAD(vkCmdDrawMeshTasksIndirectEXT);
		VKPP_LOAD(vkCmdDrawMeshTasksIndirectCountEXT);
		VKPP_LOAD(vkGetDeviceFaultInfoEXT);

#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
#endif //VK_USE_PLATFORM_DIRECTFB_EXT

		VKPP_LOAD(vkCmdSetVertexInputEXT);
		VKPP_LOAD(vkGetPipelinePropertiesEXT);
		VKPP_LOAD(vkCmdSetPatchControlPointsEXT);
		VKPP_LOAD(vkCmdSetLogicOpEXT);
		VKPP_LOAD(vkCmdSetColorWriteEnableEXT);
		VKPP_LOAD(vkCmdDrawMultiEXT);
		VKPP_LOAD(vkCmdDrawMultiIndexedEXT);
		VKPP_LOAD(vkCreateMicromapEXT);
		VKPP_LOAD(vkDestroyMicromapEXT);
		VKPP_LOAD(vkCmdBuildMicromapsEXT);
		VKPP_LOAD(vkBuildMicromapsEXT);
		VKPP_LOAD(vkCopyMicromapEXT);
		VKPP_LOAD(vkCopyMicromapToMemoryEXT);
		VKPP_LOAD(vkCopyMemoryToMicromapEXT);
		VKPP_LOAD(vkWriteMicromapsPropertiesEXT);
		VKPP_LOAD(vkCmdCopyMicromapEXT);
		VKPP_LOAD(vkCmdCopyMicromapToMemoryEXT);
		VKPP_LOAD(vkCmdCopyMemoryToMicromapEXT);
		VKPP_LOAD(vkCmdWriteMicromapsPropertiesEXT);
		VKPP_LOAD(vkGetDeviceMicromapCompatibilityEXT);
		VKPP_LOAD(vkGetMicromapBuildSizesEXT);
		VKPP_LOAD(vkSetDeviceMemoryPriorityEXT);
		VKPP_LOAD(vkCmdSetDepthClampEnableEXT);
		VKPP_LOAD(vkCmdSetPolygonModeEXT);
		VKPP_LOAD(vkCmdSetRasterizationSamplesEXT);
		VKPP_LOAD(vkCmdSetSampleMaskEXT);
		VKPP_LOAD(vkCmdSetAlphaToCoverageEnableEXT);
		VKPP_LOAD(vkCmdSetAlphaToOneEnableEXT);
		VKPP_LOAD(vkCmdSetLogicOpEnableEXT);
		VKPP_LOAD(vkCmdSetColorBlendEnableEXT);
		VKPP_LOAD(vkCmdSetColorBlendEquationEXT);
		VKPP_LOAD(vkCmdSetColorWriteMaskEXT);
		VKPP_LOAD(vkCmdSetTessellationDomainOriginEXT);
		VKPP_LOAD(vkCmdSetRasterizationStreamEXT);
		VKPP_LOAD(vkCmdSetConservativeRasterizationModeEXT);
		VKPP_LOAD(vkCmdSetExtraPrimitiveOverestimationSizeEXT);
		VKPP_LOAD(vkCmdSetDepthClipEnableEXT);
		VKPP_LOAD(vkCmdSetSampleLocationsEnableEXT);
		VKPP_LOAD(vkCmdSetColorBlendAdvancedEXT);
		VKPP_LOAD(vkCmdSetProvokingVertexModeEXT);
		VKPP_LOAD(vkCmdSetLineRasterizationModeEXT);
		VKPP_LOAD(vkCmdSetLineStippleEnableEXT);
		VKPP_LOAD(vkCmdSetDepthClipNegativeOneToOneEXT);
		VKPP_LOAD(vkCmdSetViewportWScalingEnableNV);
		VKPP_LOAD(vkCmdSetViewportSwizzleNV);
		VKPP_LOAD(vkCmdSetCoverageToColorEnableNV);
		VKPP_LOAD(vkCmdSetCoverageToColorLocationNV);
		VKPP_LOAD(vkCmdSetCoverageModulationModeNV);
		VKPP_LOAD(vkCmdSetCoverageModulationTableEnableNV);
		VKPP_LOAD(vkCmdSetCoverageModulationTableNV);
		VKPP_LOAD(vkCmdSetShadingRateImageEnableNV);
		VKPP_LOAD(vkCmdSetRepresentativeFragmentTestEnableNV);
		VKPP_LOAD(vkCmdSetCoverageReductionModeNV);
		VKPP_LOAD(vkGetShaderModuleIdentifierEXT);
		VKPP_LOAD(vkGetShaderModuleCreateInfoIdentifierEXT);
		VKPP_LOAD(vkCreateShadersEXT);
		VKPP_LOAD(vkDestroyShaderEXT);
		VKPP_LOAD(vkGetShaderBinaryDataEXT);
		VKPP_LOAD(vkCmdBindShadersEXT);
		VKPP_LOAD(vkCmdSetDepthClampRangeEXT);
		VKPP_LOAD(vkCmdSetAttachmentFeedbackLoopEnableEXT);
		VKPP_LOAD(vkCmdDecompressMemoryEXT);
		VKPP_LOAD(vkCmdDecompressMemoryIndirectCountEXT);
		VKPP_LOAD(vkGetGeneratedCommandsMemoryRequirementsEXT);
		VKPP_LOAD(vkCmdPreprocessGeneratedCommandsEXT);
		VKPP_LOAD(vkCmdExecuteGeneratedCommandsEXT);
		VKPP_LOAD(vkCreateIndirectCommandsLayoutEXT);
		VKPP_LOAD(vkDestroyIndirectCommandsLayoutEXT);
		VKPP_LOAD(vkCreateIndirectExecutionSetEXT);
		VKPP_LOAD(vkDestroyIndirectExecutionSetEXT);
		VKPP_LOAD(vkUpdateIndirectExecutionSetPipelineEXT);
		VKPP_LOAD(vkUpdateIndirectExecutionSetShaderEXT);
		VKPP_LOAD(vkCmdBeginCustomResolveEXT);
		VKPP_LOAD(vkCmdSetPrimitiveRestartIndexEXT);
		VKPP_LOAD(vkGetShaderInfoAMD);

#ifdef VK_USE_PLATFORM_GGP
#endif //VK_USE_PLATFORM_GGP


#ifdef VK_USE_PLATFORM_WIN32_KHR
		VKPP_LOAD(vkGetMemoryWin32HandleNV);
#endif //VK_USE_PLATFORM_WIN32_KHR


#ifdef VK_USE_PLATFORM_VI_NN
#endif //VK_USE_PLATFORM_VI_NN

		VKPP_LOAD(vkCmdSetViewportWScalingNV);
		VKPP_LOAD(vkGetRefreshCycleDurationGOOGLE);
		VKPP_LOAD(vkGetPastPresentationTimingGOOGLE);

#ifdef VK_USE_PLATFORM_IOS_MVK
#endif //VK_USE_PLATFORM_IOS_MVK


#ifdef VK_USE_PLATFORM_MACOS_MVK
#endif //VK_USE_PLATFORM_MACOS_MVK

		VKPP_LOAD(vkCmdBindShadingRateImageNV);
		VKPP_LOAD(vkCmdSetViewportShadingRatePaletteNV);
		VKPP_LOAD(vkCmdSetCoarseSampleOrderNV);
		VKPP_LOAD(vkCreateAccelerationStructureNV);
		VKPP_LOAD(vkDestroyAccelerationStructureNV);
		VKPP_LOAD(vkGetAccelerationStructureMemoryRequirementsNV);
		VKPP_LOAD(vkBindAccelerationStructureMemoryNV);
		VKPP_LOAD(vkCmdBuildAccelerationStructureNV);
		VKPP_LOAD(vkCmdCopyAccelerationStructureNV);
		VKPP_LOAD(vkCmdTraceRaysNV);
		VKPP_LOAD(vkCreateRayTracingPipelinesNV);
		VKPP_LOAD(vkGetAccelerationStructureHandleNV);
		VKPP_LOAD(vkCmdWriteAccelerationStructuresPropertiesNV);
		VKPP_LOAD(vkCompileDeferredNV);
		VKPP_LOAD(vkCmdWriteBufferMarkerAMD);
		VKPP_LOAD(vkCmdWriteBufferMarker2AMD);
		VKPP_LOAD(vkCmdDrawMeshTasksNV);
		VKPP_LOAD(vkCmdDrawMeshTasksIndirectNV);
		VKPP_LOAD(vkCmdDrawMeshTasksIndirectCountNV);
		VKPP_LOAD(vkCmdSetExclusiveScissorEnableNV);
		VKPP_LOAD(vkCmdSetExclusiveScissorNV);
		VKPP_LOAD(vkCmdSetCheckpointNV);
		VKPP_LOAD(vkGetQueueCheckpointDataNV);
		VKPP_LOAD(vkGetQueueCheckpointData2NV);
		VKPP_LOAD(vkInitializePerformanceApiINTEL);
		VKPP_LOAD(vkUninitializePerformanceApiINTEL);
		VKPP_LOAD(vkCmdSetPerformanceMarkerINTEL);
		VKPP_LOAD(vkCmdSetPerformanceStreamMarkerINTEL);
		VKPP_LOAD(vkCmdSetPerformanceOverrideINTEL);
		VKPP_LOAD(vkAcquirePerformanceConfigurationINTEL);
		VKPP_LOAD(vkReleasePerformanceConfigurationINTEL);
		VKPP_LOAD(vkQueueSetPerformanceConfigurationINTEL);
		VKPP_LOAD(vkGetPerformanceParameterINTEL);
		VKPP_LOAD(vkSetLocalDimmingAMD);

#ifdef VK_USE_PLATFORM_FUCHSIA
#endif //VK_USE_PLATFORM_FUCHSIA

		VKPP_LOAD(vkGetGeneratedCommandsMemoryRequirementsNV);
		VKPP_LOAD(vkCmdPreprocessGeneratedCommandsNV);
		VKPP_LOAD(vkCmdExecuteGeneratedCommandsNV);
		VKPP_LOAD(vkCmdBindPipelineShaderGroupNV);
		VKPP_LOAD(vkCreateIndirectCommandsLayoutNV);
		VKPP_LOAD(vkDestroyIndirectCommandsLayoutNV);
		VKPP_LOAD(vkQueueSetPerfHintQCOM);
		VKPP_LOAD(vkCmdDispatchTileQCOM);
		VKPP_LOAD(vkCmdBeginPerTileExecutionQCOM);
		VKPP_LOAD(vkCmdEndPerTileExecutionQCOM);
		VKPP_LOAD(vkCmdSetFragmentShadingRateEnumNV);

#ifdef VK_USE_PLATFORM_WIN32_KHR
#endif //VK_USE_PLATFORM_WIN32_KHR


#ifdef VK_USE_PLATFORM_FUCHSIA
		VKPP_LOAD(vkGetMemoryZirconHandleFUCHSIA);
		VKPP_LOAD(vkGetMemoryZirconHandlePropertiesFUCHSIA);
#endif //VK_USE_PLATFORM_FUCHSIA


#ifdef VK_USE_PLATFORM_FUCHSIA
		VKPP_LOAD(vkImportSemaphoreZirconHandleFUCHSIA);
		VKPP_LOAD(vkGetSemaphoreZirconHandleFUCHSIA);
#endif //VK_USE_PLATFORM_FUCHSIA


#ifdef VK_USE_PLATFORM_FUCHSIA
		VKPP_LOAD(vkCreateBufferCollectionFUCHSIA);
		VKPP_LOAD(vkSetBufferCollectionImageConstraintsFUCHSIA);
		VKPP_LOAD(vkSetBufferCollectionBufferConstraintsFUCHSIA);
		VKPP_LOAD(vkDestroyBufferCollectionFUCHSIA);
		VKPP_LOAD(vkGetBufferCollectionPropertiesFUCHSIA);
#endif //VK_USE_PLATFORM_FUCHSIA

		VKPP_LOAD(vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI);
		VKPP_LOAD(vkCmdSubpassShadingHUAWEI);
		VKPP_LOAD(vkCmdBindInvocationMaskHUAWEI);

#ifdef VK_USE_PLATFORM_SCREEN_QNX
#endif //VK_USE_PLATFORM_SCREEN_QNX

		VKPP_LOAD(vkCmdDrawClusterHUAWEI);
		VKPP_LOAD(vkCmdDrawClusterIndirectHUAWEI);
		VKPP_LOAD(vkCmdSetDispatchParametersARM);
		VKPP_LOAD(vkGetDescriptorSetLayoutHostMappingInfoVALVE);
		VKPP_LOAD(vkGetDescriptorSetHostMappingVALVE);
		VKPP_LOAD(vkCmdCopyMemoryIndirectNV);
		VKPP_LOAD(vkCmdCopyMemoryToImageIndirectNV);
		VKPP_LOAD(vkCmdDecompressMemoryNV);
		VKPP_LOAD(vkCmdDecompressMemoryIndirectCountNV);
		VKPP_LOAD(vkGetPipelineIndirectMemoryRequirementsNV);
		VKPP_LOAD(vkCmdUpdatePipelineIndirectBufferNV);
		VKPP_LOAD(vkGetPipelineIndirectDeviceAddressNV);

#ifdef VK_USE_PLATFORM_OHOS
		VKPP_LOAD(vkGetNativeBufferPropertiesOHOS);
		VKPP_LOAD(vkGetMemoryNativeBufferOHOS);
#endif //VK_USE_PLATFORM_OHOS

		VKPP_LOAD(vkCreateTensorARM);
		VKPP_LOAD(vkDestroyTensorARM);
		VKPP_LOAD(vkCreateTensorViewARM);
		VKPP_LOAD(vkDestroyTensorViewARM);
		VKPP_LOAD(vkGetTensorMemoryRequirementsARM);
		VKPP_LOAD(vkBindTensorMemoryARM);
		VKPP_LOAD(vkGetDeviceTensorMemoryRequirementsARM);
		VKPP_LOAD(vkCmdCopyTensorARM);
		VKPP_LOAD(vkGetTensorOpaqueCaptureDescriptorDataARM);
		VKPP_LOAD(vkGetTensorViewOpaqueCaptureDescriptorDataARM);
		VKPP_LOAD(vkCreateOpticalFlowSessionNV);
		VKPP_LOAD(vkDestroyOpticalFlowSessionNV);
		VKPP_LOAD(vkBindOpticalFlowSessionImageNV);
		VKPP_LOAD(vkCmdOpticalFlowExecuteNV);
		VKPP_LOAD(vkAntiLagUpdateAMD);
		VKPP_LOAD(vkGetFramebufferTilePropertiesQCOM);
		VKPP_LOAD(vkGetDynamicRenderingTilePropertiesQCOM);
		VKPP_LOAD(vkConvertCooperativeVectorMatrixNV);
		VKPP_LOAD(vkCmdConvertCooperativeVectorMatrixNV);
		VKPP_LOAD(vkSetLatencySleepModeNV);
		VKPP_LOAD(vkLatencySleepNV);
		VKPP_LOAD(vkSetLatencyMarkerNV);
		VKPP_LOAD(vkGetLatencyTimingsNV);
		VKPP_LOAD(vkQueueNotifyOutOfBandNV);
		VKPP_LOAD(vkCreateDataGraphPipelinesARM);
		VKPP_LOAD(vkCreateDataGraphPipelineSessionARM);
		VKPP_LOAD(vkGetDataGraphPipelineSessionBindPointRequirementsARM);
		VKPP_LOAD(vkGetDataGraphPipelineSessionMemoryRequirementsARM);
		VKPP_LOAD(vkBindDataGraphPipelineSessionMemoryARM);
		VKPP_LOAD(vkDestroyDataGraphPipelineSessionARM);
		VKPP_LOAD(vkCmdDispatchDataGraphARM);
		VKPP_LOAD(vkGetDataGraphPipelineAvailablePropertiesARM);
		VKPP_LOAD(vkGetDataGraphPipelinePropertiesARM);

#ifdef VK_USE_PLATFORM_SCREEN_QNX
		VKPP_LOAD(vkGetScreenBufferPropertiesQNX);
#endif //VK_USE_PLATFORM_SCREEN_QNX

		VKPP_LOAD(vkCmdBindTileMemoryQCOM);
		VKPP_LOAD(vkCreateExternalComputeQueueNV);
		VKPP_LOAD(vkDestroyExternalComputeQueueNV);
		VKPP_LOAD(vkGetClusterAccelerationStructureBuildSizesNV);
		VKPP_LOAD(vkCmdBuildClusterAccelerationStructureIndirectNV);
		VKPP_LOAD(vkGetPartitionedAccelerationStructuresBuildSizesNV);
		VKPP_LOAD(vkCmdBuildPartitionedAccelerationStructuresNV);

#ifdef VK_USE_PLATFORM_OHOS
#endif //VK_USE_PLATFORM_OHOS

		VKPP_LOAD(vkCreateShaderInstrumentationARM);
		VKPP_LOAD(vkDestroyShaderInstrumentationARM);
		VKPP_LOAD(vkCmdBeginShaderInstrumentationARM);
		VKPP_LOAD(vkCmdEndShaderInstrumentationARM);
		VKPP_LOAD(vkGetShaderInstrumentationValuesARM);
		VKPP_LOAD(vkClearShaderInstrumentationMetricsARM);
		VKPP_LOAD(vkCmdSetComputeOccupancyPriorityNV);

#ifdef VK_USE_PLATFORM_UBM_SEC
#endif //VK_USE_PLATFORM_UBM_SEC


	}

	#undef VKPP_LOAD
}

} // namespace vk
// The specification (vk.xml) itself is published under the following license:

// Copyright 2015-2026 The Khronos Group Inc.
// 
// SPDX-License-Identifier: Apache-2.0 OR MIT
    