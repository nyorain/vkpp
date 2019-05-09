// Copyright (c) 2017 nyorain
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
    