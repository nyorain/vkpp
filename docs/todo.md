- names.hpp: Fix special member for flags.
  Something like "all" should probably never appear?
  or detect that special case and return just "all"?
- better feature/extension dependency/requirement handling
	- basically: ifdef-out all extensions, features, versions.
	  That way, the vkpp header will always adapt to the vulkan.h header
	  present. See volk loader

- ternary operator *does* use lazy eval of arguments
  we can probably remove half the macros and instead add a
  forceDispatch argument to it
- fix output bugs
	- fix android,metal struct fwd declarations
- all the reinterpret_cast'ing at the moment is undefined behaviour
  strictly speaking (only of pod types and only directly before/after
  vulkan lib interaction though). We should probably replace it
  with something `bit_cast` like nontheless
- improve error handling?
	- give caller change to handle error, some functions currently
	  just swallow returned vk::Result. Use ValueResult<T> type

- use meson option to determine whether to build library?
- currently sometimes an enum has multiple times the same extension
  entry. Come up with something better than the unordered_map
  in the output generator.
- clean up (rename) config macros (CHECK_THROW instead of CALL_THROW)
	- support generating both, throwing an non-throwing functions
- don't output all extensions. Only required (via settings) ones

---

# Done 
error rework:

- usually it's enough if functions simply throw on error
	- but even then, it's sometimes requires to get the result.
	  Since there are also non-error cases.
- sometimes one expects an error/non-success return though.
  making the function throw in that case is weird.
  	- this can't really be decided in general using a define, should
	  rather be decided on per-function basis

so: always provide two overloads, one throwing and one non-throwing?
	- for now, only the non-throwing is required to return the result,
	  the throwing can still swallow it, should be fine. If you are interested
	  in the result in any way, just don't use the throwing version.
- How to combine return values with a result?

```
template<typename T>
struct [[nodiscard]] ValueResult {
	T value;
	Result result;

	T unwrap() {
		if(success(result)) {
			return value;
		}

		throw VulkanError(result);
	}
};
```

Two overloads:

```
uint32_t acquireNextImageKHR(Device device, SwapchainKHR swapchain, uint64_t timeout, Semaphore semaphore, Fence fence);

namespace ne {
	ValueResult<uint32_t> acquireNextImageKHR(Device device, SwapchainKHR swapchain, uint64_t timeout, Semaphore semaphore, Fence fence);
}
```

But (for some other functions) we have to also make an overload where
no value is returned, instead it's passed vulkan-style:

```
vk::Result acquireNextImageKHR(Device device, SwapchainKHR swapchain, uint64_t timeout, Semaphore semaphore, Fence fence, uint32_t&);
```

Maybe just make that the non-throwing version?
But how separate throwing from non-throwing when there is no output parameter?
Maybe always just provide one function that matches the original signature
in vk::raw? And that does not do any exception checking?
