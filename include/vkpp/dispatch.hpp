// Copyright (c) 2020 nyorain
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

// Automaitcally generated vulkan header, see nyorain/vkpp
// Do not edit manually, rather edit the codegen files.

#pragma once

#include <vkpp/fwd.hpp>
#include <vkpp/enums.hpp>
#include <vkpp/structs.hpp>
#include <vkpp/flags.hpp>

// Generated for vulkan version: 1.1.168

namespace vk {

class DynamicDispatch {
public:
	// Initializes the functions that can be called without instance.
	// If you link to libvulkan, just pass vkGetInstanceProcAddr as the
	// loader function.
	// - vkEnumerateInstanceVersion (if available)
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
	PFN_vkCmdDrawIndirectCount vkCmdDrawIndirectCount {};
	PFN_vkCmdDrawIndirectCountKHR vkCmdDrawIndirectCountKHR {};
	PFN_vkCmdDrawIndirectCountAMD vkCmdDrawIndirectCountAMD {};
	PFN_vkCmdDrawIndexedIndirectCount vkCmdDrawIndexedIndirectCount {};
	PFN_vkCmdDrawIndexedIndirectCountKHR vkCmdDrawIndexedIndirectCountKHR {};
	PFN_vkCmdDrawIndexedIndirectCountAMD vkCmdDrawIndexedIndirectCountAMD {};
	PFN_vkCreateRenderPass2 vkCreateRenderPass2 {};
	PFN_vkCreateRenderPass2KHR vkCreateRenderPass2KHR {};
	PFN_vkCmdBeginRenderPass2 vkCmdBeginRenderPass2 {};
	PFN_vkCmdBeginRenderPass2KHR vkCmdBeginRenderPass2KHR {};
	PFN_vkCmdNextSubpass2 vkCmdNextSubpass2 {};
	PFN_vkCmdNextSubpass2KHR vkCmdNextSubpass2KHR {};
	PFN_vkCmdEndRenderPass2 vkCmdEndRenderPass2 {};
	PFN_vkCmdEndRenderPass2KHR vkCmdEndRenderPass2KHR {};
	PFN_vkResetQueryPool vkResetQueryPool {};
	PFN_vkResetQueryPoolEXT vkResetQueryPoolEXT {};
	PFN_vkGetSemaphoreCounterValue vkGetSemaphoreCounterValue {};
	PFN_vkGetSemaphoreCounterValueKHR vkGetSemaphoreCounterValueKHR {};
	PFN_vkWaitSemaphores vkWaitSemaphores {};
	PFN_vkWaitSemaphoresKHR vkWaitSemaphoresKHR {};
	PFN_vkSignalSemaphore vkSignalSemaphore {};
	PFN_vkSignalSemaphoreKHR vkSignalSemaphoreKHR {};
	PFN_vkGetBufferDeviceAddress vkGetBufferDeviceAddress {};
	PFN_vkGetBufferDeviceAddressKHR vkGetBufferDeviceAddressKHR {};
	PFN_vkGetBufferDeviceAddressEXT vkGetBufferDeviceAddressEXT {};
	PFN_vkGetBufferOpaqueCaptureAddress vkGetBufferOpaqueCaptureAddress {};
	PFN_vkGetBufferOpaqueCaptureAddressKHR vkGetBufferOpaqueCaptureAddressKHR {};
	PFN_vkGetDeviceMemoryOpaqueCaptureAddress vkGetDeviceMemoryOpaqueCaptureAddress {};
	PFN_vkGetDeviceMemoryOpaqueCaptureAddressKHR vkGetDeviceMemoryOpaqueCaptureAddressKHR {};
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
	PFN_vkGetShaderInfoAMD vkGetShaderInfoAMD {};
	PFN_vkGetPhysicalDeviceExternalImageFormatPropertiesNV vkGetPhysicalDeviceExternalImageFormatPropertiesNV {};
	PFN_vkGetMemoryFdKHR vkGetMemoryFdKHR {};
	PFN_vkGetMemoryFdPropertiesKHR vkGetMemoryFdPropertiesKHR {};
	PFN_vkImportSemaphoreFdKHR vkImportSemaphoreFdKHR {};
	PFN_vkGetSemaphoreFdKHR vkGetSemaphoreFdKHR {};
	PFN_vkCmdPushDescriptorSetKHR vkCmdPushDescriptorSetKHR {};
	PFN_vkCmdPushDescriptorSetWithTemplateKHR vkCmdPushDescriptorSetWithTemplateKHR {};
	PFN_vkCmdBeginConditionalRenderingEXT vkCmdBeginConditionalRenderingEXT {};
	PFN_vkCmdEndConditionalRenderingEXT vkCmdEndConditionalRenderingEXT {};
	PFN_vkCmdSetViewportWScalingNV vkCmdSetViewportWScalingNV {};
	PFN_vkReleaseDisplayEXT vkReleaseDisplayEXT {};
	PFN_vkGetPhysicalDeviceSurfaceCapabilities2EXT vkGetPhysicalDeviceSurfaceCapabilities2EXT {};
	PFN_vkDisplayPowerControlEXT vkDisplayPowerControlEXT {};
	PFN_vkRegisterDeviceEventEXT vkRegisterDeviceEventEXT {};
	PFN_vkRegisterDisplayEventEXT vkRegisterDisplayEventEXT {};
	PFN_vkGetSwapchainCounterEXT vkGetSwapchainCounterEXT {};
	PFN_vkGetRefreshCycleDurationGOOGLE vkGetRefreshCycleDurationGOOGLE {};
	PFN_vkGetPastPresentationTimingGOOGLE vkGetPastPresentationTimingGOOGLE {};
	PFN_vkCmdSetDiscardRectangleEXT vkCmdSetDiscardRectangleEXT {};
	PFN_vkSetHdrMetadataEXT vkSetHdrMetadataEXT {};
	PFN_vkGetSwapchainStatusKHR vkGetSwapchainStatusKHR {};
	PFN_vkImportFenceFdKHR vkImportFenceFdKHR {};
	PFN_vkGetFenceFdKHR vkGetFenceFdKHR {};
	PFN_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR {};
	PFN_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR {};
	PFN_vkAcquireProfilingLockKHR vkAcquireProfilingLockKHR {};
	PFN_vkReleaseProfilingLockKHR vkReleaseProfilingLockKHR {};
	PFN_vkGetPhysicalDeviceSurfaceCapabilities2KHR vkGetPhysicalDeviceSurfaceCapabilities2KHR {};
	PFN_vkGetPhysicalDeviceSurfaceFormats2KHR vkGetPhysicalDeviceSurfaceFormats2KHR {};
	PFN_vkGetPhysicalDeviceDisplayProperties2KHR vkGetPhysicalDeviceDisplayProperties2KHR {};
	PFN_vkGetPhysicalDeviceDisplayPlaneProperties2KHR vkGetPhysicalDeviceDisplayPlaneProperties2KHR {};
	PFN_vkGetDisplayModeProperties2KHR vkGetDisplayModeProperties2KHR {};
	PFN_vkGetDisplayPlaneCapabilities2KHR vkGetDisplayPlaneCapabilities2KHR {};
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
	PFN_vkCreateAccelerationStructureKHR vkCreateAccelerationStructureKHR {};
	PFN_vkDestroyAccelerationStructureKHR vkDestroyAccelerationStructureKHR {};
	PFN_vkCmdBuildAccelerationStructuresKHR vkCmdBuildAccelerationStructuresKHR {};
	PFN_vkCmdBuildAccelerationStructuresIndirectKHR vkCmdBuildAccelerationStructuresIndirectKHR {};
	PFN_vkBuildAccelerationStructuresKHR vkBuildAccelerationStructuresKHR {};
	PFN_vkCopyAccelerationStructureKHR vkCopyAccelerationStructureKHR {};
	PFN_vkCopyAccelerationStructureToMemoryKHR vkCopyAccelerationStructureToMemoryKHR {};
	PFN_vkCopyMemoryToAccelerationStructureKHR vkCopyMemoryToAccelerationStructureKHR {};
	PFN_vkWriteAccelerationStructuresPropertiesKHR vkWriteAccelerationStructuresPropertiesKHR {};
	PFN_vkCmdCopyAccelerationStructureKHR vkCmdCopyAccelerationStructureKHR {};
	PFN_vkCmdCopyAccelerationStructureToMemoryKHR vkCmdCopyAccelerationStructureToMemoryKHR {};
	PFN_vkCmdCopyMemoryToAccelerationStructureKHR vkCmdCopyMemoryToAccelerationStructureKHR {};
	PFN_vkGetAccelerationStructureDeviceAddressKHR vkGetAccelerationStructureDeviceAddressKHR {};
	PFN_vkCmdWriteAccelerationStructuresPropertiesKHR vkCmdWriteAccelerationStructuresPropertiesKHR {};
	PFN_vkGetDeviceAccelerationStructureCompatibilityKHR vkGetDeviceAccelerationStructureCompatibilityKHR {};
	PFN_vkGetAccelerationStructureBuildSizesKHR vkGetAccelerationStructureBuildSizesKHR {};
	PFN_vkCmdTraceRaysKHR vkCmdTraceRaysKHR {};
	PFN_vkCreateRayTracingPipelinesKHR vkCreateRayTracingPipelinesKHR {};
	PFN_vkGetRayTracingShaderGroupHandlesKHR vkGetRayTracingShaderGroupHandlesKHR {};
	PFN_vkGetRayTracingShaderGroupHandlesNV vkGetRayTracingShaderGroupHandlesNV {};
	PFN_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR vkGetRayTracingCaptureReplayShaderGroupHandlesKHR {};
	PFN_vkCmdTraceRaysIndirectKHR vkCmdTraceRaysIndirectKHR {};
	PFN_vkGetRayTracingShaderGroupStackSizeKHR vkGetRayTracingShaderGroupStackSizeKHR {};
	PFN_vkCmdSetRayTracingPipelineStackSizeKHR vkCmdSetRayTracingPipelineStackSizeKHR {};
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
	PFN_vkInitializePerformanceApiINTEL vkInitializePerformanceApiINTEL {};
	PFN_vkUninitializePerformanceApiINTEL vkUninitializePerformanceApiINTEL {};
	PFN_vkCmdSetPerformanceMarkerINTEL vkCmdSetPerformanceMarkerINTEL {};
	PFN_vkCmdSetPerformanceStreamMarkerINTEL vkCmdSetPerformanceStreamMarkerINTEL {};
	PFN_vkCmdSetPerformanceOverrideINTEL vkCmdSetPerformanceOverrideINTEL {};
	PFN_vkAcquirePerformanceConfigurationINTEL vkAcquirePerformanceConfigurationINTEL {};
	PFN_vkReleasePerformanceConfigurationINTEL vkReleasePerformanceConfigurationINTEL {};
	PFN_vkQueueSetPerformanceConfigurationINTEL vkQueueSetPerformanceConfigurationINTEL {};
	PFN_vkGetPerformanceParameterINTEL vkGetPerformanceParameterINTEL {};
	PFN_vkSetLocalDimmingAMD vkSetLocalDimmingAMD {};
	PFN_vkGetPhysicalDeviceFragmentShadingRatesKHR vkGetPhysicalDeviceFragmentShadingRatesKHR {};
	PFN_vkCmdSetFragmentShadingRateKHR vkCmdSetFragmentShadingRateKHR {};
	PFN_vkGetPhysicalDeviceToolPropertiesEXT vkGetPhysicalDeviceToolPropertiesEXT {};
	PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV vkGetPhysicalDeviceCooperativeMatrixPropertiesNV {};
	PFN_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV {};
	PFN_vkCreateHeadlessSurfaceEXT vkCreateHeadlessSurfaceEXT {};
	PFN_vkCmdSetLineStippleEXT vkCmdSetLineStippleEXT {};
	PFN_vkCmdSetCullModeEXT vkCmdSetCullModeEXT {};
	PFN_vkCmdSetFrontFaceEXT vkCmdSetFrontFaceEXT {};
	PFN_vkCmdSetPrimitiveTopologyEXT vkCmdSetPrimitiveTopologyEXT {};
	PFN_vkCmdSetViewportWithCountEXT vkCmdSetViewportWithCountEXT {};
	PFN_vkCmdSetScissorWithCountEXT vkCmdSetScissorWithCountEXT {};
	PFN_vkCmdBindVertexBuffers2EXT vkCmdBindVertexBuffers2EXT {};
	PFN_vkCmdSetDepthTestEnableEXT vkCmdSetDepthTestEnableEXT {};
	PFN_vkCmdSetDepthWriteEnableEXT vkCmdSetDepthWriteEnableEXT {};
	PFN_vkCmdSetDepthCompareOpEXT vkCmdSetDepthCompareOpEXT {};
	PFN_vkCmdSetDepthBoundsTestEnableEXT vkCmdSetDepthBoundsTestEnableEXT {};
	PFN_vkCmdSetStencilTestEnableEXT vkCmdSetStencilTestEnableEXT {};
	PFN_vkCmdSetStencilOpEXT vkCmdSetStencilOpEXT {};
	PFN_vkCreateDeferredOperationKHR vkCreateDeferredOperationKHR {};
	PFN_vkDestroyDeferredOperationKHR vkDestroyDeferredOperationKHR {};
	PFN_vkGetDeferredOperationMaxConcurrencyKHR vkGetDeferredOperationMaxConcurrencyKHR {};
	PFN_vkGetDeferredOperationResultKHR vkGetDeferredOperationResultKHR {};
	PFN_vkDeferredOperationJoinKHR vkDeferredOperationJoinKHR {};
	PFN_vkGetPipelineExecutablePropertiesKHR vkGetPipelineExecutablePropertiesKHR {};
	PFN_vkGetPipelineExecutableStatisticsKHR vkGetPipelineExecutableStatisticsKHR {};
	PFN_vkGetPipelineExecutableInternalRepresentationsKHR vkGetPipelineExecutableInternalRepresentationsKHR {};
	PFN_vkGetGeneratedCommandsMemoryRequirementsNV vkGetGeneratedCommandsMemoryRequirementsNV {};
	PFN_vkCmdPreprocessGeneratedCommandsNV vkCmdPreprocessGeneratedCommandsNV {};
	PFN_vkCmdExecuteGeneratedCommandsNV vkCmdExecuteGeneratedCommandsNV {};
	PFN_vkCmdBindPipelineShaderGroupNV vkCmdBindPipelineShaderGroupNV {};
	PFN_vkCreateIndirectCommandsLayoutNV vkCreateIndirectCommandsLayoutNV {};
	PFN_vkDestroyIndirectCommandsLayoutNV vkDestroyIndirectCommandsLayoutNV {};
	PFN_vkCreatePrivateDataSlotEXT vkCreatePrivateDataSlotEXT {};
	PFN_vkDestroyPrivateDataSlotEXT vkDestroyPrivateDataSlotEXT {};
	PFN_vkSetPrivateDataEXT vkSetPrivateDataEXT {};
	PFN_vkGetPrivateDataEXT vkGetPrivateDataEXT {};
	PFN_vkCmdSetFragmentShadingRateEnumNV vkCmdSetFragmentShadingRateEnumNV {};
	PFN_vkCmdCopyBuffer2KHR vkCmdCopyBuffer2KHR {};
	PFN_vkCmdCopyImage2KHR vkCmdCopyImage2KHR {};
	PFN_vkCmdCopyBufferToImage2KHR vkCmdCopyBufferToImage2KHR {};
	PFN_vkCmdCopyImageToBuffer2KHR vkCmdCopyImageToBuffer2KHR {};
	PFN_vkCmdBlitImage2KHR vkCmdBlitImage2KHR {};
	PFN_vkCmdResolveImage2KHR vkCmdResolveImage2KHR {};



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


#ifdef VK_USE_PLATFORM_GGP
	PFN_vkCreateStreamDescriptorSurfaceGGP vkCreateStreamDescriptorSurfaceGGP {};
#endif //VK_USE_PLATFORM_GGP


#ifdef VK_USE_PLATFORM_WIN32_KHR
	PFN_vkGetMemoryWin32HandleNV vkGetMemoryWin32HandleNV {};
#endif //VK_USE_PLATFORM_WIN32_KHR


#ifdef VK_USE_PLATFORM_VI_NN
	PFN_vkCreateViSurfaceNN vkCreateViSurfaceNN {};
#endif //VK_USE_PLATFORM_VI_NN


#ifdef VK_USE_PLATFORM_WIN32_KHR
	PFN_vkGetMemoryWin32HandleKHR vkGetMemoryWin32HandleKHR {};
	PFN_vkGetMemoryWin32HandlePropertiesKHR vkGetMemoryWin32HandlePropertiesKHR {};
#endif //VK_USE_PLATFORM_WIN32_KHR


#ifdef VK_USE_PLATFORM_WIN32_KHR
	PFN_vkImportSemaphoreWin32HandleKHR vkImportSemaphoreWin32HandleKHR {};
	PFN_vkGetSemaphoreWin32HandleKHR vkGetSemaphoreWin32HandleKHR {};
#endif //VK_USE_PLATFORM_WIN32_KHR


#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
	PFN_vkAcquireXlibDisplayEXT vkAcquireXlibDisplayEXT {};
	PFN_vkGetRandROutputDisplayEXT vkGetRandROutputDisplayEXT {};
#endif //VK_USE_PLATFORM_XLIB_XRANDR_EXT


#ifdef VK_USE_PLATFORM_WIN32_KHR
	PFN_vkImportFenceWin32HandleKHR vkImportFenceWin32HandleKHR {};
	PFN_vkGetFenceWin32HandleKHR vkGetFenceWin32HandleKHR {};
#endif //VK_USE_PLATFORM_WIN32_KHR


#ifdef VK_USE_PLATFORM_IOS_MVK
	PFN_vkCreateIOSSurfaceMVK vkCreateIOSSurfaceMVK {};
#endif //VK_USE_PLATFORM_IOS_MVK


#ifdef VK_USE_PLATFORM_MACOS_MVK
	PFN_vkCreateMacOSSurfaceMVK vkCreateMacOSSurfaceMVK {};
#endif //VK_USE_PLATFORM_MACOS_MVK


#ifdef VK_USE_PLATFORM_FUCHSIA
	PFN_vkCreateImagePipeSurfaceFUCHSIA vkCreateImagePipeSurfaceFUCHSIA {};
#endif //VK_USE_PLATFORM_FUCHSIA


#ifdef VK_USE_PLATFORM_WIN32_KHR
	PFN_vkGetPhysicalDeviceSurfacePresentModes2EXT vkGetPhysicalDeviceSurfacePresentModes2EXT {};
	PFN_vkAcquireFullScreenExclusiveModeEXT vkAcquireFullScreenExclusiveModeEXT {};
	PFN_vkReleaseFullScreenExclusiveModeEXT vkReleaseFullScreenExclusiveModeEXT {};
	PFN_vkGetDeviceGroupSurfacePresentModes2EXT vkGetDeviceGroupSurfacePresentModes2EXT {};
#endif //VK_USE_PLATFORM_WIN32_KHR


#ifdef VK_USE_PLATFORM_WIN32_KHR
	PFN_vkAcquireWinrtDisplayNV vkAcquireWinrtDisplayNV {};
	PFN_vkGetWinrtDisplayNV vkGetWinrtDisplayNV {};
#endif //VK_USE_PLATFORM_WIN32_KHR


#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
	PFN_vkCreateDirectFBSurfaceEXT vkCreateDirectFBSurfaceEXT {};
	PFN_vkGetPhysicalDeviceDirectFBPresentationSupportEXT vkGetPhysicalDeviceDirectFBPresentationSupportEXT {};
#endif //VK_USE_PLATFORM_DIRECTFB_EXT


};

} // namespace vk
// The specification (vk.xml) itself is published under the following license:

// Copyright (c) 2015-2020 The Khronos Group Inc.
// 
// SPDX-License-Identifier: Apache-2.0 OR MIT
    