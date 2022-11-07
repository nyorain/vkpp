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

// Generated for vulkan version: 1.1.204

// Utility forward declarations
namespace nytl {

#ifndef NYTL_INCLUDE_FWD_SPAN
#define NYTL_INCLUDE_FWD_SPAN
	constexpr const std::size_t dynamic_extent = -1;
	template<typename T, std::size_t N = dynamic_extent> class span;
	template<typename T, std::size_t N = dynamic_extent>
	using Span = span<T, N>;
#endif // fwd guard

} // namespace nytl

namespace vk {

using nytl::Span; // span.hpp
using nytl::Flags; // flags.hpp

enum class DummyEnum : int32_t {};

constexpr auto maxExtensionNameSize = 256;
constexpr auto maxDescriptionSize = 256;

VK_DEFINE_HANDLE(PhysicalDevice)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(PrivateDataSlot)
VK_DEFINE_HANDLE(Device)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(Buffer)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(Image)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(Semaphore)
VK_DEFINE_HANDLE(CommandBuffer)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(Event)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(QueryPool)
VK_DEFINE_HANDLE(Queue)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(Fence)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(ImageView)

using Bool32 = uint32_t;
using DeviceSize = uint64_t;

enum class StructureType : int32_t;
enum class ShaderStageBits : int32_t;
enum class PipelineCreationFeedbackBits : int32_t;
enum class ToolPurposeBits : int32_t;
enum class Result : int32_t;
enum class PrivateDataSlotCreateBits : int32_t;
enum class SystemAllocationScope : int32_t;
enum class InternalAllocationType : int32_t;
enum class ObjectType : int32_t;
enum class PipelineStageBits2 : int64_t;
enum class AccessBits2 : int64_t;
enum class ImageLayout : int32_t;
enum class ImageAspectBits : int32_t;
enum class DependencyBits : int32_t;
enum class SubmitBits : int32_t;
enum class Filter : int32_t;
enum class RenderingBits : int32_t;
enum class ResolveModeBits : int32_t;
enum class AttachmentLoadOp : int32_t;
enum class AttachmentStoreOp : int32_t;
enum class Format : int32_t;
enum class SampleCountBits : int32_t;
enum class CullModeBits : int32_t;
enum class FrontFace : int32_t;
enum class PrimitiveTopology : int32_t;
enum class CompareOp : int32_t;
enum class StencilFaceBits : int32_t;
enum class StencilOp : int32_t;
enum class FormatFeatureBits2 : int64_t;
enum class BufferCreateBits : int32_t;
enum class BufferUsageBits : int32_t;
enum class SharingMode : int32_t;
enum class ImageCreateBits : int32_t;
enum class ImageType : int32_t;
enum class ImageTiling : int32_t;
enum class ImageUsageBits : int32_t;
enum class SparseImageFormatBits : int32_t;

using ShaderStageFlags = Flags<ShaderStageBits>;
using PipelineCreationFeedbackFlags = Flags<PipelineCreationFeedbackBits>;
using ToolPurposeFlags = Flags<ToolPurposeBits>;
using PrivateDataSlotCreateFlags = Flags<PrivateDataSlotCreateBits>;
using PipelineStageFlags2 = Flags<PipelineStageBits2>;
using AccessFlags2 = Flags<AccessBits2>;
using ImageAspectFlags = Flags<ImageAspectBits>;
using DependencyFlags = Flags<DependencyBits>;
using SubmitFlags = Flags<SubmitBits>;
using RenderingFlags = Flags<RenderingBits>;
using CullModeFlags = Flags<CullModeBits>;
using StencilFaceFlags = Flags<StencilFaceBits>;
using FormatFeatureFlags2 = Flags<FormatFeatureBits2>;
using BufferCreateFlags = Flags<BufferCreateBits>;
using BufferUsageFlags = Flags<BufferUsageBits>;
using ImageCreateFlags = Flags<ImageCreateBits>;
using ImageUsageFlags = Flags<ImageUsageBits>;
using SparseImageFormatFlags = Flags<SparseImageFormatBits>;

struct PhysicalDeviceVulkan13Features;
struct PhysicalDeviceVulkan13Properties;
struct PipelineCreationFeedback;
struct PipelineCreationFeedbackCreateInfo;
struct PhysicalDeviceShaderTerminateInvocationFeatures;
struct PhysicalDeviceToolProperties;
struct PhysicalDeviceShaderDemoteToHelperInvocationFeatures;
struct PhysicalDevicePrivateDataFeatures;
struct DevicePrivateDataCreateInfo;
struct PrivateDataSlotCreateInfo;
struct AllocationCallbacks;
struct PhysicalDevicePipelineCreationCacheControlFeatures;
struct MemoryBarrier2;
struct BufferMemoryBarrier2;
struct ImageSubresourceRange;
struct ImageMemoryBarrier2;
struct DependencyInfo;
struct SemaphoreSubmitInfo;
struct CommandBufferSubmitInfo;
struct SubmitInfo2;
struct PhysicalDeviceSynchronization2Features;
struct PhysicalDeviceZeroInitializeWorkgroupMemoryFeatures;
struct PhysicalDeviceImageRobustnessFeatures;
struct BufferCopy2;
struct CopyBufferInfo2;
struct ImageSubresourceLayers;
struct Offset3D;
struct Extent3D;
struct ImageCopy2;
struct CopyImageInfo2;
struct BufferImageCopy2;
struct CopyBufferToImageInfo2;
struct CopyImageToBufferInfo2;
struct ImageBlit2;
struct BlitImageInfo2;
struct ImageResolve2;
struct ResolveImageInfo2;
struct PhysicalDeviceSubgroupSizeControlFeatures;
struct PhysicalDeviceSubgroupSizeControlProperties;
struct PipelineShaderStageRequiredSubgroupSizeCreateInfo;
struct PhysicalDeviceInlineUniformBlockFeatures;
struct PhysicalDeviceInlineUniformBlockProperties;
struct WriteDescriptorSetInlineUniformBlock;
struct DescriptorPoolInlineUniformBlockCreateInfo;
struct PhysicalDeviceTextureCompressionASTCHDRFeatures;
struct Offset2D;
struct Extent2D;
struct Rect2D;
union ClearColorValue;
struct ClearDepthStencilValue;
union ClearValue;
struct RenderingAttachmentInfo;
struct RenderingInfo;
struct PipelineRenderingCreateInfo;
struct PhysicalDeviceDynamicRenderingFeatures;
struct CommandBufferInheritanceRenderingInfo;
struct Viewport;
struct PhysicalDeviceShaderIntegerDotProductFeatures;
struct PhysicalDeviceShaderIntegerDotProductProperties;
struct PhysicalDeviceTexelBufferAlignmentProperties;
struct FormatProperties3;
struct PhysicalDeviceMaintenance4Features;
struct PhysicalDeviceMaintenance4Properties;
struct BufferCreateInfo;
struct DeviceBufferMemoryRequirements;
struct ImageCreateInfo;
struct DeviceImageMemoryRequirements;
struct MemoryRequirements;
struct MemoryRequirements2;
struct SparseImageFormatProperties;
struct SparseImageMemoryRequirements;
struct SparseImageMemoryRequirements2;

constexpr auto uuidSize = 16;
constexpr auto luidSize = 8;
constexpr auto maxDriverNameSize = 256;
constexpr auto maxDriverInfoSize = 256;

VK_DEFINE_NON_DISPATCHABLE_HANDLE(RenderPass)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(Framebuffer)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(DeviceMemory)

using DeviceAddress = uint64_t;

enum class SubgroupFeatureBits : int32_t;
enum class PointClippingBehavior : int32_t;
enum class DriverId : int32_t;
enum class ShaderFloatControlsIndependence : int32_t;
enum class RenderPassCreateBits : int32_t;
enum class AttachmentDescriptionBits : int32_t;
enum class SubpassDescriptionBits : int32_t;
enum class PipelineBindPoint : int32_t;
enum class PipelineStageBits : int32_t;
enum class AccessBits : int32_t;
enum class SubpassContents : int32_t;
enum class DescriptorBindingBits : int32_t;
enum class SamplerReductionMode : int32_t;
enum class SemaphoreType : int32_t;
enum class SemaphoreWaitBits : int32_t;

using SubgroupFeatureFlags = Flags<SubgroupFeatureBits>;
using ResolveModeFlags = Flags<ResolveModeBits>;
using SampleCountFlags = Flags<SampleCountBits>;
using RenderPassCreateFlags = Flags<RenderPassCreateBits>;
using AttachmentDescriptionFlags = Flags<AttachmentDescriptionBits>;
using SubpassDescriptionFlags = Flags<SubpassDescriptionBits>;
using PipelineStageFlags = Flags<PipelineStageBits>;
using AccessFlags = Flags<AccessBits>;
using DescriptorBindingFlags = Flags<DescriptorBindingBits>;
using SemaphoreWaitFlags = Flags<SemaphoreWaitBits>;

struct PhysicalDeviceVulkan11Features;
struct PhysicalDeviceVulkan11Properties;
struct PhysicalDeviceVulkan12Features;
struct ConformanceVersion;
struct PhysicalDeviceVulkan12Properties;
struct ImageFormatListCreateInfo;
struct AttachmentDescription2;
struct AttachmentReference2;
struct SubpassDescription2;
struct SubpassDependency2;
struct RenderPassCreateInfo2;
struct SubpassBeginInfo;
struct SubpassEndInfo;
struct RenderPassBeginInfo;
struct PhysicalDevice8BitStorageFeatures;
struct PhysicalDeviceDriverProperties;
struct PhysicalDeviceShaderAtomicInt64Features;
struct PhysicalDeviceShaderFloat16Int8Features;
struct PhysicalDeviceFloatControlsProperties;
struct DescriptorSetLayoutBindingFlagsCreateInfo;
struct PhysicalDeviceDescriptorIndexingFeatures;
struct PhysicalDeviceDescriptorIndexingProperties;
struct DescriptorSetVariableDescriptorCountAllocateInfo;
struct DescriptorSetVariableDescriptorCountLayoutSupport;
struct SubpassDescriptionDepthStencilResolve;
struct PhysicalDeviceDepthStencilResolveProperties;
struct PhysicalDeviceScalarBlockLayoutFeatures;
struct ImageStencilUsageCreateInfo;
struct SamplerReductionModeCreateInfo;
struct PhysicalDeviceSamplerFilterMinmaxProperties;
struct PhysicalDeviceVulkanMemoryModelFeatures;
struct PhysicalDeviceImagelessFramebufferFeatures;
struct FramebufferAttachmentImageInfo;
struct FramebufferAttachmentsCreateInfo;
struct RenderPassAttachmentBeginInfo;
struct PhysicalDeviceUniformBufferStandardLayoutFeatures;
struct PhysicalDeviceShaderSubgroupExtendedTypesFeatures;
struct PhysicalDeviceSeparateDepthStencilLayoutsFeatures;
struct AttachmentReferenceStencilLayout;
struct AttachmentDescriptionStencilLayout;
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

constexpr auto maxDeviceGroupSize = 32;
constexpr auto maxPhysicalDeviceNameSize = 256;
constexpr auto maxMemoryTypes = 32;
constexpr auto maxMemoryHeaps = 16;
constexpr auto queueFamilyExternal = (~1U);

VK_DEFINE_HANDLE(Instance)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(CommandPool)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(SamplerYcbcrConversion)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(DescriptorUpdateTemplate)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(DescriptorSetLayout)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(PipelineLayout)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(DescriptorSet)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(Sampler)

enum class PeerMemoryFeatureBits : int32_t;
enum class MemoryAllocateBits : int32_t;
enum class PhysicalDeviceType : int32_t;
enum class FormatFeatureBits : int32_t;
enum class QueueBits : int32_t;
enum class MemoryPropertyBits : int32_t;
enum class MemoryHeapBits : int32_t;
enum class TessellationDomainOrigin : int32_t;
enum class DeviceQueueCreateBits : int32_t;
enum class SamplerYcbcrModelConversion : int32_t;
enum class SamplerYcbcrRange : int32_t;
enum class ComponentSwizzle : int32_t;
enum class ChromaLocation : int32_t;
enum class DescriptorUpdateTemplateType : int32_t;
enum class DescriptorType : int32_t;
enum class ExternalMemoryHandleTypeBits : int32_t;
enum class ExternalMemoryFeatureBits : int32_t;
enum class ExternalFenceHandleTypeBits : int32_t;
enum class ExternalFenceFeatureBits : int32_t;
enum class FenceImportBits : int32_t;
enum class SemaphoreImportBits : int32_t;
enum class ExternalSemaphoreHandleTypeBits : int32_t;
enum class ExternalSemaphoreFeatureBits : int32_t;
enum class DescriptorSetLayoutCreateBits : int32_t;

using PeerMemoryFeatureFlags = Flags<PeerMemoryFeatureBits>;
using MemoryAllocateFlags = Flags<MemoryAllocateBits>;
using FormatFeatureFlags = Flags<FormatFeatureBits>;
using QueueFlags = Flags<QueueBits>;
using MemoryPropertyFlags = Flags<MemoryPropertyBits>;
using MemoryHeapFlags = Flags<MemoryHeapBits>;
using CommandPoolTrimFlags = Flags<DummyEnum>;
using DeviceQueueCreateFlags = Flags<DeviceQueueCreateBits>;
using DescriptorUpdateTemplateCreateFlags = Flags<DummyEnum>;
using ExternalMemoryHandleTypeFlags = Flags<ExternalMemoryHandleTypeBits>;
using ExternalMemoryFeatureFlags = Flags<ExternalMemoryFeatureBits>;
using ExternalFenceHandleTypeFlags = Flags<ExternalFenceHandleTypeBits>;
using ExternalFenceFeatureFlags = Flags<ExternalFenceFeatureBits>;
using FenceImportFlags = Flags<FenceImportBits>;
using SemaphoreImportFlags = Flags<SemaphoreImportBits>;
using ExternalSemaphoreHandleTypeFlags = Flags<ExternalSemaphoreHandleTypeBits>;
using ExternalSemaphoreFeatureFlags = Flags<ExternalSemaphoreFeatureBits>;
using DescriptorSetLayoutCreateFlags = Flags<DescriptorSetLayoutCreateBits>;

struct PhysicalDeviceSubgroupProperties;
struct BindBufferMemoryInfo;
struct BindImageMemoryInfo;
struct PhysicalDevice16BitStorageFeatures;
struct MemoryDedicatedRequirements;
struct MemoryDedicatedAllocateInfo;
struct MemoryAllocateFlagsInfo;
struct DeviceGroupRenderPassBeginInfo;
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
struct PhysicalDeviceFeatures;
struct PhysicalDeviceFeatures2;
struct PhysicalDeviceLimits;
struct PhysicalDeviceSparseProperties;
struct PhysicalDeviceProperties;
struct PhysicalDeviceProperties2;
struct FormatProperties;
struct FormatProperties2;
struct ImageFormatProperties;
struct ImageFormatProperties2;
struct PhysicalDeviceImageFormatInfo2;
struct QueueFamilyProperties;
struct QueueFamilyProperties2;
struct MemoryType;
struct MemoryHeap;
struct PhysicalDeviceMemoryProperties;
struct PhysicalDeviceMemoryProperties2;
struct SparseImageFormatProperties2;
struct PhysicalDeviceSparseImageFormatInfo2;
struct PhysicalDevicePointClippingProperties;
struct InputAttachmentAspectReference;
struct RenderPassInputAttachmentAspectCreateInfo;
struct ImageViewUsageCreateInfo;
struct PipelineTessellationDomainOriginStateCreateInfo;
struct RenderPassMultiviewCreateInfo;
struct PhysicalDeviceMultiviewFeatures;
struct PhysicalDeviceMultiviewProperties;
struct PhysicalDeviceVariablePointersFeatures;
struct PhysicalDeviceProtectedMemoryFeatures;
struct PhysicalDeviceProtectedMemoryProperties;
struct DeviceQueueInfo2;
struct ProtectedSubmitInfo;
struct ComponentMapping;
struct SamplerYcbcrConversionCreateInfo;
struct SamplerYcbcrConversionInfo;
struct BindImagePlaneMemoryInfo;
struct ImagePlaneMemoryRequirementsInfo;
struct PhysicalDeviceSamplerYcbcrConversionFeatures;
struct SamplerYcbcrConversionImageFormatProperties;
struct DescriptorUpdateTemplateEntry;
struct DescriptorUpdateTemplateCreateInfo;
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
struct PhysicalDeviceMaintenance3Properties;
struct DescriptorSetLayoutSupport;
struct DescriptorSetLayoutBinding;
struct DescriptorSetLayoutCreateInfo;
struct PhysicalDeviceShaderDrawParametersFeatures;

using PhysicalDeviceVariablePointerFeatures = PhysicalDeviceVariablePointersFeatures;
using PhysicalDeviceShaderDrawParameterFeatures = PhysicalDeviceShaderDrawParametersFeatures;
constexpr auto attachmentUnused = (~0U);
constexpr auto lodClampNone = 1000.0F;
constexpr auto queueFamilyIgnored = (~0U);
constexpr auto remainingArrayLayers = (~0U);
constexpr auto remainingMipLevels = (~0U);
constexpr auto subpassExternal = (~0U);
constexpr auto wholeSize = (~0ULL);

VK_DEFINE_NON_DISPATCHABLE_HANDLE(BufferView)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(ShaderModule)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(PipelineCache)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(Pipeline)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(DescriptorPool)

using SampleMask = uint32_t;

enum class PipelineCacheHeaderVersion : int32_t;
enum class VendorId : int32_t;
enum class SparseMemoryBindBits : int32_t;
enum class FenceCreateBits : int32_t;
enum class EventCreateBits : int32_t;
enum class QueryPipelineStatisticBits : int32_t;
enum class QueryType : int32_t;
enum class QueryResultBits : int32_t;
enum class ImageViewCreateBits : int32_t;
enum class ImageViewType : int32_t;
enum class PipelineCacheCreateBits : int32_t;
enum class BlendFactor : int32_t;
enum class BlendOp : int32_t;
enum class ColorComponentBits : int32_t;
enum class PipelineCreateBits : int32_t;
enum class PipelineShaderStageCreateBits : int32_t;
enum class DynamicState : int32_t;
enum class VertexInputRate : int32_t;
enum class PolygonMode : int32_t;
enum class PipelineDepthStencilStateCreateBits : int32_t;
enum class PipelineColorBlendStateCreateBits : int32_t;
enum class LogicOp : int32_t;
enum class BorderColor : int32_t;
enum class SamplerAddressMode : int32_t;
enum class SamplerCreateBits : int32_t;
enum class SamplerMipmapMode : int32_t;
enum class DescriptorPoolCreateBits : int32_t;
enum class FramebufferCreateBits : int32_t;
enum class CommandPoolCreateBits : int32_t;
enum class CommandPoolResetBits : int32_t;
enum class CommandBufferLevel : int32_t;
enum class CommandBufferUsageBits : int32_t;
enum class QueryControlBits : int32_t;
enum class CommandBufferResetBits : int32_t;
enum class IndexType : int32_t;

using InstanceCreateFlags = Flags<DummyEnum>;
using DeviceCreateFlags = Flags<DummyEnum>;
using MemoryMapFlags = Flags<DummyEnum>;
using SparseMemoryBindFlags = Flags<SparseMemoryBindBits>;
using FenceCreateFlags = Flags<FenceCreateBits>;
using SemaphoreCreateFlags = Flags<DummyEnum>;
using EventCreateFlags = Flags<EventCreateBits>;
using QueryPipelineStatisticFlags = Flags<QueryPipelineStatisticBits>;
using QueryPoolCreateFlags = Flags<DummyEnum>;
using QueryResultFlags = Flags<QueryResultBits>;
using BufferViewCreateFlags = Flags<DummyEnum>;
using ImageViewCreateFlags = Flags<ImageViewCreateBits>;
using ShaderModuleCreateFlags = Flags<DummyEnum>;
using PipelineCacheCreateFlags = Flags<PipelineCacheCreateBits>;
using ColorComponentFlags = Flags<ColorComponentBits>;
using PipelineCreateFlags = Flags<PipelineCreateBits>;
using PipelineShaderStageCreateFlags = Flags<PipelineShaderStageCreateBits>;
using PipelineVertexInputStateCreateFlags = Flags<DummyEnum>;
using PipelineInputAssemblyStateCreateFlags = Flags<DummyEnum>;
using PipelineTessellationStateCreateFlags = Flags<DummyEnum>;
using PipelineViewportStateCreateFlags = Flags<DummyEnum>;
using PipelineRasterizationStateCreateFlags = Flags<DummyEnum>;
using PipelineMultisampleStateCreateFlags = Flags<DummyEnum>;
using PipelineDepthStencilStateCreateFlags = Flags<PipelineDepthStencilStateCreateBits>;
using PipelineColorBlendStateCreateFlags = Flags<PipelineColorBlendStateCreateBits>;
using PipelineDynamicStateCreateFlags = Flags<DummyEnum>;
using PipelineLayoutCreateFlags = Flags<DummyEnum>;
using SamplerCreateFlags = Flags<SamplerCreateBits>;
using DescriptorPoolCreateFlags = Flags<DescriptorPoolCreateBits>;
using DescriptorPoolResetFlags = Flags<DummyEnum>;
using FramebufferCreateFlags = Flags<FramebufferCreateBits>;
using CommandPoolCreateFlags = Flags<CommandPoolCreateBits>;
using CommandPoolResetFlags = Flags<CommandPoolResetBits>;
using CommandBufferUsageFlags = Flags<CommandBufferUsageBits>;
using QueryControlFlags = Flags<QueryControlBits>;
using CommandBufferResetFlags = Flags<CommandBufferResetBits>;

struct BaseInStructure;
struct BaseOutStructure;
struct BufferMemoryBarrier;
struct DispatchIndirectCommand;
struct DrawIndexedIndirectCommand;
struct DrawIndirectCommand;
struct ImageMemoryBarrier;
struct MemoryBarrier;
struct PipelineCacheHeaderVersionOne;
struct ApplicationInfo;
struct InstanceCreateInfo;
struct DeviceQueueCreateInfo;
struct DeviceCreateInfo;
struct ExtensionProperties;
struct LayerProperties;
struct SubmitInfo;
struct MappedMemoryRange;
struct MemoryAllocateInfo;
struct SparseMemoryBind;
struct SparseBufferMemoryBindInfo;
struct SparseImageOpaqueMemoryBindInfo;
struct ImageSubresource;
struct SparseImageMemoryBind;
struct SparseImageMemoryBindInfo;
struct BindSparseInfo;
struct FenceCreateInfo;
struct SemaphoreCreateInfo;
struct EventCreateInfo;
struct QueryPoolCreateInfo;
struct BufferViewCreateInfo;
struct SubresourceLayout;
struct ImageViewCreateInfo;
struct ShaderModuleCreateInfo;
struct PipelineCacheCreateInfo;
struct SpecializationMapEntry;
struct SpecializationInfo;
struct PipelineShaderStageCreateInfo;
struct ComputePipelineCreateInfo;
struct VertexInputBindingDescription;
struct VertexInputAttributeDescription;
struct PipelineVertexInputStateCreateInfo;
struct PipelineInputAssemblyStateCreateInfo;
struct PipelineTessellationStateCreateInfo;
struct PipelineViewportStateCreateInfo;
struct PipelineRasterizationStateCreateInfo;
struct PipelineMultisampleStateCreateInfo;
struct StencilOpState;
struct PipelineDepthStencilStateCreateInfo;
struct PipelineColorBlendAttachmentState;
struct PipelineColorBlendStateCreateInfo;
struct PipelineDynamicStateCreateInfo;
struct GraphicsPipelineCreateInfo;
struct PushConstantRange;
struct PipelineLayoutCreateInfo;
struct SamplerCreateInfo;
struct CopyDescriptorSet;
struct DescriptorBufferInfo;
struct DescriptorImageInfo;
struct DescriptorPoolSize;
struct DescriptorPoolCreateInfo;
struct DescriptorSetAllocateInfo;
struct WriteDescriptorSet;
struct AttachmentDescription;
struct AttachmentReference;
struct FramebufferCreateInfo;
struct SubpassDescription;
struct SubpassDependency;
struct RenderPassCreateInfo;
struct CommandPoolCreateInfo;
struct CommandBufferAllocateInfo;
struct CommandBufferInheritanceInfo;
struct CommandBufferBeginInfo;
struct BufferCopy;
struct BufferImageCopy;
struct ClearAttachment;
struct ClearRect;
struct ImageBlit;
struct ImageCopy;
struct ImageResolve;

VK_DEFINE_NON_DISPATCHABLE_HANDLE(SurfaceKHR)

enum class SurfaceTransformBitsKHR : int32_t;
enum class PresentModeKHR : int32_t;
enum class ColorSpaceKHR : int32_t;
enum class CompositeAlphaBitsKHR : int32_t;

using CompositeAlphaFlagsKHR = Flags<CompositeAlphaBitsKHR>;
using SurfaceTransformFlagsKHR = Flags<SurfaceTransformBitsKHR>;

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

VK_DEFINE_NON_DISPATCHABLE_HANDLE(DebugReportCallbackEXT)

enum class DebugReportBitsEXT : int32_t;
enum class DebugReportObjectTypeEXT : int32_t;

using DebugReportFlagsEXT = Flags<DebugReportBitsEXT>;

struct DebugReportCallbackCreateInfoEXT;

enum class RasterizationOrderAMD : int32_t;

struct PipelineRasterizationStateRasterizationOrderAMD;

struct DebugMarkerObjectNameInfoEXT;
struct DebugMarkerObjectTagInfoEXT;
struct DebugMarkerMarkerInfoEXT;

struct DedicatedAllocationImageCreateInfoNV;
struct DedicatedAllocationBufferCreateInfoNV;
struct DedicatedAllocationMemoryAllocateInfoNV;

using PipelineRasterizationStateStreamCreateFlagsEXT = Flags<DummyEnum>;

struct PhysicalDeviceTransformFeedbackFeaturesEXT;
struct PhysicalDeviceTransformFeedbackPropertiesEXT;
struct PipelineRasterizationStateStreamCreateInfoEXT;

struct TextureLODGatherFormatPropertiesAMD;

enum class ShaderInfoTypeAMD : int32_t;

struct ShaderResourceUsageAMD;
struct ShaderStatisticsInfoAMD;

struct RenderingFragmentShadingRateAttachmentInfoKHR;
struct RenderingFragmentDensityMapAttachmentInfoEXT;
struct AttachmentSampleCountInfoAMD;
struct MultiviewPerViewAttributesInfoNVX;

using RenderingInfoKHR = RenderingInfo;
using RenderingAttachmentInfoKHR = RenderingAttachmentInfo;
using PipelineRenderingCreateInfoKHR = PipelineRenderingCreateInfo;
using PhysicalDeviceDynamicRenderingFeaturesKHR = PhysicalDeviceDynamicRenderingFeatures;
using CommandBufferInheritanceRenderingInfoKHR = CommandBufferInheritanceRenderingInfo;
using RenderingFlagsKHR = RenderingFlags;
using RenderingBitsKHR = RenderingBits;
using AttachmentSampleCountInfoNV = AttachmentSampleCountInfoAMD;

#ifdef VK_USE_PLATFORM_GGP
using StreamDescriptorSurfaceCreateFlagsGGP = Flags<DummyEnum>;

struct StreamDescriptorSurfaceCreateInfoGGP;

#endif //VK_USE_PLATFORM_GGP

struct PhysicalDeviceCornerSampledImageFeaturesNV;

using RenderPassMultiviewCreateInfoKHR = RenderPassMultiviewCreateInfo;
using PhysicalDeviceMultiviewFeaturesKHR = PhysicalDeviceMultiviewFeatures;
using PhysicalDeviceMultiviewPropertiesKHR = PhysicalDeviceMultiviewProperties;
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
enum class ValidationCheckEXT : int32_t;

struct ValidationFlagsEXT;


#ifdef VK_USE_PLATFORM_VI_NN
using ViSurfaceCreateFlagsNN = Flags<DummyEnum>;

struct ViSurfaceCreateInfoNN;

#endif //VK_USE_PLATFORM_VI_NN

using PhysicalDeviceTextureCompressionASTCHDRFeaturesEXT = PhysicalDeviceTextureCompressionASTCHDRFeatures;
struct ImageViewASTCDecodeModeEXT;
struct PhysicalDeviceASTCDecodeFeaturesEXT;

using CommandPoolTrimFlagsKHR = CommandPoolTrimFlags;
constexpr auto maxDeviceGroupSizeKHR = 32;

using PhysicalDeviceGroupPropertiesKHR = PhysicalDeviceGroupProperties;
using DeviceGroupDeviceCreateInfoKHR = DeviceGroupDeviceCreateInfo;
constexpr auto luidSizeKHR = 8;

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
constexpr auto queueFamilyExternalKHR = (~1U);

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

struct PhysicalDevicePushDescriptorPropertiesKHR;

enum class ConditionalRenderingBitsEXT : int32_t;

using ConditionalRenderingFlagsEXT = Flags<ConditionalRenderingBitsEXT>;

struct ConditionalRenderingBeginInfoEXT;
struct PhysicalDeviceConditionalRenderingFeaturesEXT;
struct CommandBufferInheritanceConditionalRenderingInfoEXT;

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
struct ViewportWScalingNV;
struct PipelineViewportWScalingStateCreateInfoNV;

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

struct RefreshCycleDurationGOOGLE;
struct PastPresentationTimingGOOGLE;
struct PresentTimeGOOGLE;
struct PresentTimesInfoGOOGLE;

enum class ViewportCoordinateSwizzleNV : int32_t;

using PipelineViewportSwizzleStateCreateFlagsNV = Flags<DummyEnum>;

struct ViewportSwizzleNV;
struct PipelineViewportSwizzleStateCreateInfoNV;

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


#ifdef VK_USE_PLATFORM_IOS_MVK
using IOSSurfaceCreateFlagsMVK = Flags<DummyEnum>;

struct IOSSurfaceCreateInfoMVK;

#endif //VK_USE_PLATFORM_IOS_MVK


#ifdef VK_USE_PLATFORM_MACOS_MVK
using MacOSSurfaceCreateFlagsMVK = Flags<DummyEnum>;

struct MacOSSurfaceCreateInfoMVK;

#endif //VK_USE_PLATFORM_MACOS_MVK

constexpr auto queueFamilyForeignEXT = (~2U);

using MemoryDedicatedRequirementsKHR = MemoryDedicatedRequirements;
using MemoryDedicatedAllocateInfoKHR = MemoryDedicatedAllocateInfo;
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

using BufferMemoryRequirementsInfo2KHR = BufferMemoryRequirementsInfo2;
using ImageMemoryRequirementsInfo2KHR = ImageMemoryRequirementsInfo2;
using ImageSparseMemoryRequirementsInfo2KHR = ImageSparseMemoryRequirementsInfo2;
using MemoryRequirements2KHR = MemoryRequirements2;
using SparseImageMemoryRequirements2KHR = SparseImageMemoryRequirements2;
using ImageFormatListCreateInfoKHR = ImageFormatListCreateInfo;
enum class BlendOverlapEXT : int32_t;

struct PhysicalDeviceBlendOperationAdvancedFeaturesEXT;
struct PhysicalDeviceBlendOperationAdvancedPropertiesEXT;
struct PipelineColorBlendAdvancedStateCreateInfoEXT;

using PipelineCoverageToColorStateCreateFlagsNV = Flags<DummyEnum>;

struct PipelineCoverageToColorStateCreateInfoNV;

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
struct AccelerationStructureInstanceKHR;
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

enum class CoverageModulationModeNV : int32_t;

using PipelineCoverageModulationStateCreateFlagsNV = Flags<DummyEnum>;

struct PipelineCoverageModulationStateCreateInfoNV;

struct PhysicalDeviceShaderSMBuiltinsPropertiesNV;
struct PhysicalDeviceShaderSMBuiltinsFeaturesNV;

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
enum class ShadingRatePaletteEntryNV : int32_t;
enum class CoarseSampleOrderTypeNV : int32_t;

struct ShadingRatePaletteNV;
struct PipelineViewportShadingRateImageStateCreateInfoNV;
struct PhysicalDeviceShadingRateImageFeaturesNV;
struct PhysicalDeviceShadingRateImagePropertiesNV;
struct CoarseSampleLocationNV;
struct CoarseSampleOrderCustomNV;
struct PipelineViewportCoarseSampleOrderStateCreateInfoNV;

constexpr auto shaderUnusedNV = (~0U);

VK_DEFINE_NON_DISPATCHABLE_HANDLE(AccelerationStructureNV)

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
using BuildAccelerationStructureFlagsNV = BuildAccelerationStructureFlagsKHR;
using BuildAccelerationStructureBitsNV = BuildAccelerationStructureBitsKHR;
using CopyAccelerationStructureModeNV = CopyAccelerationStructureModeKHR;
using TransformMatrixNV = TransformMatrixKHR;
using AabbPositionsNV = AabbPositionsKHR;
using AccelerationStructureInstanceNV = AccelerationStructureInstanceKHR;
struct PhysicalDeviceRepresentativeFragmentTestFeaturesNV;
struct PipelineRepresentativeFragmentTestStateCreateInfoNV;

using PhysicalDeviceMaintenance3PropertiesKHR = PhysicalDeviceMaintenance3Properties;
using DescriptorSetLayoutSupportKHR = DescriptorSetLayoutSupport;
struct PhysicalDeviceImageViewImageFormatInfoEXT;
struct FilterCubicImageViewImageFormatPropertiesEXT;

using PhysicalDeviceShaderSubgroupExtendedTypesFeaturesKHR = PhysicalDeviceShaderSubgroupExtendedTypesFeatures;
using PhysicalDevice8BitStorageFeaturesKHR = PhysicalDevice8BitStorageFeatures;
struct ImportMemoryHostPointerInfoEXT;
struct MemoryHostPointerPropertiesEXT;
struct PhysicalDeviceExternalMemoryHostPropertiesEXT;

using PhysicalDeviceShaderAtomicInt64FeaturesKHR = PhysicalDeviceShaderAtomicInt64Features;
struct PhysicalDeviceShaderClockFeaturesKHR;

enum class PipelineCompilerControlBitsAMD : int32_t;

using PipelineCompilerControlFlagsAMD = Flags<PipelineCompilerControlBitsAMD>;

struct PipelineCompilerControlCreateInfoAMD;

enum class TimeDomainEXT : int32_t;

struct CalibratedTimestampInfoEXT;

struct PhysicalDeviceShaderCorePropertiesAMD;

constexpr auto maxGlobalPrioritySizeKHR = 16;

enum class QueueGlobalPriorityKHR : int32_t;

struct DeviceQueueGlobalPriorityCreateInfoKHR;
struct PhysicalDeviceGlobalPriorityQueryFeaturesKHR;
struct QueueFamilyGlobalPriorityPropertiesKHR;

enum class MemoryOverallocationBehaviorAMD : int32_t;

struct DeviceMemoryOverallocationCreateInfoAMD;

struct PhysicalDeviceVertexAttributeDivisorPropertiesEXT;
struct VertexInputBindingDivisorDescriptionEXT;
struct PipelineVertexInputDivisorStateCreateInfoEXT;
struct PhysicalDeviceVertexAttributeDivisorFeaturesEXT;


#ifdef VK_USE_PLATFORM_GGP
struct PresentFrameTokenGGP;

#endif //VK_USE_PLATFORM_GGP

using PipelineCreationFeedbackBitsEXT = PipelineCreationFeedbackBits;
using PipelineCreationFeedbackFlagsEXT = PipelineCreationFeedbackFlags;
using PipelineCreationFeedbackCreateInfoEXT = PipelineCreationFeedbackCreateInfo;
using PipelineCreationFeedbackEXT = PipelineCreationFeedback;
constexpr auto maxDriverNameSizeKHR = 256;
constexpr auto maxDriverInfoSizeKHR = 256;

using DriverIdKHR = DriverId;
using ConformanceVersionKHR = ConformanceVersion;
using PhysicalDeviceDriverPropertiesKHR = PhysicalDeviceDriverProperties;
using PhysicalDeviceFloatControlsPropertiesKHR = PhysicalDeviceFloatControlsProperties;
using ShaderFloatControlsIndependenceKHR = ShaderFloatControlsIndependence;
using SubpassDescriptionDepthStencilResolveKHR = SubpassDescriptionDepthStencilResolve;
using PhysicalDeviceDepthStencilResolvePropertiesKHR = PhysicalDeviceDepthStencilResolveProperties;
using ResolveModeBitsKHR = ResolveModeBits;
using ResolveModeFlagsKHR = ResolveModeFlags;
struct PhysicalDeviceComputeShaderDerivativesFeaturesNV;

struct PhysicalDeviceMeshShaderFeaturesNV;
struct PhysicalDeviceMeshShaderPropertiesNV;
struct DrawMeshTasksIndirectCommandNV;

struct PhysicalDeviceFragmentShaderBarycentricFeaturesNV;

struct PhysicalDeviceShaderImageFootprintFeaturesNV;

struct PipelineViewportExclusiveScissorStateCreateInfoNV;
struct PhysicalDeviceExclusiveScissorFeaturesNV;

struct QueueFamilyCheckpointPropertiesNV;
struct CheckpointDataNV;

using SemaphoreTypeKHR = SemaphoreType;
using PhysicalDeviceTimelineSemaphoreFeaturesKHR = PhysicalDeviceTimelineSemaphoreFeatures;
using PhysicalDeviceTimelineSemaphorePropertiesKHR = PhysicalDeviceTimelineSemaphoreProperties;
using SemaphoreTypeCreateInfoKHR = SemaphoreTypeCreateInfo;
using TimelineSemaphoreSubmitInfoKHR = TimelineSemaphoreSubmitInfo;
using SemaphoreWaitBitsKHR = SemaphoreWaitBits;
using SemaphoreWaitFlagsKHR = SemaphoreWaitFlags;
using SemaphoreWaitInfoKHR = SemaphoreWaitInfo;
using SemaphoreSignalInfoKHR = SemaphoreSignalInfo;
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
using PhysicalDeviceVulkanMemoryModelFeaturesKHR = PhysicalDeviceVulkanMemoryModelFeatures;
struct PhysicalDevicePCIBusInfoPropertiesEXT;

struct DisplayNativeHdrSurfaceCapabilitiesAMD;
struct SwapchainDisplayNativeHdrCreateInfoAMD;


#ifdef VK_USE_PLATFORM_FUCHSIA
using ImagePipeSurfaceCreateFlagsFUCHSIA = Flags<DummyEnum>;

struct ImagePipeSurfaceCreateInfoFUCHSIA;

#endif //VK_USE_PLATFORM_FUCHSIA

using PhysicalDeviceShaderTerminateInvocationFeaturesKHR = PhysicalDeviceShaderTerminateInvocationFeatures;
struct PhysicalDeviceFragmentDensityMapFeaturesEXT;
struct PhysicalDeviceFragmentDensityMapPropertiesEXT;
struct RenderPassFragmentDensityMapCreateInfoEXT;

using PhysicalDeviceScalarBlockLayoutFeaturesEXT = PhysicalDeviceScalarBlockLayoutFeatures;
using PhysicalDeviceSubgroupSizeControlFeaturesEXT = PhysicalDeviceSubgroupSizeControlFeatures;
using PhysicalDeviceSubgroupSizeControlPropertiesEXT = PhysicalDeviceSubgroupSizeControlProperties;
using PipelineShaderStageRequiredSubgroupSizeCreateInfoEXT = PipelineShaderStageRequiredSubgroupSizeCreateInfo;
enum class FragmentShadingRateCombinerOpKHR : int32_t;

struct FragmentShadingRateAttachmentInfoKHR;
struct PipelineFragmentShadingRateStateCreateInfoKHR;
struct PhysicalDeviceFragmentShadingRateFeaturesKHR;
struct PhysicalDeviceFragmentShadingRatePropertiesKHR;
struct PhysicalDeviceFragmentShadingRateKHR;

enum class ShaderCorePropertiesBitsAMD : int32_t;

using ShaderCorePropertiesFlagsAMD = Flags<ShaderCorePropertiesBitsAMD>;

struct PhysicalDeviceShaderCoreProperties2AMD;

struct PhysicalDeviceCoherentMemoryFeaturesAMD;

struct PhysicalDeviceShaderImageAtomicInt64FeaturesEXT;

struct PhysicalDeviceMemoryBudgetPropertiesEXT;

struct PhysicalDeviceMemoryPriorityFeaturesEXT;
struct MemoryPriorityAllocateInfoEXT;

struct SurfaceProtectedCapabilitiesKHR;

struct PhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV;

using PhysicalDeviceSeparateDepthStencilLayoutsFeaturesKHR = PhysicalDeviceSeparateDepthStencilLayoutsFeatures;
using AttachmentReferenceStencilLayoutKHR = AttachmentReferenceStencilLayout;
using AttachmentDescriptionStencilLayoutKHR = AttachmentDescriptionStencilLayout;
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

struct PhysicalDevicePresentWaitFeaturesKHR;

enum class ComponentTypeNV : int32_t;
enum class ScopeNV : int32_t;

struct CooperativeMatrixPropertiesNV;
struct PhysicalDeviceCooperativeMatrixFeaturesNV;
struct PhysicalDeviceCooperativeMatrixPropertiesNV;

enum class CoverageReductionModeNV : int32_t;

using PipelineCoverageReductionStateCreateFlagsNV = Flags<DummyEnum>;

struct PhysicalDeviceCoverageReductionModeFeaturesNV;
struct PipelineCoverageReductionStateCreateInfoNV;
struct FramebufferMixedSamplesCombinationNV;

struct PhysicalDeviceFragmentShaderInterlockFeaturesEXT;

struct PhysicalDeviceYcbcrImageArraysFeaturesEXT;

using PhysicalDeviceUniformBufferStandardLayoutFeaturesKHR = PhysicalDeviceUniformBufferStandardLayoutFeatures;
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

using PhysicalDeviceBufferDeviceAddressFeaturesKHR = PhysicalDeviceBufferDeviceAddressFeatures;
using BufferDeviceAddressInfoKHR = BufferDeviceAddressInfo;
using BufferOpaqueCaptureAddressCreateInfoKHR = BufferOpaqueCaptureAddressCreateInfo;
using MemoryOpaqueCaptureAddressAllocateInfoKHR = MemoryOpaqueCaptureAddressAllocateInfo;
using DeviceMemoryOpaqueCaptureAddressInfoKHR = DeviceMemoryOpaqueCaptureAddressInfo;
enum class LineRasterizationModeEXT : int32_t;

struct PhysicalDeviceLineRasterizationFeaturesEXT;
struct PhysicalDeviceLineRasterizationPropertiesEXT;
struct PipelineRasterizationLineStateCreateInfoEXT;

struct PhysicalDeviceShaderAtomicFloatFeaturesEXT;

using PhysicalDeviceHostQueryResetFeaturesEXT = PhysicalDeviceHostQueryResetFeatures;
struct PhysicalDeviceIndexTypeUint8FeaturesEXT;

struct PhysicalDeviceExtendedDynamicStateFeaturesEXT;

enum class PipelineExecutableStatisticFormatKHR : int32_t;

struct PhysicalDevicePipelineExecutablePropertiesFeaturesKHR;
struct PipelineInfoKHR;
struct PipelineExecutablePropertiesKHR;
struct PipelineExecutableInfoKHR;
union PipelineExecutableStatisticValueKHR;
struct PipelineExecutableStatisticKHR;
struct PipelineExecutableInternalRepresentationKHR;

struct PhysicalDeviceShaderAtomicFloat2FeaturesEXT;

using PhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT = PhysicalDeviceShaderDemoteToHelperInvocationFeatures;
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

using PhysicalDeviceShaderIntegerDotProductFeaturesKHR = PhysicalDeviceShaderIntegerDotProductFeatures;
using PhysicalDeviceShaderIntegerDotProductPropertiesKHR = PhysicalDeviceShaderIntegerDotProductProperties;
struct PhysicalDeviceTexelBufferAlignmentFeaturesEXT;

using PhysicalDeviceTexelBufferAlignmentPropertiesEXT = PhysicalDeviceTexelBufferAlignmentProperties;
struct RenderPassTransformBeginInfoQCOM;
struct CommandBufferInheritanceRenderPassTransformInfoQCOM;

enum class DeviceMemoryReportEventTypeEXT : int32_t;

using DeviceMemoryReportFlagsEXT = Flags<DummyEnum>;

struct PhysicalDeviceDeviceMemoryReportFeaturesEXT;
struct DeviceMemoryReportCallbackDataEXT;
struct DeviceDeviceMemoryReportCreateInfoEXT;

struct PhysicalDeviceRobustness2FeaturesEXT;
struct PhysicalDeviceRobustness2PropertiesEXT;

struct SamplerCustomBorderColorCreateInfoEXT;
struct PhysicalDeviceCustomBorderColorPropertiesEXT;
struct PhysicalDeviceCustomBorderColorFeaturesEXT;

struct PresentIdKHR;
struct PhysicalDevicePresentIdFeaturesKHR;

using PhysicalDevicePrivateDataFeaturesEXT = PhysicalDevicePrivateDataFeatures;
using DevicePrivateDataCreateInfoEXT = DevicePrivateDataCreateInfo;
using PrivateDataSlotCreateInfoEXT = PrivateDataSlotCreateInfo;
using PrivateDataSlotEXT = PrivateDataSlot;
using PrivateDataSlotCreateFlagsEXT = PrivateDataSlotCreateFlags;
using PrivateDataSlotCreateBitsEXT = PrivateDataSlotCreateBits;
using PhysicalDevicePipelineCreationCacheControlFeaturesEXT = PhysicalDevicePipelineCreationCacheControlFeatures;
enum class DeviceDiagnosticsConfigBitsNV : int32_t;

using DeviceDiagnosticsConfigFlagsNV = Flags<DeviceDiagnosticsConfigBitsNV>;

struct PhysicalDeviceDiagnosticsConfigFeaturesNV;
struct DeviceDiagnosticsConfigCreateInfoNV;

using Flags64 = uint64_t;

struct QueueFamilyCheckpointProperties2NV;
struct CheckpointData2NV;

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
struct PhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR;

using PhysicalDeviceZeroInitializeWorkgroupMemoryFeaturesKHR = PhysicalDeviceZeroInitializeWorkgroupMemoryFeatures;
enum class FragmentShadingRateTypeNV : int32_t;
enum class FragmentShadingRateNV : int32_t;

struct PhysicalDeviceFragmentShadingRateEnumsFeaturesNV;
struct PhysicalDeviceFragmentShadingRateEnumsPropertiesNV;
struct PipelineFragmentShadingRateEnumStateCreateInfoNV;

enum class AccelerationStructureMotionInstanceTypeNV : int32_t;

using AccelerationStructureMotionInfoFlagsNV = Flags<DummyEnum>;
using AccelerationStructureMotionInstanceFlagsNV = Flags<DummyEnum>;

struct AccelerationStructureGeometryMotionTrianglesDataNV;
struct AccelerationStructureMotionInfoNV;
struct AccelerationStructureMatrixMotionInstanceNV;
struct SRTDataNV;
struct AccelerationStructureSRTMotionInstanceNV;
union AccelerationStructureMotionInstanceDataNV;
struct AccelerationStructureMotionInstanceNV;
struct PhysicalDeviceRayTracingMotionBlurFeaturesNV;

struct PhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT;

struct PhysicalDeviceFragmentDensityMap2FeaturesEXT;
struct PhysicalDeviceFragmentDensityMap2PropertiesEXT;

struct CopyCommandTransformInfoQCOM;

using PhysicalDeviceImageRobustnessFeaturesEXT = PhysicalDeviceImageRobustnessFeatures;
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
struct PhysicalDevice4444FormatsFeaturesEXT;

struct PhysicalDeviceRasterizationOrderAttachmentAccessFeaturesARM;

struct PhysicalDeviceRGBA10X6FormatsFeaturesEXT;


#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
using DirectFBSurfaceCreateFlagsEXT = Flags<DummyEnum>;

struct DirectFBSurfaceCreateInfoEXT;

#endif //VK_USE_PLATFORM_DIRECTFB_EXT

struct PhysicalDeviceMutableDescriptorTypeFeaturesVALVE;
struct MutableDescriptorTypeListVALVE;
struct MutableDescriptorTypeCreateInfoVALVE;

struct PhysicalDeviceVertexInputDynamicStateFeaturesEXT;
struct VertexInputBindingDescription2EXT;
struct VertexInputAttributeDescription2EXT;

struct PhysicalDeviceDrmPropertiesEXT;

struct PhysicalDeviceDepthClipControlFeaturesEXT;
struct PipelineViewportDepthClipControlCreateInfoEXT;

struct PhysicalDevicePrimitiveTopologyListRestartFeaturesEXT;

using FormatFeatureFlags2KHR = FormatFeatureFlags2;
using FormatFeatureBits2KHR = FormatFeatureBits2;
using FormatProperties3KHR = FormatProperties3;

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

struct PhysicalDeviceExtendedDynamicState2FeaturesEXT;


#ifdef VK_USE_PLATFORM_SCREEN_QNX
using ScreenSurfaceCreateFlagsQNX = Flags<DummyEnum>;

struct ScreenSurfaceCreateInfoQNX;

#endif //VK_USE_PLATFORM_SCREEN_QNX

struct PhysicalDeviceColorWriteEnableFeaturesEXT;
struct PipelineColorWriteCreateInfoEXT;

struct PhysicalDeviceImageViewMinLodFeaturesEXT;
struct ImageViewMinLodCreateInfoEXT;

struct PhysicalDeviceMultiDrawFeaturesEXT;
struct PhysicalDeviceMultiDrawPropertiesEXT;
struct MultiDrawInfoEXT;
struct MultiDrawIndexedInfoEXT;

struct PhysicalDeviceBorderColorSwizzleFeaturesEXT;
struct SamplerBorderColorComponentMappingCreateInfoEXT;

struct PhysicalDevicePageableDeviceLocalMemoryFeaturesEXT;

using PhysicalDeviceMaintenance4FeaturesKHR = PhysicalDeviceMaintenance4Features;
using PhysicalDeviceMaintenance4PropertiesKHR = PhysicalDeviceMaintenance4Properties;
using DeviceBufferMemoryRequirementsKHR = DeviceBufferMemoryRequirements;
using DeviceImageMemoryRequirementsKHR = DeviceImageMemoryRequirements;
struct PhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM;
struct PhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM;
struct SubpassFragmentDensityMapOffsetEndInfoQCOM;

struct PhysicalDeviceLinearColorAttachmentFeaturesNV;


} // namespace vk

// The specification (vk.xml) itself is published under the following license:

// Copyright 2015-2022 The Khronos Group Inc.
// SPDX-License-Identifier: Apache-2.0 OR MIT
    

