project('vkpp', ['c', 'cpp'],
	license: 'BSL',
	version: '0.1.0',
	meson_version: '>=0.42',
	default_options: ['cpp_std=c++1z'])

codegen = get_option('version')
test = get_option('tests')

# codegen executable
codegen_src = [
	'src/main.cpp',
	'src/output.cpp',
	'src/registry.cpp',
	'src/pugixml/pugixml.cpp']

codegen_inc = include_directories('src')

defs = []
if codegen == '1.0.0'
	defs += '-DVKPP_OLD_LENGTH_PARAM=1'
	defs += '-DVKPP_DEBUG_REPORT_STYPE_FIX=1'
	defs += '-DVKPP_NO_VALUES_STRUCTURE_TYPE=1'
	defs += '-DVKPP_FEATURE_NAMES="VK_VERSION_1_0"'
	spec = files('specs/vk-1-0-0.xml')
elif codegen == '1.0.20'
	defs += '-DVKPP_OLD_LENGTH_PARAM=1'
	defs += '-DVKPP_NO_VALUES_STRUCTURE_TYPE=1'
	defs += '-DVKPP_FEATURE_NAMES="VK_VERSION_1_0"'
	spec = files('specs/vk-1-0-20.xml')
elif codegen == '1.0.40'
	defs += '-DVKPP_NO_VALUES_STRUCTURE_TYPE=1'
	defs += '-DVKPP_FEATURE_NAMES="VK_VERSION_1_0"'
	spec = files('specs/vk-1-0-40.xml')
elif codegen == '1.0.60'
	defs += '-DVKPP_FEATURE_NAMES="VK_VERSION_1_0"'
	spec = files('specs/vk-1-0-60.xml')
elif codegen == '1.1.70'
	defs += '-DVKPP_FEATURE_NAMES="VK_VERSION_1_1,VK_VERSION_1_0"'
	spec = files('specs/vk-1-1-70.xml')
else
	error('Invalid/unsupported vulkan spec version')
endif

vk_codegen = executable('vk-codegen',
	codegen_src,
	cpp_args: defs,
	include_directories: codegen_inc)

subdir('include/vkpp')

vkpp_dep = declare_dependency(
	version: meson.project_version(),
	include_directories: include_directories('include'),
	sources: vk_headers)

if test
	vulkan_dep = dependency('vulkan')
	test('basic', executable('basic',
		'docs/tests/test.cpp',
		dependencies: [vkpp_dep, vulkan_dep]))
endif

# pkgconfig
# test the packageconfig with an external project
pkg = import('pkgconfig')
pkg_dirs = ['.']
pkg.generate(
	name: 'vkpp',
	requires: ['vulkan'],
	filebase: 'vkpp',
	subdirs: pkg_dirs,
	version: meson.project_version(),
	description: 'C++ vulkan api generator')
