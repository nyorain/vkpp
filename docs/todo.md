- support per-device dispatch; or at least loading functions into
  dispatch for a device
- clean up (rename) config macros (CHECK_THROW instead of CALL_THROW)
	- support generating both, throwing an non-throwing functions
- don't output all extensions. Only required (via settings) ones
- currently sometimes an enum has multiple times the same extension
  entry. Come up with something better than the unordered_map
  in the output generator.
- rework/update error handling
	- don't use vpp_call by default?
	- give caller chance to handle error (without exception!)
- better feature/extension dependency/requirement handling
- make the struct constructors constexpr?
