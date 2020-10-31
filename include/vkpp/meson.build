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

if gen
	# custom target
	vk_headers = custom_target('vk-headers',
		input: spec,
		output: outputs,
		install: true,
		install_dir: 'include/vkpp',
		command: [vk_codegen, '@INPUT@', '@OUTDIR@'])
	dispatchcpp = vk_headers[0]
else
	vk_headers = [] # no custom target
	iheaders += outputs # install given ones
endif

# install headers
install_headers(iheaders, subdir: 'vkpp')
