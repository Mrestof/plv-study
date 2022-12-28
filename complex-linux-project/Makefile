# vi: foldlevel=42

default:

clean-both: clean-calc clean-convert

# task1 instructions: {{{
task1_srcs := task1/math_functions.c task1/user_input.c
task1_objs := math_functions.o user_input.o

calc: task1/main.c libcalc.a
	gcc task1/main.c -L . -l calc -o calc

libcalc.a: ${task1_srcs}
	gcc -Wall -Wextra -c ${task1_srcs}
	ar -rc $@ ${task1_objs}
	ranlib $@

clean-calc:
	rm -f calc libcalc.a ${task1_objs}
# }}}

# task2 instructions: {{{
both-convert: lower upper

lower upper: lib-install
	gcc task2/$@.c -l convert -o $@

lib-install: libconvert.so
	[ ! -f /usr/lib/libconvert.so ] && cp libconvert.so /usr/lib/
	chmod 0755 /usr/lib/libconvert.so
	ldconfig

libconvert.so:
	gcc -Wall -Wextra -fpic -c task2/convert.c
	gcc -shared convert.o -o libconvert.so

clean-convert:
	rm -f /usr/lib/libconvert.so convert.o libconvert.so lower upper
# }}}
