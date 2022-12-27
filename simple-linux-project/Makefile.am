AUTOMAKE_OPTIONS = foreign
bin_PROGRAMS = helloworld
helloworld_SOURCES = main.c func.c header.h

clean-all: uninstall
	find . \
		-not -name '*.c' \
		-and -not -name '*.h' \
		-and -not -name '*.am' \
		-and -not -name '*.ac' \
		-and -not -name 'README.md' \
		-exec rm -rf {} \;
