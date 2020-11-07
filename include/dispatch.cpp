
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

	VKPP_LOAD(vkCreateDebugReportCallbackEXT);
	VKPP_LOAD(vkDestroyDebugReportCallbackEXT);
	VKPP_LOAD(vkDebugReportMessageEXT);

#ifdef VK_USE_PLATFORM_GGP
	VKPP_LOAD(vkCreateStreamDescriptorSurfaceGGP);
#endif //VK_USE_PLATFORM_GGP

	VKPP_LOAD(vkGetPhysicalDeviceExternalImageFormatPropertiesNV);

#ifdef VK_USE_PLATFORM_WIN32_KHR
#endif //VK_USE_PLATFORM_WIN32_KHR


#ifdef VK_USE_PLATFORM_VI_NN
	VKPP_LOAD(vkCreateViSurfaceNN);
#endif //VK_USE_PLATFORM_VI_NN


#ifdef VK_USE_PLATFORM_WIN32_KHR
#endif //VK_USE_PLATFORM_WIN32_KHR


#ifdef VK_USE_PLATFORM_WIN32_KHR
#endif //VK_USE_PLATFORM_WIN32_KHR

	VKPP_LOAD(vkReleaseDisplayEXT);

#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
	VKPP_LOAD(vkAcquireXlibDisplayEXT);
	VKPP_LOAD(vkGetRandROutputDisplayEXT);
#endif //VK_USE_PLATFORM_XLIB_XRANDR_EXT

	VKPP_LOAD(vkGetPhysicalDeviceSurfaceCapabilities2EXT);

#ifdef VK_USE_PLATFORM_WIN32_KHR
#endif //VK_USE_PLATFORM_WIN32_KHR

	VKPP_LOAD(vkGetPhysicalDeviceSurfaceCapabilities2KHR);
	VKPP_LOAD(vkGetPhysicalDeviceSurfaceFormats2KHR);
	VKPP_LOAD(vkGetPhysicalDeviceDisplayProperties2KHR);
	VKPP_LOAD(vkGetPhysicalDeviceDisplayPlaneProperties2KHR);
	VKPP_LOAD(vkGetDisplayModeProperties2KHR);
	VKPP_LOAD(vkGetDisplayPlaneCapabilities2KHR);

#ifdef VK_USE_PLATFORM_IOS_MVK
	VKPP_LOAD(vkCreateIOSSurfaceMVK);
#endif //VK_USE_PLATFORM_IOS_MVK


#ifdef VK_USE_PLATFORM_MACOS_MVK
	VKPP_LOAD(vkCreateMacOSSurfaceMVK);
#endif //VK_USE_PLATFORM_MACOS_MVK

	VKPP_LOAD(vkCreateDebugUtilsMessengerEXT);
	VKPP_LOAD(vkDestroyDebugUtilsMessengerEXT);
	VKPP_LOAD(vkSubmitDebugUtilsMessageEXT);
	VKPP_LOAD(vkGetPhysicalDeviceMultisamplePropertiesEXT);
	VKPP_LOAD(vkGetPhysicalDeviceCalibrateableTimeDomainsEXT);

#ifdef VK_USE_PLATFORM_FUCHSIA
	VKPP_LOAD(vkCreateImagePipeSurfaceFUCHSIA);
#endif //VK_USE_PLATFORM_FUCHSIA

	VKPP_LOAD(vkGetPhysicalDeviceCooperativeMatrixPropertiesNV);
	VKPP_LOAD(vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV);

#ifdef VK_USE_PLATFORM_WIN32_KHR
	VKPP_LOAD(vkGetPhysicalDeviceSurfacePresentModes2EXT);
#endif //VK_USE_PLATFORM_WIN32_KHR

	VKPP_LOAD(vkCreateHeadlessSurfaceEXT);


	if(all) {
		VKPP_LOAD(vkBindBufferMemory2);
		VKPP_LOAD(vkBindBufferMemory2KHR);
		VKPP_LOAD(vkBindImageMemory2);
		VKPP_LOAD(vkBindImageMemory2KHR);
		VKPP_LOAD(vkGetDeviceGroupPeerMemoryFeatures);
		VKPP_LOAD(vkGetDeviceGroupPeerMemoryFeaturesKHR);
		VKPP_LOAD(vkCmdSetDeviceMask);
		VKPP_LOAD(vkCmdSetDeviceMaskKHR);
		VKPP_LOAD(vkCmdDispatchBase);
		VKPP_LOAD(vkCmdDispatchBaseKHR);
		VKPP_LOAD(vkGetImageMemoryRequirements2);
		VKPP_LOAD(vkGetImageMemoryRequirements2KHR);
		VKPP_LOAD(vkGetBufferMemoryRequirements2);
		VKPP_LOAD(vkGetBufferMemoryRequirements2KHR);
		VKPP_LOAD(vkGetImageSparseMemoryRequirements2);
		VKPP_LOAD(vkGetImageSparseMemoryRequirements2KHR);
		VKPP_LOAD(vkTrimCommandPool);
		VKPP_LOAD(vkTrimCommandPoolKHR);
		VKPP_LOAD(vkGetDeviceQueue2);
		VKPP_LOAD(vkCreateSamplerYcbcrConversion);
		VKPP_LOAD(vkCreateSamplerYcbcrConversionKHR);
		VKPP_LOAD(vkDestroySamplerYcbcrConversion);
		VKPP_LOAD(vkDestroySamplerYcbcrConversionKHR);
		VKPP_LOAD(vkCreateDescriptorUpdateTemplate);
		VKPP_LOAD(vkCreateDescriptorUpdateTemplateKHR);
		VKPP_LOAD(vkDestroyDescriptorUpdateTemplate);
		VKPP_LOAD(vkDestroyDescriptorUpdateTemplateKHR);
		VKPP_LOAD(vkUpdateDescriptorSetWithTemplate);
		VKPP_LOAD(vkUpdateDescriptorSetWithTemplateKHR);
		VKPP_LOAD(vkGetDescriptorSetLayoutSupport);
		VKPP_LOAD(vkGetDescriptorSetLayoutSupportKHR);
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
		VKPP_LOAD(vkCreateEvent);
		VKPP_LOAD(vkDestroyEvent);
		VKPP_LOAD(vkGetEventStatus);
		VKPP_LOAD(vkSetEvent);
		VKPP_LOAD(vkResetEvent);
		VKPP_LOAD(vkCreateQueryPool);
		VKPP_LOAD(vkDestroyQueryPool);
		VKPP_LOAD(vkGetQueryPoolResults);
		VKPP_LOAD(vkCreateBuffer);
		VKPP_LOAD(vkDestroyBuffer);
		VKPP_LOAD(vkCreateBufferView);
		VKPP_LOAD(vkDestroyBufferView);
		VKPP_LOAD(vkCreateImage);
		VKPP_LOAD(vkDestroyImage);
		VKPP_LOAD(vkGetImageSubresourceLayout);
		VKPP_LOAD(vkCreateImageView);
		VKPP_LOAD(vkDestroyImageView);
		VKPP_LOAD(vkCreateShaderModule);
		VKPP_LOAD(vkDestroyShaderModule);
		VKPP_LOAD(vkCreatePipelineCache);
		VKPP_LOAD(vkDestroyPipelineCache);
		VKPP_LOAD(vkGetPipelineCacheData);
		VKPP_LOAD(vkMergePipelineCaches);
		VKPP_LOAD(vkCreateGraphicsPipelines);
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
		VKPP_LOAD(vkCreateFramebuffer);
		VKPP_LOAD(vkDestroyFramebuffer);
		VKPP_LOAD(vkCreateRenderPass);
		VKPP_LOAD(vkDestroyRenderPass);
		VKPP_LOAD(vkGetRenderAreaGranularity);
		VKPP_LOAD(vkCreateCommandPool);
		VKPP_LOAD(vkDestroyCommandPool);
		VKPP_LOAD(vkResetCommandPool);
		VKPP_LOAD(vkAllocateCommandBuffers);
		VKPP_LOAD(vkFreeCommandBuffers);
		VKPP_LOAD(vkBeginCommandBuffer);
		VKPP_LOAD(vkEndCommandBuffer);
		VKPP_LOAD(vkResetCommandBuffer);
		VKPP_LOAD(vkCmdBindPipeline);
		VKPP_LOAD(vkCmdSetViewport);
		VKPP_LOAD(vkCmdSetScissor);
		VKPP_LOAD(vkCmdSetLineWidth);
		VKPP_LOAD(vkCmdSetDepthBias);
		VKPP_LOAD(vkCmdSetBlendConstants);
		VKPP_LOAD(vkCmdSetDepthBounds);
		VKPP_LOAD(vkCmdSetStencilCompareMask);
		VKPP_LOAD(vkCmdSetStencilWriteMask);
		VKPP_LOAD(vkCmdSetStencilReference);
		VKPP_LOAD(vkCmdBindDescriptorSets);
		VKPP_LOAD(vkCmdBindIndexBuffer);
		VKPP_LOAD(vkCmdBindVertexBuffers);
		VKPP_LOAD(vkCmdDraw);
		VKPP_LOAD(vkCmdDrawIndexed);
		VKPP_LOAD(vkCmdDrawIndirect);
		VKPP_LOAD(vkCmdDrawIndexedIndirect);
		VKPP_LOAD(vkCmdDispatch);
		VKPP_LOAD(vkCmdDispatchIndirect);
		VKPP_LOAD(vkCmdCopyBuffer);
		VKPP_LOAD(vkCmdCopyImage);
		VKPP_LOAD(vkCmdBlitImage);
		VKPP_LOAD(vkCmdCopyBufferToImage);
		VKPP_LOAD(vkCmdCopyImageToBuffer);
		VKPP_LOAD(vkCmdUpdateBuffer);
		VKPP_LOAD(vkCmdFillBuffer);
		VKPP_LOAD(vkCmdClearColorImage);
		VKPP_LOAD(vkCmdClearDepthStencilImage);
		VKPP_LOAD(vkCmdClearAttachments);
		VKPP_LOAD(vkCmdResolveImage);
		VKPP_LOAD(vkCmdSetEvent);
		VKPP_LOAD(vkCmdResetEvent);
		VKPP_LOAD(vkCmdWaitEvents);
		VKPP_LOAD(vkCmdPipelineBarrier);
		VKPP_LOAD(vkCmdBeginQuery);
		VKPP_LOAD(vkCmdEndQuery);
		VKPP_LOAD(vkCmdResetQueryPool);
		VKPP_LOAD(vkCmdWriteTimestamp);
		VKPP_LOAD(vkCmdCopyQueryPoolResults);
		VKPP_LOAD(vkCmdPushConstants);
		VKPP_LOAD(vkCmdBeginRenderPass);
		VKPP_LOAD(vkCmdNextSubpass);
		VKPP_LOAD(vkCmdEndRenderPass);
		VKPP_LOAD(vkCmdExecuteCommands);
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
		VKPP_LOAD(vkCmdDrawIndirectCountKHR);
		VKPP_LOAD(vkCmdDrawIndirectCountAMD);
		VKPP_LOAD(vkCmdDrawIndexedIndirectCountKHR);
		VKPP_LOAD(vkCmdDrawIndexedIndirectCountAMD);
		VKPP_LOAD(vkGetShaderInfoAMD);

#ifdef VK_USE_PLATFORM_GGP
#endif //VK_USE_PLATFORM_GGP


#ifdef VK_USE_PLATFORM_WIN32_KHR
		VKPP_LOAD(vkGetMemoryWin32HandleNV);
#endif //VK_USE_PLATFORM_WIN32_KHR


#ifdef VK_USE_PLATFORM_VI_NN
#endif //VK_USE_PLATFORM_VI_NN


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
		VKPP_LOAD(vkCmdPushDescriptorSetKHR);
		VKPP_LOAD(vkCmdPushDescriptorSetWithTemplateKHR);
		VKPP_LOAD(vkCmdBeginConditionalRenderingEXT);
		VKPP_LOAD(vkCmdEndConditionalRenderingEXT);
		VKPP_LOAD(vkCmdSetViewportWScalingNV);

#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
#endif //VK_USE_PLATFORM_XLIB_XRANDR_EXT

		VKPP_LOAD(vkDisplayPowerControlEXT);
		VKPP_LOAD(vkRegisterDeviceEventEXT);
		VKPP_LOAD(vkRegisterDisplayEventEXT);
		VKPP_LOAD(vkGetSwapchainCounterEXT);
		VKPP_LOAD(vkGetRefreshCycleDurationGOOGLE);
		VKPP_LOAD(vkGetPastPresentationTimingGOOGLE);
		VKPP_LOAD(vkCmdSetDiscardRectangleEXT);
		VKPP_LOAD(vkSetHdrMetadataEXT);
		VKPP_LOAD(vkCreateRenderPass2KHR);
		VKPP_LOAD(vkCmdBeginRenderPass2KHR);
		VKPP_LOAD(vkCmdNextSubpass2KHR);
		VKPP_LOAD(vkCmdEndRenderPass2KHR);
		VKPP_LOAD(vkGetSwapchainStatusKHR);

#ifdef VK_USE_PLATFORM_WIN32_KHR
		VKPP_LOAD(vkImportFenceWin32HandleKHR);
		VKPP_LOAD(vkGetFenceWin32HandleKHR);
#endif //VK_USE_PLATFORM_WIN32_KHR

		VKPP_LOAD(vkImportFenceFdKHR);
		VKPP_LOAD(vkGetFenceFdKHR);

#ifdef VK_USE_PLATFORM_IOS_MVK
#endif //VK_USE_PLATFORM_IOS_MVK


#ifdef VK_USE_PLATFORM_MACOS_MVK
#endif //VK_USE_PLATFORM_MACOS_MVK

		VKPP_LOAD(vkSetDebugUtilsObjectNameEXT);
		VKPP_LOAD(vkSetDebugUtilsObjectTagEXT);
		VKPP_LOAD(vkQueueBeginDebugUtilsLabelEXT);
		VKPP_LOAD(vkQueueEndDebugUtilsLabelEXT);
		VKPP_LOAD(vkQueueInsertDebugUtilsLabelEXT);
		VKPP_LOAD(vkCmdBeginDebugUtilsLabelEXT);
		VKPP_LOAD(vkCmdEndDebugUtilsLabelEXT);
		VKPP_LOAD(vkCmdInsertDebugUtilsLabelEXT);
		VKPP_LOAD(vkCmdSetSampleLocationsEXT);
		VKPP_LOAD(vkGetImageDrmFormatModifierPropertiesEXT);
		VKPP_LOAD(vkCreateValidationCacheEXT);
		VKPP_LOAD(vkDestroyValidationCacheEXT);
		VKPP_LOAD(vkMergeValidationCachesEXT);
		VKPP_LOAD(vkGetValidationCacheDataEXT);
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
		VKPP_LOAD(vkGetRayTracingShaderGroupHandlesNV);
		VKPP_LOAD(vkGetAccelerationStructureHandleNV);
		VKPP_LOAD(vkCmdWriteAccelerationStructuresPropertiesNV);
		VKPP_LOAD(vkCompileDeferredNV);
		VKPP_LOAD(vkGetMemoryHostPointerPropertiesEXT);
		VKPP_LOAD(vkCmdWriteBufferMarkerAMD);
		VKPP_LOAD(vkGetCalibratedTimestampsEXT);
		VKPP_LOAD(vkCmdDrawMeshTasksNV);
		VKPP_LOAD(vkCmdDrawMeshTasksIndirectNV);
		VKPP_LOAD(vkCmdDrawMeshTasksIndirectCountNV);
		VKPP_LOAD(vkCmdSetExclusiveScissorNV);
		VKPP_LOAD(vkCmdSetCheckpointNV);
		VKPP_LOAD(vkGetQueueCheckpointDataNV);
		VKPP_LOAD(vkSetLocalDimmingAMD);

#ifdef VK_USE_PLATFORM_FUCHSIA
#endif //VK_USE_PLATFORM_FUCHSIA

		VKPP_LOAD(vkGetBufferDeviceAddressEXT);

#ifdef VK_USE_PLATFORM_WIN32_KHR
		VKPP_LOAD(vkAcquireFullScreenExclusiveModeEXT);
		VKPP_LOAD(vkReleaseFullScreenExclusiveModeEXT);
		VKPP_LOAD(vkGetDeviceGroupSurfacePresentModes2EXT);
		VKPP_LOAD(vkGetDeviceGroupSurfacePresentModes2EXT);
#endif //VK_USE_PLATFORM_WIN32_KHR

		VKPP_LOAD(vkResetQueryPoolEXT);

	}

	#undef VKPP_LOAD
}

void DynamicDispatch::init(Device dev, PFN_vkGetDeviceProcAddr loader) {
	#define VKPP_LOAD(fn) this->fn = (PFN_##fn) loader((VkDevice) dev, #fn)

	{
		VKPP_LOAD(vkBindBufferMemory2);
		VKPP_LOAD(vkBindBufferMemory2KHR);
		VKPP_LOAD(vkBindImageMemory2);
		VKPP_LOAD(vkBindImageMemory2KHR);
		VKPP_LOAD(vkGetDeviceGroupPeerMemoryFeatures);
		VKPP_LOAD(vkGetDeviceGroupPeerMemoryFeaturesKHR);
		VKPP_LOAD(vkCmdSetDeviceMask);
		VKPP_LOAD(vkCmdSetDeviceMaskKHR);
		VKPP_LOAD(vkCmdDispatchBase);
		VKPP_LOAD(vkCmdDispatchBaseKHR);
		VKPP_LOAD(vkGetImageMemoryRequirements2);
		VKPP_LOAD(vkGetImageMemoryRequirements2KHR);
		VKPP_LOAD(vkGetBufferMemoryRequirements2);
		VKPP_LOAD(vkGetBufferMemoryRequirements2KHR);
		VKPP_LOAD(vkGetImageSparseMemoryRequirements2);
		VKPP_LOAD(vkGetImageSparseMemoryRequirements2KHR);
		VKPP_LOAD(vkTrimCommandPool);
		VKPP_LOAD(vkTrimCommandPoolKHR);
		VKPP_LOAD(vkGetDeviceQueue2);
		VKPP_LOAD(vkCreateSamplerYcbcrConversion);
		VKPP_LOAD(vkCreateSamplerYcbcrConversionKHR);
		VKPP_LOAD(vkDestroySamplerYcbcrConversion);
		VKPP_LOAD(vkDestroySamplerYcbcrConversionKHR);
		VKPP_LOAD(vkCreateDescriptorUpdateTemplate);
		VKPP_LOAD(vkCreateDescriptorUpdateTemplateKHR);
		VKPP_LOAD(vkDestroyDescriptorUpdateTemplate);
		VKPP_LOAD(vkDestroyDescriptorUpdateTemplateKHR);
		VKPP_LOAD(vkUpdateDescriptorSetWithTemplate);
		VKPP_LOAD(vkUpdateDescriptorSetWithTemplateKHR);
		VKPP_LOAD(vkGetDescriptorSetLayoutSupport);
		VKPP_LOAD(vkGetDescriptorSetLayoutSupportKHR);
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
		VKPP_LOAD(vkCreateEvent);
		VKPP_LOAD(vkDestroyEvent);
		VKPP_LOAD(vkGetEventStatus);
		VKPP_LOAD(vkSetEvent);
		VKPP_LOAD(vkResetEvent);
		VKPP_LOAD(vkCreateQueryPool);
		VKPP_LOAD(vkDestroyQueryPool);
		VKPP_LOAD(vkGetQueryPoolResults);
		VKPP_LOAD(vkCreateBuffer);
		VKPP_LOAD(vkDestroyBuffer);
		VKPP_LOAD(vkCreateBufferView);
		VKPP_LOAD(vkDestroyBufferView);
		VKPP_LOAD(vkCreateImage);
		VKPP_LOAD(vkDestroyImage);
		VKPP_LOAD(vkGetImageSubresourceLayout);
		VKPP_LOAD(vkCreateImageView);
		VKPP_LOAD(vkDestroyImageView);
		VKPP_LOAD(vkCreateShaderModule);
		VKPP_LOAD(vkDestroyShaderModule);
		VKPP_LOAD(vkCreatePipelineCache);
		VKPP_LOAD(vkDestroyPipelineCache);
		VKPP_LOAD(vkGetPipelineCacheData);
		VKPP_LOAD(vkMergePipelineCaches);
		VKPP_LOAD(vkCreateGraphicsPipelines);
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
		VKPP_LOAD(vkCreateFramebuffer);
		VKPP_LOAD(vkDestroyFramebuffer);
		VKPP_LOAD(vkCreateRenderPass);
		VKPP_LOAD(vkDestroyRenderPass);
		VKPP_LOAD(vkGetRenderAreaGranularity);
		VKPP_LOAD(vkCreateCommandPool);
		VKPP_LOAD(vkDestroyCommandPool);
		VKPP_LOAD(vkResetCommandPool);
		VKPP_LOAD(vkAllocateCommandBuffers);
		VKPP_LOAD(vkFreeCommandBuffers);
		VKPP_LOAD(vkBeginCommandBuffer);
		VKPP_LOAD(vkEndCommandBuffer);
		VKPP_LOAD(vkResetCommandBuffer);
		VKPP_LOAD(vkCmdBindPipeline);
		VKPP_LOAD(vkCmdSetViewport);
		VKPP_LOAD(vkCmdSetScissor);
		VKPP_LOAD(vkCmdSetLineWidth);
		VKPP_LOAD(vkCmdSetDepthBias);
		VKPP_LOAD(vkCmdSetBlendConstants);
		VKPP_LOAD(vkCmdSetDepthBounds);
		VKPP_LOAD(vkCmdSetStencilCompareMask);
		VKPP_LOAD(vkCmdSetStencilWriteMask);
		VKPP_LOAD(vkCmdSetStencilReference);
		VKPP_LOAD(vkCmdBindDescriptorSets);
		VKPP_LOAD(vkCmdBindIndexBuffer);
		VKPP_LOAD(vkCmdBindVertexBuffers);
		VKPP_LOAD(vkCmdDraw);
		VKPP_LOAD(vkCmdDrawIndexed);
		VKPP_LOAD(vkCmdDrawIndirect);
		VKPP_LOAD(vkCmdDrawIndexedIndirect);
		VKPP_LOAD(vkCmdDispatch);
		VKPP_LOAD(vkCmdDispatchIndirect);
		VKPP_LOAD(vkCmdCopyBuffer);
		VKPP_LOAD(vkCmdCopyImage);
		VKPP_LOAD(vkCmdBlitImage);
		VKPP_LOAD(vkCmdCopyBufferToImage);
		VKPP_LOAD(vkCmdCopyImageToBuffer);
		VKPP_LOAD(vkCmdUpdateBuffer);
		VKPP_LOAD(vkCmdFillBuffer);
		VKPP_LOAD(vkCmdClearColorImage);
		VKPP_LOAD(vkCmdClearDepthStencilImage);
		VKPP_LOAD(vkCmdClearAttachments);
		VKPP_LOAD(vkCmdResolveImage);
		VKPP_LOAD(vkCmdSetEvent);
		VKPP_LOAD(vkCmdResetEvent);
		VKPP_LOAD(vkCmdWaitEvents);
		VKPP_LOAD(vkCmdPipelineBarrier);
		VKPP_LOAD(vkCmdBeginQuery);
		VKPP_LOAD(vkCmdEndQuery);
		VKPP_LOAD(vkCmdResetQueryPool);
		VKPP_LOAD(vkCmdWriteTimestamp);
		VKPP_LOAD(vkCmdCopyQueryPoolResults);
		VKPP_LOAD(vkCmdPushConstants);
		VKPP_LOAD(vkCmdBeginRenderPass);
		VKPP_LOAD(vkCmdNextSubpass);
		VKPP_LOAD(vkCmdEndRenderPass);
		VKPP_LOAD(vkCmdExecuteCommands);
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
		VKPP_LOAD(vkCmdDrawIndirectCountKHR);
		VKPP_LOAD(vkCmdDrawIndirectCountAMD);
		VKPP_LOAD(vkCmdDrawIndexedIndirectCountKHR);
		VKPP_LOAD(vkCmdDrawIndexedIndirectCountAMD);
		VKPP_LOAD(vkGetShaderInfoAMD);

#ifdef VK_USE_PLATFORM_GGP
#endif //VK_USE_PLATFORM_GGP


#ifdef VK_USE_PLATFORM_WIN32_KHR
		VKPP_LOAD(vkGetMemoryWin32HandleNV);
#endif //VK_USE_PLATFORM_WIN32_KHR


#ifdef VK_USE_PLATFORM_VI_NN
#endif //VK_USE_PLATFORM_VI_NN


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
		VKPP_LOAD(vkCmdPushDescriptorSetKHR);
		VKPP_LOAD(vkCmdPushDescriptorSetWithTemplateKHR);
		VKPP_LOAD(vkCmdBeginConditionalRenderingEXT);
		VKPP_LOAD(vkCmdEndConditionalRenderingEXT);
		VKPP_LOAD(vkCmdSetViewportWScalingNV);

#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
#endif //VK_USE_PLATFORM_XLIB_XRANDR_EXT

		VKPP_LOAD(vkDisplayPowerControlEXT);
		VKPP_LOAD(vkRegisterDeviceEventEXT);
		VKPP_LOAD(vkRegisterDisplayEventEXT);
		VKPP_LOAD(vkGetSwapchainCounterEXT);
		VKPP_LOAD(vkGetRefreshCycleDurationGOOGLE);
		VKPP_LOAD(vkGetPastPresentationTimingGOOGLE);
		VKPP_LOAD(vkCmdSetDiscardRectangleEXT);
		VKPP_LOAD(vkSetHdrMetadataEXT);
		VKPP_LOAD(vkCreateRenderPass2KHR);
		VKPP_LOAD(vkCmdBeginRenderPass2KHR);
		VKPP_LOAD(vkCmdNextSubpass2KHR);
		VKPP_LOAD(vkCmdEndRenderPass2KHR);
		VKPP_LOAD(vkGetSwapchainStatusKHR);

#ifdef VK_USE_PLATFORM_WIN32_KHR
		VKPP_LOAD(vkImportFenceWin32HandleKHR);
		VKPP_LOAD(vkGetFenceWin32HandleKHR);
#endif //VK_USE_PLATFORM_WIN32_KHR

		VKPP_LOAD(vkImportFenceFdKHR);
		VKPP_LOAD(vkGetFenceFdKHR);

#ifdef VK_USE_PLATFORM_IOS_MVK
#endif //VK_USE_PLATFORM_IOS_MVK


#ifdef VK_USE_PLATFORM_MACOS_MVK
#endif //VK_USE_PLATFORM_MACOS_MVK

		VKPP_LOAD(vkSetDebugUtilsObjectNameEXT);
		VKPP_LOAD(vkSetDebugUtilsObjectTagEXT);
		VKPP_LOAD(vkQueueBeginDebugUtilsLabelEXT);
		VKPP_LOAD(vkQueueEndDebugUtilsLabelEXT);
		VKPP_LOAD(vkQueueInsertDebugUtilsLabelEXT);
		VKPP_LOAD(vkCmdBeginDebugUtilsLabelEXT);
		VKPP_LOAD(vkCmdEndDebugUtilsLabelEXT);
		VKPP_LOAD(vkCmdInsertDebugUtilsLabelEXT);
		VKPP_LOAD(vkCmdSetSampleLocationsEXT);
		VKPP_LOAD(vkGetImageDrmFormatModifierPropertiesEXT);
		VKPP_LOAD(vkCreateValidationCacheEXT);
		VKPP_LOAD(vkDestroyValidationCacheEXT);
		VKPP_LOAD(vkMergeValidationCachesEXT);
		VKPP_LOAD(vkGetValidationCacheDataEXT);
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
		VKPP_LOAD(vkGetRayTracingShaderGroupHandlesNV);
		VKPP_LOAD(vkGetAccelerationStructureHandleNV);
		VKPP_LOAD(vkCmdWriteAccelerationStructuresPropertiesNV);
		VKPP_LOAD(vkCompileDeferredNV);
		VKPP_LOAD(vkGetMemoryHostPointerPropertiesEXT);
		VKPP_LOAD(vkCmdWriteBufferMarkerAMD);
		VKPP_LOAD(vkGetCalibratedTimestampsEXT);
		VKPP_LOAD(vkCmdDrawMeshTasksNV);
		VKPP_LOAD(vkCmdDrawMeshTasksIndirectNV);
		VKPP_LOAD(vkCmdDrawMeshTasksIndirectCountNV);
		VKPP_LOAD(vkCmdSetExclusiveScissorNV);
		VKPP_LOAD(vkCmdSetCheckpointNV);
		VKPP_LOAD(vkGetQueueCheckpointDataNV);
		VKPP_LOAD(vkSetLocalDimmingAMD);

#ifdef VK_USE_PLATFORM_FUCHSIA
#endif //VK_USE_PLATFORM_FUCHSIA

		VKPP_LOAD(vkGetBufferDeviceAddressEXT);

#ifdef VK_USE_PLATFORM_WIN32_KHR
		VKPP_LOAD(vkAcquireFullScreenExclusiveModeEXT);
		VKPP_LOAD(vkReleaseFullScreenExclusiveModeEXT);
		VKPP_LOAD(vkGetDeviceGroupSurfacePresentModes2EXT);
		VKPP_LOAD(vkGetDeviceGroupSurfacePresentModes2EXT);
#endif //VK_USE_PLATFORM_WIN32_KHR

		VKPP_LOAD(vkResetQueryPoolEXT);

	}

	#undef VKPP_LOAD
}

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
    