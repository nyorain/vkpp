// Copyright (c) 2020 nyorain
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

// Automaitcally generated vulkan header, see nyorain/vkpp
// Do not edit manually, rather edit the codegen files.

#pragma once

#include <vkpp/fwd.hpp>
#include <vkpp/flags.hpp>

// Generated for vulkan version: 1.1.204

namespace vk {

enum class StructureType : int32_t {
	applicationInfo = 0,
	instanceCreateInfo = 1,
	deviceQueueCreateInfo = 2,
	deviceCreateInfo = 3,
	submitInfo = 4,
	memoryAllocateInfo = 5,
	mappedMemoryRange = 6,
	bindSparseInfo = 7,
	fenceCreateInfo = 8,
	semaphoreCreateInfo = 9,
	eventCreateInfo = 10,
	queryPoolCreateInfo = 11,
	bufferCreateInfo = 12,
	bufferViewCreateInfo = 13,
	imageCreateInfo = 14,
	imageViewCreateInfo = 15,
	shaderModuleCreateInfo = 16,
	pipelineCacheCreateInfo = 17,
	pipelineShaderStageCreateInfo = 18,
	pipelineVertexInputStateCreateInfo = 19,
	pipelineInputAssemblyStateCreateInfo = 20,
	pipelineTessellationStateCreateInfo = 21,
	pipelineViewportStateCreateInfo = 22,
	pipelineRasterizationStateCreateInfo = 23,
	pipelineMultisampleStateCreateInfo = 24,
	pipelineDepthStencilStateCreateInfo = 25,
	pipelineColorBlendStateCreateInfo = 26,
	pipelineDynamicStateCreateInfo = 27,
	graphicsPipelineCreateInfo = 28,
	computePipelineCreateInfo = 29,
	pipelineLayoutCreateInfo = 30,
	samplerCreateInfo = 31,
	descriptorSetLayoutCreateInfo = 32,
	descriptorPoolCreateInfo = 33,
	descriptorSetAllocateInfo = 34,
	writeDescriptorSet = 35,
	copyDescriptorSet = 36,
	framebufferCreateInfo = 37,
	renderPassCreateInfo = 38,
	commandPoolCreateInfo = 39,
	commandBufferAllocateInfo = 40,
	commandBufferInheritanceInfo = 41,
	commandBufferBeginInfo = 42,
	renderPassBeginInfo = 43,
	bufferMemoryBarrier = 44,
	imageMemoryBarrier = 45,
	memoryBarrier = 46,
	loaderInstanceCreateInfo = 47,
	loaderDeviceCreateInfo = 48,
	physicalDeviceSubgroupProperties = 1000094000,
	bindBufferMemoryInfo = 1000157000,
	bindImageMemoryInfo = 1000157001,
	physicalDevice16bitStorageFeatures = 1000083000,
	memoryDedicatedRequirements = 1000127000,
	memoryDedicatedAllocateInfo = 1000127001,
	memoryAllocateFlagsInfo = 1000060000,
	deviceGroupRenderPassBeginInfo = 1000060003,
	deviceGroupCommandBufferBeginInfo = 1000060004,
	deviceGroupSubmitInfo = 1000060005,
	deviceGroupBindSparseInfo = 1000060006,
	bindBufferMemoryDeviceGroupInfo = 1000060013,
	bindImageMemoryDeviceGroupInfo = 1000060014,
	physicalDeviceGroupProperties = 1000070000,
	deviceGroupDeviceCreateInfo = 1000070001,
	bufferMemoryRequirementsInfo2 = 1000146000,
	imageMemoryRequirementsInfo2 = 1000146001,
	imageSparseMemoryRequirementsInfo2 = 1000146002,
	memoryRequirements2 = 1000146003,
	sparseImageMemoryRequirements2 = 1000146004,
	physicalDeviceFeatures2 = 1000059000,
	physicalDeviceProperties2 = 1000059001,
	formatProperties2 = 1000059002,
	imageFormatProperties2 = 1000059003,
	physicalDeviceImageFormatInfo2 = 1000059004,
	queueFamilyProperties2 = 1000059005,
	physicalDeviceMemoryProperties2 = 1000059006,
	sparseImageFormatProperties2 = 1000059007,
	physicalDeviceSparseImageFormatInfo2 = 1000059008,
	physicalDevicePointClippingProperties = 1000117000,
	renderPassInputAttachmentAspectCreateInfo = 1000117001,
	imageViewUsageCreateInfo = 1000117002,
	pipelineTessellationDomainOriginStateCreateInfo = 1000117003,
	renderPassMultiviewCreateInfo = 1000053000,
	physicalDeviceMultiviewFeatures = 1000053001,
	physicalDeviceMultiviewProperties = 1000053002,
	physicalDeviceVariablePointersFeatures = 1000120000,
	physicalDeviceVariablePointerFeatures = 1000120000,
	protectedSubmitInfo = 1000145000,
	physicalDeviceProtectedMemoryFeatures = 1000145001,
	physicalDeviceProtectedMemoryProperties = 1000145002,
	deviceQueueInfo2 = 1000145003,
	samplerYcbcrConversionCreateInfo = 1000156000,
	samplerYcbcrConversionInfo = 1000156001,
	bindImagePlaneMemoryInfo = 1000156002,
	imagePlaneMemoryRequirementsInfo = 1000156003,
	physicalDeviceSamplerYcbcrConversionFeatures = 1000156004,
	samplerYcbcrConversionImageFormatProperties = 1000156005,
	descriptorUpdateTemplateCreateInfo = 1000085000,
	physicalDeviceExternalImageFormatInfo = 1000071000,
	externalImageFormatProperties = 1000071001,
	physicalDeviceExternalBufferInfo = 1000071002,
	externalBufferProperties = 1000071003,
	physicalDeviceIDProperties = 1000071004,
	externalMemoryBufferCreateInfo = 1000072000,
	externalMemoryImageCreateInfo = 1000072001,
	exportMemoryAllocateInfo = 1000072002,
	physicalDeviceExternalFenceInfo = 1000112000,
	externalFenceProperties = 1000112001,
	exportFenceCreateInfo = 1000113000,
	exportSemaphoreCreateInfo = 1000077000,
	physicalDeviceExternalSemaphoreInfo = 1000076000,
	externalSemaphoreProperties = 1000076001,
	physicalDeviceMaintenance3Properties = 1000168000,
	descriptorSetLayoutSupport = 1000168001,
	physicalDeviceShaderDrawParametersFeatures = 1000063000,
	physicalDeviceShaderDrawParameterFeatures = 1000063000,
	physicalDeviceVulkan11Features = 49,
	physicalDeviceVulkan11Properties = 50,
	physicalDeviceVulkan12Features = 51,
	physicalDeviceVulkan12Properties = 52,
	imageFormatListCreateInfo = 1000147000,
	attachmentDescription2 = 1000109000,
	attachmentReference2 = 1000109001,
	subpassDescription2 = 1000109002,
	subpassDependency2 = 1000109003,
	renderPassCreateInfo2 = 1000109004,
	subpassBeginInfo = 1000109005,
	subpassEndInfo = 1000109006,
	physicalDevice8bitStorageFeatures = 1000177000,
	physicalDeviceDriverProperties = 1000196000,
	physicalDeviceShaderAtomicInt64Features = 1000180000,
	physicalDeviceShaderFloat16Int8Features = 1000082000,
	physicalDeviceFloatControlsProperties = 1000197000,
	descriptorSetLayoutBindingFlagsCreateInfo = 1000161000,
	physicalDeviceDescriptorIndexingFeatures = 1000161001,
	physicalDeviceDescriptorIndexingProperties = 1000161002,
	descriptorSetVariableDescriptorCountAllocateInfo = 1000161003,
	descriptorSetVariableDescriptorCountLayoutSupport = 1000161004,
	physicalDeviceDepthStencilResolveProperties = 1000199000,
	subpassDescriptionDepthStencilResolve = 1000199001,
	physicalDeviceScalarBlockLayoutFeatures = 1000221000,
	imageStencilUsageCreateInfo = 1000246000,
	physicalDeviceSamplerFilterMinmaxProperties = 1000130000,
	samplerReductionModeCreateInfo = 1000130001,
	physicalDeviceVulkanMemoryModelFeatures = 1000211000,
	physicalDeviceImagelessFramebufferFeatures = 1000108000,
	framebufferAttachmentsCreateInfo = 1000108001,
	framebufferAttachmentImageInfo = 1000108002,
	renderPassAttachmentBeginInfo = 1000108003,
	physicalDeviceUniformBufferStandardLayoutFeatures = 1000253000,
	physicalDeviceShaderSubgroupExtendedTypesFeatures = 1000175000,
	physicalDeviceSeparateDepthStencilLayoutsFeatures = 1000241000,
	attachmentReferenceStencilLayout = 1000241001,
	attachmentDescriptionStencilLayout = 1000241002,
	physicalDeviceHostQueryResetFeatures = 1000261000,
	physicalDeviceTimelineSemaphoreFeatures = 1000207000,
	physicalDeviceTimelineSemaphoreProperties = 1000207001,
	semaphoreTypeCreateInfo = 1000207002,
	timelineSemaphoreSubmitInfo = 1000207003,
	semaphoreWaitInfo = 1000207004,
	semaphoreSignalInfo = 1000207005,
	physicalDeviceBufferDeviceAddressFeatures = 1000257000,
	bufferDeviceAddressInfo = 1000244001,
	bufferOpaqueCaptureAddressCreateInfo = 1000257002,
	memoryOpaqueCaptureAddressAllocateInfo = 1000257003,
	deviceMemoryOpaqueCaptureAddressInfo = 1000257004,
	physicalDeviceVulkan13Features = 53,
	physicalDeviceVulkan13Properties = 54,
	pipelineCreationFeedbackCreateInfo = 1000192000,
	physicalDeviceShaderTerminateInvocationFeatures = 1000215000,
	physicalDeviceToolProperties = 1000245000,
	physicalDeviceShaderDemoteToHelperInvocationFeatures = 1000276000,
	physicalDevicePrivateDataFeatures = 1000295000,
	devicePrivateDataCreateInfo = 1000295001,
	privateDataSlotCreateInfo = 1000295002,
	physicalDevicePipelineCreationCacheControlFeatures = 1000297000,
	memoryBarrier2 = 1000314000,
	bufferMemoryBarrier2 = 1000314001,
	imageMemoryBarrier2 = 1000314002,
	dependencyInfo = 1000314003,
	submitInfo2 = 1000314004,
	semaphoreSubmitInfo = 1000314005,
	commandBufferSubmitInfo = 1000314006,
	physicalDeviceSynchronization2Features = 1000314007,
	physicalDeviceZeroInitializeWorkgroupMemoryFeatures = 1000325000,
	physicalDeviceImageRobustnessFeatures = 1000335000,
	copyBufferInfo2 = 1000337000,
	copyImageInfo2 = 1000337001,
	copyBufferToImageInfo2 = 1000337002,
	copyImageToBufferInfo2 = 1000337003,
	blitImageInfo2 = 1000337004,
	resolveImageInfo2 = 1000337005,
	bufferCopy2 = 1000337006,
	imageCopy2 = 1000337007,
	imageBlit2 = 1000337008,
	bufferImageCopy2 = 1000337009,
	imageResolve2 = 1000337010,
	physicalDeviceSubgroupSizeControlProperties = 1000225000,
	pipelineShaderStageRequiredSubgroupSizeCreateInfo = 1000225001,
	physicalDeviceSubgroupSizeControlFeatures = 1000225002,
	physicalDeviceInlineUniformBlockFeatures = 1000138000,
	physicalDeviceInlineUniformBlockProperties = 1000138001,
	writeDescriptorSetInlineUniformBlock = 1000138002,
	descriptorPoolInlineUniformBlockCreateInfo = 1000138003,
	physicalDeviceTextureCompressionAstcHdrFeatures = 1000066000,
	renderingInfo = 1000044000,
	renderingAttachmentInfo = 1000044001,
	pipelineRenderingCreateInfo = 1000044002,
	physicalDeviceDynamicRenderingFeatures = 1000044003,
	commandBufferInheritanceRenderingInfo = 1000044004,
	physicalDeviceShaderIntegerDotProductFeatures = 1000280000,
	physicalDeviceShaderIntegerDotProductProperties = 1000280001,
	physicalDeviceTexelBufferAlignmentProperties = 1000281001,
	formatProperties3 = 1000360000,
	physicalDeviceMaintenance4Features = 1000413000,
	physicalDeviceMaintenance4Properties = 1000413001,
	deviceBufferMemoryRequirements = 1000413002,
	deviceImageMemoryRequirements = 1000413003,
	swapchainCreateInfoKHR = 1000001000,
	presentInfoKHR = 1000001001,
	deviceGroupPresentCapabilitiesKHR = 1000060007,
	imageSwapchainCreateInfoKHR = 1000060008,
	bindImageMemorySwapchainInfoKHR = 1000060009,
	acquireNextImageInfoKHR = 1000060010,
	deviceGroupPresentInfoKHR = 1000060011,
	deviceGroupSwapchainCreateInfoKHR = 1000060012,
	displayModeCreateInfoKHR = 1000002000,
	displaySurfaceCreateInfoKHR = 1000002001,
	displayPresentInfoKHR = 1000003000,
	xlibSurfaceCreateInfoKHR = 1000004000,
	xcbSurfaceCreateInfoKHR = 1000005000,
	waylandSurfaceCreateInfoKHR = 1000006000,
	win32SurfaceCreateInfoKHR = 1000009000,
	debugReportCallbackCreateInfoEXT = 1000011000,
	debugReportCreateInfoEXT = 1000011000,
	pipelineRasterizationStateRasterizationOrderAMD = 1000018000,
	debugMarkerObjectNameInfoEXT = 1000022000,
	debugMarkerObjectTagInfoEXT = 1000022001,
	debugMarkerMarkerInfoEXT = 1000022002,
	dedicatedAllocationImageCreateInfoNV = 1000026000,
	dedicatedAllocationBufferCreateInfoNV = 1000026001,
	dedicatedAllocationMemoryAllocateInfoNV = 1000026002,
	physicalDeviceTransformFeedbackFeaturesEXT = 1000028000,
	physicalDeviceTransformFeedbackPropertiesEXT = 1000028001,
	pipelineRasterizationStateStreamCreateInfoEXT = 1000028002,
	textureLodGatherFormatPropertiesAMD = 1000041000,
	renderingInfoKHR = 1000044000,
	renderingAttachmentInfoKHR = 1000044001,
	pipelineRenderingCreateInfoKHR = 1000044002,
	physicalDeviceDynamicRenderingFeaturesKHR = 1000044003,
	commandBufferInheritanceRenderingInfoKHR = 1000044004,
	renderingFragmentShadingRateAttachmentInfoKHR = 1000044006,
	renderingFragmentDensityMapAttachmentInfoEXT = 1000044007,
	attachmentSampleCountInfoAMD = 1000044008,
	attachmentSampleCountInfoNV = 1000044008,
	multiviewPerViewAttributesInfoNVX = 1000044009,
	streamDescriptorSurfaceCreateInfoGGP = 1000049000,
	physicalDeviceCornerSampledImageFeaturesNV = 1000050000,
	renderPassMultiviewCreateInfoKHR = 1000053000,
	physicalDeviceMultiviewFeaturesKHR = 1000053001,
	physicalDeviceMultiviewPropertiesKHR = 1000053002,
	externalMemoryImageCreateInfoNV = 1000056000,
	exportMemoryAllocateInfoNV = 1000056001,
	importMemoryWin32HandleInfoNV = 1000057000,
	exportMemoryWin32HandleInfoNV = 1000057001,
	win32KeyedMutexAcquireReleaseInfoNV = 1000058000,
	physicalDeviceFeatures2KHR = 1000059000,
	physicalDeviceProperties2KHR = 1000059001,
	formatProperties2KHR = 1000059002,
	imageFormatProperties2KHR = 1000059003,
	physicalDeviceImageFormatInfo2KHR = 1000059004,
	queueFamilyProperties2KHR = 1000059005,
	physicalDeviceMemoryProperties2KHR = 1000059006,
	sparseImageFormatProperties2KHR = 1000059007,
	physicalDeviceSparseImageFormatInfo2KHR = 1000059008,
	memoryAllocateFlagsInfoKHR = 1000060000,
	deviceGroupRenderPassBeginInfoKHR = 1000060003,
	deviceGroupCommandBufferBeginInfoKHR = 1000060004,
	deviceGroupSubmitInfoKHR = 1000060005,
	deviceGroupBindSparseInfoKHR = 1000060006,
	bindBufferMemoryDeviceGroupInfoKHR = 1000060013,
	bindImageMemoryDeviceGroupInfoKHR = 1000060014,
	validationFlagsEXT = 1000061000,
	viSurfaceCreateInfoNN = 1000062000,
	physicalDeviceTextureCompressionAstcHdrFeaturesEXT = 1000066000,
	imageViewAstcDecodeModeEXT = 1000067000,
	physicalDeviceAstcDecodeFeaturesEXT = 1000067001,
	physicalDeviceGroupPropertiesKHR = 1000070000,
	deviceGroupDeviceCreateInfoKHR = 1000070001,
	physicalDeviceExternalImageFormatInfoKHR = 1000071000,
	externalImageFormatPropertiesKHR = 1000071001,
	physicalDeviceExternalBufferInfoKHR = 1000071002,
	externalBufferPropertiesKHR = 1000071003,
	physicalDeviceIDPropertiesKHR = 1000071004,
	externalMemoryBufferCreateInfoKHR = 1000072000,
	externalMemoryImageCreateInfoKHR = 1000072001,
	exportMemoryAllocateInfoKHR = 1000072002,
	importMemoryWin32HandleInfoKHR = 1000073000,
	exportMemoryWin32HandleInfoKHR = 1000073001,
	memoryWin32HandlePropertiesKHR = 1000073002,
	memoryGetWin32HandleInfoKHR = 1000073003,
	importMemoryFdInfoKHR = 1000074000,
	memoryFdPropertiesKHR = 1000074001,
	memoryGetFdInfoKHR = 1000074002,
	win32KeyedMutexAcquireReleaseInfoKHR = 1000075000,
	physicalDeviceExternalSemaphoreInfoKHR = 1000076000,
	externalSemaphorePropertiesKHR = 1000076001,
	exportSemaphoreCreateInfoKHR = 1000077000,
	importSemaphoreWin32HandleInfoKHR = 1000078000,
	exportSemaphoreWin32HandleInfoKHR = 1000078001,
	d3d12FenceSubmitInfoKHR = 1000078002,
	semaphoreGetWin32HandleInfoKHR = 1000078003,
	importSemaphoreFdInfoKHR = 1000079000,
	semaphoreGetFdInfoKHR = 1000079001,
	physicalDevicePushDescriptorPropertiesKHR = 1000080000,
	commandBufferInheritanceConditionalRenderingInfoEXT = 1000081000,
	physicalDeviceConditionalRenderingFeaturesEXT = 1000081001,
	conditionalRenderingBeginInfoEXT = 1000081002,
	physicalDeviceShaderFloat16Int8FeaturesKHR = 1000082000,
	physicalDeviceFloat16Int8FeaturesKHR = 1000082000,
	physicalDevice16bitStorageFeaturesKHR = 1000083000,
	presentRegionsKHR = 1000084000,
	descriptorUpdateTemplateCreateInfoKHR = 1000085000,
	pipelineViewportWScalingStateCreateInfoNV = 1000087000,
	surfaceCapabilities2EXT = 1000090000,
	displayPowerInfoEXT = 1000091000,
	deviceEventInfoEXT = 1000091001,
	displayEventInfoEXT = 1000091002,
	swapchainCounterCreateInfoEXT = 1000091003,
	presentTimesInfoGOOGLE = 1000092000,
	pipelineViewportSwizzleStateCreateInfoNV = 1000098000,
	physicalDeviceDiscardRectanglePropertiesEXT = 1000099000,
	pipelineDiscardRectangleStateCreateInfoEXT = 1000099001,
	physicalDeviceConservativeRasterizationPropertiesEXT = 1000101000,
	pipelineRasterizationConservativeStateCreateInfoEXT = 1000101001,
	physicalDeviceDepthClipEnableFeaturesEXT = 1000102000,
	pipelineRasterizationDepthClipStateCreateInfoEXT = 1000102001,
	hdrMetadataEXT = 1000105000,
	physicalDeviceImagelessFramebufferFeaturesKHR = 1000108000,
	framebufferAttachmentsCreateInfoKHR = 1000108001,
	framebufferAttachmentImageInfoKHR = 1000108002,
	renderPassAttachmentBeginInfoKHR = 1000108003,
	attachmentDescription2KHR = 1000109000,
	attachmentReference2KHR = 1000109001,
	subpassDescription2KHR = 1000109002,
	subpassDependency2KHR = 1000109003,
	renderPassCreateInfo2KHR = 1000109004,
	subpassBeginInfoKHR = 1000109005,
	subpassEndInfoKHR = 1000109006,
	sharedPresentSurfaceCapabilitiesKHR = 1000111000,
	physicalDeviceExternalFenceInfoKHR = 1000112000,
	externalFencePropertiesKHR = 1000112001,
	exportFenceCreateInfoKHR = 1000113000,
	importFenceWin32HandleInfoKHR = 1000114000,
	exportFenceWin32HandleInfoKHR = 1000114001,
	fenceGetWin32HandleInfoKHR = 1000114002,
	importFenceFdInfoKHR = 1000115000,
	fenceGetFdInfoKHR = 1000115001,
	physicalDevicePerformanceQueryFeaturesKHR = 1000116000,
	physicalDevicePerformanceQueryPropertiesKHR = 1000116001,
	queryPoolPerformanceCreateInfoKHR = 1000116002,
	performanceQuerySubmitInfoKHR = 1000116003,
	acquireProfilingLockInfoKHR = 1000116004,
	performanceCounterKHR = 1000116005,
	performanceCounterDescriptionKHR = 1000116006,
	physicalDevicePointClippingPropertiesKHR = 1000117000,
	renderPassInputAttachmentAspectCreateInfoKHR = 1000117001,
	imageViewUsageCreateInfoKHR = 1000117002,
	pipelineTessellationDomainOriginStateCreateInfoKHR = 1000117003,
	physicalDeviceSurfaceInfo2KHR = 1000119000,
	surfaceCapabilities2KHR = 1000119001,
	surfaceFormat2KHR = 1000119002,
	physicalDeviceVariablePointersFeaturesKHR = 1000120000,
	physicalDeviceVariablePointerFeaturesKHR = 1000120000,
	displayProperties2KHR = 1000121000,
	displayPlaneProperties2KHR = 1000121001,
	displayModeProperties2KHR = 1000121002,
	displayPlaneInfo2KHR = 1000121003,
	displayPlaneCapabilities2KHR = 1000121004,
	iosSurfaceCreateInfoMVK = 1000122000,
	macosSurfaceCreateInfoMVK = 1000123000,
	memoryDedicatedRequirementsKHR = 1000127000,
	memoryDedicatedAllocateInfoKHR = 1000127001,
	debugUtilsObjectNameInfoEXT = 1000128000,
	debugUtilsObjectTagInfoEXT = 1000128001,
	debugUtilsLabelEXT = 1000128002,
	debugUtilsMessengerCallbackDataEXT = 1000128003,
	debugUtilsMessengerCreateInfoEXT = 1000128004,
	physicalDeviceSamplerFilterMinmaxPropertiesEXT = 1000130000,
	samplerReductionModeCreateInfoEXT = 1000130001,
	physicalDeviceInlineUniformBlockFeaturesEXT = 1000138000,
	physicalDeviceInlineUniformBlockPropertiesEXT = 1000138001,
	writeDescriptorSetInlineUniformBlockEXT = 1000138002,
	descriptorPoolInlineUniformBlockCreateInfoEXT = 1000138003,
	sampleLocationsInfoEXT = 1000143000,
	renderPassSampleLocationsBeginInfoEXT = 1000143001,
	pipelineSampleLocationsStateCreateInfoEXT = 1000143002,
	physicalDeviceSampleLocationsPropertiesEXT = 1000143003,
	multisamplePropertiesEXT = 1000143004,
	bufferMemoryRequirementsInfo2KHR = 1000146000,
	imageMemoryRequirementsInfo2KHR = 1000146001,
	imageSparseMemoryRequirementsInfo2KHR = 1000146002,
	memoryRequirements2KHR = 1000146003,
	sparseImageMemoryRequirements2KHR = 1000146004,
	imageFormatListCreateInfoKHR = 1000147000,
	physicalDeviceBlendOperationAdvancedFeaturesEXT = 1000148000,
	physicalDeviceBlendOperationAdvancedPropertiesEXT = 1000148001,
	pipelineColorBlendAdvancedStateCreateInfoEXT = 1000148002,
	pipelineCoverageToColorStateCreateInfoNV = 1000149000,
	writeDescriptorSetAccelerationStructureKHR = 1000150007,
	accelerationStructureBuildGeometryInfoKHR = 1000150000,
	accelerationStructureDeviceAddressInfoKHR = 1000150002,
	accelerationStructureGeometryAabbsDataKHR = 1000150003,
	accelerationStructureGeometryInstancesDataKHR = 1000150004,
	accelerationStructureGeometryTrianglesDataKHR = 1000150005,
	accelerationStructureGeometryKHR = 1000150006,
	accelerationStructureVersionInfoKHR = 1000150009,
	copyAccelerationStructureInfoKHR = 1000150010,
	copyAccelerationStructureToMemoryInfoKHR = 1000150011,
	copyMemoryToAccelerationStructureInfoKHR = 1000150012,
	physicalDeviceAccelerationStructureFeaturesKHR = 1000150013,
	physicalDeviceAccelerationStructurePropertiesKHR = 1000150014,
	accelerationStructureCreateInfoKHR = 1000150017,
	accelerationStructureBuildSizesInfoKHR = 1000150020,
	physicalDeviceRayTracingPipelineFeaturesKHR = 1000347000,
	physicalDeviceRayTracingPipelinePropertiesKHR = 1000347001,
	rayTracingPipelineCreateInfoKHR = 1000150015,
	rayTracingShaderGroupCreateInfoKHR = 1000150016,
	rayTracingPipelineInterfaceCreateInfoKHR = 1000150018,
	physicalDeviceRayQueryFeaturesKHR = 1000348013,
	pipelineCoverageModulationStateCreateInfoNV = 1000152000,
	physicalDeviceShaderSmBuiltinsFeaturesNV = 1000154000,
	physicalDeviceShaderSmBuiltinsPropertiesNV = 1000154001,
	samplerYcbcrConversionCreateInfoKHR = 1000156000,
	samplerYcbcrConversionInfoKHR = 1000156001,
	bindImagePlaneMemoryInfoKHR = 1000156002,
	imagePlaneMemoryRequirementsInfoKHR = 1000156003,
	physicalDeviceSamplerYcbcrConversionFeaturesKHR = 1000156004,
	samplerYcbcrConversionImageFormatPropertiesKHR = 1000156005,
	bindBufferMemoryInfoKHR = 1000157000,
	bindImageMemoryInfoKHR = 1000157001,
	drmFormatModifierPropertiesListEXT = 1000158000,
	physicalDeviceImageDrmFormatModifierInfoEXT = 1000158002,
	imageDrmFormatModifierListCreateInfoEXT = 1000158003,
	imageDrmFormatModifierExplicitCreateInfoEXT = 1000158004,
	imageDrmFormatModifierPropertiesEXT = 1000158005,
	drmFormatModifierPropertiesList2EXT = 1000158006,
	validationCacheCreateInfoEXT = 1000160000,
	shaderModuleValidationCacheCreateInfoEXT = 1000160001,
	descriptorSetLayoutBindingFlagsCreateInfoEXT = 1000161000,
	physicalDeviceDescriptorIndexingFeaturesEXT = 1000161001,
	physicalDeviceDescriptorIndexingPropertiesEXT = 1000161002,
	descriptorSetVariableDescriptorCountAllocateInfoEXT = 1000161003,
	descriptorSetVariableDescriptorCountLayoutSupportEXT = 1000161004,
	pipelineViewportShadingRateImageStateCreateInfoNV = 1000164000,
	physicalDeviceShadingRateImageFeaturesNV = 1000164001,
	physicalDeviceShadingRateImagePropertiesNV = 1000164002,
	pipelineViewportCoarseSampleOrderStateCreateInfoNV = 1000164005,
	rayTracingPipelineCreateInfoNV = 1000165000,
	accelerationStructureCreateInfoNV = 1000165001,
	geometryNV = 1000165003,
	geometryTrianglesNV = 1000165004,
	geometryAabbNV = 1000165005,
	bindAccelerationStructureMemoryInfoNV = 1000165006,
	writeDescriptorSetAccelerationStructureNV = 1000165007,
	accelerationStructureMemoryRequirementsInfoNV = 1000165008,
	physicalDeviceRayTracingPropertiesNV = 1000165009,
	rayTracingShaderGroupCreateInfoNV = 1000165011,
	accelerationStructureInfoNV = 1000165012,
	physicalDeviceRepresentativeFragmentTestFeaturesNV = 1000166000,
	pipelineRepresentativeFragmentTestStateCreateInfoNV = 1000166001,
	physicalDeviceMaintenance3PropertiesKHR = 1000168000,
	descriptorSetLayoutSupportKHR = 1000168001,
	physicalDeviceImageViewImageFormatInfoEXT = 1000170000,
	filterCubicImageViewImageFormatPropertiesEXT = 1000170001,
	physicalDeviceShaderSubgroupExtendedTypesFeaturesKHR = 1000175000,
	physicalDevice8bitStorageFeaturesKHR = 1000177000,
	importMemoryHostPointerInfoEXT = 1000178000,
	memoryHostPointerPropertiesEXT = 1000178001,
	physicalDeviceExternalMemoryHostPropertiesEXT = 1000178002,
	physicalDeviceShaderAtomicInt64FeaturesKHR = 1000180000,
	physicalDeviceShaderClockFeaturesKHR = 1000181000,
	pipelineCompilerControlCreateInfoAMD = 1000183000,
	calibratedTimestampInfoEXT = 1000184000,
	physicalDeviceShaderCorePropertiesAMD = 1000185000,
	deviceQueueGlobalPriorityCreateInfoKHR = 1000174000,
	physicalDeviceGlobalPriorityQueryFeaturesKHR = 1000388000,
	queueFamilyGlobalPriorityPropertiesKHR = 1000388001,
	deviceMemoryOverallocationCreateInfoAMD = 1000189000,
	physicalDeviceVertexAttributeDivisorPropertiesEXT = 1000190000,
	pipelineVertexInputDivisorStateCreateInfoEXT = 1000190001,
	physicalDeviceVertexAttributeDivisorFeaturesEXT = 1000190002,
	presentFrameTokenGGP = 1000191000,
	pipelineCreationFeedbackCreateInfoEXT = 1000192000,
	physicalDeviceDriverPropertiesKHR = 1000196000,
	physicalDeviceFloatControlsPropertiesKHR = 1000197000,
	physicalDeviceDepthStencilResolvePropertiesKHR = 1000199000,
	subpassDescriptionDepthStencilResolveKHR = 1000199001,
	physicalDeviceComputeShaderDerivativesFeaturesNV = 1000201000,
	physicalDeviceMeshShaderFeaturesNV = 1000202000,
	physicalDeviceMeshShaderPropertiesNV = 1000202001,
	physicalDeviceFragmentShaderBarycentricFeaturesNV = 1000203000,
	physicalDeviceShaderImageFootprintFeaturesNV = 1000204000,
	pipelineViewportExclusiveScissorStateCreateInfoNV = 1000205000,
	physicalDeviceExclusiveScissorFeaturesNV = 1000205002,
	checkpointDataNV = 1000206000,
	queueFamilyCheckpointPropertiesNV = 1000206001,
	physicalDeviceTimelineSemaphoreFeaturesKHR = 1000207000,
	physicalDeviceTimelineSemaphorePropertiesKHR = 1000207001,
	semaphoreTypeCreateInfoKHR = 1000207002,
	timelineSemaphoreSubmitInfoKHR = 1000207003,
	semaphoreWaitInfoKHR = 1000207004,
	semaphoreSignalInfoKHR = 1000207005,
	physicalDeviceShaderIntegerFunctions2FeaturesINTEL = 1000209000,
	queryPoolPerformanceQueryCreateInfoINTEL = 1000210000,
	queryPoolCreateInfoINTEL = 1000210000,
	initializePerformanceApiInfoINTEL = 1000210001,
	performanceMarkerInfoINTEL = 1000210002,
	performanceStreamMarkerInfoINTEL = 1000210003,
	performanceOverrideInfoINTEL = 1000210004,
	performanceConfigurationAcquireInfoINTEL = 1000210005,
	physicalDeviceVulkanMemoryModelFeaturesKHR = 1000211000,
	physicalDevicePciBusInfoPropertiesEXT = 1000212000,
	displayNativeHdrSurfaceCapabilitiesAMD = 1000213000,
	swapchainDisplayNativeHdrCreateInfoAMD = 1000213001,
	imagepipeSurfaceCreateInfoFUCHSIA = 1000214000,
	physicalDeviceShaderTerminateInvocationFeaturesKHR = 1000215000,
	physicalDeviceFragmentDensityMapFeaturesEXT = 1000218000,
	physicalDeviceFragmentDensityMapPropertiesEXT = 1000218001,
	renderPassFragmentDensityMapCreateInfoEXT = 1000218002,
	physicalDeviceScalarBlockLayoutFeaturesEXT = 1000221000,
	physicalDeviceSubgroupSizeControlPropertiesEXT = 1000225000,
	pipelineShaderStageRequiredSubgroupSizeCreateInfoEXT = 1000225001,
	physicalDeviceSubgroupSizeControlFeaturesEXT = 1000225002,
	fragmentShadingRateAttachmentInfoKHR = 1000226000,
	pipelineFragmentShadingRateStateCreateInfoKHR = 1000226001,
	physicalDeviceFragmentShadingRatePropertiesKHR = 1000226002,
	physicalDeviceFragmentShadingRateFeaturesKHR = 1000226003,
	physicalDeviceFragmentShadingRateKHR = 1000226004,
	physicalDeviceShaderCoreProperties2AMD = 1000227000,
	physicalDeviceCoherentMemoryFeaturesAMD = 1000229000,
	physicalDeviceShaderImageAtomicInt64FeaturesEXT = 1000234000,
	physicalDeviceMemoryBudgetPropertiesEXT = 1000237000,
	physicalDeviceMemoryPriorityFeaturesEXT = 1000238000,
	memoryPriorityAllocateInfoEXT = 1000238001,
	surfaceProtectedCapabilitiesKHR = 1000239000,
	physicalDeviceDedicatedAllocationImageAliasingFeaturesNV = 1000240000,
	physicalDeviceSeparateDepthStencilLayoutsFeaturesKHR = 1000241000,
	attachmentReferenceStencilLayoutKHR = 1000241001,
	attachmentDescriptionStencilLayoutKHR = 1000241002,
	physicalDeviceBufferDeviceAddressFeaturesEXT = 1000244000,
	physicalDeviceBufferAddressFeaturesEXT = 1000244000,
	bufferDeviceAddressInfoEXT = 1000244001,
	bufferDeviceAddressCreateInfoEXT = 1000244002,
	physicalDeviceToolPropertiesEXT = 1000245000,
	imageStencilUsageCreateInfoEXT = 1000246000,
	validationFeaturesEXT = 1000247000,
	physicalDevicePresentWaitFeaturesKHR = 1000248000,
	physicalDeviceCooperativeMatrixFeaturesNV = 1000249000,
	cooperativeMatrixPropertiesNV = 1000249001,
	physicalDeviceCooperativeMatrixPropertiesNV = 1000249002,
	physicalDeviceCoverageReductionModeFeaturesNV = 1000250000,
	pipelineCoverageReductionStateCreateInfoNV = 1000250001,
	framebufferMixedSamplesCombinationNV = 1000250002,
	physicalDeviceFragmentShaderInterlockFeaturesEXT = 1000251000,
	physicalDeviceYcbcrImageArraysFeaturesEXT = 1000252000,
	physicalDeviceUniformBufferStandardLayoutFeaturesKHR = 1000253000,
	physicalDeviceProvokingVertexFeaturesEXT = 1000254000,
	pipelineRasterizationProvokingVertexStateCreateInfoEXT = 1000254001,
	physicalDeviceProvokingVertexPropertiesEXT = 1000254002,
	surfaceFullScreenExclusiveInfoEXT = 1000255000,
	surfaceCapabilitiesFullScreenExclusiveEXT = 1000255002,
	surfaceFullScreenExclusiveWin32InfoEXT = 1000255001,
	headlessSurfaceCreateInfoEXT = 1000256000,
	physicalDeviceBufferDeviceAddressFeaturesKHR = 1000257000,
	bufferDeviceAddressInfoKHR = 1000244001,
	bufferOpaqueCaptureAddressCreateInfoKHR = 1000257002,
	memoryOpaqueCaptureAddressAllocateInfoKHR = 1000257003,
	deviceMemoryOpaqueCaptureAddressInfoKHR = 1000257004,
	physicalDeviceLineRasterizationFeaturesEXT = 1000259000,
	pipelineRasterizationLineStateCreateInfoEXT = 1000259001,
	physicalDeviceLineRasterizationPropertiesEXT = 1000259002,
	physicalDeviceShaderAtomicFloatFeaturesEXT = 1000260000,
	physicalDeviceHostQueryResetFeaturesEXT = 1000261000,
	physicalDeviceIndexTypeUint8FeaturesEXT = 1000265000,
	physicalDeviceExtendedDynamicStateFeaturesEXT = 1000267000,
	physicalDevicePipelineExecutablePropertiesFeaturesKHR = 1000269000,
	pipelineInfoKHR = 1000269001,
	pipelineExecutablePropertiesKHR = 1000269002,
	pipelineExecutableInfoKHR = 1000269003,
	pipelineExecutableStatisticKHR = 1000269004,
	pipelineExecutableInternalRepresentationKHR = 1000269005,
	physicalDeviceShaderAtomicFloat2FeaturesEXT = 1000273000,
	physicalDeviceShaderDemoteToHelperInvocationFeaturesEXT = 1000276000,
	physicalDeviceDeviceGeneratedCommandsPropertiesNV = 1000277000,
	graphicsShaderGroupCreateInfoNV = 1000277001,
	graphicsPipelineShaderGroupsCreateInfoNV = 1000277002,
	indirectCommandsLayoutTokenNV = 1000277003,
	indirectCommandsLayoutCreateInfoNV = 1000277004,
	generatedCommandsInfoNV = 1000277005,
	generatedCommandsMemoryRequirementsInfoNV = 1000277006,
	physicalDeviceDeviceGeneratedCommandsFeaturesNV = 1000277007,
	physicalDeviceInheritedViewportScissorFeaturesNV = 1000278000,
	commandBufferInheritanceViewportScissorInfoNV = 1000278001,
	physicalDeviceShaderIntegerDotProductFeaturesKHR = 1000280000,
	physicalDeviceShaderIntegerDotProductPropertiesKHR = 1000280001,
	physicalDeviceTexelBufferAlignmentFeaturesEXT = 1000281000,
	physicalDeviceTexelBufferAlignmentPropertiesEXT = 1000281001,
	commandBufferInheritanceRenderPassTransformInfoQCOM = 1000282000,
	renderPassTransformBeginInfoQCOM = 1000282001,
	physicalDeviceDeviceMemoryReportFeaturesEXT = 1000284000,
	deviceDeviceMemoryReportCreateInfoEXT = 1000284001,
	deviceMemoryReportCallbackDataEXT = 1000284002,
	physicalDeviceRobustness2FeaturesEXT = 1000286000,
	physicalDeviceRobustness2PropertiesEXT = 1000286001,
	samplerCustomBorderColorCreateInfoEXT = 1000287000,
	physicalDeviceCustomBorderColorPropertiesEXT = 1000287001,
	physicalDeviceCustomBorderColorFeaturesEXT = 1000287002,
	pipelineLibraryCreateInfoKHR = 1000290000,
	presentIDKHR = 1000294000,
	physicalDevicePresentIDFeaturesKHR = 1000294001,
	physicalDevicePrivateDataFeaturesEXT = 1000295000,
	devicePrivateDataCreateInfoEXT = 1000295001,
	privateDataSlotCreateInfoEXT = 1000295002,
	physicalDevicePipelineCreationCacheControlFeaturesEXT = 1000297000,
	physicalDeviceDiagnosticsConfigFeaturesNV = 1000300000,
	deviceDiagnosticsConfigCreateInfoNV = 1000300001,
	memoryBarrier2KHR = 1000314000,
	bufferMemoryBarrier2KHR = 1000314001,
	imageMemoryBarrier2KHR = 1000314002,
	dependencyInfoKHR = 1000314003,
	submitInfo2KHR = 1000314004,
	semaphoreSubmitInfoKHR = 1000314005,
	commandBufferSubmitInfoKHR = 1000314006,
	physicalDeviceSynchronization2FeaturesKHR = 1000314007,
	queueFamilyCheckpointProperties2NV = 1000314008,
	checkpointData2NV = 1000314009,
	physicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR = 1000323000,
	physicalDeviceZeroInitializeWorkgroupMemoryFeaturesKHR = 1000325000,
	physicalDeviceFragmentShadingRateEnumsPropertiesNV = 1000326000,
	physicalDeviceFragmentShadingRateEnumsFeaturesNV = 1000326001,
	pipelineFragmentShadingRateEnumStateCreateInfoNV = 1000326002,
	accelerationStructureGeometryMotionTrianglesDataNV = 1000327000,
	physicalDeviceRayTracingMotionBlurFeaturesNV = 1000327001,
	accelerationStructureMotionInfoNV = 1000327002,
	physicalDeviceYcbcr2Plane444FormatsFeaturesEXT = 1000330000,
	physicalDeviceFragmentDensityMap2FeaturesEXT = 1000332000,
	physicalDeviceFragmentDensityMap2PropertiesEXT = 1000332001,
	copyCommandTransformInfoQCOM = 1000333000,
	physicalDeviceImageRobustnessFeaturesEXT = 1000335000,
	physicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR = 1000336000,
	copyBufferInfo2KHR = 1000337000,
	copyImageInfo2KHR = 1000337001,
	copyBufferToImageInfo2KHR = 1000337002,
	copyImageToBufferInfo2KHR = 1000337003,
	blitImageInfo2KHR = 1000337004,
	resolveImageInfo2KHR = 1000337005,
	bufferCopy2KHR = 1000337006,
	imageCopy2KHR = 1000337007,
	imageBlit2KHR = 1000337008,
	bufferImageCopy2KHR = 1000337009,
	imageResolve2KHR = 1000337010,
	physicalDevice4444FormatsFeaturesEXT = 1000340000,
	physicalDeviceRasterizationOrderAttachmentAccessFeaturesARM = 1000342000,
	physicalDeviceRgba10x6FormatsFeaturesEXT = 1000344000,
	directfbSurfaceCreateInfoEXT = 1000346000,
	physicalDeviceMutableDescriptorTypeFeaturesVALVE = 1000351000,
	mutableDescriptorTypeCreateInfoVALVE = 1000351002,
	physicalDeviceVertexInputDynamicStateFeaturesEXT = 1000352000,
	vertexInputBindingDescription2EXT = 1000352001,
	vertexInputAttributeDescription2EXT = 1000352002,
	physicalDeviceDrmPropertiesEXT = 1000353000,
	physicalDeviceDepthClipControlFeaturesEXT = 1000355000,
	pipelineViewportDepthClipControlCreateInfoEXT = 1000355001,
	physicalDevicePrimitiveTopologyListRestartFeaturesEXT = 1000356000,
	formatProperties3KHR = 1000360000,
	importMemoryZirconHandleInfoFUCHSIA = 1000364000,
	memoryZirconHandlePropertiesFUCHSIA = 1000364001,
	memoryGetZirconHandleInfoFUCHSIA = 1000364002,
	importSemaphoreZirconHandleInfoFUCHSIA = 1000365000,
	semaphoreGetZirconHandleInfoFUCHSIA = 1000365001,
	bufferCollectionCreateInfoFUCHSIA = 1000366000,
	importMemoryBufferCollectionFUCHSIA = 1000366001,
	bufferCollectionImageCreateInfoFUCHSIA = 1000366002,
	bufferCollectionPropertiesFUCHSIA = 1000366003,
	bufferConstraintsInfoFUCHSIA = 1000366004,
	bufferCollectionBufferCreateInfoFUCHSIA = 1000366005,
	imageConstraintsInfoFUCHSIA = 1000366006,
	imageFormatConstraintsInfoFUCHSIA = 1000366007,
	sysmemColorSpaceFUCHSIA = 1000366008,
	bufferCollectionConstraintsInfoFUCHSIA = 1000366009,
	subpassShadingPipelineCreateInfoHUAWEI = 1000369000,
	physicalDeviceSubpassShadingFeaturesHUAWEI = 1000369001,
	physicalDeviceSubpassShadingPropertiesHUAWEI = 1000369002,
	physicalDeviceInvocationMaskFeaturesHUAWEI = 1000370000,
	memoryGetRemoteAddressInfoNV = 1000371000,
	physicalDeviceExternalMemoryRdmaFeaturesNV = 1000371001,
	physicalDeviceExtendedDynamicState2FeaturesEXT = 1000377000,
	screenSurfaceCreateInfoQNX = 1000378000,
	physicalDeviceColorWriteEnableFeaturesEXT = 1000381000,
	pipelineColorWriteCreateInfoEXT = 1000381001,
	physicalDeviceGlobalPriorityQueryFeaturesEXT = 1000388000,
	queueFamilyGlobalPriorityPropertiesEXT = 1000388001,
	physicalDeviceImageViewMinLodFeaturesEXT = 1000391000,
	imageViewMinLodCreateInfoEXT = 1000391001,
	physicalDeviceMultiDrawFeaturesEXT = 1000392000,
	physicalDeviceMultiDrawPropertiesEXT = 1000392001,
	physicalDeviceBorderColorSwizzleFeaturesEXT = 1000411000,
	samplerBorderColorComponentMappingCreateInfoEXT = 1000411001,
	physicalDevicePageableDeviceLocalMemoryFeaturesEXT = 1000412000,
	physicalDeviceMaintenance4FeaturesKHR = 1000413000,
	physicalDeviceMaintenance4PropertiesKHR = 1000413001,
	deviceBufferMemoryRequirementsKHR = 1000413002,
	deviceImageMemoryRequirementsKHR = 1000413003,
	physicalDeviceFragmentDensityMapOffsetFeaturesQCOM = 1000425000,
	physicalDeviceFragmentDensityMapOffsetPropertiesQCOM = 1000425001,
	subpassFragmentDensityMapOffsetEndInfoQCOM = 1000425002,
	physicalDeviceLinearColorAttachmentFeaturesNV = 1000430000
};

enum class ShaderStageBits : int32_t {
	vertex = (1 << 0),
	tessellationControl = (1 << 1),
	tessellationEvaluation = (1 << 2),
	geometry = (1 << 3),
	fragment = (1 << 4),
	compute = (1 << 5),
	allGraphics = 31,
	all = 2147483647,
	raygenKHR = (1 << 8),
	anyHitKHR = (1 << 9),
	closestHitKHR = (1 << 10),
	missKHR = (1 << 11),
	intersectionKHR = (1 << 12),
	callableKHR = (1 << 13),
	raygenNV = (1 << 8),
	anyHitNV = (1 << 9),
	closestHitNV = (1 << 10),
	missNV = (1 << 11),
	intersectionNV = (1 << 12),
	callableNV = (1 << 13),
	taskNV = (1 << 6),
	meshNV = (1 << 7),
	subpassShadingHUAWEI = (1 << 14)
};
NYTL_FLAG_OPS(ShaderStageBits)

enum class PipelineCreationFeedbackBits : int32_t {
	valid = (1 << 0),
	validEXT = (1 << 0),
	applicationPipelineCacheHit = (1 << 1),
	applicationPipelineCacheHitEXT = (1 << 1),
	basePipelineAcceleration = (1 << 2),
	basePipelineAccelerationEXT = (1 << 2)
};
NYTL_FLAG_OPS(PipelineCreationFeedbackBits)

enum class ToolPurposeBits : int32_t {
	validation = (1 << 0),
	validationEXT = (1 << 0),
	profiling = (1 << 1),
	profilingEXT = (1 << 1),
	tracing = (1 << 2),
	tracingEXT = (1 << 2),
	additionalFeatures = (1 << 3),
	additionalFeaturesEXT = (1 << 3),
	modifyingFeatures = (1 << 4),
	modifyingFeaturesEXT = (1 << 4),
	debugReportingEXT = (1 << 5),
	debugMarkersEXT = (1 << 6)
};
NYTL_FLAG_OPS(ToolPurposeBits)

enum class Result : int32_t {
	success = 0,
	notReady = 1,
	timeout = 2,
	eventSet = 3,
	eventReset = 4,
	incomplete = 5,
	errorOutOfHostMemory = -1,
	errorOutOfDeviceMemory = -2,
	errorInitializationFailed = -3,
	errorDeviceLost = -4,
	errorMemoryMapFailed = -5,
	errorLayerNotPresent = -6,
	errorExtensionNotPresent = -7,
	errorFeatureNotPresent = -8,
	errorIncompatibleDriver = -9,
	errorTooManyObjects = -10,
	errorFormatNotSupported = -11,
	errorFragmentedPool = -12,
	errorUnknown = -13,
	errorOutOfPoolMemory = -1000069000,
	errorInvalidExternalHandle = -1000072003,
	errorFragmentation = -1000161000,
	errorInvalidOpaqueCaptureAddress = -1000257000,
	pipelineCompileRequired = 1000297000,
	errorSurfaceLostKHR = -1000000000,
	errorNativeWindowInUseKHR = -1000000001,
	suboptimalKHR = 1000001003,
	errorOutOfDateKHR = -1000001004,
	errorIncompatibleDisplayKHR = -1000003001,
	errorValidationFailedEXT = -1000011001,
	errorInvalidShaderNV = -1000012000,
	errorOutOfPoolMemoryKHR = -1000069000,
	errorInvalidExternalHandleKHR = -1000072003,
	errorInvalidDrmFormatModifierPlaneLayoutEXT = -1000158000,
	errorFragmentationEXT = -1000161000,
	errorNotPermittedKHR = -1000174001,
	errorInvalidDeviceAddressEXT = -1000257000,
	errorFullScreenExclusiveModeLostEXT = -1000255000,
	errorInvalidOpaqueCaptureAddressKHR = -1000257000,
	threadIDleKHR = 1000268000,
	threadDoneKHR = 1000268001,
	operationDeferredKHR = 1000268002,
	operationNotDeferredKHR = 1000268003,
	pipelineCompileRequiredEXT = 1000297000,
	errorPipelineCompileRequiredEXT = 1000297000
};

enum class PrivateDataSlotCreateBits : int32_t {

};
NYTL_FLAG_OPS(PrivateDataSlotCreateBits)

enum class SystemAllocationScope : int32_t {
	command = 0,
	object = 1,
	cache = 2,
	device = 3,
	instance = 4
};

enum class InternalAllocationType : int32_t {
	executable = 0
};

enum class ObjectType : int32_t {
	unknown = 0,
	instance = 1,
	physicalDevice = 2,
	device = 3,
	queue = 4,
	semaphore = 5,
	commandBuffer = 6,
	fence = 7,
	deviceMemory = 8,
	buffer = 9,
	image = 10,
	event = 11,
	queryPool = 12,
	bufferView = 13,
	imageView = 14,
	shaderModule = 15,
	pipelineCache = 16,
	pipelineLayout = 17,
	renderPass = 18,
	pipeline = 19,
	descriptorSetLayout = 20,
	sampler = 21,
	descriptorPool = 22,
	descriptorSet = 23,
	framebuffer = 24,
	commandPool = 25,
	samplerYcbcrConversion = 1000156000,
	descriptorUpdateTemplate = 1000085000,
	privateDataSlot = 1000295000,
	surfaceKHR = 1000000000,
	swapchainKHR = 1000001000,
	displayKHR = 1000002000,
	displayModeKHR = 1000002001,
	debugReportCallbackEXT = 1000011000,
	descriptorUpdateTemplateKHR = 1000085000,
	debugUtilsMessengerEXT = 1000128000,
	accelerationStructureKHR = 1000150000,
	samplerYcbcrConversionKHR = 1000156000,
	validationCacheEXT = 1000160000,
	accelerationStructureNV = 1000165000,
	performanceConfigurationINTEL = 1000210000,
	deferredOperationKHR = 1000268000,
	indirectCommandsLayoutNV = 1000277000,
	privateDataSlotEXT = 1000295000,
	bufferCollectionFUCHSIA = 1000366000
};

enum class PipelineStageBits2 : int64_t {
	e2None = 0,
	e2NoneKHR = 0,
	e2TopOfPipe = (int64_t(1) << 0),
	e2TopOfPipeKHR = (int64_t(1) << 0),
	e2DrawIndirect = (int64_t(1) << 1),
	e2DrawIndirectKHR = (int64_t(1) << 1),
	e2VertexInput = (int64_t(1) << 2),
	e2VertexInputKHR = (int64_t(1) << 2),
	e2VertexShader = (int64_t(1) << 3),
	e2VertexShaderKHR = (int64_t(1) << 3),
	e2TessellationControlShader = (int64_t(1) << 4),
	e2TessellationControlShaderKHR = (int64_t(1) << 4),
	e2TessellationEvaluationShader = (int64_t(1) << 5),
	e2TessellationEvaluationShaderKHR = (int64_t(1) << 5),
	e2GeometryShader = (int64_t(1) << 6),
	e2GeometryShaderKHR = (int64_t(1) << 6),
	e2FragmentShader = (int64_t(1) << 7),
	e2FragmentShaderKHR = (int64_t(1) << 7),
	e2EarlyFragmentTests = (int64_t(1) << 8),
	e2EarlyFragmentTestsKHR = (int64_t(1) << 8),
	e2LateFragmentTests = (int64_t(1) << 9),
	e2LateFragmentTestsKHR = (int64_t(1) << 9),
	e2ColorAttachmentOutput = (int64_t(1) << 10),
	e2ColorAttachmentOutputKHR = (int64_t(1) << 10),
	e2ComputeShader = (int64_t(1) << 11),
	e2ComputeShaderKHR = (int64_t(1) << 11),
	e2AllTransfer = (int64_t(1) << 12),
	e2AllTransferKHR = (int64_t(1) << 12),
	e2Transfer = (int64_t(1) << 12),
	e2TransferKHR = (int64_t(1) << 12),
	e2BottomOfPipe = (int64_t(1) << 13),
	e2BottomOfPipeKHR = (int64_t(1) << 13),
	e2Host = (int64_t(1) << 14),
	e2HostKHR = (int64_t(1) << 14),
	e2AllGraphics = (int64_t(1) << 15),
	e2AllGraphicsKHR = (int64_t(1) << 15),
	e2AllCommands = (int64_t(1) << 16),
	e2AllCommandsKHR = (int64_t(1) << 16),
	e2Copy = (int64_t(1) << 32),
	e2CopyKHR = (int64_t(1) << 32),
	e2Resolve = (int64_t(1) << 33),
	e2ResolveKHR = (int64_t(1) << 33),
	e2Blit = (int64_t(1) << 34),
	e2BlitKHR = (int64_t(1) << 34),
	e2Clear = (int64_t(1) << 35),
	e2ClearKHR = (int64_t(1) << 35),
	e2IndexInput = (int64_t(1) << 36),
	e2IndexInputKHR = (int64_t(1) << 36),
	e2VertexAttributeInput = (int64_t(1) << 37),
	e2VertexAttributeInputKHR = (int64_t(1) << 37),
	e2PreRasterizationShaders = (int64_t(1) << 38),
	e2PreRasterizationShadersKHR = (int64_t(1) << 38),
	e2TransformFeedbackEXT = (int64_t(1) << 24),
	e2ConditionalRenderingEXT = (int64_t(1) << 18),
	e2CommandPreprocessNV = (int64_t(1) << 17),
	e2FragmentShadingRateAttachmentKHR = (int64_t(1) << 22),
	e2ShadingRateImageNV = (int64_t(1) << 22),
	e2AccelerationStructureBuildKHR = (int64_t(1) << 25),
	e2RayTracingShaderKHR = (int64_t(1) << 21),
	e2RayTracingShaderNV = (int64_t(1) << 21),
	e2AccelerationStructureBuildNV = (int64_t(1) << 25),
	e2FragmentDensityProcessEXT = (int64_t(1) << 23),
	e2TaskShaderNV = (int64_t(1) << 19),
	e2MeshShaderNV = (int64_t(1) << 20),
	e2SubpassShadingHUAWEI = (int64_t(1) << 39),
	e2InvocationMaskHUAWEI = (int64_t(1) << 40)
};
NYTL_FLAG_OPS(PipelineStageBits2)

enum class AccessBits2 : int64_t {
	e2None = 0,
	e2NoneKHR = 0,
	e2IndirectCommandRead = (int64_t(1) << 0),
	e2IndirectCommandReadKHR = (int64_t(1) << 0),
	e2IndexRead = (int64_t(1) << 1),
	e2IndexReadKHR = (int64_t(1) << 1),
	e2VertexAttributeRead = (int64_t(1) << 2),
	e2VertexAttributeReadKHR = (int64_t(1) << 2),
	e2UniformRead = (int64_t(1) << 3),
	e2UniformReadKHR = (int64_t(1) << 3),
	e2InputAttachmentRead = (int64_t(1) << 4),
	e2InputAttachmentReadKHR = (int64_t(1) << 4),
	e2ShaderRead = (int64_t(1) << 5),
	e2ShaderReadKHR = (int64_t(1) << 5),
	e2ShaderWrite = (int64_t(1) << 6),
	e2ShaderWriteKHR = (int64_t(1) << 6),
	e2ColorAttachmentRead = (int64_t(1) << 7),
	e2ColorAttachmentReadKHR = (int64_t(1) << 7),
	e2ColorAttachmentWrite = (int64_t(1) << 8),
	e2ColorAttachmentWriteKHR = (int64_t(1) << 8),
	e2DepthStencilAttachmentRead = (int64_t(1) << 9),
	e2DepthStencilAttachmentReadKHR = (int64_t(1) << 9),
	e2DepthStencilAttachmentWrite = (int64_t(1) << 10),
	e2DepthStencilAttachmentWriteKHR = (int64_t(1) << 10),
	e2TransferRead = (int64_t(1) << 11),
	e2TransferReadKHR = (int64_t(1) << 11),
	e2TransferWrite = (int64_t(1) << 12),
	e2TransferWriteKHR = (int64_t(1) << 12),
	e2HostRead = (int64_t(1) << 13),
	e2HostReadKHR = (int64_t(1) << 13),
	e2HostWrite = (int64_t(1) << 14),
	e2HostWriteKHR = (int64_t(1) << 14),
	e2MemoryRead = (int64_t(1) << 15),
	e2MemoryReadKHR = (int64_t(1) << 15),
	e2MemoryWrite = (int64_t(1) << 16),
	e2MemoryWriteKHR = (int64_t(1) << 16),
	e2ShaderSampledRead = (int64_t(1) << 32),
	e2ShaderSampledReadKHR = (int64_t(1) << 32),
	e2ShaderStorageRead = (int64_t(1) << 33),
	e2ShaderStorageReadKHR = (int64_t(1) << 33),
	e2ShaderStorageWrite = (int64_t(1) << 34),
	e2ShaderStorageWriteKHR = (int64_t(1) << 34),
	e2TransformFeedbackWriteEXT = (int64_t(1) << 25),
	e2TransformFeedbackCounterReadEXT = (int64_t(1) << 26),
	e2TransformFeedbackCounterWriteEXT = (int64_t(1) << 27),
	e2ConditionalRenderingReadEXT = (int64_t(1) << 20),
	e2CommandPreprocessReadNV = (int64_t(1) << 17),
	e2CommandPreprocessWriteNV = (int64_t(1) << 18),
	e2FragmentShadingRateAttachmentReadKHR = (int64_t(1) << 23),
	e2ShadingRateImageReadNV = (int64_t(1) << 23),
	e2AccelerationStructureReadKHR = (int64_t(1) << 21),
	e2AccelerationStructureWriteKHR = (int64_t(1) << 22),
	e2AccelerationStructureReadNV = (int64_t(1) << 21),
	e2AccelerationStructureWriteNV = (int64_t(1) << 22),
	e2FragmentDensityMapReadEXT = (int64_t(1) << 24),
	e2ColorAttachmentReadNoncoherentEXT = (int64_t(1) << 19),
	e2InvocationMaskReadHUAWEI = (int64_t(1) << 39)
};
NYTL_FLAG_OPS(AccessBits2)

enum class ImageLayout : int32_t {
	undefined = 0,
	general = 1,
	colorAttachmentOptimal = 2,
	depthStencilAttachmentOptimal = 3,
	depthStencilReadOnlyOptimal = 4,
	shaderReadOnlyOptimal = 5,
	transferSrcOptimal = 6,
	transferDstOptimal = 7,
	preinitialized = 8,
	depthReadOnlyStencilAttachmentOptimal = 1000117000,
	depthAttachmentStencilReadOnlyOptimal = 1000117001,
	depthAttachmentOptimal = 1000241000,
	depthReadOnlyOptimal = 1000241001,
	stencilAttachmentOptimal = 1000241002,
	stencilReadOnlyOptimal = 1000241003,
	readOnlyOptimal = 1000314000,
	attachmentOptimal = 1000314001,
	presentSrcKHR = 1000001002,
	sharedPresentKHR = 1000111000,
	depthReadOnlyStencilAttachmentOptimalKHR = 1000117000,
	depthAttachmentStencilReadOnlyOptimalKHR = 1000117001,
	fragmentDensityMapOptimalEXT = 1000218000,
	fragmentShadingRateAttachmentOptimalKHR = 1000164003,
	depthAttachmentOptimalKHR = 1000241000,
	depthReadOnlyOptimalKHR = 1000241001,
	stencilAttachmentOptimalKHR = 1000241002,
	stencilReadOnlyOptimalKHR = 1000241003,
	readOnlyOptimalKHR = 1000314000,
	attachmentOptimalKHR = 1000314001
};

enum class ImageAspectBits : int32_t {
	color = (1 << 0),
	depth = (1 << 1),
	stencil = (1 << 2),
	metadata = (1 << 3),
	plane0 = (1 << 4),
	plane1 = (1 << 5),
	plane2 = (1 << 6),
	plane0KHR = (1 << 4),
	plane1KHR = (1 << 5),
	plane2KHR = (1 << 6),
	memoryPlane0EXT = (1 << 7),
	memoryPlane1EXT = (1 << 8),
	memoryPlane2EXT = (1 << 9),
	memoryPlane3EXT = (1 << 10),
	noneKHR = 0
};
NYTL_FLAG_OPS(ImageAspectBits)

enum class DependencyBits : int32_t {
	byRegion = (1 << 0),
	deviceGroup = (1 << 2),
	viewLocal = (1 << 1),
	viewLocalKHR = (1 << 1),
	deviceGroupKHR = (1 << 2)
};
NYTL_FLAG_OPS(DependencyBits)

enum class SubmitBits : int32_t {
	eProtected = (1 << 0),
	protectedKHR = (1 << 0)
};
NYTL_FLAG_OPS(SubmitBits)

enum class Filter : int32_t {
	nearest = 0,
	linear = 1,
	cubicIMG = 1000015000,
	cubicEXT = 1000015000
};

enum class RenderingBits : int32_t {
	contentsSecondaryCommandBuffers = (1 << 0),
	contentsSecondaryCommandBuffersKHR = (1 << 0),
	suspending = (1 << 1),
	suspendingKHR = (1 << 1),
	resuming = (1 << 2),
	resumingKHR = (1 << 2)
};
NYTL_FLAG_OPS(RenderingBits)

enum class ResolveModeBits : int32_t {
	none = 0,
	sampleZero = (1 << 0),
	average = (1 << 1),
	min = (1 << 2),
	max = (1 << 3),
	noneKHR = 0,
	sampleZeroKHR = (1 << 0),
	averageKHR = (1 << 1),
	minKHR = (1 << 2),
	maxKHR = (1 << 3)
};
NYTL_FLAG_OPS(ResolveModeBits)

enum class AttachmentLoadOp : int32_t {
	load = 0,
	clear = 1,
	dontCare = 2,
	noneEXT = 1000400000
};

enum class AttachmentStoreOp : int32_t {
	store = 0,
	dontCare = 1,
	none = 1000301000,
	noneKHR = 1000301000,
	noneQCOM = 1000301000,
	noneEXT = 1000301000
};

enum class Format : int32_t {
	undefined = 0,
	r4g4UnormPack8 = 1,
	r4g4b4a4UnormPack16 = 2,
	b4g4r4a4UnormPack16 = 3,
	r5g6b5UnormPack16 = 4,
	b5g6r5UnormPack16 = 5,
	r5g5b5a1UnormPack16 = 6,
	b5g5r5a1UnormPack16 = 7,
	a1r5g5b5UnormPack16 = 8,
	r8Unorm = 9,
	r8Snorm = 10,
	r8Uscaled = 11,
	r8Sscaled = 12,
	r8Uint = 13,
	r8Sint = 14,
	r8Srgb = 15,
	r8g8Unorm = 16,
	r8g8Snorm = 17,
	r8g8Uscaled = 18,
	r8g8Sscaled = 19,
	r8g8Uint = 20,
	r8g8Sint = 21,
	r8g8Srgb = 22,
	r8g8b8Unorm = 23,
	r8g8b8Snorm = 24,
	r8g8b8Uscaled = 25,
	r8g8b8Sscaled = 26,
	r8g8b8Uint = 27,
	r8g8b8Sint = 28,
	r8g8b8Srgb = 29,
	b8g8r8Unorm = 30,
	b8g8r8Snorm = 31,
	b8g8r8Uscaled = 32,
	b8g8r8Sscaled = 33,
	b8g8r8Uint = 34,
	b8g8r8Sint = 35,
	b8g8r8Srgb = 36,
	r8g8b8a8Unorm = 37,
	r8g8b8a8Snorm = 38,
	r8g8b8a8Uscaled = 39,
	r8g8b8a8Sscaled = 40,
	r8g8b8a8Uint = 41,
	r8g8b8a8Sint = 42,
	r8g8b8a8Srgb = 43,
	b8g8r8a8Unorm = 44,
	b8g8r8a8Snorm = 45,
	b8g8r8a8Uscaled = 46,
	b8g8r8a8Sscaled = 47,
	b8g8r8a8Uint = 48,
	b8g8r8a8Sint = 49,
	b8g8r8a8Srgb = 50,
	a8b8g8r8UnormPack32 = 51,
	a8b8g8r8SnormPack32 = 52,
	a8b8g8r8UscaledPack32 = 53,
	a8b8g8r8SscaledPack32 = 54,
	a8b8g8r8UintPack32 = 55,
	a8b8g8r8SintPack32 = 56,
	a8b8g8r8SrgbPack32 = 57,
	a2r10g10b10UnormPack32 = 58,
	a2r10g10b10SnormPack32 = 59,
	a2r10g10b10UscaledPack32 = 60,
	a2r10g10b10SscaledPack32 = 61,
	a2r10g10b10UintPack32 = 62,
	a2r10g10b10SintPack32 = 63,
	a2b10g10r10UnormPack32 = 64,
	a2b10g10r10SnormPack32 = 65,
	a2b10g10r10UscaledPack32 = 66,
	a2b10g10r10SscaledPack32 = 67,
	a2b10g10r10UintPack32 = 68,
	a2b10g10r10SintPack32 = 69,
	r16Unorm = 70,
	r16Snorm = 71,
	r16Uscaled = 72,
	r16Sscaled = 73,
	r16Uint = 74,
	r16Sint = 75,
	r16Sfloat = 76,
	r16g16Unorm = 77,
	r16g16Snorm = 78,
	r16g16Uscaled = 79,
	r16g16Sscaled = 80,
	r16g16Uint = 81,
	r16g16Sint = 82,
	r16g16Sfloat = 83,
	r16g16b16Unorm = 84,
	r16g16b16Snorm = 85,
	r16g16b16Uscaled = 86,
	r16g16b16Sscaled = 87,
	r16g16b16Uint = 88,
	r16g16b16Sint = 89,
	r16g16b16Sfloat = 90,
	r16g16b16a16Unorm = 91,
	r16g16b16a16Snorm = 92,
	r16g16b16a16Uscaled = 93,
	r16g16b16a16Sscaled = 94,
	r16g16b16a16Uint = 95,
	r16g16b16a16Sint = 96,
	r16g16b16a16Sfloat = 97,
	r32Uint = 98,
	r32Sint = 99,
	r32Sfloat = 100,
	r32g32Uint = 101,
	r32g32Sint = 102,
	r32g32Sfloat = 103,
	r32g32b32Uint = 104,
	r32g32b32Sint = 105,
	r32g32b32Sfloat = 106,
	r32g32b32a32Uint = 107,
	r32g32b32a32Sint = 108,
	r32g32b32a32Sfloat = 109,
	r64Uint = 110,
	r64Sint = 111,
	r64Sfloat = 112,
	r64g64Uint = 113,
	r64g64Sint = 114,
	r64g64Sfloat = 115,
	r64g64b64Uint = 116,
	r64g64b64Sint = 117,
	r64g64b64Sfloat = 118,
	r64g64b64a64Uint = 119,
	r64g64b64a64Sint = 120,
	r64g64b64a64Sfloat = 121,
	b10g11r11UfloatPack32 = 122,
	e5b9g9r9UfloatPack32 = 123,
	d16Unorm = 124,
	x8D24UnormPack32 = 125,
	d32Sfloat = 126,
	s8Uint = 127,
	d16UnormS8Uint = 128,
	d24UnormS8Uint = 129,
	d32SfloatS8Uint = 130,
	bc1RgbUnormBlock = 131,
	bc1RgbSrgbBlock = 132,
	bc1RgbaUnormBlock = 133,
	bc1RgbaSrgbBlock = 134,
	bc2UnormBlock = 135,
	bc2SrgbBlock = 136,
	bc3UnormBlock = 137,
	bc3SrgbBlock = 138,
	bc4UnormBlock = 139,
	bc4SnormBlock = 140,
	bc5UnormBlock = 141,
	bc5SnormBlock = 142,
	bc6hUfloatBlock = 143,
	bc6hSfloatBlock = 144,
	bc7UnormBlock = 145,
	bc7SrgbBlock = 146,
	etc2R8g8b8UnormBlock = 147,
	etc2R8g8b8SrgbBlock = 148,
	etc2R8g8b8a1UnormBlock = 149,
	etc2R8g8b8a1SrgbBlock = 150,
	etc2R8g8b8a8UnormBlock = 151,
	etc2R8g8b8a8SrgbBlock = 152,
	eacR11UnormBlock = 153,
	eacR11SnormBlock = 154,
	eacR11g11UnormBlock = 155,
	eacR11g11SnormBlock = 156,
	astc4x4UnormBlock = 157,
	astc4x4SrgbBlock = 158,
	astc5x4UnormBlock = 159,
	astc5x4SrgbBlock = 160,
	astc5x5UnormBlock = 161,
	astc5x5SrgbBlock = 162,
	astc6x5UnormBlock = 163,
	astc6x5SrgbBlock = 164,
	astc6x6UnormBlock = 165,
	astc6x6SrgbBlock = 166,
	astc8x5UnormBlock = 167,
	astc8x5SrgbBlock = 168,
	astc8x6UnormBlock = 169,
	astc8x6SrgbBlock = 170,
	astc8x8UnormBlock = 171,
	astc8x8SrgbBlock = 172,
	astc10x5UnormBlock = 173,
	astc10x5SrgbBlock = 174,
	astc10x6UnormBlock = 175,
	astc10x6SrgbBlock = 176,
	astc10x8UnormBlock = 177,
	astc10x8SrgbBlock = 178,
	astc10x10UnormBlock = 179,
	astc10x10SrgbBlock = 180,
	astc12x10UnormBlock = 181,
	astc12x10SrgbBlock = 182,
	astc12x12UnormBlock = 183,
	astc12x12SrgbBlock = 184,
	g8b8g8r8422Unorm = 1000156000,
	b8g8r8g8422Unorm = 1000156001,
	g8B8R83plane420Unorm = 1000156002,
	g8B8r82plane420Unorm = 1000156003,
	g8B8R83plane422Unorm = 1000156004,
	g8B8r82plane422Unorm = 1000156005,
	g8B8R83plane444Unorm = 1000156006,
	r10x6UnormPack16 = 1000156007,
	r10x6g10x6Unorm2pack16 = 1000156008,
	r10x6g10x6b10x6a10x6Unorm4pack16 = 1000156009,
	g10x6b10x6g10x6r10x6422Unorm4pack16 = 1000156010,
	b10x6g10x6r10x6g10x6422Unorm4pack16 = 1000156011,
	g10x6B10x6R10x63plane420Unorm3pack16 = 1000156012,
	g10x6B10x6r10x62plane420Unorm3pack16 = 1000156013,
	g10x6B10x6R10x63plane422Unorm3pack16 = 1000156014,
	g10x6B10x6r10x62plane422Unorm3pack16 = 1000156015,
	g10x6B10x6R10x63plane444Unorm3pack16 = 1000156016,
	r12x4UnormPack16 = 1000156017,
	r12x4g12x4Unorm2pack16 = 1000156018,
	r12x4g12x4b12x4a12x4Unorm4pack16 = 1000156019,
	g12x4b12x4g12x4r12x4422Unorm4pack16 = 1000156020,
	b12x4g12x4r12x4g12x4422Unorm4pack16 = 1000156021,
	g12x4B12x4R12x43plane420Unorm3pack16 = 1000156022,
	g12x4B12x4r12x42plane420Unorm3pack16 = 1000156023,
	g12x4B12x4R12x43plane422Unorm3pack16 = 1000156024,
	g12x4B12x4r12x42plane422Unorm3pack16 = 1000156025,
	g12x4B12x4R12x43plane444Unorm3pack16 = 1000156026,
	g16b16g16r16422Unorm = 1000156027,
	b16g16r16g16422Unorm = 1000156028,
	g16B16R163plane420Unorm = 1000156029,
	g16B16r162plane420Unorm = 1000156030,
	g16B16R163plane422Unorm = 1000156031,
	g16B16r162plane422Unorm = 1000156032,
	g16B16R163plane444Unorm = 1000156033,
	g8B8r82plane444Unorm = 1000330000,
	g10x6B10x6r10x62plane444Unorm3pack16 = 1000330001,
	g12x4B12x4r12x42plane444Unorm3pack16 = 1000330002,
	g16B16r162plane444Unorm = 1000330003,
	a4r4g4b4UnormPack16 = 1000340000,
	a4b4g4r4UnormPack16 = 1000340001,
	astc4x4SfloatBlock = 1000066000,
	astc5x4SfloatBlock = 1000066001,
	astc5x5SfloatBlock = 1000066002,
	astc6x5SfloatBlock = 1000066003,
	astc6x6SfloatBlock = 1000066004,
	astc8x5SfloatBlock = 1000066005,
	astc8x6SfloatBlock = 1000066006,
	astc8x8SfloatBlock = 1000066007,
	astc10x5SfloatBlock = 1000066008,
	astc10x6SfloatBlock = 1000066009,
	astc10x8SfloatBlock = 1000066010,
	astc10x10SfloatBlock = 1000066011,
	astc12x10SfloatBlock = 1000066012,
	astc12x12SfloatBlock = 1000066013,
	pvrtc12bppUnormBlockIMG = 1000054000,
	pvrtc14bppUnormBlockIMG = 1000054001,
	pvrtc22bppUnormBlockIMG = 1000054002,
	pvrtc24bppUnormBlockIMG = 1000054003,
	pvrtc12bppSrgbBlockIMG = 1000054004,
	pvrtc14bppSrgbBlockIMG = 1000054005,
	pvrtc22bppSrgbBlockIMG = 1000054006,
	pvrtc24bppSrgbBlockIMG = 1000054007,
	astc4x4SfloatBlockEXT = 1000066000,
	astc5x4SfloatBlockEXT = 1000066001,
	astc5x5SfloatBlockEXT = 1000066002,
	astc6x5SfloatBlockEXT = 1000066003,
	astc6x6SfloatBlockEXT = 1000066004,
	astc8x5SfloatBlockEXT = 1000066005,
	astc8x6SfloatBlockEXT = 1000066006,
	astc8x8SfloatBlockEXT = 1000066007,
	astc10x5SfloatBlockEXT = 1000066008,
	astc10x6SfloatBlockEXT = 1000066009,
	astc10x8SfloatBlockEXT = 1000066010,
	astc10x10SfloatBlockEXT = 1000066011,
	astc12x10SfloatBlockEXT = 1000066012,
	astc12x12SfloatBlockEXT = 1000066013,
	g8b8g8r8422UnormKHR = 1000156000,
	b8g8r8g8422UnormKHR = 1000156001,
	g8B8R83plane420UnormKHR = 1000156002,
	g8B8r82plane420UnormKHR = 1000156003,
	g8B8R83plane422UnormKHR = 1000156004,
	g8B8r82plane422UnormKHR = 1000156005,
	g8B8R83plane444UnormKHR = 1000156006,
	r10x6UnormPack16KHR = 1000156007,
	r10x6g10x6Unorm2pack16KHR = 1000156008,
	r10x6g10x6b10x6a10x6Unorm4pack16KHR = 1000156009,
	g10x6b10x6g10x6r10x6422Unorm4pack16KHR = 1000156010,
	b10x6g10x6r10x6g10x6422Unorm4pack16KHR = 1000156011,
	g10x6B10x6R10x63plane420Unorm3pack16KHR = 1000156012,
	g10x6B10x6r10x62plane420Unorm3pack16KHR = 1000156013,
	g10x6B10x6R10x63plane422Unorm3pack16KHR = 1000156014,
	g10x6B10x6r10x62plane422Unorm3pack16KHR = 1000156015,
	g10x6B10x6R10x63plane444Unorm3pack16KHR = 1000156016,
	r12x4UnormPack16KHR = 1000156017,
	r12x4g12x4Unorm2pack16KHR = 1000156018,
	r12x4g12x4b12x4a12x4Unorm4pack16KHR = 1000156019,
	g12x4b12x4g12x4r12x4422Unorm4pack16KHR = 1000156020,
	b12x4g12x4r12x4g12x4422Unorm4pack16KHR = 1000156021,
	g12x4B12x4R12x43plane420Unorm3pack16KHR = 1000156022,
	g12x4B12x4r12x42plane420Unorm3pack16KHR = 1000156023,
	g12x4B12x4R12x43plane422Unorm3pack16KHR = 1000156024,
	g12x4B12x4r12x42plane422Unorm3pack16KHR = 1000156025,
	g12x4B12x4R12x43plane444Unorm3pack16KHR = 1000156026,
	g16b16g16r16422UnormKHR = 1000156027,
	b16g16r16g16422UnormKHR = 1000156028,
	g16B16R163plane420UnormKHR = 1000156029,
	g16B16r162plane420UnormKHR = 1000156030,
	g16B16R163plane422UnormKHR = 1000156031,
	g16B16r162plane422UnormKHR = 1000156032,
	g16B16R163plane444UnormKHR = 1000156033,
	g8B8r82plane444UnormEXT = 1000330000,
	g10x6B10x6r10x62plane444Unorm3pack16EXT = 1000330001,
	g12x4B12x4r12x42plane444Unorm3pack16EXT = 1000330002,
	g16B16r162plane444UnormEXT = 1000330003,
	a4r4g4b4UnormPack16EXT = 1000340000,
	a4b4g4r4UnormPack16EXT = 1000340001
};

enum class SampleCountBits : int32_t {
	e1 = (1 << 0),
	e2 = (1 << 1),
	e4 = (1 << 2),
	e8 = (1 << 3),
	e16 = (1 << 4),
	e32 = (1 << 5),
	e64 = (1 << 6)
};
NYTL_FLAG_OPS(SampleCountBits)

enum class CullModeBits : int32_t {
	none = 0,
	front = (1 << 0),
	back = (1 << 1),
	frontAndBack = 3
};
NYTL_FLAG_OPS(CullModeBits)

enum class FrontFace : int32_t {
	counterClockwise = 0,
	clockwise = 1
};

enum class PrimitiveTopology : int32_t {
	pointList = 0,
	lineList = 1,
	lineStrip = 2,
	triangleList = 3,
	triangleStrip = 4,
	triangleFan = 5,
	lineListWithAdjacency = 6,
	lineStripWithAdjacency = 7,
	triangleListWithAdjacency = 8,
	triangleStripWithAdjacency = 9,
	patchList = 10
};

enum class CompareOp : int32_t {
	never = 0,
	less = 1,
	equal = 2,
	lessOrEqual = 3,
	greater = 4,
	notEqual = 5,
	greaterOrEqual = 6,
	always = 7
};

enum class StencilFaceBits : int32_t {
	front = (1 << 0),
	back = (1 << 1),
	frontAndBack = 3,
	rontAndBack = 3
};
NYTL_FLAG_OPS(StencilFaceBits)

enum class StencilOp : int32_t {
	keep = 0,
	zero = 1,
	replace = 2,
	incrementAndClamp = 3,
	decrementAndClamp = 4,
	invert = 5,
	incrementAndWrap = 6,
	decrementAndWrap = 7
};

enum class FormatFeatureBits2 : int64_t {
	e2SampledImage = (int64_t(1) << 0),
	e2SampledImageKHR = (int64_t(1) << 0),
	e2StorageImage = (int64_t(1) << 1),
	e2StorageImageKHR = (int64_t(1) << 1),
	e2StorageImageAtomic = (int64_t(1) << 2),
	e2StorageImageAtomicKHR = (int64_t(1) << 2),
	e2UniformTexelBuffer = (int64_t(1) << 3),
	e2UniformTexelBufferKHR = (int64_t(1) << 3),
	e2StorageTexelBuffer = (int64_t(1) << 4),
	e2StorageTexelBufferKHR = (int64_t(1) << 4),
	e2StorageTexelBufferAtomic = (int64_t(1) << 5),
	e2StorageTexelBufferAtomicKHR = (int64_t(1) << 5),
	e2VertexBuffer = (int64_t(1) << 6),
	e2VertexBufferKHR = (int64_t(1) << 6),
	e2ColorAttachment = (int64_t(1) << 7),
	e2ColorAttachmentKHR = (int64_t(1) << 7),
	e2ColorAttachmentBlend = (int64_t(1) << 8),
	e2ColorAttachmentBlendKHR = (int64_t(1) << 8),
	e2DepthStencilAttachment = (int64_t(1) << 9),
	e2DepthStencilAttachmentKHR = (int64_t(1) << 9),
	e2BlitSrc = (int64_t(1) << 10),
	e2BlitSrcKHR = (int64_t(1) << 10),
	e2BlitDst = (int64_t(1) << 11),
	e2BlitDstKHR = (int64_t(1) << 11),
	e2SampledImageFilterLinear = (int64_t(1) << 12),
	e2SampledImageFilterLinearKHR = (int64_t(1) << 12),
	e2SampledImageFilterCubic = (int64_t(1) << 13),
	e2SampledImageFilterCubicEXT = (int64_t(1) << 13),
	e2TransferSrc = (int64_t(1) << 14),
	e2TransferSrcKHR = (int64_t(1) << 14),
	e2TransferDst = (int64_t(1) << 15),
	e2TransferDstKHR = (int64_t(1) << 15),
	e2SampledImageFilterMinmax = (int64_t(1) << 16),
	e2SampledImageFilterMinmaxKHR = (int64_t(1) << 16),
	e2MidpointChromaSamples = (int64_t(1) << 17),
	e2MidpointChromaSamplesKHR = (int64_t(1) << 17),
	e2SampledImageYcbcrConversionLinearFilter = (int64_t(1) << 18),
	e2SampledImageYcbcrConversionLinearFilterKHR = (int64_t(1) << 18),
	e2SampledImageYcbcrConversionSeparateReconstructionFilter = (int64_t(1) << 19),
	e2SampledImageYcbcrConversionSeparateReconstructionFilterKHR = (int64_t(1) << 19),
	e2SampledImageYcbcrConversionChromaReconstructionExplicit = (int64_t(1) << 20),
	e2SampledImageYcbcrConversionChromaReconstructionExplicitKHR = (int64_t(1) << 20),
	e2SampledImageYcbcrConversionChromaReconstructionExplicitForceable = (int64_t(1) << 21),
	e2SampledImageYcbcrConversionChromaReconstructionExplicitForceableKHR = (int64_t(1) << 21),
	e2Disjoint = (int64_t(1) << 22),
	e2DisjointKHR = (int64_t(1) << 22),
	e2CositedChromaSamples = (int64_t(1) << 23),
	e2CositedChromaSamplesKHR = (int64_t(1) << 23),
	e2StorageReadWithoutFormat = (int64_t(1) << 31),
	e2StorageReadWithoutFormatKHR = (int64_t(1) << 31),
	e2StorageWriteWithoutFormat = (int64_t(1) << 32),
	e2StorageWriteWithoutFormatKHR = (int64_t(1) << 32),
	e2SampledImageDepthComparison = (int64_t(1) << 33),
	e2SampledImageDepthComparisonKHR = (int64_t(1) << 33),
	e2AccelerationStructureVertexBufferKHR = (int64_t(1) << 29),
	e2FragmentDensityMapEXT = (int64_t(1) << 24),
	e2FragmentShadingRateAttachmentKHR = (int64_t(1) << 30),
	e2LinearColorAttachmentNV = (int64_t(1) << 38)
};
NYTL_FLAG_OPS(FormatFeatureBits2)

enum class BufferCreateBits : int32_t {
	sparseBinding = (1 << 0),
	sparseResidency = (1 << 1),
	sparseAliased = (1 << 2),
	eProtected = (1 << 3),
	deviceAddressCaptureReplay = (1 << 4),
	deviceAddressCaptureReplayEXT = (1 << 4),
	deviceAddressCaptureReplayKHR = (1 << 4)
};
NYTL_FLAG_OPS(BufferCreateBits)

enum class BufferUsageBits : int32_t {
	transferSrc = (1 << 0),
	transferDst = (1 << 1),
	uniformTexelBuffer = (1 << 2),
	storageTexelBuffer = (1 << 3),
	uniformBuffer = (1 << 4),
	storageBuffer = (1 << 5),
	indexBuffer = (1 << 6),
	vertexBuffer = (1 << 7),
	indirectBuffer = (1 << 8),
	shaderDeviceAddress = (1 << 17),
	transformFeedbackBufferEXT = (1 << 11),
	transformFeedbackCounterBufferEXT = (1 << 12),
	conditionalRenderingEXT = (1 << 9),
	accelerationStructureBuildInputReadOnlyKHR = (1 << 19),
	accelerationStructureStorageKHR = (1 << 20),
	shaderBindingTableKHR = (1 << 10),
	rayTracingNV = (1 << 10),
	shaderDeviceAddressEXT = (1 << 17),
	shaderDeviceAddressKHR = (1 << 17)
};
NYTL_FLAG_OPS(BufferUsageBits)

enum class SharingMode : int32_t {
	exclusive = 0,
	concurrent = 1
};

enum class ImageCreateBits : int32_t {
	sparseBinding = (1 << 0),
	sparseResidency = (1 << 1),
	sparseAliased = (1 << 2),
	mutableFormat = (1 << 3),
	cubeCompatible = (1 << 4),
	alias = (1 << 10),
	splitInstanceBindRegions = (1 << 6),
	e2dArrayCompatible = (1 << 5),
	blockTexelViewCompatible = (1 << 7),
	extendedUsage = (1 << 8),
	eProtected = (1 << 11),
	disjoint = (1 << 9),
	cornerSampledNV = (1 << 13),
	splitInstanceBindRegionsKHR = (1 << 6),
	e2dArrayCompatibleKHR = (1 << 5),
	blockTexelViewCompatibleKHR = (1 << 7),
	extendedUsageKHR = (1 << 8),
	sampleLocationsCompatibleDepthEXT = (1 << 12),
	disjointKHR = (1 << 9),
	aliasKHR = (1 << 10),
	subsampledEXT = (1 << 14),
	fragmentDensityMapOffsetQCOM = (1 << 15)
};
NYTL_FLAG_OPS(ImageCreateBits)

enum class ImageType : int32_t {
	e1d = 0,
	e2d = 1,
	e3d = 2
};

enum class ImageTiling : int32_t {
	optimal = 0,
	linear = 1,
	drmFormatModifierEXT = 1000158000
};

enum class ImageUsageBits : int32_t {
	transferSrc = (1 << 0),
	transferDst = (1 << 1),
	sampled = (1 << 2),
	storage = (1 << 3),
	colorAttachment = (1 << 4),
	depthStencilAttachment = (1 << 5),
	transientAttachment = (1 << 6),
	inputAttachment = (1 << 7),
	fragmentDensityMapEXT = (1 << 9),
	fragmentShadingRateAttachmentKHR = (1 << 8),
	invocationMaskHUAWEI = (1 << 18)
};
NYTL_FLAG_OPS(ImageUsageBits)

enum class SparseImageFormatBits : int32_t {
	singleMiptail = (1 << 0),
	alignedMipSize = (1 << 1),
	nonstandardBlockSize = (1 << 2)
};
NYTL_FLAG_OPS(SparseImageFormatBits)


enum class SubgroupFeatureBits : int32_t {
	basic = (1 << 0),
	vote = (1 << 1),
	arithmetic = (1 << 2),
	ballot = (1 << 3),
	shuffle = (1 << 4),
	shuffleRelative = (1 << 5),
	clustered = (1 << 6),
	quad = (1 << 7),
	partitionedNV = (1 << 8)
};
NYTL_FLAG_OPS(SubgroupFeatureBits)

enum class PointClippingBehavior : int32_t {
	allClipPlanes = 0,
	userClipPlanesOnly = 1,
	allClipPlanesKHR = 0,
	userClipPlanesOnlyKHR = 1
};

enum class DriverId : int32_t {
	amdProprietary = 1,
	amdOpenSource = 2,
	mesaRadv = 3,
	nvidiaProprietary = 4,
	intelProprietaryWindows = 5,
	intelOpenSourceMESA = 6,
	imaginationProprietary = 7,
	qualcommProprietary = 8,
	armProprietary = 9,
	googleSwiftshader = 10,
	ggpProprietary = 11,
	broadcomProprietary = 12,
	mesaLlvmpipe = 13,
	moltenvk = 14,
	coreaviProprietary = 15,
	juiceProprietary = 16,
	verisiliconProprietary = 17,
	mesaTurnip = 18,
	mesaV3dv = 19,
	mesaPanvk = 20,
	samsungProprietary = 21,
	mesaVenus = 22,
	amdProprietaryKHR = 1,
	amdOpenSourceKHR = 2,
	mesaRadvKHR = 3,
	nvidiaProprietaryKHR = 4,
	intelProprietaryWindowsKHR = 5,
	intelOpenSourceMesaKHR = 6,
	imaginationProprietaryKHR = 7,
	qualcommProprietaryKHR = 8,
	armProprietaryKHR = 9,
	googleSwiftshaderKHR = 10,
	ggpProprietaryKHR = 11,
	broadcomProprietaryKHR = 12
};

enum class ShaderFloatControlsIndependence : int32_t {
	e32BitOnly = 0,
	all = 1,
	none = 2,
	e32BitOnlyKHR = 0,
	allKHR = 1,
	noneKHR = 2
};

enum class RenderPassCreateBits : int32_t {
	transformQCOM = (1 << 1)
};
NYTL_FLAG_OPS(RenderPassCreateBits)

enum class AttachmentDescriptionBits : int32_t {
	mayAlias = (1 << 0)
};
NYTL_FLAG_OPS(AttachmentDescriptionBits)

enum class SubpassDescriptionBits : int32_t {
	fragmentRegionQCOM = (1 << 2),
	shaderResolveQCOM = (1 << 3),
	rasterizationOrderAttachmentColorAccessARM = (1 << 4),
	rasterizationOrderAttachmentDepthAccessARM = (1 << 5),
	rasterizationOrderAttachmentStencilAccessARM = (1 << 6)
};
NYTL_FLAG_OPS(SubpassDescriptionBits)

enum class PipelineBindPoint : int32_t {
	graphics = 0,
	compute = 1,
	rayTracingKHR = 1000165000,
	rayTracingNV = 1000165000,
	subpassShadingHUAWEI = 1000369003
};

enum class PipelineStageBits : int32_t {
	topOfPipe = (1 << 0),
	drawIndirect = (1 << 1),
	vertexInput = (1 << 2),
	vertexShader = (1 << 3),
	tessellationControlShader = (1 << 4),
	tessellationEvaluationShader = (1 << 5),
	geometryShader = (1 << 6),
	fragmentShader = (1 << 7),
	earlyFragmentTests = (1 << 8),
	lateFragmentTests = (1 << 9),
	colorAttachmentOutput = (1 << 10),
	computeShader = (1 << 11),
	transfer = (1 << 12),
	bottomOfPipe = (1 << 13),
	host = (1 << 14),
	allGraphics = (1 << 15),
	allCommands = (1 << 16),
	none = 0,
	transformFeedbackEXT = (1 << 24),
	conditionalRenderingEXT = (1 << 18),
	accelerationStructureBuildKHR = (1 << 25),
	rayTracingShaderKHR = (1 << 21),
	rayTracingShaderNV = (1 << 21),
	accelerationStructureBuildNV = (1 << 25),
	taskShaderNV = (1 << 19),
	meshShaderNV = (1 << 20),
	fragmentDensityProcessEXT = (1 << 23),
	fragmentShadingRateAttachmentKHR = (1 << 22),
	commandPreprocessNV = (1 << 17),
	noneKHR = 0
};
NYTL_FLAG_OPS(PipelineStageBits)

enum class AccessBits : int32_t {
	indirectCommandRead = (1 << 0),
	indexRead = (1 << 1),
	vertexAttributeRead = (1 << 2),
	uniformRead = (1 << 3),
	inputAttachmentRead = (1 << 4),
	shaderRead = (1 << 5),
	shaderWrite = (1 << 6),
	colorAttachmentRead = (1 << 7),
	colorAttachmentWrite = (1 << 8),
	depthStencilAttachmentRead = (1 << 9),
	depthStencilAttachmentWrite = (1 << 10),
	transferRead = (1 << 11),
	transferWrite = (1 << 12),
	hostRead = (1 << 13),
	hostWrite = (1 << 14),
	memoryRead = (1 << 15),
	memoryWrite = (1 << 16),
	none = 0,
	transformFeedbackWriteEXT = (1 << 25),
	transformFeedbackCounterReadEXT = (1 << 26),
	transformFeedbackCounterWriteEXT = (1 << 27),
	conditionalRenderingReadEXT = (1 << 20),
	colorAttachmentReadNoncoherentEXT = (1 << 19),
	accelerationStructureReadKHR = (1 << 21),
	accelerationStructureWriteKHR = (1 << 22),
	accelerationStructureReadNV = (1 << 21),
	accelerationStructureWriteNV = (1 << 22),
	fragmentDensityMapReadEXT = (1 << 24),
	fragmentShadingRateAttachmentReadKHR = (1 << 23),
	commandPreprocessReadNV = (1 << 17),
	commandPreprocessWriteNV = (1 << 18),
	noneKHR = 0
};
NYTL_FLAG_OPS(AccessBits)

enum class SubpassContents : int32_t {
	eInline = 0,
	secondaryCommandBuffers = 1
};

enum class DescriptorBindingBits : int32_t {
	updateAfterBind = (1 << 0),
	updateUnusedWhilePending = (1 << 1),
	partiallyBound = (1 << 2),
	variableDescriptorCount = (1 << 3),
	updateAfterBindEXT = (1 << 0),
	updateUnusedWhilePendingEXT = (1 << 1),
	partiallyBoundEXT = (1 << 2),
	variableDescriptorCountEXT = (1 << 3)
};
NYTL_FLAG_OPS(DescriptorBindingBits)

enum class SamplerReductionMode : int32_t {
	weightedAverage = 0,
	min = 1,
	max = 2,
	weightedAverageEXT = 0,
	minEXT = 1,
	maxEXT = 2
};

enum class SemaphoreType : int32_t {
	binary = 0,
	timeline = 1,
	binaryKHR = 0,
	timelineKHR = 1
};

enum class SemaphoreWaitBits : int32_t {
	any = (1 << 0),
	anyKHR = (1 << 0)
};
NYTL_FLAG_OPS(SemaphoreWaitBits)


enum class PeerMemoryFeatureBits : int32_t {
	copySrc = (1 << 0),
	copyDst = (1 << 1),
	genericSrc = (1 << 2),
	genericDst = (1 << 3),
	copySrcKHR = (1 << 0),
	copyDstKHR = (1 << 1),
	genericSrcKHR = (1 << 2),
	genericDstKHR = (1 << 3)
};
NYTL_FLAG_OPS(PeerMemoryFeatureBits)

enum class MemoryAllocateBits : int32_t {
	deviceMask = (1 << 0),
	deviceAddress = (1 << 1),
	deviceAddressCaptureReplay = (1 << 2),
	deviceMaskKHR = (1 << 0),
	deviceAddressKHR = (1 << 1),
	deviceAddressCaptureReplayKHR = (1 << 2)
};
NYTL_FLAG_OPS(MemoryAllocateBits)

enum class PhysicalDeviceType : int32_t {
	other = 0,
	integratedGpu = 1,
	discreteGpu = 2,
	virtualGpu = 3,
	cpu = 4
};

enum class FormatFeatureBits : int32_t {
	sampledImage = (1 << 0),
	storageImage = (1 << 1),
	storageImageAtomic = (1 << 2),
	uniformTexelBuffer = (1 << 3),
	storageTexelBuffer = (1 << 4),
	storageTexelBufferAtomic = (1 << 5),
	vertexBuffer = (1 << 6),
	colorAttachment = (1 << 7),
	colorAttachmentBlend = (1 << 8),
	depthStencilAttachment = (1 << 9),
	blitSrc = (1 << 10),
	blitDst = (1 << 11),
	sampledImageFilterLinear = (1 << 12),
	transferSrc = (1 << 14),
	transferDst = (1 << 15),
	midpointChromaSamples = (1 << 17),
	sampledImageYcbcrConversionLinearFilter = (1 << 18),
	sampledImageYcbcrConversionSeparateReconstructionFilter = (1 << 19),
	sampledImageYcbcrConversionChromaReconstructionExplicit = (1 << 20),
	sampledImageYcbcrConversionChromaReconstructionExplicitForceable = (1 << 21),
	disjoint = (1 << 22),
	cositedChromaSamples = (1 << 23),
	sampledImageFilterMinmax = (1 << 16),
	sampledImageFilterCubicIMG = (1 << 13),
	transferSrcKHR = (1 << 14),
	transferDstKHR = (1 << 15),
	sampledImageFilterMinmaxEXT = (1 << 16),
	accelerationStructureVertexBufferKHR = (1 << 29),
	midpointChromaSamplesKHR = (1 << 17),
	sampledImageYcbcrConversionLinearFilterKHR = (1 << 18),
	sampledImageYcbcrConversionSeparateReconstructionFilterKHR = (1 << 19),
	sampledImageYcbcrConversionChromaReconstructionExplicitKHR = (1 << 20),
	sampledImageYcbcrConversionChromaReconstructionExplicitForceableKHR = (1 << 21),
	disjointKHR = (1 << 22),
	cositedChromaSamplesKHR = (1 << 23),
	sampledImageFilterCubicEXT = (1 << 13),
	fragmentDensityMapEXT = (1 << 24),
	fragmentShadingRateAttachmentKHR = (1 << 30)
};
NYTL_FLAG_OPS(FormatFeatureBits)

enum class QueueBits : int32_t {
	graphics = (1 << 0),
	compute = (1 << 1),
	transfer = (1 << 2),
	sparseBinding = (1 << 3),
	eProtected = (1 << 4)
};
NYTL_FLAG_OPS(QueueBits)

enum class MemoryPropertyBits : int32_t {
	deviceLocal = (1 << 0),
	hostVisible = (1 << 1),
	hostCoherent = (1 << 2),
	hostCached = (1 << 3),
	lazilyAllocated = (1 << 4),
	eProtected = (1 << 5),
	deviceCoherentAMD = (1 << 6),
	deviceUncachedAMD = (1 << 7),
	rdmaCapableNV = (1 << 8)
};
NYTL_FLAG_OPS(MemoryPropertyBits)

enum class MemoryHeapBits : int32_t {
	deviceLocal = (1 << 0),
	multiInstance = (1 << 1),
	multiInstanceKHR = (1 << 1)
};
NYTL_FLAG_OPS(MemoryHeapBits)

enum class TessellationDomainOrigin : int32_t {
	upperLeft = 0,
	lowerLeft = 1,
	upperLeftKHR = 0,
	lowerLeftKHR = 1
};

enum class DeviceQueueCreateBits : int32_t {
	eProtected = (1 << 0)
};
NYTL_FLAG_OPS(DeviceQueueCreateBits)

enum class SamplerYcbcrModelConversion : int32_t {
	rgbIDentity = 0,
	ycbcrIDentity = 1,
	ycbcr709 = 2,
	ycbcr601 = 3,
	ycbcr2020 = 4,
	rgbIDentityKHR = 0,
	ycbcrIDentityKHR = 1,
	ycbcr709KHR = 2,
	ycbcr601KHR = 3,
	ycbcr2020KHR = 4
};

enum class SamplerYcbcrRange : int32_t {
	ituFull = 0,
	ituNarrow = 1,
	ituFullKHR = 0,
	ituNarrowKHR = 1
};

enum class ComponentSwizzle : int32_t {
	identity = 0,
	zero = 1,
	one = 2,
	r = 3,
	g = 4,
	b = 5,
	a = 6
};

enum class ChromaLocation : int32_t {
	cositedEven = 0,
	midpoint = 1,
	cositedEvenKHR = 0,
	midpointKHR = 1
};

enum class DescriptorUpdateTemplateType : int32_t {
	descriptorSet = 0,
	pushDescriptorsKHR = 1,
	descriptorSetKHR = 0
};

enum class DescriptorType : int32_t {
	sampler = 0,
	combinedImageSampler = 1,
	sampledImage = 2,
	storageImage = 3,
	uniformTexelBuffer = 4,
	storageTexelBuffer = 5,
	uniformBuffer = 6,
	storageBuffer = 7,
	uniformBufferDynamic = 8,
	storageBufferDynamic = 9,
	inputAttachment = 10,
	inlineUniformBlock = 1000138000,
	inlineUniformBlockEXT = 1000138000,
	accelerationStructureKHR = 1000150000,
	accelerationStructureNV = 1000165000,
	mutableVALVE = 1000351000
};

enum class ExternalMemoryHandleTypeBits : int32_t {
	opaqueFd = (1 << 0),
	opaqueWin32 = (1 << 1),
	opaqueWin32Kmt = (1 << 2),
	d3d11Texture = (1 << 3),
	d3d11TextureKmt = (1 << 4),
	d3d12Heap = (1 << 5),
	d3d12Resource = (1 << 6),
	opaqueFdKHR = (1 << 0),
	opaqueWin32KHR = (1 << 1),
	opaqueWin32KmtKHR = (1 << 2),
	d3d11TextureKHR = (1 << 3),
	d3d11TextureKmtKHR = (1 << 4),
	d3d12HeapKHR = (1 << 5),
	d3d12ResourceKHR = (1 << 6),
	dmaBufEXT = (1 << 9),
	hostAllocationEXT = (1 << 7),
	hostMappedForeignMemoryEXT = (1 << 8),
	zirconVmoFUCHSIA = (1 << 11),
	rdmaAddressNV = (1 << 12)
};
NYTL_FLAG_OPS(ExternalMemoryHandleTypeBits)

enum class ExternalMemoryFeatureBits : int32_t {
	dedicatedOnly = (1 << 0),
	exportable = (1 << 1),
	importable = (1 << 2),
	dedicatedOnlyKHR = (1 << 0),
	exportableKHR = (1 << 1),
	importableKHR = (1 << 2)
};
NYTL_FLAG_OPS(ExternalMemoryFeatureBits)

enum class ExternalFenceHandleTypeBits : int32_t {
	opaqueFd = (1 << 0),
	opaqueWin32 = (1 << 1),
	opaqueWin32Kmt = (1 << 2),
	syncFd = (1 << 3),
	opaqueFdKHR = (1 << 0),
	opaqueWin32KHR = (1 << 1),
	opaqueWin32KmtKHR = (1 << 2),
	syncFdKHR = (1 << 3)
};
NYTL_FLAG_OPS(ExternalFenceHandleTypeBits)

enum class ExternalFenceFeatureBits : int32_t {
	exportable = (1 << 0),
	importable = (1 << 1),
	exportableKHR = (1 << 0),
	importableKHR = (1 << 1)
};
NYTL_FLAG_OPS(ExternalFenceFeatureBits)

enum class FenceImportBits : int32_t {
	temporary = (1 << 0),
	temporaryKHR = (1 << 0)
};
NYTL_FLAG_OPS(FenceImportBits)

enum class SemaphoreImportBits : int32_t {
	temporary = (1 << 0),
	temporaryKHR = (1 << 0)
};
NYTL_FLAG_OPS(SemaphoreImportBits)

enum class ExternalSemaphoreHandleTypeBits : int32_t {
	opaqueFd = (1 << 0),
	opaqueWin32 = (1 << 1),
	opaqueWin32Kmt = (1 << 2),
	d3d12Fence = (1 << 3),
	d3d11Fence = (1 << 3),
	syncFd = (1 << 4),
	opaqueFdKHR = (1 << 0),
	opaqueWin32KHR = (1 << 1),
	opaqueWin32KmtKHR = (1 << 2),
	d3d12FenceKHR = (1 << 3),
	syncFdKHR = (1 << 4),
	zirconEventFUCHSIA = (1 << 7)
};
NYTL_FLAG_OPS(ExternalSemaphoreHandleTypeBits)

enum class ExternalSemaphoreFeatureBits : int32_t {
	exportable = (1 << 0),
	importable = (1 << 1),
	exportableKHR = (1 << 0),
	importableKHR = (1 << 1)
};
NYTL_FLAG_OPS(ExternalSemaphoreFeatureBits)

enum class DescriptorSetLayoutCreateBits : int32_t {
	updateAfterBindPool = (1 << 1),
	pushDescriptorKHR = (1 << 0),
	updateAfterBindPoolEXT = (1 << 1),
	hostOnlyPoolVALVE = (1 << 2)
};
NYTL_FLAG_OPS(DescriptorSetLayoutCreateBits)


enum class PipelineCacheHeaderVersion : int32_t {
	one = 1
};

enum class VendorId : int32_t {
	vIV = 65537,
	vSI = 65538,
	kazan = 65539,
	codeplay = 65540,
	mESA = 65541,
	pocl = 65542
};

enum class SparseMemoryBindBits : int32_t {
	metadata = (1 << 0)
};
NYTL_FLAG_OPS(SparseMemoryBindBits)

enum class FenceCreateBits : int32_t {
	signaled = (1 << 0)
};
NYTL_FLAG_OPS(FenceCreateBits)

enum class EventCreateBits : int32_t {
	deviceOnly = (1 << 0),
	deviceOnlyKHR = (1 << 0)
};
NYTL_FLAG_OPS(EventCreateBits)

enum class QueryPipelineStatisticBits : int32_t {
	inputAssemblyVertices = (1 << 0),
	inputAssemblyPrimitives = (1 << 1),
	vertexShaderInvocations = (1 << 2),
	geometryShaderInvocations = (1 << 3),
	geometryShaderPrimitives = (1 << 4),
	clippingInvocations = (1 << 5),
	clippingPrimitives = (1 << 6),
	fragmentShaderInvocations = (1 << 7),
	tessellationControlShaderPatches = (1 << 8),
	tessellationEvaluationShaderInvocations = (1 << 9),
	computeShaderInvocations = (1 << 10)
};
NYTL_FLAG_OPS(QueryPipelineStatisticBits)

enum class QueryType : int32_t {
	occlusion = 0,
	pipelineStatistics = 1,
	timestamp = 2,
	transformFeedbackStreamEXT = 1000028004,
	performanceQueryKHR = 1000116000,
	accelerationStructureCompactedSizeKHR = 1000150000,
	accelerationStructureSerializationSizeKHR = 1000150001,
	accelerationStructureCompactedSizeNV = 1000165000,
	performanceQueryINTEL = 1000210000
};

enum class QueryResultBits : int32_t {
	e64 = (1 << 0),
	wait = (1 << 1),
	withAvailability = (1 << 2),
	partial = (1 << 3)
};
NYTL_FLAG_OPS(QueryResultBits)

enum class ImageViewCreateBits : int32_t {
	fragmentDensityMapDynamicEXT = (1 << 0),
	fragmentDensityMapDeferredEXT = (1 << 1)
};
NYTL_FLAG_OPS(ImageViewCreateBits)

enum class ImageViewType : int32_t {
	e1d = 0,
	e2d = 1,
	e3d = 2,
	cube = 3,
	e1dArray = 4,
	e2dArray = 5,
	cubeArray = 6
};

enum class PipelineCacheCreateBits : int32_t {
	externallySynchronized = (1 << 0),
	externallySynchronizedEXT = (1 << 0)
};
NYTL_FLAG_OPS(PipelineCacheCreateBits)

enum class BlendFactor : int32_t {
	zero = 0,
	one = 1,
	srcColor = 2,
	oneMinusSrcColor = 3,
	dstColor = 4,
	oneMinusDstColor = 5,
	srcAlpha = 6,
	oneMinusSrcAlpha = 7,
	dstAlpha = 8,
	oneMinusDstAlpha = 9,
	constantColor = 10,
	oneMinusConstantColor = 11,
	constantAlpha = 12,
	oneMinusConstantAlpha = 13,
	srcAlphaSaturate = 14,
	src1Color = 15,
	oneMinusSrc1Color = 16,
	src1Alpha = 17,
	oneMinusSrc1Alpha = 18
};

enum class BlendOp : int32_t {
	add = 0,
	subtract = 1,
	reverseSubtract = 2,
	min = 3,
	max = 4,
	zeroEXT = 1000148000,
	srcEXT = 1000148001,
	dstEXT = 1000148002,
	srcOverEXT = 1000148003,
	dstOverEXT = 1000148004,
	srcInEXT = 1000148005,
	dstInEXT = 1000148006,
	srcOutEXT = 1000148007,
	dstOutEXT = 1000148008,
	srcAtopEXT = 1000148009,
	dstAtopEXT = 1000148010,
	xorEXT = 1000148011,
	multiplyEXT = 1000148012,
	screenEXT = 1000148013,
	overlayEXT = 1000148014,
	darkenEXT = 1000148015,
	lightenEXT = 1000148016,
	colordodgeEXT = 1000148017,
	colorburnEXT = 1000148018,
	hardlightEXT = 1000148019,
	softlightEXT = 1000148020,
	differenceEXT = 1000148021,
	exclusionEXT = 1000148022,
	invertEXT = 1000148023,
	invertRgbEXT = 1000148024,
	lineardodgeEXT = 1000148025,
	linearburnEXT = 1000148026,
	vividlightEXT = 1000148027,
	linearlightEXT = 1000148028,
	pinlightEXT = 1000148029,
	hardmixEXT = 1000148030,
	hslHueEXT = 1000148031,
	hslSaturationEXT = 1000148032,
	hslColorEXT = 1000148033,
	hslLuminosityEXT = 1000148034,
	plusEXT = 1000148035,
	plusClampedEXT = 1000148036,
	plusClampedAlphaEXT = 1000148037,
	plusDarkerEXT = 1000148038,
	minusEXT = 1000148039,
	minusClampedEXT = 1000148040,
	contrastEXT = 1000148041,
	invertOvgEXT = 1000148042,
	redEXT = 1000148043,
	greenEXT = 1000148044,
	blueEXT = 1000148045
};

enum class ColorComponentBits : int32_t {
	r = (1 << 0),
	g = (1 << 1),
	b = (1 << 2),
	a = (1 << 3)
};
NYTL_FLAG_OPS(ColorComponentBits)

enum class PipelineCreateBits : int32_t {
	disableOptimization = (1 << 0),
	allowDerivatives = (1 << 1),
	derivative = (1 << 2),
	viewIndexFromDeviceIndex = (1 << 3),
	dispatchBase = (1 << 4),
	failOnPipelineCompileRequired = (1 << 8),
	earlyReturnOnFailure = (1 << 9),
	renderingFragmentShadingRateAttachmentKHR = (1 << 21),
	rasterizationStateCreateFragmentShadingRateAttachmentKHR = (1 << 21),
	renderingFragmentDensityMapAttachmentEXT = (1 << 22),
	rasterizationStateCreateFragmentDensityMapAttachmentEXT = (1 << 22),
	viewIndexFromDeviceIndexKHR = (1 << 3),
	dispatchBaseKHR = 4,
	rayTracingNoNullAnyHitShadersKHR = (1 << 14),
	rayTracingNoNullClosestHitShadersKHR = (1 << 15),
	rayTracingNoNullMissShadersKHR = (1 << 16),
	rayTracingNoNullIntersectionShadersKHR = (1 << 17),
	rayTracingSkipTrianglesKHR = (1 << 12),
	rayTracingSkipAabbsKHR = (1 << 13),
	rayTracingShaderGroupHandleCaptureReplayKHR = (1 << 19),
	deferCompileNV = (1 << 5),
	captureStatisticsKHR = (1 << 6),
	captureInternalRepresentationsKHR = (1 << 7),
	indirectBindableNV = (1 << 18),
	libraryKHR = (1 << 11),
	failOnPipelineCompileRequiredEXT = (1 << 8),
	earlyReturnOnFailureEXT = (1 << 9),
	rayTracingAllowMotionNV = (1 << 20)
};
NYTL_FLAG_OPS(PipelineCreateBits)

enum class PipelineShaderStageCreateBits : int32_t {
	allowVaryingSubgroupSize = (1 << 0),
	requireFullSubgroups = (1 << 1),
	allowVaryingSubgroupSizeEXT = (1 << 0),
	requireFullSubgroupsEXT = (1 << 1)
};
NYTL_FLAG_OPS(PipelineShaderStageCreateBits)

enum class DynamicState : int32_t {
	viewport = 0,
	scissor = 1,
	lineWidth = 2,
	depthBias = 3,
	blendConstants = 4,
	depthBounds = 5,
	stencilCompareMask = 6,
	stencilWriteMask = 7,
	stencilReference = 8,
	cullMode = 1000267000,
	frontFace = 1000267001,
	primitiveTopology = 1000267002,
	viewportWithCount = 1000267003,
	scissorWithCount = 1000267004,
	vertexInputBindingStride = 1000267005,
	depthTestEnable = 1000267006,
	depthWriteEnable = 1000267007,
	depthCompareOp = 1000267008,
	depthBoundsTestEnable = 1000267009,
	stencilTestEnable = 1000267010,
	stencilOp = 1000267011,
	rasterizerDiscardEnable = 1000377001,
	depthBiasEnable = 1000377002,
	primitiveRestartEnable = 1000377004,
	viewportWScalingNV = 1000087000,
	discardRectangleEXT = 1000099000,
	sampleLocationsEXT = 1000143000,
	rayTracingPipelineStackSizeKHR = 1000347000,
	viewportShadingRatePaletteNV = 1000164004,
	viewportCoarseSampleOrderNV = 1000164006,
	exclusiveScissorNV = 1000205001,
	fragmentShadingRateKHR = 1000226000,
	lineStippleEXT = 1000259000,
	cullModeEXT = 1000267000,
	frontFaceEXT = 1000267001,
	primitiveTopologyEXT = 1000267002,
	viewportWithCountEXT = 1000267003,
	scissorWithCountEXT = 1000267004,
	vertexInputBindingStrideEXT = 1000267005,
	depthTestEnableEXT = 1000267006,
	depthWriteEnableEXT = 1000267007,
	depthCompareOpEXT = 1000267008,
	depthBoundsTestEnableEXT = 1000267009,
	stencilTestEnableEXT = 1000267010,
	stencilOpEXT = 1000267011,
	vertexInputEXT = 1000352000,
	patchControlPointsEXT = 1000377000,
	rasterizerDiscardEnableEXT = 1000377001,
	depthBiasEnableEXT = 1000377002,
	logicOpEXT = 1000377003,
	primitiveRestartEnableEXT = 1000377004,
	colorWriteEnableEXT = 1000381000
};

enum class VertexInputRate : int32_t {
	vertex = 0,
	instance = 1
};

enum class PolygonMode : int32_t {
	fill = 0,
	line = 1,
	point = 2,
	fillRectangleNV = 1000153000
};

enum class PipelineDepthStencilStateCreateBits : int32_t {
	rasterizationOrderAttachmentDepthAccessARM = (1 << 0),
	rasterizationOrderAttachmentStencilAccessARM = (1 << 1)
};
NYTL_FLAG_OPS(PipelineDepthStencilStateCreateBits)

enum class PipelineColorBlendStateCreateBits : int32_t {
	rasterizationOrderAttachmentAccessARM = (1 << 0)
};
NYTL_FLAG_OPS(PipelineColorBlendStateCreateBits)

enum class LogicOp : int32_t {
	clear = 0,
	eAnd = 1,
	andReverse = 2,
	copy = 3,
	andInverted = 4,
	noOp = 5,
	eXor = 6,
	eOr = 7,
	nor = 8,
	equivalent = 9,
	invert = 10,
	orReverse = 11,
	copyInverted = 12,
	orInverted = 13,
	nand = 14,
	set = 15
};

enum class BorderColor : int32_t {
	floatTransparentBlack = 0,
	intTransparentBlack = 1,
	floatOpaqueBlack = 2,
	intOpaqueBlack = 3,
	floatOpaqueWhite = 4,
	intOpaqueWhite = 5,
	floatCustomEXT = 1000287003,
	intCustomEXT = 1000287004
};

enum class SamplerAddressMode : int32_t {
	repeat = 0,
	mirroredRepeat = 1,
	clampToEdge = 2,
	clampToBorder = 3,
	mirrorClampToEdge = 4,
	mirrorClampToEdgeKHR = 4
};

enum class SamplerCreateBits : int32_t {
	subsampledEXT = (1 << 0),
	subsampledCoarseReconstructionEXT = (1 << 1)
};
NYTL_FLAG_OPS(SamplerCreateBits)

enum class SamplerMipmapMode : int32_t {
	nearest = 0,
	linear = 1
};

enum class DescriptorPoolCreateBits : int32_t {
	freeDescriptorSet = (1 << 0),
	updateAfterBind = (1 << 1),
	updateAfterBindEXT = (1 << 1),
	hostOnlyVALVE = (1 << 2)
};
NYTL_FLAG_OPS(DescriptorPoolCreateBits)

enum class FramebufferCreateBits : int32_t {
	imageless = (1 << 0),
	imagelessKHR = (1 << 0)
};
NYTL_FLAG_OPS(FramebufferCreateBits)

enum class CommandPoolCreateBits : int32_t {
	transient = (1 << 0),
	resetCommandBuffer = (1 << 1),
	eProtected = (1 << 2)
};
NYTL_FLAG_OPS(CommandPoolCreateBits)

enum class CommandPoolResetBits : int32_t {
	releaseResources = (1 << 0)
};
NYTL_FLAG_OPS(CommandPoolResetBits)

enum class CommandBufferLevel : int32_t {
	primary = 0,
	secondary = 1
};

enum class CommandBufferUsageBits : int32_t {
	oneTimeSubmit = (1 << 0),
	renderPassContinue = (1 << 1),
	simultaneousUse = (1 << 2)
};
NYTL_FLAG_OPS(CommandBufferUsageBits)

enum class QueryControlBits : int32_t {
	precise = (1 << 0)
};
NYTL_FLAG_OPS(QueryControlBits)

enum class CommandBufferResetBits : int32_t {
	releaseResources = (1 << 0)
};
NYTL_FLAG_OPS(CommandBufferResetBits)

enum class IndexType : int32_t {
	uint16 = 0,
	uint32 = 1,
	noneKHR = 1000165000,
	noneNV = 1000165000,
	uint8EXT = 1000265000
};


enum class SurfaceTransformBitsKHR : int32_t {
	identity = (1 << 0),
	rotate90 = (1 << 1),
	rotate180 = (1 << 2),
	rotate270 = (1 << 3),
	horizontalMirror = (1 << 4),
	horizontalMirrorRotate90 = (1 << 5),
	horizontalMirrorRotate180 = (1 << 6),
	horizontalMirrorRotate270 = (1 << 7),
	inherit = (1 << 8)
};
NYTL_FLAG_OPS(SurfaceTransformBitsKHR)

enum class PresentModeKHR : int32_t {
	immediate = 0,
	mailbox = 1,
	fifo = 2,
	fifoRelaxed = 3,
	sharedDemandRefresh = 1000111000,
	sharedContinuousRefresh = 1000111001
};

enum class ColorSpaceKHR : int32_t {
	srgbNonlinear = 0,
	displayP3NonlinearEXT = 1000104001,
	extendedSrgbLinearEXT = 1000104002,
	displayP3LinearEXT = 1000104003,
	dciP3NonlinearEXT = 1000104004,
	bt709LinearEXT = 1000104005,
	bt709NonlinearEXT = 1000104006,
	bt2020LinearEXT = 1000104007,
	hdr10St2084EXT = 1000104008,
	dolbyvisionEXT = 1000104009,
	hdr10HlgEXT = 1000104010,
	adobergbLinearEXT = 1000104011,
	adobergbNonlinearEXT = 1000104012,
	passThroughEXT = 1000104013,
	extendedSrgbNonlinearEXT = 1000104014,
	dciP3LinearEXT = 1000104003,
	displayNativeAMD = 1000213000
};

enum class CompositeAlphaBitsKHR : int32_t {
	opaque = (1 << 0),
	preMultiplied = (1 << 1),
	postMultiplied = (1 << 2),
	inherit = (1 << 3)
};
NYTL_FLAG_OPS(CompositeAlphaBitsKHR)


enum class SwapchainCreateBitsKHR : int32_t {
	splitInstanceBindRegions = (1 << 0),
	eProtected = (1 << 1),
	mutableFormat = (1 << 2)
};
NYTL_FLAG_OPS(SwapchainCreateBitsKHR)

enum class DeviceGroupPresentModeBitsKHR : int32_t {
	local = (1 << 0),
	remote = (1 << 1),
	sum = (1 << 2),
	localMultiDevice = (1 << 3)
};
NYTL_FLAG_OPS(DeviceGroupPresentModeBitsKHR)


enum class DisplayPlaneAlphaBitsKHR : int32_t {
	opaque = (1 << 0),
	global = (1 << 1),
	perPixel = (1 << 2),
	perPixelPremultiplied = (1 << 3)
};
NYTL_FLAG_OPS(DisplayPlaneAlphaBitsKHR)


enum class DebugReportBitsEXT : int32_t {
	information = (1 << 0),
	warning = (1 << 1),
	performanceWarning = (1 << 2),
	error = (1 << 3),
	debug = (1 << 4)
};
NYTL_FLAG_OPS(DebugReportBitsEXT)

enum class DebugReportObjectTypeEXT : int32_t {
	unknown = 0,
	instance = 1,
	physicalDevice = 2,
	device = 3,
	queue = 4,
	semaphore = 5,
	commandBuffer = 6,
	fence = 7,
	deviceMemory = 8,
	buffer = 9,
	image = 10,
	event = 11,
	queryPool = 12,
	bufferView = 13,
	imageView = 14,
	shaderModule = 15,
	pipelineCache = 16,
	pipelineLayout = 17,
	renderPass = 18,
	pipeline = 19,
	descriptorSetLayout = 20,
	sampler = 21,
	descriptorPool = 22,
	descriptorSet = 23,
	framebuffer = 24,
	commandPool = 25,
	surfaceKHR = 26,
	swapchainKHR = 27,
	debugReportCallbackEXT = 28,
	debugReport = 28,
	displayKHR = 29,
	displayModeKHR = 30,
	validationCacheEXT = 33,
	validationCache = 33,
	samplerYcbcrConversion = 1000156000,
	descriptorUpdateTemplate = 1000085000,
	descriptorUpdateTemplateKHR = 1000085000,
	accelerationStructureKHR = 1000150000,
	samplerYcbcrConversionKHR = 1000156000,
	accelerationStructureNV = 1000165000,
	bufferCollectionFUCHSIA = 1000366000
};


enum class RasterizationOrderAMD : int32_t {
	strict = 0,
	relaxed = 1
};


enum class ShaderInfoTypeAMD : int32_t {
	statistics = 0,
	binary = 1,
	disassembly = 2
};


enum class ExternalMemoryHandleTypeBitsNV : int32_t {
	opaqueWin32 = (1 << 0),
	opaqueWin32Kmt = (1 << 1),
	d3d11Image = (1 << 2),
	d3d11ImageKmt = (1 << 3)
};
NYTL_FLAG_OPS(ExternalMemoryHandleTypeBitsNV)

enum class ExternalMemoryFeatureBitsNV : int32_t {
	dedicatedOnly = (1 << 0),
	exportable = (1 << 1),
	importable = (1 << 2)
};
NYTL_FLAG_OPS(ExternalMemoryFeatureBitsNV)


enum class ValidationCheckEXT : int32_t {
	all = 0,
	shaders = 1
};


enum class ConditionalRenderingBitsEXT : int32_t {
	inverted = (1 << 0)
};
NYTL_FLAG_OPS(ConditionalRenderingBitsEXT)


enum class SurfaceCounterBitsEXT : int32_t {
	vblank = (1 << 0)
};
NYTL_FLAG_OPS(SurfaceCounterBitsEXT)


enum class DisplayPowerStateEXT : int32_t {
	off = 0,
	suspend = 1,
	on = 2
};

enum class DeviceEventTypeEXT : int32_t {
	displayHotplug = 0
};

enum class DisplayEventTypeEXT : int32_t {
	firstPixelOut = 0
};


enum class ViewportCoordinateSwizzleNV : int32_t {
	positiveX = 0,
	negativeX = 1,
	positiveY = 2,
	negativeY = 3,
	positiveZ = 4,
	negativeZ = 5,
	positiveW = 6,
	negativeW = 7
};


enum class DiscardRectangleModeEXT : int32_t {
	inclusive = 0,
	exclusive = 1
};


enum class ConservativeRasterizationModeEXT : int32_t {
	disabled = 0,
	overestimate = 1,
	underestimate = 2
};


enum class PerformanceCounterUnitKHR : int32_t {
	generic = 0,
	percentage = 1,
	nanoseconds = 2,
	bytes = 3,
	bytesPerSecond = 4,
	kelvin = 5,
	watts = 6,
	volts = 7,
	amps = 8,
	hertz = 9,
	cycles = 10
};

enum class PerformanceCounterScopeKHR : int32_t {
	commandBuffer = 0,
	renderPass = 1,
	command = 2,
	queryScopeCommandBuffer = 0,
	queryScopeRenderPass = 1,
	queryScopeCommand = 2
};

enum class PerformanceCounterStorageKHR : int32_t {
	int32 = 0,
	int64 = 1,
	uint32 = 2,
	uint64 = 3,
	float32 = 4,
	float64 = 5
};

enum class PerformanceCounterDescriptionBitsKHR : int32_t {
	performanceImpacting = (1 << 0),
	concurrentlyImpacted = (1 << 1)
};
NYTL_FLAG_OPS(PerformanceCounterDescriptionBitsKHR)

enum class AcquireProfilingLockBitsKHR : int32_t {

};
NYTL_FLAG_OPS(AcquireProfilingLockBitsKHR)


enum class DebugUtilsMessageSeverityBitsEXT : int32_t {
	verbose = (1 << 0),
	info = (1 << 4),
	warning = (1 << 8),
	error = (1 << 12)
};
NYTL_FLAG_OPS(DebugUtilsMessageSeverityBitsEXT)

enum class DebugUtilsMessageTypeBitsEXT : int32_t {
	general = (1 << 0),
	validation = (1 << 1),
	performance = (1 << 2)
};
NYTL_FLAG_OPS(DebugUtilsMessageTypeBitsEXT)


enum class BlendOverlapEXT : int32_t {
	uncorrelated = 0,
	disjoint = 1,
	conjoint = 2
};


enum class AccelerationStructureTypeKHR : int32_t {
	topLevel = 0,
	bottomLevel = 1,
	generic = 2,
	topLevelNV = 0,
	bottomLevelNV = 1
};

enum class BuildAccelerationStructureBitsKHR : int32_t {
	allowUpdate = (1 << 0),
	allowCompaction = (1 << 1),
	preferFastTrace = (1 << 2),
	preferFastBuild = (1 << 3),
	lowMemory = (1 << 4),
	allowUpdateNV = (1 << 0),
	allowCompactionNV = (1 << 1),
	preferFastTraceNV = (1 << 2),
	preferFastBuildNV = (1 << 3),
	lowMemoryNV = (1 << 4),
	motionNV = (1 << 5)
};
NYTL_FLAG_OPS(BuildAccelerationStructureBitsKHR)

enum class BuildAccelerationStructureModeKHR : int32_t {
	build = 0,
	update = 1
};

enum class GeometryTypeKHR : int32_t {
	triangles = 0,
	aabbs = 1,
	instances = 2,
	trianglesNV = 0,
	aabbsNV = 1
};

enum class GeometryBitsKHR : int32_t {
	opaque = (1 << 0),
	noDuplicateAnyHitInvocation = (1 << 1),
	opaqueNV = (1 << 0),
	noDuplicateAnyHitInvocationNV = (1 << 1)
};
NYTL_FLAG_OPS(GeometryBitsKHR)

enum class AccelerationStructureBuildTypeKHR : int32_t {
	host = 0,
	device = 1,
	hostOrDevice = 2
};

enum class GeometryInstanceBitsKHR : int32_t {
	triangleFacingCullDisable = (1 << 0),
	triangleFlipFacing = (1 << 1),
	forceOpaque = (1 << 2),
	forceNoOpaque = (1 << 3),
	triangleFrontCounterclockwise = (1 << 1),
	triangleCullDisableNV = (1 << 0),
	triangleFrontCounterclockwiseNV = (1 << 1),
	forceOpaqueNV = (1 << 2),
	forceNoOpaqueNV = (1 << 3)
};
NYTL_FLAG_OPS(GeometryInstanceBitsKHR)

enum class AccelerationStructureCreateBitsKHR : int32_t {
	deviceAddressCaptureReplay = (1 << 0),
	motionNV = (1 << 2)
};
NYTL_FLAG_OPS(AccelerationStructureCreateBitsKHR)

enum class CopyAccelerationStructureModeKHR : int32_t {
	clone = 0,
	compact = 1,
	serialize = 2,
	deserialize = 3,
	cloneNV = 0,
	compactNV = 1
};

enum class AccelerationStructureCompatibilityKHR : int32_t {
	compatible = 0,
	incompatible = 1
};


enum class RayTracingShaderGroupTypeKHR : int32_t {
	general = 0,
	trianglesHitGroup = 1,
	proceduralHitGroup = 2,
	generalNV = 0,
	trianglesHitGroupNV = 1,
	proceduralHitGroupNV = 2
};

enum class ShaderGroupShaderKHR : int32_t {
	general = 0,
	closestHit = 1,
	anyHit = 2,
	intersection = 3
};


enum class CoverageModulationModeNV : int32_t {
	none = 0,
	rgb = 1,
	alpha = 2,
	rgba = 3
};


enum class ValidationCacheHeaderVersionEXT : int32_t {
	one = 1
};


enum class ShadingRatePaletteEntryNV : int32_t {
	noInvocations = 0,
	e16InvocationsPerPixel = 1,
	e8InvocationsPerPixel = 2,
	e4InvocationsPerPixel = 3,
	e2InvocationsPerPixel = 4,
	e1InvocationPerPixel = 5,
	e1InvocationPer2x1Pixels = 6,
	e1InvocationPer1x2Pixels = 7,
	e1InvocationPer2x2Pixels = 8,
	e1InvocationPer4x2Pixels = 9,
	e1InvocationPer2x4Pixels = 10,
	e1InvocationPer4x4Pixels = 11
};

enum class CoarseSampleOrderTypeNV : int32_t {
	eDefault = 0,
	custom = 1,
	pixelMajor = 2,
	sampleMajor = 3
};


enum class AccelerationStructureMemoryRequirementsTypeNV : int32_t {
	object = 0,
	buildScratch = 1,
	updateScratch = 2
};


enum class PipelineCompilerControlBitsAMD : int32_t {

};
NYTL_FLAG_OPS(PipelineCompilerControlBitsAMD)


enum class TimeDomainEXT : int32_t {
	device = 0,
	clockMonotonic = 1,
	clockMonotonicRaw = 2,
	queryPerformanceCounter = 3
};


enum class QueueGlobalPriorityKHR : int32_t {
	low = 128,
	medium = 256,
	high = 512,
	realtime = 1024,
	lowEXT = 128,
	mediumEXT = 256,
	highEXT = 512,
	realtimeEXT = 1024
};


enum class MemoryOverallocationBehaviorAMD : int32_t {
	eDefault = 0,
	allowed = 1,
	disallowed = 2
};


enum class PerformanceConfigurationTypeINTEL : int32_t {
	commandQueueMetricsDiscoveryActivated = 0
};

enum class QueryPoolSamplingModeINTEL : int32_t {
	manual = 0
};

enum class PerformanceOverrideTypeINTEL : int32_t {
	nullHardware = 0,
	flushGpuCaches = 1
};

enum class PerformanceParameterTypeINTEL : int32_t {
	hwCountersSupported = 0,
	streamMarkerValidBits = 1
};

enum class PerformanceValueTypeINTEL : int32_t {
	uint32 = 0,
	uint64 = 1,
	eFloat = 2,
	eBool = 3,
	string = 4
};


enum class FragmentShadingRateCombinerOpKHR : int32_t {
	keep = 0,
	replace = 1,
	min = 2,
	max = 3,
	mul = 4
};


enum class ShaderCorePropertiesBitsAMD : int32_t {

};
NYTL_FLAG_OPS(ShaderCorePropertiesBitsAMD)


enum class ValidationFeatureEnableEXT : int32_t {
	gpuAssisted = 0,
	gpuAssistedReserveBindingSlot = 1,
	bestPractices = 2,
	debugPrintf = 3,
	synchronizationValidation = 4
};

enum class ValidationFeatureDisableEXT : int32_t {
	all = 0,
	shaders = 1,
	threadSafety = 2,
	apiParameters = 3,
	objectLifetimes = 4,
	coreChecks = 5,
	uniqueHandles = 6,
	shaderValidationCache = 7
};


enum class ComponentTypeNV : int32_t {
	float16 = 0,
	float32 = 1,
	float64 = 2,
	sint8 = 3,
	sint16 = 4,
	sint32 = 5,
	sint64 = 6,
	uint8 = 7,
	uint16 = 8,
	uint32 = 9,
	uint64 = 10
};

enum class ScopeNV : int32_t {
	device = 1,
	workgroup = 2,
	subgroup = 3,
	queueFamily = 5
};


enum class CoverageReductionModeNV : int32_t {
	merge = 0,
	truncate = 1
};


enum class ProvokingVertexModeEXT : int32_t {
	firstVertex = 0,
	lastVertex = 1
};



#ifdef VK_USE_PLATFORM_WIN32_KHR
enum class FullScreenExclusiveEXT : int32_t {
	eDefault = 0,
	allowed = 1,
	disallowed = 2,
	applicationControlled = 3
};


#endif //VK_USE_PLATFORM_WIN32_KHR

enum class LineRasterizationModeEXT : int32_t {
	eDefault = 0,
	rectangular = 1,
	bresenham = 2,
	rectangularSmooth = 3
};


enum class PipelineExecutableStatisticFormatKHR : int32_t {
	bool32 = 0,
	int64 = 1,
	uint64 = 2,
	float64 = 3
};


enum class IndirectStateBitsNV : int32_t {
	flagFrontface = (1 << 0)
};
NYTL_FLAG_OPS(IndirectStateBitsNV)

enum class IndirectCommandsTokenTypeNV : int32_t {
	shaderGroup = 0,
	stateFlags = 1,
	indexBuffer = 2,
	vertexBuffer = 3,
	pushConstant = 4,
	drawIndexed = 5,
	draw = 6,
	drawTasks = 7
};

enum class IndirectCommandsLayoutUsageBitsNV : int32_t {
	explicitPreprocess = (1 << 0),
	indexedSequences = (1 << 1),
	unorderedSequences = (1 << 2)
};
NYTL_FLAG_OPS(IndirectCommandsLayoutUsageBitsNV)


enum class DeviceMemoryReportEventTypeEXT : int32_t {
	allocate = 0,
	free = 1,
	import = 2,
	unimport = 3,
	allocationFailed = 4
};


enum class DeviceDiagnosticsConfigBitsNV : int32_t {
	enableShaderDebugInfo = (1 << 0),
	enableResourceTracking = (1 << 1),
	enableAutomaticCheckpoints = (1 << 2)
};
NYTL_FLAG_OPS(DeviceDiagnosticsConfigBitsNV)


enum class FragmentShadingRateTypeNV : int32_t {
	fragmentSize = 0,
	enums = 1
};

enum class FragmentShadingRateNV : int32_t {
	e1InvocationPerPixel = 0,
	e1InvocationPer1x2Pixels = 1,
	e1InvocationPer2x1Pixels = 4,
	e1InvocationPer2x2Pixels = 5,
	e1InvocationPer2x4Pixels = 6,
	e1InvocationPer4x2Pixels = 9,
	e1InvocationPer4x4Pixels = 10,
	e2InvocationsPerPixel = 11,
	e4InvocationsPerPixel = 12,
	e8InvocationsPerPixel = 13,
	e16InvocationsPerPixel = 14,
	noInvocations = 15
};


enum class AccelerationStructureMotionInstanceTypeNV : int32_t {
	eStatic = 0,
	matrixMotion = 1,
	srtMotion = 2
};



#ifdef VK_USE_PLATFORM_FUCHSIA
enum class ImageConstraintsInfoBitsFUCHSIA : int32_t {
	cpuReadRarely = 0,
	cpuReadOften = 1,
	cpuWriteRarely = 2,
	cpuWriteOften = 3,
	protectedOptional = 4
};
NYTL_FLAG_OPS(ImageConstraintsInfoBitsFUCHSIA)


#endif //VK_USE_PLATFORM_FUCHSIA


} // namespace vk

// The specification (vk.xml) itself is published under the following license:

// Copyright 2015-2022 The Khronos Group Inc.
// SPDX-License-Identifier: Apache-2.0 OR MIT
    