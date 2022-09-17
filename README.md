## Femto-shell Assignment #1

---
#### compilation command
---
```
$ gcc Femto_shell.c -o Femto_shell
```
## Femto_shell_1st_extention Assignment #2
---
#### Create a static library and use it in the program
---
```
Navigate to the library folder named "Femto_shell_library" and execute these commands:
$ gcc -c *.c
$	ar -rs libstaticmath.a *.o

Go back to the project folder and execute these commands:
$ gcc -c Femto_shell_1st_extention.c -I ./Femto_shell_library/
$	gcc Femto_shell_1st_extention.o -o Femto_shell_1st_extention_static --static -lstaticmath -L ./Femto_shell_library

$ ./Femto_shell_1st_extention_static
```
