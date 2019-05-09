- clean up (rename) config macros (CHECK_THROW instead of CALL_THROW)
- git hooks to always include latest output?
	- `cp build/vkpp/include/* include/vkpp/`
- don't output all extensions. Only required (via settings) ones
- currently sometimes an enum has multiple times the same extension
  entry. Come up with something better than the unordered_map
  in the output generator.
- rework/update error handling
	- don't use vpp_call by default?
	- give caller chance to handle error (without exception!)
- better feature/extension dependency/requirement handling
- we could make the struct constructors constexpr. Not sure if any use for
  it though
