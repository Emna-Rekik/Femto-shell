CC= gcc
CFLAGS= -std=c11 -O0 -Wall -g
Path:= ./Femto_shell_library/

Femto_shell_1st_extention: $(Path)rand.o $(Path)fact.o $(Path)fib.o Femto_shell_1st_extention.o 
	$(CC)  Femto_shell_1st_extention.o $(Path)rand.o $(Path)fact.o $(Path)fib.o -o Femto_shell_1st_extention
rand.o: rand.c
	$(CC) -c $(Path)rand.c $(CFLAGS)
fact.o: fact.c
	$(CC) -c $(Path)fact.c $(CFLAGS)
fib.o: fib.c
	$(CC) -c $(Path)fib.c $(CFLAGS)
Femto_shell_1st_extention.o: Femto_shell_1st_extention.c $(Path)mymath.h
	$(CC) -c -I $(Path)  Femto_shell_1st_extention.c $(CFLAGS)
	
clean: 
	-@rm -f $(Path)*.o
	-@rm -f *.o
