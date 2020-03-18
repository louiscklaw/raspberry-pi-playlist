hello_functions: hello_functions.o
	$(CC) $(LDFLAGS) hello_functions.o test_functions.o -o hello_functions
hello_functions.o: hello_functions.c
	$(CC) $(CFLAGS) -c hello_functions.c
	$(CC) $(CFLAGS) -c test_functions.c
clean:
	rm *.o hello_functions
