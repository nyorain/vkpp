// Copyright (c) 2017 nyorain
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

// Automaitcally generated vulkan header, see nyorain/vkpp
// Do not edit manually, rather edit the codegen files.

#pragma once
#include <vkpp/fwd.hpp>
#include <vkpp/flags.hpp>

// Generated for vulkan version: 1.1.107

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
	errorOutOfPoolMemory = -1000000000,
	errorInvalidExternalHandle = -1000000003,
	errorSurfaceLostKHR = -1000000000,
	errorNativeWindowInUseKHR = -1000000001,
	suboptimalKHR = 1000001003,
	errorOutOfDateKHR = -1000001004,
	errorIncompatibleDisplayKHR = -1000003001,
	errorValidationFailedEXT = -1000011001,
	errorInvalidShaderNV = -1000012000,
	errorOutOfPoolMemoryKHR = -1000000000,
	errorInvalidExternalHandleKHR = -1000000003,
	errorInvalidDrmFormatModifierPlaneLayoutEXT = -1000158000,
	errorFragmentationEXT = -1000161000,
	errorNotPermittedEXT = -1000174001,
	errorInvalidDeviceAddressEXT = -1000244000,
	errorFullScreenExclusiveModeLostEXT = -1000255000
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
	physicalDeviceSubgroupProperties = 1000000000,
	bindBufferMemoryInfo = 1000000000,
	bindImageMemoryInfo = 1000000001,
	physicalDevice16bitStorageFeatures = 1000000000,
	memoryDedicatedRequirements = 1000000000,
	memoryDedicatedAllocateInfo = 1000000001,
	memoryAllocateFlagsInfo = 1000000000,
	deviceGroupRenderPassBeginInfo = 1000000003,
	deviceGroupCommandBufferBeginInfo = 1000000004,
	deviceGroupSubmitInfo = 1000000005,
	deviceGroupBindSparseInfo = 1000000006,
	bindBufferMemoryDeviceGroupInfo = 1000000013,
	bindImageMemoryDeviceGroupInfo = 1000000014,
	physicalDeviceGroupProperties = 1000000000,
	deviceGroupDeviceCreateInfo = 1000000001,
	bufferMemoryRequirementsInfo2 = 1000000000,
	imageMemoryRequirementsInfo2 = 1000000001,
	imageSparseMemoryRequirementsInfo2 = 1000000002,
	memoryRequirements2 = 1000000003,
	sparseImageMemoryRequirements2 = 1000000004,
	physicalDeviceFeatures2 = 1000000000,
	physicalDeviceProperties2 = 1000000001,
	formatProperties2 = 1000000002,
	imageFormatProperties2 = 1000000003,
	physicalDeviceImageFormatInfo2 = 1000000004,
	queueFamilyProperties2 = 1000000005,
	physicalDeviceMemoryProperties2 = 1000000006,
	sparseImageFormatProperties2 = 1000000007,
	physicalDeviceSparseImageFormatInfo2 = 1000000008,
	physicalDevicePointClippingProperties = 1000000000,
	renderPassInputAttachmentAspectCreateInfo = 1000000001,
	imageViewUsageCreateInfo = 1000000002,
	pipelineTessellationDomainOriginStateCreateInfo = 1000000003,
	renderPassMultiviewCreateInfo = 1000000000,
	physicalDeviceMultiviewFeatures = 1000000001,
	physicalDeviceMultiviewProperties = 1000000002,
	physicalDeviceVariablePointersFeatures = 1000000000,
	physicalDeviceVariablePointerFeatures = 1000000000,
	protectedSubmitInfo = 1000000000,
	physicalDeviceProtectedMemoryFeatures = 1000000001,
	physicalDeviceProtectedMemoryProperties = 1000000002,
	deviceQueueInfo2 = 1000000003,
	samplerYcbcrConversionCreateInfo = 1000000000,
	samplerYcbcrConversionInfo = 1000000001,
	bindImagePlaneMemoryInfo = 1000000002,
	imagePlaneMemoryRequirementsInfo = 1000000003,
	physicalDeviceSamplerYcbcrConversionFeatures = 1000000004,
	samplerYcbcrConversionImageFormatProperties = 1000000005,
	descriptorUpdateTemplateCreateInfo = 1000000000,
	physicalDeviceExternalImageFormatInfo = 1000000000,
	externalImageFormatProperties = 1000000001,
	physicalDeviceExternalBufferInfo = 1000000002,
	externalBufferProperties = 1000000003,
	physicalDeviceIDProperties = 1000000004,
	externalMemoryBufferCreateInfo = 1000000000,
	externalMemoryImageCreateInfo = 1000000001,
	exportMemoryAllocateInfo = 1000000002,
	physicalDeviceExternalFenceInfo = 1000000000,
	externalFenceProperties = 1000000001,
	exportFenceCreateInfo = 1000000000,
	exportSemaphoreCreateInfo = 1000000000,
	physicalDeviceExternalSemaphoreInfo = 1000000000,
	externalSemaphoreProperties = 1000000001,
	physicalDeviceMaintenance3Properties = 1000000000,
	descriptorSetLayoutSupport = 1000000001,
	physicalDeviceShaderDrawParametersFeatures = 1000000000,
	physicalDeviceShaderDrawParameterFeatures = 1000000000,
	swapchainCreateInfoKHR = 1000001000,
	presentInfoKHR = 1000001001,
	deviceGroupPresentCapabilitiesKHR = 1000001007,
	imageSwapchainCreateInfoKHR = 1000001008,
	bindImageMemorySwapchainInfoKHR = 1000001009,
	acquireNextImageInfoKHR = 1000001010,
	deviceGroupPresentInfoKHR = 1000001011,
	deviceGroupSwapchainCreateInfoKHR = 1000001012,
	displayModeCreateInfoKHR = 1000002000,
	displaySurfaceCreateInfoKHR = 1000002001,
	displayPresentInfoKHR = 1000003000,
	xlibSurfaceCreateInfoKHR = 1000004000,
	xcbSurfaceCreateInfoKHR = 1000005000,
	waylandSurfaceCreateInfoKHR = 1000006000,
	androidSurfaceCreateInfoKHR = 1000008000,
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
	streamDescriptorSurfaceCreateInfoGGP = 1000049000,
	physicalDeviceCornerSampledImageFeaturesNV = 1000050000,
	renderPassMultiviewCreateInfoKHR = 1000000000,
	physicalDeviceMultiviewFeaturesKHR = 1000000001,
	physicalDeviceMultiviewPropertiesKHR = 1000000002,
	externalMemoryImageCreateInfoNV = 1000056000,
	exportMemoryAllocateInfoNV = 1000056001,
	importMemoryWin32HandleInfoNV = 1000057000,
	exportMemoryWin32HandleInfoNV = 1000057001,
	win32KeyedMutexAcquireReleaseInfoNV = 1000058000,
	physicalDeviceFeatures2KHR = 1000000000,
	physicalDeviceProperties2KHR = 1000000001,
	formatProperties2KHR = 1000000002,
	imageFormatProperties2KHR = 1000000003,
	physicalDeviceImageFormatInfo2KHR = 1000000004,
	queueFamilyProperties2KHR = 1000000005,
	physicalDeviceMemoryProperties2KHR = 1000000006,
	sparseImageFormatProperties2KHR = 1000000007,
	physicalDeviceSparseImageFormatInfo2KHR = 1000000008,
	memoryAllocateFlagsInfoKHR = 1000000000,
	deviceGroupRenderPassBeginInfoKHR = 1000000003,
	deviceGroupCommandBufferBeginInfoKHR = 1000000004,
	deviceGroupSubmitInfoKHR = 1000000005,
	deviceGroupBindSparseInfoKHR = 1000000006,
	bindBufferMemoryDeviceGroupInfoKHR = 1000000013,
	bindImageMemoryDeviceGroupInfoKHR = 1000000014,
	validationFlagsEXT = 1000061000,
	viSurfaceCreateInfoNN = 1000062000,
	imageViewAstcDecodeModeEXT = 1000067000,
	physicalDeviceAstcDecodeFeaturesEXT = 1000067001,
	physicalDeviceGroupPropertiesKHR = 1000000000,
	deviceGroupDeviceCreateInfoKHR = 1000000001,
	physicalDeviceExternalImageFormatInfoKHR = 1000000000,
	externalImageFormatPropertiesKHR = 1000000001,
	physicalDeviceExternalBufferInfoKHR = 1000000002,
	externalBufferPropertiesKHR = 1000000003,
	physicalDeviceIDPropertiesKHR = 1000000004,
	externalMemoryBufferCreateInfoKHR = 1000000000,
	externalMemoryImageCreateInfoKHR = 1000000001,
	exportMemoryAllocateInfoKHR = 1000000002,
	importMemoryWin32HandleInfoKHR = 1000073000,
	exportMemoryWin32HandleInfoKHR = 1000073001,
	memoryWin32HandlePropertiesKHR = 1000073002,
	memoryGetWin32HandleInfoKHR = 1000073003,
	importMemoryFdInfoKHR = 1000074000,
	memoryFdPropertiesKHR = 1000074001,
	memoryGetFdInfoKHR = 1000074002,
	win32KeyedMutexAcquireReleaseInfoKHR = 1000075000,
	physicalDeviceExternalSemaphoreInfoKHR = 1000000000,
	externalSemaphorePropertiesKHR = 1000000001,
	exportSemaphoreCreateInfoKHR = 1000000000,
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
	physicalDeviceFloat16Int8FeaturesKHR = 1000082000,
	physicalDevice16bitStorageFeaturesKHR = 1000000000,
	presentRegionsKHR = 1000084000,
	descriptorUpdateTemplateCreateInfoKHR = 1000000000,
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
	attachmentDescription2KHR = 1000109000,
	attachmentReference2KHR = 1000109001,
	subpassDescription2KHR = 1000109002,
	subpassDependency2KHR = 1000109003,
	renderPassCreateInfo2KHR = 1000109004,
	subpassBeginInfoKHR = 1000109005,
	subpassEndInfoKHR = 1000109006,
	sharedPresentSurfaceCapabilitiesKHR = 1000111000,
	physicalDeviceExternalFenceInfoKHR = 1000000000,
	externalFencePropertiesKHR = 1000000001,
	exportFenceCreateInfoKHR = 1000000000,
	importFenceWin32HandleInfoKHR = 1000114000,
	exportFenceWin32HandleInfoKHR = 1000114001,
	fenceGetWin32HandleInfoKHR = 1000114002,
	importFenceFdInfoKHR = 1000115000,
	fenceGetFdInfoKHR = 1000115001,
	physicalDevicePointClippingPropertiesKHR = 1000000000,
	renderPassInputAttachmentAspectCreateInfoKHR = 1000000001,
	imageViewUsageCreateInfoKHR = 1000000002,
	pipelineTessellationDomainOriginStateCreateInfoKHR = 1000000003,
	physicalDeviceSurfaceInfo2KHR = 1000119000,
	surfaceCapabilities2KHR = 1000119001,
	surfaceFormat2KHR = 1000119002,
	physicalDeviceVariablePointerFeaturesKHR = 1000000000,
	physicalDeviceVariablePointersFeaturesKHR = 1000000000,
	displayProperties2KHR = 1000121000,
	displayPlaneProperties2KHR = 1000121001,
	displayModeProperties2KHR = 1000121002,
	displayPlaneInfo2KHR = 1000121003,
	displayPlaneCapabilities2KHR = 1000121004,
	iosSurfaceCreateInfoMVK = 1000122000,
	macosSurfaceCreateInfoMVK = 1000123000,
	memoryDedicatedRequirementsKHR = 1000000000,
	memoryDedicatedAllocateInfoKHR = 1000000001,
	debugUtilsObjectNameInfoEXT = 1000128000,
	debugUtilsObjectTagInfoEXT = 1000128001,
	debugUtilsLabelEXT = 1000128002,
	debugUtilsMessengerCallbackDataEXT = 1000128003,
	debugUtilsMessengerCreateInfoEXT = 1000128004,
	androidHardwareBufferUsageANDROID = 1000129000,
	androidHardwareBufferPropertiesANDROID = 1000129001,
	androidHardwareBufferFormatPropertiesANDROID = 1000129002,
	importAndroidHardwareBufferInfoANDROID = 1000129003,
	memoryGetAndroidHardwareBufferInfoANDROID = 1000129004,
	externalFormatANDROID = 1000129005,
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
	bufferMemoryRequirementsInfo2KHR = 1000000000,
	imageMemoryRequirementsInfo2KHR = 1000000001,
	imageSparseMemoryRequirementsInfo2KHR = 1000000002,
	memoryRequirements2KHR = 1000000003,
	sparseImageMemoryRequirements2KHR = 1000000004,
	imageFormatListCreateInfoKHR = 1000147000,
	physicalDeviceBlendOperationAdvancedFeaturesEXT = 1000148000,
	physicalDeviceBlendOperationAdvancedPropertiesEXT = 1000148001,
	pipelineColorBlendAdvancedStateCreateInfoEXT = 1000148002,
	pipelineCoverageToColorStateCreateInfoNV = 1000149000,
	pipelineCoverageModulationStateCreateInfoNV = 1000152000,
	samplerYcbcrConversionCreateInfoKHR = 1000000000,
	samplerYcbcrConversionInfoKHR = 1000000001,
	bindImagePlaneMemoryInfoKHR = 1000000002,
	imagePlaneMemoryRequirementsInfoKHR = 1000000003,
	physicalDeviceSamplerYcbcrConversionFeaturesKHR = 1000000004,
	samplerYcbcrConversionImageFormatPropertiesKHR = 1000000005,
	bindBufferMemoryInfoKHR = 1000000000,
	bindImageMemoryInfoKHR = 1000000001,
	drmFormatModifierPropertiesListEXT = 1000158000,
	drmFormatModifierPropertiesEXT = 1000158001,
	physicalDeviceImageDrmFormatModifierInfoEXT = 1000158002,
	imageDrmFormatModifierListCreateInfoEXT = 1000158003,
	imageDrmFormatModifierExplicitCreateInfoEXT = 1000158004,
	imageDrmFormatModifierPropertiesEXT = 1000158005,
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
	physicalDeviceMaintenance3PropertiesKHR = 1000000000,
	descriptorSetLayoutSupportKHR = 1000000001,
	physicalDeviceImageViewImageFormatInfoEXT = 1000170000,
	filterCubicImageViewImageFormatPropertiesEXT = 1000170001,
	deviceQueueGlobalPriorityCreateInfoEXT = 1000174000,
	physicalDevice8bitStorageFeaturesKHR = 1000177000,
	importMemoryHostPointerInfoEXT = 1000178000,
	memoryHostPointerPropertiesEXT = 1000178001,
	physicalDeviceExternalMemoryHostPropertiesEXT = 1000178002,
	physicalDeviceShaderAtomicInt64FeaturesKHR = 1000180000,
	calibratedTimestampInfoEXT = 1000184000,
	physicalDeviceShaderCorePropertiesAMD = 1000185000,
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
	physicalDeviceVulkanMemoryModelFeaturesKHR = 1000211000,
	physicalDevicePciBusInfoPropertiesEXT = 1000212000,
	displayNativeHdrSurfaceCapabilitiesAMD = 1000213000,
	swapchainDisplayNativeHdrCreateInfoAMD = 1000213001,
	imagepipeSurfaceCreateInfoFUCHSIA = 1000214000,
	metalSurfaceCreateInfoEXT = 1000217000,
	physicalDeviceFragmentDensityMapFeaturesEXT = 1000218000,
	physicalDeviceFragmentDensityMapPropertiesEXT = 1000218001,
	renderPassFragmentDensityMapCreateInfoEXT = 1000218002,
	physicalDeviceScalarBlockLayoutFeaturesEXT = 1000221000,
	physicalDeviceMemoryBudgetPropertiesEXT = 1000237000,
	physicalDeviceMemoryPriorityFeaturesEXT = 1000238000,
	memoryPriorityAllocateInfoEXT = 1000238001,
	surfaceProtectedCapabilitiesKHR = 1000239000,
	physicalDeviceDedicatedAllocationImageAliasingFeaturesNV = 1000240000,
	physicalDeviceBufferDeviceAddressFeaturesEXT = 1000244000,
	physicalDeviceBufferAddressFeaturesEXT = 1000244000,
	bufferDeviceAddressInfoEXT = 1000244001,
	bufferDeviceAddressCreateInfoEXT = 1000244002,
	imageStencilUsageCreateInfoEXT = 1000246000,
	validationFeaturesEXT = 1000247000,
	physicalDeviceCooperativeMatrixFeaturesNV = 1000249000,
	cooperativeMatrixPropertiesNV = 1000249001,
	physicalDeviceCooperativeMatrixPropertiesNV = 1000249002,
	physicalDeviceYcbcrImageArraysFeaturesEXT = 1000252000,
	surfaceFullScreenExclusiveInfoEXT = 1000255000,
	surfaceCapabilitiesFullScreenExclusiveEXT = 1000255002,
	surfaceFullScreenExclusiveWin32InfoEXT = 1000255001,
	headlessSurfaceCreateInfoEXT = 1000256000,
	physicalDeviceHostQueryResetFeaturesEXT = 1000261000
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
	raygenNV = (1 << 8),
	anyHitNV = (1 << 9),
	closestHitNV = (1 << 10),
	missNV = (1 << 11),
	intersectionNV = (1 << 12),
	callableNV = (1 << 13),
	taskNV = (1 << 6),
	meshNV = (1 << 7)
};
NYTL_FLAG_OPS(ShaderStageBits)

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
	deviceMaskKHR = (1 << 0)
};
NYTL_FLAG_OPS(MemoryAllocateBits)

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
	memoryPlane3EXT = (1 << 10)
};
NYTL_FLAG_OPS(ImageAspectBits)

enum class SparseImageFormatBits : int32_t {
	singleMiptail = (1 << 0),
	alignedMipSize = (1 << 1),
	nonstandardBlockSize = (1 << 2)
};
NYTL_FLAG_OPS(SparseImageFormatBits)

enum class PhysicalDeviceType : int32_t {
	other = 0,
	integratedGpu = 1,
	discreteGpu = 2,
	virtualGpu = 3,
	cpu = 4
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
	sampledImageFilterCubicIMG = (1 << 13),
	transferSrcKHR = (1 << 14),
	transferDstKHR = (1 << 15),
	sampledImageFilterMinmaxEXT = (1 << 16),
	midpointChromaSamplesKHR = (1 << 17),
	sampledImageYcbcrConversionLinearFilterKHR = (1 << 18),
	sampledImageYcbcrConversionSeparateReconstructionFilterKHR = (1 << 19),
	sampledImageYcbcrConversionChromaReconstructionExplicitKHR = (1 << 20),
	sampledImageYcbcrConversionChromaReconstructionExplicitForceableKHR = (1 << 21),
	disjointKHR = (1 << 22),
	cositedChromaSamplesKHR = (1 << 23),
	sampledImageFilterCubicEXT = (1 << 13),
	fragmentDensityMapEXT = (1 << 24)
};
NYTL_FLAG_OPS(FormatFeatureBits)

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
	g8b8g8r8422Unorm = 1000000000,
	b8g8r8g8422Unorm = 1000000001,
	g8B8R83plane420Unorm = 1000000002,
	g8B8r82plane420Unorm = 1000000003,
	g8B8R83plane422Unorm = 1000000004,
	g8B8r82plane422Unorm = 1000000005,
	g8B8R83plane444Unorm = 1000000006,
	r10x6UnormPack16 = 1000000007,
	r10x6g10x6Unorm2pack16 = 1000000008,
	r10x6g10x6b10x6a10x6Unorm4pack16 = 1000000009,
	g10x6b10x6g10x6r10x6422Unorm4pack16 = 1000000010,
	b10x6g10x6r10x6g10x6422Unorm4pack16 = 1000000011,
	g10x6B10x6R10x63plane420Unorm3pack16 = 1000000012,
	g10x6B10x6r10x62plane420Unorm3pack16 = 1000000013,
	g10x6B10x6R10x63plane422Unorm3pack16 = 1000000014,
	g10x6B10x6r10x62plane422Unorm3pack16 = 1000000015,
	g10x6B10x6R10x63plane444Unorm3pack16 = 1000000016,
	r12x4UnormPack16 = 1000000017,
	r12x4g12x4Unorm2pack16 = 1000000018,
	r12x4g12x4b12x4a12x4Unorm4pack16 = 1000000019,
	g12x4b12x4g12x4r12x4422Unorm4pack16 = 1000000020,
	b12x4g12x4r12x4g12x4422Unorm4pack16 = 1000000021,
	g12x4B12x4R12x43plane420Unorm3pack16 = 1000000022,
	g12x4B12x4r12x42plane420Unorm3pack16 = 1000000023,
	g12x4B12x4R12x43plane422Unorm3pack16 = 1000000024,
	g12x4B12x4r12x42plane422Unorm3pack16 = 1000000025,
	g12x4B12x4R12x43plane444Unorm3pack16 = 1000000026,
	g16b16g16r16422Unorm = 1000000027,
	b16g16r16g16422Unorm = 1000000028,
	g16B16R163plane420Unorm = 1000000029,
	g16B16r162plane420Unorm = 1000000030,
	g16B16R163plane422Unorm = 1000000031,
	g16B16r162plane422Unorm = 1000000032,
	g16B16R163plane444Unorm = 1000000033,
	pvrtc12bppUnormBlockIMG = 1000054000,
	pvrtc14bppUnormBlockIMG = 1000054001,
	pvrtc22bppUnormBlockIMG = 1000054002,
	pvrtc24bppUnormBlockIMG = 1000054003,
	pvrtc12bppSrgbBlockIMG = 1000054004,
	pvrtc14bppSrgbBlockIMG = 1000054005,
	pvrtc22bppSrgbBlockIMG = 1000054006,
	pvrtc24bppSrgbBlockIMG = 1000054007,
	g8b8g8r8422UnormKHR = 1000000000,
	b8g8r8g8422UnormKHR = 1000000001,
	g8B8R83plane420UnormKHR = 1000000002,
	g8B8r82plane420UnormKHR = 1000000003,
	g8B8R83plane422UnormKHR = 1000000004,
	g8B8r82plane422UnormKHR = 1000000005,
	g8B8R83plane444UnormKHR = 1000000006,
	r10x6UnormPack16KHR = 1000000007,
	r10x6g10x6Unorm2pack16KHR = 1000000008,
	r10x6g10x6b10x6a10x6Unorm4pack16KHR = 1000000009,
	g10x6b10x6g10x6r10x6422Unorm4pack16KHR = 1000000010,
	b10x6g10x6r10x6g10x6422Unorm4pack16KHR = 1000000011,
	g10x6B10x6R10x63plane420Unorm3pack16KHR = 1000000012,
	g10x6B10x6r10x62plane420Unorm3pack16KHR = 1000000013,
	g10x6B10x6R10x63plane422Unorm3pack16KHR = 1000000014,
	g10x6B10x6r10x62plane422Unorm3pack16KHR = 1000000015,
	g10x6B10x6R10x63plane444Unorm3pack16KHR = 1000000016,
	r12x4UnormPack16KHR = 1000000017,
	r12x4g12x4Unorm2pack16KHR = 1000000018,
	r12x4g12x4b12x4a12x4Unorm4pack16KHR = 1000000019,
	g12x4b12x4g12x4r12x4422Unorm4pack16KHR = 1000000020,
	b12x4g12x4r12x4g12x4422Unorm4pack16KHR = 1000000021,
	g12x4B12x4R12x43plane420Unorm3pack16KHR = 1000000022,
	g12x4B12x4r12x42plane420Unorm3pack16KHR = 1000000023,
	g12x4B12x4R12x43plane422Unorm3pack16KHR = 1000000024,
	g12x4B12x4r12x42plane422Unorm3pack16KHR = 1000000025,
	g12x4B12x4R12x43plane444Unorm3pack16KHR = 1000000026,
	g16b16g16r16422UnormKHR = 1000000027,
	b16g16r16g16422UnormKHR = 1000000028,
	g16B16R163plane420UnormKHR = 1000000029,
	g16B16r162plane420UnormKHR = 1000000030,
	g16B16R163plane422UnormKHR = 1000000031,
	g16B16r162plane422UnormKHR = 1000000032,
	g16B16R163plane444UnormKHR = 1000000033
};

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
	shadingRateImageNV = (1 << 8),
	fragmentDensityMapEXT = (1 << 9)
};
NYTL_FLAG_OPS(ImageUsageBits)

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
	subsampledEXT = (1 << 14)
};
NYTL_FLAG_OPS(ImageCreateBits)

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
	eProtected = (1 << 5)
};
NYTL_FLAG_OPS(MemoryPropertyBits)

enum class MemoryHeapBits : int32_t {
	deviceLocal = (1 << 0),
	multiInstance = (1 << 1),
	multiInstanceKHR = (1 << 1)
};
NYTL_FLAG_OPS(MemoryHeapBits)

enum class PointClippingBehavior : int32_t {
	allClipPlanes = 0,
	userClipPlanesOnly = 1,
	allClipPlanesKHR = 0,
	userClipPlanesOnlyKHR = 1
};

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

enum class Filter : int32_t {
	nearest = 0,
	linear = 1,
	cubicIMG = 1000015000,
	cubicEXT = 1000015000
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
	inlineUniformBlockEXT = 1000138000,
	accelerationStructureNV = 1000165000
};

enum class PipelineBindPoint : int32_t {
	graphics = 0,
	compute = 1,
	rayTracingNV = 1000165000
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
	androidHardwareBufferANDROID = (1 << 10),
	hostAllocationEXT = (1 << 7),
	hostMappedForeignMemoryEXT = (1 << 8)
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

enum class BufferCreateBits : int32_t {
	sparseBinding = (1 << 0),
	sparseResidency = (1 << 1),
	sparseAliased = (1 << 2),
	eProtected = (1 << 3),
	deviceAddressCaptureReplayEXT = (1 << 4)
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
	transformFeedbackBufferEXT = (1 << 11),
	transformFeedbackCounterBufferEXT = (1 << 12),
	conditionalRenderingEXT = (1 << 9),
	rayTracingNV = (1 << 10),
	shaderDeviceAddressEXT = (1 << 17)
};
NYTL_FLAG_OPS(BufferUsageBits)

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
	syncFd = (1 << 4),
	opaqueFdKHR = (1 << 0),
	opaqueWin32KHR = (1 << 1),
	opaqueWin32KmtKHR = (1 << 2),
	d3d12FenceKHR = (1 << 3),
	syncFdKHR = (1 << 4)
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
	pushDescriptorKHR = (1 << 0),
	updateAfterBindPoolEXT = (1 << 1)
};
NYTL_FLAG_OPS(DescriptorSetLayoutCreateBits)


enum class PipelineCacheHeaderVersion : int32_t {
	one = 1
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
	transformFeedbackEXT = (1 << 24),
	conditionalRenderingEXT = (1 << 18),
	shadingRateImageNV = (1 << 22),
	rayTracingShaderNV = (1 << 21),
	accelerationStructureBuildNV = (1 << 25),
	taskShaderNV = (1 << 19),
	meshShaderNV = (1 << 20),
	fragmentDensityProcessEXT = (1 << 23)
};
NYTL_FLAG_OPS(PipelineStageBits)

enum class SparseMemoryBindBits : int32_t {
	metadata = (1 << 0)
};
NYTL_FLAG_OPS(SparseMemoryBindBits)

enum class FenceCreateBits : int32_t {
	signaled = (1 << 0)
};
NYTL_FLAG_OPS(FenceCreateBits)

enum class QueryType : int32_t {
	occlusion = 0,
	pipelineStatistics = 1,
	timestamp = 2,
	transformFeedbackStreamEXT = 1000028004,
	accelerationStructureCompactedSizeNV = 1000165000
};

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

enum class QueryResultBits : int32_t {
	e64 = (1 << 0),
	wait = (1 << 1),
	withAvailability = (1 << 2),
	partial = (1 << 3)
};
NYTL_FLAG_OPS(QueryResultBits)

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
	depthReadOnlyStencilAttachmentOptimal = 1000000000,
	depthAttachmentStencilReadOnlyOptimal = 1000000001,
	presentSrcKHR = 1000001002,
	sharedPresentKHR = 1000111000,
	depthReadOnlyStencilAttachmentOptimalKHR = 1000000000,
	depthAttachmentStencilReadOnlyOptimalKHR = 1000000001,
	shadingRateOptimalNV = 1000164003,
	fragmentDensityMapOptimalEXT = 1000218000
};

enum class ImageViewCreateBits : int32_t {
	fragmentDensityMapDynamicEXT = (1 << 0)
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

enum class PipelineCreateBits : int32_t {
	disableOptimization = (1 << 0),
	allowDerivatives = (1 << 1),
	derivative = (1 << 2),
	viewIndexFromDeviceIndex = (1 << 3),
	dispatchBase = 4,
	viewIndexFromDeviceIndexKHR = (1 << 3),
	dispatchBaseKHR = 4,
	deferCompileNV = (1 << 5)
};
NYTL_FLAG_OPS(PipelineCreateBits)

enum class VertexInputRate : int32_t {
	vertex = 0,
	instance = 1
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

enum class PolygonMode : int32_t {
	fill = 0,
	line = 1,
	point = 2,
	fillRectangleNV = 1000153000
};

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
	viewportWScalingNV = 1000087000,
	discardRectangleEXT = 1000099000,
	sampleLocationsEXT = 1000143000,
	viewportShadingRatePaletteNV = 1000164004,
	viewportCoarseSampleOrderNV = 1000164006,
	exclusiveScissorNV = 1000205001
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

enum class SamplerAddressMode : int32_t {
	repeat = 0,
	mirroredRepeat = 1,
	clampToEdge = 2,
	clampToBorder = 3,
	mirrorClampToEdge = 4
};

enum class BorderColor : int32_t {
	floatTransparentBlack = 0,
	intTransparentBlack = 1,
	floatOpaqueBlack = 2,
	intOpaqueBlack = 3,
	floatOpaqueWhite = 4,
	intOpaqueWhite = 5
};

enum class DescriptorPoolCreateBits : int32_t {
	freeDescriptorSet = (1 << 0),
	updateAfterBindEXT = (1 << 1)
};
NYTL_FLAG_OPS(DescriptorPoolCreateBits)

enum class AttachmentDescriptionBits : int32_t {
	mayAlias = (1 << 0)
};
NYTL_FLAG_OPS(AttachmentDescriptionBits)

enum class AttachmentLoadOp : int32_t {
	load = 0,
	clear = 1,
	dontCare = 2
};

enum class AttachmentStoreOp : int32_t {
	store = 0,
	dontCare = 1
};

enum class SubpassDescriptionBits : int32_t {

};
NYTL_FLAG_OPS(SubpassDescriptionBits)

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
	transformFeedbackWriteEXT = (1 << 25),
	transformFeedbackCounterReadEXT = (1 << 26),
	transformFeedbackCounterWriteEXT = (1 << 27),
	conditionalRenderingReadEXT = (1 << 20),
	colorAttachmentReadNoncoherentEXT = (1 << 19),
	shadingRateImageReadNV = (1 << 23),
	accelerationStructureReadNV = (1 << 21),
	accelerationStructureWriteNV = (1 << 22),
	fragmentDensityMapReadEXT = (1 << 24)
};
NYTL_FLAG_OPS(AccessBits)

enum class DependencyBits : int32_t {
	byRegion = (1 << 0),
	deviceGroup = (1 << 2),
	viewLocal = (1 << 1),
	viewLocalKHR = (1 << 1),
	deviceGroupKHR = (1 << 2)
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

enum class StencilFaceBits : int32_t {
	front = (1 << 0),
	back = (1 << 1),
	rontAndBack = 3
};
NYTL_FLAG_OPS(StencilFaceBits)

enum class IndexType : int32_t {
	uint16 = 0,
	uint32 = 1,
	noneNV = 1000165000
};

enum class SubpassContents : int32_t {
	eInline = 0,
	secondaryCommandBuffers = 1
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
	samplerYcbcrConversion = 1000000000,
	descriptorUpdateTemplate = 1000000000,
	surfaceKHR = 1000000000,
	swapchainKHR = 1000001000,
	displayKHR = 1000002000,
	displayModeKHR = 1000002001,
	debugReportCallbackEXT = 1000011000,
	descriptorUpdateTemplateKHR = 1000000000,
	debugUtilsMessengerEXT = 1000128000,
	samplerYcbcrConversionKHR = 1000000000,
	validationCacheEXT = 1000160000,
	accelerationStructureNV = 1000165000
};

enum class VendorId : int32_t {
	vIV = 65537,
	vSI = 65538,
	kazan = 65539
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

enum class CompositeAlphaBitsKHR : int32_t {
	opaque = (1 << 0),
	preMultiplied = (1 << 1),
	postMultiplied = (1 << 2),
	inherit = (1 << 3)
};
NYTL_FLAG_OPS(CompositeAlphaBitsKHR)

enum class ColorSpaceKHR : int32_t {
	srgbNonlinear = 0,
	displayP3NonlinearEXT = 1000104001,
	extendedSrgbLinearEXT = 1000104002,
	dciP3LinearEXT = 1000104003,
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
	displayNativeAMD = 1000213000
};

enum class PresentModeKHR : int32_t {
	immediate = 0,
	mailbox = 1,
	fifo = 2,
	fifoRelaxed = 3,
	sharedDemandRefresh = 1000111000,
	sharedContinuousRefresh = 1000111001
};


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
	debugReport = 0,
	displayKHR = 29,
	displayModeKHR = 30,
	objectTableNVX = 31,
	indirectCommandsLayoutNVX = 32,
	validationCacheEXT = 33,
	validationCache = 0,
	samplerYcbcrConversion = 1000011000,
	descriptorUpdateTemplate = 1000011000,
	descriptorUpdateTemplateKHR = 1000011000,
	samplerYcbcrConversionKHR = 1000011000,
	accelerationStructureNV = 1000165000
};

enum class DebugReportBitsEXT : int32_t {
	information = (1 << 0),
	warning = (1 << 1),
	performanceWarning = (1 << 2),
	error = (1 << 3),
	debug = (1 << 4)
};
NYTL_FLAG_OPS(DebugReportBitsEXT)


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
	vblank = 0
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


enum class SamplerReductionModeEXT : int32_t {
	weightedAverage = 0,
	min = 1,
	max = 2
};


enum class BlendOverlapEXT : int32_t {
	uncorrelated = 0,
	disjoint = 1,
	conjoint = 2
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


enum class DescriptorBindingBitsEXT : int32_t {
	updateAfterBind = (1 << 0),
	updateUnusedWhilePending = (1 << 1),
	partiallyBound = (1 << 2),
	variableDescriptorCount = (1 << 3)
};
NYTL_FLAG_OPS(DescriptorBindingBitsEXT)


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


enum class RayTracingShaderGroupTypeNV : int32_t {
	general = 0,
	trianglesHitGroup = 1,
	proceduralHitGroup = 2
};

enum class GeometryTypeNV : int32_t {
	triangles = 0,
	aabbs = 1
};

enum class GeometryBitsNV : int32_t {
	opaque = (1 << 0),
	noDuplicateAnyHitInvocation = (1 << 1)
};
NYTL_FLAG_OPS(GeometryBitsNV)

enum class GeometryInstanceBitsNV : int32_t {
	triangleCullDisable = (1 << 0),
	triangleFrontCounterclockwise = (1 << 1),
	forceOpaque = (1 << 2),
	forceNoOpaque = (1 << 3)
};
NYTL_FLAG_OPS(GeometryInstanceBitsNV)

enum class AccelerationStructureTypeNV : int32_t {
	topLevel = 0,
	bottomLevel = 1
};

enum class BuildAccelerationStructureBitsNV : int32_t {
	allowUpdate = (1 << 0),
	allowCompaction = (1 << 1),
	preferFastTrace = (1 << 2),
	preferFastBuild = (1 << 3),
	lowMemory = (1 << 4)
};
NYTL_FLAG_OPS(BuildAccelerationStructureBitsNV)

enum class CopyAccelerationStructureModeNV : int32_t {
	clone = 0,
	compact = 1
};

enum class AccelerationStructureMemoryRequirementsTypeNV : int32_t {
	object = 0,
	buildScratch = 1,
	updateScratch = 2
};


enum class QueueGlobalPriorityEXT : int32_t {
	low = 128,
	medium = 256,
	high = 512,
	realtime = 1024
};


enum class TimeDomainEXT : int32_t {
	device = 0,
	clockMonotonic = 1,
	clockMonotonicRaw = 2,
	queryPerformanceCounter = 3
};


enum class MemoryOverallocationBehaviorAMD : int32_t {
	eDefault = 0,
	allowed = 1,
	disallowed = 2
};


enum class PipelineCreationFeedbackBitsEXT : int32_t {
	valid = (1 << 0),
	applicationPipelineCacheHit = (1 << 1),
	basePipelineAcceleration = (1 << 2)
};
NYTL_FLAG_OPS(PipelineCreationFeedbackBitsEXT)


enum class DriverIdKHR : int32_t {
	amdProprietary = 1,
	amdOpenSource = 2,
	mesaRadv = 3,
	nvidiaProprietary = 4,
	intelProprietaryWindows = 5,
	intelOpenSourceMESA = 6,
	imaginationProprietary = 7,
	qualcommProprietary = 8,
	armProprietary = 9,
	googlePastel = 10,
	ggpProprietary = 11
};


enum class ResolveModeBitsKHR : int32_t {
	none = 0,
	sampleZero = (1 << 0),
	average = (1 << 1),
	min = (1 << 2),
	max = (1 << 3)
};
NYTL_FLAG_OPS(ResolveModeBitsKHR)


enum class ValidationFeatureEnableEXT : int32_t {
	gpuAssisted = 0,
	gpuAssistedReserveBindingSlot = 1
};

enum class ValidationFeatureDisableEXT : int32_t {
	all = 0,
	shaders = 1,
	threadSafety = 2,
	apiParameters = 3,
	objectLifetimes = 4,
	coreChecks = 5,
	uniqueHandles = 6
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


#ifdef win32

enum class FullScreenExclusiveEXT : int32_t {
	eDefault = 0,
	allowed = 1,
	disallowed = 2,
	applicationControlled = 3
};


#endif //win32


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
    