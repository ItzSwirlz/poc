project('libxml2', 'c',
  version : '0.1',
  default_options : ['warning_level=3'])

xml2 = dependency('libxml-2.0')

exe = executable('poc', 'poc.c',
  install : true, dependencies : xml2)

test('basic', exe)
