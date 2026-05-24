// Copyright (c) 2020 nyorain
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

// Automaitcally generated vulkan header, see nyorain/vkpp
// Do not edit manually, rather edit the codegen files.

#pragma once

#include <vkpp/handle.hpp> // VK_DEFINE_HANDLE
#include <vkpp/flags.hpp>
#include <cstddef>

#include <vulkan/vk_platform.h>

// Generated for vulkan version: 1.4.350

namespace vk {

using nytl::Flags; // flags.hpp

enum class DummyEnum : int32_t {};

constexpr auto lodClampNone = 1000.0F;
constexpr auto queueFamilyIgnored = (~0U);
constexpr auto remainingArrayLayers = (~0U);
constexpr auto remainingMipLevels = (~0U);
constexpr auto wholeSize = (~0ULL);
constexpr auto maxMemoryTypes = 32;
constexpr auto maxPhysicalDeviceNameSize = 256;
constexpr auto uuidSize = 16;
constexpr auto maxExtensionNameSize = 256;
constexpr auto maxDescriptionSize = 256;
constexpr auto maxMemoryHeaps = 16;

VK_DEFINE_HANDLE(Instance)
VK_DEFINE_HANDLE(PhysicalDevice)
VK_DEFINE_HANDLE(Device)
VK_DEFINE_HANDLE(Queue)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(Semaphore)
VK_DEFINE_HANDLE(CommandBuffer)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(Fence)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(DeviceMemory)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(Buffer)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(Image)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(QueryPool)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(ImageView)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(CommandPool)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(RenderPass)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(Framebuffer)

using Bool32 = uint32_t;
using DeviceAddress = uint64_t;
using DeviceSize = uint64_t;

enum class Result : int32_t;
enum class StructureType : int32_t;
enum class ObjectType : int32_t;
enum class VendorId : int32_t;
enum class SystemAllocationScope : int32_t;
enum class InternalAllocationType : int32_t;
enum class Format : int32_t;
enum class FormatFeatureBits : int32_t;
enum class ImageCreateBits : int32_t;
enum class SampleCountBits : int32_t;
enum class ImageTiling : int32_t;
enum class ImageType : int32_t;
enum class ImageUsageBits : int32_t;
enum class InstanceCreateBits : int32_t;
enum class MemoryHeapBits : int32_t;
enum class MemoryPropertyBits : int32_t;
enum class PhysicalDeviceType : int32_t;
enum class QueueBits : int32_t;
enum class ShaderStageBits : int32_t;
enum class DeviceQueueCreateBits : int32_t;
enum class PipelineStageBits : int32_t;
enum class MemoryMapBits : int32_t;
enum class ImageAspectBits : int32_t;
enum class SparseImageFormatBits : int32_t;
enum class SparseMemoryBindBits : int32_t;
enum class FenceCreateBits : int32_t;
enum class QueryPoolCreateBits : int32_t;
enum class QueryPipelineStatisticBits : int32_t;
enum class QueryType : int32_t;
enum class QueryResultBits : int32_t;
enum class BufferCreateBits : int32_t;
enum class BufferUsageBits : int32_t;
enum class SharingMode : int32_t;
enum class ImageLayout : int32_t;
enum class ComponentSwizzle : int32_t;
enum class ImageViewCreateBits : int32_t;
enum class ImageViewType : int32_t;
enum class AccessBits : int32_t;
enum class DependencyBits : int32_t;
enum class CommandPoolCreateBits : int32_t;
enum class CommandPoolResetBits : int32_t;
enum class CommandBufferLevel : int32_t;
enum class QueryControlBits : int32_t;
enum class CommandBufferUsageBits : int32_t;
enum class CommandBufferResetBits : int32_t;
enum class IndexType : int32_t;

using FormatFeatureFlags = Flags<FormatFeatureBits>;
using ImageCreateFlags = Flags<ImageCreateBits>;
using SampleCountFlags = Flags<SampleCountBits>;
using ImageUsageFlags = Flags<ImageUsageBits>;
using InstanceCreateFlags = Flags<InstanceCreateBits>;
using MemoryHeapFlags = Flags<MemoryHeapBits>;
using MemoryPropertyFlags = Flags<MemoryPropertyBits>;
using QueueFlags = Flags<QueueBits>;
using ShaderStageFlags = Flags<ShaderStageBits>;
using DeviceCreateFlags = Flags<DummyEnum>;
using DeviceQueueCreateFlags = Flags<DeviceQueueCreateBits>;
using PipelineStageFlags = Flags<PipelineStageBits>;
using MemoryMapFlags = Flags<MemoryMapBits>;
using ImageAspectFlags = Flags<ImageAspectBits>;
using SparseImageFormatFlags = Flags<SparseImageFormatBits>;
using SparseMemoryBindFlags = Flags<SparseMemoryBindBits>;
using FenceCreateFlags = Flags<FenceCreateBits>;
using SemaphoreCreateFlags = Flags<DummyEnum>;
using QueryPoolCreateFlags = Flags<QueryPoolCreateBits>;
using QueryPipelineStatisticFlags = Flags<QueryPipelineStatisticBits>;
using QueryResultFlags = Flags<QueryResultBits>;
using BufferCreateFlags = Flags<BufferCreateBits>;
using BufferUsageFlags = Flags<BufferUsageBits>;
using ImageViewCreateFlags = Flags<ImageViewCreateBits>;
using AccessFlags = Flags<AccessBits>;
using DependencyFlags = Flags<DependencyBits>;
using CommandPoolCreateFlags = Flags<CommandPoolCreateBits>;
using CommandPoolResetFlags = Flags<CommandPoolResetBits>;
using QueryControlFlags = Flags<QueryControlBits>;
using CommandBufferUsageFlags = Flags<CommandBufferUsageBits>;
using CommandBufferResetFlags = Flags<CommandBufferResetBits>;

struct Extent2D;
struct Extent3D;
struct Offset2D;
struct Offset3D;
struct Rect2D;
struct BaseInStructure;
struct BaseOutStructure;
struct AllocationCallbacks;
struct ApplicationInfo;
struct FormatProperties;
struct ImageFormatProperties;
struct InstanceCreateInfo;
struct MemoryHeap;
struct MemoryType;
struct PhysicalDeviceFeatures;
struct PhysicalDeviceLimits;
struct PhysicalDeviceMemoryProperties;
struct PhysicalDeviceSparseProperties;
struct PhysicalDeviceProperties;
struct QueueFamilyProperties;
struct DeviceQueueCreateInfo;
struct DeviceCreateInfo;
struct ExtensionProperties;
struct LayerProperties;
struct SubmitInfo;
struct MappedMemoryRange;
struct MemoryAllocateInfo;
struct MemoryRequirements;
struct ImageSubresource;
struct SparseImageFormatProperties;
struct SparseImageMemoryBind;
struct SparseImageMemoryBindInfo;
struct SparseImageMemoryRequirements;
struct SparseMemoryBind;
struct SparseBufferMemoryBindInfo;
struct SparseImageOpaqueMemoryBindInfo;
struct BindSparseInfo;
struct FenceCreateInfo;
struct SemaphoreCreateInfo;
struct QueryPoolCreateInfo;
struct BufferCreateInfo;
struct ImageCreateInfo;
struct SubresourceLayout;
struct ComponentMapping;
struct ImageSubresourceRange;
struct ImageViewCreateInfo;
struct CommandPoolCreateInfo;
struct CommandBufferAllocateInfo;
struct CommandBufferInheritanceInfo;
struct CommandBufferBeginInfo;
struct BufferCopy;
struct ImageSubresourceLayers;
struct BufferImageCopy;
struct ImageCopy;
struct BufferMemoryBarrier;
struct ImageMemoryBarrier;
struct MemoryBarrier;

constexpr auto maxDeviceGroupSize = 32;
constexpr auto luidSize = 8;
constexpr auto queueFamilyExternal = (~1U);

enum class SubgroupFeatureBits : int32_t;
enum class PointClippingBehavior : int32_t;
enum class PeerMemoryFeatureBits : int32_t;
enum class MemoryAllocateBits : int32_t;
enum class ExternalMemoryHandleTypeBits : int32_t;
enum class ExternalMemoryFeatureBits : int32_t;
enum class ExternalFenceHandleTypeBits : int32_t;
enum class ExternalFenceFeatureBits : int32_t;
enum class FenceImportBits : int32_t;
enum class SemaphoreImportBits : int32_t;
enum class ExternalSemaphoreHandleTypeBits : int32_t;
enum class ExternalSemaphoreFeatureBits : int32_t;

using SubgroupFeatureFlags = Flags<SubgroupFeatureBits>;
using PeerMemoryFeatureFlags = Flags<PeerMemoryFeatureBits>;
using MemoryAllocateFlags = Flags<MemoryAllocateBits>;
using CommandPoolTrimFlags = Flags<DummyEnum>;
using ExternalMemoryHandleTypeFlags = Flags<ExternalMemoryHandleTypeBits>;
using ExternalMemoryFeatureFlags = Flags<ExternalMemoryFeatureBits>;
using ExternalFenceHandleTypeFlags = Flags<ExternalFenceHandleTypeBits>;
using ExternalFenceFeatureFlags = Flags<ExternalFenceFeatureBits>;
using FenceImportFlags = Flags<FenceImportBits>;
using SemaphoreImportFlags = Flags<SemaphoreImportBits>;
using ExternalSemaphoreHandleTypeFlags = Flags<ExternalSemaphoreHandleTypeBits>;
using ExternalSemaphoreFeatureFlags = Flags<ExternalSemaphoreFeatureBits>;

struct BindBufferMemoryInfo;
struct BindImageMemoryInfo;
struct MemoryDedicatedRequirements;
struct MemoryDedicatedAllocateInfo;
struct MemoryAllocateFlagsInfo;
struct DeviceGroupCommandBufferBeginInfo;
struct DeviceGroupSubmitInfo;
struct DeviceGroupBindSparseInfo;
struct BindBufferMemoryDeviceGroupInfo;
struct BindImageMemoryDeviceGroupInfo;
struct PhysicalDeviceGroupProperties;
struct DeviceGroupDeviceCreateInfo;
struct BufferMemoryRequirementsInfo2;
struct ImageMemoryRequirementsInfo2;
struct ImageSparseMemoryRequirementsInfo2;
struct MemoryRequirements2;
struct SparseImageMemoryRequirements2;
struct PhysicalDeviceFeatures2;
struct PhysicalDeviceProperties2;
struct FormatProperties2;
struct ImageFormatProperties2;
struct PhysicalDeviceImageFormatInfo2;
struct QueueFamilyProperties2;
struct PhysicalDeviceMemoryProperties2;
struct SparseImageFormatProperties2;
struct PhysicalDeviceSparseImageFormatInfo2;
struct ImageViewUsageCreateInfo;
struct PhysicalDeviceProtectedMemoryFeatures;
struct PhysicalDeviceProtectedMemoryProperties;
struct DeviceQueueInfo2;
struct ProtectedSubmitInfo;
struct BindImagePlaneMemoryInfo;
struct ImagePlaneMemoryRequirementsInfo;
struct ExternalMemoryProperties;
struct PhysicalDeviceExternalImageFormatInfo;
struct ExternalImageFormatProperties;
struct PhysicalDeviceExternalBufferInfo;
struct ExternalBufferProperties;
struct PhysicalDeviceIDProperties;
struct ExternalMemoryImageCreateInfo;
struct ExternalMemoryBufferCreateInfo;
struct ExportMemoryAllocateInfo;
struct PhysicalDeviceExternalFenceInfo;
struct ExternalFenceProperties;
struct ExportFenceCreateInfo;
struct ExportSemaphoreCreateInfo;
struct PhysicalDeviceExternalSemaphoreInfo;
struct ExternalSemaphoreProperties;

constexpr auto maxDriverNameSize = 256;
constexpr auto maxDriverInfoSize = 256;

enum class DriverId : int32_t;
enum class ShaderFloatControlsIndependence : int32_t;
enum class ResolveModeBits : int32_t;
enum class SemaphoreType : int32_t;
enum class SemaphoreWaitBits : int32_t;

using ResolveModeFlags = Flags<ResolveModeBits>;
using SemaphoreWaitFlags = Flags<SemaphoreWaitBits>;

struct ConformanceVersion;
struct PhysicalDeviceDriverProperties;
struct PhysicalDeviceVulkan11Features;
struct PhysicalDeviceVulkan11Properties;
struct PhysicalDeviceVulkan12Features;
struct PhysicalDeviceVulkan12Properties;
struct ImageFormatListCreateInfo;
struct PhysicalDeviceVulkanMemoryModelFeatures;
struct PhysicalDeviceHostQueryResetFeatures;
struct PhysicalDeviceTimelineSemaphoreFeatures;
struct PhysicalDeviceTimelineSemaphoreProperties;
struct SemaphoreTypeCreateInfo;
struct TimelineSemaphoreSubmitInfo;
struct SemaphoreWaitInfo;
struct SemaphoreSignalInfo;
struct PhysicalDeviceBufferDeviceAddressFeatures;
struct BufferDeviceAddressInfo;
struct BufferOpaqueCaptureAddressCreateInfo;
struct MemoryOpaqueCaptureAddressAllocateInfo;
struct DeviceMemoryOpaqueCaptureAddressInfo;

VK_DEFINE_NON_DISPATCHABLE_HANDLE(PrivateDataSlot)

using Flags64 = uint64_t;

enum class ToolPurposeBits : int32_t;
enum class PipelineStageBits2 : int64_t;
enum class AccessBits2 : int64_t;
enum class SubmitBits : int32_t;
enum class FormatFeatureBits2 : int64_t;

using ToolPurposeFlags = Flags<ToolPurposeBits>;
using PrivateDataSlotCreateFlags = Flags<DummyEnum>;
using PipelineStageFlags2 = Flags<PipelineStageBits2>;
using AccessFlags2 = Flags<AccessBits2>;
using SubmitFlags = Flags<SubmitBits>;
using FormatFeatureFlags2 = Flags<FormatFeatureBits2>;

struct PhysicalDeviceVulkan13Features;
struct PhysicalDeviceVulkan13Properties;
struct PhysicalDeviceToolProperties;
struct PhysicalDevicePrivateDataFeatures;
struct DevicePrivateDataCreateInfo;
struct PrivateDataSlotCreateInfo;
struct MemoryBarrier2;
struct BufferMemoryBarrier2;
struct ImageMemoryBarrier2;
struct DependencyInfo;
struct SemaphoreSubmitInfo;
struct CommandBufferSubmitInfo;
struct SubmitInfo2;
struct PhysicalDeviceSynchronization2Features;
struct BufferCopy2;
struct CopyBufferInfo2;
struct ImageCopy2;
struct CopyImageInfo2;
struct BufferImageCopy2;
struct CopyBufferToImageInfo2;
struct CopyImageToBufferInfo2;
struct PhysicalDeviceTextureCompressionASTCHDRFeatures;
struct FormatProperties3;
struct PhysicalDeviceMaintenance4Features;
struct PhysicalDeviceMaintenance4Properties;
struct DeviceBufferMemoryRequirements;
struct DeviceImageMemoryRequirements;

constexpr auto maxGlobalPrioritySize = 16;

enum class PipelineRobustnessBufferBehavior : int32_t;
enum class PipelineRobustnessImageBehavior : int32_t;
enum class QueueGlobalPriority : int32_t;
enum class MemoryUnmapBits : int32_t;
enum class BufferUsageBits2 : int64_t;
enum class HostImageCopyBits : int32_t;

using MemoryUnmapFlags = Flags<MemoryUnmapBits>;
using BufferUsageFlags2 = Flags<BufferUsageBits2>;
using HostImageCopyFlags = Flags<HostImageCopyBits>;

struct PhysicalDeviceVulkan14Features;
struct PhysicalDeviceVulkan14Properties;
struct DeviceQueueGlobalPriorityCreateInfo;
struct PhysicalDeviceGlobalPriorityQueryFeatures;
struct QueueFamilyGlobalPriorityProperties;
struct PhysicalDeviceIndexTypeUint8Features;
struct MemoryMapInfo;
struct MemoryUnmapInfo;
struct PhysicalDeviceMaintenance5Features;
struct PhysicalDeviceMaintenance5Properties;
struct SubresourceLayout2;
struct ImageSubresource2;
struct DeviceImageSubresourceInfo;
struct BufferUsageFlags2CreateInfo;
struct PhysicalDeviceMaintenance6Features;
struct PhysicalDeviceMaintenance6Properties;
struct BindMemoryStatus;
struct PhysicalDeviceHostImageCopyFeatures;
struct PhysicalDeviceHostImageCopyProperties;
struct MemoryToImageCopy;
struct ImageToMemoryCopy;
struct CopyMemoryToImageInfo;
struct CopyImageToMemoryInfo;
struct CopyImageToImageInfo;
struct HostImageLayoutTransitionInfo;
struct SubresourceHostMemcpySize;
struct HostImageCopyDevicePerformanceQuery;

VK_DEFINE_NON_DISPATCHABLE_HANDLE(Event)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(BufferView)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(ShaderModule)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(PipelineCache)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(Pipeline)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(PipelineLayout)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(DescriptorSetLayout)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(Sampler)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(DescriptorSet)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(DescriptorPool)

enum class PipelineCacheHeaderVersion : int32_t;
enum class EventCreateBits : int32_t;
enum class PipelineCacheCreateBits : int32_t;
enum class PipelineCreateBits : int32_t;
enum class PipelineLayoutCreateBits : int32_t;
enum class PipelineShaderStageCreateBits : int32_t;
enum class BorderColor : int32_t;
enum class Filter : int32_t;
enum class SamplerAddressMode : int32_t;
enum class SamplerCreateBits : int32_t;
enum class CompareOp : int32_t;
enum class SamplerMipmapMode : int32_t;
enum class DescriptorType : int32_t;
enum class DescriptorPoolCreateBits : int32_t;
enum class DescriptorSetLayoutCreateBits : int32_t;
enum class PipelineBindPoint : int32_t;

using EventCreateFlags = Flags<EventCreateBits>;
using BufferViewCreateFlags = Flags<DummyEnum>;
using ShaderModuleCreateFlags = Flags<DummyEnum>;
using PipelineCacheCreateFlags = Flags<PipelineCacheCreateBits>;
using PipelineCreateFlags = Flags<PipelineCreateBits>;
using PipelineLayoutCreateFlags = Flags<PipelineLayoutCreateBits>;
using PipelineShaderStageCreateFlags = Flags<PipelineShaderStageCreateBits>;
using SamplerCreateFlags = Flags<SamplerCreateBits>;
using DescriptorPoolCreateFlags = Flags<DescriptorPoolCreateBits>;
using DescriptorPoolResetFlags = Flags<DummyEnum>;
using DescriptorSetLayoutCreateFlags = Flags<DescriptorSetLayoutCreateBits>;

struct DispatchIndirectCommand;
struct PipelineCacheHeaderVersionOne;
struct EventCreateInfo;
struct BufferViewCreateInfo;
struct ShaderModuleCreateInfo;
struct PipelineCacheCreateInfo;
struct SpecializationMapEntry;
struct SpecializationInfo;
struct PipelineShaderStageCreateInfo;
struct ComputePipelineCreateInfo;
struct PushConstantRange;
struct PipelineLayoutCreateInfo;
struct SamplerCreateInfo;
struct CopyDescriptorSet;
struct DescriptorBufferInfo;
struct DescriptorImageInfo;
struct DescriptorPoolSize;
struct DescriptorPoolCreateInfo;
struct DescriptorSetAllocateInfo;
struct DescriptorSetLayoutBinding;
struct DescriptorSetLayoutCreateInfo;
struct WriteDescriptorSet;
union ClearColorValue;

VK_DEFINE_NON_DISPATCHABLE_HANDLE(DescriptorUpdateTemplate)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(SamplerYcbcrConversion)

enum class DescriptorUpdateTemplateType : int32_t;
enum class SamplerYcbcrModelConversion : int32_t;
enum class SamplerYcbcrRange : int32_t;
enum class ChromaLocation : int32_t;

using DescriptorUpdateTemplateCreateFlags = Flags<DummyEnum>;

struct PhysicalDeviceSubgroupProperties;
struct PhysicalDevice16BitStorageFeatures;
struct PhysicalDeviceVariablePointersFeatures;
struct DescriptorUpdateTemplateEntry;
struct DescriptorUpdateTemplateCreateInfo;
struct PhysicalDeviceMaintenance3Properties;
struct DescriptorSetLayoutSupport;
struct SamplerYcbcrConversionCreateInfo;
struct SamplerYcbcrConversionInfo;
struct PhysicalDeviceSamplerYcbcrConversionFeatures;
struct SamplerYcbcrConversionImageFormatProperties;

using PhysicalDeviceVariablePointerFeatures = PhysicalDeviceVariablePointersFeatures;
enum class DescriptorBindingBits : int32_t;
enum class SamplerReductionMode : int32_t;

using DescriptorBindingFlags = Flags<DescriptorBindingBits>;

struct PhysicalDevice8BitStorageFeatures;
struct PhysicalDeviceShaderAtomicInt64Features;
struct PhysicalDeviceShaderFloat16Int8Features;
struct PhysicalDeviceFloatControlsProperties;
struct DescriptorSetLayoutBindingFlagsCreateInfo;
struct PhysicalDeviceDescriptorIndexingFeatures;
struct PhysicalDeviceDescriptorIndexingProperties;
struct DescriptorSetVariableDescriptorCountAllocateInfo;
struct DescriptorSetVariableDescriptorCountLayoutSupport;
struct PhysicalDeviceScalarBlockLayoutFeatures;
struct SamplerReductionModeCreateInfo;
struct PhysicalDeviceSamplerFilterMinmaxProperties;
struct PhysicalDeviceUniformBufferStandardLayoutFeatures;
struct PhysicalDeviceShaderSubgroupExtendedTypesFeatures;

enum class PipelineCreationFeedbackBits : int32_t;

using PipelineCreationFeedbackFlags = Flags<PipelineCreationFeedbackBits>;

struct PipelineCreationFeedback;
struct PipelineCreationFeedbackCreateInfo;
struct PhysicalDeviceShaderTerminateInvocationFeatures;
struct PhysicalDeviceShaderDemoteToHelperInvocationFeatures;
struct PhysicalDevicePipelineCreationCacheControlFeatures;
struct PhysicalDeviceZeroInitializeWorkgroupMemoryFeatures;
struct PhysicalDeviceImageRobustnessFeatures;
struct PhysicalDeviceSubgroupSizeControlFeatures;
struct PhysicalDeviceSubgroupSizeControlProperties;
struct PipelineShaderStageRequiredSubgroupSizeCreateInfo;
struct PhysicalDeviceInlineUniformBlockFeatures;
struct PhysicalDeviceInlineUniformBlockProperties;
struct WriteDescriptorSetInlineUniformBlock;
struct DescriptorPoolInlineUniformBlockCreateInfo;
struct PhysicalDeviceShaderIntegerDotProductFeatures;
struct PhysicalDeviceShaderIntegerDotProductProperties;
struct PhysicalDeviceTexelBufferAlignmentProperties;

enum class PipelineCreateBits2 : int64_t;

using PipelineCreateFlags2 = Flags<PipelineCreateBits2>;

struct PhysicalDeviceShaderSubgroupRotateFeatures;
struct PhysicalDeviceShaderFloatControls2Features;
struct PhysicalDeviceShaderExpectAssumeFeatures;
struct PipelineCreateFlags2CreateInfo;
struct PhysicalDevicePushDescriptorProperties;
struct BindDescriptorSetsInfo;
struct PushConstantsInfo;
struct PushDescriptorSetInfo;
struct PushDescriptorSetWithTemplateInfo;
struct PhysicalDevicePipelineProtectedAccessFeatures;
struct PhysicalDevicePipelineRobustnessFeatures;
struct PhysicalDevicePipelineRobustnessProperties;
struct PipelineRobustnessCreateInfo;

constexpr auto attachmentUnused = (~0U);
constexpr auto subpassExternal = (~0U);

using SampleMask = uint32_t;

enum class BlendFactor : int32_t;
enum class BlendOp : int32_t;
enum class ColorComponentBits : int32_t;
enum class CullModeBits : int32_t;
enum class DynamicState : int32_t;
enum class FrontFace : int32_t;
enum class LogicOp : int32_t;
enum class StencilOp : int32_t;
enum class VertexInputRate : int32_t;
enum class PipelineColorBlendStateCreateBits : int32_t;
enum class PipelineDepthStencilStateCreateBits : int32_t;
enum class PrimitiveTopology : int32_t;
enum class PolygonMode : int32_t;
enum class AttachmentDescriptionBits : int32_t;
enum class AttachmentLoadOp : int32_t;
enum class AttachmentStoreOp : int32_t;
enum class FramebufferCreateBits : int32_t;
enum class RenderPassCreateBits : int32_t;
enum class SubpassDescriptionBits : int32_t;
enum class StencilFaceBits : int32_t;
enum class SubpassContents : int32_t;

using ColorComponentFlags = Flags<ColorComponentBits>;
using CullModeFlags = Flags<CullModeBits>;
using PipelineColorBlendStateCreateFlags = Flags<PipelineColorBlendStateCreateBits>;
using PipelineDepthStencilStateCreateFlags = Flags<PipelineDepthStencilStateCreateBits>;
using PipelineDynamicStateCreateFlags = Flags<DummyEnum>;
using PipelineInputAssemblyStateCreateFlags = Flags<DummyEnum>;
using PipelineMultisampleStateCreateFlags = Flags<DummyEnum>;
using PipelineRasterizationStateCreateFlags = Flags<DummyEnum>;
using PipelineTessellationStateCreateFlags = Flags<DummyEnum>;
using PipelineVertexInputStateCreateFlags = Flags<DummyEnum>;
using PipelineViewportStateCreateFlags = Flags<DummyEnum>;
using AttachmentDescriptionFlags = Flags<AttachmentDescriptionBits>;
using FramebufferCreateFlags = Flags<FramebufferCreateBits>;
using RenderPassCreateFlags = Flags<RenderPassCreateBits>;
using SubpassDescriptionFlags = Flags<SubpassDescriptionBits>;
using StencilFaceFlags = Flags<StencilFaceBits>;

struct DrawIndexedIndirectCommand;
struct DrawIndirectCommand;
struct StencilOpState;
struct VertexInputAttributeDescription;
struct VertexInputBindingDescription;
struct Viewport;
struct PipelineColorBlendAttachmentState;
struct PipelineColorBlendStateCreateInfo;
struct PipelineDepthStencilStateCreateInfo;
struct PipelineDynamicStateCreateInfo;
struct PipelineInputAssemblyStateCreateInfo;
struct PipelineMultisampleStateCreateInfo;
struct PipelineRasterizationStateCreateInfo;
struct PipelineTessellationStateCreateInfo;
struct PipelineVertexInputStateCreateInfo;
struct PipelineViewportStateCreateInfo;
struct GraphicsPipelineCreateInfo;
struct AttachmentDescription;
struct AttachmentReference;
struct FramebufferCreateInfo;
struct SubpassDependency;
struct SubpassDescription;
struct RenderPassCreateInfo;
struct ClearDepthStencilValue;
struct ClearRect;
union ClearValue;
struct ClearAttachment;
struct ImageBlit;
struct ImageResolve;
struct RenderPassBeginInfo;

enum class TessellationDomainOrigin : int32_t;

struct DeviceGroupRenderPassBeginInfo;
struct PhysicalDevicePointClippingProperties;
struct InputAttachmentAspectReference;
struct RenderPassInputAttachmentAspectCreateInfo;
struct PipelineTessellationDomainOriginStateCreateInfo;
struct RenderPassMultiviewCreateInfo;
struct PhysicalDeviceMultiviewFeatures;
struct PhysicalDeviceMultiviewProperties;
struct PhysicalDeviceShaderDrawParametersFeatures;

using PhysicalDeviceShaderDrawParameterFeatures = PhysicalDeviceShaderDrawParametersFeatures;
struct AttachmentDescription2;
struct AttachmentReference2;
struct SubpassDescription2;
struct SubpassDependency2;
struct SubpassBeginInfo;
struct SubpassEndInfo;
struct RenderPassCreateInfo2;
struct SubpassDescriptionDepthStencilResolve;
struct PhysicalDeviceDepthStencilResolveProperties;
struct ImageStencilUsageCreateInfo;
struct PhysicalDeviceImagelessFramebufferFeatures;
struct FramebufferAttachmentImageInfo;
struct RenderPassAttachmentBeginInfo;
struct FramebufferAttachmentsCreateInfo;
struct PhysicalDeviceSeparateDepthStencilLayoutsFeatures;
struct AttachmentReferenceStencilLayout;
struct AttachmentDescriptionStencilLayout;

enum class RenderingBits : int32_t;

using RenderingFlags = Flags<RenderingBits>;

struct ImageBlit2;
struct BlitImageInfo2;
struct ImageResolve2;
struct ResolveImageInfo2;
struct RenderingAttachmentInfo;
struct RenderingInfo;
struct PipelineRenderingCreateInfo;
struct PhysicalDeviceDynamicRenderingFeatures;
struct CommandBufferInheritanceRenderingInfo;

enum class LineRasterizationMode : int32_t;

struct PhysicalDeviceLineRasterizationFeatures;
struct PhysicalDeviceLineRasterizationProperties;
struct PipelineRasterizationLineStateCreateInfo;
struct PhysicalDeviceVertexAttributeDivisorProperties;
struct VertexInputBindingDivisorDescription;
struct PipelineVertexInputDivisorStateCreateInfo;
struct PhysicalDeviceVertexAttributeDivisorFeatures;
struct RenderingAreaInfo;
struct PhysicalDeviceDynamicRenderingLocalReadFeatures;
struct RenderingAttachmentLocationInfo;
struct RenderingInputAttachmentIndexInfo;

VK_DEFINE_NON_DISPATCHABLE_HANDLE(SurfaceKHR)

enum class SurfaceTransformBitsKHR : int32_t;
enum class PresentModeKHR : int32_t;
enum class ColorSpaceKHR : int32_t;
enum class CompositeAlphaBitsKHR : int32_t;

using SurfaceTransformFlagsKHR = Flags<SurfaceTransformBitsKHR>;
using CompositeAlphaFlagsKHR = Flags<CompositeAlphaBitsKHR>;

struct SurfaceCapabilitiesKHR;
struct SurfaceFormatKHR;

VK_DEFINE_NON_DISPATCHABLE_HANDLE(SwapchainKHR)

enum class SwapchainCreateBitsKHR : int32_t;
enum class DeviceGroupPresentModeBitsKHR : int32_t;

using SwapchainCreateFlagsKHR = Flags<SwapchainCreateBitsKHR>;
using DeviceGroupPresentModeFlagsKHR = Flags<DeviceGroupPresentModeBitsKHR>;

struct SwapchainCreateInfoKHR;
struct PresentInfoKHR;
struct ImageSwapchainCreateInfoKHR;
struct BindImageMemorySwapchainInfoKHR;
struct AcquireNextImageInfoKHR;
struct DeviceGroupPresentCapabilitiesKHR;
struct DeviceGroupPresentInfoKHR;
struct DeviceGroupSwapchainCreateInfoKHR;

VK_DEFINE_NON_DISPATCHABLE_HANDLE(DisplayKHR)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(DisplayModeKHR)

enum class DisplayPlaneAlphaBitsKHR : int32_t;

using DisplayModeCreateFlagsKHR = Flags<DummyEnum>;
using DisplayPlaneAlphaFlagsKHR = Flags<DisplayPlaneAlphaBitsKHR>;
using DisplaySurfaceCreateFlagsKHR = Flags<DummyEnum>;

struct DisplayModeParametersKHR;
struct DisplayModeCreateInfoKHR;
struct DisplayModePropertiesKHR;
struct DisplayPlaneCapabilitiesKHR;
struct DisplayPlanePropertiesKHR;
struct DisplayPropertiesKHR;
struct DisplaySurfaceCreateInfoKHR;

struct DisplayPresentInfoKHR;


#ifdef VK_USE_PLATFORM_XLIB_KHR
using XlibSurfaceCreateFlagsKHR = Flags<DummyEnum>;

struct XlibSurfaceCreateInfoKHR;

#endif //VK_USE_PLATFORM_XLIB_KHR


#ifdef VK_USE_PLATFORM_XCB_KHR
using XcbSurfaceCreateFlagsKHR = Flags<DummyEnum>;

struct XcbSurfaceCreateInfoKHR;

#endif //VK_USE_PLATFORM_XCB_KHR


#ifdef VK_USE_PLATFORM_WAYLAND_KHR
using WaylandSurfaceCreateFlagsKHR = Flags<DummyEnum>;

struct WaylandSurfaceCreateInfoKHR;

#endif //VK_USE_PLATFORM_WAYLAND_KHR


#ifdef VK_USE_PLATFORM_WIN32_KHR
using Win32SurfaceCreateFlagsKHR = Flags<DummyEnum>;

struct Win32SurfaceCreateInfoKHR;

#endif //VK_USE_PLATFORM_WIN32_KHR

VK_DEFINE_NON_DISPATCHABLE_HANDLE(VideoSessionKHR)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VideoSessionParametersKHR)

enum class VideoCodecOperationBitsKHR : int32_t;
enum class VideoChromaSubsamplingBitsKHR : int32_t;
enum class VideoComponentBitDepthBitsKHR : int32_t;
enum class VideoCapabilityBitsKHR : int32_t;
enum class VideoSessionCreateBitsKHR : int32_t;
enum class VideoSessionParametersCreateBitsKHR : int32_t;
enum class VideoCodingControlBitsKHR : int32_t;
enum class QueryResultStatusKHR : int32_t;

using VideoCodecOperationFlagsKHR = Flags<VideoCodecOperationBitsKHR>;
using VideoChromaSubsamplingFlagsKHR = Flags<VideoChromaSubsamplingBitsKHR>;
using VideoComponentBitDepthFlagsKHR = Flags<VideoComponentBitDepthBitsKHR>;
using VideoCapabilityFlagsKHR = Flags<VideoCapabilityBitsKHR>;
using VideoSessionCreateFlagsKHR = Flags<VideoSessionCreateBitsKHR>;
using VideoSessionParametersCreateFlagsKHR = Flags<VideoSessionParametersCreateBitsKHR>;
using VideoBeginCodingFlagsKHR = Flags<DummyEnum>;
using VideoEndCodingFlagsKHR = Flags<DummyEnum>;
using VideoCodingControlFlagsKHR = Flags<VideoCodingControlBitsKHR>;

struct QueueFamilyQueryResultStatusPropertiesKHR;
struct QueueFamilyVideoPropertiesKHR;
struct VideoProfileInfoKHR;
struct VideoProfileListInfoKHR;
struct VideoCapabilitiesKHR;
struct PhysicalDeviceVideoFormatInfoKHR;
struct VideoFormatPropertiesKHR;
struct VideoPictureResourceInfoKHR;
struct VideoReferenceSlotInfoKHR;
struct VideoSessionMemoryRequirementsKHR;
struct BindVideoSessionMemoryInfoKHR;
struct VideoSessionCreateInfoKHR;
struct VideoSessionParametersCreateInfoKHR;
struct VideoSessionParametersUpdateInfoKHR;
struct VideoBeginCodingInfoKHR;
struct VideoEndCodingInfoKHR;
struct VideoCodingControlInfoKHR;

enum class VideoDecodeCapabilityBitsKHR : int32_t;
enum class VideoDecodeUsageBitsKHR : int32_t;

using VideoDecodeCapabilityFlagsKHR = Flags<VideoDecodeCapabilityBitsKHR>;
using VideoDecodeUsageFlagsKHR = Flags<VideoDecodeUsageBitsKHR>;
using VideoDecodeFlagsKHR = Flags<DummyEnum>;

struct VideoDecodeCapabilitiesKHR;
struct VideoDecodeUsageInfoKHR;
struct VideoDecodeInfoKHR;

enum class VideoEncodeH264CapabilityBitsKHR : int32_t;
enum class VideoEncodeH264StdBitsKHR : int32_t;
enum class VideoEncodeH264RateControlBitsKHR : int32_t;

using VideoEncodeH264CapabilityFlagsKHR = Flags<VideoEncodeH264CapabilityBitsKHR>;
using VideoEncodeH264StdFlagsKHR = Flags<VideoEncodeH264StdBitsKHR>;
using VideoEncodeH264RateControlFlagsKHR = Flags<VideoEncodeH264RateControlBitsKHR>;

struct VideoEncodeH264CapabilitiesKHR;
struct VideoEncodeH264QpKHR;
struct VideoEncodeH264QualityLevelPropertiesKHR;
struct VideoEncodeH264SessionCreateInfoKHR;
struct VideoEncodeH264SessionParametersAddInfoKHR;
struct VideoEncodeH264SessionParametersCreateInfoKHR;
struct VideoEncodeH264SessionParametersGetInfoKHR;
struct VideoEncodeH264SessionParametersFeedbackInfoKHR;
struct VideoEncodeH264NaluSliceInfoKHR;
struct VideoEncodeH264PictureInfoKHR;
struct VideoEncodeH264DpbSlotInfoKHR;
struct VideoEncodeH264ProfileInfoKHR;
struct VideoEncodeH264RateControlInfoKHR;
struct VideoEncodeH264FrameSizeKHR;
struct VideoEncodeH264RateControlLayerInfoKHR;
struct VideoEncodeH264GopRemainingFrameInfoKHR;

enum class VideoEncodeH265CapabilityBitsKHR : int32_t;
enum class VideoEncodeH265StdBitsKHR : int32_t;
enum class VideoEncodeH265CtbSizeBitsKHR : int32_t;
enum class VideoEncodeH265TransformBlockSizeBitsKHR : int32_t;
enum class VideoEncodeH265RateControlBitsKHR : int32_t;

using VideoEncodeH265CapabilityFlagsKHR = Flags<VideoEncodeH265CapabilityBitsKHR>;
using VideoEncodeH265StdFlagsKHR = Flags<VideoEncodeH265StdBitsKHR>;
using VideoEncodeH265CtbSizeFlagsKHR = Flags<VideoEncodeH265CtbSizeBitsKHR>;
using VideoEncodeH265TransformBlockSizeFlagsKHR = Flags<VideoEncodeH265TransformBlockSizeBitsKHR>;
using VideoEncodeH265RateControlFlagsKHR = Flags<VideoEncodeH265RateControlBitsKHR>;

struct VideoEncodeH265CapabilitiesKHR;
struct VideoEncodeH265SessionCreateInfoKHR;
struct VideoEncodeH265QpKHR;
struct VideoEncodeH265QualityLevelPropertiesKHR;
struct VideoEncodeH265SessionParametersAddInfoKHR;
struct VideoEncodeH265SessionParametersCreateInfoKHR;
struct VideoEncodeH265SessionParametersGetInfoKHR;
struct VideoEncodeH265SessionParametersFeedbackInfoKHR;
struct VideoEncodeH265NaluSliceSegmentInfoKHR;
struct VideoEncodeH265PictureInfoKHR;
struct VideoEncodeH265DpbSlotInfoKHR;
struct VideoEncodeH265ProfileInfoKHR;
struct VideoEncodeH265RateControlInfoKHR;
struct VideoEncodeH265FrameSizeKHR;
struct VideoEncodeH265RateControlLayerInfoKHR;
struct VideoEncodeH265GopRemainingFrameInfoKHR;

enum class VideoDecodeH264PictureLayoutBitsKHR : int32_t;

using VideoDecodeH264PictureLayoutFlagsKHR = Flags<VideoDecodeH264PictureLayoutBitsKHR>;

struct VideoDecodeH264ProfileInfoKHR;
struct VideoDecodeH264CapabilitiesKHR;
struct VideoDecodeH264SessionParametersAddInfoKHR;
struct VideoDecodeH264SessionParametersCreateInfoKHR;
struct VideoDecodeH264PictureInfoKHR;
struct VideoDecodeH264DpbSlotInfoKHR;

using RenderingInfoKHR = RenderingInfo;
using RenderingAttachmentInfoKHR = RenderingAttachmentInfo;
using PipelineRenderingCreateInfoKHR = PipelineRenderingCreateInfo;
using PhysicalDeviceDynamicRenderingFeaturesKHR = PhysicalDeviceDynamicRenderingFeatures;
using CommandBufferInheritanceRenderingInfoKHR = CommandBufferInheritanceRenderingInfo;
using RenderingFlagsKHR = RenderingFlags;
using RenderingBitsKHR = RenderingBits;
using RenderPassMultiviewCreateInfoKHR = RenderPassMultiviewCreateInfo;
using PhysicalDeviceMultiviewFeaturesKHR = PhysicalDeviceMultiviewFeatures;
using PhysicalDeviceMultiviewPropertiesKHR = PhysicalDeviceMultiviewProperties;
using PhysicalDeviceFeatures2KHR = PhysicalDeviceFeatures2;
using PhysicalDeviceProperties2KHR = PhysicalDeviceProperties2;
using FormatProperties2KHR = FormatProperties2;
using ImageFormatProperties2KHR = ImageFormatProperties2;
using PhysicalDeviceImageFormatInfo2KHR = PhysicalDeviceImageFormatInfo2;
using QueueFamilyProperties2KHR = QueueFamilyProperties2;
using PhysicalDeviceMemoryProperties2KHR = PhysicalDeviceMemoryProperties2;
using SparseImageFormatProperties2KHR = SparseImageFormatProperties2;
using PhysicalDeviceSparseImageFormatInfo2KHR = PhysicalDeviceSparseImageFormatInfo2;
using PeerMemoryFeatureFlagsKHR = PeerMemoryFeatureFlags;
using PeerMemoryFeatureBitsKHR = PeerMemoryFeatureBits;
using MemoryAllocateFlagsKHR = MemoryAllocateFlags;
using MemoryAllocateBitsKHR = MemoryAllocateBits;
using MemoryAllocateFlagsInfoKHR = MemoryAllocateFlagsInfo;
using DeviceGroupRenderPassBeginInfoKHR = DeviceGroupRenderPassBeginInfo;
using DeviceGroupCommandBufferBeginInfoKHR = DeviceGroupCommandBufferBeginInfo;
using DeviceGroupSubmitInfoKHR = DeviceGroupSubmitInfo;
using DeviceGroupBindSparseInfoKHR = DeviceGroupBindSparseInfo;
using BindBufferMemoryDeviceGroupInfoKHR = BindBufferMemoryDeviceGroupInfo;
using BindImageMemoryDeviceGroupInfoKHR = BindImageMemoryDeviceGroupInfo;
using CommandPoolTrimFlagsKHR = CommandPoolTrimFlags;
using PhysicalDeviceGroupPropertiesKHR = PhysicalDeviceGroupProperties;
using DeviceGroupDeviceCreateInfoKHR = DeviceGroupDeviceCreateInfo;
using ExternalMemoryHandleTypeFlagsKHR = ExternalMemoryHandleTypeFlags;
using ExternalMemoryHandleTypeBitsKHR = ExternalMemoryHandleTypeBits;
using ExternalMemoryFeatureFlagsKHR = ExternalMemoryFeatureFlags;
using ExternalMemoryFeatureBitsKHR = ExternalMemoryFeatureBits;
using ExternalMemoryPropertiesKHR = ExternalMemoryProperties;
using PhysicalDeviceExternalImageFormatInfoKHR = PhysicalDeviceExternalImageFormatInfo;
using ExternalImageFormatPropertiesKHR = ExternalImageFormatProperties;
using PhysicalDeviceExternalBufferInfoKHR = PhysicalDeviceExternalBufferInfo;
using ExternalBufferPropertiesKHR = ExternalBufferProperties;
using PhysicalDeviceIDPropertiesKHR = PhysicalDeviceIDProperties;
using ExternalMemoryImageCreateInfoKHR = ExternalMemoryImageCreateInfo;
using ExternalMemoryBufferCreateInfoKHR = ExternalMemoryBufferCreateInfo;
using ExportMemoryAllocateInfoKHR = ExportMemoryAllocateInfo;

#ifdef VK_USE_PLATFORM_WIN32_KHR
struct ImportMemoryWin32HandleInfoKHR;
struct ExportMemoryWin32HandleInfoKHR;
struct MemoryWin32HandlePropertiesKHR;
struct MemoryGetWin32HandleInfoKHR;

#endif //VK_USE_PLATFORM_WIN32_KHR

struct ImportMemoryFdInfoKHR;
struct MemoryFdPropertiesKHR;
struct MemoryGetFdInfoKHR;


#ifdef VK_USE_PLATFORM_WIN32_KHR
struct Win32KeyedMutexAcquireReleaseInfoKHR;

#endif //VK_USE_PLATFORM_WIN32_KHR

using ExternalSemaphoreHandleTypeFlagsKHR = ExternalSemaphoreHandleTypeFlags;
using ExternalSemaphoreHandleTypeBitsKHR = ExternalSemaphoreHandleTypeBits;
using ExternalSemaphoreFeatureFlagsKHR = ExternalSemaphoreFeatureFlags;
using ExternalSemaphoreFeatureBitsKHR = ExternalSemaphoreFeatureBits;
using PhysicalDeviceExternalSemaphoreInfoKHR = PhysicalDeviceExternalSemaphoreInfo;
using ExternalSemaphorePropertiesKHR = ExternalSemaphoreProperties;
using SemaphoreImportFlagsKHR = SemaphoreImportFlags;
using SemaphoreImportBitsKHR = SemaphoreImportBits;
using ExportSemaphoreCreateInfoKHR = ExportSemaphoreCreateInfo;

#ifdef VK_USE_PLATFORM_WIN32_KHR
struct ImportSemaphoreWin32HandleInfoKHR;
struct ExportSemaphoreWin32HandleInfoKHR;
struct D3D12FenceSubmitInfoKHR;
struct SemaphoreGetWin32HandleInfoKHR;

#endif //VK_USE_PLATFORM_WIN32_KHR

struct ImportSemaphoreFdInfoKHR;
struct SemaphoreGetFdInfoKHR;

using PhysicalDevicePushDescriptorPropertiesKHR = PhysicalDevicePushDescriptorProperties;
using PhysicalDeviceShaderFloat16Int8FeaturesKHR = PhysicalDeviceShaderFloat16Int8Features;
using PhysicalDeviceFloat16Int8FeaturesKHR = PhysicalDeviceShaderFloat16Int8Features;
using PhysicalDevice16BitStorageFeaturesKHR = PhysicalDevice16BitStorageFeatures;
struct RectLayerKHR;
struct PresentRegionKHR;
struct PresentRegionsKHR;

using DescriptorUpdateTemplateKHR = DescriptorUpdateTemplate;
using DescriptorUpdateTemplateCreateFlagsKHR = DescriptorUpdateTemplateCreateFlags;
using DescriptorUpdateTemplateTypeKHR = DescriptorUpdateTemplateType;
using DescriptorUpdateTemplateEntryKHR = DescriptorUpdateTemplateEntry;
using DescriptorUpdateTemplateCreateInfoKHR = DescriptorUpdateTemplateCreateInfo;
using PhysicalDeviceImagelessFramebufferFeaturesKHR = PhysicalDeviceImagelessFramebufferFeatures;
using FramebufferAttachmentsCreateInfoKHR = FramebufferAttachmentsCreateInfo;
using FramebufferAttachmentImageInfoKHR = FramebufferAttachmentImageInfo;
using RenderPassAttachmentBeginInfoKHR = RenderPassAttachmentBeginInfo;
using RenderPassCreateInfo2KHR = RenderPassCreateInfo2;
using AttachmentDescription2KHR = AttachmentDescription2;
using AttachmentReference2KHR = AttachmentReference2;
using SubpassDescription2KHR = SubpassDescription2;
using SubpassDependency2KHR = SubpassDependency2;
using SubpassBeginInfoKHR = SubpassBeginInfo;
using SubpassEndInfoKHR = SubpassEndInfo;
struct SharedPresentSurfaceCapabilitiesKHR;

using ExternalFenceHandleTypeFlagsKHR = ExternalFenceHandleTypeFlags;
using ExternalFenceHandleTypeBitsKHR = ExternalFenceHandleTypeBits;
using ExternalFenceFeatureFlagsKHR = ExternalFenceFeatureFlags;
using ExternalFenceFeatureBitsKHR = ExternalFenceFeatureBits;
using PhysicalDeviceExternalFenceInfoKHR = PhysicalDeviceExternalFenceInfo;
using ExternalFencePropertiesKHR = ExternalFenceProperties;
using FenceImportFlagsKHR = FenceImportFlags;
using FenceImportBitsKHR = FenceImportBits;
using ExportFenceCreateInfoKHR = ExportFenceCreateInfo;

#ifdef VK_USE_PLATFORM_WIN32_KHR
struct ImportFenceWin32HandleInfoKHR;
struct ExportFenceWin32HandleInfoKHR;
struct FenceGetWin32HandleInfoKHR;

#endif //VK_USE_PLATFORM_WIN32_KHR

struct ImportFenceFdInfoKHR;
struct FenceGetFdInfoKHR;

enum class PerformanceCounterUnitKHR : int32_t;
enum class PerformanceCounterScopeKHR : int32_t;
enum class PerformanceCounterStorageKHR : int32_t;
enum class PerformanceCounterDescriptionBitsKHR : int32_t;
enum class AcquireProfilingLockBitsKHR : int32_t;

using PerformanceCounterDescriptionFlagsKHR = Flags<PerformanceCounterDescriptionBitsKHR>;
using AcquireProfilingLockFlagsKHR = Flags<AcquireProfilingLockBitsKHR>;

struct PhysicalDevicePerformanceQueryFeaturesKHR;
struct PhysicalDevicePerformanceQueryPropertiesKHR;
struct PerformanceCounterKHR;
struct PerformanceCounterDescriptionKHR;
struct QueryPoolPerformanceCreateInfoKHR;
union PerformanceCounterResultKHR;
struct AcquireProfilingLockInfoKHR;
struct PerformanceQuerySubmitInfoKHR;

using PhysicalDevicePointClippingPropertiesKHR = PhysicalDevicePointClippingProperties;
using PointClippingBehaviorKHR = PointClippingBehavior;
using RenderPassInputAttachmentAspectCreateInfoKHR = RenderPassInputAttachmentAspectCreateInfo;
using InputAttachmentAspectReferenceKHR = InputAttachmentAspectReference;
using ImageViewUsageCreateInfoKHR = ImageViewUsageCreateInfo;
using TessellationDomainOriginKHR = TessellationDomainOrigin;
using PipelineTessellationDomainOriginStateCreateInfoKHR = PipelineTessellationDomainOriginStateCreateInfo;
struct PhysicalDeviceSurfaceInfo2KHR;
struct SurfaceCapabilities2KHR;
struct SurfaceFormat2KHR;

using PhysicalDeviceVariablePointerFeaturesKHR = PhysicalDeviceVariablePointersFeatures;
using PhysicalDeviceVariablePointersFeaturesKHR = PhysicalDeviceVariablePointersFeatures;
struct DisplayProperties2KHR;
struct DisplayPlaneProperties2KHR;
struct DisplayModeProperties2KHR;
struct DisplayPlaneInfo2KHR;
struct DisplayPlaneCapabilities2KHR;

using MemoryDedicatedRequirementsKHR = MemoryDedicatedRequirements;
using MemoryDedicatedAllocateInfoKHR = MemoryDedicatedAllocateInfo;
struct PhysicalDeviceShaderBfloat16FeaturesKHR;

using BufferMemoryRequirementsInfo2KHR = BufferMemoryRequirementsInfo2;
using ImageMemoryRequirementsInfo2KHR = ImageMemoryRequirementsInfo2;
using ImageSparseMemoryRequirementsInfo2KHR = ImageSparseMemoryRequirementsInfo2;
using MemoryRequirements2KHR = MemoryRequirements2;
using SparseImageMemoryRequirements2KHR = SparseImageMemoryRequirements2;
using ImageFormatListCreateInfoKHR = ImageFormatListCreateInfo;
VK_DEFINE_NON_DISPATCHABLE_HANDLE(AccelerationStructureKHR)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(DeferredOperationKHR)

enum class AccelerationStructureTypeKHR : int32_t;
enum class BuildAccelerationStructureBitsKHR : int32_t;
enum class BuildAccelerationStructureModeKHR : int32_t;
enum class GeometryTypeKHR : int32_t;
enum class GeometryBitsKHR : int32_t;
enum class AccelerationStructureBuildTypeKHR : int32_t;
enum class GeometryInstanceBitsKHR : int32_t;
enum class AccelerationStructureCreateBitsKHR : int32_t;
enum class CopyAccelerationStructureModeKHR : int32_t;
enum class AccelerationStructureCompatibilityKHR : int32_t;

using BuildAccelerationStructureFlagsKHR = Flags<BuildAccelerationStructureBitsKHR>;
using GeometryFlagsKHR = Flags<GeometryBitsKHR>;
using GeometryInstanceFlagsKHR = Flags<GeometryInstanceBitsKHR>;
using AccelerationStructureCreateFlagsKHR = Flags<AccelerationStructureCreateBitsKHR>;

union DeviceOrHostAddressKHR;
union DeviceOrHostAddressConstKHR;
struct AccelerationStructureBuildRangeInfoKHR;
struct AabbPositionsKHR;
struct AccelerationStructureGeometryTrianglesDataKHR;
struct TransformMatrixKHR;
struct AccelerationStructureGeometryAabbsDataKHR;
struct AccelerationStructureGeometryInstancesDataKHR;
union AccelerationStructureGeometryDataKHR;
struct AccelerationStructureGeometryKHR;
struct AccelerationStructureBuildGeometryInfoKHR;
struct AccelerationStructureCreateInfoKHR;
struct WriteDescriptorSetAccelerationStructureKHR;
struct PhysicalDeviceAccelerationStructureFeaturesKHR;
struct PhysicalDeviceAccelerationStructurePropertiesKHR;
struct AccelerationStructureDeviceAddressInfoKHR;
struct AccelerationStructureVersionInfoKHR;
struct CopyAccelerationStructureToMemoryInfoKHR;
struct CopyMemoryToAccelerationStructureInfoKHR;
struct CopyAccelerationStructureInfoKHR;
struct AccelerationStructureBuildSizesInfoKHR;

constexpr auto shaderUnusedKHR = (~0U);

enum class RayTracingShaderGroupTypeKHR : int32_t;
enum class ShaderGroupShaderKHR : int32_t;

struct RayTracingShaderGroupCreateInfoKHR;
struct PipelineLibraryCreateInfoKHR;
struct RayTracingPipelineInterfaceCreateInfoKHR;
struct RayTracingPipelineCreateInfoKHR;
struct PhysicalDeviceRayTracingPipelineFeaturesKHR;
struct PhysicalDeviceRayTracingPipelinePropertiesKHR;
struct StridedDeviceAddressRegionKHR;
struct TraceRaysIndirectCommandKHR;

struct PhysicalDeviceRayQueryFeaturesKHR;

using SamplerYcbcrConversionCreateInfoKHR = SamplerYcbcrConversionCreateInfo;
using SamplerYcbcrConversionInfoKHR = SamplerYcbcrConversionInfo;
using BindImagePlaneMemoryInfoKHR = BindImagePlaneMemoryInfo;
using ImagePlaneMemoryRequirementsInfoKHR = ImagePlaneMemoryRequirementsInfo;
using PhysicalDeviceSamplerYcbcrConversionFeaturesKHR = PhysicalDeviceSamplerYcbcrConversionFeatures;
using SamplerYcbcrConversionImageFormatPropertiesKHR = SamplerYcbcrConversionImageFormatProperties;
using SamplerYcbcrConversionKHR = SamplerYcbcrConversion;
using SamplerYcbcrModelConversionKHR = SamplerYcbcrModelConversion;
using SamplerYcbcrRangeKHR = SamplerYcbcrRange;
using ChromaLocationKHR = ChromaLocation;
using BindBufferMemoryInfoKHR = BindBufferMemoryInfo;
using BindImageMemoryInfoKHR = BindImageMemoryInfo;
using PhysicalDeviceMaintenance3PropertiesKHR = PhysicalDeviceMaintenance3Properties;
using DescriptorSetLayoutSupportKHR = DescriptorSetLayoutSupport;
using PhysicalDeviceShaderSubgroupExtendedTypesFeaturesKHR = PhysicalDeviceShaderSubgroupExtendedTypesFeatures;
using PhysicalDevice8BitStorageFeaturesKHR = PhysicalDevice8BitStorageFeatures;
using PhysicalDeviceShaderAtomicInt64FeaturesKHR = PhysicalDeviceShaderAtomicInt64Features;
struct PhysicalDeviceShaderClockFeaturesKHR;

struct VideoDecodeH265ProfileInfoKHR;
struct VideoDecodeH265CapabilitiesKHR;
struct VideoDecodeH265SessionParametersAddInfoKHR;
struct VideoDecodeH265SessionParametersCreateInfoKHR;
struct VideoDecodeH265PictureInfoKHR;
struct VideoDecodeH265DpbSlotInfoKHR;

using DeviceQueueGlobalPriorityCreateInfoKHR = DeviceQueueGlobalPriorityCreateInfo;
using QueueGlobalPriorityKHR = QueueGlobalPriority;
using PhysicalDeviceGlobalPriorityQueryFeaturesKHR = PhysicalDeviceGlobalPriorityQueryFeatures;
using QueueFamilyGlobalPriorityPropertiesKHR = QueueFamilyGlobalPriorityProperties;
using DriverIdKHR = DriverId;
using ConformanceVersionKHR = ConformanceVersion;
using PhysicalDeviceDriverPropertiesKHR = PhysicalDeviceDriverProperties;
using PhysicalDeviceFloatControlsPropertiesKHR = PhysicalDeviceFloatControlsProperties;
using ShaderFloatControlsIndependenceKHR = ShaderFloatControlsIndependence;
using SubpassDescriptionDepthStencilResolveKHR = SubpassDescriptionDepthStencilResolve;
using PhysicalDeviceDepthStencilResolvePropertiesKHR = PhysicalDeviceDepthStencilResolveProperties;
using ResolveModeBitsKHR = ResolveModeBits;
using ResolveModeFlagsKHR = ResolveModeFlags;
using SemaphoreTypeKHR = SemaphoreType;
using PhysicalDeviceTimelineSemaphoreFeaturesKHR = PhysicalDeviceTimelineSemaphoreFeatures;
using PhysicalDeviceTimelineSemaphorePropertiesKHR = PhysicalDeviceTimelineSemaphoreProperties;
using SemaphoreTypeCreateInfoKHR = SemaphoreTypeCreateInfo;
using TimelineSemaphoreSubmitInfoKHR = TimelineSemaphoreSubmitInfo;
using SemaphoreWaitBitsKHR = SemaphoreWaitBits;
using SemaphoreWaitFlagsKHR = SemaphoreWaitFlags;
using SemaphoreWaitInfoKHR = SemaphoreWaitInfo;
using SemaphoreSignalInfoKHR = SemaphoreSignalInfo;
using PhysicalDeviceVulkanMemoryModelFeaturesKHR = PhysicalDeviceVulkanMemoryModelFeatures;
using PhysicalDeviceShaderTerminateInvocationFeaturesKHR = PhysicalDeviceShaderTerminateInvocationFeatures;
enum class FragmentShadingRateCombinerOpKHR : int32_t;

struct FragmentShadingRateAttachmentInfoKHR;
struct PipelineFragmentShadingRateStateCreateInfoKHR;
struct PhysicalDeviceFragmentShadingRateFeaturesKHR;
struct PhysicalDeviceFragmentShadingRatePropertiesKHR;
struct PhysicalDeviceFragmentShadingRateKHR;
struct RenderingFragmentShadingRateAttachmentInfoKHR;

struct PhysicalDeviceShaderConstantDataFeaturesKHR;

using PhysicalDeviceDynamicRenderingLocalReadFeaturesKHR = PhysicalDeviceDynamicRenderingLocalReadFeatures;
using RenderingAttachmentLocationInfoKHR = RenderingAttachmentLocationInfo;
using RenderingInputAttachmentIndexInfoKHR = RenderingInputAttachmentIndexInfo;
struct PhysicalDeviceShaderAbortFeaturesKHR;
struct DeviceFaultShaderAbortMessageInfoKHR;
struct PhysicalDeviceShaderAbortPropertiesKHR;

struct PhysicalDeviceShaderQuadControlFeaturesKHR;

struct SurfaceProtectedCapabilitiesKHR;

using PhysicalDeviceSeparateDepthStencilLayoutsFeaturesKHR = PhysicalDeviceSeparateDepthStencilLayoutsFeatures;
using AttachmentReferenceStencilLayoutKHR = AttachmentReferenceStencilLayout;
using AttachmentDescriptionStencilLayoutKHR = AttachmentDescriptionStencilLayout;
struct PhysicalDevicePresentWaitFeaturesKHR;

using PhysicalDeviceUniformBufferStandardLayoutFeaturesKHR = PhysicalDeviceUniformBufferStandardLayoutFeatures;
using PhysicalDeviceBufferDeviceAddressFeaturesKHR = PhysicalDeviceBufferDeviceAddressFeatures;
using BufferDeviceAddressInfoKHR = BufferDeviceAddressInfo;
using BufferOpaqueCaptureAddressCreateInfoKHR = BufferOpaqueCaptureAddressCreateInfo;
using MemoryOpaqueCaptureAddressAllocateInfoKHR = MemoryOpaqueCaptureAddressAllocateInfo;
using DeviceMemoryOpaqueCaptureAddressInfoKHR = DeviceMemoryOpaqueCaptureAddressInfo;
enum class PipelineExecutableStatisticFormatKHR : int32_t;

struct PhysicalDevicePipelineExecutablePropertiesFeaturesKHR;
struct PipelineInfoKHR;
struct PipelineExecutablePropertiesKHR;
struct PipelineExecutableInfoKHR;
union PipelineExecutableStatisticValueKHR;
struct PipelineExecutableStatisticKHR;
struct PipelineExecutableInternalRepresentationKHR;

using MemoryMapInfoKHR = MemoryMapInfo;
using MemoryUnmapInfoKHR = MemoryUnmapInfo;
using MemoryUnmapBitsKHR = MemoryUnmapBits;
using MemoryUnmapFlagsKHR = MemoryUnmapFlags;
using PhysicalDeviceShaderIntegerDotProductFeaturesKHR = PhysicalDeviceShaderIntegerDotProductFeatures;
using PhysicalDeviceShaderIntegerDotProductPropertiesKHR = PhysicalDeviceShaderIntegerDotProductProperties;
struct PresentIdKHR;
struct PhysicalDevicePresentIdFeaturesKHR;

enum class VideoEncodeBitsKHR : int32_t;
enum class VideoEncodeCapabilityBitsKHR : int32_t;
enum class VideoEncodeRateControlModeBitsKHR : int32_t;
enum class VideoEncodeFeedbackBitsKHR : int32_t;
enum class VideoEncodeUsageBitsKHR : int32_t;
enum class VideoEncodeContentBitsKHR : int32_t;
enum class VideoEncodeTuningModeKHR : int32_t;

using VideoEncodeFlagsKHR = Flags<VideoEncodeBitsKHR>;
using VideoEncodeCapabilityFlagsKHR = Flags<VideoEncodeCapabilityBitsKHR>;
using VideoEncodeRateControlModeFlagsKHR = Flags<VideoEncodeRateControlModeBitsKHR>;
using VideoEncodeFeedbackFlagsKHR = Flags<VideoEncodeFeedbackBitsKHR>;
using VideoEncodeUsageFlagsKHR = Flags<VideoEncodeUsageBitsKHR>;
using VideoEncodeContentFlagsKHR = Flags<VideoEncodeContentBitsKHR>;
using VideoEncodeRateControlFlagsKHR = Flags<DummyEnum>;

struct VideoEncodeInfoKHR;
struct VideoEncodeCapabilitiesKHR;
struct QueryPoolVideoEncodeFeedbackCreateInfoKHR;
struct VideoEncodeUsageInfoKHR;
struct VideoEncodeRateControlLayerInfoKHR;
struct VideoEncodeRateControlInfoKHR;
struct PhysicalDeviceVideoEncodeQualityLevelInfoKHR;
struct VideoEncodeQualityLevelPropertiesKHR;
struct VideoEncodeQualityLevelInfoKHR;
struct VideoEncodeSessionParametersGetInfoKHR;
struct VideoEncodeSessionParametersFeedbackInfoKHR;

using PipelineStageFlags2KHR = PipelineStageFlags2;
using PipelineStageBits2KHR = PipelineStageBits2;
using AccessFlags2KHR = AccessFlags2;
using AccessBits2KHR = AccessBits2;
using MemoryBarrier2KHR = MemoryBarrier2;
using BufferMemoryBarrier2KHR = BufferMemoryBarrier2;
using ImageMemoryBarrier2KHR = ImageMemoryBarrier2;
using DependencyInfoKHR = DependencyInfo;
using SubmitInfo2KHR = SubmitInfo2;
using SemaphoreSubmitInfoKHR = SemaphoreSubmitInfo;
using CommandBufferSubmitInfoKHR = CommandBufferSubmitInfo;
using SubmitBitsKHR = SubmitBits;
using SubmitFlagsKHR = SubmitFlags;
using PhysicalDeviceSynchronization2FeaturesKHR = PhysicalDeviceSynchronization2Features;
enum class AddressCommandBitsKHR : int32_t;
enum class ConditionalRenderingBitsEXT : int32_t;

using AddressCommandFlagsKHR = Flags<AddressCommandBitsKHR>;
using ConditionalRenderingFlagsEXT = Flags<ConditionalRenderingBitsEXT>;

struct DeviceAddressRangeKHR;
struct StridedDeviceAddressRangeKHR;
struct DeviceMemoryCopyKHR;
struct CopyDeviceMemoryInfoKHR;
struct DeviceMemoryImageCopyKHR;
struct CopyDeviceMemoryImageInfoKHR;
struct MemoryRangeBarrierKHR;
struct MemoryRangeBarriersInfoKHR;
struct PhysicalDeviceDeviceAddressCommandsFeaturesKHR;
struct BindIndexBuffer3InfoKHR;
struct BindVertexBuffer3InfoKHR;
struct DrawIndirect2InfoKHR;
struct DrawIndirectCount2InfoKHR;
struct DispatchIndirect2InfoKHR;
struct ConditionalRenderingBeginInfo2EXT;
struct BindTransformFeedbackBuffer2InfoEXT;
struct MemoryMarkerInfoAMD;
struct AccelerationStructureCreateInfo2KHR;

struct PhysicalDeviceFragmentShaderBarycentricFeaturesKHR;
struct PhysicalDeviceFragmentShaderBarycentricPropertiesKHR;

struct PhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR;

using PhysicalDeviceZeroInitializeWorkgroupMemoryFeaturesKHR = PhysicalDeviceZeroInitializeWorkgroupMemoryFeatures;
struct PhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR;

using CopyBufferInfo2KHR = CopyBufferInfo2;
using CopyImageInfo2KHR = CopyImageInfo2;
using CopyBufferToImageInfo2KHR = CopyBufferToImageInfo2;
using CopyImageToBufferInfo2KHR = CopyImageToBufferInfo2;
using BlitImageInfo2KHR = BlitImageInfo2;
using ResolveImageInfo2KHR = ResolveImageInfo2;
using BufferCopy2KHR = BufferCopy2;
using ImageCopy2KHR = ImageCopy2;
using ImageBlit2KHR = ImageBlit2;
using BufferImageCopy2KHR = BufferImageCopy2;
using ImageResolve2KHR = ImageResolve2;
using FormatFeatureFlags2KHR = FormatFeatureFlags2;
using FormatFeatureBits2KHR = FormatFeatureBits2;
using FormatProperties3KHR = FormatProperties3;
struct PhysicalDeviceRayTracingMaintenance1FeaturesKHR;
struct TraceRaysIndirectCommand2KHR;

struct PhysicalDeviceShaderUntypedPointersFeaturesKHR;

using PhysicalDeviceMaintenance4FeaturesKHR = PhysicalDeviceMaintenance4Features;
using PhysicalDeviceMaintenance4PropertiesKHR = PhysicalDeviceMaintenance4Properties;
using DeviceBufferMemoryRequirementsKHR = DeviceBufferMemoryRequirements;
using DeviceImageMemoryRequirementsKHR = DeviceImageMemoryRequirements;
using PhysicalDeviceShaderSubgroupRotateFeaturesKHR = PhysicalDeviceShaderSubgroupRotateFeatures;
struct PhysicalDeviceShaderMaximalReconvergenceFeaturesKHR;

using PhysicalDeviceMaintenance5FeaturesKHR = PhysicalDeviceMaintenance5Features;
using PhysicalDeviceMaintenance5PropertiesKHR = PhysicalDeviceMaintenance5Properties;
using RenderingAreaInfoKHR = RenderingAreaInfo;
using DeviceImageSubresourceInfoKHR = DeviceImageSubresourceInfo;
using ImageSubresource2KHR = ImageSubresource2;
using SubresourceLayout2KHR = SubresourceLayout2;
using PipelineCreateFlags2KHR = PipelineCreateFlags2;
using PipelineCreateBits2KHR = PipelineCreateBits2;
using PipelineCreateFlags2CreateInfoKHR = PipelineCreateFlags2CreateInfo;
using BufferUsageFlags2KHR = BufferUsageFlags2;
using BufferUsageBits2KHR = BufferUsageBits2;
using BufferUsageFlags2CreateInfoKHR = BufferUsageFlags2CreateInfo;
struct SurfaceCapabilitiesPresentId2KHR;
struct PresentId2KHR;
struct PhysicalDevicePresentId2FeaturesKHR;

struct SurfaceCapabilitiesPresentWait2KHR;
struct PhysicalDevicePresentWait2FeaturesKHR;
struct PresentWait2InfoKHR;

struct PhysicalDeviceRayTracingPositionFetchFeaturesKHR;

constexpr auto maxPipelineBinaryKeySizeKHR = 32;

VK_DEFINE_NON_DISPATCHABLE_HANDLE(PipelineBinaryKHR)

struct PhysicalDevicePipelineBinaryFeaturesKHR;
struct PhysicalDevicePipelineBinaryPropertiesKHR;
struct DevicePipelineBinaryInternalCacheControlKHR;
struct PipelineBinaryKeyKHR;
struct PipelineBinaryDataKHR;
struct PipelineBinaryKeysAndDataKHR;
struct PipelineCreateInfoKHR;
struct PipelineBinaryCreateInfoKHR;
struct PipelineBinaryInfoKHR;
struct ReleaseCapturedPipelineDataInfoKHR;
struct PipelineBinaryDataInfoKHR;
struct PipelineBinaryHandlesInfoKHR;

enum class PresentScalingBitsKHR : int32_t;
enum class PresentGravityBitsKHR : int32_t;

using PresentScalingFlagsKHR = Flags<PresentScalingBitsKHR>;
using PresentGravityFlagsKHR = Flags<PresentGravityBitsKHR>;

struct SurfacePresentModeKHR;
struct SurfacePresentScalingCapabilitiesKHR;
struct SurfacePresentModeCompatibilityKHR;

struct PhysicalDeviceSwapchainMaintenance1FeaturesKHR;
struct SwapchainPresentFenceInfoKHR;
struct SwapchainPresentModesCreateInfoKHR;
struct SwapchainPresentModeInfoKHR;
struct SwapchainPresentScalingCreateInfoKHR;
struct ReleaseSwapchainImagesInfoKHR;

struct PhysicalDeviceInternallySynchronizedQueuesFeaturesKHR;

enum class ComponentTypeKHR : int32_t;
enum class ScopeKHR : int32_t;

struct CooperativeMatrixPropertiesKHR;
struct PhysicalDeviceCooperativeMatrixFeaturesKHR;
struct PhysicalDeviceCooperativeMatrixPropertiesKHR;

struct PhysicalDeviceComputeShaderDerivativesFeaturesKHR;
struct PhysicalDeviceComputeShaderDerivativesPropertiesKHR;

constexpr auto maxVideoAv1ReferencesPerFrameKHR = 7;

struct VideoDecodeAV1ProfileInfoKHR;
struct VideoDecodeAV1CapabilitiesKHR;
struct VideoDecodeAV1SessionParametersCreateInfoKHR;
struct VideoDecodeAV1PictureInfoKHR;
struct VideoDecodeAV1DpbSlotInfoKHR;

enum class VideoEncodeAV1PredictionModeKHR : int32_t;
enum class VideoEncodeAV1RateControlGroupKHR : int32_t;
enum class VideoEncodeAV1CapabilityBitsKHR : int32_t;
enum class VideoEncodeAV1StdBitsKHR : int32_t;
enum class VideoEncodeAV1SuperblockSizeBitsKHR : int32_t;
enum class VideoEncodeAV1RateControlBitsKHR : int32_t;

using VideoEncodeAV1CapabilityFlagsKHR = Flags<VideoEncodeAV1CapabilityBitsKHR>;
using VideoEncodeAV1StdFlagsKHR = Flags<VideoEncodeAV1StdBitsKHR>;
using VideoEncodeAV1SuperblockSizeFlagsKHR = Flags<VideoEncodeAV1SuperblockSizeBitsKHR>;
using VideoEncodeAV1RateControlFlagsKHR = Flags<VideoEncodeAV1RateControlBitsKHR>;

struct PhysicalDeviceVideoEncodeAV1FeaturesKHR;
struct VideoEncodeAV1CapabilitiesKHR;
struct VideoEncodeAV1QIndexKHR;
struct VideoEncodeAV1QualityLevelPropertiesKHR;
struct VideoEncodeAV1SessionCreateInfoKHR;
struct VideoEncodeAV1SessionParametersCreateInfoKHR;
struct VideoEncodeAV1PictureInfoKHR;
struct VideoEncodeAV1DpbSlotInfoKHR;
struct VideoEncodeAV1ProfileInfoKHR;
struct VideoEncodeAV1FrameSizeKHR;
struct VideoEncodeAV1GopRemainingFrameInfoKHR;
struct VideoEncodeAV1RateControlInfoKHR;
struct VideoEncodeAV1RateControlLayerInfoKHR;

constexpr auto maxVideoVp9ReferencesPerFrameKHR = 3;

struct PhysicalDeviceVideoDecodeVP9FeaturesKHR;
struct VideoDecodeVP9ProfileInfoKHR;
struct VideoDecodeVP9CapabilitiesKHR;
struct VideoDecodeVP9PictureInfoKHR;

struct PhysicalDeviceVideoMaintenance1FeaturesKHR;
struct VideoInlineQueryInfoKHR;

using PhysicalDeviceVertexAttributeDivisorPropertiesKHR = PhysicalDeviceVertexAttributeDivisorProperties;
using VertexInputBindingDivisorDescriptionKHR = VertexInputBindingDivisorDescription;
using PipelineVertexInputDivisorStateCreateInfoKHR = PipelineVertexInputDivisorStateCreateInfo;
using PhysicalDeviceVertexAttributeDivisorFeaturesKHR = PhysicalDeviceVertexAttributeDivisorFeatures;
struct PhysicalDeviceUnifiedImageLayoutsFeaturesKHR;
struct AttachmentFeedbackLoopInfoEXT;

using PhysicalDeviceShaderFloatControls2FeaturesKHR = PhysicalDeviceShaderFloatControls2Features;
using PhysicalDeviceIndexTypeUint8FeaturesKHR = PhysicalDeviceIndexTypeUint8Features;
using PhysicalDeviceLineRasterizationFeaturesKHR = PhysicalDeviceLineRasterizationFeatures;
using PhysicalDeviceLineRasterizationPropertiesKHR = PhysicalDeviceLineRasterizationProperties;
using PipelineRasterizationLineStateCreateInfoKHR = PipelineRasterizationLineStateCreateInfo;
using LineRasterizationModeKHR = LineRasterizationMode;
enum class TimeDomainKHR : int32_t;

struct CalibratedTimestampInfoKHR;

using PhysicalDeviceShaderExpectAssumeFeaturesKHR = PhysicalDeviceShaderExpectAssumeFeatures;
struct SetDescriptorBufferOffsetsInfoEXT;
struct BindDescriptorBufferEmbeddedSamplersInfoEXT;

using PhysicalDeviceMaintenance6FeaturesKHR = PhysicalDeviceMaintenance6Features;
using PhysicalDeviceMaintenance6PropertiesKHR = PhysicalDeviceMaintenance6Properties;
using BindMemoryStatusKHR = BindMemoryStatus;
using BindDescriptorSetsInfoKHR = BindDescriptorSetsInfo;
using PushConstantsInfoKHR = PushConstantsInfo;
using PushDescriptorSetInfoKHR = PushDescriptorSetInfo;
using PushDescriptorSetWithTemplateInfoKHR = PushDescriptorSetWithTemplateInfo;
enum class AddressCopyBitsKHR : int32_t;

using AddressCopyFlagsKHR = Flags<AddressCopyBitsKHR>;

struct CopyMemoryIndirectCommandKHR;
struct CopyMemoryIndirectInfoKHR;
struct CopyMemoryToImageIndirectCommandKHR;
struct CopyMemoryToImageIndirectInfoKHR;
struct PhysicalDeviceCopyMemoryIndirectFeaturesKHR;
struct PhysicalDeviceCopyMemoryIndirectPropertiesKHR;

enum class VideoEncodeIntraRefreshModeBitsKHR : int32_t;

using VideoEncodeIntraRefreshModeFlagsKHR = Flags<VideoEncodeIntraRefreshModeBitsKHR>;

struct VideoEncodeIntraRefreshCapabilitiesKHR;
struct VideoEncodeSessionIntraRefreshCreateInfoKHR;
struct VideoEncodeIntraRefreshInfoKHR;
struct VideoReferenceIntraRefreshInfoKHR;
struct PhysicalDeviceVideoEncodeIntraRefreshFeaturesKHR;

struct VideoEncodeQuantizationMapCapabilitiesKHR;
struct VideoFormatQuantizationMapPropertiesKHR;
struct VideoEncodeQuantizationMapInfoKHR;
struct VideoEncodeQuantizationMapSessionParametersCreateInfoKHR;
struct PhysicalDeviceVideoEncodeQuantizationMapFeaturesKHR;
struct VideoEncodeH264QuantizationMapCapabilitiesKHR;
struct VideoEncodeH265QuantizationMapCapabilitiesKHR;
struct VideoFormatH265QuantizationMapPropertiesKHR;
struct VideoEncodeAV1QuantizationMapCapabilitiesKHR;
struct VideoFormatAV1QuantizationMapPropertiesKHR;

struct PhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR;

enum class PhysicalDeviceLayeredApiKHR : int32_t;

struct PhysicalDeviceMaintenance7FeaturesKHR;
struct PhysicalDeviceMaintenance7PropertiesKHR;
struct PhysicalDeviceLayeredApiPropertiesKHR;
struct PhysicalDeviceLayeredApiPropertiesListKHR;
struct PhysicalDeviceLayeredApiVulkanPropertiesKHR;

enum class DeviceFaultBitsKHR : int32_t;
enum class DeviceFaultAddressTypeKHR : int32_t;
enum class DeviceFaultVendorBinaryHeaderVersionKHR : int32_t;

using DeviceFaultFlagsKHR = Flags<DeviceFaultBitsKHR>;

struct PhysicalDeviceFaultFeaturesKHR;
struct PhysicalDeviceFaultPropertiesKHR;
struct DeviceFaultAddressInfoKHR;
struct DeviceFaultVendorInfoKHR;
struct DeviceFaultInfoKHR;
struct DeviceFaultDebugInfoKHR;
struct DeviceFaultVendorBinaryHeaderVersionOneKHR;

enum class AccessBits3KHR : int64_t;

using AccessFlags3KHR = Flags<AccessBits3KHR>;

struct MemoryBarrierAccessFlags3KHR;
struct PhysicalDeviceMaintenance8FeaturesKHR;

struct PhysicalDeviceShaderFmaFeaturesKHR;

enum class DefaultVertexAttributeValueKHR : int32_t;

struct PhysicalDeviceMaintenance9FeaturesKHR;
struct PhysicalDeviceMaintenance9PropertiesKHR;
struct QueueFamilyOwnershipTransferPropertiesKHR;

struct PhysicalDeviceVideoMaintenance2FeaturesKHR;
struct VideoDecodeH264InlineSessionParametersInfoKHR;
struct VideoDecodeH265InlineSessionParametersInfoKHR;
struct VideoDecodeAV1InlineSessionParametersInfoKHR;

struct PhysicalDeviceDepthClampZeroOneFeaturesKHR;

struct PhysicalDeviceRobustness2FeaturesKHR;
struct PhysicalDeviceRobustness2PropertiesKHR;

struct PhysicalDevicePresentModeFifoLatestReadyFeaturesKHR;

enum class RenderingAttachmentBitsKHR : int32_t;
enum class ResolveImageBitsKHR : int32_t;

using RenderingAttachmentFlagsKHR = Flags<RenderingAttachmentBitsKHR>;
using ResolveImageFlagsKHR = Flags<ResolveImageBitsKHR>;

struct PhysicalDeviceMaintenance10FeaturesKHR;
struct PhysicalDeviceMaintenance10PropertiesKHR;
struct RenderingEndInfoKHR;
struct RenderingAttachmentFlagsInfoKHR;
struct ResolveImageModeInfoKHR;

struct PhysicalDeviceMaintenance11FeaturesKHR;
struct QueueFamilyOptimalImageTransferGranularityPropertiesKHR;

VK_DEFINE_NON_DISPATCHABLE_HANDLE(DebugReportCallbackEXT)

enum class DebugReportBitsEXT : int32_t;
enum class DebugReportObjectTypeEXT : int32_t;

using DebugReportFlagsEXT = Flags<DebugReportBitsEXT>;

struct DebugReportCallbackCreateInfoEXT;

struct DebugMarkerObjectNameInfoEXT;
struct DebugMarkerObjectTagInfoEXT;
struct DebugMarkerMarkerInfoEXT;

using PipelineRasterizationStateStreamCreateFlagsEXT = Flags<DummyEnum>;

struct PhysicalDeviceTransformFeedbackFeaturesEXT;
struct PhysicalDeviceTransformFeedbackPropertiesEXT;
struct PipelineRasterizationStateStreamCreateInfoEXT;

enum class ValidationCheckEXT : int32_t;

struct ValidationFlagsEXT;

using PhysicalDeviceTextureCompressionASTCHDRFeaturesEXT = PhysicalDeviceTextureCompressionASTCHDRFeatures;
struct ImageViewASTCDecodeModeEXT;
struct PhysicalDeviceASTCDecodeFeaturesEXT;

using PhysicalDevicePipelineRobustnessFeaturesEXT = PhysicalDevicePipelineRobustnessFeatures;
using PhysicalDevicePipelineRobustnessPropertiesEXT = PhysicalDevicePipelineRobustnessProperties;
using PipelineRobustnessCreateInfoEXT = PipelineRobustnessCreateInfo;
using PipelineRobustnessBufferBehaviorEXT = PipelineRobustnessBufferBehavior;
using PipelineRobustnessImageBehaviorEXT = PipelineRobustnessImageBehavior;
struct ConditionalRenderingBeginInfoEXT;
struct PhysicalDeviceConditionalRenderingFeaturesEXT;
struct CommandBufferInheritanceConditionalRenderingInfoEXT;

enum class SurfaceCounterBitsEXT : int32_t;

using SurfaceCounterFlagsEXT = Flags<SurfaceCounterBitsEXT>;

struct SurfaceCapabilities2EXT;

enum class DisplayPowerStateEXT : int32_t;
enum class DeviceEventTypeEXT : int32_t;
enum class DisplayEventTypeEXT : int32_t;

struct DisplayPowerInfoEXT;
struct DeviceEventInfoEXT;
struct DisplayEventInfoEXT;
struct SwapchainCounterCreateInfoEXT;

enum class DiscardRectangleModeEXT : int32_t;

using PipelineDiscardRectangleStateCreateFlagsEXT = Flags<DummyEnum>;

struct PhysicalDeviceDiscardRectanglePropertiesEXT;
struct PipelineDiscardRectangleStateCreateInfoEXT;

enum class ConservativeRasterizationModeEXT : int32_t;

using PipelineRasterizationConservativeStateCreateFlagsEXT = Flags<DummyEnum>;

struct PhysicalDeviceConservativeRasterizationPropertiesEXT;
struct PipelineRasterizationConservativeStateCreateInfoEXT;

using PipelineRasterizationDepthClipStateCreateFlagsEXT = Flags<DummyEnum>;

struct PhysicalDeviceDepthClipEnableFeaturesEXT;
struct PipelineRasterizationDepthClipStateCreateInfoEXT;

struct XYColorEXT;
struct HdrMetadataEXT;

constexpr auto queueFamilyForeignEXT = (~2U);

VK_DEFINE_NON_DISPATCHABLE_HANDLE(DebugUtilsMessengerEXT)

enum class DebugUtilsMessageSeverityBitsEXT : int32_t;
enum class DebugUtilsMessageTypeBitsEXT : int32_t;

using DebugUtilsMessageTypeFlagsEXT = Flags<DebugUtilsMessageTypeBitsEXT>;
using DebugUtilsMessengerCallbackDataFlagsEXT = Flags<DummyEnum>;
using DebugUtilsMessageSeverityFlagsEXT = Flags<DebugUtilsMessageSeverityBitsEXT>;
using DebugUtilsMessengerCreateFlagsEXT = Flags<DummyEnum>;

struct DebugUtilsLabelEXT;
struct DebugUtilsObjectNameInfoEXT;
struct DebugUtilsMessengerCallbackDataEXT;
struct DebugUtilsMessengerCreateInfoEXT;
struct DebugUtilsObjectTagInfoEXT;

using SamplerReductionModeEXT = SamplerReductionMode;
using SamplerReductionModeCreateInfoEXT = SamplerReductionModeCreateInfo;
using PhysicalDeviceSamplerFilterMinmaxPropertiesEXT = PhysicalDeviceSamplerFilterMinmaxProperties;
VK_DEFINE_NON_DISPATCHABLE_HANDLE(TensorARM)

enum class TensorViewCreateBitsARM : int64_t;
enum class DescriptorMappingSourceEXT : int32_t;
enum class SpirvResourceTypeBitsEXT : int32_t;

using TensorViewCreateFlagsARM = Flags<TensorViewCreateBitsARM>;
using SpirvResourceTypeFlagsEXT = Flags<SpirvResourceTypeBitsEXT>;

struct HostAddressRangeEXT;
struct HostAddressRangeConstEXT;
struct TexelBufferDescriptorInfoEXT;
struct ImageDescriptorInfoEXT;
struct TensorViewCreateInfoARM;
union ResourceDescriptorDataEXT;
struct ResourceDescriptorInfoEXT;
struct BindHeapInfoEXT;
struct PushDataInfoEXT;
struct DescriptorMappingSourceConstantOffsetEXT;
struct DescriptorMappingSourcePushIndexEXT;
struct DescriptorMappingSourceIndirectIndexEXT;
struct DescriptorMappingSourceHeapDataEXT;
struct DescriptorMappingSourceIndirectAddressEXT;
struct DescriptorMappingSourceShaderRecordIndexEXT;
struct DescriptorMappingSourceIndirectIndexArrayEXT;
union DescriptorMappingSourceDataEXT;
struct DescriptorSetAndBindingMappingEXT;
struct ShaderDescriptorSetAndBindingMappingInfoEXT;
struct OpaqueCaptureDataCreateInfoEXT;
struct PhysicalDeviceDescriptorHeapFeaturesEXT;
struct PhysicalDeviceDescriptorHeapPropertiesEXT;
struct CommandBufferInheritanceDescriptorHeapInfoEXT;
struct SamplerCustomBorderColorIndexCreateInfoEXT;
struct SamplerCustomBorderColorCreateInfoEXT;
struct IndirectCommandsLayoutPushDataTokenNV;
struct SubsampledImageFormatPropertiesEXT;
struct PhysicalDeviceDescriptorHeapTensorPropertiesARM;

using DeviceAddressRangeEXT = DeviceAddressRangeKHR;
using PhysicalDeviceInlineUniformBlockFeaturesEXT = PhysicalDeviceInlineUniformBlockFeatures;
using PhysicalDeviceInlineUniformBlockPropertiesEXT = PhysicalDeviceInlineUniformBlockProperties;
using WriteDescriptorSetInlineUniformBlockEXT = WriteDescriptorSetInlineUniformBlock;
using DescriptorPoolInlineUniformBlockCreateInfoEXT = DescriptorPoolInlineUniformBlockCreateInfo;
struct SampleLocationEXT;
struct SampleLocationsInfoEXT;
struct AttachmentSampleLocationsEXT;
struct SubpassSampleLocationsEXT;
struct RenderPassSampleLocationsBeginInfoEXT;
struct PipelineSampleLocationsStateCreateInfoEXT;
struct PhysicalDeviceSampleLocationsPropertiesEXT;
struct MultisamplePropertiesEXT;

enum class BlendOverlapEXT : int32_t;

struct PhysicalDeviceBlendOperationAdvancedFeaturesEXT;
struct PhysicalDeviceBlendOperationAdvancedPropertiesEXT;
struct PipelineColorBlendAdvancedStateCreateInfoEXT;

struct DrmFormatModifierPropertiesEXT;
struct DrmFormatModifierPropertiesListEXT;
struct PhysicalDeviceImageDrmFormatModifierInfoEXT;
struct ImageDrmFormatModifierListCreateInfoEXT;
struct ImageDrmFormatModifierExplicitCreateInfoEXT;
struct ImageDrmFormatModifierPropertiesEXT;
struct DrmFormatModifierProperties2EXT;
struct DrmFormatModifierPropertiesList2EXT;

VK_DEFINE_NON_DISPATCHABLE_HANDLE(ValidationCacheEXT)

enum class ValidationCacheHeaderVersionEXT : int32_t;

using ValidationCacheCreateFlagsEXT = Flags<DummyEnum>;

struct ValidationCacheCreateInfoEXT;
struct ShaderModuleValidationCacheCreateInfoEXT;

using DescriptorSetLayoutBindingFlagsCreateInfoEXT = DescriptorSetLayoutBindingFlagsCreateInfo;
using PhysicalDeviceDescriptorIndexingFeaturesEXT = PhysicalDeviceDescriptorIndexingFeatures;
using PhysicalDeviceDescriptorIndexingPropertiesEXT = PhysicalDeviceDescriptorIndexingProperties;
using DescriptorSetVariableDescriptorCountAllocateInfoEXT = DescriptorSetVariableDescriptorCountAllocateInfo;
using DescriptorSetVariableDescriptorCountLayoutSupportEXT = DescriptorSetVariableDescriptorCountLayoutSupport;
using DescriptorBindingBitsEXT = DescriptorBindingBits;
using DescriptorBindingFlagsEXT = DescriptorBindingFlags;
struct PhysicalDeviceImageViewImageFormatInfoEXT;
struct FilterCubicImageViewImageFormatPropertiesEXT;

struct ImportMemoryHostPointerInfoEXT;
struct MemoryHostPointerPropertiesEXT;
struct PhysicalDeviceExternalMemoryHostPropertiesEXT;

using TimeDomainEXT = TimeDomainKHR;
using CalibratedTimestampInfoEXT = CalibratedTimestampInfoKHR;
struct PhysicalDeviceVertexAttributeDivisorPropertiesEXT;

using VertexInputBindingDivisorDescriptionEXT = VertexInputBindingDivisorDescription;
using PipelineVertexInputDivisorStateCreateInfoEXT = PipelineVertexInputDivisorStateCreateInfo;
using PhysicalDeviceVertexAttributeDivisorFeaturesEXT = PhysicalDeviceVertexAttributeDivisorFeatures;
using PipelineCreationFeedbackBitsEXT = PipelineCreationFeedbackBits;
using PipelineCreationFeedbackFlagsEXT = PipelineCreationFeedbackFlags;
using PipelineCreationFeedbackCreateInfoEXT = PipelineCreationFeedbackCreateInfo;
using PipelineCreationFeedbackEXT = PipelineCreationFeedback;
enum class PresentStageBitsEXT : int32_t;
enum class PastPresentationTimingBitsEXT : int32_t;
enum class PresentTimingInfoBitsEXT : int32_t;

using PresentStageFlagsEXT = Flags<PresentStageBitsEXT>;
using PastPresentationTimingFlagsEXT = Flags<PastPresentationTimingBitsEXT>;
using PresentTimingInfoFlagsEXT = Flags<PresentTimingInfoBitsEXT>;

struct PhysicalDevicePresentTimingFeaturesEXT;
struct PresentTimingSurfaceCapabilitiesEXT;
struct SwapchainCalibratedTimestampInfoEXT;
struct SwapchainTimingPropertiesEXT;
struct SwapchainTimeDomainPropertiesEXT;
struct PastPresentationTimingInfoEXT;
struct PresentStageTimeEXT;
struct PastPresentationTimingEXT;
struct PastPresentationTimingPropertiesEXT;
struct PresentTimingInfoEXT;
struct PresentTimingsInfoEXT;

struct PhysicalDevicePCIBusInfoPropertiesEXT;

struct PhysicalDeviceFragmentDensityMapFeaturesEXT;
struct PhysicalDeviceFragmentDensityMapPropertiesEXT;
struct RenderPassFragmentDensityMapCreateInfoEXT;
struct RenderingFragmentDensityMapAttachmentInfoEXT;

using PhysicalDeviceScalarBlockLayoutFeaturesEXT = PhysicalDeviceScalarBlockLayoutFeatures;
using PhysicalDeviceSubgroupSizeControlFeaturesEXT = PhysicalDeviceSubgroupSizeControlFeatures;
using PhysicalDeviceSubgroupSizeControlPropertiesEXT = PhysicalDeviceSubgroupSizeControlProperties;
using PipelineShaderStageRequiredSubgroupSizeCreateInfoEXT = PipelineShaderStageRequiredSubgroupSizeCreateInfo;
struct PhysicalDeviceShaderImageAtomicInt64FeaturesEXT;

struct PhysicalDeviceMemoryBudgetPropertiesEXT;

struct PhysicalDeviceMemoryPriorityFeaturesEXT;
struct MemoryPriorityAllocateInfoEXT;

struct PhysicalDeviceBufferDeviceAddressFeaturesEXT;
struct BufferDeviceAddressCreateInfoEXT;

using PhysicalDeviceBufferAddressFeaturesEXT = PhysicalDeviceBufferDeviceAddressFeaturesEXT;
using BufferDeviceAddressInfoEXT = BufferDeviceAddressInfo;
using ToolPurposeBitsEXT = ToolPurposeBits;
using ToolPurposeFlagsEXT = ToolPurposeFlags;
using PhysicalDeviceToolPropertiesEXT = PhysicalDeviceToolProperties;
using ImageStencilUsageCreateInfoEXT = ImageStencilUsageCreateInfo;
enum class ValidationFeatureEnableEXT : int32_t;
enum class ValidationFeatureDisableEXT : int32_t;

struct ValidationFeaturesEXT;

struct PhysicalDeviceFragmentShaderInterlockFeaturesEXT;

struct PhysicalDeviceYcbcrImageArraysFeaturesEXT;

enum class ProvokingVertexModeEXT : int32_t;

struct PhysicalDeviceProvokingVertexFeaturesEXT;
struct PhysicalDeviceProvokingVertexPropertiesEXT;
struct PipelineRasterizationProvokingVertexStateCreateInfoEXT;


#ifdef VK_USE_PLATFORM_WIN32_KHR
enum class FullScreenExclusiveEXT : int32_t;

struct SurfaceFullScreenExclusiveInfoEXT;
struct SurfaceCapabilitiesFullScreenExclusiveEXT;
struct SurfaceFullScreenExclusiveWin32InfoEXT;

#endif //VK_USE_PLATFORM_WIN32_KHR

using HeadlessSurfaceCreateFlagsEXT = Flags<DummyEnum>;

struct HeadlessSurfaceCreateInfoEXT;

using PhysicalDeviceLineRasterizationFeaturesEXT = PhysicalDeviceLineRasterizationFeatures;
using PhysicalDeviceLineRasterizationPropertiesEXT = PhysicalDeviceLineRasterizationProperties;
using PipelineRasterizationLineStateCreateInfoEXT = PipelineRasterizationLineStateCreateInfo;
using LineRasterizationModeEXT = LineRasterizationMode;
struct PhysicalDeviceShaderAtomicFloatFeaturesEXT;

using PhysicalDeviceHostQueryResetFeaturesEXT = PhysicalDeviceHostQueryResetFeatures;
using PhysicalDeviceIndexTypeUint8FeaturesEXT = PhysicalDeviceIndexTypeUint8Features;
struct PhysicalDeviceExtendedDynamicStateFeaturesEXT;

using PhysicalDeviceHostImageCopyFeaturesEXT = PhysicalDeviceHostImageCopyFeatures;
using PhysicalDeviceHostImageCopyPropertiesEXT = PhysicalDeviceHostImageCopyProperties;
using HostImageCopyBitsEXT = HostImageCopyBits;
using HostImageCopyFlagsEXT = HostImageCopyFlags;
using MemoryToImageCopyEXT = MemoryToImageCopy;
using ImageToMemoryCopyEXT = ImageToMemoryCopy;
using CopyMemoryToImageInfoEXT = CopyMemoryToImageInfo;
using CopyImageToMemoryInfoEXT = CopyImageToMemoryInfo;
using CopyImageToImageInfoEXT = CopyImageToImageInfo;
using HostImageLayoutTransitionInfoEXT = HostImageLayoutTransitionInfo;
using SubresourceHostMemcpySizeEXT = SubresourceHostMemcpySize;
using HostImageCopyDevicePerformanceQueryEXT = HostImageCopyDevicePerformanceQuery;
using SubresourceLayout2EXT = SubresourceLayout2;
using ImageSubresource2EXT = ImageSubresource2;
struct PhysicalDeviceMapMemoryPlacedFeaturesEXT;
struct PhysicalDeviceMapMemoryPlacedPropertiesEXT;
struct MemoryMapPlacedInfoEXT;

struct PhysicalDeviceShaderAtomicFloat2FeaturesEXT;

using SurfacePresentModeEXT = SurfacePresentModeKHR;
using PresentScalingBitsEXT = PresentScalingBitsKHR;
using PresentScalingFlagsEXT = PresentScalingFlagsKHR;
using PresentGravityBitsEXT = PresentGravityBitsKHR;
using PresentGravityFlagsEXT = PresentGravityFlagsKHR;
using SurfacePresentScalingCapabilitiesEXT = SurfacePresentScalingCapabilitiesKHR;
using SurfacePresentModeCompatibilityEXT = SurfacePresentModeCompatibilityKHR;
using PhysicalDeviceSwapchainMaintenance1FeaturesEXT = PhysicalDeviceSwapchainMaintenance1FeaturesKHR;
using SwapchainPresentFenceInfoEXT = SwapchainPresentFenceInfoKHR;
using SwapchainPresentModesCreateInfoEXT = SwapchainPresentModesCreateInfoKHR;
using SwapchainPresentModeInfoEXT = SwapchainPresentModeInfoKHR;
using SwapchainPresentScalingCreateInfoEXT = SwapchainPresentScalingCreateInfoKHR;
using ReleaseSwapchainImagesInfoEXT = ReleaseSwapchainImagesInfoKHR;
using PhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT = PhysicalDeviceShaderDemoteToHelperInvocationFeatures;
struct PhysicalDeviceTexelBufferAlignmentFeaturesEXT;

using PhysicalDeviceTexelBufferAlignmentPropertiesEXT = PhysicalDeviceTexelBufferAlignmentProperties;
enum class DepthBiasRepresentationEXT : int32_t;

struct PhysicalDeviceDepthBiasControlFeaturesEXT;
struct DepthBiasInfoEXT;
struct DepthBiasRepresentationInfoEXT;

enum class DeviceMemoryReportEventTypeEXT : int32_t;

using DeviceMemoryReportFlagsEXT = Flags<DummyEnum>;

struct PhysicalDeviceDeviceMemoryReportFeaturesEXT;
struct DeviceMemoryReportCallbackDataEXT;
struct DeviceDeviceMemoryReportCreateInfoEXT;

using PhysicalDeviceRobustness2FeaturesEXT = PhysicalDeviceRobustness2FeaturesKHR;
using PhysicalDeviceRobustness2PropertiesEXT = PhysicalDeviceRobustness2PropertiesKHR;
struct PhysicalDeviceCustomBorderColorPropertiesEXT;
struct PhysicalDeviceCustomBorderColorFeaturesEXT;

struct PhysicalDeviceTextureCompressionASTC3DFeaturesEXT;

using PhysicalDevicePrivateDataFeaturesEXT = PhysicalDevicePrivateDataFeatures;
using DevicePrivateDataCreateInfoEXT = DevicePrivateDataCreateInfo;
using PrivateDataSlotCreateInfoEXT = PrivateDataSlotCreateInfo;
using PrivateDataSlotEXT = PrivateDataSlot;
using PrivateDataSlotCreateFlagsEXT = PrivateDataSlotCreateFlags;
using PhysicalDevicePipelineCreationCacheControlFeaturesEXT = PhysicalDevicePipelineCreationCacheControlFeatures;
VK_DEFINE_NON_DISPATCHABLE_HANDLE(AccelerationStructureNV)

struct PhysicalDeviceDescriptorBufferPropertiesEXT;
struct PhysicalDeviceDescriptorBufferFeaturesEXT;
struct DescriptorAddressInfoEXT;
struct DescriptorBufferBindingInfoEXT;
struct DescriptorBufferBindingPushDescriptorBufferHandleEXT;
union DescriptorDataEXT;
struct DescriptorGetInfoEXT;
struct BufferCaptureDescriptorDataInfoEXT;
struct ImageCaptureDescriptorDataInfoEXT;
struct ImageViewCaptureDescriptorDataInfoEXT;
struct SamplerCaptureDescriptorDataInfoEXT;
struct OpaqueCaptureDescriptorDataCreateInfoEXT;
struct AccelerationStructureCaptureDescriptorDataInfoEXT;
struct PhysicalDeviceDescriptorBufferDensityMapPropertiesEXT;

enum class GraphicsPipelineLibraryBitsEXT : int32_t;

using GraphicsPipelineLibraryFlagsEXT = Flags<GraphicsPipelineLibraryBitsEXT>;

struct PhysicalDeviceGraphicsPipelineLibraryFeaturesEXT;
struct PhysicalDeviceGraphicsPipelineLibraryPropertiesEXT;
struct GraphicsPipelineLibraryCreateInfoEXT;

struct PhysicalDeviceMeshShaderFeaturesEXT;
struct PhysicalDeviceMeshShaderPropertiesEXT;
struct DrawMeshTasksIndirectCommandEXT;

struct PhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT;

struct PhysicalDeviceFragmentDensityMap2FeaturesEXT;
struct PhysicalDeviceFragmentDensityMap2PropertiesEXT;

using PhysicalDeviceImageRobustnessFeaturesEXT = PhysicalDeviceImageRobustnessFeatures;
enum class ImageCompressionBitsEXT : int32_t;
enum class ImageCompressionFixedRateBitsEXT : int32_t;

using ImageCompressionFlagsEXT = Flags<ImageCompressionBitsEXT>;
using ImageCompressionFixedRateFlagsEXT = Flags<ImageCompressionFixedRateBitsEXT>;

struct PhysicalDeviceImageCompressionControlFeaturesEXT;
struct ImageCompressionControlEXT;
struct ImageCompressionPropertiesEXT;

struct PhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT;

struct PhysicalDevice4444FormatsFeaturesEXT;

struct PhysicalDeviceFaultFeaturesEXT;
struct DeviceFaultCountsEXT;
struct DeviceFaultInfoEXT;

using DeviceFaultAddressInfoEXT = DeviceFaultAddressInfoKHR;
using DeviceFaultAddressTypeEXT = DeviceFaultAddressTypeKHR;
using DeviceFaultVendorInfoEXT = DeviceFaultVendorInfoKHR;
using DeviceFaultVendorBinaryHeaderVersionEXT = DeviceFaultVendorBinaryHeaderVersionKHR;
using DeviceFaultVendorBinaryHeaderVersionOneEXT = DeviceFaultVendorBinaryHeaderVersionOneKHR;
struct PhysicalDeviceRGBA10X6FormatsFeaturesEXT;


#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
using DirectFBSurfaceCreateFlagsEXT = Flags<DummyEnum>;

struct DirectFBSurfaceCreateInfoEXT;

#endif //VK_USE_PLATFORM_DIRECTFB_EXT

struct PhysicalDeviceVertexInputDynamicStateFeaturesEXT;
struct VertexInputBindingDescription2EXT;
struct VertexInputAttributeDescription2EXT;

struct PhysicalDeviceDrmPropertiesEXT;

enum class DeviceAddressBindingBitsEXT : int32_t;
enum class DeviceAddressBindingTypeEXT : int32_t;

using DeviceAddressBindingFlagsEXT = Flags<DeviceAddressBindingBitsEXT>;

struct PhysicalDeviceAddressBindingReportFeaturesEXT;
struct DeviceAddressBindingCallbackDataEXT;

struct PhysicalDeviceDepthClipControlFeaturesEXT;
struct PipelineViewportDepthClipControlCreateInfoEXT;

struct PhysicalDevicePrimitiveTopologyListRestartFeaturesEXT;

using PhysicalDevicePresentModeFifoLatestReadyFeaturesEXT = PhysicalDevicePresentModeFifoLatestReadyFeaturesKHR;
struct PipelinePropertiesIdentifierEXT;
struct PhysicalDevicePipelinePropertiesFeaturesEXT;

using PipelineInfoEXT = PipelineInfoKHR;
enum class FrameBoundaryBitsEXT : int32_t;

using FrameBoundaryFlagsEXT = Flags<FrameBoundaryBitsEXT>;

struct PhysicalDeviceFrameBoundaryFeaturesEXT;
struct FrameBoundaryEXT;

struct PhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT;
struct SubpassResolvePerformanceQueryEXT;
struct MultisampledRenderToSingleSampledInfoEXT;

struct PhysicalDeviceExtendedDynamicState2FeaturesEXT;

struct PhysicalDeviceColorWriteEnableFeaturesEXT;
struct PipelineColorWriteCreateInfoEXT;

struct PhysicalDevicePrimitivesGeneratedQueryFeaturesEXT;

struct PhysicalDeviceImageViewMinLodFeaturesEXT;
struct ImageViewMinLodCreateInfoEXT;

struct PhysicalDeviceMultiDrawFeaturesEXT;
struct PhysicalDeviceMultiDrawPropertiesEXT;
struct MultiDrawInfoEXT;
struct MultiDrawIndexedInfoEXT;

struct PhysicalDeviceImage2DViewOf3DFeaturesEXT;

struct PhysicalDeviceShaderTileImageFeaturesEXT;
struct PhysicalDeviceShaderTileImagePropertiesEXT;

VK_DEFINE_NON_DISPATCHABLE_HANDLE(MicromapEXT)

enum class MicromapTypeEXT : int32_t;
enum class BuildMicromapBitsEXT : int32_t;
enum class BuildMicromapModeEXT : int32_t;
enum class MicromapCreateBitsEXT : int32_t;
enum class CopyMicromapModeEXT : int32_t;
enum class OpacityMicromapFormatEXT : int32_t;
enum class OpacityMicromapSpecialIndexEXT : int32_t;

using BuildMicromapFlagsEXT = Flags<BuildMicromapBitsEXT>;
using MicromapCreateFlagsEXT = Flags<MicromapCreateBitsEXT>;

struct MicromapUsageEXT;
struct MicromapBuildInfoEXT;
struct MicromapCreateInfoEXT;
struct PhysicalDeviceOpacityMicromapFeaturesEXT;
struct PhysicalDeviceOpacityMicromapPropertiesEXT;
struct MicromapVersionInfoEXT;
struct CopyMicromapToMemoryInfoEXT;
struct CopyMemoryToMicromapInfoEXT;
struct CopyMicromapInfoEXT;
struct MicromapBuildSizesInfoEXT;
struct AccelerationStructureTrianglesOpacityMicromapEXT;
struct MicromapTriangleEXT;

struct PhysicalDeviceBorderColorSwizzleFeaturesEXT;
struct SamplerBorderColorComponentMappingCreateInfoEXT;

struct PhysicalDevicePageableDeviceLocalMemoryFeaturesEXT;

constexpr auto remaining3dSlicesEXT = (~0U);

struct PhysicalDeviceImageSlicedViewOf3DFeaturesEXT;
struct ImageViewSlicedCreateInfoEXT;

using PhysicalDeviceDepthClampZeroOneFeaturesEXT = PhysicalDeviceDepthClampZeroOneFeaturesKHR;
struct PhysicalDeviceNonSeamlessCubeMapFeaturesEXT;

struct PhysicalDeviceImageCompressionControlSwapchainFeaturesEXT;

struct PhysicalDeviceNestedCommandBufferFeaturesEXT;
struct PhysicalDeviceNestedCommandBufferPropertiesEXT;

struct ExternalMemoryAcquireUnmodifiedEXT;

enum class ViewportCoordinateSwizzleNV : int32_t;
enum class CoverageModulationModeNV : int32_t;
enum class CoverageReductionModeNV : int32_t;

struct PhysicalDeviceExtendedDynamicState3FeaturesEXT;
struct PhysicalDeviceExtendedDynamicState3PropertiesEXT;
struct ColorBlendEquationEXT;
struct ColorBlendAdvancedEXT;
struct ViewportSwizzleNV;

enum class SubpassMergeStatusEXT : int32_t;

struct PhysicalDeviceSubpassMergeFeedbackFeaturesEXT;
struct RenderPassCreationControlEXT;
struct RenderPassCreationFeedbackInfoEXT;
struct RenderPassCreationFeedbackCreateInfoEXT;
struct RenderPassSubpassFeedbackInfoEXT;
struct RenderPassSubpassFeedbackCreateInfoEXT;

constexpr auto maxShaderModuleIdentifierSizeEXT = 32;

struct PhysicalDeviceShaderModuleIdentifierFeaturesEXT;
struct PhysicalDeviceShaderModuleIdentifierPropertiesEXT;
struct PipelineShaderStageModuleIdentifierCreateInfoEXT;
struct ShaderModuleIdentifierEXT;

struct PhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT;

struct PhysicalDeviceLegacyDitheringFeaturesEXT;

using PhysicalDevicePipelineProtectedAccessFeaturesEXT = PhysicalDevicePipelineProtectedAccessFeatures;
VK_DEFINE_NON_DISPATCHABLE_HANDLE(ShaderEXT)

enum class ShaderCreateBitsEXT : int32_t;
enum class ShaderCodeTypeEXT : int32_t;
enum class DepthClampModeEXT : int32_t;

using ShaderCreateFlagsEXT = Flags<ShaderCreateBitsEXT>;

struct PhysicalDeviceShaderObjectFeaturesEXT;
struct PhysicalDeviceShaderObjectPropertiesEXT;
struct ShaderCreateInfoEXT;
struct DepthClampRangeEXT;

using ShaderRequiredSubgroupSizeCreateInfoEXT = PipelineShaderStageRequiredSubgroupSizeCreateInfo;
struct PhysicalDeviceMutableDescriptorTypeFeaturesEXT;
struct MutableDescriptorTypeListEXT;
struct MutableDescriptorTypeCreateInfoEXT;

struct PhysicalDeviceLegacyVertexAttributesFeaturesEXT;
struct PhysicalDeviceLegacyVertexAttributesPropertiesEXT;

enum class LayerSettingTypeEXT : int32_t;

struct LayerSettingEXT;
struct LayerSettingsCreateInfoEXT;

struct PhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT;

struct PhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT;

struct PhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT;

enum class MemoryDecompressionMethodBitsEXT : int64_t;

using MemoryDecompressionMethodFlagsEXT = Flags<MemoryDecompressionMethodBitsEXT>;

struct DecompressMemoryRegionEXT;
struct DecompressMemoryInfoEXT;
struct PhysicalDeviceMemoryDecompressionFeaturesEXT;
struct PhysicalDeviceMemoryDecompressionPropertiesEXT;

struct PhysicalDeviceShaderReplicatedCompositesFeaturesEXT;

struct PhysicalDeviceShaderFloat8FeaturesEXT;

VK_DEFINE_NON_DISPATCHABLE_HANDLE(IndirectExecutionSetEXT)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(IndirectCommandsLayoutEXT)

enum class IndirectCommandsInputModeBitsEXT : int32_t;
enum class IndirectExecutionSetInfoTypeEXT : int32_t;
enum class IndirectCommandsLayoutUsageBitsEXT : int32_t;
enum class IndirectCommandsTokenTypeEXT : int32_t;

using IndirectCommandsInputModeFlagsEXT = Flags<IndirectCommandsInputModeBitsEXT>;
using IndirectCommandsLayoutUsageFlagsEXT = Flags<IndirectCommandsLayoutUsageBitsEXT>;

struct PhysicalDeviceDeviceGeneratedCommandsFeaturesEXT;
struct PhysicalDeviceDeviceGeneratedCommandsPropertiesEXT;
struct GeneratedCommandsMemoryRequirementsInfoEXT;
struct IndirectExecutionSetPipelineInfoEXT;
struct IndirectExecutionSetShaderLayoutInfoEXT;
struct IndirectExecutionSetShaderInfoEXT;
union IndirectExecutionSetInfoEXT;
struct IndirectExecutionSetCreateInfoEXT;
struct GeneratedCommandsInfoEXT;
struct WriteIndirectExecutionSetPipelineEXT;
struct IndirectCommandsPushConstantTokenEXT;
struct IndirectCommandsVertexBufferTokenEXT;
struct IndirectCommandsIndexBufferTokenEXT;
struct IndirectCommandsExecutionSetTokenEXT;
union IndirectCommandsTokenDataEXT;
struct IndirectCommandsLayoutTokenEXT;
struct IndirectCommandsLayoutCreateInfoEXT;
struct DrawIndirectCountIndirectCommandEXT;
struct BindVertexBufferIndirectCommandEXT;
struct BindIndexBufferIndirectCommandEXT;
struct GeneratedCommandsPipelineInfoEXT;
struct GeneratedCommandsShaderInfoEXT;
struct WriteIndirectExecutionSetShaderEXT;

enum class RayTracingInvocationReorderModeEXT : int32_t;

struct PhysicalDeviceRayTracingInvocationReorderPropertiesEXT;
struct PhysicalDeviceRayTracingInvocationReorderFeaturesEXT;

struct PhysicalDeviceDepthClampControlFeaturesEXT;
struct PipelineViewportDepthClampControlCreateInfoEXT;

struct PhysicalDeviceVertexAttributeRobustnessFeaturesEXT;

struct PhysicalDeviceFragmentDensityMapOffsetFeaturesEXT;
struct PhysicalDeviceFragmentDensityMapOffsetPropertiesEXT;
struct RenderPassFragmentDensityMapOffsetEndInfoEXT;

using RenderingEndInfoEXT = RenderingEndInfoKHR;
struct PhysicalDeviceZeroInitializeDeviceMemoryFeaturesEXT;

struct PhysicalDeviceShader64BitIndexingFeaturesEXT;

struct PhysicalDeviceCustomResolveFeaturesEXT;
struct BeginCustomResolveInfoEXT;
struct CustomResolveCreateInfoEXT;

struct PhysicalDeviceShaderLongVectorFeaturesEXT;
struct PhysicalDeviceShaderLongVectorPropertiesEXT;

struct PhysicalDeviceShaderUniformBufferUnsizedArrayFeaturesEXT;

struct PhysicalDeviceShaderSubgroupPartitionedFeaturesEXT;

struct PhysicalDevicePrimitiveRestartIndexFeaturesEXT;

enum class RasterizationOrderAMD : int32_t;

struct PipelineRasterizationStateRasterizationOrderAMD;

struct DedicatedAllocationImageCreateInfoNV;
struct DedicatedAllocationBufferCreateInfoNV;
struct DedicatedAllocationMemoryAllocateInfoNV;

struct TextureLODGatherFormatPropertiesAMD;

enum class ShaderInfoTypeAMD : int32_t;

struct ShaderResourceUsageAMD;
struct ShaderStatisticsInfoAMD;


#ifdef VK_USE_PLATFORM_GGP
using StreamDescriptorSurfaceCreateFlagsGGP = Flags<DummyEnum>;

struct StreamDescriptorSurfaceCreateInfoGGP;

#endif //VK_USE_PLATFORM_GGP

struct PhysicalDeviceCornerSampledImageFeaturesNV;

enum class ExternalMemoryHandleTypeBitsNV : int32_t;
enum class ExternalMemoryFeatureBitsNV : int32_t;

using ExternalMemoryHandleTypeFlagsNV = Flags<ExternalMemoryHandleTypeBitsNV>;
using ExternalMemoryFeatureFlagsNV = Flags<ExternalMemoryFeatureBitsNV>;

struct ExternalImageFormatPropertiesNV;

struct ExternalMemoryImageCreateInfoNV;
struct ExportMemoryAllocateInfoNV;


#ifdef VK_USE_PLATFORM_WIN32_KHR
struct ImportMemoryWin32HandleInfoNV;
struct ExportMemoryWin32HandleInfoNV;

#endif //VK_USE_PLATFORM_WIN32_KHR


#ifdef VK_USE_PLATFORM_WIN32_KHR
struct Win32KeyedMutexAcquireReleaseInfoNV;

#endif //VK_USE_PLATFORM_WIN32_KHR


#ifdef VK_USE_PLATFORM_VI_NN
using ViSurfaceCreateFlagsNN = Flags<DummyEnum>;

struct ViSurfaceCreateInfoNN;

#endif //VK_USE_PLATFORM_VI_NN

struct ViewportWScalingNV;
struct PipelineViewportWScalingStateCreateInfoNV;

struct RefreshCycleDurationGOOGLE;
struct PastPresentationTimingGOOGLE;
struct PresentTimeGOOGLE;
struct PresentTimesInfoGOOGLE;

using PipelineViewportSwizzleStateCreateFlagsNV = Flags<DummyEnum>;

struct PipelineViewportSwizzleStateCreateInfoNV;

struct PhysicalDeviceRelaxedLineRasterizationFeaturesIMG;


#ifdef VK_USE_PLATFORM_IOS_MVK
using IOSSurfaceCreateFlagsMVK = Flags<DummyEnum>;

struct IOSSurfaceCreateInfoMVK;

#endif //VK_USE_PLATFORM_IOS_MVK


#ifdef VK_USE_PLATFORM_MACOS_MVK
using MacOSSurfaceCreateFlagsMVK = Flags<DummyEnum>;

struct MacOSSurfaceCreateInfoMVK;

#endif //VK_USE_PLATFORM_MACOS_MVK

struct AttachmentSampleCountInfoAMD;

using PipelineCoverageToColorStateCreateFlagsNV = Flags<DummyEnum>;

struct PipelineCoverageToColorStateCreateInfoNV;

using PipelineCoverageModulationStateCreateFlagsNV = Flags<DummyEnum>;

struct PipelineCoverageModulationStateCreateInfoNV;

using AttachmentSampleCountInfoNV = AttachmentSampleCountInfoAMD;
struct PhysicalDeviceShaderSMBuiltinsPropertiesNV;
struct PhysicalDeviceShaderSMBuiltinsFeaturesNV;

enum class ShadingRatePaletteEntryNV : int32_t;
enum class CoarseSampleOrderTypeNV : int32_t;

struct ShadingRatePaletteNV;
struct PipelineViewportShadingRateImageStateCreateInfoNV;
struct PhysicalDeviceShadingRateImageFeaturesNV;
struct PhysicalDeviceShadingRateImagePropertiesNV;
struct CoarseSampleLocationNV;
struct CoarseSampleOrderCustomNV;
struct PipelineViewportCoarseSampleOrderStateCreateInfoNV;

enum class AccelerationStructureMemoryRequirementsTypeNV : int32_t;

struct RayTracingShaderGroupCreateInfoNV;
struct RayTracingPipelineCreateInfoNV;
struct GeometryTrianglesNV;
struct GeometryAABBNV;
struct GeometryDataNV;
struct GeometryNV;
struct AccelerationStructureInfoNV;
struct AccelerationStructureCreateInfoNV;
struct BindAccelerationStructureMemoryInfoNV;
struct WriteDescriptorSetAccelerationStructureNV;
struct AccelerationStructureMemoryRequirementsInfoNV;
struct PhysicalDeviceRayTracingPropertiesNV;

using RayTracingShaderGroupTypeNV = RayTracingShaderGroupTypeKHR;
using GeometryTypeNV = GeometryTypeKHR;
using AccelerationStructureTypeNV = AccelerationStructureTypeKHR;
using GeometryFlagsNV = GeometryFlagsKHR;
using GeometryBitsNV = GeometryBitsKHR;
using GeometryInstanceFlagsNV = GeometryInstanceFlagsKHR;
using GeometryInstanceBitsNV = GeometryInstanceBitsKHR;
using BuildAccelerationStructureBitsNV = BuildAccelerationStructureBitsKHR;
using BuildAccelerationStructureFlagsNV = BuildAccelerationStructureFlagsKHR;
using CopyAccelerationStructureModeNV = CopyAccelerationStructureModeKHR;
using TransformMatrixNV = TransformMatrixKHR;
using AabbPositionsNV = AabbPositionsKHR;
struct PhysicalDeviceRepresentativeFragmentTestFeaturesNV;
struct PipelineRepresentativeFragmentTestStateCreateInfoNV;

struct PhysicalDeviceCooperativeMatrixConversionFeaturesQCOM;

enum class PipelineCompilerControlBitsAMD : int32_t;

using PipelineCompilerControlFlagsAMD = Flags<PipelineCompilerControlBitsAMD>;

struct PipelineCompilerControlCreateInfoAMD;

struct PhysicalDeviceShaderCorePropertiesAMD;

enum class MemoryOverallocationBehaviorAMD : int32_t;

struct DeviceMemoryOverallocationCreateInfoAMD;


#ifdef VK_USE_PLATFORM_GGP
struct PresentFrameTokenGGP;

#endif //VK_USE_PLATFORM_GGP

using PhysicalDeviceComputeShaderDerivativesFeaturesNV = PhysicalDeviceComputeShaderDerivativesFeaturesKHR;
struct PhysicalDeviceMeshShaderFeaturesNV;
struct PhysicalDeviceMeshShaderPropertiesNV;
struct DrawMeshTasksIndirectCommandNV;

using PhysicalDeviceFragmentShaderBarycentricFeaturesNV = PhysicalDeviceFragmentShaderBarycentricFeaturesKHR;
struct PhysicalDeviceShaderImageFootprintFeaturesNV;

struct PipelineViewportExclusiveScissorStateCreateInfoNV;
struct PhysicalDeviceExclusiveScissorFeaturesNV;

struct QueueFamilyCheckpointPropertiesNV;
struct CheckpointDataNV;
struct QueueFamilyCheckpointProperties2NV;
struct CheckpointData2NV;

struct PhysicalDeviceShaderIntegerFunctions2FeaturesINTEL;

VK_DEFINE_NON_DISPATCHABLE_HANDLE(PerformanceConfigurationINTEL)

enum class PerformanceConfigurationTypeINTEL : int32_t;
enum class QueryPoolSamplingModeINTEL : int32_t;
enum class PerformanceOverrideTypeINTEL : int32_t;
enum class PerformanceParameterTypeINTEL : int32_t;
enum class PerformanceValueTypeINTEL : int32_t;

union PerformanceValueDataINTEL;
struct PerformanceValueINTEL;
struct InitializePerformanceApiInfoINTEL;
struct QueryPoolPerformanceQueryCreateInfoINTEL;
struct PerformanceMarkerInfoINTEL;
struct PerformanceStreamMarkerInfoINTEL;
struct PerformanceOverrideInfoINTEL;
struct PerformanceConfigurationAcquireInfoINTEL;

using QueryPoolCreateInfoINTEL = QueryPoolPerformanceQueryCreateInfoINTEL;
struct DisplayNativeHdrSurfaceCapabilitiesAMD;
struct SwapchainDisplayNativeHdrCreateInfoAMD;


#ifdef VK_USE_PLATFORM_FUCHSIA
using ImagePipeSurfaceCreateFlagsFUCHSIA = Flags<DummyEnum>;

struct ImagePipeSurfaceCreateInfoFUCHSIA;

#endif //VK_USE_PLATFORM_FUCHSIA

enum class ShaderCorePropertiesBitsAMD : int32_t;

using ShaderCorePropertiesFlagsAMD = Flags<ShaderCorePropertiesBitsAMD>;

struct PhysicalDeviceShaderCoreProperties2AMD;

struct PhysicalDeviceCoherentMemoryFeaturesAMD;

struct PhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV;

struct CooperativeMatrixPropertiesNV;
struct PhysicalDeviceCooperativeMatrixFeaturesNV;
struct PhysicalDeviceCooperativeMatrixPropertiesNV;

using ComponentTypeNV = ComponentTypeKHR;
using ScopeNV = ScopeKHR;
using PipelineCoverageReductionStateCreateFlagsNV = Flags<DummyEnum>;

struct PhysicalDeviceCoverageReductionModeFeaturesNV;
struct PipelineCoverageReductionStateCreateInfoNV;
struct FramebufferMixedSamplesCombinationNV;

VK_DEFINE_NON_DISPATCHABLE_HANDLE(IndirectCommandsLayoutNV)

enum class IndirectStateBitsNV : int32_t;
enum class IndirectCommandsTokenTypeNV : int32_t;
enum class IndirectCommandsLayoutUsageBitsNV : int32_t;

using IndirectStateFlagsNV = Flags<IndirectStateBitsNV>;
using IndirectCommandsLayoutUsageFlagsNV = Flags<IndirectCommandsLayoutUsageBitsNV>;

struct PhysicalDeviceDeviceGeneratedCommandsPropertiesNV;
struct PhysicalDeviceDeviceGeneratedCommandsFeaturesNV;
struct GraphicsShaderGroupCreateInfoNV;
struct GraphicsPipelineShaderGroupsCreateInfoNV;
struct BindShaderGroupIndirectCommandNV;
struct BindIndexBufferIndirectCommandNV;
struct BindVertexBufferIndirectCommandNV;
struct SetStateFlagsIndirectCommandNV;
struct IndirectCommandsStreamNV;
struct IndirectCommandsLayoutTokenNV;
struct IndirectCommandsLayoutCreateInfoNV;
struct GeneratedCommandsInfoNV;
struct GeneratedCommandsMemoryRequirementsInfoNV;

struct PhysicalDeviceInheritedViewportScissorFeaturesNV;
struct CommandBufferInheritanceViewportScissorInfoNV;

struct RenderPassTransformBeginInfoQCOM;
struct CommandBufferInheritanceRenderPassTransformInfoQCOM;

struct PhysicalDevicePresentBarrierFeaturesNV;
struct SurfaceCapabilitiesPresentBarrierNV;
struct SwapchainPresentBarrierCreateInfoNV;

enum class DeviceDiagnosticsConfigBitsNV : int32_t;

using DeviceDiagnosticsConfigFlagsNV = Flags<DeviceDiagnosticsConfigBitsNV>;

struct PhysicalDeviceDiagnosticsConfigFeaturesNV;
struct DeviceDiagnosticsConfigCreateInfoNV;

enum class PerfHintTypeQCOM : int32_t;

struct PerfHintInfoQCOM;
struct PhysicalDeviceQueuePerfHintFeaturesQCOM;
struct PhysicalDeviceQueuePerfHintPropertiesQCOM;

enum class TileShadingRenderPassBitsQCOM : int32_t;

using TileShadingRenderPassFlagsQCOM = Flags<TileShadingRenderPassBitsQCOM>;

struct PhysicalDeviceTileShadingFeaturesQCOM;
struct PhysicalDeviceTileShadingPropertiesQCOM;
struct RenderPassTileShadingCreateInfoQCOM;
struct PerTileBeginInfoQCOM;
struct PerTileEndInfoQCOM;
struct DispatchTileInfoQCOM;

struct QueryLowLatencySupportNV;

struct PhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD;

enum class FragmentShadingRateTypeNV : int32_t;
enum class FragmentShadingRateNV : int32_t;

struct PhysicalDeviceFragmentShadingRateEnumsFeaturesNV;
struct PhysicalDeviceFragmentShadingRateEnumsPropertiesNV;
struct PipelineFragmentShadingRateEnumStateCreateInfoNV;

struct CopyCommandTransformInfoQCOM;

using PhysicalDeviceRasterizationOrderAttachmentAccessFeaturesARM = PhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT;
using PhysicalDeviceMutableDescriptorTypeFeaturesVALVE = PhysicalDeviceMutableDescriptorTypeFeaturesEXT;
using MutableDescriptorTypeListVALVE = MutableDescriptorTypeListEXT;
using MutableDescriptorTypeCreateInfoVALVE = MutableDescriptorTypeCreateInfoEXT;

#ifdef VK_USE_PLATFORM_FUCHSIA
struct ImportMemoryZirconHandleInfoFUCHSIA;
struct MemoryZirconHandlePropertiesFUCHSIA;
struct MemoryGetZirconHandleInfoFUCHSIA;

#endif //VK_USE_PLATFORM_FUCHSIA


#ifdef VK_USE_PLATFORM_FUCHSIA
struct ImportSemaphoreZirconHandleInfoFUCHSIA;
struct SemaphoreGetZirconHandleInfoFUCHSIA;

#endif //VK_USE_PLATFORM_FUCHSIA


#ifdef VK_USE_PLATFORM_FUCHSIA
VK_DEFINE_NON_DISPATCHABLE_HANDLE(BufferCollectionFUCHSIA)

enum class ImageConstraintsInfoBitsFUCHSIA : int32_t;

using ImageFormatConstraintsFlagsFUCHSIA = Flags<DummyEnum>;
using ImageConstraintsInfoFlagsFUCHSIA = Flags<ImageConstraintsInfoBitsFUCHSIA>;

struct BufferCollectionCreateInfoFUCHSIA;
struct ImportMemoryBufferCollectionFUCHSIA;
struct BufferCollectionImageCreateInfoFUCHSIA;
struct BufferCollectionConstraintsInfoFUCHSIA;
struct BufferConstraintsInfoFUCHSIA;
struct BufferCollectionBufferCreateInfoFUCHSIA;
struct SysmemColorSpaceFUCHSIA;
struct BufferCollectionPropertiesFUCHSIA;
struct ImageFormatConstraintsInfoFUCHSIA;
struct ImageConstraintsInfoFUCHSIA;

#endif //VK_USE_PLATFORM_FUCHSIA

struct SubpassShadingPipelineCreateInfoHUAWEI;
struct PhysicalDeviceSubpassShadingFeaturesHUAWEI;
struct PhysicalDeviceSubpassShadingPropertiesHUAWEI;

struct PhysicalDeviceInvocationMaskFeaturesHUAWEI;


#ifdef VK_USE_PLATFORM_SCREEN_QNX
using ScreenSurfaceCreateFlagsQNX = Flags<DummyEnum>;

struct ScreenSurfaceCreateInfoQNX;

#endif //VK_USE_PLATFORM_SCREEN_QNX

enum class VideoEncodeRgbModelConversionBitsVALVE : int32_t;
enum class VideoEncodeRgbRangeCompressionBitsVALVE : int32_t;
enum class VideoEncodeRgbChromaOffsetBitsVALVE : int32_t;

using VideoEncodeRgbModelConversionFlagsVALVE = Flags<VideoEncodeRgbModelConversionBitsVALVE>;
using VideoEncodeRgbRangeCompressionFlagsVALVE = Flags<VideoEncodeRgbRangeCompressionBitsVALVE>;
using VideoEncodeRgbChromaOffsetFlagsVALVE = Flags<VideoEncodeRgbChromaOffsetBitsVALVE>;

struct PhysicalDeviceVideoEncodeRgbConversionFeaturesVALVE;
struct VideoEncodeRgbConversionCapabilitiesVALVE;
struct VideoEncodeProfileRgbConversionInfoVALVE;
struct VideoEncodeSessionRgbConversionCreateInfoVALVE;

struct PhysicalDeviceClusterCullingShaderFeaturesHUAWEI;
struct PhysicalDeviceClusterCullingShaderPropertiesHUAWEI;
struct PhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI;

struct PhysicalDeviceShaderCorePropertiesARM;

enum class PhysicalDeviceSchedulingControlsBitsARM : int64_t;

using PhysicalDeviceSchedulingControlsFlagsARM = Flags<PhysicalDeviceSchedulingControlsBitsARM>;

struct DeviceQueueShaderCoreControlCreateInfoARM;
struct PhysicalDeviceSchedulingControlsFeaturesARM;
struct PhysicalDeviceSchedulingControlsPropertiesARM;
struct DispatchParametersARM;
struct PhysicalDeviceSchedulingControlsDispatchParametersPropertiesARM;

struct PhysicalDeviceDescriptorSetHostMappingFeaturesVALVE;
struct DescriptorSetBindingReferenceVALVE;
struct DescriptorSetLayoutHostMappingInfoVALVE;

struct PhysicalDeviceRenderPassStripedFeaturesARM;
struct PhysicalDeviceRenderPassStripedPropertiesARM;
struct RenderPassStripeInfoARM;
struct RenderPassStripeBeginInfoARM;
struct RenderPassStripeSubmitInfoARM;

using PhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM = PhysicalDeviceFragmentDensityMapOffsetFeaturesEXT;
using PhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM = PhysicalDeviceFragmentDensityMapOffsetPropertiesEXT;
using SubpassFragmentDensityMapOffsetEndInfoQCOM = RenderPassFragmentDensityMapOffsetEndInfoEXT;
struct PhysicalDeviceCopyMemoryIndirectFeaturesNV;

using CopyMemoryIndirectCommandNV = CopyMemoryIndirectCommandKHR;
using CopyMemoryToImageIndirectCommandNV = CopyMemoryToImageIndirectCommandKHR;
using PhysicalDeviceCopyMemoryIndirectPropertiesNV = PhysicalDeviceCopyMemoryIndirectPropertiesKHR;
struct DecompressMemoryRegionNV;

using MemoryDecompressionMethodBitsNV = MemoryDecompressionMethodBitsEXT;
using MemoryDecompressionMethodFlagsNV = MemoryDecompressionMethodFlagsEXT;
using PhysicalDeviceMemoryDecompressionFeaturesNV = PhysicalDeviceMemoryDecompressionFeaturesEXT;
using PhysicalDeviceMemoryDecompressionPropertiesNV = PhysicalDeviceMemoryDecompressionPropertiesEXT;
struct PhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV;
struct ComputePipelineIndirectBufferInfoNV;
struct PipelineIndirectDeviceAddressInfoNV;
struct BindPipelineIndirectCommandNV;

enum class RayTracingLssIndexingModeNV : int32_t;
enum class RayTracingLssPrimitiveEndCapsModeNV : int32_t;

struct PhysicalDeviceRayTracingLinearSweptSpheresFeaturesNV;
struct AccelerationStructureGeometryLinearSweptSpheresDataNV;
struct AccelerationStructureGeometrySpheresDataNV;

struct PhysicalDeviceLinearColorAttachmentFeaturesNV;

struct ImageViewSampleWeightCreateInfoQCOM;
struct PhysicalDeviceImageProcessingFeaturesQCOM;
struct PhysicalDeviceImageProcessingPropertiesQCOM;


#ifdef VK_USE_PLATFORM_OHOS

struct NativeBufferUsageOHOS;
struct NativeBufferPropertiesOHOS;
struct NativeBufferFormatPropertiesOHOS;
struct ImportNativeBufferInfoOHOS;
struct MemoryGetNativeBufferInfoOHOS;
struct ExternalFormatOHOS;

#endif //VK_USE_PLATFORM_OHOS

enum class DirectDriverLoadingModeLUNARG : int32_t;

using DirectDriverLoadingFlagsLUNARG = Flags<DummyEnum>;

struct DirectDriverLoadingInfoLUNARG;
struct DirectDriverLoadingListLUNARG;

VK_DEFINE_NON_DISPATCHABLE_HANDLE(TensorViewARM)

enum class TensorCreateBitsARM : int64_t;
enum class TensorUsageBitsARM : int64_t;
enum class TensorTilingARM : int32_t;

using TensorCreateFlagsARM = Flags<TensorCreateBitsARM>;
using TensorUsageFlagsARM = Flags<TensorUsageBitsARM>;

struct TensorDescriptionARM;
struct TensorCreateInfoARM;
struct TensorMemoryRequirementsInfoARM;
struct BindTensorMemoryInfoARM;
struct WriteDescriptorSetTensorARM;
struct TensorFormatPropertiesARM;
struct PhysicalDeviceTensorPropertiesARM;
struct TensorMemoryBarrierARM;
struct TensorDependencyInfoARM;
struct PhysicalDeviceTensorFeaturesARM;
struct DeviceTensorMemoryRequirementsARM;
struct TensorCopyARM;
struct CopyTensorInfoARM;
struct MemoryDedicatedAllocateInfoTensorARM;
struct PhysicalDeviceExternalTensorInfoARM;
struct ExternalTensorPropertiesARM;
struct ExternalMemoryTensorCreateInfoARM;
struct PhysicalDeviceDescriptorBufferTensorFeaturesARM;
struct PhysicalDeviceDescriptorBufferTensorPropertiesARM;
struct DescriptorGetTensorInfoARM;
struct TensorCaptureDescriptorDataInfoARM;
struct TensorViewCaptureDescriptorDataInfoARM;
struct FrameBoundaryTensorsARM;

VK_DEFINE_NON_DISPATCHABLE_HANDLE(OpticalFlowSessionNV)

enum class OpticalFlowGridSizeBitsNV : int32_t;
enum class OpticalFlowUsageBitsNV : int32_t;
enum class OpticalFlowPerformanceLevelNV : int32_t;
enum class OpticalFlowSessionBindingPointNV : int32_t;
enum class OpticalFlowSessionCreateBitsNV : int32_t;
enum class OpticalFlowExecuteBitsNV : int32_t;

using OpticalFlowGridSizeFlagsNV = Flags<OpticalFlowGridSizeBitsNV>;
using OpticalFlowUsageFlagsNV = Flags<OpticalFlowUsageBitsNV>;
using OpticalFlowSessionCreateFlagsNV = Flags<OpticalFlowSessionCreateBitsNV>;
using OpticalFlowExecuteFlagsNV = Flags<OpticalFlowExecuteBitsNV>;

struct PhysicalDeviceOpticalFlowFeaturesNV;
struct PhysicalDeviceOpticalFlowPropertiesNV;
struct OpticalFlowImageFormatInfoNV;
struct OpticalFlowImageFormatPropertiesNV;
struct OpticalFlowSessionCreateInfoNV;
struct OpticalFlowSessionCreatePrivateDataInfoNV;
struct OpticalFlowExecuteInfoNV;

enum class AntiLagModeAMD : int32_t;
enum class AntiLagStageAMD : int32_t;

struct PhysicalDeviceAntiLagFeaturesAMD;
struct AntiLagPresentationInfoAMD;
struct AntiLagDataAMD;

struct PhysicalDeviceTilePropertiesFeaturesQCOM;
struct TilePropertiesQCOM;

struct PhysicalDeviceAmigoProfilingFeaturesSEC;
struct AmigoProfilingSubmitInfoSEC;

struct PhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM;

struct PhysicalDeviceRayTracingInvocationReorderPropertiesNV;
struct PhysicalDeviceRayTracingInvocationReorderFeaturesNV;

using RayTracingInvocationReorderModeNV = RayTracingInvocationReorderModeEXT;
enum class CooperativeVectorMatrixLayoutNV : int32_t;

struct PhysicalDeviceCooperativeVectorPropertiesNV;
struct PhysicalDeviceCooperativeVectorFeaturesNV;
struct CooperativeVectorPropertiesNV;
struct ConvertCooperativeVectorMatrixInfoNV;

struct PhysicalDeviceExtendedSparseAddressSpaceFeaturesNV;
struct PhysicalDeviceExtendedSparseAddressSpacePropertiesNV;

struct PhysicalDeviceShaderCoreBuiltinsFeaturesARM;
struct PhysicalDeviceShaderCoreBuiltinsPropertiesARM;

enum class LatencyMarkerNV : int32_t;
enum class OutOfBandQueueTypeNV : int32_t;

struct LatencySleepModeInfoNV;
struct LatencySleepInfoNV;
struct SetLatencyMarkerInfoNV;
struct LatencyTimingsFrameReportNV;
struct GetLatencyMarkerInfoNV;
struct LatencySubmissionPresentIdNV;
struct SwapchainLatencyCreateInfoNV;
struct OutOfBandQueueTypeInfoNV;
struct LatencySurfaceCapabilitiesNV;

constexpr auto maxPhysicalDeviceDataGraphOperationSetNameSizeARM = 128;

VK_DEFINE_NON_DISPATCHABLE_HANDLE(DataGraphPipelineSessionARM)

enum class DataGraphPipelineSessionBindPointARM : int32_t;
enum class DataGraphPipelineSessionBindPointTypeARM : int32_t;
enum class DataGraphPipelineSessionCreateBitsARM : int64_t;
enum class DataGraphPipelinePropertyARM : int32_t;
enum class DataGraphPipelineDispatchBitsARM : int64_t;
enum class PhysicalDeviceDataGraphProcessingEngineTypeARM : int32_t;
enum class PhysicalDeviceDataGraphOperationTypeARM : int32_t;

using DataGraphPipelineSessionCreateFlagsARM = Flags<DataGraphPipelineSessionCreateBitsARM>;
using DataGraphPipelineDispatchFlagsARM = Flags<DataGraphPipelineDispatchBitsARM>;

struct PhysicalDeviceDataGraphFeaturesARM;
struct DataGraphPipelineConstantARM;
struct DataGraphPipelineResourceInfoARM;
struct DataGraphPipelineCompilerControlCreateInfoARM;
struct DataGraphPipelineCreateInfoARM;
struct DataGraphPipelineShaderModuleCreateInfoARM;
struct DataGraphPipelineSessionCreateInfoARM;
struct DataGraphPipelineSessionBindPointRequirementsInfoARM;
struct DataGraphPipelineSessionBindPointRequirementARM;
struct DataGraphPipelineSessionMemoryRequirementsInfoARM;
struct BindDataGraphPipelineSessionMemoryInfoARM;
struct DataGraphPipelineInfoARM;
struct DataGraphPipelinePropertyQueryResultARM;
struct DataGraphPipelineIdentifierCreateInfoARM;
struct DataGraphPipelineDispatchInfoARM;
struct PhysicalDeviceDataGraphProcessingEngineARM;
struct PhysicalDeviceDataGraphOperationSupportARM;
struct QueueFamilyDataGraphPropertiesARM;
struct DataGraphProcessingEngineCreateInfoARM;
struct PhysicalDeviceQueueFamilyDataGraphProcessingEngineInfoARM;
struct QueueFamilyDataGraphProcessingEnginePropertiesARM;
struct DataGraphPipelineConstantTensorSemiStructuredSparsityInfoARM;

constexpr auto maxDataGraphTosaNameSizeARM = 128;

enum class DataGraphTOSAQualityBitsARM : int32_t;
enum class DataGraphTOSALevelARM : int32_t;

using DataGraphTOSAQualityFlagsARM = Flags<DataGraphTOSAQualityBitsARM>;

struct DataGraphTOSANameQualityARM;
struct QueueFamilyDataGraphTOSAPropertiesARM;

struct PhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM;
struct MultiviewPerViewRenderAreasRenderPassBeginInfoQCOM;

struct PhysicalDevicePerStageDescriptorSetFeaturesNV;

enum class BlockMatchWindowCompareModeQCOM : int32_t;

struct PhysicalDeviceImageProcessing2FeaturesQCOM;
struct PhysicalDeviceImageProcessing2PropertiesQCOM;
struct SamplerBlockMatchWindowCreateInfoQCOM;

enum class CubicFilterWeightsQCOM : int32_t;

struct PhysicalDeviceCubicWeightsFeaturesQCOM;
struct SamplerCubicWeightsCreateInfoQCOM;
struct BlitImageCubicWeightsInfoQCOM;

struct PhysicalDeviceYcbcrDegammaFeaturesQCOM;
struct SamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM;

struct PhysicalDeviceCubicClampFeaturesQCOM;


#ifdef VK_USE_PLATFORM_SCREEN_QNX
struct ScreenBufferPropertiesQNX;
struct ScreenBufferFormatPropertiesQNX;
struct ImportScreenBufferInfoQNX;
struct ExternalFormatQNX;
struct PhysicalDeviceExternalMemoryScreenBufferFeaturesQNX;

#endif //VK_USE_PLATFORM_SCREEN_QNX

enum class LayeredDriverUnderlyingApiMSFT : int32_t;

struct PhysicalDeviceLayeredDriverPropertiesMSFT;

struct PhysicalDeviceDescriptorPoolOverallocationFeaturesNV;

struct PhysicalDeviceTileMemoryHeapFeaturesQCOM;
struct PhysicalDeviceTileMemoryHeapPropertiesQCOM;
struct TileMemoryRequirementsQCOM;
struct TileMemoryBindInfoQCOM;
struct TileMemorySizeInfoQCOM;

enum class DisplaySurfaceStereoTypeNV : int32_t;

struct DisplaySurfaceStereoCreateInfoNV;
struct DisplayModeStereoPropertiesNV;

struct PhysicalDeviceRawAccessChainsFeaturesNV;

VK_DEFINE_HANDLE(ExternalComputeQueueNV)

struct ExternalComputeQueueDeviceCreateInfoNV;
struct ExternalComputeQueueCreateInfoNV;
struct ExternalComputeQueueDataParamsNV;
struct PhysicalDeviceExternalComputeQueuePropertiesNV;

struct PhysicalDeviceCommandBufferInheritanceFeaturesNV;

struct PhysicalDeviceShaderAtomicFloat16VectorFeaturesNV;

struct PhysicalDeviceRayTracingValidationFeaturesNV;

enum class ClusterAccelerationStructureTypeNV : int32_t;
enum class ClusterAccelerationStructureOpTypeNV : int32_t;
enum class ClusterAccelerationStructureOpModeNV : int32_t;
enum class ClusterAccelerationStructureAddressResolutionBitsNV : int32_t;
enum class ClusterAccelerationStructureClusterBitsNV : int32_t;
enum class ClusterAccelerationStructureGeometryBitsNV : int32_t;
enum class ClusterAccelerationStructureIndexFormatBitsNV : int32_t;

using ClusterAccelerationStructureAddressResolutionFlagsNV = Flags<ClusterAccelerationStructureAddressResolutionBitsNV>;
using ClusterAccelerationStructureClusterFlagsNV = Flags<ClusterAccelerationStructureClusterBitsNV>;
using ClusterAccelerationStructureGeometryFlagsNV = Flags<ClusterAccelerationStructureGeometryBitsNV>;
using ClusterAccelerationStructureIndexFormatFlagsNV = Flags<ClusterAccelerationStructureIndexFormatBitsNV>;

struct PhysicalDeviceClusterAccelerationStructureFeaturesNV;
struct PhysicalDeviceClusterAccelerationStructurePropertiesNV;
struct ClusterAccelerationStructureClustersBottomLevelInputNV;
struct ClusterAccelerationStructureTriangleClusterInputNV;
struct ClusterAccelerationStructureMoveObjectsInputNV;
union ClusterAccelerationStructureOpInputNV;
struct ClusterAccelerationStructureInputInfoNV;
struct ClusterAccelerationStructureCommandsInfoNV;
struct StridedDeviceAddressNV;
struct ClusterAccelerationStructureGeometryIndexAndGeometryFlagsNV;
struct ClusterAccelerationStructureMoveObjectsInfoNV;
struct ClusterAccelerationStructureBuildClustersBottomLevelInfoNV;
struct ClusterAccelerationStructureBuildTriangleClusterInfoNV;
struct ClusterAccelerationStructureBuildTriangleClusterTemplateInfoNV;
struct ClusterAccelerationStructureInstantiateClusterInfoNV;
struct ClusterAccelerationStructureGetTemplateIndicesInfoNV;
struct RayTracingPipelineClusterAccelerationStructureCreateInfoNV;

constexpr auto partitionedAccelerationStructurePartitionIndexGlobalNV = (~0U);

enum class PartitionedAccelerationStructureOpTypeNV : int32_t;
enum class PartitionedAccelerationStructureInstanceBitsNV : int32_t;

using PartitionedAccelerationStructureInstanceFlagsNV = Flags<PartitionedAccelerationStructureInstanceBitsNV>;

struct PhysicalDevicePartitionedAccelerationStructureFeaturesNV;
struct PhysicalDevicePartitionedAccelerationStructurePropertiesNV;
struct PartitionedAccelerationStructureFlagsNV;
struct BuildPartitionedAccelerationStructureIndirectCommandNV;
struct PartitionedAccelerationStructureWriteInstanceDataNV;
struct PartitionedAccelerationStructureUpdateInstanceDataNV;
struct PartitionedAccelerationStructureWritePartitionTranslationDataNV;
struct WriteDescriptorSetPartitionedAccelerationStructureNV;
struct PartitionedAccelerationStructureInstancesInputNV;
struct BuildPartitionedAccelerationStructureInfoNV;

struct PhysicalDeviceImageAlignmentControlFeaturesMESA;
struct PhysicalDeviceImageAlignmentControlPropertiesMESA;
struct ImageAlignmentControlCreateInfoMESA;

struct PushConstantBankInfoNV;
struct PhysicalDevicePushConstantBankFeaturesNV;
struct PhysicalDevicePushConstantBankPropertiesNV;


#ifdef VK_USE_PLATFORM_OHOS

using SurfaceCreateFlagsOHOS = Flags<DummyEnum>;

struct SurfaceCreateInfoOHOS;

#endif //VK_USE_PLATFORM_OHOS

struct PhysicalDeviceHdrVividFeaturesHUAWEI;
struct HdrVividDynamicMetadataHUAWEI;

struct CooperativeMatrixFlexibleDimensionsPropertiesNV;
struct PhysicalDeviceCooperativeMatrix2FeaturesNV;
struct PhysicalDeviceCooperativeMatrix2PropertiesNV;

struct PhysicalDevicePipelineOpacityMicromapFeaturesARM;

using PerformanceCounterDescriptionFlagsARM = Flags<DummyEnum>;

struct PhysicalDevicePerformanceCountersByRegionFeaturesARM;
struct PhysicalDevicePerformanceCountersByRegionPropertiesARM;
struct PerformanceCounterARM;
struct PerformanceCounterDescriptionARM;
struct RenderPassPerformanceCountersByRegionBeginInfoARM;

VK_DEFINE_NON_DISPATCHABLE_HANDLE(ShaderInstrumentationARM)

using ShaderInstrumentationValuesFlagsARM = Flags<DummyEnum>;

struct PhysicalDeviceShaderInstrumentationFeaturesARM;
struct PhysicalDeviceShaderInstrumentationPropertiesARM;
struct ShaderInstrumentationCreateInfoARM;
struct ShaderInstrumentationMetricDescriptionARM;
struct ShaderInstrumentationMetricDataHeaderARM;

struct PhysicalDeviceFormatPackFeaturesARM;

struct PhysicalDeviceFragmentDensityMapLayeredFeaturesVALVE;
struct PhysicalDeviceFragmentDensityMapLayeredPropertiesVALVE;
struct PipelineFragmentDensityMapLayeredCreateInfoVALVE;

struct SetPresentConfigNV;
struct PhysicalDevicePresentMeteringFeaturesNV;

constexpr auto dataGraphModelToolchainVersionLengthQCOM = 3;

enum class DataGraphModelCacheTypeQCOM : int32_t;

struct PipelineCacheHeaderVersionDataGraphQCOM;
struct DataGraphPipelineBuiltinModelCreateInfoQCOM;
struct PhysicalDeviceDataGraphModelFeaturesQCOM;

enum class DataGraphOpticalFlowGridSizeBitsARM : int32_t;
enum class DataGraphOpticalFlowPerformanceLevelARM : int32_t;
enum class DataGraphOpticalFlowCreateBitsARM : int32_t;
enum class DataGraphOpticalFlowImageUsageBitsARM : int32_t;
enum class DataGraphOpticalFlowExecuteBitsARM : int32_t;
enum class DataGraphPipelineNodeTypeARM : int32_t;
enum class DataGraphPipelineNodeConnectionTypeARM : int32_t;

using DataGraphOpticalFlowGridSizeFlagsARM = Flags<DataGraphOpticalFlowGridSizeBitsARM>;
using DataGraphOpticalFlowCreateFlagsARM = Flags<DataGraphOpticalFlowCreateBitsARM>;
using DataGraphOpticalFlowImageUsageFlagsARM = Flags<DataGraphOpticalFlowImageUsageBitsARM>;
using DataGraphOpticalFlowExecuteFlagsARM = Flags<DataGraphOpticalFlowExecuteBitsARM>;

struct PhysicalDeviceDataGraphOpticalFlowFeaturesARM;
struct QueueFamilyDataGraphOpticalFlowPropertiesARM;
struct DataGraphPipelineOpticalFlowCreateInfoARM;
struct DataGraphOpticalFlowImageFormatPropertiesARM;
struct DataGraphOpticalFlowImageFormatInfoARM;
struct DataGraphPipelineOpticalFlowDispatchInfoARM;
struct DataGraphPipelineResourceInfoImageLayoutARM;
struct DataGraphPipelineSingleNodeConnectionARM;
struct DataGraphPipelineSingleNodeCreateInfoARM;

struct PhysicalDevicePipelineCacheIncrementalModeFeaturesSEC;

constexpr auto computeOccupancyPriorityLowNV = 0.25f;
constexpr auto computeOccupancyPriorityNormalNV = 0.50f;
constexpr auto computeOccupancyPriorityHighNV = 0.75f;

struct ComputeOccupancyPriorityParametersNV;
struct PhysicalDeviceComputeOccupancyPriorityFeaturesNV;


#ifdef VK_USE_PLATFORM_UBM_SEC
using UbmSurfaceCreateFlagsSEC = Flags<DummyEnum>;

struct UbmSurfaceCreateInfoSEC;

#endif //VK_USE_PLATFORM_UBM_SEC

struct PhysicalDeviceShaderMixedFloatDotProductFeaturesVALVE;

enum class ThrottleHintTypeSEC : int32_t;

struct ThrottleHintSubmitInfoSEC;
struct PhysicalDeviceThrottleHintFeaturesSEC;

enum class NeuralAcceleratorStatisticsModeARM : int32_t;

struct PhysicalDeviceDataGraphNeuralAcceleratorStatisticsFeaturesARM;
struct DataGraphPipelineNeuralStatisticsCreateInfoARM;
struct DataGraphPipelineSessionNeuralStatisticsCreateInfoARM;


} // namespace vk

// The specification (vk.xml) itself is published under the following license:

// Copyright 2015-2026 The Khronos Group Inc.
// 
// SPDX-License-Identifier: Apache-2.0 OR MIT
    

