outputs = [
	'dispatch.cpp',
	'functions.hpp',
	'fwd.hpp',
	'structs.hpp',
	'enums.hpp',
	'dispatch.hpp',
	'names.hpp',
	'rawf.hpp',
]

iheaders = [
	'call.hpp',
	'vulkan.hpp',
	'flags.hpp',
	'span.hpp',
	'handle.hpp',
]

dispatchcpp = files('dispatch.cpp')
vk_headers_src = []

if gen
	# custom target
	vk_headers = custom_target('vk-headers',
		input: spec,
		output: outputs,
		install: true,
		install_dir: 'include/vkpp',
		command: [vk_codegen, '@INPUT@', '@OUTDIR@'])
	dispatchcpp = vk_headers[0]
	vk_headers_src = vk_headers[1] # skip dispatch.cpp
else
	iheaders += outputs # install given ones
endif

# install headers
install_headers(iheaders, subdir: 'vkpp')
