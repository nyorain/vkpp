outputs = [
	'functions.hpp',
	'fwd.hpp',
	'structs.hpp',
	'enums.hpp',
	'vulkan.hpp']

if gen
	# custom target
	vk_headers = custom_target('vk-headers',
		input: spec,
		output: outputs,
		install: true,
		install_dir: 'include/vkpp',
		command: [vk_codegen, '@INPUT@', '@OUTDIR@'])
else
	vk_headers = []
endif

# install subdir
install_subdir('.', install_dir: 'include/vkpp')
