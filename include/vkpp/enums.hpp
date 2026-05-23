// Copyright (c) 2020 nyorain
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

// Automaitcally generated vulkan header, see nyorain/vkpp
// Do not edit manually, rather edit the codegen files.

#pragma once

#include <vkpp/fwd.hpp>
#include <vkpp/flags.hpp>

// Generated for vulkan version: 1.4.350

namespace vk {

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
	errorValidationFailed = -1000011001,
	errorOutOfPoolMemory = -1000069000,
	errorInvalidExternalHandle = -1000072003,
	errorInvalidOpaqueCaptureAddress = -1000257000,
	errorFragmentation = -1000161000,
	pipelineCompileRequired = 1000297000,
	errorNotPermitted = -1000174001,
	errorInvalidPipelineCacheData = -1000298000,
	errorNoPipelineMatch = -1000298001,
	errorSurfaceLostKHR = -1000000000,
	errorNativeWindowInUseKHR = -1000000001,
	suboptimalKHR = 1000001003,
	errorOutOfDateKHR = -1000001004,
	errorIncompatibleDisplayKHR = -1000003001,
	errorValidationFailedEXT = -1000011001,
	errorInvalidShaderNV = -1000012000,
	errorImageUsageNotSupportedKHR = -1000023000,
	errorVideoPictureLayoutNotSupportedKHR = -1000023001,
	errorVideoProfileOperationNotSupportedKHR = -1000023002,
	errorVideoProfileFormatNotSupportedKHR = -1000023003,
	errorVideoProfileCodecNotSupportedKHR = -1000023004,
	errorVideoStdVersionNotSupportedKHR = -1000023005,
	errorOutOfPoolMemoryKHR = -1000069000,
	errorInvalidExternalHandleKHR = -1000072003,
	errorInvalidDrmFormatModifierPlaneLayoutEXT = -1000158000,
	errorFragmentationEXT = -1000161000,
	errorNotPermittedEXT = -1000174001,
	errorNotPermittedKHR = -1000174001,
	errorPresentTimingQueueFullEXT = -1000208000,
	errorInvalidDeviceAddressEXT = -1000257000,
	errorFullScreenExclusiveModeLostEXT = -1000255000,
	errorInvalidOpaqueCaptureAddressKHR = -1000257000,
	threadIDleKHR = 1000268000,
	threadDoneKHR = 1000268001,
	operationDeferredKHR = 1000268002,
	operationNotDeferredKHR = 1000268003,
	pipelineCompileRequiredEXT = 1000297000,
	errorPipelineCompileRequiredEXT = 1000297000,
	errorInvalidVideoStdParametersKHR = -1000299000,
	errorCompressionExhaustedEXT = -1000338000,
	incompatibleShaderBinaryEXT = 1000482000,
	errorIncompatibleShaderBinaryEXT = 1000482000,
	pipelineBinaryMissingKHR = 1000483000,
	errorNotEnoughSpaceKHR = -1000483000
};

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
	bindBufferMemoryInfo = 1000157000,
	bindImageMemoryInfo = 1000157001,
	memoryDedicatedRequirements = 1000127000,
	memoryDedicatedAllocateInfo = 1000127001,
	memoryAllocateFlagsInfo = 1000060000,
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
	imageViewUsageCreateInfo = 1000117002,
	protectedSubmitInfo = 1000145000,
	physicalDeviceProtectedMemoryFeatures = 1000145001,
	physicalDeviceProtectedMemoryProperties = 1000145002,
	deviceQueueInfo2 = 1000145003,
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
	physicalDeviceSubgroupProperties = 1000094000,
	physicalDevice16bitStorageFeatures = 1000083000,
	physicalDeviceVariablePointersFeatures = 1000120000,
	physicalDeviceVariablePointerFeatures = 1000120000,
	descriptorUpdateTemplateCreateInfo = 1000085000,
	physicalDeviceMaintenance3Properties = 1000168000,
	descriptorSetLayoutSupport = 1000168001,
	samplerYcbcrConversionCreateInfo = 1000156000,
	samplerYcbcrConversionInfo = 1000156001,
	bindImagePlaneMemoryInfo = 1000156002,
	imagePlaneMemoryRequirementsInfo = 1000156003,
	physicalDeviceSamplerYcbcrConversionFeatures = 1000156004,
	samplerYcbcrConversionImageFormatProperties = 1000156005,
	deviceGroupRenderPassBeginInfo = 1000060003,
	physicalDevicePointClippingProperties = 1000117000,
	renderPassInputAttachmentAspectCreateInfo = 1000117001,
	pipelineTessellationDomainOriginStateCreateInfo = 1000117003,
	renderPassMultiviewCreateInfo = 1000053000,
	physicalDeviceMultiviewFeatures = 1000053001,
	physicalDeviceMultiviewProperties = 1000053002,
	physicalDeviceShaderDrawParametersFeatures = 1000063000,
	physicalDeviceShaderDrawParameterFeatures = 1000063000,
	physicalDeviceDriverProperties = 1000196000,
	physicalDeviceVulkan11Features = 49,
	physicalDeviceVulkan11Properties = 50,
	physicalDeviceVulkan12Features = 51,
	physicalDeviceVulkan12Properties = 52,
	imageFormatListCreateInfo = 1000147000,
	physicalDeviceVulkanMemoryModelFeatures = 1000211000,
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
	physicalDevice8bitStorageFeatures = 1000177000,
	physicalDeviceShaderAtomicInt64Features = 1000180000,
	physicalDeviceShaderFloat16Int8Features = 1000082000,
	physicalDeviceFloatControlsProperties = 1000197000,
	descriptorSetLayoutBindingFlagsCreateInfo = 1000161000,
	physicalDeviceDescriptorIndexingFeatures = 1000161001,
	physicalDeviceDescriptorIndexingProperties = 1000161002,
	descriptorSetVariableDescriptorCountAllocateInfo = 1000161003,
	descriptorSetVariableDescriptorCountLayoutSupport = 1000161004,
	physicalDeviceScalarBlockLayoutFeatures = 1000221000,
	physicalDeviceSamplerFilterMinmaxProperties = 1000130000,
	samplerReductionModeCreateInfo = 1000130001,
	physicalDeviceUniformBufferStandardLayoutFeatures = 1000253000,
	physicalDeviceShaderSubgroupExtendedTypesFeatures = 1000175000,
	attachmentDescription2 = 1000109000,
	attachmentReference2 = 1000109001,
	subpassDescription2 = 1000109002,
	subpassDependency2 = 1000109003,
	renderPassCreateInfo2 = 1000109004,
	subpassBeginInfo = 1000109005,
	subpassEndInfo = 1000109006,
	physicalDeviceDepthStencilResolveProperties = 1000199000,
	subpassDescriptionDepthStencilResolve = 1000199001,
	imageStencilUsageCreateInfo = 1000246000,
	physicalDeviceImagelessFramebufferFeatures = 1000108000,
	framebufferAttachmentsCreateInfo = 1000108001,
	framebufferAttachmentImageInfo = 1000108002,
	renderPassAttachmentBeginInfo = 1000108003,
	physicalDeviceSeparateDepthStencilLayoutsFeatures = 1000241000,
	attachmentReferenceStencilLayout = 1000241001,
	attachmentDescriptionStencilLayout = 1000241002,
	physicalDeviceVulkan13Features = 53,
	physicalDeviceVulkan13Properties = 54,
	physicalDeviceToolProperties = 1000245000,
	physicalDevicePrivateDataFeatures = 1000295000,
	devicePrivateDataCreateInfo = 1000295001,
	privateDataSlotCreateInfo = 1000295002,
	memoryBarrier2 = 1000314000,
	bufferMemoryBarrier2 = 1000314001,
	imageMemoryBarrier2 = 1000314002,
	dependencyInfo = 1000314003,
	submitInfo2 = 1000314004,
	semaphoreSubmitInfo = 1000314005,
	commandBufferSubmitInfo = 1000314006,
	physicalDeviceSynchronization2Features = 1000314007,
	copyBufferInfo2 = 1000337000,
	copyImageInfo2 = 1000337001,
	copyBufferToImageInfo2 = 1000337002,
	copyImageToBufferInfo2 = 1000337003,
	bufferCopy2 = 1000337006,
	imageCopy2 = 1000337007,
	bufferImageCopy2 = 1000337009,
	physicalDeviceTextureCompressionAstcHdrFeatures = 1000066000,
	formatProperties3 = 1000360000,
	physicalDeviceMaintenance4Features = 1000413000,
	physicalDeviceMaintenance4Properties = 1000413001,
	deviceBufferMemoryRequirements = 1000413002,
	deviceImageMemoryRequirements = 1000413003,
	pipelineCreationFeedbackCreateInfo = 1000192000,
	physicalDeviceShaderTerminateInvocationFeatures = 1000215000,
	physicalDeviceShaderDemoteToHelperInvocationFeatures = 1000276000,
	physicalDevicePipelineCreationCacheControlFeatures = 1000297000,
	physicalDeviceZeroInitializeWorkgroupMemoryFeatures = 1000325000,
	physicalDeviceImageRobustnessFeatures = 1000335000,
	physicalDeviceSubgroupSizeControlProperties = 1000225000,
	pipelineShaderStageRequiredSubgroupSizeCreateInfo = 1000225001,
	physicalDeviceSubgroupSizeControlFeatures = 1000225002,
	physicalDeviceInlineUniformBlockFeatures = 1000138000,
	physicalDeviceInlineUniformBlockProperties = 1000138001,
	writeDescriptorSetInlineUniformBlock = 1000138002,
	descriptorPoolInlineUniformBlockCreateInfo = 1000138003,
	physicalDeviceShaderIntegerDotProductFeatures = 1000280000,
	physicalDeviceShaderIntegerDotProductProperties = 1000280001,
	physicalDeviceTexelBufferAlignmentProperties = 1000281001,
	blitImageInfo2 = 1000337004,
	resolveImageInfo2 = 1000337005,
	imageBlit2 = 1000337008,
	imageResolve2 = 1000337010,
	renderingInfo = 1000044000,
	renderingAttachmentInfo = 1000044001,
	pipelineRenderingCreateInfo = 1000044002,
	physicalDeviceDynamicRenderingFeatures = 1000044003,
	commandBufferInheritanceRenderingInfo = 1000044004,
	physicalDeviceVulkan14Features = 55,
	physicalDeviceVulkan14Properties = 56,
	deviceQueueGlobalPriorityCreateInfo = 1000174000,
	physicalDeviceGlobalPriorityQueryFeatures = 1000388000,
	queueFamilyGlobalPriorityProperties = 1000388001,
	physicalDeviceIndexTypeUint8Features = 1000265000,
	memoryMapInfo = 1000271000,
	memoryUnmapInfo = 1000271001,
	physicalDeviceMaintenance5Features = 1000470000,
	physicalDeviceMaintenance5Properties = 1000470001,
	deviceImageSubresourceInfo = 1000470004,
	subresourceLayout2 = 1000338002,
	imageSubresource2 = 1000338003,
	bufferUsageFlags2CreateInfo = 1000470006,
	physicalDeviceMaintenance6Features = 1000545000,
	physicalDeviceMaintenance6Properties = 1000545001,
	bindMemoryStatus = 1000545002,
	physicalDeviceHostImageCopyFeatures = 1000270000,
	physicalDeviceHostImageCopyProperties = 1000270001,
	memoryToImageCopy = 1000270002,
	imageToMemoryCopy = 1000270003,
	copyImageToMemoryInfo = 1000270004,
	copyMemoryToImageInfo = 1000270005,
	hostImageLayoutTransitionInfo = 1000270006,
	copyImageToImageInfo = 1000270007,
	subresourceHostMemcpySize = 1000270008,
	hostImageCopyDevicePerformanceQuery = 1000270009,
	physicalDeviceShaderSubgroupRotateFeatures = 1000416000,
	physicalDeviceShaderFloatControls2Features = 1000528000,
	physicalDeviceShaderExpectAssumeFeatures = 1000544000,
	pipelineCreateFlags2CreateInfo = 1000470005,
	physicalDevicePushDescriptorProperties = 1000080000,
	bindDescriptorSetsInfo = 1000545003,
	pushConstantsInfo = 1000545004,
	pushDescriptorSetInfo = 1000545005,
	pushDescriptorSetWithTemplateInfo = 1000545006,
	physicalDevicePipelineProtectedAccessFeatures = 1000466000,
	pipelineRobustnessCreateInfo = 1000068000,
	physicalDevicePipelineRobustnessFeatures = 1000068001,
	physicalDevicePipelineRobustnessProperties = 1000068002,
	physicalDeviceLineRasterizationFeatures = 1000259000,
	pipelineRasterizationLineStateCreateInfo = 1000259001,
	physicalDeviceLineRasterizationProperties = 1000259002,
	physicalDeviceVertexAttributeDivisorProperties = 1000525000,
	pipelineVertexInputDivisorStateCreateInfo = 1000190001,
	physicalDeviceVertexAttributeDivisorFeatures = 1000190002,
	renderingAreaInfo = 1000470003,
	physicalDeviceDynamicRenderingLocalReadFeatures = 1000232000,
	renderingAttachmentLocationInfo = 1000232001,
	renderingInputAttachmentIndexInfo = 1000232002,
	physicalDeviceVulkanSc10Features = 1000298000,
	physicalDeviceVulkanSc10Properties = 1000298001,
	deviceObjectReservationCreateInfo = 1000298002,
	commandPoolMemoryReservationCreateInfo = 1000298003,
	commandPoolMemoryConsumption = 1000298004,
	pipelinePoolSize = 1000298005,
	faultData = 1000298007,
	faultCallbackInfo = 1000298008,
	pipelineOfflineCreateInfo = 1000298010,
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
	videoProfileInfoKHR = 1000023000,
	videoCapabilitiesKHR = 1000023001,
	videoPictureResourceInfoKHR = 1000023002,
	videoSessionMemoryRequirementsKHR = 1000023003,
	bindVideoSessionMemoryInfoKHR = 1000023004,
	videoSessionCreateInfoKHR = 1000023005,
	videoSessionParametersCreateInfoKHR = 1000023006,
	videoSessionParametersUpdateInfoKHR = 1000023007,
	videoBeginCodingInfoKHR = 1000023008,
	videoEndCodingInfoKHR = 1000023009,
	videoCodingControlInfoKHR = 1000023010,
	videoReferenceSlotInfoKHR = 1000023011,
	queueFamilyVideoPropertiesKHR = 1000023012,
	videoProfileListInfoKHR = 1000023013,
	physicalDeviceVideoFormatInfoKHR = 1000023014,
	videoFormatPropertiesKHR = 1000023015,
	queueFamilyQueryResultStatusPropertiesKHR = 1000023016,
	videoDecodeInfoKHR = 1000024000,
	videoDecodeCapabilitiesKHR = 1000024001,
	videoDecodeUsageInfoKHR = 1000024002,
	dedicatedAllocationImageCreateInfoNV = 1000026000,
	dedicatedAllocationBufferCreateInfoNV = 1000026001,
	dedicatedAllocationMemoryAllocateInfoNV = 1000026002,
	physicalDeviceTransformFeedbackFeaturesEXT = 1000028000,
	physicalDeviceTransformFeedbackPropertiesEXT = 1000028001,
	pipelineRasterizationStateStreamCreateInfoEXT = 1000028002,
	videoEncodeH264CapabilitiesKHR = 1000038000,
	videoEncodeH264SessionParametersCreateInfoKHR = 1000038001,
	videoEncodeH264SessionParametersAddInfoKHR = 1000038002,
	videoEncodeH264PictureInfoKHR = 1000038003,
	videoEncodeH264DpbSlotInfoKHR = 1000038004,
	videoEncodeH264NaluSliceInfoKHR = 1000038005,
	videoEncodeH264GopRemainingFrameInfoKHR = 1000038006,
	videoEncodeH264ProfileInfoKHR = 1000038007,
	videoEncodeH264RateControlInfoKHR = 1000038008,
	videoEncodeH264RateControlLayerInfoKHR = 1000038009,
	videoEncodeH264SessionCreateInfoKHR = 1000038010,
	videoEncodeH264QualityLevelPropertiesKHR = 1000038011,
	videoEncodeH264SessionParametersGetInfoKHR = 1000038012,
	videoEncodeH264SessionParametersFeedbackInfoKHR = 1000038013,
	videoEncodeH265CapabilitiesKHR = 1000039000,
	videoEncodeH265SessionParametersCreateInfoKHR = 1000039001,
	videoEncodeH265SessionParametersAddInfoKHR = 1000039002,
	videoEncodeH265PictureInfoKHR = 1000039003,
	videoEncodeH265DpbSlotInfoKHR = 1000039004,
	videoEncodeH265NaluSliceSegmentInfoKHR = 1000039005,
	videoEncodeH265GopRemainingFrameInfoKHR = 1000039006,
	videoEncodeH265ProfileInfoKHR = 1000039007,
	videoEncodeH265RateControlInfoKHR = 1000039009,
	videoEncodeH265RateControlLayerInfoKHR = 1000039010,
	videoEncodeH265SessionCreateInfoKHR = 1000039011,
	videoEncodeH265QualityLevelPropertiesKHR = 1000039012,
	videoEncodeH265SessionParametersGetInfoKHR = 1000039013,
	videoEncodeH265SessionParametersFeedbackInfoKHR = 1000039014,
	videoDecodeH264CapabilitiesKHR = 1000040000,
	videoDecodeH264PictureInfoKHR = 1000040001,
	videoDecodeH264ProfileInfoKHR = 1000040003,
	videoDecodeH264SessionParametersCreateInfoKHR = 1000040004,
	videoDecodeH264SessionParametersAddInfoKHR = 1000040005,
	videoDecodeH264DpbSlotInfoKHR = 1000040006,
	textureLodGatherFormatPropertiesAMD = 1000041000,
	renderingInfoKHR = 1000044000,
	renderingAttachmentInfoKHR = 1000044001,
	pipelineRenderingCreateInfoKHR = 1000044002,
	physicalDeviceDynamicRenderingFeaturesKHR = 1000044003,
	commandBufferInheritanceRenderingInfoKHR = 1000044004,
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
	pipelineRobustnessCreateInfoEXT = 1000068000,
	physicalDevicePipelineRobustnessFeaturesEXT = 1000068001,
	physicalDevicePipelineRobustnessPropertiesEXT = 1000068002,
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
	physicalDeviceRelaxedLineRasterizationFeaturesIMG = 1000110000,
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
	texelBufferDescriptorInfoEXT = 1000135000,
	imageDescriptorInfoEXT = 1000135001,
	resourceDescriptorInfoEXT = 1000135002,
	bindHeapInfoEXT = 1000135003,
	pushDataInfoEXT = 1000135004,
	descriptorSetAndBindingMappingEXT = 1000135005,
	shaderDescriptorSetAndBindingMappingInfoEXT = 1000135006,
	opaqueCaptureDataCreateInfoEXT = 1000135007,
	physicalDeviceDescriptorHeapPropertiesEXT = 1000135008,
	physicalDeviceDescriptorHeapFeaturesEXT = 1000135009,
	commandBufferInheritanceDescriptorHeapInfoEXT = 1000135010,
	samplerCustomBorderColorIndexCreateInfoEXT = 1000135011,
	indirectCommandsLayoutPushDataTokenNV = 1000135012,
	subsampledImageFormatPropertiesEXT = 1000135013,
	physicalDeviceDescriptorHeapTensorPropertiesARM = 1000135014,
	attachmentSampleCountInfoAMD = 1000044008,
	physicalDeviceInlineUniformBlockFeaturesEXT = 1000138000,
	physicalDeviceInlineUniformBlockPropertiesEXT = 1000138001,
	writeDescriptorSetInlineUniformBlockEXT = 1000138002,
	descriptorPoolInlineUniformBlockCreateInfoEXT = 1000138003,
	physicalDeviceShaderBfloat16FeaturesKHR = 1000141000,
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
	attachmentSampleCountInfoNV = 1000044008,
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
	physicalDeviceCooperativeMatrixConversionFeaturesQCOM = 1000172000,
	deviceQueueGlobalPriorityCreateInfoEXT = 1000174000,
	physicalDeviceShaderSubgroupExtendedTypesFeaturesKHR = 1000175000,
	physicalDevice8bitStorageFeaturesKHR = 1000177000,
	importMemoryHostPointerInfoEXT = 1000178000,
	memoryHostPointerPropertiesEXT = 1000178001,
	physicalDeviceExternalMemoryHostPropertiesEXT = 1000178002,
	physicalDeviceShaderAtomicInt64FeaturesKHR = 1000180000,
	physicalDeviceShaderClockFeaturesKHR = 1000181000,
	pipelineCompilerControlCreateInfoAMD = 1000183000,
	physicalDeviceShaderCorePropertiesAMD = 1000185000,
	videoDecodeH265CapabilitiesKHR = 1000187000,
	videoDecodeH265SessionParametersCreateInfoKHR = 1000187001,
	videoDecodeH265SessionParametersAddInfoKHR = 1000187002,
	videoDecodeH265ProfileInfoKHR = 1000187003,
	videoDecodeH265PictureInfoKHR = 1000187004,
	videoDecodeH265DpbSlotInfoKHR = 1000187005,
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
	physicalDeviceMeshShaderFeaturesNV = 1000202000,
	physicalDeviceMeshShaderPropertiesNV = 1000202001,
	physicalDeviceShaderImageFootprintFeaturesNV = 1000204000,
	pipelineViewportExclusiveScissorStateCreateInfoNV = 1000205000,
	physicalDeviceExclusiveScissorFeaturesNV = 1000205002,
	checkpointDataNV = 1000206000,
	queueFamilyCheckpointPropertiesNV = 1000206001,
	queueFamilyCheckpointProperties2NV = 1000314008,
	checkpointData2NV = 1000314009,
	physicalDeviceTimelineSemaphoreFeaturesKHR = 1000207000,
	physicalDeviceTimelineSemaphorePropertiesKHR = 1000207001,
	semaphoreTypeCreateInfoKHR = 1000207002,
	timelineSemaphoreSubmitInfoKHR = 1000207003,
	semaphoreWaitInfoKHR = 1000207004,
	semaphoreSignalInfoKHR = 1000207005,
	physicalDevicePresentTimingFeaturesEXT = 1000208000,
	swapchainTimingPropertiesEXT = 1000208001,
	swapchainTimeDomainPropertiesEXT = 1000208002,
	presentTimingsInfoEXT = 1000208003,
	presentTimingInfoEXT = 1000208004,
	pastPresentationTimingInfoEXT = 1000208005,
	pastPresentationTimingPropertiesEXT = 1000208006,
	pastPresentationTimingEXT = 1000208007,
	presentTimingSurfaceCapabilitiesEXT = 1000208008,
	swapchainCalibratedTimestampInfoEXT = 1000208009,
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
	renderingFragmentDensityMapAttachmentInfoEXT = 1000044007,
	physicalDeviceScalarBlockLayoutFeaturesEXT = 1000221000,
	physicalDeviceSubgroupSizeControlPropertiesEXT = 1000225000,
	pipelineShaderStageRequiredSubgroupSizeCreateInfoEXT = 1000225001,
	physicalDeviceSubgroupSizeControlFeaturesEXT = 1000225002,
	fragmentShadingRateAttachmentInfoKHR = 1000226000,
	pipelineFragmentShadingRateStateCreateInfoKHR = 1000226001,
	physicalDeviceFragmentShadingRatePropertiesKHR = 1000226002,
	physicalDeviceFragmentShadingRateFeaturesKHR = 1000226003,
	physicalDeviceFragmentShadingRateKHR = 1000226004,
	renderingFragmentShadingRateAttachmentInfoKHR = 1000044006,
	physicalDeviceShaderCoreProperties2AMD = 1000227000,
	physicalDeviceCoherentMemoryFeaturesAMD = 1000229000,
	physicalDeviceShaderConstantDataFeaturesKHR = 1000231000,
	physicalDeviceDynamicRenderingLocalReadFeaturesKHR = 1000232000,
	renderingAttachmentLocationInfoKHR = 1000232001,
	renderingInputAttachmentIndexInfoKHR = 1000232002,
	physicalDeviceShaderAbortFeaturesKHR = 1000233000,
	deviceFaultShaderAbortMessageInfoKHR = 1000233001,
	physicalDeviceShaderAbortPropertiesKHR = 1000233002,
	physicalDeviceShaderImageAtomicInt64FeaturesEXT = 1000234000,
	physicalDeviceShaderQuadControlFeaturesKHR = 1000235000,
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
	physicalDeviceHostImageCopyFeaturesEXT = 1000270000,
	physicalDeviceHostImageCopyPropertiesEXT = 1000270001,
	memoryToImageCopyEXT = 1000270002,
	imageToMemoryCopyEXT = 1000270003,
	copyImageToMemoryInfoEXT = 1000270004,
	copyMemoryToImageInfoEXT = 1000270005,
	hostImageLayoutTransitionInfoEXT = 1000270006,
	copyImageToImageInfoEXT = 1000270007,
	subresourceHostMemcpySizeEXT = 1000270008,
	hostImageCopyDevicePerformanceQueryEXT = 1000270009,
	memoryMapInfoKHR = 1000271000,
	memoryUnmapInfoKHR = 1000271001,
	physicalDeviceMapMemoryPlacedFeaturesEXT = 1000272000,
	physicalDeviceMapMemoryPlacedPropertiesEXT = 1000272001,
	memoryMapPlacedInfoEXT = 1000272002,
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
	physicalDeviceDepthBiasControlFeaturesEXT = 1000283000,
	depthBiasInfoEXT = 1000283001,
	depthBiasRepresentationInfoEXT = 1000283002,
	physicalDeviceDeviceMemoryReportFeaturesEXT = 1000284000,
	deviceDeviceMemoryReportCreateInfoEXT = 1000284001,
	deviceMemoryReportCallbackDataEXT = 1000284002,
	samplerCustomBorderColorCreateInfoEXT = 1000287000,
	physicalDeviceCustomBorderColorPropertiesEXT = 1000287001,
	physicalDeviceCustomBorderColorFeaturesEXT = 1000287002,
	physicalDeviceTextureCompressionAstc3dFeaturesEXT = 1000288000,
	pipelineLibraryCreateInfoKHR = 1000290000,
	physicalDevicePresentBarrierFeaturesNV = 1000292000,
	surfaceCapabilitiesPresentBarrierNV = 1000292001,
	swapchainPresentBarrierCreateInfoNV = 1000292002,
	presentIDKHR = 1000294000,
	physicalDevicePresentIDFeaturesKHR = 1000294001,
	physicalDevicePrivateDataFeaturesEXT = 1000295000,
	devicePrivateDataCreateInfoEXT = 1000295001,
	privateDataSlotCreateInfoEXT = 1000295002,
	physicalDevicePipelineCreationCacheControlFeaturesEXT = 1000297000,
	videoEncodeInfoKHR = 1000299000,
	videoEncodeRateControlInfoKHR = 1000299001,
	videoEncodeRateControlLayerInfoKHR = 1000299002,
	videoEncodeCapabilitiesKHR = 1000299003,
	videoEncodeUsageInfoKHR = 1000299004,
	queryPoolVideoEncodeFeedbackCreateInfoKHR = 1000299005,
	physicalDeviceVideoEncodeQualityLevelInfoKHR = 1000299006,
	videoEncodeQualityLevelPropertiesKHR = 1000299007,
	videoEncodeQualityLevelInfoKHR = 1000299008,
	videoEncodeSessionParametersGetInfoKHR = 1000299009,
	videoEncodeSessionParametersFeedbackInfoKHR = 1000299010,
	physicalDeviceDiagnosticsConfigFeaturesNV = 1000300000,
	deviceDiagnosticsConfigCreateInfoNV = 1000300001,
	perfHintInfoQCOM = 1000302000,
	physicalDeviceQueuePerfHintFeaturesQCOM = 1000302001,
	physicalDeviceQueuePerfHintPropertiesQCOM = 1000302002,
	physicalDeviceTileShadingFeaturesQCOM = 1000309000,
	physicalDeviceTileShadingPropertiesQCOM = 1000309001,
	renderPassTileShadingCreateInfoQCOM = 1000309002,
	perTileBeginInfoQCOM = 1000309003,
	perTileEndInfoQCOM = 1000309004,
	dispatchTileInfoQCOM = 1000309005,
	queryLowLatencySupportNV = 1000310000,
	memoryBarrier2KHR = 1000314000,
	bufferMemoryBarrier2KHR = 1000314001,
	imageMemoryBarrier2KHR = 1000314002,
	dependencyInfoKHR = 1000314003,
	submitInfo2KHR = 1000314004,
	semaphoreSubmitInfoKHR = 1000314005,
	commandBufferSubmitInfoKHR = 1000314006,
	physicalDeviceSynchronization2FeaturesKHR = 1000314007,
	physicalDeviceDescriptorBufferPropertiesEXT = 1000316000,
	physicalDeviceDescriptorBufferDensityMapPropertiesEXT = 1000316001,
	physicalDeviceDescriptorBufferFeaturesEXT = 1000316002,
	descriptorAddressInfoEXT = 1000316003,
	descriptorGetInfoEXT = 1000316004,
	bufferCaptureDescriptorDataInfoEXT = 1000316005,
	imageCaptureDescriptorDataInfoEXT = 1000316006,
	imageViewCaptureDescriptorDataInfoEXT = 1000316007,
	samplerCaptureDescriptorDataInfoEXT = 1000316008,
	opaqueCaptureDescriptorDataCreateInfoEXT = 1000316010,
	descriptorBufferBindingInfoEXT = 1000316011,
	descriptorBufferBindingPushDescriptorBufferHandleEXT = 1000316012,
	accelerationStructureCaptureDescriptorDataInfoEXT = 1000316009,
	deviceMemoryCopyKHR = 1000318000,
	copyDeviceMemoryInfoKHR = 1000318001,
	deviceMemoryImageCopyKHR = 1000318002,
	copyDeviceMemoryImageInfoKHR = 1000318003,
	memoryRangeBarriersInfoKHR = 1000318004,
	memoryRangeBarrierKHR = 1000318005,
	physicalDeviceDeviceAddressCommandsFeaturesKHR = 1000318006,
	bindIndexBuffer3InfoKHR = 1000318007,
	bindVertexBuffer3InfoKHR = 1000318008,
	drawIndirect2InfoKHR = 1000318009,
	drawIndirectCount2InfoKHR = 1000318010,
	dispatchIndirect2InfoKHR = 1000318011,
	conditionalRenderingBeginInfo2EXT = 1000318012,
	bindTransformFeedbackBuffer2InfoEXT = 1000318013,
	memoryMarkerInfoAMD = 1000318014,
	accelerationStructureCreateInfo2KHR = 1000318015,
	physicalDeviceGraphicsPipelineLibraryFeaturesEXT = 1000320000,
	physicalDeviceGraphicsPipelineLibraryPropertiesEXT = 1000320001,
	graphicsPipelineLibraryCreateInfoEXT = 1000320002,
	physicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD = 1000321000,
	physicalDeviceFragmentShaderBarycentricFeaturesKHR = 1000203000,
	physicalDeviceFragmentShaderBarycentricPropertiesKHR = 1000322000,
	physicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR = 1000323000,
	physicalDeviceZeroInitializeWorkgroupMemoryFeaturesKHR = 1000325000,
	physicalDeviceFragmentShadingRateEnumsPropertiesNV = 1000326000,
	physicalDeviceFragmentShadingRateEnumsFeaturesNV = 1000326001,
	pipelineFragmentShadingRateEnumStateCreateInfoNV = 1000326002,
	accelerationStructureGeometryMotionTrianglesDataNV = 1000327000,
	physicalDeviceRayTracingMotionBlurFeaturesNV = 1000327001,
	accelerationStructureMotionInfoNV = 1000327002,
	physicalDeviceMeshShaderFeaturesEXT = 1000328000,
	physicalDeviceMeshShaderPropertiesEXT = 1000328001,
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
	physicalDeviceImageCompressionControlFeaturesEXT = 1000338000,
	imageCompressionControlEXT = 1000338001,
	subresourceLayout2EXT = 1000338002,
	imageSubresource2EXT = 1000338003,
	imageCompressionPropertiesEXT = 1000338004,
	physicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT = 1000339000,
	physicalDevice4444FormatsFeaturesEXT = 1000340000,
	physicalDeviceFaultFeaturesEXT = 1000341000,
	deviceFaultCountsEXT = 1000341001,
	deviceFaultInfoEXT = 1000341002,
	physicalDeviceRgba10x6FormatsFeaturesEXT = 1000344000,
	directfbSurfaceCreateInfoEXT = 1000346000,
	physicalDeviceVertexInputDynamicStateFeaturesEXT = 1000352000,
	vertexInputBindingDescription2EXT = 1000352001,
	vertexInputAttributeDescription2EXT = 1000352002,
	physicalDeviceDrmPropertiesEXT = 1000353000,
	physicalDeviceAddressBindingReportFeaturesEXT = 1000354000,
	deviceAddressBindingCallbackDataEXT = 1000354001,
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
	pipelinePropertiesIDentifierEXT = 1000372000,
	physicalDevicePipelinePropertiesFeaturesEXT = 1000372001,
	pipelineInfoEXT = 1000269001,
	physicalDeviceFrameBoundaryFeaturesEXT = 1000375000,
	frameBoundaryEXT = 1000375001,
	physicalDeviceMultisampledRenderToSingleSampledFeaturesEXT = 1000376000,
	subpassResolvePerformanceQueryEXT = 1000376001,
	multisampledRenderToSingleSampledInfoEXT = 1000376002,
	physicalDeviceExtendedDynamicState2FeaturesEXT = 1000377000,
	screenSurfaceCreateInfoQNX = 1000378000,
	physicalDeviceColorWriteEnableFeaturesEXT = 1000381000,
	pipelineColorWriteCreateInfoEXT = 1000381001,
	physicalDevicePrimitivesGeneratedQueryFeaturesEXT = 1000382000,
	physicalDeviceRayTracingMaintenance1FeaturesKHR = 1000386000,
	physicalDeviceShaderUntypedPointersFeaturesKHR = 1000387000,
	physicalDeviceGlobalPriorityQueryFeaturesEXT = 1000388000,
	queueFamilyGlobalPriorityPropertiesEXT = 1000388001,
	physicalDeviceVideoEncodeRgbConversionFeaturesVALVE = 1000390000,
	videoEncodeRgbConversionCapabilitiesVALVE = 1000390001,
	videoEncodeProfileRgbConversionInfoVALVE = 1000390002,
	videoEncodeSessionRgbConversionCreateInfoVALVE = 1000390003,
	physicalDeviceImageViewMinLodFeaturesEXT = 1000391000,
	imageViewMinLodCreateInfoEXT = 1000391001,
	physicalDeviceMultiDrawFeaturesEXT = 1000392000,
	physicalDeviceMultiDrawPropertiesEXT = 1000392001,
	physicalDeviceImage2dViewOf3dFeaturesEXT = 1000393000,
	physicalDeviceShaderTileImageFeaturesEXT = 1000395000,
	physicalDeviceShaderTileImagePropertiesEXT = 1000395001,
	micromapBuildInfoEXT = 1000396000,
	micromapVersionInfoEXT = 1000396001,
	copyMicromapInfoEXT = 1000396002,
	copyMicromapToMemoryInfoEXT = 1000396003,
	copyMemoryToMicromapInfoEXT = 1000396004,
	physicalDeviceOpacityMicromapFeaturesEXT = 1000396005,
	physicalDeviceOpacityMicromapPropertiesEXT = 1000396006,
	micromapCreateInfoEXT = 1000396007,
	micromapBuildSizesInfoEXT = 1000396008,
	accelerationStructureTrianglesOpacityMicromapEXT = 1000396009,
	physicalDeviceClusterCullingShaderFeaturesHUAWEI = 1000404000,
	physicalDeviceClusterCullingShaderPropertiesHUAWEI = 1000404001,
	physicalDeviceClusterCullingShaderVrsFeaturesHUAWEI = 1000404002,
	physicalDeviceBorderColorSwizzleFeaturesEXT = 1000411000,
	samplerBorderColorComponentMappingCreateInfoEXT = 1000411001,
	physicalDevicePageableDeviceLocalMemoryFeaturesEXT = 1000412000,
	physicalDeviceMaintenance4FeaturesKHR = 1000413000,
	physicalDeviceMaintenance4PropertiesKHR = 1000413001,
	deviceBufferMemoryRequirementsKHR = 1000413002,
	deviceImageMemoryRequirementsKHR = 1000413003,
	physicalDeviceShaderCorePropertiesARM = 1000415000,
	physicalDeviceShaderSubgroupRotateFeaturesKHR = 1000416000,
	deviceQueueShaderCoreControlCreateInfoARM = 1000417000,
	physicalDeviceSchedulingControlsFeaturesARM = 1000417001,
	physicalDeviceSchedulingControlsPropertiesARM = 1000417002,
	dispatchParametersARM = 1000417003,
	physicalDeviceSchedulingControlsDispatchParametersPropertiesARM = 1000417004,
	physicalDeviceImageSlicedViewOf3dFeaturesEXT = 1000418000,
	imageViewSlicedCreateInfoEXT = 1000418001,
	physicalDeviceDescriptorSetHostMappingFeaturesVALVE = 1000420000,
	descriptorSetBindingReferenceVALVE = 1000420001,
	descriptorSetLayoutHostMappingInfoVALVE = 1000420002,
	physicalDeviceNonSeamlessCubeMapFeaturesEXT = 1000422000,
	physicalDeviceRenderPassStripedFeaturesARM = 1000424000,
	physicalDeviceRenderPassStripedPropertiesARM = 1000424001,
	renderPassStripeBeginInfoARM = 1000424002,
	renderPassStripeInfoARM = 1000424003,
	renderPassStripeSubmitInfoARM = 1000424004,
	physicalDeviceCopyMemoryIndirectFeaturesNV = 1000426000,
	physicalDeviceDeviceGeneratedCommandsComputeFeaturesNV = 1000428000,
	computePipelineIndirectBufferInfoNV = 1000428001,
	pipelineIndirectDeviceAddressInfoNV = 1000428002,
	physicalDeviceRayTracingLinearSweptSpheresFeaturesNV = 1000429008,
	accelerationStructureGeometryLinearSweptSpheresDataNV = 1000429009,
	accelerationStructureGeometrySpheresDataNV = 1000429010,
	physicalDeviceLinearColorAttachmentFeaturesNV = 1000430000,
	physicalDeviceShaderMaximalReconvergenceFeaturesKHR = 1000434000,
	physicalDeviceImageCompressionControlSwapchainFeaturesEXT = 1000437000,
	physicalDeviceImageProcessingFeaturesQCOM = 1000440000,
	physicalDeviceImageProcessingPropertiesQCOM = 1000440001,
	imageViewSampleWeightCreateInfoQCOM = 1000440002,
	physicalDeviceNestedCommandBufferFeaturesEXT = 1000451000,
	physicalDeviceNestedCommandBufferPropertiesEXT = 1000451001,
	nativeBufferUsageOHOS = 1000452000,
	nativeBufferPropertiesOHOS = 1000452001,
	nativeBufferFormatPropertiesOHOS = 1000452002,
	importNativeBufferInfoOHOS = 1000452003,
	memoryGetNativeBufferInfoOHOS = 1000452004,
	externalFormatOHOS = 1000452005,
	externalMemoryAcquireUnmodifiedEXT = 1000453000,
	physicalDeviceExtendedDynamicState3FeaturesEXT = 1000455000,
	physicalDeviceExtendedDynamicState3PropertiesEXT = 1000455001,
	physicalDeviceSubpassMergeFeedbackFeaturesEXT = 1000458000,
	renderPassCreationControlEXT = 1000458001,
	renderPassCreationFeedbackCreateInfoEXT = 1000458002,
	renderPassSubpassFeedbackCreateInfoEXT = 1000458003,
	directDriverLoadingInfoLUNARG = 1000459000,
	directDriverLoadingListLUNARG = 1000459001,
	tensorCreateInfoARM = 1000460000,
	tensorViewCreateInfoARM = 1000460001,
	bindTensorMemoryInfoARM = 1000460002,
	writeDescriptorSetTensorARM = 1000460003,
	physicalDeviceTensorPropertiesARM = 1000460004,
	tensorFormatPropertiesARM = 1000460005,
	tensorDescriptionARM = 1000460006,
	tensorMemoryRequirementsInfoARM = 1000460007,
	tensorMemoryBarrierARM = 1000460008,
	physicalDeviceTensorFeaturesARM = 1000460009,
	deviceTensorMemoryRequirementsARM = 1000460010,
	copyTensorInfoARM = 1000460011,
	tensorCopyARM = 1000460012,
	tensorDependencyInfoARM = 1000460013,
	memoryDedicatedAllocateInfoTensorARM = 1000460014,
	physicalDeviceExternalTensorInfoARM = 1000460015,
	externalTensorPropertiesARM = 1000460016,
	externalMemoryTensorCreateInfoARM = 1000460017,
	physicalDeviceDescriptorBufferTensorFeaturesARM = 1000460018,
	physicalDeviceDescriptorBufferTensorPropertiesARM = 1000460019,
	descriptorGetTensorInfoARM = 1000460020,
	tensorCaptureDescriptorDataInfoARM = 1000460021,
	tensorViewCaptureDescriptorDataInfoARM = 1000460022,
	frameBoundaryTensorsARM = 1000460023,
	physicalDeviceShaderModuleIDentifierFeaturesEXT = 1000462000,
	physicalDeviceShaderModuleIDentifierPropertiesEXT = 1000462001,
	pipelineShaderStageModuleIDentifierCreateInfoEXT = 1000462002,
	shaderModuleIDentifierEXT = 1000462003,
	physicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT = 1000342000,
	physicalDeviceOpticalFlowFeaturesNV = 1000464000,
	physicalDeviceOpticalFlowPropertiesNV = 1000464001,
	opticalFlowImageFormatInfoNV = 1000464002,
	opticalFlowImageFormatPropertiesNV = 1000464003,
	opticalFlowSessionCreateInfoNV = 1000464004,
	opticalFlowExecuteInfoNV = 1000464005,
	opticalFlowSessionCreatePrivateDataInfoNV = 1000464010,
	physicalDeviceLegacyDitheringFeaturesEXT = 1000465000,
	physicalDevicePipelineProtectedAccessFeaturesEXT = 1000466000,
	physicalDeviceMaintenance5FeaturesKHR = 1000470000,
	physicalDeviceMaintenance5PropertiesKHR = 1000470001,
	renderingAreaInfoKHR = 1000470003,
	deviceImageSubresourceInfoKHR = 1000470004,
	subresourceLayout2KHR = 1000338002,
	imageSubresource2KHR = 1000338003,
	pipelineCreateFlags2CreateInfoKHR = 1000470005,
	bufferUsageFlags2CreateInfoKHR = 1000470006,
	physicalDeviceAntiLagFeaturesAMD = 1000476000,
	antiLagDataAMD = 1000476001,
	antiLagPresentationInfoAMD = 1000476002,
	surfaceCapabilitiesPresentID2KHR = 1000479000,
	presentID2KHR = 1000479001,
	physicalDevicePresentID2FeaturesKHR = 1000479002,
	surfaceCapabilitiesPresentWait2KHR = 1000480000,
	physicalDevicePresentWait2FeaturesKHR = 1000480001,
	presentWait2InfoKHR = 1000480002,
	physicalDeviceRayTracingPositionFetchFeaturesKHR = 1000481000,
	physicalDeviceShaderObjectFeaturesEXT = 1000482000,
	physicalDeviceShaderObjectPropertiesEXT = 1000482001,
	shaderCreateInfoEXT = 1000482002,
	shaderRequiredSubgroupSizeCreateInfoEXT = 1000225001,
	physicalDevicePipelineBinaryFeaturesKHR = 1000483000,
	pipelineBinaryCreateInfoKHR = 1000483001,
	pipelineBinaryInfoKHR = 1000483002,
	pipelineBinaryKeyKHR = 1000483003,
	physicalDevicePipelineBinaryPropertiesKHR = 1000483004,
	releaseCapturedPipelineDataInfoKHR = 1000483005,
	pipelineBinaryDataInfoKHR = 1000483006,
	pipelineCreateInfoKHR = 1000483007,
	devicePipelineBinaryInternalCacheControlKHR = 1000483008,
	pipelineBinaryHandlesInfoKHR = 1000483009,
	physicalDeviceTilePropertiesFeaturesQCOM = 1000484000,
	tilePropertiesQCOM = 1000484001,
	physicalDeviceAmigoProfilingFeaturesSEC = 1000485000,
	amigoProfilingSubmitInfoSEC = 1000485001,
	surfacePresentModeKHR = 1000274000,
	surfacePresentScalingCapabilitiesKHR = 1000274001,
	surfacePresentModeCompatibilityKHR = 1000274002,
	physicalDeviceSwapchainMaintenance1FeaturesKHR = 1000275000,
	swapchainPresentFenceInfoKHR = 1000275001,
	swapchainPresentModesCreateInfoKHR = 1000275002,
	swapchainPresentModeInfoKHR = 1000275003,
	swapchainPresentScalingCreateInfoKHR = 1000275004,
	releaseSwapchainImagesInfoKHR = 1000275005,
	physicalDeviceMultiviewPerViewViewportsFeaturesQCOM = 1000488000,
	physicalDeviceRayTracingInvocationReorderFeaturesNV = 1000490000,
	physicalDeviceRayTracingInvocationReorderPropertiesNV = 1000490001,
	physicalDeviceCooperativeVectorFeaturesNV = 1000491000,
	physicalDeviceCooperativeVectorPropertiesNV = 1000491001,
	cooperativeVectorPropertiesNV = 1000491002,
	convertCooperativeVectorMatrixInfoNV = 1000491004,
	physicalDeviceExtendedSparseAddressSpaceFeaturesNV = 1000492000,
	physicalDeviceExtendedSparseAddressSpacePropertiesNV = 1000492001,
	physicalDeviceMutableDescriptorTypeFeaturesEXT = 1000351000,
	mutableDescriptorTypeCreateInfoEXT = 1000351002,
	physicalDeviceLegacyVertexAttributesFeaturesEXT = 1000495000,
	physicalDeviceLegacyVertexAttributesPropertiesEXT = 1000495001,
	layerSettingsCreateInfoEXT = 1000496000,
	physicalDeviceShaderCoreBuiltinsFeaturesARM = 1000497000,
	physicalDeviceShaderCoreBuiltinsPropertiesARM = 1000497001,
	physicalDevicePipelineLibraryGroupHandlesFeaturesEXT = 1000498000,
	physicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT = 1000499000,
	physicalDeviceInternallySynchronizedQueuesFeaturesKHR = 1000504000,
	latencySleepModeInfoNV = 1000505000,
	latencySleepInfoNV = 1000505001,
	setLatencyMarkerInfoNV = 1000505002,
	getLatencyMarkerInfoNV = 1000505003,
	latencyTimingsFrameReportNV = 1000505004,
	latencySubmissionPresentIDNV = 1000505005,
	outOfBandQueueTypeInfoNV = 1000505006,
	swapchainLatencyCreateInfoNV = 1000505007,
	latencySurfaceCapabilitiesNV = 1000505008,
	physicalDeviceCooperativeMatrixFeaturesKHR = 1000506000,
	cooperativeMatrixPropertiesKHR = 1000506001,
	physicalDeviceCooperativeMatrixPropertiesKHR = 1000506002,
	dataGraphPipelineCreateInfoARM = 1000507000,
	dataGraphPipelineSessionCreateInfoARM = 1000507001,
	dataGraphPipelineResourceInfoARM = 1000507002,
	dataGraphPipelineConstantARM = 1000507003,
	dataGraphPipelineSessionMemoryRequirementsInfoARM = 1000507004,
	bindDataGraphPipelineSessionMemoryInfoARM = 1000507005,
	physicalDeviceDataGraphFeaturesARM = 1000507006,
	dataGraphPipelineShaderModuleCreateInfoARM = 1000507007,
	dataGraphPipelinePropertyQueryResultARM = 1000507008,
	dataGraphPipelineInfoARM = 1000507009,
	dataGraphPipelineCompilerControlCreateInfoARM = 1000507010,
	dataGraphPipelineSessionBindPointRequirementsInfoARM = 1000507011,
	dataGraphPipelineSessionBindPointRequirementARM = 1000507012,
	dataGraphPipelineIDentifierCreateInfoARM = 1000507013,
	dataGraphPipelineDispatchInfoARM = 1000507014,
	dataGraphProcessingEngineCreateInfoARM = 1000507016,
	queueFamilyDataGraphProcessingEnginePropertiesARM = 1000507017,
	queueFamilyDataGraphPropertiesARM = 1000507018,
	physicalDeviceQueueFamilyDataGraphProcessingEngineInfoARM = 1000507019,
	dataGraphPipelineConstantTensorSemiStructuredSparsityInfoARM = 1000507015,
	queueFamilyDataGraphTosaPropertiesARM = 1000508000,
	physicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM = 1000510000,
	multiviewPerViewRenderAreasRenderPassBeginInfoQCOM = 1000510001,
	physicalDeviceComputeShaderDerivativesFeaturesKHR = 1000201000,
	physicalDeviceComputeShaderDerivativesPropertiesKHR = 1000511000,
	videoDecodeAv1CapabilitiesKHR = 1000512000,
	videoDecodeAv1PictureInfoKHR = 1000512001,
	videoDecodeAv1ProfileInfoKHR = 1000512003,
	videoDecodeAv1SessionParametersCreateInfoKHR = 1000512004,
	videoDecodeAv1DpbSlotInfoKHR = 1000512005,
	videoEncodeAv1CapabilitiesKHR = 1000513000,
	videoEncodeAv1SessionParametersCreateInfoKHR = 1000513001,
	videoEncodeAv1PictureInfoKHR = 1000513002,
	videoEncodeAv1DpbSlotInfoKHR = 1000513003,
	physicalDeviceVideoEncodeAv1FeaturesKHR = 1000513004,
	videoEncodeAv1ProfileInfoKHR = 1000513005,
	videoEncodeAv1RateControlInfoKHR = 1000513006,
	videoEncodeAv1RateControlLayerInfoKHR = 1000513007,
	videoEncodeAv1QualityLevelPropertiesKHR = 1000513008,
	videoEncodeAv1SessionCreateInfoKHR = 1000513009,
	videoEncodeAv1GopRemainingFrameInfoKHR = 1000513010,
	physicalDeviceVideoDecodeVp9FeaturesKHR = 1000514000,
	videoDecodeVp9CapabilitiesKHR = 1000514001,
	videoDecodeVp9PictureInfoKHR = 1000514002,
	videoDecodeVp9ProfileInfoKHR = 1000514003,
	physicalDeviceVideoMaintenance1FeaturesKHR = 1000515000,
	videoInlineQueryInfoKHR = 1000515001,
	physicalDevicePerStageDescriptorSetFeaturesNV = 1000516000,
	physicalDeviceImageProcessing2FeaturesQCOM = 1000518000,
	physicalDeviceImageProcessing2PropertiesQCOM = 1000518001,
	samplerBlockMatchWindowCreateInfoQCOM = 1000518002,
	samplerCubicWeightsCreateInfoQCOM = 1000519000,
	physicalDeviceCubicWeightsFeaturesQCOM = 1000519001,
	blitImageCubicWeightsInfoQCOM = 1000519002,
	physicalDeviceYcbcrDegammaFeaturesQCOM = 1000520000,
	samplerYcbcrConversionYcbcrDegammaCreateInfoQCOM = 1000520001,
	physicalDeviceCubicClampFeaturesQCOM = 1000521000,
	physicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT = 1000524000,
	physicalDeviceVertexAttributeDivisorPropertiesKHR = 1000525000,
	pipelineVertexInputDivisorStateCreateInfoKHR = 1000190001,
	physicalDeviceVertexAttributeDivisorFeaturesKHR = 1000190002,
	physicalDeviceUnifiedImageLayoutsFeaturesKHR = 1000527000,
	attachmentFeedbackLoopInfoEXT = 1000527001,
	physicalDeviceShaderFloatControls2FeaturesKHR = 1000528000,
	screenBufferPropertiesQNX = 1000529000,
	screenBufferFormatPropertiesQNX = 1000529001,
	importScreenBufferInfoQNX = 1000529002,
	externalFormatQNX = 1000529003,
	physicalDeviceExternalMemoryScreenBufferFeaturesQNX = 1000529004,
	physicalDeviceLayeredDriverPropertiesMSFT = 1000530000,
	physicalDeviceIndexTypeUint8FeaturesKHR = 1000265000,
	physicalDeviceLineRasterizationFeaturesKHR = 1000259000,
	pipelineRasterizationLineStateCreateInfoKHR = 1000259001,
	physicalDeviceLineRasterizationPropertiesKHR = 1000259002,
	calibratedTimestampInfoKHR = 1000184000,
	physicalDeviceShaderExpectAssumeFeaturesKHR = 1000544000,
	physicalDeviceMaintenance6FeaturesKHR = 1000545000,
	physicalDeviceMaintenance6PropertiesKHR = 1000545001,
	bindMemoryStatusKHR = 1000545002,
	bindDescriptorSetsInfoKHR = 1000545003,
	pushConstantsInfoKHR = 1000545004,
	pushDescriptorSetInfoKHR = 1000545005,
	pushDescriptorSetWithTemplateInfoKHR = 1000545006,
	setDescriptorBufferOffsetsInfoEXT = 1000545007,
	bindDescriptorBufferEmbeddedSamplersInfoEXT = 1000545008,
	physicalDeviceDescriptorPoolOverallocationFeaturesNV = 1000546000,
	physicalDeviceTileMemoryHeapFeaturesQCOM = 1000547000,
	physicalDeviceTileMemoryHeapPropertiesQCOM = 1000547001,
	tileMemoryRequirementsQCOM = 1000547002,
	tileMemoryBindInfoQCOM = 1000547003,
	tileMemorySizeInfoQCOM = 1000547004,
	physicalDeviceCopyMemoryIndirectFeaturesKHR = 1000549000,
	physicalDeviceCopyMemoryIndirectPropertiesKHR = 1000426001,
	copyMemoryIndirectInfoKHR = 1000549002,
	copyMemoryToImageIndirectInfoKHR = 1000549003,
	physicalDeviceMemoryDecompressionFeaturesEXT = 1000427000,
	physicalDeviceMemoryDecompressionPropertiesEXT = 1000427001,
	decompressMemoryInfoEXT = 1000550002,
	displaySurfaceStereoCreateInfoNV = 1000551000,
	displayModeStereoPropertiesNV = 1000551001,
	videoEncodeIntraRefreshCapabilitiesKHR = 1000552000,
	videoEncodeSessionIntraRefreshCreateInfoKHR = 1000552001,
	videoEncodeIntraRefreshInfoKHR = 1000552002,
	videoReferenceIntraRefreshInfoKHR = 1000552003,
	physicalDeviceVideoEncodeIntraRefreshFeaturesKHR = 1000552004,
	videoEncodeQuantizationMapCapabilitiesKHR = 1000553000,
	videoFormatQuantizationMapPropertiesKHR = 1000553001,
	videoEncodeQuantizationMapInfoKHR = 1000553002,
	videoEncodeQuantizationMapSessionParametersCreateInfoKHR = 1000553005,
	physicalDeviceVideoEncodeQuantizationMapFeaturesKHR = 1000553009,
	videoEncodeH264QuantizationMapCapabilitiesKHR = 1000553003,
	videoEncodeH265QuantizationMapCapabilitiesKHR = 1000553004,
	videoFormatH265QuantizationMapPropertiesKHR = 1000553006,
	videoEncodeAv1QuantizationMapCapabilitiesKHR = 1000553007,
	videoFormatAv1QuantizationMapPropertiesKHR = 1000553008,
	physicalDeviceRawAccessChainsFeaturesNV = 1000555000,
	externalComputeQueueDeviceCreateInfoNV = 1000556000,
	externalComputeQueueCreateInfoNV = 1000556001,
	externalComputeQueueDataParamsNV = 1000556002,
	physicalDeviceExternalComputeQueuePropertiesNV = 1000556003,
	physicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR = 1000558000,
	physicalDeviceCommandBufferInheritanceFeaturesNV = 1000559000,
	physicalDeviceMaintenance7FeaturesKHR = 1000562000,
	physicalDeviceMaintenance7PropertiesKHR = 1000562001,
	physicalDeviceLayeredApiPropertiesListKHR = 1000562002,
	physicalDeviceLayeredApiPropertiesKHR = 1000562003,
	physicalDeviceLayeredApiVulkanPropertiesKHR = 1000562004,
	physicalDeviceShaderAtomicFloat16VectorFeaturesNV = 1000563000,
	physicalDeviceShaderReplicatedCompositesFeaturesEXT = 1000564000,
	physicalDeviceShaderFloat8FeaturesEXT = 1000567000,
	physicalDeviceRayTracingValidationFeaturesNV = 1000568000,
	physicalDeviceClusterAccelerationStructureFeaturesNV = 1000569000,
	physicalDeviceClusterAccelerationStructurePropertiesNV = 1000569001,
	clusterAccelerationStructureClustersBottomLevelInputNV = 1000569002,
	clusterAccelerationStructureTriangleClusterInputNV = 1000569003,
	clusterAccelerationStructureMoveObjectsInputNV = 1000569004,
	clusterAccelerationStructureInputInfoNV = 1000569005,
	clusterAccelerationStructureCommandsInfoNV = 1000569006,
	rayTracingPipelineClusterAccelerationStructureCreateInfoNV = 1000569007,
	physicalDevicePartitionedAccelerationStructureFeaturesNV = 1000570000,
	physicalDevicePartitionedAccelerationStructurePropertiesNV = 1000570001,
	writeDescriptorSetPartitionedAccelerationStructureNV = 1000570002,
	partitionedAccelerationStructureInstancesInputNV = 1000570003,
	buildPartitionedAccelerationStructureInfoNV = 1000570004,
	partitionedAccelerationStructureFlagsNV = 1000570005,
	physicalDeviceDeviceGeneratedCommandsFeaturesEXT = 1000572000,
	physicalDeviceDeviceGeneratedCommandsPropertiesEXT = 1000572001,
	generatedCommandsMemoryRequirementsInfoEXT = 1000572002,
	indirectExecutionSetCreateInfoEXT = 1000572003,
	generatedCommandsInfoEXT = 1000572004,
	indirectCommandsLayoutCreateInfoEXT = 1000572006,
	indirectCommandsLayoutTokenEXT = 1000572007,
	writeIndirectExecutionSetPipelineEXT = 1000572008,
	writeIndirectExecutionSetShaderEXT = 1000572009,
	indirectExecutionSetPipelineInfoEXT = 1000572010,
	indirectExecutionSetShaderInfoEXT = 1000572011,
	indirectExecutionSetShaderLayoutInfoEXT = 1000572012,
	generatedCommandsPipelineInfoEXT = 1000572013,
	generatedCommandsShaderInfoEXT = 1000572014,
	physicalDeviceFaultFeaturesKHR = 1000573000,
	physicalDeviceFaultPropertiesKHR = 1000573001,
	deviceFaultInfoKHR = 1000573002,
	deviceFaultDebugInfoKHR = 1000573003,
	physicalDeviceMaintenance8FeaturesKHR = 1000574000,
	memoryBarrierAccessFlags3KHR = 1000574002,
	physicalDeviceImageAlignmentControlFeaturesMESA = 1000575000,
	physicalDeviceImageAlignmentControlPropertiesMESA = 1000575001,
	imageAlignmentControlCreateInfoMESA = 1000575002,
	physicalDeviceShaderFmaFeaturesKHR = 1000579000,
	pushConstantBankInfoNV = 1000580000,
	physicalDevicePushConstantBankFeaturesNV = 1000580001,
	physicalDevicePushConstantBankPropertiesNV = 1000580002,
	physicalDeviceRayTracingInvocationReorderFeaturesEXT = 1000581000,
	physicalDeviceRayTracingInvocationReorderPropertiesEXT = 1000581001,
	physicalDeviceDepthClampControlFeaturesEXT = 1000582000,
	pipelineViewportDepthClampControlCreateInfoEXT = 1000582001,
	physicalDeviceMaintenance9FeaturesKHR = 1000584000,
	physicalDeviceMaintenance9PropertiesKHR = 1000584001,
	queueFamilyOwnershipTransferPropertiesKHR = 1000584002,
	physicalDeviceVideoMaintenance2FeaturesKHR = 1000586000,
	videoDecodeH264InlineSessionParametersInfoKHR = 1000586001,
	videoDecodeH265InlineSessionParametersInfoKHR = 1000586002,
	videoDecodeAv1InlineSessionParametersInfoKHR = 1000586003,
	surfaceCreateInfoOHOS = 1000685000,
	physicalDeviceHdrVividFeaturesHUAWEI = 1000590000,
	hdrVividDynamicMetadataHUAWEI = 1000590001,
	physicalDeviceCooperativeMatrix2FeaturesNV = 1000593000,
	cooperativeMatrixFlexibleDimensionsPropertiesNV = 1000593001,
	physicalDeviceCooperativeMatrix2PropertiesNV = 1000593002,
	physicalDevicePipelineOpacityMicromapFeaturesARM = 1000596000,
	physicalDeviceDepthClampZeroOneFeaturesKHR = 1000421000,
	physicalDevicePerformanceCountersByRegionFeaturesARM = 1000605000,
	physicalDevicePerformanceCountersByRegionPropertiesARM = 1000605001,
	performanceCounterARM = 1000605002,
	performanceCounterDescriptionARM = 1000605003,
	renderPassPerformanceCountersByRegionBeginInfoARM = 1000605004,
	physicalDeviceShaderInstrumentationFeaturesARM = 1000607000,
	physicalDeviceShaderInstrumentationPropertiesARM = 1000607001,
	shaderInstrumentationCreateInfoARM = 1000607002,
	shaderInstrumentationMetricDescriptionARM = 1000607003,
	physicalDeviceVertexAttributeRobustnessFeaturesEXT = 1000608000,
	physicalDeviceFormatPackFeaturesARM = 1000609000,
	physicalDeviceFragmentDensityMapLayeredFeaturesVALVE = 1000611000,
	physicalDeviceFragmentDensityMapLayeredPropertiesVALVE = 1000611001,
	pipelineFragmentDensityMapLayeredCreateInfoVALVE = 1000611002,
	physicalDeviceRobustness2FeaturesKHR = 1000286000,
	physicalDeviceRobustness2PropertiesKHR = 1000286001,
	setPresentConfigNV = 1000613000,
	physicalDevicePresentMeteringFeaturesNV = 1000613001,
	physicalDeviceFragmentDensityMapOffsetFeaturesEXT = 1000425000,
	physicalDeviceFragmentDensityMapOffsetPropertiesEXT = 1000425001,
	renderPassFragmentDensityMapOffsetEndInfoEXT = 1000425002,
	physicalDeviceZeroInitializeDeviceMemoryFeaturesEXT = 1000620000,
	physicalDevicePresentModeFifoLatestReadyFeaturesKHR = 1000361000,
	physicalDeviceShader64BitIndexingFeaturesEXT = 1000627000,
	physicalDeviceCustomResolveFeaturesEXT = 1000628000,
	beginCustomResolveInfoEXT = 1000628001,
	customResolveCreateInfoEXT = 1000628002,
	physicalDeviceDataGraphModelFeaturesQCOM = 1000629000,
	dataGraphPipelineBuiltinModelCreateInfoQCOM = 1000629001,
	physicalDeviceMaintenance10FeaturesKHR = 1000630000,
	physicalDeviceMaintenance10PropertiesKHR = 1000630001,
	renderingAttachmentFlagsInfoKHR = 1000630002,
	renderingEndInfoKHR = 1000619003,
	resolveImageModeInfoKHR = 1000630004,
	physicalDeviceDataGraphOpticalFlowFeaturesARM = 1000631000,
	queueFamilyDataGraphOpticalFlowPropertiesARM = 1000631001,
	dataGraphOpticalFlowImageFormatInfoARM = 1000631003,
	dataGraphOpticalFlowImageFormatPropertiesARM = 1000631004,
	dataGraphPipelineOpticalFlowDispatchInfoARM = 1000631005,
	dataGraphPipelineOpticalFlowCreateInfoARM = 1000631002,
	dataGraphPipelineResourceInfoImageLayoutARM = 1000631006,
	dataGraphPipelineSingleNodeCreateInfoARM = 1000631007,
	dataGraphPipelineSingleNodeConnectionARM = 1000631008,
	physicalDeviceShaderLongVectorFeaturesEXT = 1000635000,
	physicalDeviceShaderLongVectorPropertiesEXT = 1000635001,
	physicalDevicePipelineCacheIncrementalModeFeaturesSEC = 1000637000,
	physicalDeviceShaderUniformBufferUnsizedArrayFeaturesEXT = 1000642000,
	computeOccupancyPriorityParametersNV = 1000645000,
	physicalDeviceComputeOccupancyPriorityFeaturesNV = 1000645001,
	physicalDeviceMaintenance11FeaturesKHR = 1000657000,
	queueFamilyOptimalImageTransferGranularityPropertiesKHR = 1000657001,
	physicalDeviceShaderSubgroupPartitionedFeaturesEXT = 1000662000,
	ubmSurfaceCreateInfoSEC = 1000664000,
	physicalDeviceShaderMixedFloatDotProductFeaturesVALVE = 1000673000,
	physicalDeviceThrottleHintFeaturesSEC = 1000674000,
	throttleHintSubmitInfoSEC = 1000674001,
	dataGraphPipelineNeuralStatisticsCreateInfoARM = 1000676000,
	dataGraphPipelineSessionNeuralStatisticsCreateInfoARM = 1000676001,
	physicalDeviceDataGraphNeuralAcceleratorStatisticsFeaturesARM = 1000676002,
	physicalDevicePrimitiveRestartIndexFeaturesEXT = 1000678000
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
	descriptorUpdateTemplate = 1000085000,
	samplerYcbcrConversion = 1000156000,
	privateDataSlot = 1000295000,
	surfaceKHR = 1000000000,
	swapchainKHR = 1000001000,
	displayKHR = 1000002000,
	displayModeKHR = 1000002001,
	debugReportCallbackEXT = 1000011000,
	videoSessionKHR = 1000023000,
	videoSessionParametersKHR = 1000023001,
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
	bufferCollectionFUCHSIA = 1000366000,
	micromapEXT = 1000396000,
	tensorARM = 1000460000,
	tensorViewARM = 1000460001,
	opticalFlowSessionNV = 1000464000,
	shaderEXT = 1000482000,
	pipelineBinaryKHR = 1000483000,
	dataGraphPipelineSessionARM = 1000507000,
	externalComputeQueueNV = 1000556000,
	indirectCommandsLayoutEXT = 1000572000,
	indirectExecutionSetEXT = 1000572001,
	shaderInstrumentationARM = 1000607000
};

enum class VendorId : int32_t {
	khronos = 65536,
	vIV = 65537,
	vSI = 65538,
	kazan = 65539,
	codeplay = 65540,
	mESA = 65541,
	pocl = 65542,
	mobileye = 65543
};

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
	a1b5g5r5UnormPack16 = 1000470000,
	a8Unorm = 1000470001,
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
	astc3x3x3UnormBlockEXT = 1000288000,
	astc3x3x3SrgbBlockEXT = 1000288001,
	astc3x3x3SfloatBlockEXT = 1000288002,
	astc4x3x3UnormBlockEXT = 1000288003,
	astc4x3x3SrgbBlockEXT = 1000288004,
	astc4x3x3SfloatBlockEXT = 1000288005,
	astc4x4x3UnormBlockEXT = 1000288006,
	astc4x4x3SrgbBlockEXT = 1000288007,
	astc4x4x3SfloatBlockEXT = 1000288008,
	astc4x4x4UnormBlockEXT = 1000288009,
	astc4x4x4SrgbBlockEXT = 1000288010,
	astc4x4x4SfloatBlockEXT = 1000288011,
	astc5x4x4UnormBlockEXT = 1000288012,
	astc5x4x4SrgbBlockEXT = 1000288013,
	astc5x4x4SfloatBlockEXT = 1000288014,
	astc5x5x4UnormBlockEXT = 1000288015,
	astc5x5x4SrgbBlockEXT = 1000288016,
	astc5x5x4SfloatBlockEXT = 1000288017,
	astc5x5x5UnormBlockEXT = 1000288018,
	astc5x5x5SrgbBlockEXT = 1000288019,
	astc5x5x5SfloatBlockEXT = 1000288020,
	astc6x5x5UnormBlockEXT = 1000288021,
	astc6x5x5SrgbBlockEXT = 1000288022,
	astc6x5x5SfloatBlockEXT = 1000288023,
	astc6x6x5UnormBlockEXT = 1000288024,
	astc6x6x5SrgbBlockEXT = 1000288025,
	astc6x6x5SfloatBlockEXT = 1000288026,
	astc6x6x6UnormBlockEXT = 1000288027,
	astc6x6x6SrgbBlockEXT = 1000288028,
	astc6x6x6SfloatBlockEXT = 1000288029,
	g8B8r82plane444UnormEXT = 1000330000,
	g10x6B10x6r10x62plane444Unorm3pack16EXT = 1000330001,
	g12x4B12x4r12x42plane444Unorm3pack16EXT = 1000330002,
	g16B16r162plane444UnormEXT = 1000330003,
	a4r4g4b4UnormPack16EXT = 1000340000,
	a4b4g4r4UnormPack16EXT = 1000340001,
	r8BoolARM = 1000460000,
	r16SfloatFpencodingBfloat16ARM = 1000460001,
	r8SfloatFpencodingFloat8e4m3ARM = 1000460002,
	r8SfloatFpencodingFloat8e5m2ARM = 1000460003,
	r16g16Sfixed5NV = 1000464000,
	r16g16S105NV = 1000464000,
	a1b5g5r5UnormPack16KHR = 1000470000,
	a8UnormKHR = 1000470001,
	r10x6UintPack16ARM = 1000609000,
	r10x6g10x6Uint2pack16ARM = 1000609001,
	r10x6g10x6b10x6a10x6Uint4pack16ARM = 1000609002,
	r12x4UintPack16ARM = 1000609003,
	r12x4g12x4Uint2pack16ARM = 1000609004,
	r12x4g12x4b12x4a12x4Uint4pack16ARM = 1000609005,
	r14x2UintPack16ARM = 1000609006,
	r14x2g14x2Uint2pack16ARM = 1000609007,
	r14x2g14x2b14x2a14x2Uint4pack16ARM = 1000609008,
	r14x2UnormPack16ARM = 1000609009,
	r14x2g14x2Unorm2pack16ARM = 1000609010,
	r14x2g14x2b14x2a14x2Unorm4pack16ARM = 1000609011,
	g14x2B14x2r14x22plane420Unorm3pack16ARM = 1000609012,
	g14x2B14x2r14x22plane422Unorm3pack16ARM = 1000609013
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
	videoDecodeOutputKHR = (1 << 25),
	videoDecodeDpbKHR = (1 << 26),
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
	fragmentShadingRateAttachmentKHR = (1 << 30),
	videoEncodeInputKHR = (1 << 27),
	videoEncodeDpbKHR = (1 << 28)
};
NYTL_FLAG_OPS(FormatFeatureBits)

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
	descriptorHeapCaptureReplayEXT = (1 << 16),
	sampleLocationsCompatibleDepthEXT = (1 << 12),
	disjointKHR = (1 << 9),
	aliasKHR = (1 << 10),
	subsampledEXT = (1 << 14),
	descriptorBufferCaptureReplayEXT = (1 << 16),
	multisampledRenderToSingleSampledEXT = (1 << 18),
	e2dViewCompatibleEXT = (1 << 17),
	videoProfileIndependentKHR = (1 << 20),
	fragmentDensityMapOffsetEXT = (1 << 15),
	aliasSingleLayerDescriptorKHR = (1 << 22)
};
NYTL_FLAG_OPS(ImageCreateBits)

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

enum class ImageTiling : int32_t {
	optimal = 0,
	linear = 1,
	drmFormatModifierEXT = 1000158000
};

enum class ImageType : int32_t {
	e1d = 0,
	e2d = 1,
	e3d = 2
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
	hostTransfer = (1 << 22),
	videoDecodeDstKHR = (1 << 10),
	videoDecodeSrcKHR = (1 << 11),
	videoDecodeDpbKHR = (1 << 12),
	fragmentDensityMapEXT = (1 << 9),
	fragmentShadingRateAttachmentKHR = (1 << 8),
	hostTransferEXT = (1 << 22),
	videoEncodeDstKHR = (1 << 13),
	videoEncodeSrcKHR = (1 << 14),
	videoEncodeDpbKHR = (1 << 15),
	attachmentFeedbackLoopEXT = (1 << 19),
	invocationMaskHUAWEI = (1 << 18),
	sampleWeightQCOM = (1 << 20),
	sampleBlockMatchQCOM = (1 << 21),
	tensorAliasingARM = (1 << 23),
	tileMemoryQCOM = (1 << 27),
	videoEncodeQuantizationDeltaMapKHR = (1 << 25),
	videoEncodeEmphasisMapKHR = (1 << 26)
};
NYTL_FLAG_OPS(ImageUsageBits)

enum class InstanceCreateBits : int32_t {
	enumeratePortabilityKHR = (1 << 0)
};
NYTL_FLAG_OPS(InstanceCreateBits)

enum class MemoryHeapBits : int32_t {
	deviceLocal = (1 << 0),
	multiInstance = (1 << 1),
	seuSafe = (1 << 2),
	multiInstanceKHR = (1 << 1),
	tileMemoryQCOM = (1 << 3)
};
NYTL_FLAG_OPS(MemoryHeapBits)

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

enum class PhysicalDeviceType : int32_t {
	other = 0,
	integratedGpu = 1,
	discreteGpu = 2,
	virtualGpu = 3,
	cpu = 4
};

enum class QueueBits : int32_t {
	graphics = (1 << 0),
	compute = (1 << 1),
	transfer = (1 << 2),
	sparseBinding = (1 << 3),
	eProtected = (1 << 4),
	videoDecodeKHR = (1 << 5),
	videoEncodeKHR = (1 << 6),
	opticalFlowNV = (1 << 8),
	dataGraphARM = (1 << 10)
};
NYTL_FLAG_OPS(QueueBits)

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
	taskEXT = (1 << 6),
	meshEXT = (1 << 7),
	subpassShadingHUAWEI = (1 << 14),
	clusterCullingHUAWEI = (1 << 19)
};
NYTL_FLAG_OPS(ShaderStageBits)

enum class DeviceQueueCreateBits : int32_t {
	eProtected = (1 << 0),
	internallySynchronizedKHR = (1 << 2)
};
NYTL_FLAG_OPS(DeviceQueueCreateBits)

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
	fragmentDensityProcessEXT = (1 << 23),
	fragmentShadingRateAttachmentKHR = (1 << 22),
	noneKHR = 0,
	taskShaderEXT = (1 << 19),
	meshShaderEXT = (1 << 20),
	commandPreprocessEXT = (1 << 17)
};
NYTL_FLAG_OPS(PipelineStageBits)

enum class MemoryMapBits : int32_t {
	placedEXT = (1 << 0)
};
NYTL_FLAG_OPS(MemoryMapBits)

enum class ImageAspectBits : int32_t {
	color = (1 << 0),
	depth = (1 << 1),
	stencil = (1 << 2),
	metadata = (1 << 3),
	plane0 = (1 << 4),
	plane1 = (1 << 5),
	plane2 = (1 << 6),
	none = 0,
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

enum class SparseImageFormatBits : int32_t {
	singleMiptail = (1 << 0),
	alignedMipSize = (1 << 1),
	nonstandardBlockSize = (1 << 2)
};
NYTL_FLAG_OPS(SparseImageFormatBits)

enum class SparseMemoryBindBits : int32_t {
	metadata = (1 << 0)
};
NYTL_FLAG_OPS(SparseMemoryBindBits)

enum class FenceCreateBits : int32_t {
	signaled = (1 << 0)
};
NYTL_FLAG_OPS(FenceCreateBits)

enum class QueryPoolCreateBits : int32_t {
	resetKHR = (1 << 0)
};
NYTL_FLAG_OPS(QueryPoolCreateBits)

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
	computeShaderInvocations = (1 << 10),
	taskShaderInvocationsEXT = (1 << 11),
	meshShaderInvocationsEXT = (1 << 12),
	clusterCullingShaderInvocationsHUAWEI = (1 << 13)
};
NYTL_FLAG_OPS(QueryPipelineStatisticBits)

enum class QueryType : int32_t {
	occlusion = 0,
	pipelineStatistics = 1,
	timestamp = 2,
	resultStatusOnlyKHR = 1000023000,
	transformFeedbackStreamEXT = 1000028004,
	performanceQueryKHR = 1000116000,
	accelerationStructureCompactedSizeKHR = 1000150000,
	accelerationStructureSerializationSizeKHR = 1000150001,
	accelerationStructureCompactedSizeNV = 1000165000,
	performanceQueryINTEL = 1000210000,
	videoEncodeFeedbackKHR = 1000299000,
	meshPrimitivesGeneratedEXT = 1000328000,
	primitivesGeneratedEXT = 1000382000,
	accelerationStructureSerializationBottomLevelPointersKHR = 1000386000,
	accelerationStructureSizeKHR = 1000386001,
	micromapSerializationSizeEXT = 1000396000,
	micromapCompactedSizeEXT = 1000396001
};

enum class QueryResultBits : int32_t {
	e64 = (1 << 0),
	wait = (1 << 1),
	withAvailability = (1 << 2),
	partial = (1 << 3),
	withStatusKHR = (1 << 4)
};
NYTL_FLAG_OPS(QueryResultBits)

enum class BufferCreateBits : int32_t {
	sparseBinding = (1 << 0),
	sparseResidency = (1 << 1),
	sparseAliased = (1 << 2),
	eProtected = (1 << 3),
	deviceAddressCaptureReplay = (1 << 4),
	deviceAddressCaptureReplayEXT = (1 << 4),
	deviceAddressCaptureReplayKHR = (1 << 4),
	descriptorBufferCaptureReplayEXT = (1 << 5),
	videoProfileIndependentKHR = (1 << 6)
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
	videoDecodeSrcKHR = (1 << 13),
	videoDecodeDstKHR = (1 << 14),
	transformFeedbackBufferEXT = (1 << 11),
	transformFeedbackCounterBufferEXT = (1 << 12),
	conditionalRenderingEXT = (1 << 9),
	descriptorHeapEXT = (1 << 28),
	accelerationStructureBuildInputReadOnlyKHR = (1 << 19),
	accelerationStructureStorageKHR = (1 << 20),
	shaderBindingTableKHR = (1 << 10),
	rayTracingNV = (1 << 10),
	shaderDeviceAddressEXT = (1 << 17),
	shaderDeviceAddressKHR = (1 << 17),
	videoEncodeDstKHR = (1 << 15),
	videoEncodeSrcKHR = (1 << 16),
	samplerDescriptorBufferEXT = (1 << 21),
	resourceDescriptorBufferEXT = (1 << 22),
	pushDescriptorsDescriptorBufferEXT = (1 << 26),
	micromapBuildInputReadOnlyEXT = (1 << 23),
	micromapStorageEXT = (1 << 24),
	tileMemoryQCOM = (1 << 27)
};
NYTL_FLAG_OPS(BufferUsageBits)

enum class SharingMode : int32_t {
	exclusive = 0,
	concurrent = 1
};

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
	renderingLocalRead = 1000232000,
	presentSrcKHR = 1000001002,
	videoDecodeDstKHR = 1000024000,
	videoDecodeSrcKHR = 1000024001,
	videoDecodeDpbKHR = 1000024002,
	sharedPresentKHR = 1000111000,
	depthReadOnlyStencilAttachmentOptimalKHR = 1000117000,
	depthAttachmentStencilReadOnlyOptimalKHR = 1000117001,
	fragmentDensityMapOptimalEXT = 1000218000,
	fragmentShadingRateAttachmentOptimalKHR = 1000164003,
	renderingLocalReadKHR = 1000232000,
	depthAttachmentOptimalKHR = 1000241000,
	depthReadOnlyOptimalKHR = 1000241001,
	stencilAttachmentOptimalKHR = 1000241002,
	stencilReadOnlyOptimalKHR = 1000241003,
	videoEncodeDstKHR = 1000299000,
	videoEncodeSrcKHR = 1000299001,
	videoEncodeDpbKHR = 1000299002,
	readOnlyOptimalKHR = 1000314000,
	attachmentOptimalKHR = 1000314001,
	attachmentFeedbackLoopOptimalEXT = 1000339000,
	tensorAliasingARM = 1000460000,
	videoEncodeQuantizationMapKHR = 1000553000,
	zeroInitializedEXT = 1000620000
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

enum class ImageViewCreateBits : int32_t {
	fragmentDensityMapDynamicEXT = (1 << 0),
	descriptorBufferCaptureReplayEXT = (1 << 2),
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
	noneKHR = 0,
	commandPreprocessReadEXT = (1 << 17),
	commandPreprocessWriteEXT = (1 << 18)
};
NYTL_FLAG_OPS(AccessBits)

enum class DependencyBits : int32_t {
	byRegion = (1 << 0),
	deviceGroup = (1 << 2),
	viewLocal = (1 << 1),
	viewLocalKHR = (1 << 1),
	deviceGroupKHR = (1 << 2),
	feedbackLoopEXT = (1 << 3),
	queueFamilyOwnershipTransferUseAllStagesKHR = (1 << 5),
	asymmetricEventKHR = (1 << 6)
};
NYTL_FLAG_OPS(DependencyBits)

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

enum class QueryControlBits : int32_t {
	precise = (1 << 0)
};
NYTL_FLAG_OPS(QueryControlBits)

enum class CommandBufferUsageBits : int32_t {
	oneTimeSubmit = (1 << 0),
	renderPassContinue = (1 << 1),
	simultaneousUse = (1 << 2)
};
NYTL_FLAG_OPS(CommandBufferUsageBits)

enum class CommandBufferResetBits : int32_t {
	releaseResources = (1 << 0)
};
NYTL_FLAG_OPS(CommandBufferResetBits)

enum class IndexType : int32_t {
	uint16 = 0,
	uint32 = 1,
	uint8 = 1000265000,
	noneKHR = 1000165000,
	noneNV = 1000165000,
	uint8EXT = 1000265000,
	uint8KHR = 1000265000
};


enum class SubgroupFeatureBits : int32_t {
	basic = (1 << 0),
	vote = (1 << 1),
	arithmetic = (1 << 2),
	ballot = (1 << 3),
	shuffle = (1 << 4),
	shuffleRelative = (1 << 5),
	clustered = (1 << 6),
	quad = (1 << 7),
	rotate = (1 << 9),
	rotateClustered = (1 << 10),
	rotateKHR = (1 << 9),
	rotateClusteredKHR = (1 << 10),
	partitionedEXT = (1 << 8)
};
NYTL_FLAG_OPS(SubgroupFeatureBits)

enum class PointClippingBehavior : int32_t {
	allClipPlanes = 0,
	userClipPlanesOnly = 1,
	allClipPlanesKHR = 0,
	userClipPlanesOnlyKHR = 1
};

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
	deviceAddressCaptureReplayKHR = (1 << 2),
	zeroInitializeEXT = (1 << 3)
};
NYTL_FLAG_OPS(MemoryAllocateBits)

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
	rdmaAddressNV = (1 << 12),
	ohNativeBufferOHOS = (1 << 15),
	screenBufferQNX = (1 << 14)
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
	mesaDozen = 23,
	mesaNvk = 24,
	imaginationOpenSourceMESA = 25,
	mesaHoneykrisp = 26,
	vulkanScEmulationOnVulkan = 27,
	mesaKosmickrisp = 28,
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
	maxKHR = (1 << 3),
	customEXT = (1 << 5)
};
NYTL_FLAG_OPS(ResolveModeBits)

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


enum class ToolPurposeBits : int32_t {
	validation = (1 << 0),
	profiling = (1 << 1),
	tracing = (1 << 2),
	additionalFeatures = (1 << 3),
	modifyingFeatures = (1 << 4),
	validationEXT = (1 << 0),
	profilingEXT = (1 << 1),
	tracingEXT = (1 << 2),
	additionalFeaturesEXT = (1 << 3),
	modifyingFeaturesEXT = (1 << 4),
	debugReportingEXT = (1 << 5),
	debugMarkersEXT = (1 << 6)
};
NYTL_FLAG_OPS(ToolPurposeBits)

enum class PipelineStageBits2 : int64_t {
	e2None = 0,
	e2TopOfPipe = (int64_t(1) << 0),
	e2DrawIndirect = (int64_t(1) << 1),
	e2VertexInput = (int64_t(1) << 2),
	e2VertexShader = (int64_t(1) << 3),
	e2TessellationControlShader = (int64_t(1) << 4),
	e2TessellationEvaluationShader = (int64_t(1) << 5),
	e2GeometryShader = (int64_t(1) << 6),
	e2FragmentShader = (int64_t(1) << 7),
	e2EarlyFragmentTests = (int64_t(1) << 8),
	e2LateFragmentTests = (int64_t(1) << 9),
	e2ColorAttachmentOutput = (int64_t(1) << 10),
	e2ComputeShader = (int64_t(1) << 11),
	e2AllTransfer = (int64_t(1) << 12),
	e2Transfer = (int64_t(1) << 12),
	e2BottomOfPipe = (int64_t(1) << 13),
	e2Host = (int64_t(1) << 14),
	e2AllGraphics = (int64_t(1) << 15),
	e2AllCommands = (int64_t(1) << 16),
	e2Copy = (int64_t(1) << 32),
	e2Resolve = (int64_t(1) << 33),
	e2Blit = (int64_t(1) << 34),
	e2Clear = (int64_t(1) << 35),
	e2IndexInput = (int64_t(1) << 36),
	e2VertexAttributeInput = (int64_t(1) << 37),
	e2PreRasterizationShaders = (int64_t(1) << 38),
	e2VideoDecodeKHR = (int64_t(1) << 26),
	e2VideoEncodeKHR = (int64_t(1) << 27),
	e2NoneKHR = 0,
	e2TopOfPipeKHR = (int64_t(1) << 0),
	e2DrawIndirectKHR = (int64_t(1) << 1),
	e2VertexInputKHR = (int64_t(1) << 2),
	e2VertexShaderKHR = (int64_t(1) << 3),
	e2TessellationControlShaderKHR = (int64_t(1) << 4),
	e2TessellationEvaluationShaderKHR = (int64_t(1) << 5),
	e2GeometryShaderKHR = (int64_t(1) << 6),
	e2FragmentShaderKHR = (int64_t(1) << 7),
	e2EarlyFragmentTestsKHR = (int64_t(1) << 8),
	e2LateFragmentTestsKHR = (int64_t(1) << 9),
	e2ColorAttachmentOutputKHR = (int64_t(1) << 10),
	e2ComputeShaderKHR = (int64_t(1) << 11),
	e2AllTransferKHR = (int64_t(1) << 12),
	e2TransferKHR = (int64_t(1) << 12),
	e2BottomOfPipeKHR = (int64_t(1) << 13),
	e2HostKHR = (int64_t(1) << 14),
	e2AllGraphicsKHR = (int64_t(1) << 15),
	e2AllCommandsKHR = (int64_t(1) << 16),
	e2CopyKHR = (int64_t(1) << 32),
	e2ResolveKHR = (int64_t(1) << 33),
	e2BlitKHR = (int64_t(1) << 34),
	e2ClearKHR = (int64_t(1) << 35),
	e2IndexInputKHR = (int64_t(1) << 36),
	e2VertexAttributeInputKHR = (int64_t(1) << 37),
	e2PreRasterizationShadersKHR = (int64_t(1) << 38),
	e2TransformFeedbackEXT = (int64_t(1) << 24),
	e2ConditionalRenderingEXT = (int64_t(1) << 18),
	e2CommandPreprocessEXT = (int64_t(1) << 17),
	e2FragmentShadingRateAttachmentKHR = (int64_t(1) << 22),
	e2ShadingRateImageNV = (int64_t(1) << 22),
	e2AccelerationStructureBuildKHR = (int64_t(1) << 25),
	e2RayTracingShaderKHR = (int64_t(1) << 21),
	e2RayTracingShaderNV = (int64_t(1) << 21),
	e2AccelerationStructureBuildNV = (int64_t(1) << 25),
	e2FragmentDensityProcessEXT = (int64_t(1) << 23),
	e2TaskShaderEXT = (int64_t(1) << 19),
	e2MeshShaderEXT = (int64_t(1) << 20),
	e2SubpassShaderHUAWEI = (int64_t(1) << 39),
	e2SubpassShadingHUAWEI = (int64_t(1) << 39),
	e2InvocationMaskHUAWEI = (int64_t(1) << 40),
	e2AccelerationStructureCopyKHR = (int64_t(1) << 28),
	e2MicromapBuildEXT = (int64_t(1) << 30),
	e2ClusterCullingShaderHUAWEI = (int64_t(1) << 41),
	e2OpticalFlowNV = (int64_t(1) << 29),
	e2ConvertCooperativeVectorMatrixNV = (int64_t(1) << 44),
	e2DataGraphARM = (int64_t(1) << 42),
	e2CopyIndirectKHR = (int64_t(1) << 46),
	e2MemoryDecompressionEXT = (int64_t(1) << 45)
};
NYTL_FLAG_OPS(PipelineStageBits2)

enum class AccessBits2 : int64_t {
	e2None = 0,
	e2IndirectCommandRead = (int64_t(1) << 0),
	e2IndexRead = (int64_t(1) << 1),
	e2VertexAttributeRead = (int64_t(1) << 2),
	e2UniformRead = (int64_t(1) << 3),
	e2InputAttachmentRead = (int64_t(1) << 4),
	e2ShaderRead = (int64_t(1) << 5),
	e2ShaderWrite = (int64_t(1) << 6),
	e2ColorAttachmentRead = (int64_t(1) << 7),
	e2ColorAttachmentWrite = (int64_t(1) << 8),
	e2DepthStencilAttachmentRead = (int64_t(1) << 9),
	e2DepthStencilAttachmentWrite = (int64_t(1) << 10),
	e2TransferRead = (int64_t(1) << 11),
	e2TransferWrite = (int64_t(1) << 12),
	e2HostRead = (int64_t(1) << 13),
	e2HostWrite = (int64_t(1) << 14),
	e2MemoryRead = (int64_t(1) << 15),
	e2MemoryWrite = (int64_t(1) << 16),
	e2ShaderSampledRead = (int64_t(1) << 32),
	e2ShaderStorageRead = (int64_t(1) << 33),
	e2ShaderStorageWrite = (int64_t(1) << 34),
	e2VideoDecodeReadKHR = (int64_t(1) << 35),
	e2VideoDecodeWriteKHR = (int64_t(1) << 36),
	e2SamplerHeapReadEXT = (int64_t(1) << 57),
	e2ResourceHeapReadEXT = (int64_t(1) << 58),
	e2VideoEncodeReadKHR = (int64_t(1) << 37),
	e2VideoEncodeWriteKHR = (int64_t(1) << 38),
	e2ShaderTileAttachmentReadQCOM = (int64_t(1) << 51),
	e2ShaderTileAttachmentWriteQCOM = (int64_t(1) << 52),
	e2NoneKHR = 0,
	e2IndirectCommandReadKHR = (int64_t(1) << 0),
	e2IndexReadKHR = (int64_t(1) << 1),
	e2VertexAttributeReadKHR = (int64_t(1) << 2),
	e2UniformReadKHR = (int64_t(1) << 3),
	e2InputAttachmentReadKHR = (int64_t(1) << 4),
	e2ShaderReadKHR = (int64_t(1) << 5),
	e2ShaderWriteKHR = (int64_t(1) << 6),
	e2ColorAttachmentReadKHR = (int64_t(1) << 7),
	e2ColorAttachmentWriteKHR = (int64_t(1) << 8),
	e2DepthStencilAttachmentReadKHR = (int64_t(1) << 9),
	e2DepthStencilAttachmentWriteKHR = (int64_t(1) << 10),
	e2TransferReadKHR = (int64_t(1) << 11),
	e2TransferWriteKHR = (int64_t(1) << 12),
	e2HostReadKHR = (int64_t(1) << 13),
	e2HostWriteKHR = (int64_t(1) << 14),
	e2MemoryReadKHR = (int64_t(1) << 15),
	e2MemoryWriteKHR = (int64_t(1) << 16),
	e2ShaderSampledReadKHR = (int64_t(1) << 32),
	e2ShaderStorageReadKHR = (int64_t(1) << 33),
	e2ShaderStorageWriteKHR = (int64_t(1) << 34),
	e2TransformFeedbackWriteEXT = (int64_t(1) << 25),
	e2TransformFeedbackCounterReadEXT = (int64_t(1) << 26),
	e2TransformFeedbackCounterWriteEXT = (int64_t(1) << 27),
	e2ConditionalRenderingReadEXT = (int64_t(1) << 20),
	e2CommandPreprocessReadEXT = (int64_t(1) << 17),
	e2CommandPreprocessWriteEXT = (int64_t(1) << 18),
	e2FragmentShadingRateAttachmentReadKHR = (int64_t(1) << 23),
	e2ShadingRateImageReadNV = (int64_t(1) << 23),
	e2AccelerationStructureReadKHR = (int64_t(1) << 21),
	e2AccelerationStructureWriteKHR = (int64_t(1) << 22),
	e2AccelerationStructureReadNV = (int64_t(1) << 21),
	e2AccelerationStructureWriteNV = (int64_t(1) << 22),
	e2FragmentDensityMapReadEXT = (int64_t(1) << 24),
	e2ColorAttachmentReadNoncoherentEXT = (int64_t(1) << 19),
	e2DescriptorBufferReadEXT = (int64_t(1) << 41),
	e2InvocationMaskReadHUAWEI = (int64_t(1) << 39),
	e2ShaderBindingTableReadKHR = (int64_t(1) << 40),
	e2MicromapReadEXT = (int64_t(1) << 44),
	e2MicromapWriteEXT = (int64_t(1) << 45),
	e2OpticalFlowReadNV = (int64_t(1) << 42),
	e2OpticalFlowWriteNV = (int64_t(1) << 43),
	e2DataGraphReadARM = (int64_t(1) << 47),
	e2DataGraphWriteARM = (int64_t(1) << 48),
	e2MemoryDecompressionReadEXT = (int64_t(1) << 55),
	e2MemoryDecompressionWriteEXT = (int64_t(1) << 56)
};
NYTL_FLAG_OPS(AccessBits2)

enum class SubmitBits : int32_t {
	eProtected = (1 << 0),
	protectedKHR = (1 << 0)
};
NYTL_FLAG_OPS(SubmitBits)

enum class FormatFeatureBits2 : int64_t {
	e2SampledImage = (int64_t(1) << 0),
	e2StorageImage = (int64_t(1) << 1),
	e2StorageImageAtomic = (int64_t(1) << 2),
	e2UniformTexelBuffer = (int64_t(1) << 3),
	e2StorageTexelBuffer = (int64_t(1) << 4),
	e2StorageTexelBufferAtomic = (int64_t(1) << 5),
	e2VertexBuffer = (int64_t(1) << 6),
	e2ColorAttachment = (int64_t(1) << 7),
	e2ColorAttachmentBlend = (int64_t(1) << 8),
	e2DepthStencilAttachment = (int64_t(1) << 9),
	e2BlitSrc = (int64_t(1) << 10),
	e2BlitDst = (int64_t(1) << 11),
	e2SampledImageFilterLinear = (int64_t(1) << 12),
	e2TransferSrc = (int64_t(1) << 14),
	e2TransferDst = (int64_t(1) << 15),
	e2SampledImageFilterMinmax = (int64_t(1) << 16),
	e2MidpointChromaSamples = (int64_t(1) << 17),
	e2SampledImageYcbcrConversionLinearFilter = (int64_t(1) << 18),
	e2SampledImageYcbcrConversionSeparateReconstructionFilter = (int64_t(1) << 19),
	e2SampledImageYcbcrConversionChromaReconstructionExplicit = (int64_t(1) << 20),
	e2SampledImageYcbcrConversionChromaReconstructionExplicitForceable = (int64_t(1) << 21),
	e2Disjoint = (int64_t(1) << 22),
	e2CositedChromaSamples = (int64_t(1) << 23),
	e2StorageReadWithoutFormat = (int64_t(1) << 31),
	e2StorageWriteWithoutFormat = (int64_t(1) << 32),
	e2SampledImageDepthComparison = (int64_t(1) << 33),
	e2SampledImageFilterCubic = (int64_t(1) << 13),
	e2HostImageTransfer = (int64_t(1) << 46),
	e2VideoDecodeOutputKHR = (int64_t(1) << 25),
	e2VideoDecodeDpbKHR = (int64_t(1) << 26),
	e2AccelerationStructureVertexBufferKHR = (int64_t(1) << 29),
	e2FragmentDensityMapEXT = (int64_t(1) << 24),
	e2FragmentShadingRateAttachmentKHR = (int64_t(1) << 30),
	e2HostImageTransferEXT = (int64_t(1) << 46),
	e2VideoEncodeInputKHR = (int64_t(1) << 27),
	e2VideoEncodeDpbKHR = (int64_t(1) << 28),
	e2SampledImageKHR = (int64_t(1) << 0),
	e2StorageImageKHR = (int64_t(1) << 1),
	e2StorageImageAtomicKHR = (int64_t(1) << 2),
	e2UniformTexelBufferKHR = (int64_t(1) << 3),
	e2StorageTexelBufferKHR = (int64_t(1) << 4),
	e2StorageTexelBufferAtomicKHR = (int64_t(1) << 5),
	e2VertexBufferKHR = (int64_t(1) << 6),
	e2ColorAttachmentKHR = (int64_t(1) << 7),
	e2ColorAttachmentBlendKHR = (int64_t(1) << 8),
	e2DepthStencilAttachmentKHR = (int64_t(1) << 9),
	e2BlitSrcKHR = (int64_t(1) << 10),
	e2BlitDstKHR = (int64_t(1) << 11),
	e2SampledImageFilterLinearKHR = (int64_t(1) << 12),
	e2TransferSrcKHR = (int64_t(1) << 14),
	e2TransferDstKHR = (int64_t(1) << 15),
	e2MidpointChromaSamplesKHR = (int64_t(1) << 17),
	e2SampledImageYcbcrConversionLinearFilterKHR = (int64_t(1) << 18),
	e2SampledImageYcbcrConversionSeparateReconstructionFilterKHR = (int64_t(1) << 19),
	e2SampledImageYcbcrConversionChromaReconstructionExplicitKHR = (int64_t(1) << 20),
	e2SampledImageYcbcrConversionChromaReconstructionExplicitForceableKHR = (int64_t(1) << 21),
	e2DisjointKHR = (int64_t(1) << 22),
	e2CositedChromaSamplesKHR = (int64_t(1) << 23),
	e2StorageReadWithoutFormatKHR = (int64_t(1) << 31),
	e2StorageWriteWithoutFormatKHR = (int64_t(1) << 32),
	e2SampledImageDepthComparisonKHR = (int64_t(1) << 33),
	e2SampledImageFilterMinmaxKHR = (int64_t(1) << 16),
	e2SampledImageFilterCubicEXT = (int64_t(1) << 13),
	e2AccelerationStructureRadiusBufferNV = (int64_t(1) << 51),
	e2LinearColorAttachmentNV = (int64_t(1) << 38),
	e2WeightImageQCOM = (int64_t(1) << 34),
	e2WeightSampledImageQCOM = (int64_t(1) << 35),
	e2BlockMatchingQCOM = (int64_t(1) << 36),
	e2BoxFilterSampledQCOM = (int64_t(1) << 37),
	e2TensorShaderARM = (int64_t(1) << 39),
	e2TensorImageAliasingARM = (int64_t(1) << 43),
	e2OpticalFlowImageNV = (int64_t(1) << 40),
	e2OpticalFlowVectorNV = (int64_t(1) << 41),
	e2OpticalFlowCostNV = (int64_t(1) << 42),
	e2TensorDataGraphARM = (int64_t(1) << 48),
	e2CopyImageIndirectDstKHR = (int64_t(1) << 59),
	e2VideoEncodeQuantizationDeltaMapKHR = (int64_t(1) << 49),
	e2VideoEncodeEmphasisMapKHR = (int64_t(1) << 50),
	e2DepthCopyOnComputeQueueKHR = (int64_t(1) << 52),
	e2DepthCopyOnTransferQueueKHR = (int64_t(1) << 53),
	e2StencilCopyOnComputeQueueKHR = (int64_t(1) << 54),
	e2StencilCopyOnTransferQueueKHR = (int64_t(1) << 55),
	e2DataGraphOpticalFlowImageARM = (int64_t(1) << 56),
	e2DataGraphOpticalFlowVectorARM = (int64_t(1) << 57),
	e2DataGraphOpticalFlowCostARM = (int64_t(1) << 58)
};
NYTL_FLAG_OPS(FormatFeatureBits2)


enum class PipelineRobustnessBufferBehavior : int32_t {
	deviceDefault = 0,
	disabled = 1,
	robustBufferAccess = 2,
	robustBufferAccess2 = 3,
	deviceDefaultEXT = 0,
	disabledEXT = 1,
	robustBufferAccessEXT = 2,
	robustBufferAccess2EXT = 3
};

enum class PipelineRobustnessImageBehavior : int32_t {
	deviceDefault = 0,
	disabled = 1,
	robustImageAccess = 2,
	robustImageAccess2 = 3,
	deviceDefaultEXT = 0,
	disabledEXT = 1,
	robustImageAccessEXT = 2,
	robustImageAccess2EXT = 3
};

enum class QueueGlobalPriority : int32_t {
	low = 128,
	medium = 256,
	high = 512,
	realtime = 1024,
	lowEXT = 128,
	mediumEXT = 256,
	highEXT = 512,
	realtimeEXT = 1024,
	lowKHR = 128,
	mediumKHR = 256,
	highKHR = 512,
	realtimeKHR = 1024
};

enum class MemoryUnmapBits : int32_t {
	reserveEXT = (1 << 0)
};
NYTL_FLAG_OPS(MemoryUnmapBits)

enum class BufferUsageBits2 : int64_t {
	e2TransferSrc = (int64_t(1) << 0),
	e2TransferDst = (int64_t(1) << 1),
	e2UniformTexelBuffer = (int64_t(1) << 2),
	e2StorageTexelBuffer = (int64_t(1) << 3),
	e2UniformBuffer = (int64_t(1) << 4),
	e2StorageBuffer = (int64_t(1) << 5),
	e2IndexBuffer = (int64_t(1) << 6),
	e2VertexBuffer = (int64_t(1) << 7),
	e2IndirectBuffer = (int64_t(1) << 8),
	e2ShaderDeviceAddress = (int64_t(1) << 17),
	e2DescriptorHeapEXT = (int64_t(1) << 28),
	e2TransferSrcKHR = (int64_t(1) << 0),
	e2TransferDstKHR = (int64_t(1) << 1),
	e2UniformTexelBufferKHR = (int64_t(1) << 2),
	e2StorageTexelBufferKHR = (int64_t(1) << 3),
	e2UniformBufferKHR = (int64_t(1) << 4),
	e2StorageBufferKHR = (int64_t(1) << 5),
	e2IndexBufferKHR = (int64_t(1) << 6),
	e2VertexBufferKHR = (int64_t(1) << 7),
	e2IndirectBufferKHR = (int64_t(1) << 8),
	e2ConditionalRenderingEXT = (int64_t(1) << 9),
	e2ShaderBindingTableKHR = (int64_t(1) << 10),
	e2RayTracingNV = (int64_t(1) << 10),
	e2TransformFeedbackBufferEXT = (int64_t(1) << 11),
	e2TransformFeedbackCounterBufferEXT = (int64_t(1) << 12),
	e2VideoDecodeSrcKHR = (int64_t(1) << 13),
	e2VideoDecodeDstKHR = (int64_t(1) << 14),
	e2VideoEncodeDstKHR = (int64_t(1) << 15),
	e2VideoEncodeSrcKHR = (int64_t(1) << 16),
	e2ShaderDeviceAddressKHR = (int64_t(1) << 17),
	e2AccelerationStructureBuildInputReadOnlyKHR = (int64_t(1) << 19),
	e2AccelerationStructureStorageKHR = (int64_t(1) << 20),
	e2SamplerDescriptorBufferEXT = (int64_t(1) << 21),
	e2ResourceDescriptorBufferEXT = (int64_t(1) << 22),
	e2PushDescriptorsDescriptorBufferEXT = (int64_t(1) << 26),
	e2MicromapBuildInputReadOnlyEXT = (int64_t(1) << 23),
	e2MicromapStorageEXT = (int64_t(1) << 24),
	e2DataGraphForeignDescriptorARM = (int64_t(1) << 29),
	e2TileMemoryQCOM = (int64_t(1) << 27),
	e2MemoryDecompressionEXT = (int64_t(1) << 32),
	e2PreprocessBufferEXT = (int64_t(1) << 31)
};
NYTL_FLAG_OPS(BufferUsageBits2)

enum class HostImageCopyBits : int32_t {
	memcpy = (1 << 0),
	memcpyEXT = (1 << 0)
};
NYTL_FLAG_OPS(HostImageCopyBits)


enum class PipelineCacheHeaderVersion : int32_t {
	one = 1,
	safetyCriticalOne = 1000298001,
	dataGraphQCOM = 1000629000
};

enum class EventCreateBits : int32_t {
	deviceOnly = (1 << 0),
	deviceOnlyKHR = (1 << 0)
};
NYTL_FLAG_OPS(EventCreateBits)

enum class PipelineCacheCreateBits : int32_t {
	externallySynchronized = (1 << 0),
	readOnly = (1 << 1),
	useApplicationStorage = (1 << 2),
	externallySynchronizedEXT = (1 << 0),
	internallySynchronizedMergeKHR = (1 << 3)
};
NYTL_FLAG_OPS(PipelineCacheCreateBits)

enum class PipelineCreateBits : int32_t {
	disableOptimization = (1 << 0),
	allowDerivatives = (1 << 1),
	derivative = (1 << 2),
	dispatchBase = (1 << 4),
	viewIndexFromDeviceIndex = (1 << 3),
	failOnPipelineCompileRequired = (1 << 8),
	earlyReturnOnFailure = (1 << 9),
	noProtectedAccess = (1 << 27),
	protectedAccessOnly = (1 << 30),
	viewIndexFromDeviceIndexKHR = (1 << 3),
	dispatchBaseKHR = (1 << 4),
	rayTracingNoNullAnyHitShadersKHR = (1 << 14),
	rayTracingNoNullClosestHitShadersKHR = (1 << 15),
	rayTracingNoNullMissShadersKHR = (1 << 16),
	rayTracingNoNullIntersectionShadersKHR = (1 << 17),
	rayTracingSkipTrianglesKHR = (1 << 12),
	rayTracingSkipAabbsKHR = (1 << 13),
	rayTracingShaderGroupHandleCaptureReplayKHR = (1 << 19),
	deferCompileNV = (1 << 5),
	renderingFragmentDensityMapAttachmentEXT = (1 << 22),
	rasterizationStateCreateFragmentDensityMapAttachmentEXT = (1 << 22),
	renderingFragmentShadingRateAttachmentKHR = (1 << 21),
	rasterizationStateCreateFragmentShadingRateAttachmentKHR = (1 << 21),
	captureStatisticsKHR = (1 << 6),
	captureInternalRepresentationsKHR = (1 << 7),
	indirectBindableNV = (1 << 18),
	libraryKHR = (1 << 11),
	failOnPipelineCompileRequiredEXT = (1 << 8),
	earlyReturnOnFailureEXT = (1 << 9),
	descriptorBufferEXT = (1 << 29),
	retainLinkTimeOptimizationInfoEXT = (1 << 23),
	linkTimeOptimizationEXT = (1 << 10),
	rayTracingAllowMotionNV = (1 << 20),
	colorAttachmentFeedbackLoopEXT = (1 << 25),
	depthStencilAttachmentFeedbackLoopEXT = (1 << 26),
	rayTracingOpacityMicromapEXT = (1 << 24),
	noProtectedAccessEXT = (1 << 27),
	protectedAccessOnlyEXT = (1 << 30)
};
NYTL_FLAG_OPS(PipelineCreateBits)

enum class PipelineLayoutCreateBits : int32_t {
	independentSetsEXT = (1 << 1),
	noTaskShaderKHR = (1 << 2)
};
NYTL_FLAG_OPS(PipelineLayoutCreateBits)

enum class PipelineShaderStageCreateBits : int32_t {
	allowVaryingSubgroupSize = (1 << 0),
	requireFullSubgroups = (1 << 1),
	allowVaryingSubgroupSizeEXT = (1 << 0),
	requireFullSubgroupsEXT = (1 << 1)
};
NYTL_FLAG_OPS(PipelineShaderStageCreateBits)

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

enum class Filter : int32_t {
	nearest = 0,
	linear = 1,
	cubicEXT = 1000015000
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
	subsampledCoarseReconstructionEXT = (1 << 1),
	descriptorBufferCaptureReplayEXT = (1 << 3),
	nonSeamlessCubeMapEXT = (1 << 2),
	imageProcessingQCOM = (1 << 4)
};
NYTL_FLAG_OPS(SamplerCreateBits)

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

enum class SamplerMipmapMode : int32_t {
	nearest = 0,
	linear = 1
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
	sampleWeightImageQCOM = 1000440000,
	blockMatchImageQCOM = 1000440001,
	tensorARM = 1000460000,
	mutableEXT = 1000351000,
	partitionedAccelerationStructureNV = 1000570000
};

enum class DescriptorPoolCreateBits : int32_t {
	freeDescriptorSet = (1 << 0),
	updateAfterBind = (1 << 1),
	updateAfterBindEXT = (1 << 1),
	hostOnlyEXT = (1 << 2),
	allowOverallocationSetsNV = (1 << 3),
	allowOverallocationPoolsNV = (1 << 4)
};
NYTL_FLAG_OPS(DescriptorPoolCreateBits)

enum class DescriptorSetLayoutCreateBits : int32_t {
	updateAfterBindPool = (1 << 1),
	pushDescriptor = (1 << 0),
	pushDescriptorKHR = (1 << 0),
	updateAfterBindPoolEXT = (1 << 1),
	descriptorBufferEXT = (1 << 4),
	embeddedImmutableSamplersEXT = (1 << 5),
	indirectBindableNV = (1 << 7),
	hostOnlyPoolEXT = (1 << 2),
	perStageNV = (1 << 6)
};
NYTL_FLAG_OPS(DescriptorSetLayoutCreateBits)

enum class PipelineBindPoint : int32_t {
	graphics = 0,
	compute = 1,
	rayTracingKHR = 1000165000,
	rayTracingNV = 1000165000,
	subpassShadingHUAWEI = 1000369003,
	dataGraphARM = 1000507000
};


enum class DescriptorUpdateTemplateType : int32_t {
	descriptorSet = 0,
	pushDescriptors = 1,
	pushDescriptorsKHR = 1,
	descriptorSetKHR = 0
};

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

enum class ChromaLocation : int32_t {
	cositedEven = 0,
	midpoint = 1,
	cositedEvenKHR = 0,
	midpointKHR = 1
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
	maxEXT = 2,
	weightedAverageRangeclampQCOM = 1000521000
};


enum class PipelineCreationFeedbackBits : int32_t {
	valid = (1 << 0),
	applicationPipelineCacheHit = (1 << 1),
	basePipelineAcceleration = (1 << 2),
	validEXT = (1 << 0),
	applicationPipelineCacheHitEXT = (1 << 1),
	basePipelineAccelerationEXT = (1 << 2)
};
NYTL_FLAG_OPS(PipelineCreationFeedbackBits)


enum class PipelineCreateBits2 : int64_t {
	e2DisableOptimization = (int64_t(1) << 0),
	e2AllowDerivatives = (int64_t(1) << 1),
	e2Derivative = (int64_t(1) << 2),
	e2ViewIndexFromDeviceIndex = (int64_t(1) << 3),
	e2DispatchBase = (int64_t(1) << 4),
	e2FailOnPipelineCompileRequired = (int64_t(1) << 8),
	e2EarlyReturnOnFailure = (int64_t(1) << 9),
	e2NoProtectedAccess = (int64_t(1) << 27),
	e2ProtectedAccessOnly = (int64_t(1) << 30),
	e2DescriptorHeapEXT = (int64_t(1) << 36),
	e2RayTracingAllowSpheresAndLinearSweptSpheresNV = (int64_t(1) << 33),
	e2EnableLegacyDitheringEXT = (int64_t(1) << 34),
	e2DisableOptimizationKHR = (int64_t(1) << 0),
	e2AllowDerivativesKHR = (int64_t(1) << 1),
	e2DerivativeKHR = (int64_t(1) << 2),
	e2ViewIndexFromDeviceIndexKHR = (int64_t(1) << 3),
	e2DispatchBaseKHR = (int64_t(1) << 4),
	e2DeferCompileNV = (int64_t(1) << 5),
	e2CaptureStatisticsKHR = (int64_t(1) << 6),
	e2CaptureInternalRepresentationsKHR = (int64_t(1) << 7),
	e2FailOnPipelineCompileRequiredKHR = (int64_t(1) << 8),
	e2EarlyReturnOnFailureKHR = (int64_t(1) << 9),
	e2LinkTimeOptimizationEXT = (int64_t(1) << 10),
	e2RetainLinkTimeOptimizationInfoEXT = (int64_t(1) << 23),
	e2LibraryKHR = (int64_t(1) << 11),
	e2RayTracingSkipTrianglesKHR = (int64_t(1) << 12),
	e2RayTracingSkipAabbsKHR = (int64_t(1) << 13),
	e2RayTracingNoNullAnyHitShadersKHR = (int64_t(1) << 14),
	e2RayTracingNoNullClosestHitShadersKHR = (int64_t(1) << 15),
	e2RayTracingNoNullMissShadersKHR = (int64_t(1) << 16),
	e2RayTracingNoNullIntersectionShadersKHR = (int64_t(1) << 17),
	e2RayTracingShaderGroupHandleCaptureReplayKHR = (int64_t(1) << 19),
	e2IndirectBindableNV = (int64_t(1) << 18),
	e2RayTracingAllowMotionNV = (int64_t(1) << 20),
	e2RenderingFragmentShadingRateAttachmentKHR = (int64_t(1) << 21),
	e2RenderingFragmentDensityMapAttachmentEXT = (int64_t(1) << 22),
	e2RayTracingOpacityMicromapEXT = (int64_t(1) << 24),
	e2ColorAttachmentFeedbackLoopEXT = (int64_t(1) << 25),
	e2DepthStencilAttachmentFeedbackLoopEXT = (int64_t(1) << 26),
	e2NoProtectedAccessEXT = (int64_t(1) << 27),
	e2ProtectedAccessOnlyEXT = (int64_t(1) << 30),
	e2RayTracingDisplacementMicromapNV = (int64_t(1) << 28),
	e2DescriptorBufferEXT = (int64_t(1) << 29),
	e2DisallowOpacityMicromapARM = (int64_t(1) << 37),
	e2InstrumentShadersARM = (int64_t(1) << 39),
	e2CaptureDataKHR = (int64_t(1) << 31),
	e2IndirectBindableEXT = (int64_t(1) << 38),
	e2PerLayerFragmentDensityVALVE = (int64_t(1) << 40),
	e264BitIndexingEXT = (int64_t(1) << 43)
};
NYTL_FLAG_OPS(PipelineCreateBits2)


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

enum class CullModeBits : int32_t {
	none = 0,
	front = (1 << 0),
	back = (1 << 1),
	frontAndBack = 3
};
NYTL_FLAG_OPS(CullModeBits)

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
	lineStipple = 1000259000,
	viewportWScalingNV = 1000087000,
	discardRectangleEXT = 1000099000,
	discardRectangleEnableEXT = 1000099001,
	discardRectangleModeEXT = 1000099002,
	sampleLocationsEXT = 1000143000,
	rayTracingPipelineStackSizeKHR = 1000347000,
	viewportShadingRatePaletteNV = 1000164004,
	viewportCoarseSampleOrderNV = 1000164006,
	exclusiveScissorEnableNV = 1000205000,
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
	colorWriteEnableEXT = 1000381000,
	depthClampEnableEXT = 1000455003,
	polygonModeEXT = 1000455004,
	rasterizationSamplesEXT = 1000455005,
	sampleMaskEXT = 1000455006,
	alphaToCoverageEnableEXT = 1000455007,
	alphaToOneEnableEXT = 1000455008,
	logicOpEnableEXT = 1000455009,
	colorBlendEnableEXT = 1000455010,
	colorBlendEquationEXT = 1000455011,
	colorWriteMaskEXT = 1000455012,
	tessellationDomainOriginEXT = 1000455002,
	rasterizationStreamEXT = 1000455013,
	conservativeRasterizationModeEXT = 1000455014,
	extraPrimitiveOverestimationSizeEXT = 1000455015,
	depthClipEnableEXT = 1000455016,
	sampleLocationsEnableEXT = 1000455017,
	colorBlendAdvancedEXT = 1000455018,
	provokingVertexModeEXT = 1000455019,
	lineRasterizationModeEXT = 1000455020,
	lineStippleEnableEXT = 1000455021,
	depthClipNegativeOneToOneEXT = 1000455022,
	viewportWScalingEnableNV = 1000455023,
	viewportSwizzleNV = 1000455024,
	coverageToColorEnableNV = 1000455025,
	coverageToColorLocationNV = 1000455026,
	coverageModulationModeNV = 1000455027,
	coverageModulationTableEnableNV = 1000455028,
	coverageModulationTableNV = 1000455029,
	shadingRateImageEnableNV = 1000455030,
	representativeFragmentTestEnableNV = 1000455031,
	coverageReductionModeNV = 1000455032,
	attachmentFeedbackLoopEnableEXT = 1000524000,
	lineStippleKHR = 1000259000,
	depthClampRangeEXT = 1000582000
};

enum class FrontFace : int32_t {
	counterClockwise = 0,
	clockwise = 1
};

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

enum class VertexInputRate : int32_t {
	vertex = 0,
	instance = 1
};

enum class PipelineColorBlendStateCreateBits : int32_t {
	rasterizationOrderAttachmentAccessEXT = (1 << 0)
};
NYTL_FLAG_OPS(PipelineColorBlendStateCreateBits)

enum class PipelineDepthStencilStateCreateBits : int32_t {
	rasterizationOrderAttachmentDepthAccessEXT = (1 << 0),
	rasterizationOrderAttachmentStencilAccessEXT = (1 << 1)
};
NYTL_FLAG_OPS(PipelineDepthStencilStateCreateBits)

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

enum class PolygonMode : int32_t {
	fill = 0,
	line = 1,
	point = 2,
	fillRectangleNV = 1000153000
};

enum class AttachmentDescriptionBits : int32_t {
	mayAlias = (1 << 0),
	resolveSkipTransferFunctionKHR = (1 << 1),
	resolveEnableTransferFunctionKHR = (1 << 2)
};
NYTL_FLAG_OPS(AttachmentDescriptionBits)

enum class AttachmentLoadOp : int32_t {
	load = 0,
	clear = 1,
	dontCare = 2,
	none = 1000400000,
	noneEXT = 1000400000,
	noneKHR = 1000400000
};

enum class AttachmentStoreOp : int32_t {
	store = 0,
	dontCare = 1,
	none = 1000301000,
	noneKHR = 1000301000,
	noneQCOM = 1000301000,
	noneEXT = 1000301000
};

enum class FramebufferCreateBits : int32_t {
	imageless = (1 << 0),
	imagelessKHR = (1 << 0)
};
NYTL_FLAG_OPS(FramebufferCreateBits)

enum class RenderPassCreateBits : int32_t {
	transformQCOM = (1 << 1),
	perLayerFragmentDensityVALVE = (1 << 2)
};
NYTL_FLAG_OPS(RenderPassCreateBits)

enum class SubpassDescriptionBits : int32_t {
	tileShadingApronQCOM = (1 << 8),
	rasterizationOrderAttachmentColorAccessEXT = (1 << 4),
	rasterizationOrderAttachmentDepthAccessEXT = (1 << 5),
	rasterizationOrderAttachmentStencilAccessEXT = (1 << 6),
	enableLegacyDitheringEXT = (1 << 7),
	fragmentRegionEXT = (1 << 2),
	customResolveEXT = (1 << 3)
};
NYTL_FLAG_OPS(SubpassDescriptionBits)

enum class StencilFaceBits : int32_t {
	front = (1 << 0),
	back = (1 << 1),
	frontAndBack = 3,
	rontAndBack = 3
};
NYTL_FLAG_OPS(StencilFaceBits)

enum class SubpassContents : int32_t {
	eInline = 0,
	secondaryCommandBuffers = 1,
	inlineAndSecondaryCommandBuffersKHR = 1000451000
};


enum class TessellationDomainOrigin : int32_t {
	upperLeft = 0,
	lowerLeft = 1,
	upperLeftKHR = 0,
	lowerLeftKHR = 1
};


enum class RenderingBits : int32_t {
	contentsSecondaryCommandBuffers = (1 << 0),
	suspending = (1 << 1),
	resuming = (1 << 2),
	contentsSecondaryCommandBuffersKHR = (1 << 0),
	suspendingKHR = (1 << 1),
	resumingKHR = (1 << 2),
	enableLegacyDitheringEXT = (1 << 3),
	contentsInlineKHR = (1 << 4),
	perLayerFragmentDensityVALVE = (1 << 5),
	fragmentRegionEXT = (1 << 6),
	customResolveEXT = (1 << 7),
	localReadConcurrentAccessControlKHR = (1 << 8)
};
NYTL_FLAG_OPS(RenderingBits)


enum class LineRasterizationMode : int32_t {
	eDefault = 0,
	rectangular = 1,
	bresenham = 2,
	rectangularSmooth = 3,
	defaultEXT = 0,
	rectangularEXT = 1,
	bresenhamEXT = 2,
	rectangularSmoothEXT = 3,
	defaultKHR = 0,
	rectangularKHR = 1,
	bresenhamKHR = 2,
	rectangularSmoothKHR = 3
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
	sharedContinuousRefresh = 1000111001,
	fifoLatestReady = 1000361000
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
	mutableFormat = (1 << 2),
	presentTimingEXT = (1 << 9),
	presentID2 = (1 << 6),
	presentWait2 = (1 << 7),
	deferredMemoryAllocation = (1 << 3)
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


enum class VideoCodecOperationBitsKHR : int32_t {
	none = 0,
	encodeH264 = (1 << 16),
	encodeH265 = (1 << 17),
	decodeH264 = (1 << 0),
	decodeH265 = (1 << 1),
	decodeAv1 = (1 << 2),
	encodeAv1 = (1 << 18),
	decodeVp9 = (1 << 3)
};
NYTL_FLAG_OPS(VideoCodecOperationBitsKHR)

enum class VideoChromaSubsamplingBitsKHR : int32_t {
	invalid = 0,
	monochrome = (1 << 0),
	e420 = (1 << 1),
	e422 = (1 << 2),
	e444 = (1 << 3)
};
NYTL_FLAG_OPS(VideoChromaSubsamplingBitsKHR)

enum class VideoComponentBitDepthBitsKHR : int32_t {
	invalid = 0,
	e8 = (1 << 0),
	e10 = (1 << 2),
	e12 = (1 << 4)
};
NYTL_FLAG_OPS(VideoComponentBitDepthBitsKHR)

enum class VideoCapabilityBitsKHR : int32_t {
	protectedContent = (1 << 0),
	separateReferenceImages = (1 << 1)
};
NYTL_FLAG_OPS(VideoCapabilityBitsKHR)

enum class VideoSessionCreateBitsKHR : int32_t {
	protectedContent = (1 << 0),
	allowEncodeParameterOptimizations = (1 << 1),
	inlineQueries = (1 << 2),
	allowEncodeQuantizationDeltaMap = (1 << 3),
	allowEncodeEmphasisMap = (1 << 4),
	inlineSessionParameters = (1 << 5)
};
NYTL_FLAG_OPS(VideoSessionCreateBitsKHR)

enum class VideoSessionParametersCreateBitsKHR : int32_t {
	quantizationMapCompatible = (1 << 0)
};
NYTL_FLAG_OPS(VideoSessionParametersCreateBitsKHR)

enum class VideoCodingControlBitsKHR : int32_t {
	reset = (1 << 0),
	encodeRateControl = (1 << 1),
	encodeQualityLevel = (1 << 2)
};
NYTL_FLAG_OPS(VideoCodingControlBitsKHR)

enum class QueryResultStatusKHR : int32_t {
	error = -1,
	notReady = 0,
	complete = 1,
	insufficientBitstreamBufferRange = -1000299000
};


enum class VideoDecodeCapabilityBitsKHR : int32_t {
	dpbAndOutputCoincide = (1 << 0),
	dpbAndOutputDistinct = (1 << 1)
};
NYTL_FLAG_OPS(VideoDecodeCapabilityBitsKHR)

enum class VideoDecodeUsageBitsKHR : int32_t {
	eDefault = 0,
	transcoding = (1 << 0),
	offline = (1 << 1),
	streaming = (1 << 2)
};
NYTL_FLAG_OPS(VideoDecodeUsageBitsKHR)


enum class VideoEncodeH264CapabilityBitsKHR : int32_t {
	hrdCompliance = (1 << 0),
	predictionWeightTableGenerated = (1 << 1),
	rowUnalignedSlice = (1 << 2),
	differentSliceType = (1 << 3),
	bFrameInL0List = (1 << 4),
	bFrameInL1List = (1 << 5),
	perPictureTypeMinMaxQp = (1 << 6),
	perSliceConstantQp = (1 << 7),
	generatePrefixNalu = (1 << 8),
	bPictureIntraRefresh = (1 << 10),
	mbQpDiffWraparound = (1 << 9)
};
NYTL_FLAG_OPS(VideoEncodeH264CapabilityBitsKHR)

enum class VideoEncodeH264StdBitsKHR : int32_t {
	separateColorPlaneFlagSet = (1 << 0),
	qpprimeYZeroTransformBypassFlagSet = (1 << 1),
	scalingMatrixPresentFlagSet = (1 << 2),
	chromaQpIndexOffset = (1 << 3),
	secondChromaQpIndexOffset = (1 << 4),
	picInitQpMinus26 = (1 << 5),
	weightedPredFlagSet = (1 << 6),
	weightedBipredIDcExplicit = (1 << 7),
	weightedBipredIDcImplicit = (1 << 8),
	transform8x8ModeFlagSet = (1 << 9),
	directSpatialMvPredFlagUnset = (1 << 10),
	entropyCodingModeFlagUnset = (1 << 11),
	entropyCodingModeFlagSet = (1 << 12),
	direct8x8InferenceFlagUnset = (1 << 13),
	constrainedIntraPredFlagSet = (1 << 14),
	deblockingFilterDisabled = (1 << 15),
	deblockingFilterEnabled = (1 << 16),
	deblockingFilterPartial = (1 << 17),
	sliceQpDelta = (1 << 19),
	differentSliceQpDelta = (1 << 20)
};
NYTL_FLAG_OPS(VideoEncodeH264StdBitsKHR)

enum class VideoEncodeH264RateControlBitsKHR : int32_t {
	attemptHrdCompliance = (1 << 0),
	regularGop = (1 << 1),
	referencePatternFlat = (1 << 2),
	referencePatternDyadic = (1 << 3),
	temporalLayerPatternDyadic = (1 << 4)
};
NYTL_FLAG_OPS(VideoEncodeH264RateControlBitsKHR)


enum class VideoEncodeH265CapabilityBitsKHR : int32_t {
	hrdCompliance = (1 << 0),
	predictionWeightTableGenerated = (1 << 1),
	rowUnalignedSliceSegment = (1 << 2),
	differentSliceSegmentType = (1 << 3),
	bFrameInL0List = (1 << 4),
	bFrameInL1List = (1 << 5),
	perPictureTypeMinMaxQp = (1 << 6),
	perSliceSegmentConstantQp = (1 << 7),
	multipleTilesPerSliceSegment = (1 << 8),
	multipleSliceSegmentsPerTile = (1 << 9),
	bPictureIntraRefresh = (1 << 11),
	cuQpDiffWraparound = (1 << 10)
};
NYTL_FLAG_OPS(VideoEncodeH265CapabilityBitsKHR)

enum class VideoEncodeH265StdBitsKHR : int32_t {
	separateColorPlaneFlagSet = (1 << 0),
	sampleAdaptiveOffsetEnabledFlagSet = (1 << 1),
	scalingListDataPresentFlagSet = (1 << 2),
	pcmEnabledFlagSet = (1 << 3),
	spsTemporalMvpEnabledFlagSet = (1 << 4),
	initQpMinus26 = (1 << 5),
	weightedPredFlagSet = (1 << 6),
	weightedBipredFlagSet = (1 << 7),
	log2ParallelMergeLevelMinus2 = (1 << 8),
	signDataHidingEnabledFlagSet = (1 << 9),
	transformSkipEnabledFlagSet = (1 << 10),
	transformSkipEnabledFlagUnset = (1 << 11),
	ppsSliceChromaQpOffsetsPresentFlagSet = (1 << 12),
	transquantBypassEnabledFlagSet = (1 << 13),
	constrainedIntraPredFlagSet = (1 << 14),
	entropyCodingSyncEnabledFlagSet = (1 << 15),
	deblockingFilterOverrideEnabledFlagSet = (1 << 16),
	dependentSliceSegmentsEnabledFlagSet = (1 << 17),
	dependentSliceSegmentFlagSet = (1 << 18),
	sliceQpDelta = (1 << 19),
	differentSliceQpDelta = (1 << 20)
};
NYTL_FLAG_OPS(VideoEncodeH265StdBitsKHR)

enum class VideoEncodeH265CtbSizeBitsKHR : int32_t {
	e16 = (1 << 0),
	e32 = (1 << 1),
	e64 = (1 << 2)
};
NYTL_FLAG_OPS(VideoEncodeH265CtbSizeBitsKHR)

enum class VideoEncodeH265TransformBlockSizeBitsKHR : int32_t {
	e4 = (1 << 0),
	e8 = (1 << 1),
	e16 = (1 << 2),
	e32 = (1 << 3)
};
NYTL_FLAG_OPS(VideoEncodeH265TransformBlockSizeBitsKHR)

enum class VideoEncodeH265RateControlBitsKHR : int32_t {
	attemptHrdCompliance = (1 << 0),
	regularGop = (1 << 1),
	referencePatternFlat = (1 << 2),
	referencePatternDyadic = (1 << 3),
	temporalSubLayerPatternDyadic = (1 << 4)
};
NYTL_FLAG_OPS(VideoEncodeH265RateControlBitsKHR)


enum class VideoDecodeH264PictureLayoutBitsKHR : int32_t {
	progressive = 0,
	interlacedInterleavedLines = (1 << 0),
	interlacedSeparatePlanes = (1 << 1)
};
NYTL_FLAG_OPS(VideoDecodeH264PictureLayoutBitsKHR)


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
	motionNV = (1 << 5),
	allowOpacityMicromapUpdateEXT = (1 << 6),
	allowDisableOpacityMicromapsEXT = (1 << 7),
	allowOpacityMicromapDataUpdateEXT = (1 << 8),
	allowDataAccess = (1 << 11),
	allowClusterOpacityMicromapsNV = (1 << 12)
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
	aabbsNV = 1,
	spheresNV = 1000429004,
	linearSweptSpheresNV = 1000429005
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
	forceNoOpaqueNV = (1 << 3),
	forceOpacityMicromap2StateEXT = (1 << 4),
	disableOpacityMicromapsEXT = (1 << 5)
};
NYTL_FLAG_OPS(GeometryInstanceBitsKHR)

enum class AccelerationStructureCreateBitsKHR : int32_t {
	deviceAddressCaptureReplay = (1 << 0),
	descriptorBufferCaptureReplayEXT = (1 << 3),
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


enum class FragmentShadingRateCombinerOpKHR : int32_t {
	keep = 0,
	replace = 1,
	min = 2,
	max = 3,
	mul = 4
};


enum class PipelineExecutableStatisticFormatKHR : int32_t {
	bool32 = 0,
	int64 = 1,
	uint64 = 2,
	float64 = 3
};


enum class VideoEncodeBitsKHR : int32_t {
	intraRefresh = (1 << 2),
	withQuantizationDeltaMap = (1 << 0),
	withEmphasisMap = (1 << 1)
};
NYTL_FLAG_OPS(VideoEncodeBitsKHR)

enum class VideoEncodeCapabilityBitsKHR : int32_t {
	precedingExternallyEncodedBytes = (1 << 0),
	insufficientBitstreamBufferRangeDetection = (1 << 1),
	quantizationDeltaMap = (1 << 2),
	emphasisMap = (1 << 3)
};
NYTL_FLAG_OPS(VideoEncodeCapabilityBitsKHR)

enum class VideoEncodeRateControlModeBitsKHR : int32_t {
	eDefault = 0,
	disabled = (1 << 0),
	cbr = (1 << 1),
	vbr = (1 << 2)
};
NYTL_FLAG_OPS(VideoEncodeRateControlModeBitsKHR)

enum class VideoEncodeFeedbackBitsKHR : int32_t {
	bitstreamBufferOffset = (1 << 0),
	bitstreamBytesWritten = (1 << 1),
	bitstreamHasOverrides = (1 << 2)
};
NYTL_FLAG_OPS(VideoEncodeFeedbackBitsKHR)

enum class VideoEncodeUsageBitsKHR : int32_t {
	eDefault = 0,
	transcoding = (1 << 0),
	streaming = (1 << 1),
	recording = (1 << 2),
	conferencing = (1 << 3)
};
NYTL_FLAG_OPS(VideoEncodeUsageBitsKHR)

enum class VideoEncodeContentBitsKHR : int32_t {
	eDefault = 0,
	camera = (1 << 0),
	desktop = (1 << 1),
	rendered = (1 << 2)
};
NYTL_FLAG_OPS(VideoEncodeContentBitsKHR)

enum class VideoEncodeTuningModeKHR : int32_t {
	eDefault = 0,
	highQuality = 1,
	lowLatency = 2,
	ultraLowLatency = 3,
	lossless = 4
};


enum class AddressCommandBitsKHR : int32_t {
	eProtected = (1 << 0),
	fullyBound = (1 << 1),
	storageBufferUsage = (1 << 2),
	unknownStorageBufferUsage = (1 << 3),
	transformFeedbackBufferUsage = (1 << 4),
	unknownTransformFeedbackBufferUsage = (1 << 5)
};
NYTL_FLAG_OPS(AddressCommandBitsKHR)

enum class ConditionalRenderingBitsEXT : int32_t {
	inverted = (1 << 0)
};
NYTL_FLAG_OPS(ConditionalRenderingBitsEXT)


enum class PresentScalingBitsKHR : int32_t {
	oneToOne = (1 << 0),
	oneToOneEXT = (1 << 0),
	aspectRatioStretch = (1 << 1),
	aspectRatioStretchEXT = (1 << 1),
	stretch = (1 << 2),
	stretchEXT = (1 << 2)
};
NYTL_FLAG_OPS(PresentScalingBitsKHR)

enum class PresentGravityBitsKHR : int32_t {
	min = (1 << 0),
	minEXT = (1 << 0),
	max = (1 << 1),
	maxEXT = (1 << 1),
	centered = (1 << 2),
	centeredEXT = (1 << 2)
};
NYTL_FLAG_OPS(PresentGravityBitsKHR)


enum class ComponentTypeKHR : int32_t {
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
	uint64 = 10,
	bfloat16 = 1000141000,
	float16NV = 0,
	float32NV = 1,
	float64NV = 2,
	sint8NV = 3,
	sint16NV = 4,
	sint32NV = 5,
	sint64NV = 6,
	uint8NV = 7,
	uint16NV = 8,
	uint32NV = 9,
	uint64NV = 10,
	sint8PackedNV = 1000491000,
	uint8PackedNV = 1000491001,
	float8E4m3EXT = 1000491002,
	float8E5m2EXT = 1000491003
};

enum class ScopeKHR : int32_t {
	device = 1,
	workgroup = 2,
	subgroup = 3,
	queueFamily = 5,
	deviceNV = 1,
	workgroupNV = 2,
	subgroupNV = 3,
	queueFamilyNV = 5
};


enum class VideoEncodeAV1PredictionModeKHR : int32_t {
	intraOnly = 0,
	singleReference = 1,
	unidirectionalCompound = 2,
	bidirectionalCompound = 3
};

enum class VideoEncodeAV1RateControlGroupKHR : int32_t {
	intra = 0,
	predictive = 1,
	bipredictive = 2
};

enum class VideoEncodeAV1CapabilityBitsKHR : int32_t {
	perRateControlGroupMinMaxQIndex = (1 << 0),
	generateObuExtensionHeader = (1 << 1),
	primaryReferenceCdfOnly = (1 << 2),
	frameSizeOverride = (1 << 3),
	motionVectorScaling = (1 << 4),
	compoundPredictionIntraRefresh = (1 << 5)
};
NYTL_FLAG_OPS(VideoEncodeAV1CapabilityBitsKHR)

enum class VideoEncodeAV1StdBitsKHR : int32_t {
	uniformTileSpacingFlagSet = (1 << 0),
	skipModePresentUnset = (1 << 1),
	primaryRefFrame = (1 << 2),
	deltaQ = (1 << 3)
};
NYTL_FLAG_OPS(VideoEncodeAV1StdBitsKHR)

enum class VideoEncodeAV1SuperblockSizeBitsKHR : int32_t {
	e64 = (1 << 0),
	e128 = (1 << 1)
};
NYTL_FLAG_OPS(VideoEncodeAV1SuperblockSizeBitsKHR)

enum class VideoEncodeAV1RateControlBitsKHR : int32_t {
	regularGop = (1 << 0),
	temporalLayerPatternDyadic = (1 << 1),
	referencePatternFlat = (1 << 2),
	referencePatternDyadic = (1 << 3)
};
NYTL_FLAG_OPS(VideoEncodeAV1RateControlBitsKHR)


enum class TimeDomainKHR : int32_t {
	device = 0,
	clockMonotonic = 1,
	clockMonotonicRaw = 2,
	queryPerformanceCounter = 3,
	deviceEXT = 0,
	clockMonotonicEXT = 1,
	clockMonotonicRawEXT = 2,
	queryPerformanceCounterEXT = 3,
	presentStageLocalEXT = 1000208000,
	swapchainLocalEXT = 1000208001
};


enum class AddressCopyBitsKHR : int32_t {
	deviceLocal = (1 << 0),
	sparse = (1 << 1),
	eProtected = (1 << 2)
};
NYTL_FLAG_OPS(AddressCopyBitsKHR)


enum class VideoEncodeIntraRefreshModeBitsKHR : int32_t {
	none = 0,
	perPicturePartition = (1 << 0),
	blockBased = (1 << 1),
	blockRowBased = (1 << 2),
	blockColumnBased = (1 << 3)
};
NYTL_FLAG_OPS(VideoEncodeIntraRefreshModeBitsKHR)


enum class PhysicalDeviceLayeredApiKHR : int32_t {
	vulkan = 0,
	d3d12 = 1,
	metal = 2,
	opengl = 3,
	opengles = 4
};


enum class DeviceFaultBitsKHR : int32_t {
	flagDeviceLost = (1 << 0),
	flagMemoryAddress = (1 << 1),
	flagInstructionAddress = (1 << 2),
	flagVendor = (1 << 3),
	flagWatchdogTimeout = (1 << 4),
	flagOverflow = (1 << 5)
};
NYTL_FLAG_OPS(DeviceFaultBitsKHR)

enum class DeviceFaultAddressTypeKHR : int32_t {
	none = 0,
	readInvalid = 1,
	writeInvalid = 2,
	executeInvalid = 3,
	instructionPointerUnknown = 4,
	instructionPointerInvalid = 5,
	instructionPointerFault = 6,
	noneEXT = 0,
	readInvalidEXT = 1,
	writeInvalidEXT = 2,
	executeInvalidEXT = 3,
	instructionPointerUnknownEXT = 4,
	instructionPointerInvalidEXT = 5,
	instructionPointerFaultEXT = 6
};

enum class DeviceFaultVendorBinaryHeaderVersionKHR : int32_t {
	one = 1,
	oneEXT = 1
};


enum class AccessBits3KHR : int64_t {
	e3None = 0
};
NYTL_FLAG_OPS(AccessBits3KHR)


enum class DefaultVertexAttributeValueKHR : int32_t {
	zeroZeroZeroZero = 0,
	zeroZeroZeroOne = 1
};


enum class RenderingAttachmentBitsKHR : int32_t {
	inputAttachmentFeedback = (1 << 0),
	resolveSkipTransferFunction = (1 << 1),
	resolveEnableTransferFunction = (1 << 2)
};
NYTL_FLAG_OPS(RenderingAttachmentBitsKHR)

enum class ResolveImageBitsKHR : int32_t {
	skipTransferFunction = (1 << 0),
	enableTransferFunction = (1 << 1)
};
NYTL_FLAG_OPS(ResolveImageBitsKHR)


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


enum class ValidationCheckEXT : int32_t {
	all = 0,
	shaders = 1
};


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


enum class DiscardRectangleModeEXT : int32_t {
	inclusive = 0,
	exclusive = 1
};


enum class ConservativeRasterizationModeEXT : int32_t {
	disabled = 0,
	overestimate = 1,
	underestimate = 2
};


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
	performance = (1 << 2),
	deviceAddressBinding = (1 << 3)
};
NYTL_FLAG_OPS(DebugUtilsMessageTypeBitsEXT)


enum class TensorViewCreateBitsARM : int64_t {
	descriptorBufferCaptureReplay = (int64_t(1) << 0)
};
NYTL_FLAG_OPS(TensorViewCreateBitsARM)

enum class DescriptorMappingSourceEXT : int32_t {
	heapWithConstantOffset = 0,
	heapWithPushIndex = 1,
	heapWithIndirectIndex = 2,
	heapWithIndirectIndexArray = 3,
	resourceHeapData = 4,
	pushData = 5,
	pushAddress = 6,
	indirectAddress = 7,
	heapWithShaderRecordIndex = 8,
	shaderRecordData = 9,
	shaderRecordAddress = 10
};

enum class SpirvResourceTypeBitsEXT : int32_t {
	all = 2147483647,
	sampler = (1 << 0),
	sampledImage = (1 << 1),
	readOnlyImage = (1 << 2),
	readWriteImage = (1 << 3),
	combinedSampledImage = (1 << 4),
	uniformBuffer = (1 << 5),
	readOnlyStorageBuffer = (1 << 6),
	readWriteStorageBuffer = (1 << 7),
	accelerationStructure = (1 << 8),
	tensorARM = (1 << 9)
};
NYTL_FLAG_OPS(SpirvResourceTypeBitsEXT)


enum class BlendOverlapEXT : int32_t {
	uncorrelated = 0,
	disjoint = 1,
	conjoint = 2
};


enum class ValidationCacheHeaderVersionEXT : int32_t {
	one = 1
};


enum class PresentStageBitsEXT : int32_t {
	queueOperationsEnd = (1 << 0),
	requestDequeued = (1 << 1),
	imageFirstPixelOut = (1 << 2),
	imageFirstPixelVisible = (1 << 3)
};
NYTL_FLAG_OPS(PresentStageBitsEXT)

enum class PastPresentationTimingBitsEXT : int32_t {
	allowPartialResults = (1 << 0),
	allowOutOfOrderResults = (1 << 1)
};
NYTL_FLAG_OPS(PastPresentationTimingBitsEXT)

enum class PresentTimingInfoBitsEXT : int32_t {
	presentAtRelativeTime = (1 << 0),
	presentAtNearestRefreshCycle = (1 << 1)
};
NYTL_FLAG_OPS(PresentTimingInfoBitsEXT)


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

enum class DepthBiasRepresentationEXT : int32_t {
	leastRepresentableValueFormat = 0,
	leastRepresentableValueForceUnorm = 1,
	eFloat = 2
};


enum class DeviceMemoryReportEventTypeEXT : int32_t {
	allocate = 0,
	free = 1,
	import = 2,
	unimport = 3,
	allocationFailed = 4
};


enum class GraphicsPipelineLibraryBitsEXT : int32_t {
	vertexInputInterface = (1 << 0),
	preRasterizationShaders = (1 << 1),
	fragmentShader = (1 << 2),
	fragmentOutputInterface = (1 << 3)
};
NYTL_FLAG_OPS(GraphicsPipelineLibraryBitsEXT)


enum class ImageCompressionBitsEXT : int32_t {
	eDefault = 0,
	fixedRateDefault = (1 << 0),
	fixedRateExplicit = (1 << 1),
	disabled = (1 << 2)
};
NYTL_FLAG_OPS(ImageCompressionBitsEXT)

enum class ImageCompressionFixedRateBitsEXT : int32_t {
	none = 0,
	e1bpc = (1 << 0),
	e2bpc = (1 << 1),
	e3bpc = (1 << 2),
	e4bpc = (1 << 3),
	e5bpc = (1 << 4),
	e6bpc = (1 << 5),
	e7bpc = (1 << 6),
	e8bpc = (1 << 7),
	e9bpc = (1 << 8),
	e10bpc = (1 << 9),
	e11bpc = (1 << 10),
	e12bpc = (1 << 11),
	e13bpc = (1 << 12),
	e14bpc = (1 << 13),
	e15bpc = (1 << 14),
	e16bpc = (1 << 15),
	e17bpc = (1 << 16),
	e18bpc = (1 << 17),
	e19bpc = (1 << 18),
	e20bpc = (1 << 19),
	e21bpc = (1 << 20),
	e22bpc = (1 << 21),
	e23bpc = (1 << 22),
	e24bpc = (1 << 23)
};
NYTL_FLAG_OPS(ImageCompressionFixedRateBitsEXT)


enum class DeviceAddressBindingBitsEXT : int32_t {
	internalObject = (1 << 0)
};
NYTL_FLAG_OPS(DeviceAddressBindingBitsEXT)

enum class DeviceAddressBindingTypeEXT : int32_t {
	bind = 0,
	unbind = 1
};


enum class FrameBoundaryBitsEXT : int32_t {
	frameEnd = (1 << 0)
};
NYTL_FLAG_OPS(FrameBoundaryBitsEXT)


enum class MicromapTypeEXT : int32_t {
	opacityMicromap = 0
};

enum class BuildMicromapBitsEXT : int32_t {
	preferFastTrace = (1 << 0),
	preferFastBuild = (1 << 1),
	allowCompaction = (1 << 2)
};
NYTL_FLAG_OPS(BuildMicromapBitsEXT)

enum class BuildMicromapModeEXT : int32_t {
	build = 0
};

enum class MicromapCreateBitsEXT : int32_t {
	deviceAddressCaptureReplay = (1 << 0)
};
NYTL_FLAG_OPS(MicromapCreateBitsEXT)

enum class CopyMicromapModeEXT : int32_t {
	clone = 0,
	serialize = 1,
	deserialize = 2,
	compact = 3
};

enum class OpacityMicromapFormatEXT : int32_t {
	e2State = 1,
	e4State = 2
};

enum class OpacityMicromapSpecialIndexEXT : int32_t {
	fullyTransparent = -1,
	fullyOpaque = -2,
	fullyUnknownTransparent = -3,
	fullyUnknownOpaque = -4,
	clusterGeometryDisableOpacityMicromapNV = -5
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

enum class CoverageModulationModeNV : int32_t {
	none = 0,
	rgb = 1,
	alpha = 2,
	rgba = 3
};

enum class CoverageReductionModeNV : int32_t {
	merge = 0,
	truncate = 1
};


enum class SubpassMergeStatusEXT : int32_t {
	merged = 0,
	disallowed = 1,
	notMergedSideEffects = 2,
	notMergedSamplesMismatch = 3,
	notMergedViewsMismatch = 4,
	notMergedAliasing = 5,
	notMergedDependencies = 6,
	notMergedIncompatibleInputAttachment = 7,
	notMergedTooManyAttachments = 8,
	notMergedInsufficientStorage = 9,
	notMergedDepthStencilCount = 10,
	notMergedResolveAttachmentReuse = 11,
	notMergedSingleSubpass = 12,
	notMergedUnspecified = 13
};


enum class ShaderCreateBitsEXT : int32_t {
	linkStage = (1 << 0),
	descriptorHeap = (1 << 10),
	instrumentShaderARM = (1 << 11),
	allowVaryingSubgroupSize = (1 << 1),
	requireFullSubgroups = (1 << 2),
	noTaskShader = (1 << 3),
	dispatchBase = (1 << 4),
	fragmentShadingRateAttachment = (1 << 5),
	fragmentDensityMapAttachment = (1 << 6),
	indirectBindable = (1 << 7),
	e64BitIndexing = (1 << 15),
	independentSetsKHR = (1 << 18)
};
NYTL_FLAG_OPS(ShaderCreateBitsEXT)

enum class ShaderCodeTypeEXT : int32_t {
	binary = 0,
	spirv = 1
};

enum class DepthClampModeEXT : int32_t {
	viewportRange = 0,
	userDefinedRange = 1
};


enum class LayerSettingTypeEXT : int32_t {
	bool32 = 0,
	int32 = 1,
	int64 = 2,
	uint32 = 3,
	uint64 = 4,
	float32 = 5,
	float64 = 6,
	string = 7
};


enum class MemoryDecompressionMethodBitsEXT : int64_t {
	gdeflate10 = (int64_t(1) << 0),
	gdeflate10NV = (int64_t(1) << 0)
};
NYTL_FLAG_OPS(MemoryDecompressionMethodBitsEXT)


enum class IndirectCommandsInputModeBitsEXT : int32_t {
	vulkanIndexBuffer = (1 << 0),
	dxgiIndexBuffer = (1 << 1)
};
NYTL_FLAG_OPS(IndirectCommandsInputModeBitsEXT)

enum class IndirectExecutionSetInfoTypeEXT : int32_t {
	pipelines = 0,
	shaderObjects = 1
};

enum class IndirectCommandsLayoutUsageBitsEXT : int32_t {
	explicitPreprocess = (1 << 0),
	unorderedSequences = (1 << 1)
};
NYTL_FLAG_OPS(IndirectCommandsLayoutUsageBitsEXT)

enum class IndirectCommandsTokenTypeEXT : int32_t {
	executionSet = 0,
	pushConstant = 1,
	sequenceIndex = 2,
	indexBuffer = 3,
	vertexBuffer = 4,
	drawIndexed = 5,
	draw = 6,
	drawIndexedCount = 7,
	drawCount = 8,
	dispatch = 9,
	pushData = 1000135000,
	pushDataSequenceIndex = 1000135001,
	drawMeshTasksNV = 1000202002,
	drawMeshTasksCountNV = 1000202003,
	drawMeshTasks = 1000328000,
	drawMeshTasksCount = 1000328001,
	traceRays2 = 1000386004
};


enum class RayTracingInvocationReorderModeEXT : int32_t {
	none = 0,
	reorder = 1,
	noneNV = 0,
	reorderNV = 1
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


enum class ShaderCorePropertiesBitsAMD : int32_t {

};
NYTL_FLAG_OPS(ShaderCorePropertiesBitsAMD)


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
	drawTasks = 7,
	pushData = 1000135000,
	drawMeshTasks = 1000328000,
	pipeline = 1000428003,
	dispatch = 1000428004
};

enum class IndirectCommandsLayoutUsageBitsNV : int32_t {
	explicitPreprocess = (1 << 0),
	indexedSequences = (1 << 1),
	unorderedSequences = (1 << 2)
};
NYTL_FLAG_OPS(IndirectCommandsLayoutUsageBitsNV)


enum class DeviceDiagnosticsConfigBitsNV : int32_t {
	enableShaderDebugInfo = (1 << 0),
	enableResourceTracking = (1 << 1),
	enableAutomaticCheckpoints = (1 << 2),
	enableShaderErrorReporting = (1 << 3)
};
NYTL_FLAG_OPS(DeviceDiagnosticsConfigBitsNV)


enum class PerfHintTypeQCOM : int32_t {
	eDefault = 0,
	frequencyMin = 1,
	frequencyMax = 2,
	frequencyScaled = 3
};


enum class TileShadingRenderPassBitsQCOM : int32_t {
	enable = (1 << 0),
	perTileExecution = (1 << 1)
};
NYTL_FLAG_OPS(TileShadingRenderPassBitsQCOM)


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



#ifdef VK_USE_PLATFORM_FUCHSIA
enum class ImageConstraintsInfoBitsFUCHSIA : int32_t {
	cpuReadRarely = (1 << 0),
	cpuReadOften = (1 << 1),
	cpuWriteRarely = (1 << 2),
	cpuWriteOften = (1 << 3),
	protectedOptional = (1 << 4)
};
NYTL_FLAG_OPS(ImageConstraintsInfoBitsFUCHSIA)


#endif //VK_USE_PLATFORM_FUCHSIA

enum class VideoEncodeRgbModelConversionBitsVALVE : int32_t {
	rgbIDentity = (1 << 0),
	ycbcrIDentity = (1 << 1),
	ycbcr709 = (1 << 2),
	ycbcr601 = (1 << 3),
	ycbcr2020 = (1 << 4)
};
NYTL_FLAG_OPS(VideoEncodeRgbModelConversionBitsVALVE)

enum class VideoEncodeRgbRangeCompressionBitsVALVE : int32_t {
	fullRange = (1 << 0),
	narrowRange = (1 << 1)
};
NYTL_FLAG_OPS(VideoEncodeRgbRangeCompressionBitsVALVE)

enum class VideoEncodeRgbChromaOffsetBitsVALVE : int32_t {
	cositedEven = (1 << 0),
	midpoint = (1 << 1)
};
NYTL_FLAG_OPS(VideoEncodeRgbChromaOffsetBitsVALVE)


enum class PhysicalDeviceSchedulingControlsBitsARM : int64_t {
	shaderCoreCount = (int64_t(1) << 0),
	dispatchParameters = (int64_t(1) << 1)
};
NYTL_FLAG_OPS(PhysicalDeviceSchedulingControlsBitsARM)


enum class RayTracingLssIndexingModeNV : int32_t {
	list = 0,
	successive = 1
};

enum class RayTracingLssPrimitiveEndCapsModeNV : int32_t {
	none = 0,
	chained = 1
};


enum class DirectDriverLoadingModeLUNARG : int32_t {
	exclusive = 0,
	inclusive = 1
};


enum class TensorCreateBitsARM : int64_t {
	mutableFormat = (int64_t(1) << 0),
	eProtected = (int64_t(1) << 1),
	descriptorHeapCaptureReplay = (int64_t(1) << 3),
	descriptorBufferCaptureReplay = (int64_t(1) << 2)
};
NYTL_FLAG_OPS(TensorCreateBitsARM)

enum class TensorUsageBitsARM : int64_t {
	shader = (int64_t(1) << 1),
	transferSrc = (int64_t(1) << 2),
	transferDst = (int64_t(1) << 3),
	imageAliasing = (int64_t(1) << 4),
	dataGraph = (int64_t(1) << 5)
};
NYTL_FLAG_OPS(TensorUsageBitsARM)

enum class TensorTilingARM : int32_t {
	optimal = 0,
	linear = 1
};


enum class OpticalFlowGridSizeBitsNV : int32_t {
	unknown = 0,
	e1x1 = (1 << 0),
	e2x2 = (1 << 1),
	e4x4 = (1 << 2),
	e8x8 = (1 << 3)
};
NYTL_FLAG_OPS(OpticalFlowGridSizeBitsNV)

enum class OpticalFlowUsageBitsNV : int32_t {
	unknown = 0,
	input = (1 << 0),
	output = (1 << 1),
	hint = (1 << 2),
	cost = (1 << 3),
	globalFlow = (1 << 4)
};
NYTL_FLAG_OPS(OpticalFlowUsageBitsNV)

enum class OpticalFlowPerformanceLevelNV : int32_t {
	unknown = 0,
	slow = 1,
	medium = 2,
	fast = 3
};

enum class OpticalFlowSessionBindingPointNV : int32_t {
	unknown = 0,
	input = 1,
	reference = 2,
	hint = 3,
	flowVector = 4,
	backwardFlowVector = 5,
	cost = 6,
	backwardCost = 7,
	globalFlow = 8
};

enum class OpticalFlowSessionCreateBitsNV : int32_t {
	enableHint = (1 << 0),
	enableCost = (1 << 1),
	enableGlobalFlow = (1 << 2),
	allowRegions = (1 << 3),
	bothDirections = (1 << 4)
};
NYTL_FLAG_OPS(OpticalFlowSessionCreateBitsNV)

enum class OpticalFlowExecuteBitsNV : int32_t {
	disableTemporalHints = (1 << 0)
};
NYTL_FLAG_OPS(OpticalFlowExecuteBitsNV)


enum class AntiLagModeAMD : int32_t {
	driverControl = 0,
	on = 1,
	off = 2
};

enum class AntiLagStageAMD : int32_t {
	input = 0,
	present = 1
};


enum class CooperativeVectorMatrixLayoutNV : int32_t {
	rowMajor = 0,
	columnMajor = 1,
	inferencingOptimal = 2,
	trainingOptimal = 3
};


enum class LatencyMarkerNV : int32_t {
	simulationStart = 0,
	simulationEnd = 1,
	rendersubmitStart = 2,
	rendersubmitEnd = 3,
	presentStart = 4,
	presentEnd = 5,
	inputSample = 6,
	triggerFlash = 7,
	outOfBandRendersubmitStart = 8,
	outOfBandRendersubmitEnd = 9,
	outOfBandPresentStart = 10,
	outOfBandPresentEnd = 11
};

enum class OutOfBandQueueTypeNV : int32_t {
	render = 0,
	present = 1
};


enum class DataGraphPipelineSessionBindPointARM : int32_t {
	transient = 0,
	opticalFlowCache = 1000631001,
	neuralAcceleratorStatistics = 1000676000
};

enum class DataGraphPipelineSessionBindPointTypeARM : int32_t {
	memory = 0
};

enum class DataGraphPipelineSessionCreateBitsARM : int64_t {
	eProtected = (int64_t(1) << 0),
	opticalFlowCache = (int64_t(1) << 1)
};
NYTL_FLAG_OPS(DataGraphPipelineSessionCreateBitsARM)

enum class DataGraphPipelinePropertyARM : int32_t {
	creationLog = 0,
	identifier = 1,
	neuralAcceleratorDebugDatabase = 1000676000,
	neuralAcceleratorStatisticsInfo = 1000676001
};

enum class DataGraphPipelineDispatchBitsARM : int64_t {

};
NYTL_FLAG_OPS(DataGraphPipelineDispatchBitsARM)

enum class PhysicalDeviceDataGraphProcessingEngineTypeARM : int32_t {
	eDefault = 0,
	neuralQCOM = 1000629000,
	computeQCOM = 1000629001
};

enum class PhysicalDeviceDataGraphOperationTypeARM : int32_t {
	spirvExtendedInstructionSet = 0,
	neuralModelQCOM = 1000629000,
	builtinModelQCOM = 1000629001,
	opticalFlow = 1000631000
};


enum class DataGraphTOSAQualityBitsARM : int32_t {
	accelerated = (1 << 0),
	conformant = (1 << 1),
	experimental = (1 << 2),
	deprecated = (1 << 3)
};
NYTL_FLAG_OPS(DataGraphTOSAQualityBitsARM)

enum class DataGraphTOSALevelARM : int32_t {
	none = 0,
	e8k = 1
};


enum class BlockMatchWindowCompareModeQCOM : int32_t {
	min = 0,
	max = 1
};


enum class CubicFilterWeightsQCOM : int32_t {
	catmullRom = 0,
	zeroTangentCardinal = 1,
	bSpline = 2,
	mitchellNetravali = 3
};


enum class LayeredDriverUnderlyingApiMSFT : int32_t {
	none = 0,
	d3d12 = 1
};


enum class DisplaySurfaceStereoTypeNV : int32_t {
	none = 0,
	onboardDin = 1,
	hdmi3d = 2,
	inbandDisplayport = 3
};


enum class ClusterAccelerationStructureTypeNV : int32_t {
	clustersBottomLevel = 0,
	triangleCluster = 1,
	triangleClusterTemplate = 2
};

enum class ClusterAccelerationStructureOpTypeNV : int32_t {
	moveObjects = 0,
	buildClustersBottomLevel = 1,
	buildTriangleCluster = 2,
	buildTriangleClusterTemplate = 3,
	instantiateTriangleCluster = 4,
	getClusterTemplateIndices = 5
};

enum class ClusterAccelerationStructureOpModeNV : int32_t {
	implicitDestinations = 0,
	explicitDestinations = 1,
	computeSizes = 2
};

enum class ClusterAccelerationStructureAddressResolutionBitsNV : int32_t {
	none = 0,
	indirectedDstImplicitData = (1 << 0),
	indirectedScratchData = (1 << 1),
	indirectedDstAddressArray = (1 << 2),
	indirectedDstSizesArray = (1 << 3),
	indirectedSrcInfosArray = (1 << 4),
	indirectedSrcInfosCount = (1 << 5)
};
NYTL_FLAG_OPS(ClusterAccelerationStructureAddressResolutionBitsNV)

enum class ClusterAccelerationStructureClusterBitsNV : int32_t {
	allowDisableOpacityMicromaps = (1 << 0)
};
NYTL_FLAG_OPS(ClusterAccelerationStructureClusterBitsNV)

enum class ClusterAccelerationStructureGeometryBitsNV : int32_t {
	cullDisable = (1 << 0),
	noDuplicateAnyhitInvocation = (1 << 1),
	opaque = (1 << 2)
};
NYTL_FLAG_OPS(ClusterAccelerationStructureGeometryBitsNV)

enum class ClusterAccelerationStructureIndexFormatBitsNV : int32_t {
	e8bit = (1 << 0),
	e16bit = (1 << 1),
	e32bit = (1 << 2)
};
NYTL_FLAG_OPS(ClusterAccelerationStructureIndexFormatBitsNV)


enum class PartitionedAccelerationStructureOpTypeNV : int32_t {
	writeInstance = 0,
	updateInstance = 1,
	writePartitionTranslation = 2
};

enum class PartitionedAccelerationStructureInstanceBitsNV : int32_t {
	flagTriangleFacingCullDisable = (1 << 0),
	flagTriangleFlipFacing = (1 << 1),
	flagForceOpaque = (1 << 2),
	flagForceNoOpaque = (1 << 3),
	flagEnableExplicitBoundingBox = (1 << 4)
};
NYTL_FLAG_OPS(PartitionedAccelerationStructureInstanceBitsNV)


enum class DataGraphModelCacheTypeQCOM : int32_t {
	genericBinary = 0
};


enum class DataGraphOpticalFlowGridSizeBitsARM : int32_t {
	unknown = 0,
	e1x1 = (1 << 0),
	e2x2 = (1 << 1),
	e4x4 = (1 << 2),
	e8x8 = (1 << 3)
};
NYTL_FLAG_OPS(DataGraphOpticalFlowGridSizeBitsARM)

enum class DataGraphOpticalFlowPerformanceLevelARM : int32_t {
	unknown = 0,
	slow = 1,
	medium = 2,
	fast = 3
};

enum class DataGraphOpticalFlowCreateBitsARM : int32_t {
	enableHint = (1 << 0),
	enableCost = (1 << 1),
	reserved30 = (1 << 30)
};
NYTL_FLAG_OPS(DataGraphOpticalFlowCreateBitsARM)

enum class DataGraphOpticalFlowImageUsageBitsARM : int32_t {
	unknown = 0,
	input = (1 << 0),
	output = (1 << 1),
	hint = (1 << 2),
	cost = (1 << 3)
};
NYTL_FLAG_OPS(DataGraphOpticalFlowImageUsageBitsARM)

enum class DataGraphOpticalFlowExecuteBitsARM : int32_t {
	disableTemporalHints = (1 << 0),
	inputUnchanged = (1 << 1),
	referenceUnchanged = (1 << 2),
	inputIsPreviousReference = (1 << 3),
	referenceIsPreviousInput = (1 << 4)
};
NYTL_FLAG_OPS(DataGraphOpticalFlowExecuteBitsARM)

enum class DataGraphPipelineNodeTypeARM : int32_t {
	opticalFlow = 1000631000
};

enum class DataGraphPipelineNodeConnectionTypeARM : int32_t {
	opticalFlowInput = 1000631000,
	opticalFlowReference = 1000631001,
	opticalFlowHint = 1000631002,
	opticalFlowFlowVector = 1000631003,
	opticalFlowCost = 1000631004
};


enum class ThrottleHintTypeSEC : int32_t {
	eDefault = 0,
	low = 1,
	high = 2
};


enum class NeuralAcceleratorStatisticsModeARM : int32_t {
	disabled = 0,
	statistics0 = 1,
	statistics1 = 2
};



} // namespace vk

// The specification (vk.xml) itself is published under the following license:

// Copyright 2015-2026 The Khronos Group Inc.
// 
// SPDX-License-Identifier: Apache-2.0 OR MIT
    