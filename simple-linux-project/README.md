# Simple Linux Project

## Putting it all together

1. Generate an m4 environment for "autotools" to use:
   - `aclocal`
2. Run `autoconf` to turn our "configure.ac" into a configure script, and "automake" to turn our "Makefile.am" into a "Makefile.in":
   - `autoconf`, `automake --add-missing`
3. Generate "Makefile" from "Makefile.in":
   - `./configure`
4. Test that the distribution tarball can be installed under a variety of conditions:
   - `make distcheck`
5. Install the program:
   > must be run as root
   - `make install`
6. Clean the system from all built objects:
   > must be run as root
   - `make clean-all`
