
hello_uart_off: hello_uart_off.o
	$(CC) $(LDFLAGS) hello_uart_off.o -o hello_uart_off
hello_uart_off.o: hello_uart_off.c
	$(CC) $(CFLAGS) -c hello_uart_off.c

hello_uart: hello_uart.o
	$(CC) $(LDFLAGS) hello_uart.o -o hello_uart
hello_uart.o: hello_uart.c
	$(CC) $(CFLAGS) -c hello_uart.c

clean:
	rm *.o hello_uart
