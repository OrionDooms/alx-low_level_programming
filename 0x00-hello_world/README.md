0. Preprocessor
Write a script that runs a C file through the preprocessor and save the result into another file.

The C file name will be saved in the variable $CFILE
The output should be saved in the file c

1.create a main.c and insert the example text in it.
2.Then export CFILE=main.c
3.created 0-preprocessor and in insert a compiling instruction
 gcc -E $CFILE -o c
4.Run ./0-preprocessor
5.c file would output the result
