CC:= gcc
CFLAGS:= -std=c11 -O0 -Wall -g
LIB_PATH:= ./Femto_shell_library/

Femto_with_dynamic_lib: libdynamicmath.so Femto_shell_1st_extention.o
	$(CC)  Femto_shell_1st_extention.o -o Femto_with_dynamic_lib.run -ldynamicmath -L .
libdynamicmath.so: $(LIB_PATH)rand.o $(LIB_PATH)fact.o $(LIB_PATH)fib.o
	$(CC) -shared $(LIB_PATH)rand.o $(LIB_PATH)fact.o $(LIB_PATH)fib.o -o libdynamicmath.so

Femto_with_static_lib: libstaticmath.a Femto_shell_1st_extention.o 
	$(CC)  Femto_shell_1st_extention.o -o Femto_with_static_lib.run --static -lstaticmath -L .
libstaticmath.a: $(LIB_PATH)rand.o $(LIB_PATH)fact.o $(LIB_PATH)fib.o
	ar -rs libstaticmath.a $(LIB_PATH)rand.o $(LIB_PATH)fact.o $(LIB_PATH)fib.o
	
rand.o: rand.c
	$(CC) -c $(LIB_PATH)rand.c $(CFLAGS)
fact.o: fact.c
	$(CC) -c $(LIB_PATH)fact.c $(CFLAGS)
fib.o: fib.c
	$(CC) -c $(LIB_PATH)fib.c $(CFLAGS)
Femto_shell_1st_extention.o: Femto_shell_1st_extention.c $(LIB_PATH)mymath.h 
	$(CC) -c Femto_shell_1st_extention.c -I $(LIB_PATH) $(CFLAGS)

.PHONY : clean	
clean: 
	-@rm -f $(LIB_PATH)*.o
	-@rm -f *.o
