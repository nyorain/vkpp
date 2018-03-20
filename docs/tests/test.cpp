#include <vkpp/vulkan.hpp>

int main() {
	vk::ApplicationInfo appInfo ("vkpp-test", 1, "vkpp", 1, VK_API_VERSION_1_1);

	vk::InstanceCreateInfo instanceInfo;
	instanceInfo.pApplicationInfo = &appInfo;

	auto instance = vk::createInstance(instanceInfo);
	vk::destroyInstance(instance);
}
