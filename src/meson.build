sources = [ 'main.c', 'str_algo.c', 'array.c', 'trivial/lineptr.c' ]

executable('calgo', sources, include_directories: inc)
static_lib = static_library('stralgo', sources: ['str_algo.c'], include_directories: inc)
trivial_lib = static_library('trivial', sources: ['trivial/lineptr.c'], include_directories: inc)
