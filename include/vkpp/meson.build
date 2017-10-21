outputs = [
	'functions.hpp',
	'fwd.hpp',
	'structs.hpp',
	'vulkan.hpp']

# install subdir
install_subdir('.', install_dir: 'include/vkpp')

# custom target
vk_headers = custom_target('vk-headers',
	input: spec,
	output: outputs,
	install: true,
	install_dir: 'include/vkpp',
	command: [vk_codegen, '@INPUT@', '@OUTDIR@'])