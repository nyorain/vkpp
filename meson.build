project('vkpp', ['c', 'cpp'],
	license: 'BSL',
	version: '1.1.108',
	meson_version: '>=0.46',
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

  util_src = [
	  'src/genutil.cpp',
	  'src/registry.cpp',
	  'src/pugixml/pugixml.cpp']
  util_codegen = executable('util-codegen',
	  util_src,
	  native: true,
	  include_directories: codegen_inc)
endif

spec = files('vk.xml')
subdir('include/vkpp')

vkpp_lib = []

if get_option('lib')
	vkpp_lib = library('vkpp',
		sources: dispatchcpp,
		dependencies: dependency('vulkan', required: true),
		include_directories: include_directories('include'),
		install: true)
endif

vkpp_dep = declare_dependency(
	version: meson.project_version(),
	link_with: vkpp_lib,
	sources: vk_headers_src, # skip dispatch.cpp
	dependencies: dependency('vulkan', required: true),
	include_directories: include_directories('include'))

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
	vkpp_lib,
	name: 'vkpp',
	requires: ['vulkan'],
	filebase: 'vkpp',
	subdirs: pkg_dirs,
	version: meson.project_version(),
	description: 'Modern C++ vulkan api')
