// Copyright (c) 2019 nyorain
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

// Automaitcally generated vulkan header, see nyorain/vkpp
// Do not edit manually, rather edit the codegen files.

#pragma once

#include <vkpp/fwd.hpp>
#include <vkpp/enums.hpp>
#include <vkpp/structs.hpp>
#include <vkpp/call.hpp>
#include <vkpp/span.hpp>
#include <vkpp/flags.hpp>

// Generated for vulkan version: 1.1.107

namespace vk {

class DynamicDispatch {
public:
	PFN_vkEnumerateInstanceVersion vkEnumerateInstanceVersion {};
	PFN_vkBindBufferMemory2 vkBindBufferMemory2 {};
	PFN_vkBindBufferMemory2KHR vkBindBufferMemory2KHR {};
	PFN_vkBindImageMemory2 vkBindImageMemory2 {};
	PFN_vkBindImageMemory2KHR vkBindImageMemory2KHR {};
	PFN_vkGetDeviceGroupPeerMemoryFeatures vkGetDeviceGroupPeerMemoryFeatures {};
	PFN_vkGetDeviceGroupPeerMemoryFeaturesKHR vkGetDeviceGroupPeerMemoryFeaturesKHR {};
	PFN_vkCmdSetDeviceMask vkCmdSetDeviceMask {};
	PFN_vkCmdSetDeviceMaskKHR vkCmdSetDeviceMaskKHR {};
	PFN_vkCmdDispatchBase vkCmdDispatchBase {};
	PFN_vkCmdDispatchBaseKHR vkCmdDispatchBaseKHR {};
	PFN_vkEnumeratePhysicalDeviceGroups vkEnumeratePhysicalDeviceGroups {};
	PFN_vkEnumeratePhysicalDeviceGroupsKHR vkEnumeratePhysicalDeviceGroupsKHR {};
	PFN_vkGetImageMemoryRequirements2 vkGetImageMemoryRequirements2 {};
	PFN_vkGetImageMemoryRequirements2KHR vkGetImageMemoryRequirements2KHR {};
	PFN_vkGetBufferMemoryRequirements2 vkGetBufferMemoryRequirements2 {};
	PFN_vkGetBufferMemoryRequirements2KHR vkGetBufferMemoryRequirements2KHR {};
	PFN_vkGetImageSparseMemoryRequirements2 vkGetImageSparseMemoryRequirements2 {};
	PFN_vkGetImageSparseMemoryRequirements2KHR vkGetImageSparseMemoryRequirements2KHR {};
	PFN_vkGetPhysicalDeviceFeatures2 vkGetPhysicalDeviceFeatures2 {};
	PFN_vkGetPhysicalDeviceFeatures2KHR vkGetPhysicalDeviceFeatures2KHR {};
	PFN_vkGetPhysicalDeviceProperties2 vkGetPhysicalDeviceProperties2 {};
	PFN_vkGetPhysicalDeviceProperties2KHR vkGetPhysicalDeviceProperties2KHR {};
	PFN_vkGetPhysicalDeviceFormatProperties2 vkGetPhysicalDeviceFormatProperties2 {};
	PFN_vkGetPhysicalDeviceFormatProperties2KHR vkGetPhysicalDeviceFormatProperties2KHR {};
	PFN_vkGetPhysicalDeviceImageFormatProperties2 vkGetPhysicalDeviceImageFormatProperties2 {};
	PFN_vkGetPhysicalDeviceImageFormatProperties2KHR vkGetPhysicalDeviceImageFormatProperties2KHR {};
	PFN_vkGetPhysicalDeviceQueueFamilyProperties2 vkGetPhysicalDeviceQueueFamilyProperties2 {};
	PFN_vkGetPhysicalDeviceQueueFamilyProperties2KHR vkGetPhysicalDeviceQueueFamilyProperties2KHR {};
	PFN_vkGetPhysicalDeviceMemoryProperties2 vkGetPhysicalDeviceMemoryProperties2 {};
	PFN_vkGetPhysicalDeviceMemoryProperties2KHR vkGetPhysicalDeviceMemoryProperties2KHR {};
	PFN_vkGetPhysicalDeviceSparseImageFormatProperties2 vkGetPhysicalDeviceSparseImageFormatProperties2 {};
	PFN_vkGetPhysicalDeviceSparseImageFormatProperties2KHR vkGetPhysicalDeviceSparseImageFormatProperties2KHR {};
	PFN_vkTrimCommandPool vkTrimCommandPool {};
	PFN_vkTrimCommandPoolKHR vkTrimCommandPoolKHR {};
	PFN_vkGetDeviceQueue2 vkGetDeviceQueue2 {};
	PFN_vkCreateSamplerYcbcrConversion vkCreateSamplerYcbcrConversion {};
	PFN_vkCreateSamplerYcbcrConversionKHR vkCreateSamplerYcbcrConversionKHR {};
	PFN_vkDestroySamplerYcbcrConversion vkDestroySamplerYcbcrConversion {};
	PFN_vkDestroySamplerYcbcrConversionKHR vkDestroySamplerYcbcrConversionKHR {};
	PFN_vkCreateDescriptorUpdateTemplate vkCreateDescriptorUpdateTemplate {};
	PFN_vkCreateDescriptorUpdateTemplateKHR vkCreateDescriptorUpdateTemplateKHR {};
	PFN_vkDestroyDescriptorUpdateTemplate vkDestroyDescriptorUpdateTemplate {};
	PFN_vkDestroyDescriptorUpdateTemplateKHR vkDestroyDescriptorUpdateTemplateKHR {};
	PFN_vkUpdateDescriptorSetWithTemplate vkUpdateDescriptorSetWithTemplate {};
	PFN_vkUpdateDescriptorSetWithTemplateKHR vkUpdateDescriptorSetWithTemplateKHR {};
	PFN_vkGetPhysicalDeviceExternalBufferProperties vkGetPhysicalDeviceExternalBufferProperties {};
	PFN_vkGetPhysicalDeviceExternalBufferPropertiesKHR vkGetPhysicalDeviceExternalBufferPropertiesKHR {};
	PFN_vkGetPhysicalDeviceExternalFenceProperties vkGetPhysicalDeviceExternalFenceProperties {};
	PFN_vkGetPhysicalDeviceExternalFencePropertiesKHR vkGetPhysicalDeviceExternalFencePropertiesKHR {};
	PFN_vkGetPhysicalDeviceExternalSemaphoreProperties vkGetPhysicalDeviceExternalSemaphoreProperties {};
	PFN_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR vkGetPhysicalDeviceExternalSemaphorePropertiesKHR {};
	PFN_vkGetDescriptorSetLayoutSupport vkGetDescriptorSetLayoutSupport {};
	PFN_vkGetDescriptorSetLayoutSupportKHR vkGetDescriptorSetLayoutSupportKHR {};
	PFN_vkCreateInstance vkCreateInstance {};
	PFN_vkDestroyInstance vkDestroyInstance {};
	PFN_vkEnumeratePhysicalDevices vkEnumeratePhysicalDevices {};
	PFN_vkGetPhysicalDeviceFeatures vkGetPhysicalDeviceFeatures {};
	PFN_vkGetPhysicalDeviceFormatProperties vkGetPhysicalDeviceFormatProperties {};
	PFN_vkGetPhysicalDeviceImageFormatProperties vkGetPhysicalDeviceImageFormatProperties {};
	PFN_vkGetPhysicalDeviceProperties vkGetPhysicalDeviceProperties {};
	PFN_vkGetPhysicalDeviceQueueFamilyProperties vkGetPhysicalDeviceQueueFamilyProperties {};
	PFN_vkGetPhysicalDeviceMemoryProperties vkGetPhysicalDeviceMemoryProperties {};
	PFN_vkGetInstanceProcAddr vkGetInstanceProcAddr {};
	PFN_vkGetDeviceProcAddr vkGetDeviceProcAddr {};
	PFN_vkCreateDevice vkCreateDevice {};
	PFN_vkDestroyDevice vkDestroyDevice {};
	PFN_vkEnumerateInstanceExtensionProperties vkEnumerateInstanceExtensionProperties {};
	PFN_vkEnumerateDeviceExtensionProperties vkEnumerateDeviceExtensionProperties {};
	PFN_vkEnumerateInstanceLayerProperties vkEnumerateInstanceLayerProperties {};
	PFN_vkEnumerateDeviceLayerProperties vkEnumerateDeviceLayerProperties {};
	PFN_vkGetDeviceQueue vkGetDeviceQueue {};
	PFN_vkQueueSubmit vkQueueSubmit {};
	PFN_vkQueueWaitIdle vkQueueWaitIdle {};
	PFN_vkDeviceWaitIdle vkDeviceWaitIdle {};
	PFN_vkAllocateMemory vkAllocateMemory {};
	PFN_vkFreeMemory vkFreeMemory {};
	PFN_vkMapMemory vkMapMemory {};
	PFN_vkUnmapMemory vkUnmapMemory {};
	PFN_vkFlushMappedMemoryRanges vkFlushMappedMemoryRanges {};
	PFN_vkInvalidateMappedMemoryRanges vkInvalidateMappedMemoryRanges {};
	PFN_vkGetDeviceMemoryCommitment vkGetDeviceMemoryCommitment {};
	PFN_vkBindBufferMemory vkBindBufferMemory {};
	PFN_vkBindImageMemory vkBindImageMemory {};
	PFN_vkGetBufferMemoryRequirements vkGetBufferMemoryRequirements {};
	PFN_vkGetImageMemoryRequirements vkGetImageMemoryRequirements {};
	PFN_vkGetImageSparseMemoryRequirements vkGetImageSparseMemoryRequirements {};
	PFN_vkGetPhysicalDeviceSparseImageFormatProperties vkGetPhysicalDeviceSparseImageFormatProperties {};
	PFN_vkQueueBindSparse vkQueueBindSparse {};
	PFN_vkCreateFence vkCreateFence {};
	PFN_vkDestroyFence vkDestroyFence {};
	PFN_vkResetFences vkResetFences {};
	PFN_vkGetFenceStatus vkGetFenceStatus {};
	PFN_vkWaitForFences vkWaitForFences {};
	PFN_vkCreateSemaphore vkCreateSemaphore {};
	PFN_vkDestroySemaphore vkDestroySemaphore {};
	PFN_vkCreateEvent vkCreateEvent {};
	PFN_vkDestroyEvent vkDestroyEvent {};
	PFN_vkGetEventStatus vkGetEventStatus {};
	PFN_vkSetEvent vkSetEvent {};
	PFN_vkResetEvent vkResetEvent {};
	PFN_vkCreateQueryPool vkCreateQueryPool {};
	PFN_vkDestroyQueryPool vkDestroyQueryPool {};
	PFN_vkGetQueryPoolResults vkGetQueryPoolResults {};
	PFN_vkCreateBuffer vkCreateBuffer {};
	PFN_vkDestroyBuffer vkDestroyBuffer {};
	PFN_vkCreateBufferView vkCreateBufferView {};
	PFN_vkDestroyBufferView vkDestroyBufferView {};
	PFN_vkCreateImage vkCreateImage {};
	PFN_vkDestroyImage vkDestroyImage {};
	PFN_vkGetImageSubresourceLayout vkGetImageSubresourceLayout {};
	PFN_vkCreateImageView vkCreateImageView {};
	PFN_vkDestroyImageView vkDestroyImageView {};
	PFN_vkCreateShaderModule vkCreateShaderModule {};
	PFN_vkDestroyShaderModule vkDestroyShaderModule {};
	PFN_vkCreatePipelineCache vkCreatePipelineCache {};
	PFN_vkDestroyPipelineCache vkDestroyPipelineCache {};
	PFN_vkGetPipelineCacheData vkGetPipelineCacheData {};
	PFN_vkMergePipelineCaches vkMergePipelineCaches {};
	PFN_vkCreateGraphicsPipelines vkCreateGraphicsPipelines {};
	PFN_vkCreateComputePipelines vkCreateComputePipelines {};
	PFN_vkDestroyPipeline vkDestroyPipeline {};
	PFN_vkCreatePipelineLayout vkCreatePipelineLayout {};
	PFN_vkDestroyPipelineLayout vkDestroyPipelineLayout {};
	PFN_vkCreateSampler vkCreateSampler {};
	PFN_vkDestroySampler vkDestroySampler {};
	PFN_vkCreateDescriptorSetLayout vkCreateDescriptorSetLayout {};
	PFN_vkDestroyDescriptorSetLayout vkDestroyDescriptorSetLayout {};
	PFN_vkCreateDescriptorPool vkCreateDescriptorPool {};
	PFN_vkDestroyDescriptorPool vkDestroyDescriptorPool {};
	PFN_vkResetDescriptorPool vkResetDescriptorPool {};
	PFN_vkAllocateDescriptorSets vkAllocateDescriptorSets {};
	PFN_vkFreeDescriptorSets vkFreeDescriptorSets {};
	PFN_vkUpdateDescriptorSets vkUpdateDescriptorSets {};
	PFN_vkCreateFramebuffer vkCreateFramebuffer {};
	PFN_vkDestroyFramebuffer vkDestroyFramebuffer {};
	PFN_vkCreateRenderPass vkCreateRenderPass {};
	PFN_vkDestroyRenderPass vkDestroyRenderPass {};
	PFN_vkGetRenderAreaGranularity vkGetRenderAreaGranularity {};
	PFN_vkCreateCommandPool vkCreateCommandPool {};
	PFN_vkDestroyCommandPool vkDestroyCommandPool {};
	PFN_vkResetCommandPool vkResetCommandPool {};
	PFN_vkAllocateCommandBuffers vkAllocateCommandBuffers {};
	PFN_vkFreeCommandBuffers vkFreeCommandBuffers {};
	PFN_vkBeginCommandBuffer vkBeginCommandBuffer {};
	PFN_vkEndCommandBuffer vkEndCommandBuffer {};
	PFN_vkResetCommandBuffer vkResetCommandBuffer {};
	PFN_vkCmdBindPipeline vkCmdBindPipeline {};
	PFN_vkCmdSetViewport vkCmdSetViewport {};
	PFN_vkCmdSetScissor vkCmdSetScissor {};
	PFN_vkCmdSetLineWidth vkCmdSetLineWidth {};
	PFN_vkCmdSetDepthBias vkCmdSetDepthBias {};
	PFN_vkCmdSetBlendConstants vkCmdSetBlendConstants {};
	PFN_vkCmdSetDepthBounds vkCmdSetDepthBounds {};
	PFN_vkCmdSetStencilCompareMask vkCmdSetStencilCompareMask {};
	PFN_vkCmdSetStencilWriteMask vkCmdSetStencilWriteMask {};
	PFN_vkCmdSetStencilReference vkCmdSetStencilReference {};
	PFN_vkCmdBindDescriptorSets vkCmdBindDescriptorSets {};
	PFN_vkCmdBindIndexBuffer vkCmdBindIndexBuffer {};
	PFN_vkCmdBindVertexBuffers vkCmdBindVertexBuffers {};
	PFN_vkCmdDraw vkCmdDraw {};
	PFN_vkCmdDrawIndexed vkCmdDrawIndexed {};
	PFN_vkCmdDrawIndirect vkCmdDrawIndirect {};
	PFN_vkCmdDrawIndexedIndirect vkCmdDrawIndexedIndirect {};
	PFN_vkCmdDispatch vkCmdDispatch {};
	PFN_vkCmdDispatchIndirect vkCmdDispatchIndirect {};
	PFN_vkCmdCopyBuffer vkCmdCopyBuffer {};
	PFN_vkCmdCopyImage vkCmdCopyImage {};
	PFN_vkCmdBlitImage vkCmdBlitImage {};
	PFN_vkCmdCopyBufferToImage vkCmdCopyBufferToImage {};
	PFN_vkCmdCopyImageToBuffer vkCmdCopyImageToBuffer {};
	PFN_vkCmdUpdateBuffer vkCmdUpdateBuffer {};
	PFN_vkCmdFillBuffer vkCmdFillBuffer {};
	PFN_vkCmdClearColorImage vkCmdClearColorImage {};
	PFN_vkCmdClearDepthStencilImage vkCmdClearDepthStencilImage {};
	PFN_vkCmdClearAttachments vkCmdClearAttachments {};
	PFN_vkCmdResolveImage vkCmdResolveImage {};
	PFN_vkCmdSetEvent vkCmdSetEvent {};
	PFN_vkCmdResetEvent vkCmdResetEvent {};
	PFN_vkCmdWaitEvents vkCmdWaitEvents {};
	PFN_vkCmdPipelineBarrier vkCmdPipelineBarrier {};
	PFN_vkCmdBeginQuery vkCmdBeginQuery {};
	PFN_vkCmdEndQuery vkCmdEndQuery {};
	PFN_vkCmdResetQueryPool vkCmdResetQueryPool {};
	PFN_vkCmdWriteTimestamp vkCmdWriteTimestamp {};
	PFN_vkCmdCopyQueryPoolResults vkCmdCopyQueryPoolResults {};
	PFN_vkCmdPushConstants vkCmdPushConstants {};
	PFN_vkCmdBeginRenderPass vkCmdBeginRenderPass {};
	PFN_vkCmdNextSubpass vkCmdNextSubpass {};
	PFN_vkCmdEndRenderPass vkCmdEndRenderPass {};
	PFN_vkCmdExecuteCommands vkCmdExecuteCommands {};
	PFN_vkDestroySurfaceKHR vkDestroySurfaceKHR {};
	PFN_vkGetPhysicalDeviceSurfaceSupportKHR vkGetPhysicalDeviceSurfaceSupportKHR {};
	PFN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR vkGetPhysicalDeviceSurfaceCapabilitiesKHR {};
	PFN_vkGetPhysicalDeviceSurfaceFormatsKHR vkGetPhysicalDeviceSurfaceFormatsKHR {};
	PFN_vkGetPhysicalDeviceSurfacePresentModesKHR vkGetPhysicalDeviceSurfacePresentModesKHR {};
	PFN_vkCreateSwapchainKHR vkCreateSwapchainKHR {};
	PFN_vkDestroySwapchainKHR vkDestroySwapchainKHR {};
	PFN_vkGetSwapchainImagesKHR vkGetSwapchainImagesKHR {};
	PFN_vkAcquireNextImageKHR vkAcquireNextImageKHR {};
	PFN_vkQueuePresentKHR vkQueuePresentKHR {};
	PFN_vkGetDeviceGroupPresentCapabilitiesKHR vkGetDeviceGroupPresentCapabilitiesKHR {};
	PFN_vkGetDeviceGroupSurfacePresentModesKHR vkGetDeviceGroupSurfacePresentModesKHR {};
	PFN_vkGetPhysicalDevicePresentRectanglesKHR vkGetPhysicalDevicePresentRectanglesKHR {};
	PFN_vkAcquireNextImage2KHR vkAcquireNextImage2KHR {};
	PFN_vkGetPhysicalDeviceDisplayPropertiesKHR vkGetPhysicalDeviceDisplayPropertiesKHR {};
	PFN_vkGetPhysicalDeviceDisplayPlanePropertiesKHR vkGetPhysicalDeviceDisplayPlanePropertiesKHR {};
	PFN_vkGetDisplayPlaneSupportedDisplaysKHR vkGetDisplayPlaneSupportedDisplaysKHR {};
	PFN_vkGetDisplayModePropertiesKHR vkGetDisplayModePropertiesKHR {};
	PFN_vkCreateDisplayModeKHR vkCreateDisplayModeKHR {};
	PFN_vkGetDisplayPlaneCapabilitiesKHR vkGetDisplayPlaneCapabilitiesKHR {};
	PFN_vkCreateDisplayPlaneSurfaceKHR vkCreateDisplayPlaneSurfaceKHR {};
	PFN_vkCreateSharedSwapchainsKHR vkCreateSharedSwapchainsKHR {};
#ifdef VK_USE_PLATFORM_XLIB_KHR

	PFN_vkCreateXlibSurfaceKHR vkCreateXlibSurfaceKHR {};
	PFN_vkGetPhysicalDeviceXlibPresentationSupportKHR vkGetPhysicalDeviceXlibPresentationSupportKHR {};
#endif //VK_USE_PLATFORM_XLIB_KHR

#ifdef VK_USE_PLATFORM_XCB_KHR

	PFN_vkCreateXcbSurfaceKHR vkCreateXcbSurfaceKHR {};
	PFN_vkGetPhysicalDeviceXcbPresentationSupportKHR vkGetPhysicalDeviceXcbPresentationSupportKHR {};
#endif //VK_USE_PLATFORM_XCB_KHR

#ifdef VK_USE_PLATFORM_WAYLAND_KHR

	PFN_vkCreateWaylandSurfaceKHR vkCreateWaylandSurfaceKHR {};
	PFN_vkGetPhysicalDeviceWaylandPresentationSupportKHR vkGetPhysicalDeviceWaylandPresentationSupportKHR {};
#endif //VK_USE_PLATFORM_WAYLAND_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR

	PFN_vkCreateWin32SurfaceKHR vkCreateWin32SurfaceKHR {};
	PFN_vkGetPhysicalDeviceWin32PresentationSupportKHR vkGetPhysicalDeviceWin32PresentationSupportKHR {};
#endif //VK_USE_PLATFORM_WIN32_KHR

	PFN_vkCreateDebugReportCallbackEXT vkCreateDebugReportCallbackEXT {};
	PFN_vkDestroyDebugReportCallbackEXT vkDestroyDebugReportCallbackEXT {};
	PFN_vkDebugReportMessageEXT vkDebugReportMessageEXT {};
	PFN_vkDebugMarkerSetObjectTagEXT vkDebugMarkerSetObjectTagEXT {};
	PFN_vkDebugMarkerSetObjectNameEXT vkDebugMarkerSetObjectNameEXT {};
	PFN_vkCmdDebugMarkerBeginEXT vkCmdDebugMarkerBeginEXT {};
	PFN_vkCmdDebugMarkerEndEXT vkCmdDebugMarkerEndEXT {};
	PFN_vkCmdDebugMarkerInsertEXT vkCmdDebugMarkerInsertEXT {};
	PFN_vkCmdBindTransformFeedbackBuffersEXT vkCmdBindTransformFeedbackBuffersEXT {};
	PFN_vkCmdBeginTransformFeedbackEXT vkCmdBeginTransformFeedbackEXT {};
	PFN_vkCmdEndTransformFeedbackEXT vkCmdEndTransformFeedbackEXT {};
	PFN_vkCmdBeginQueryIndexedEXT vkCmdBeginQueryIndexedEXT {};
	PFN_vkCmdEndQueryIndexedEXT vkCmdEndQueryIndexedEXT {};
	PFN_vkCmdDrawIndirectByteCountEXT vkCmdDrawIndirectByteCountEXT {};
	PFN_vkCmdDrawIndirectCountKHR vkCmdDrawIndirectCountKHR {};
	PFN_vkCmdDrawIndirectCountAMD vkCmdDrawIndirectCountAMD {};
	PFN_vkCmdDrawIndexedIndirectCountKHR vkCmdDrawIndexedIndirectCountKHR {};
	PFN_vkCmdDrawIndexedIndirectCountAMD vkCmdDrawIndexedIndirectCountAMD {};
	PFN_vkGetShaderInfoAMD vkGetShaderInfoAMD {};
#ifdef VK_USE_PLATFORM_GGP

	PFN_vkCreateStreamDescriptorSurfaceGGP vkCreateStreamDescriptorSurfaceGGP {};
#endif //VK_USE_PLATFORM_GGP

	PFN_vkGetPhysicalDeviceExternalImageFormatPropertiesNV vkGetPhysicalDeviceExternalImageFormatPropertiesNV {};
#ifdef VK_USE_PLATFORM_WIN32_KHR

	PFN_vkGetMemoryWin32HandleNV vkGetMemoryWin32HandleNV {};
#endif //VK_USE_PLATFORM_WIN32_KHR

	PFN_vkGetDeviceGroupSurfacePresentModes2EXT vkGetDeviceGroupSurfacePresentModes2EXT {};
#ifdef VK_USE_PLATFORM_VI_NN

	PFN_vkCreateViSurfaceNN vkCreateViSurfaceNN {};
#endif //VK_USE_PLATFORM_VI_NN

#ifdef VK_USE_PLATFORM_WIN32_KHR

	PFN_vkGetMemoryWin32HandleKHR vkGetMemoryWin32HandleKHR {};
	PFN_vkGetMemoryWin32HandlePropertiesKHR vkGetMemoryWin32HandlePropertiesKHR {};
#endif //VK_USE_PLATFORM_WIN32_KHR

	PFN_vkGetMemoryFdKHR vkGetMemoryFdKHR {};
	PFN_vkGetMemoryFdPropertiesKHR vkGetMemoryFdPropertiesKHR {};
#ifdef VK_USE_PLATFORM_WIN32_KHR

	PFN_vkImportSemaphoreWin32HandleKHR vkImportSemaphoreWin32HandleKHR {};
	PFN_vkGetSemaphoreWin32HandleKHR vkGetSemaphoreWin32HandleKHR {};
#endif //VK_USE_PLATFORM_WIN32_KHR

	PFN_vkImportSemaphoreFdKHR vkImportSemaphoreFdKHR {};
	PFN_vkGetSemaphoreFdKHR vkGetSemaphoreFdKHR {};
	PFN_vkCmdPushDescriptorSetKHR vkCmdPushDescriptorSetKHR {};
	PFN_vkCmdPushDescriptorSetWithTemplateKHR vkCmdPushDescriptorSetWithTemplateKHR {};
	PFN_vkCmdBeginConditionalRenderingEXT vkCmdBeginConditionalRenderingEXT {};
	PFN_vkCmdEndConditionalRenderingEXT vkCmdEndConditionalRenderingEXT {};
	PFN_vkCmdSetViewportWScalingNV vkCmdSetViewportWScalingNV {};
	PFN_vkReleaseDisplayEXT vkReleaseDisplayEXT {};
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT

	PFN_vkAcquireXlibDisplayEXT vkAcquireXlibDisplayEXT {};
	PFN_vkGetRandROutputDisplayEXT vkGetRandROutputDisplayEXT {};
#endif //VK_USE_PLATFORM_XLIB_XRANDR_EXT

	PFN_vkGetPhysicalDeviceSurfaceCapabilities2EXT vkGetPhysicalDeviceSurfaceCapabilities2EXT {};
	PFN_vkDisplayPowerControlEXT vkDisplayPowerControlEXT {};
	PFN_vkRegisterDeviceEventEXT vkRegisterDeviceEventEXT {};
	PFN_vkRegisterDisplayEventEXT vkRegisterDisplayEventEXT {};
	PFN_vkGetSwapchainCounterEXT vkGetSwapchainCounterEXT {};
	PFN_vkGetRefreshCycleDurationGOOGLE vkGetRefreshCycleDurationGOOGLE {};
	PFN_vkGetPastPresentationTimingGOOGLE vkGetPastPresentationTimingGOOGLE {};
	PFN_vkCmdSetDiscardRectangleEXT vkCmdSetDiscardRectangleEXT {};
	PFN_vkSetHdrMetadataEXT vkSetHdrMetadataEXT {};
	PFN_vkCreateRenderPass2KHR vkCreateRenderPass2KHR {};
	PFN_vkCmdBeginRenderPass2KHR vkCmdBeginRenderPass2KHR {};
	PFN_vkCmdNextSubpass2KHR vkCmdNextSubpass2KHR {};
	PFN_vkCmdEndRenderPass2KHR vkCmdEndRenderPass2KHR {};
	PFN_vkGetSwapchainStatusKHR vkGetSwapchainStatusKHR {};
#ifdef VK_USE_PLATFORM_WIN32_KHR

	PFN_vkImportFenceWin32HandleKHR vkImportFenceWin32HandleKHR {};
	PFN_vkGetFenceWin32HandleKHR vkGetFenceWin32HandleKHR {};
#endif //VK_USE_PLATFORM_WIN32_KHR

	PFN_vkImportFenceFdKHR vkImportFenceFdKHR {};
	PFN_vkGetFenceFdKHR vkGetFenceFdKHR {};
	PFN_vkGetPhysicalDeviceSurfaceCapabilities2KHR vkGetPhysicalDeviceSurfaceCapabilities2KHR {};
	PFN_vkGetPhysicalDeviceSurfaceFormats2KHR vkGetPhysicalDeviceSurfaceFormats2KHR {};
	PFN_vkGetPhysicalDeviceDisplayProperties2KHR vkGetPhysicalDeviceDisplayProperties2KHR {};
	PFN_vkGetPhysicalDeviceDisplayPlaneProperties2KHR vkGetPhysicalDeviceDisplayPlaneProperties2KHR {};
	PFN_vkGetDisplayModeProperties2KHR vkGetDisplayModeProperties2KHR {};
	PFN_vkGetDisplayPlaneCapabilities2KHR vkGetDisplayPlaneCapabilities2KHR {};
#ifdef VK_USE_PLATFORM_IOS_MVK

	PFN_vkCreateIOSSurfaceMVK vkCreateIOSSurfaceMVK {};
#endif //VK_USE_PLATFORM_IOS_MVK

#ifdef VK_USE_PLATFORM_MACOS_MVK

	PFN_vkCreateMacOSSurfaceMVK vkCreateMacOSSurfaceMVK {};
#endif //VK_USE_PLATFORM_MACOS_MVK

	PFN_vkSetDebugUtilsObjectNameEXT vkSetDebugUtilsObjectNameEXT {};
	PFN_vkSetDebugUtilsObjectTagEXT vkSetDebugUtilsObjectTagEXT {};
	PFN_vkQueueBeginDebugUtilsLabelEXT vkQueueBeginDebugUtilsLabelEXT {};
	PFN_vkQueueEndDebugUtilsLabelEXT vkQueueEndDebugUtilsLabelEXT {};
	PFN_vkQueueInsertDebugUtilsLabelEXT vkQueueInsertDebugUtilsLabelEXT {};
	PFN_vkCmdBeginDebugUtilsLabelEXT vkCmdBeginDebugUtilsLabelEXT {};
	PFN_vkCmdEndDebugUtilsLabelEXT vkCmdEndDebugUtilsLabelEXT {};
	PFN_vkCmdInsertDebugUtilsLabelEXT vkCmdInsertDebugUtilsLabelEXT {};
	PFN_vkCreateDebugUtilsMessengerEXT vkCreateDebugUtilsMessengerEXT {};
	PFN_vkDestroyDebugUtilsMessengerEXT vkDestroyDebugUtilsMessengerEXT {};
	PFN_vkSubmitDebugUtilsMessageEXT vkSubmitDebugUtilsMessageEXT {};
	PFN_vkCmdSetSampleLocationsEXT vkCmdSetSampleLocationsEXT {};
	PFN_vkGetPhysicalDeviceMultisamplePropertiesEXT vkGetPhysicalDeviceMultisamplePropertiesEXT {};
	PFN_vkGetImageDrmFormatModifierPropertiesEXT vkGetImageDrmFormatModifierPropertiesEXT {};
	PFN_vkCreateValidationCacheEXT vkCreateValidationCacheEXT {};
	PFN_vkDestroyValidationCacheEXT vkDestroyValidationCacheEXT {};
	PFN_vkMergeValidationCachesEXT vkMergeValidationCachesEXT {};
	PFN_vkGetValidationCacheDataEXT vkGetValidationCacheDataEXT {};
	PFN_vkCmdBindShadingRateImageNV vkCmdBindShadingRateImageNV {};
	PFN_vkCmdSetViewportShadingRatePaletteNV vkCmdSetViewportShadingRatePaletteNV {};
	PFN_vkCmdSetCoarseSampleOrderNV vkCmdSetCoarseSampleOrderNV {};
	PFN_vkCreateAccelerationStructureNV vkCreateAccelerationStructureNV {};
	PFN_vkDestroyAccelerationStructureNV vkDestroyAccelerationStructureNV {};
	PFN_vkGetAccelerationStructureMemoryRequirementsNV vkGetAccelerationStructureMemoryRequirementsNV {};
	PFN_vkBindAccelerationStructureMemoryNV vkBindAccelerationStructureMemoryNV {};
	PFN_vkCmdBuildAccelerationStructureNV vkCmdBuildAccelerationStructureNV {};
	PFN_vkCmdCopyAccelerationStructureNV vkCmdCopyAccelerationStructureNV {};
	PFN_vkCmdTraceRaysNV vkCmdTraceRaysNV {};
	PFN_vkCreateRayTracingPipelinesNV vkCreateRayTracingPipelinesNV {};
	PFN_vkGetRayTracingShaderGroupHandlesNV vkGetRayTracingShaderGroupHandlesNV {};
	PFN_vkGetAccelerationStructureHandleNV vkGetAccelerationStructureHandleNV {};
	PFN_vkCmdWriteAccelerationStructuresPropertiesNV vkCmdWriteAccelerationStructuresPropertiesNV {};
	PFN_vkCompileDeferredNV vkCompileDeferredNV {};
	PFN_vkGetMemoryHostPointerPropertiesEXT vkGetMemoryHostPointerPropertiesEXT {};
	PFN_vkCmdWriteBufferMarkerAMD vkCmdWriteBufferMarkerAMD {};
	PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT vkGetPhysicalDeviceCalibrateableTimeDomainsEXT {};
	PFN_vkGetCalibratedTimestampsEXT vkGetCalibratedTimestampsEXT {};
	PFN_vkCmdDrawMeshTasksNV vkCmdDrawMeshTasksNV {};
	PFN_vkCmdDrawMeshTasksIndirectNV vkCmdDrawMeshTasksIndirectNV {};
	PFN_vkCmdDrawMeshTasksIndirectCountNV vkCmdDrawMeshTasksIndirectCountNV {};
	PFN_vkCmdSetExclusiveScissorNV vkCmdSetExclusiveScissorNV {};
	PFN_vkCmdSetCheckpointNV vkCmdSetCheckpointNV {};
	PFN_vkGetQueueCheckpointDataNV vkGetQueueCheckpointDataNV {};
	PFN_vkSetLocalDimmingAMD vkSetLocalDimmingAMD {};
#ifdef VK_USE_PLATFORM_FUCHSIA

	PFN_vkCreateImagePipeSurfaceFUCHSIA vkCreateImagePipeSurfaceFUCHSIA {};
#endif //VK_USE_PLATFORM_FUCHSIA

	PFN_vkGetBufferDeviceAddressEXT vkGetBufferDeviceAddressEXT {};
	PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV vkGetPhysicalDeviceCooperativeMatrixPropertiesNV {};
#ifdef VK_USE_PLATFORM_WIN32_KHR

	PFN_vkGetPhysicalDeviceSurfacePresentModes2EXT vkGetPhysicalDeviceSurfacePresentModes2EXT {};
	PFN_vkAcquireFullScreenExclusiveModeEXT vkAcquireFullScreenExclusiveModeEXT {};
	PFN_vkReleaseFullScreenExclusiveModeEXT vkReleaseFullScreenExclusiveModeEXT {};
#endif //VK_USE_PLATFORM_WIN32_KHR

	PFN_vkCreateHeadlessSurfaceEXT vkCreateHeadlessSurfaceEXT {};
	PFN_vkResetQueryPoolEXT vkResetQueryPoolEXT {};


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
		VKPP_ILOAD(ini, vkEnumerateInstanceVersion);
		VKPP_ILOAD(ini, vkBindBufferMemory2);
		VKPP_ILOAD(ini, vkBindBufferMemory2KHR);
		VKPP_ILOAD(ini, vkBindImageMemory2);
		VKPP_ILOAD(ini, vkBindImageMemory2KHR);
		VKPP_ILOAD(ini, vkGetDeviceGroupPeerMemoryFeatures);
		VKPP_ILOAD(ini, vkGetDeviceGroupPeerMemoryFeaturesKHR);
		VKPP_ILOAD(ini, vkCmdSetDeviceMask);
		VKPP_ILOAD(ini, vkCmdSetDeviceMaskKHR);
		VKPP_ILOAD(ini, vkCmdDispatchBase);
		VKPP_ILOAD(ini, vkCmdDispatchBaseKHR);
		VKPP_ILOAD(ini, vkEnumeratePhysicalDeviceGroups);
		VKPP_ILOAD(ini, vkEnumeratePhysicalDeviceGroupsKHR);
		VKPP_ILOAD(ini, vkGetImageMemoryRequirements2);
		VKPP_ILOAD(ini, vkGetImageMemoryRequirements2KHR);
		VKPP_ILOAD(ini, vkGetBufferMemoryRequirements2);
		VKPP_ILOAD(ini, vkGetBufferMemoryRequirements2KHR);
		VKPP_ILOAD(ini, vkGetImageSparseMemoryRequirements2);
		VKPP_ILOAD(ini, vkGetImageSparseMemoryRequirements2KHR);
		VKPP_ILOAD(ini, vkGetPhysicalDeviceFeatures2);
		VKPP_ILOAD(ini, vkGetPhysicalDeviceFeatures2KHR);
		VKPP_ILOAD(ini, vkGetPhysicalDeviceProperties2);
		VKPP_ILOAD(ini, vkGetPhysicalDeviceProperties2KHR);
		VKPP_ILOAD(ini, vkGetPhysicalDeviceFormatProperties2);
		VKPP_ILOAD(ini, vkGetPhysicalDeviceFormatProperties2KHR);
		VKPP_ILOAD(ini, vkGetPhysicalDeviceImageFormatProperties2);
		VKPP_ILOAD(ini, vkGetPhysicalDeviceImageFormatProperties2KHR);
		VKPP_ILOAD(ini, vkGetPhysicalDeviceQueueFamilyProperties2);
		VKPP_ILOAD(ini, vkGetPhysicalDeviceQueueFamilyProperties2KHR);
		VKPP_ILOAD(ini, vkGetPhysicalDeviceMemoryProperties2);
		VKPP_ILOAD(ini, vkGetPhysicalDeviceMemoryProperties2KHR);
		VKPP_ILOAD(ini, vkGetPhysicalDeviceSparseImageFormatProperties2);
		VKPP_ILOAD(ini, vkGetPhysicalDeviceSparseImageFormatProperties2KHR);
		VKPP_ILOAD(ini, vkTrimCommandPool);
		VKPP_ILOAD(ini, vkTrimCommandPoolKHR);
		VKPP_ILOAD(ini, vkGetDeviceQueue2);
		VKPP_ILOAD(ini, vkCreateSamplerYcbcrConversion);
		VKPP_ILOAD(ini, vkCreateSamplerYcbcrConversionKHR);
		VKPP_ILOAD(ini, vkDestroySamplerYcbcrConversion);
		VKPP_ILOAD(ini, vkDestroySamplerYcbcrConversionKHR);
		VKPP_ILOAD(ini, vkCreateDescriptorUpdateTemplate);
		VKPP_ILOAD(ini, vkCreateDescriptorUpdateTemplateKHR);
		VKPP_ILOAD(ini, vkDestroyDescriptorUpdateTemplate);
		VKPP_ILOAD(ini, vkDestroyDescriptorUpdateTemplateKHR);
		VKPP_ILOAD(ini, vkUpdateDescriptorSetWithTemplate);
		VKPP_ILOAD(ini, vkUpdateDescriptorSetWithTemplateKHR);
		VKPP_ILOAD(ini, vkGetPhysicalDeviceExternalBufferProperties);
		VKPP_ILOAD(ini, vkGetPhysicalDeviceExternalBufferPropertiesKHR);
		VKPP_ILOAD(ini, vkGetPhysicalDeviceExternalFenceProperties);
		VKPP_ILOAD(ini, vkGetPhysicalDeviceExternalFencePropertiesKHR);
		VKPP_ILOAD(ini, vkGetPhysicalDeviceExternalSemaphoreProperties);
		VKPP_ILOAD(ini, vkGetPhysicalDeviceExternalSemaphorePropertiesKHR);
		VKPP_ILOAD(ini, vkGetDescriptorSetLayoutSupport);
		VKPP_ILOAD(ini, vkGetDescriptorSetLayoutSupportKHR);
		VKPP_ILOAD(ini, vkCreateInstance);
		VKPP_ILOAD(ini, vkDestroyInstance);
		VKPP_ILOAD(ini, vkEnumeratePhysicalDevices);
		VKPP_ILOAD(ini, vkGetPhysicalDeviceFeatures);
		VKPP_ILOAD(ini, vkGetPhysicalDeviceFormatProperties);
		VKPP_ILOAD(ini, vkGetPhysicalDeviceImageFormatProperties);
		VKPP_ILOAD(ini, vkGetPhysicalDeviceProperties);
		VKPP_ILOAD(ini, vkGetPhysicalDeviceQueueFamilyProperties);
		VKPP_ILOAD(ini, vkGetPhysicalDeviceMemoryProperties);
		VKPP_ILOAD(ini, vkGetInstanceProcAddr);
		VKPP_ILOAD(ini, vkGetDeviceProcAddr);
		VKPP_ILOAD(ini, vkCreateDevice);
		VKPP_ILOAD(ini, vkDestroyDevice);
		VKPP_ILOAD(ini, vkEnumerateInstanceExtensionProperties);
		VKPP_ILOAD(ini, vkEnumerateDeviceExtensionProperties);
		VKPP_ILOAD(ini, vkEnumerateInstanceLayerProperties);
		VKPP_ILOAD(ini, vkEnumerateDeviceLayerProperties);
		VKPP_ILOAD(ini, vkGetDeviceQueue);
		VKPP_ILOAD(ini, vkQueueSubmit);
		VKPP_ILOAD(ini, vkQueueWaitIdle);
		VKPP_ILOAD(ini, vkDeviceWaitIdle);
		VKPP_ILOAD(ini, vkAllocateMemory);
		VKPP_ILOAD(ini, vkFreeMemory);
		VKPP_ILOAD(ini, vkMapMemory);
		VKPP_ILOAD(ini, vkUnmapMemory);
		VKPP_ILOAD(ini, vkFlushMappedMemoryRanges);
		VKPP_ILOAD(ini, vkInvalidateMappedMemoryRanges);
		VKPP_ILOAD(ini, vkGetDeviceMemoryCommitment);
		VKPP_ILOAD(ini, vkBindBufferMemory);
		VKPP_ILOAD(ini, vkBindImageMemory);
		VKPP_ILOAD(ini, vkGetBufferMemoryRequirements);
		VKPP_ILOAD(ini, vkGetImageMemoryRequirements);
		VKPP_ILOAD(ini, vkGetImageSparseMemoryRequirements);
		VKPP_ILOAD(ini, vkGetPhysicalDeviceSparseImageFormatProperties);
		VKPP_ILOAD(ini, vkQueueBindSparse);
		VKPP_ILOAD(ini, vkCreateFence);
		VKPP_ILOAD(ini, vkDestroyFence);
		VKPP_ILOAD(ini, vkResetFences);
		VKPP_ILOAD(ini, vkGetFenceStatus);
		VKPP_ILOAD(ini, vkWaitForFences);
		VKPP_ILOAD(ini, vkCreateSemaphore);
		VKPP_ILOAD(ini, vkDestroySemaphore);
		VKPP_ILOAD(ini, vkCreateEvent);
		VKPP_ILOAD(ini, vkDestroyEvent);
		VKPP_ILOAD(ini, vkGetEventStatus);
		VKPP_ILOAD(ini, vkSetEvent);
		VKPP_ILOAD(ini, vkResetEvent);
		VKPP_ILOAD(ini, vkCreateQueryPool);
		VKPP_ILOAD(ini, vkDestroyQueryPool);
		VKPP_ILOAD(ini, vkGetQueryPoolResults);
		VKPP_ILOAD(ini, vkCreateBuffer);
		VKPP_ILOAD(ini, vkDestroyBuffer);
		VKPP_ILOAD(ini, vkCreateBufferView);
		VKPP_ILOAD(ini, vkDestroyBufferView);
		VKPP_ILOAD(ini, vkCreateImage);
		VKPP_ILOAD(ini, vkDestroyImage);
		VKPP_ILOAD(ini, vkGetImageSubresourceLayout);
		VKPP_ILOAD(ini, vkCreateImageView);
		VKPP_ILOAD(ini, vkDestroyImageView);
		VKPP_ILOAD(ini, vkCreateShaderModule);
		VKPP_ILOAD(ini, vkDestroyShaderModule);
		VKPP_ILOAD(ini, vkCreatePipelineCache);
		VKPP_ILOAD(ini, vkDestroyPipelineCache);
		VKPP_ILOAD(ini, vkGetPipelineCacheData);
		VKPP_ILOAD(ini, vkMergePipelineCaches);
		VKPP_ILOAD(ini, vkCreateGraphicsPipelines);
		VKPP_ILOAD(ini, vkCreateComputePipelines);
		VKPP_ILOAD(ini, vkDestroyPipeline);
		VKPP_ILOAD(ini, vkCreatePipelineLayout);
		VKPP_ILOAD(ini, vkDestroyPipelineLayout);
		VKPP_ILOAD(ini, vkCreateSampler);
		VKPP_ILOAD(ini, vkDestroySampler);
		VKPP_ILOAD(ini, vkCreateDescriptorSetLayout);
		VKPP_ILOAD(ini, vkDestroyDescriptorSetLayout);
		VKPP_ILOAD(ini, vkCreateDescriptorPool);
		VKPP_ILOAD(ini, vkDestroyDescriptorPool);
		VKPP_ILOAD(ini, vkResetDescriptorPool);
		VKPP_ILOAD(ini, vkAllocateDescriptorSets);
		VKPP_ILOAD(ini, vkFreeDescriptorSets);
		VKPP_ILOAD(ini, vkUpdateDescriptorSets);
		VKPP_ILOAD(ini, vkCreateFramebuffer);
		VKPP_ILOAD(ini, vkDestroyFramebuffer);
		VKPP_ILOAD(ini, vkCreateRenderPass);
		VKPP_ILOAD(ini, vkDestroyRenderPass);
		VKPP_ILOAD(ini, vkGetRenderAreaGranularity);
		VKPP_ILOAD(ini, vkCreateCommandPool);
		VKPP_ILOAD(ini, vkDestroyCommandPool);
		VKPP_ILOAD(ini, vkResetCommandPool);
		VKPP_ILOAD(ini, vkAllocateCommandBuffers);
		VKPP_ILOAD(ini, vkFreeCommandBuffers);
		VKPP_ILOAD(ini, vkBeginCommandBuffer);
		VKPP_ILOAD(ini, vkEndCommandBuffer);
		VKPP_ILOAD(ini, vkResetCommandBuffer);
		VKPP_ILOAD(ini, vkCmdBindPipeline);
		VKPP_ILOAD(ini, vkCmdSetViewport);
		VKPP_ILOAD(ini, vkCmdSetScissor);
		VKPP_ILOAD(ini, vkCmdSetLineWidth);
		VKPP_ILOAD(ini, vkCmdSetDepthBias);
		VKPP_ILOAD(ini, vkCmdSetBlendConstants);
		VKPP_ILOAD(ini, vkCmdSetDepthBounds);
		VKPP_ILOAD(ini, vkCmdSetStencilCompareMask);
		VKPP_ILOAD(ini, vkCmdSetStencilWriteMask);
		VKPP_ILOAD(ini, vkCmdSetStencilReference);
		VKPP_ILOAD(ini, vkCmdBindDescriptorSets);
		VKPP_ILOAD(ini, vkCmdBindIndexBuffer);
		VKPP_ILOAD(ini, vkCmdBindVertexBuffers);
		VKPP_ILOAD(ini, vkCmdDraw);
		VKPP_ILOAD(ini, vkCmdDrawIndexed);
		VKPP_ILOAD(ini, vkCmdDrawIndirect);
		VKPP_ILOAD(ini, vkCmdDrawIndexedIndirect);
		VKPP_ILOAD(ini, vkCmdDispatch);
		VKPP_ILOAD(ini, vkCmdDispatchIndirect);
		VKPP_ILOAD(ini, vkCmdCopyBuffer);
		VKPP_ILOAD(ini, vkCmdCopyImage);
		VKPP_ILOAD(ini, vkCmdBlitImage);
		VKPP_ILOAD(ini, vkCmdCopyBufferToImage);
		VKPP_ILOAD(ini, vkCmdCopyImageToBuffer);
		VKPP_ILOAD(ini, vkCmdUpdateBuffer);
		VKPP_ILOAD(ini, vkCmdFillBuffer);
		VKPP_ILOAD(ini, vkCmdClearColorImage);
		VKPP_ILOAD(ini, vkCmdClearDepthStencilImage);
		VKPP_ILOAD(ini, vkCmdClearAttachments);
		VKPP_ILOAD(ini, vkCmdResolveImage);
		VKPP_ILOAD(ini, vkCmdSetEvent);
		VKPP_ILOAD(ini, vkCmdResetEvent);
		VKPP_ILOAD(ini, vkCmdWaitEvents);
		VKPP_ILOAD(ini, vkCmdPipelineBarrier);
		VKPP_ILOAD(ini, vkCmdBeginQuery);
		VKPP_ILOAD(ini, vkCmdEndQuery);
		VKPP_ILOAD(ini, vkCmdResetQueryPool);
		VKPP_ILOAD(ini, vkCmdWriteTimestamp);
		VKPP_ILOAD(ini, vkCmdCopyQueryPoolResults);
		VKPP_ILOAD(ini, vkCmdPushConstants);
		VKPP_ILOAD(ini, vkCmdBeginRenderPass);
		VKPP_ILOAD(ini, vkCmdNextSubpass);
		VKPP_ILOAD(ini, vkCmdEndRenderPass);
		VKPP_ILOAD(ini, vkCmdExecuteCommands);
		VKPP_ILOAD(ini, vkDestroySurfaceKHR);
		VKPP_ILOAD(ini, vkGetPhysicalDeviceSurfaceSupportKHR);
		VKPP_ILOAD(ini, vkGetPhysicalDeviceSurfaceCapabilitiesKHR);
		VKPP_ILOAD(ini, vkGetPhysicalDeviceSurfaceFormatsKHR);
		VKPP_ILOAD(ini, vkGetPhysicalDeviceSurfacePresentModesKHR);
		VKPP_ILOAD(ini, vkCreateSwapchainKHR);
		VKPP_ILOAD(ini, vkDestroySwapchainKHR);
		VKPP_ILOAD(ini, vkGetSwapchainImagesKHR);
		VKPP_ILOAD(ini, vkAcquireNextImageKHR);
		VKPP_ILOAD(ini, vkQueuePresentKHR);
		VKPP_ILOAD(ini, vkGetDeviceGroupPresentCapabilitiesKHR);
		VKPP_ILOAD(ini, vkGetDeviceGroupSurfacePresentModesKHR);
		VKPP_ILOAD(ini, vkGetPhysicalDevicePresentRectanglesKHR);
		VKPP_ILOAD(ini, vkAcquireNextImage2KHR);
		VKPP_ILOAD(ini, vkGetPhysicalDeviceDisplayPropertiesKHR);
		VKPP_ILOAD(ini, vkGetPhysicalDeviceDisplayPlanePropertiesKHR);
		VKPP_ILOAD(ini, vkGetDisplayPlaneSupportedDisplaysKHR);
		VKPP_ILOAD(ini, vkGetDisplayModePropertiesKHR);
		VKPP_ILOAD(ini, vkCreateDisplayModeKHR);
		VKPP_ILOAD(ini, vkGetDisplayPlaneCapabilitiesKHR);
		VKPP_ILOAD(ini, vkCreateDisplayPlaneSurfaceKHR);
		VKPP_ILOAD(ini, vkCreateSharedSwapchainsKHR);
#ifdef VK_USE_PLATFORM_XLIB_KHR

		VKPP_ILOAD(ini, vkCreateXlibSurfaceKHR);
		VKPP_ILOAD(ini, vkGetPhysicalDeviceXlibPresentationSupportKHR);
#endif //VK_USE_PLATFORM_XLIB_KHR

#ifdef VK_USE_PLATFORM_XCB_KHR

		VKPP_ILOAD(ini, vkCreateXcbSurfaceKHR);
		VKPP_ILOAD(ini, vkGetPhysicalDeviceXcbPresentationSupportKHR);
#endif //VK_USE_PLATFORM_XCB_KHR

#ifdef VK_USE_PLATFORM_WAYLAND_KHR

		VKPP_ILOAD(ini, vkCreateWaylandSurfaceKHR);
		VKPP_ILOAD(ini, vkGetPhysicalDeviceWaylandPresentationSupportKHR);
#endif //VK_USE_PLATFORM_WAYLAND_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR

		VKPP_ILOAD(ini, vkCreateWin32SurfaceKHR);
		VKPP_ILOAD(ini, vkGetPhysicalDeviceWin32PresentationSupportKHR);
#endif //VK_USE_PLATFORM_WIN32_KHR

		VKPP_ILOAD(ini, vkCreateDebugReportCallbackEXT);
		VKPP_ILOAD(ini, vkDestroyDebugReportCallbackEXT);
		VKPP_ILOAD(ini, vkDebugReportMessageEXT);
		VKPP_ILOAD(ini, vkDebugMarkerSetObjectTagEXT);
		VKPP_ILOAD(ini, vkDebugMarkerSetObjectNameEXT);
		VKPP_ILOAD(ini, vkCmdDebugMarkerBeginEXT);
		VKPP_ILOAD(ini, vkCmdDebugMarkerEndEXT);
		VKPP_ILOAD(ini, vkCmdDebugMarkerInsertEXT);
		VKPP_ILOAD(ini, vkCmdBindTransformFeedbackBuffersEXT);
		VKPP_ILOAD(ini, vkCmdBeginTransformFeedbackEXT);
		VKPP_ILOAD(ini, vkCmdEndTransformFeedbackEXT);
		VKPP_ILOAD(ini, vkCmdBeginQueryIndexedEXT);
		VKPP_ILOAD(ini, vkCmdEndQueryIndexedEXT);
		VKPP_ILOAD(ini, vkCmdDrawIndirectByteCountEXT);
		VKPP_ILOAD(ini, vkCmdDrawIndirectCountKHR);
		VKPP_ILOAD(ini, vkCmdDrawIndirectCountAMD);
		VKPP_ILOAD(ini, vkCmdDrawIndexedIndirectCountKHR);
		VKPP_ILOAD(ini, vkCmdDrawIndexedIndirectCountAMD);
		VKPP_ILOAD(ini, vkGetShaderInfoAMD);
#ifdef VK_USE_PLATFORM_GGP

		VKPP_ILOAD(ini, vkCreateStreamDescriptorSurfaceGGP);
#endif //VK_USE_PLATFORM_GGP

		VKPP_ILOAD(ini, vkGetPhysicalDeviceExternalImageFormatPropertiesNV);
#ifdef VK_USE_PLATFORM_WIN32_KHR

		VKPP_ILOAD(ini, vkGetMemoryWin32HandleNV);
#endif //VK_USE_PLATFORM_WIN32_KHR

		VKPP_ILOAD(ini, vkGetDeviceGroupSurfacePresentModes2EXT);
#ifdef VK_USE_PLATFORM_VI_NN

		VKPP_ILOAD(ini, vkCreateViSurfaceNN);
#endif //VK_USE_PLATFORM_VI_NN

#ifdef VK_USE_PLATFORM_WIN32_KHR

		VKPP_ILOAD(ini, vkGetMemoryWin32HandleKHR);
		VKPP_ILOAD(ini, vkGetMemoryWin32HandlePropertiesKHR);
#endif //VK_USE_PLATFORM_WIN32_KHR

		VKPP_ILOAD(ini, vkGetMemoryFdKHR);
		VKPP_ILOAD(ini, vkGetMemoryFdPropertiesKHR);
#ifdef VK_USE_PLATFORM_WIN32_KHR

		VKPP_ILOAD(ini, vkImportSemaphoreWin32HandleKHR);
		VKPP_ILOAD(ini, vkGetSemaphoreWin32HandleKHR);
#endif //VK_USE_PLATFORM_WIN32_KHR

		VKPP_ILOAD(ini, vkImportSemaphoreFdKHR);
		VKPP_ILOAD(ini, vkGetSemaphoreFdKHR);
		VKPP_ILOAD(ini, vkCmdPushDescriptorSetKHR);
		VKPP_ILOAD(ini, vkCmdPushDescriptorSetWithTemplateKHR);
		VKPP_ILOAD(ini, vkCmdBeginConditionalRenderingEXT);
		VKPP_ILOAD(ini, vkCmdEndConditionalRenderingEXT);
		VKPP_ILOAD(ini, vkCmdSetViewportWScalingNV);
		VKPP_ILOAD(ini, vkReleaseDisplayEXT);
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT

		VKPP_ILOAD(ini, vkAcquireXlibDisplayEXT);
		VKPP_ILOAD(ini, vkGetRandROutputDisplayEXT);
#endif //VK_USE_PLATFORM_XLIB_XRANDR_EXT

		VKPP_ILOAD(ini, vkGetPhysicalDeviceSurfaceCapabilities2EXT);
		VKPP_ILOAD(ini, vkDisplayPowerControlEXT);
		VKPP_ILOAD(ini, vkRegisterDeviceEventEXT);
		VKPP_ILOAD(ini, vkRegisterDisplayEventEXT);
		VKPP_ILOAD(ini, vkGetSwapchainCounterEXT);
		VKPP_ILOAD(ini, vkGetRefreshCycleDurationGOOGLE);
		VKPP_ILOAD(ini, vkGetPastPresentationTimingGOOGLE);
		VKPP_ILOAD(ini, vkCmdSetDiscardRectangleEXT);
		VKPP_ILOAD(ini, vkSetHdrMetadataEXT);
		VKPP_ILOAD(ini, vkCreateRenderPass2KHR);
		VKPP_ILOAD(ini, vkCmdBeginRenderPass2KHR);
		VKPP_ILOAD(ini, vkCmdNextSubpass2KHR);
		VKPP_ILOAD(ini, vkCmdEndRenderPass2KHR);
		VKPP_ILOAD(ini, vkGetSwapchainStatusKHR);
#ifdef VK_USE_PLATFORM_WIN32_KHR

		VKPP_ILOAD(ini, vkImportFenceWin32HandleKHR);
		VKPP_ILOAD(ini, vkGetFenceWin32HandleKHR);
#endif //VK_USE_PLATFORM_WIN32_KHR

		VKPP_ILOAD(ini, vkImportFenceFdKHR);
		VKPP_ILOAD(ini, vkGetFenceFdKHR);
		VKPP_ILOAD(ini, vkGetPhysicalDeviceSurfaceCapabilities2KHR);
		VKPP_ILOAD(ini, vkGetPhysicalDeviceSurfaceFormats2KHR);
		VKPP_ILOAD(ini, vkGetPhysicalDeviceDisplayProperties2KHR);
		VKPP_ILOAD(ini, vkGetPhysicalDeviceDisplayPlaneProperties2KHR);
		VKPP_ILOAD(ini, vkGetDisplayModeProperties2KHR);
		VKPP_ILOAD(ini, vkGetDisplayPlaneCapabilities2KHR);
#ifdef VK_USE_PLATFORM_IOS_MVK

		VKPP_ILOAD(ini, vkCreateIOSSurfaceMVK);
#endif //VK_USE_PLATFORM_IOS_MVK

#ifdef VK_USE_PLATFORM_MACOS_MVK

		VKPP_ILOAD(ini, vkCreateMacOSSurfaceMVK);
#endif //VK_USE_PLATFORM_MACOS_MVK

		VKPP_ILOAD(ini, vkSetDebugUtilsObjectNameEXT);
		VKPP_ILOAD(ini, vkSetDebugUtilsObjectTagEXT);
		VKPP_ILOAD(ini, vkQueueBeginDebugUtilsLabelEXT);
		VKPP_ILOAD(ini, vkQueueEndDebugUtilsLabelEXT);
		VKPP_ILOAD(ini, vkQueueInsertDebugUtilsLabelEXT);
		VKPP_ILOAD(ini, vkCmdBeginDebugUtilsLabelEXT);
		VKPP_ILOAD(ini, vkCmdEndDebugUtilsLabelEXT);
		VKPP_ILOAD(ini, vkCmdInsertDebugUtilsLabelEXT);
		VKPP_ILOAD(ini, vkCreateDebugUtilsMessengerEXT);
		VKPP_ILOAD(ini, vkDestroyDebugUtilsMessengerEXT);
		VKPP_ILOAD(ini, vkSubmitDebugUtilsMessageEXT);
		VKPP_ILOAD(ini, vkCmdSetSampleLocationsEXT);
		VKPP_ILOAD(ini, vkGetPhysicalDeviceMultisamplePropertiesEXT);
		VKPP_ILOAD(ini, vkGetImageDrmFormatModifierPropertiesEXT);
		VKPP_ILOAD(ini, vkCreateValidationCacheEXT);
		VKPP_ILOAD(ini, vkDestroyValidationCacheEXT);
		VKPP_ILOAD(ini, vkMergeValidationCachesEXT);
		VKPP_ILOAD(ini, vkGetValidationCacheDataEXT);
		VKPP_ILOAD(ini, vkCmdBindShadingRateImageNV);
		VKPP_ILOAD(ini, vkCmdSetViewportShadingRatePaletteNV);
		VKPP_ILOAD(ini, vkCmdSetCoarseSampleOrderNV);
		VKPP_ILOAD(ini, vkCreateAccelerationStructureNV);
		VKPP_ILOAD(ini, vkDestroyAccelerationStructureNV);
		VKPP_ILOAD(ini, vkGetAccelerationStructureMemoryRequirementsNV);
		VKPP_ILOAD(ini, vkBindAccelerationStructureMemoryNV);
		VKPP_ILOAD(ini, vkCmdBuildAccelerationStructureNV);
		VKPP_ILOAD(ini, vkCmdCopyAccelerationStructureNV);
		VKPP_ILOAD(ini, vkCmdTraceRaysNV);
		VKPP_ILOAD(ini, vkCreateRayTracingPipelinesNV);
		VKPP_ILOAD(ini, vkGetRayTracingShaderGroupHandlesNV);
		VKPP_ILOAD(ini, vkGetAccelerationStructureHandleNV);
		VKPP_ILOAD(ini, vkCmdWriteAccelerationStructuresPropertiesNV);
		VKPP_ILOAD(ini, vkCompileDeferredNV);
		VKPP_ILOAD(ini, vkGetMemoryHostPointerPropertiesEXT);
		VKPP_ILOAD(ini, vkCmdWriteBufferMarkerAMD);
		VKPP_ILOAD(ini, vkGetPhysicalDeviceCalibrateableTimeDomainsEXT);
		VKPP_ILOAD(ini, vkGetCalibratedTimestampsEXT);
		VKPP_ILOAD(ini, vkCmdDrawMeshTasksNV);
		VKPP_ILOAD(ini, vkCmdDrawMeshTasksIndirectNV);
		VKPP_ILOAD(ini, vkCmdDrawMeshTasksIndirectCountNV);
		VKPP_ILOAD(ini, vkCmdSetExclusiveScissorNV);
		VKPP_ILOAD(ini, vkCmdSetCheckpointNV);
		VKPP_ILOAD(ini, vkGetQueueCheckpointDataNV);
		VKPP_ILOAD(ini, vkSetLocalDimmingAMD);
#ifdef VK_USE_PLATFORM_FUCHSIA

		VKPP_ILOAD(ini, vkCreateImagePipeSurfaceFUCHSIA);
#endif //VK_USE_PLATFORM_FUCHSIA

		VKPP_ILOAD(ini, vkGetBufferDeviceAddressEXT);
		VKPP_ILOAD(ini, vkGetPhysicalDeviceCooperativeMatrixPropertiesNV);
#ifdef VK_USE_PLATFORM_WIN32_KHR

		VKPP_ILOAD(ini, vkGetPhysicalDeviceSurfacePresentModes2EXT);
		VKPP_ILOAD(ini, vkAcquireFullScreenExclusiveModeEXT);
		VKPP_ILOAD(ini, vkReleaseFullScreenExclusiveModeEXT);
#endif //VK_USE_PLATFORM_WIN32_KHR

		VKPP_ILOAD(ini, vkCreateHeadlessSurfaceEXT);
		VKPP_ILOAD(ini, vkResetQueryPoolEXT);

	}

	#undef VKPP_ILOAD
};

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
    