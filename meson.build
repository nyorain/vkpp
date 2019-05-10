project('vkpp', ['c', 'cpp'],
	license: 'BSL',
	version: '1.1.85',
	meson_version: '>=0.42',
	default_options: ['cpp_std=c++1z'])

test = get_option('tests')
gen = get_option('regen')


if gen
# codegen executable
  codegen_src = [
	  'src/main.cpp',
	  'src/output.cpp',
	  'src/registry.cpp',
	  'src/pugixml/pugixml.cpp']

  codegen_inc = include_directories('src')
  vk_codegen = executable('vk-codegen',
	  codegen_src,
	  native: true, # allow generation on cross compilation
	  include_directories: codegen_inc)
endif

spec = files('vk.xml')
subdir('include/vkpp')

vkpp_lib = library('vkpp',
	sources: 'src/vkpp.cpp',
	dependencies: dependency('vulkan', required: true),
	include_directories: include_directories('include'),
	install: true)

vkpp_dep = declare_dependency(
	version: meson.project_version(),
	link_with: vkpp_lib,
	dependencies: dependency('vulkan', required: true),
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
	description: 'Modern C++ vulkan api')
