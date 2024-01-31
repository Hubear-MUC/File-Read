File Read 0.3
-------------

Reads in the first 10 bytes of the content of a file specified as argument at the program invocation and shows the first 10 bytes on the screen (terminal).

Just invoke like

  fread filename
  
after compilation.

If you chose another name for the executable file than "fread" use the name you chose for the invocation.

Because the program does not read in the complete file but only the first
10 bytes the version number will be minor, thus 0.3

There was no code space left to implement some error handling in case the
file is too big for the array z, also not for manual memory allocation.


Changes:
--------

Version 0.3

The file name is not hardcoded anymore to "d.d", now it can be given as an
argument when invoking the program.
If no file name is given, the program aborts without reading in and showing
file content.


Version 0.2

The code was restructured to make it readable more clearly.
Before everything of code for providing the results was placed in one single
line.

