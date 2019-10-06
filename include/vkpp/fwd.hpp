// Copyright (c) 2019 nyorain
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

// Automaitcally generated vulkan header, see nyorain/vkpp
// Do not edit manually, rather edit the codegen files.

#pragma once
#include <vkpp/handle.hpp> // VK_DEFINE_HANDLE
#include <vkpp/flags.hpp>
#include <cstddef>

#include <vulkan/vk_platform.h>

// Generated for vulkan version: 1.1.123

// Utility forward declarations
namespace nytl {

#ifndef NYTL_INCLUDE_FWD_SPAN
#define NYTL_INCLUDE_FWD_SPAN
	constexpr const std::ptrdiff_t dynamic_extent = -1;
	template<typename T, std::ptrdiff_t N = dynamic_extent> class span;
	template<typename T, std::ptrdiff_t N = dynamic_extent>
	using Span = span<T, N>;
#endif // fwd guard

} // namespace nytl

namespace vk {

using nytl::Span; // span.hpp
using nytl::Flags; // flags.hpp

enum class DummyEnum : int32_t {};

constexpr auto maxDeviceGroupSize = 32;
constexpr auto maxPhysicalDeviceNameSize = 256;
constexpr auto uuidSize = 16;
constexpr auto maxMemoryTypes = 32;
constexpr auto maxMemoryHeaps = 16;
constexpr auto luidSize = 8;
constexpr auto queueFamilyExternal = (~0U-1);

VK_DEFINE_NON_DISPATCHABLE_HANDLE(Buffer)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(DeviceMemory)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(Image)
VK_DEFINE_HANDLE(Device)
VK_DEFINE_HANDLE(CommandBuffer)
VK_DEFINE_HANDLE(PhysicalDevice)
VK_DEFINE_HANDLE(Instance)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(CommandPool)
VK_DEFINE_HANDLE(Queue)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(SamplerYcbcrConversion)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(DescriptorUpdateTemplate)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(DescriptorSetLayout)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(PipelineLayout)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(DescriptorSet)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(Sampler)

using Bool32 = uint32_t;
using DeviceSize = uint64_t;

enum class Result : int32_t;
enum class StructureType : int32_t;
enum class ShaderStageBits : int32_t;
enum class SubgroupFeatureBits : int32_t;
enum class PeerMemoryFeatureBits : int32_t;
enum class MemoryAllocateBits : int32_t;
enum class ImageAspectBits : int32_t;
enum class SparseImageFormatBits : int32_t;
enum class PhysicalDeviceType : int32_t;
enum class SampleCountBits : int32_t;
enum class FormatFeatureBits : int32_t;
enum class Format : int32_t;
enum class ImageType : int32_t;
enum class ImageTiling : int32_t;
enum class ImageUsageBits : int32_t;
enum class ImageCreateBits : int32_t;
enum class QueueBits : int32_t;
enum class MemoryPropertyBits : int32_t;
enum class MemoryHeapBits : int32_t;
enum class PointClippingBehavior : int32_t;
enum class TessellationDomainOrigin : int32_t;
enum class DeviceQueueCreateBits : int32_t;
enum class SamplerYcbcrModelConversion : int32_t;
enum class SamplerYcbcrRange : int32_t;
enum class ComponentSwizzle : int32_t;
enum class ChromaLocation : int32_t;
enum class Filter : int32_t;
enum class SystemAllocationScope : int32_t;
enum class InternalAllocationType : int32_t;
enum class DescriptorUpdateTemplateType : int32_t;
enum class DescriptorType : int32_t;
enum class PipelineBindPoint : int32_t;
enum class ExternalMemoryHandleTypeBits : int32_t;
enum class ExternalMemoryFeatureBits : int32_t;
enum class BufferCreateBits : int32_t;
enum class BufferUsageBits : int32_t;
enum class ExternalFenceHandleTypeBits : int32_t;
enum class ExternalFenceFeatureBits : int32_t;
enum class FenceImportBits : int32_t;
enum class SemaphoreImportBits : int32_t;
enum class ExternalSemaphoreHandleTypeBits : int32_t;
enum class ExternalSemaphoreFeatureBits : int32_t;
enum class DescriptorSetLayoutCreateBits : int32_t;

using ShaderStageFlags = Flags<ShaderStageBits>;
using SubgroupFeatureFlags = Flags<SubgroupFeatureBits>;
using PeerMemoryFeatureFlags = Flags<PeerMemoryFeatureBits>;
using MemoryAllocateFlags = Flags<MemoryAllocateBits>;
using ImageAspectFlags = Flags<ImageAspectBits>;
using SparseImageFormatFlags = Flags<SparseImageFormatBits>;
using SampleCountFlags = Flags<SampleCountBits>;
using FormatFeatureFlags = Flags<FormatFeatureBits>;
using ImageUsageFlags = Flags<ImageUsageBits>;
using ImageCreateFlags = Flags<ImageCreateBits>;
using QueueFlags = Flags<QueueBits>;
using MemoryPropertyFlags = Flags<MemoryPropertyBits>;
using MemoryHeapFlags = Flags<MemoryHeapBits>;
using CommandPoolTrimFlags = Flags<DummyEnum>;
using DeviceQueueCreateFlags = Flags<DeviceQueueCreateBits>;
using DescriptorUpdateTemplateCreateFlags = Flags<DummyEnum>;
using ExternalMemoryHandleTypeFlags = Flags<ExternalMemoryHandleTypeBits>;
using ExternalMemoryFeatureFlags = Flags<ExternalMemoryFeatureBits>;
using BufferCreateFlags = Flags<BufferCreateBits>;
using BufferUsageFlags = Flags<BufferUsageBits>;
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
struct Offset2D;
struct Extent2D;
struct Rect2D;
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
struct MemoryRequirements;
struct MemoryRequirements2;
struct Extent3D;
struct SparseImageFormatProperties;
struct SparseImageMemoryRequirements;
struct SparseImageMemoryRequirements2;
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
struct AllocationCallbacks;
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

using MemoryRequirements2KHR = MemoryRequirements2;
using PhysicalDeviceVariablePointerFeatures = PhysicalDeviceVariablePointersFeatures;
using PhysicalDeviceShaderDrawParameterFeatures = PhysicalDeviceShaderDrawParametersFeatures;
constexpr auto lodClampNone = 1000.0f;
constexpr auto remainingMipLevels = (~0U);
constexpr auto remainingArrayLayers = (~0U);
constexpr auto wholeSize = (~0ULL);
constexpr auto attachmentUnused = (~0U);
constexpr auto queueFamilyIgnored = (~0U);
constexpr auto subpassExternal = (~0U);
constexpr auto maxExtensionNameSize = 256;
constexpr auto maxDescriptionSize = 256;

VK_DEFINE_NON_DISPATCHABLE_HANDLE(Semaphore)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(Fence)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(Event)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(QueryPool)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(BufferView)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(ImageView)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(ShaderModule)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(PipelineCache)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(RenderPass)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(Pipeline)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(DescriptorPool)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(Framebuffer)

using SampleMask = uint32_t;

enum class PipelineCacheHeaderVersion : int32_t;
enum class PipelineStageBits : int32_t;
enum class SparseMemoryBindBits : int32_t;
enum class FenceCreateBits : int32_t;
enum class QueryType : int32_t;
enum class QueryPipelineStatisticBits : int32_t;
enum class QueryResultBits : int32_t;
enum class SharingMode : int32_t;
enum class ImageLayout : int32_t;
enum class ImageViewCreateBits : int32_t;
enum class ImageViewType : int32_t;
enum class ShaderModuleCreateBits : int32_t;
enum class PipelineCreateBits : int32_t;
enum class PipelineShaderStageCreateBits : int32_t;
enum class VertexInputRate : int32_t;
enum class PrimitiveTopology : int32_t;
enum class PolygonMode : int32_t;
enum class CullModeBits : int32_t;
enum class FrontFace : int32_t;
enum class CompareOp : int32_t;
enum class StencilOp : int32_t;
enum class LogicOp : int32_t;
enum class BlendFactor : int32_t;
enum class BlendOp : int32_t;
enum class ColorComponentBits : int32_t;
enum class DynamicState : int32_t;
enum class SamplerCreateBits : int32_t;
enum class SamplerMipmapMode : int32_t;
enum class SamplerAddressMode : int32_t;
enum class BorderColor : int32_t;
enum class DescriptorPoolCreateBits : int32_t;
enum class FramebufferCreateBits : int32_t;
enum class RenderPassCreateBits : int32_t;
enum class AttachmentDescriptionBits : int32_t;
enum class AttachmentLoadOp : int32_t;
enum class AttachmentStoreOp : int32_t;
enum class SubpassDescriptionBits : int32_t;
enum class AccessBits : int32_t;
enum class DependencyBits : int32_t;
enum class CommandPoolCreateBits : int32_t;
enum class CommandPoolResetBits : int32_t;
enum class CommandBufferLevel : int32_t;
enum class CommandBufferUsageBits : int32_t;
enum class QueryControlBits : int32_t;
enum class CommandBufferResetBits : int32_t;
enum class StencilFaceBits : int32_t;
enum class IndexType : int32_t;
enum class SubpassContents : int32_t;
enum class ObjectType : int32_t;
enum class VendorId : int32_t;

using InstanceCreateFlags = Flags<DummyEnum>;
using DeviceCreateFlags = Flags<DummyEnum>;
using PipelineStageFlags = Flags<PipelineStageBits>;
using MemoryMapFlags = Flags<DummyEnum>;
using SparseMemoryBindFlags = Flags<SparseMemoryBindBits>;
using FenceCreateFlags = Flags<FenceCreateBits>;
using SemaphoreCreateFlags = Flags<DummyEnum>;
using EventCreateFlags = Flags<DummyEnum>;
using QueryPoolCreateFlags = Flags<DummyEnum>;
using QueryPipelineStatisticFlags = Flags<QueryPipelineStatisticBits>;
using QueryResultFlags = Flags<QueryResultBits>;
using BufferViewCreateFlags = Flags<DummyEnum>;
using ImageViewCreateFlags = Flags<ImageViewCreateBits>;
using ShaderModuleCreateFlags = Flags<ShaderModuleCreateBits>;
using PipelineCacheCreateFlags = Flags<DummyEnum>;
using PipelineCreateFlags = Flags<PipelineCreateBits>;
using PipelineShaderStageCreateFlags = Flags<PipelineShaderStageCreateBits>;
using PipelineVertexInputStateCreateFlags = Flags<DummyEnum>;
using PipelineInputAssemblyStateCreateFlags = Flags<DummyEnum>;
using PipelineTessellationStateCreateFlags = Flags<DummyEnum>;
using PipelineViewportStateCreateFlags = Flags<DummyEnum>;
using PipelineRasterizationStateCreateFlags = Flags<DummyEnum>;
using CullModeFlags = Flags<CullModeBits>;
using PipelineMultisampleStateCreateFlags = Flags<DummyEnum>;
using PipelineDepthStencilStateCreateFlags = Flags<DummyEnum>;
using PipelineColorBlendStateCreateFlags = Flags<DummyEnum>;
using ColorComponentFlags = Flags<ColorComponentBits>;
using PipelineDynamicStateCreateFlags = Flags<DummyEnum>;
using PipelineLayoutCreateFlags = Flags<DummyEnum>;
using SamplerCreateFlags = Flags<SamplerCreateBits>;
using DescriptorPoolCreateFlags = Flags<DescriptorPoolCreateBits>;
using DescriptorPoolResetFlags = Flags<DummyEnum>;
using FramebufferCreateFlags = Flags<FramebufferCreateBits>;
using RenderPassCreateFlags = Flags<RenderPassCreateBits>;
using AttachmentDescriptionFlags = Flags<AttachmentDescriptionBits>;
using SubpassDescriptionFlags = Flags<SubpassDescriptionBits>;
using AccessFlags = Flags<AccessBits>;
using DependencyFlags = Flags<DependencyBits>;
using CommandPoolCreateFlags = Flags<CommandPoolCreateBits>;
using CommandPoolResetFlags = Flags<CommandPoolResetBits>;
using CommandBufferUsageFlags = Flags<CommandBufferUsageBits>;
using QueryControlFlags = Flags<QueryControlBits>;
using CommandBufferResetFlags = Flags<CommandBufferResetBits>;
using StencilFaceFlags = Flags<StencilFaceBits>;

struct ApplicationInfo;
struct InstanceCreateInfo;
struct DeviceQueueCreateInfo;
struct DeviceCreateInfo;
struct ExtensionProperties;
struct LayerProperties;
struct SubmitInfo;
struct MemoryAllocateInfo;
struct MappedMemoryRange;
struct SparseMemoryBind;
struct SparseBufferMemoryBindInfo;
struct SparseImageOpaqueMemoryBindInfo;
struct ImageSubresource;
struct Offset3D;
struct SparseImageMemoryBind;
struct SparseImageMemoryBindInfo;
struct BindSparseInfo;
struct FenceCreateInfo;
struct SemaphoreCreateInfo;
struct EventCreateInfo;
struct QueryPoolCreateInfo;
struct BufferCreateInfo;
struct BufferViewCreateInfo;
struct ImageCreateInfo;
struct SubresourceLayout;
struct ImageSubresourceRange;
struct ImageViewCreateInfo;
struct ShaderModuleCreateInfo;
struct PipelineCacheCreateInfo;
struct SpecializationMapEntry;
struct SpecializationInfo;
struct PipelineShaderStageCreateInfo;
struct VertexInputBindingDescription;
struct VertexInputAttributeDescription;
struct PipelineVertexInputStateCreateInfo;
struct PipelineInputAssemblyStateCreateInfo;
struct PipelineTessellationStateCreateInfo;
struct Viewport;
struct PipelineViewportStateCreateInfo;
struct PipelineRasterizationStateCreateInfo;
struct PipelineMultisampleStateCreateInfo;
struct StencilOpState;
struct PipelineDepthStencilStateCreateInfo;
struct PipelineColorBlendAttachmentState;
struct PipelineColorBlendStateCreateInfo;
struct PipelineDynamicStateCreateInfo;
struct GraphicsPipelineCreateInfo;
struct ComputePipelineCreateInfo;
struct PushConstantRange;
struct PipelineLayoutCreateInfo;
struct SamplerCreateInfo;
struct DescriptorPoolSize;
struct DescriptorPoolCreateInfo;
struct DescriptorSetAllocateInfo;
struct DescriptorImageInfo;
struct DescriptorBufferInfo;
struct WriteDescriptorSet;
struct CopyDescriptorSet;
struct FramebufferCreateInfo;
struct AttachmentDescription;
struct AttachmentReference;
struct SubpassDescription;
struct SubpassDependency;
struct RenderPassCreateInfo;
struct CommandPoolCreateInfo;
struct CommandBufferAllocateInfo;
struct CommandBufferInheritanceInfo;
struct CommandBufferBeginInfo;
struct BufferCopy;
struct ImageSubresourceLayers;
struct ImageCopy;
struct ImageBlit;
struct BufferImageCopy;
union ClearColorValue;
struct ClearDepthStencilValue;
union ClearValue;
struct ClearAttachment;
struct ClearRect;
struct ImageResolve;
struct MemoryBarrier;
struct BufferMemoryBarrier;
struct ImageMemoryBarrier;
struct RenderPassBeginInfo;
struct DispatchIndirectCommand;
struct DrawIndexedIndirectCommand;
struct DrawIndirectCommand;
struct BaseOutStructure;
struct BaseInStructure;

VK_DEFINE_NON_DISPATCHABLE_HANDLE(SurfaceKHR)

enum class SurfaceTransformBitsKHR : int32_t;
enum class CompositeAlphaBitsKHR : int32_t;
enum class ColorSpaceKHR : int32_t;
enum class PresentModeKHR : int32_t;

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

using DisplayPlaneAlphaFlagsKHR = Flags<DisplayPlaneAlphaBitsKHR>;
using DisplayModeCreateFlagsKHR = Flags<DummyEnum>;
using DisplaySurfaceCreateFlagsKHR = Flags<DummyEnum>;

struct DisplayPropertiesKHR;
struct DisplayModeParametersKHR;
struct DisplayModePropertiesKHR;
struct DisplayModeCreateInfoKHR;
struct DisplayPlaneCapabilitiesKHR;
struct DisplayPlanePropertiesKHR;
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

enum class DebugReportObjectTypeEXT : int32_t;
enum class DebugReportBitsEXT : int32_t;

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

struct PhysicalDeviceTextureCompressionASTCHDRFeaturesEXT;

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
constexpr auto queueFamilyExternalKHR = (~0U-1);

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

struct PhysicalDeviceShaderFloat16Int8FeaturesKHR;

using PhysicalDeviceFloat16Int8FeaturesKHR = PhysicalDeviceShaderFloat16Int8FeaturesKHR;
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

struct PhysicalDeviceImagelessFramebufferFeaturesKHR;
struct FramebufferAttachmentImageInfoKHR;
struct FramebufferAttachmentsCreateInfoKHR;
struct RenderPassAttachmentBeginInfoKHR;

struct AttachmentDescription2KHR;
struct AttachmentReference2KHR;
struct SubpassDescription2KHR;
struct SubpassDependency2KHR;
struct RenderPassCreateInfo2KHR;
struct SubpassBeginInfoKHR;
struct SubpassEndInfoKHR;

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

constexpr auto queueFamilyForeignEXT = (~0U-2);

using MemoryDedicatedRequirementsKHR = MemoryDedicatedRequirements;
using MemoryDedicatedAllocateInfoKHR = MemoryDedicatedAllocateInfo;
VK_DEFINE_NON_DISPATCHABLE_HANDLE(DebugUtilsMessengerEXT)

enum class DebugUtilsMessageSeverityBitsEXT : int32_t;
enum class DebugUtilsMessageTypeBitsEXT : int32_t;

using DebugUtilsMessengerCallbackDataFlagsEXT = Flags<DummyEnum>;
using DebugUtilsMessengerCreateFlagsEXT = Flags<DummyEnum>;
using DebugUtilsMessageSeverityFlagsEXT = Flags<DebugUtilsMessageSeverityBitsEXT>;
using DebugUtilsMessageTypeFlagsEXT = Flags<DebugUtilsMessageTypeBitsEXT>;

struct DebugUtilsObjectNameInfoEXT;
struct DebugUtilsObjectTagInfoEXT;
struct DebugUtilsLabelEXT;
struct DebugUtilsMessengerCallbackDataEXT;
struct DebugUtilsMessengerCreateInfoEXT;

enum class SamplerReductionModeEXT : int32_t;

struct SamplerReductionModeCreateInfoEXT;
struct PhysicalDeviceSamplerFilterMinmaxPropertiesEXT;

struct PhysicalDeviceInlineUniformBlockFeaturesEXT;
struct PhysicalDeviceInlineUniformBlockPropertiesEXT;
struct WriteDescriptorSetInlineUniformBlockEXT;
struct DescriptorPoolInlineUniformBlockCreateInfoEXT;

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
using SparseImageMemoryRequirements2KHR = SparseImageMemoryRequirements2;
struct ImageFormatListCreateInfoKHR;

enum class BlendOverlapEXT : int32_t;

struct PhysicalDeviceBlendOperationAdvancedFeaturesEXT;
struct PhysicalDeviceBlendOperationAdvancedPropertiesEXT;
struct PipelineColorBlendAdvancedStateCreateInfoEXT;

using PipelineCoverageToColorStateCreateFlagsNV = Flags<DummyEnum>;

struct PipelineCoverageToColorStateCreateInfoNV;

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

VK_DEFINE_NON_DISPATCHABLE_HANDLE(ValidationCacheEXT)

enum class ValidationCacheHeaderVersionEXT : int32_t;

using ValidationCacheCreateFlagsEXT = Flags<DummyEnum>;

struct ValidationCacheCreateInfoEXT;
struct ShaderModuleValidationCacheCreateInfoEXT;

enum class DescriptorBindingBitsEXT : int32_t;

using DescriptorBindingFlagsEXT = Flags<DescriptorBindingBitsEXT>;

struct DescriptorSetLayoutBindingFlagsCreateInfoEXT;
struct PhysicalDeviceDescriptorIndexingFeaturesEXT;
struct PhysicalDeviceDescriptorIndexingPropertiesEXT;
struct DescriptorSetVariableDescriptorCountAllocateInfoEXT;
struct DescriptorSetVariableDescriptorCountLayoutSupportEXT;

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

enum class AccelerationStructureTypeNV : int32_t;
enum class RayTracingShaderGroupTypeNV : int32_t;
enum class GeometryTypeNV : int32_t;
enum class GeometryBitsNV : int32_t;
enum class GeometryInstanceBitsNV : int32_t;
enum class BuildAccelerationStructureBitsNV : int32_t;
enum class CopyAccelerationStructureModeNV : int32_t;
enum class AccelerationStructureMemoryRequirementsTypeNV : int32_t;

using GeometryFlagsNV = Flags<GeometryBitsNV>;
using GeometryInstanceFlagsNV = Flags<GeometryInstanceBitsNV>;
using BuildAccelerationStructureFlagsNV = Flags<BuildAccelerationStructureBitsNV>;

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

struct PhysicalDeviceRepresentativeFragmentTestFeaturesNV;
struct PipelineRepresentativeFragmentTestStateCreateInfoNV;

using PhysicalDeviceMaintenance3PropertiesKHR = PhysicalDeviceMaintenance3Properties;
using DescriptorSetLayoutSupportKHR = DescriptorSetLayoutSupport;
struct PhysicalDeviceImageViewImageFormatInfoEXT;
struct FilterCubicImageViewImageFormatPropertiesEXT;

enum class QueueGlobalPriorityEXT : int32_t;

struct DeviceQueueGlobalPriorityCreateInfoEXT;

struct PhysicalDeviceShaderSubgroupExtendedTypesFeaturesKHR;

struct PhysicalDevice8BitStorageFeaturesKHR;

struct ImportMemoryHostPointerInfoEXT;
struct MemoryHostPointerPropertiesEXT;
struct PhysicalDeviceExternalMemoryHostPropertiesEXT;

struct PhysicalDeviceShaderAtomicInt64FeaturesKHR;

enum class PipelineCompilerControlBitsAMD : int32_t;

using PipelineCompilerControlFlagsAMD = Flags<PipelineCompilerControlBitsAMD>;

struct PipelineCompilerControlCreateInfoAMD;

enum class TimeDomainEXT : int32_t;

struct CalibratedTimestampInfoEXT;

struct PhysicalDeviceShaderCorePropertiesAMD;

enum class MemoryOverallocationBehaviorAMD : int32_t;

struct DeviceMemoryOverallocationCreateInfoAMD;

struct PhysicalDeviceVertexAttributeDivisorPropertiesEXT;
struct VertexInputBindingDivisorDescriptionEXT;
struct PipelineVertexInputDivisorStateCreateInfoEXT;
struct PhysicalDeviceVertexAttributeDivisorFeaturesEXT;

#ifdef VK_USE_PLATFORM_GGP

struct PresentFrameTokenGGP;

#endif //VK_USE_PLATFORM_GGP

enum class PipelineCreationFeedbackBitsEXT : int32_t;

using PipelineCreationFeedbackFlagsEXT = Flags<PipelineCreationFeedbackBitsEXT>;

struct PipelineCreationFeedbackEXT;
struct PipelineCreationFeedbackCreateInfoEXT;

constexpr auto maxDriverNameSizeKHR = 256;
constexpr auto maxDriverInfoSizeKHR = 256;

enum class DriverIdKHR : int32_t;

struct ConformanceVersionKHR;
struct PhysicalDeviceDriverPropertiesKHR;

enum class ShaderFloatControlsIndependenceKHR : int32_t;

struct PhysicalDeviceFloatControlsPropertiesKHR;

enum class ResolveModeBitsKHR : int32_t;

using ResolveModeFlagsKHR = Flags<ResolveModeBitsKHR>;

struct SubpassDescriptionDepthStencilResolveKHR;
struct PhysicalDeviceDepthStencilResolvePropertiesKHR;

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
struct QueryPoolCreateInfoINTEL;
struct PerformanceMarkerInfoINTEL;
struct PerformanceStreamMarkerInfoINTEL;
struct PerformanceOverrideInfoINTEL;
struct PerformanceConfigurationAcquireInfoINTEL;

struct PhysicalDeviceVulkanMemoryModelFeaturesKHR;

struct PhysicalDevicePCIBusInfoPropertiesEXT;

struct DisplayNativeHdrSurfaceCapabilitiesAMD;
struct SwapchainDisplayNativeHdrCreateInfoAMD;

#ifdef VK_USE_PLATFORM_FUCHSIA

using ImagePipeSurfaceCreateFlagsFUCHSIA = Flags<DummyEnum>;

struct ImagePipeSurfaceCreateInfoFUCHSIA;

#endif //VK_USE_PLATFORM_FUCHSIA

struct PhysicalDeviceFragmentDensityMapFeaturesEXT;
struct PhysicalDeviceFragmentDensityMapPropertiesEXT;
struct RenderPassFragmentDensityMapCreateInfoEXT;

struct PhysicalDeviceScalarBlockLayoutFeaturesEXT;

struct PhysicalDeviceSubgroupSizeControlFeaturesEXT;
struct PhysicalDeviceSubgroupSizeControlPropertiesEXT;
struct PipelineShaderStageRequiredSubgroupSizeCreateInfoEXT;

enum class ShaderCorePropertiesBitsAMD : int32_t;

using ShaderCorePropertiesFlagsAMD = Flags<ShaderCorePropertiesBitsAMD>;

struct PhysicalDeviceShaderCoreProperties2AMD;

struct PhysicalDeviceCoherentMemoryFeaturesAMD;

struct PhysicalDeviceMemoryBudgetPropertiesEXT;

struct PhysicalDeviceMemoryPriorityFeaturesEXT;
struct MemoryPriorityAllocateInfoEXT;

struct SurfaceProtectedCapabilitiesKHR;

struct PhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV;

using DeviceAddress = uint64_t;

struct PhysicalDeviceBufferDeviceAddressFeaturesEXT;
struct BufferDeviceAddressInfoEXT;
struct BufferDeviceAddressCreateInfoEXT;

using PhysicalDeviceBufferAddressFeaturesEXT = PhysicalDeviceBufferDeviceAddressFeaturesEXT;
struct ImageStencilUsageCreateInfoEXT;

enum class ValidationFeatureEnableEXT : int32_t;
enum class ValidationFeatureDisableEXT : int32_t;

struct ValidationFeaturesEXT;

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

struct PhysicalDeviceUniformBufferStandardLayoutFeaturesKHR;

#ifdef VK_USE_PLATFORM_WIN32_KHR

enum class FullScreenExclusiveEXT : int32_t;

struct SurfaceFullScreenExclusiveInfoEXT;
struct SurfaceCapabilitiesFullScreenExclusiveEXT;
struct SurfaceFullScreenExclusiveWin32InfoEXT;

#endif //VK_USE_PLATFORM_WIN32_KHR

using HeadlessSurfaceCreateFlagsEXT = Flags<DummyEnum>;

struct HeadlessSurfaceCreateInfoEXT;

enum class LineRasterizationModeEXT : int32_t;

struct PhysicalDeviceLineRasterizationFeaturesEXT;
struct PhysicalDeviceLineRasterizationPropertiesEXT;
struct PipelineRasterizationLineStateCreateInfoEXT;

struct PhysicalDeviceHostQueryResetFeaturesEXT;

struct PhysicalDeviceIndexTypeUint8FeaturesEXT;

enum class PipelineExecutableStatisticFormatKHR : int32_t;

struct PhysicalDevicePipelineExecutablePropertiesFeaturesKHR;
struct PipelineInfoKHR;
struct PipelineExecutablePropertiesKHR;
struct PipelineExecutableInfoKHR;
union PipelineExecutableStatisticValueKHR;
struct PipelineExecutableStatisticKHR;
struct PipelineExecutableInternalRepresentationKHR;

struct PhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT;

struct PhysicalDeviceTexelBufferAlignmentFeaturesEXT;
struct PhysicalDeviceTexelBufferAlignmentPropertiesEXT;


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
    

