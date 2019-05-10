#define VKPP_DYNAMIC_DISPATCH
#include <vkpp/vulkan.hpp>
#include <cstdio>

int main() {
	auto version = vk::enumerateInstanceVersion();
	std::printf("enumarted instance version: %d.%d.%d\n",
		VK_VERSION_MAJOR(version),
		VK_VERSION_MINOR(version),
		VK_VERSION_PATCH(version));

	vk::ApplicationInfo appInfo ("vkpp-test", 1, "vkpp", 1, VK_API_VERSION_1_1);

	vk::InstanceCreateInfo instanceInfo;
	instanceInfo.pApplicationInfo = &appInfo;

	auto instance = vk::createInstance(instanceInfo);
	vk::dispatch.init(instance); // without this it fails for dynamic dispatch
	vk::destroyInstance(instance);
}
