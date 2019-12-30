
3RDPARTY_PATH         = ${CURDIR}/3rdparty
LIBMAKEFILE_PATH      = ${3RDPARTY_PATH}/libmakefile

subdir-y = \
	3rdparty \
	doc \
	src \
	test

3rdparty_makeflags-y = \
	LIBMAKEFILE_PATH=${LIBMAKEFILE_PATH}

doc_makeflags-y = \
	LIBMAKEFILE_PATH=${LIBMAKEFILE_PATH}

src_makeflags-y = \
	LIBMAKEFILE_PATH=${LIBMAKEFILE_PATH}

src_depends-y = \
	3rdparty

test_makeflags-y = \
	LIBMAKEFILE_PATH=${LIBMAKEFILE_PATH}

test_depends-y = \
	3rdparty \
	src

include ${LIBMAKEFILE_PATH}/Makefile.lib
