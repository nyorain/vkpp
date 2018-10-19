- git hooks to always include latest output
	- `cp build/vkpp/include/* include/vkpp/`
- don't output all extensions. Only required (via settings) ones
- currently sometimes an enum has multiple times the same extension
  entry. Come up with something better than the unordered_map
  in the output generator.
- rework/update error handling
	- don't use vpp_call by default?
	- give caller chance to handle error (without exception!)
- better feature/extension dependency/requirement handling
- automatically detect installed version (submit meson patch if needed on
  some platforms) and generate for the last matching version as default.
