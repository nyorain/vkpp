- fix output bugs
	- fix android,metal struct fwd declarations
- all the reinterpret_cast'ing at the moment is undefined behaviour
  strictly speaking (only of pod types and only directly before/after
  vulkan lib interaction though). We should probably replace it
  with something `bit_cast` like nontheless
- rework/update error handling
	- give caller change to handle error, some functions currently
	  just swallow returned vk::Result. Use ValueResult<T> type
- support per-device dispatch; or at least loading functions into
  dispatch for a device
  	- per device dispatch probably not that easily possible

- allow to not link to vulkan at all by using dlsym (or similar) in
  dispatch for initial addresses. Afterwards use the loaded
  this->vkGetProcAddr instead of the vulkan one!
- move dispatch.hpp loading to vkpp.cpp?
- use meson option to determine whether to build library?
- use vk::call instead of custom casting in functions.hpp?
	- probably bad idea though, uses template for each call
- currently sometimes an enum has multiple times the same extension
  entry. Come up with something better than the unordered_map
  in the output generator.
- better feature/extension dependency/requirement handling
- make the struct constructors constexpr?
- clean up (rename) config macros (CHECK_THROW instead of CALL_THROW)
	- support generating both, throwing an non-throwing functions
- don't output all extensions. Only required (via settings) ones
