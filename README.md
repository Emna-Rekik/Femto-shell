## Femto_shell Assignment #1

Write a shell in c language that echoes any command entered by the user. The shell will have only one built-in command "exit". If the user entered "exit", the shell will reply with "Good Bye" and terminate.

---
#### Compilation command
---
```
$ gcc Femto_shell.c -o Femto_shell
```
## Femto_shell_1st_extention Assignment #2

Extend your Femto Shell with the following three builtin commands:

rand : this command will generate a random number and print it to the user.

fact: this command calculates the factorial of the number entered by the user.

fib: this command will print the fibonacci sequence of the number entered by the user.
- Implement a separate function for each command in a separate file.
- Create header files for these functions.
- Compile these files and create a static library including them and then use this library in your program.
- Compile these files and create a dynamic library including them and then use this library in your program.

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
![exec](https://user-images.githubusercontent.com/89909599/192054871-d84c5056-d3d4-4dec-96e6-dfc44cc2045e.png)

## Femto_shell_1st_extention_makefile Assignment #3

---
#### Build the progarm using the makefile
---
Use makefile(s) to build the artifacts of assignment 2  (executable, static lib, dynamic lib, ..)
```
$ make Femto_with_dynamic_lib
OR
$ make Femto_with_static_lib
```
