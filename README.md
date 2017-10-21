C++ vulkan api generator
========================

Generates a C++ api from the vulkan spec.
__Comparison__ to [vulkan-hpp](https://github.com/KhronosGroup/Vulkan-Hpp):

- Created with simplicity and compile-time in mind, more lightweight
	- does NOT have a monolithic almost 30K LOC header
	- splits usage into multiple headers, which allows you to
	  e.g. only use the forward-declarations (less than 1K LOC) in
	  your public headers
	- fewer features
		- does not model everything object-oriented
		- no automatic 'to_string' functions for enums
		- probably less sophisticated error handling
- Does only offer real advantages
	- putting everything in a namespace
	- typesafe enums
	- automatic critical error checking
	- structure constructors (sType settings, default initialization)
	- 'vectorization' of functions
		- ```vk::queueSubmit(queue, {info1, info2, info3}, fence)``` is valid
- Disadvantage: not shipped with vulkan sdk/vulkan package
	- this means you might get issues with version compatibilities
	  using this api (working on it...)

If you need one of the not supported features mentioned above, check
out vulkan-hpp.
Issue reports, contributions and suggestions appreciated!