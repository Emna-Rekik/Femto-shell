## Femto-shell Assignment #1

---
#### Compilation command
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
$ ar -rs libstaticmath.a *.o

Go back to the project folder and execute these commands:
$ gcc -c Femto_shell_1st_extention.c -I ./Femto_shell_library/
$ gcc Femto_shell_1st_extention.o -o Femto_shell_1st_extention_static --static -lstaticmath -L ./Femto_shell_library

$ ./Femto_shell_1st_extention_static
```
---
#### Create a dynamic library and use it in the program
---
```
Navigate to the library folder named "Femto_shell_library" and execute these commands:
$ gcc -c -fPIC *.c
$ gcc -shared *.o -o libdynamicmath.so

Go back to the project folder and execute these commands:
$ gcc -c Femto_shell_1st_extention.c -I ./Femto_shell_library/
$ gcc Femto_shell_1st_extention.o -o Femto_shell_1st_extention_dynamic -ldynamicmath -L ./Femto_shell_library/

$ export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/home/emna/Linux_Study_Group/Femto_shell_1st_extention/Femto_shell_library

$ ./Femto_shell_1st_extention_dynamic
```
![Screenshot from 2022-09-17 17-16-43](https://user-images.githubusercontent.com/89909599/190866561-86677ee8-2d3e-4354-804d-569fb8ef7174.png)

## Femto_shell_1st_extention_makefile Assignment #3

---
#### Build the progarm using the makefile
---
```
$ make
```
