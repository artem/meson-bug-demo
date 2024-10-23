project('broken cmake includes', 'c')

cmake = import('cmake')

meow_proj = cmake.subproject('meowmeow')
meow_lib = meow_proj.dependency('libmeow')

executable('bug', files('test.c'), dependencies : meow_lib)
