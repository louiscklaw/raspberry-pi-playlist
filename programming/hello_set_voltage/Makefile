
hello_set_voltage: hello_set_voltage.o
	$(CC) $(LDFLAGS) hello_set_voltage.o -o hello_set_voltage
	scp hello_set_voltage pi@192.168.99.102:/home/pi/hello_set_voltage

hello_set_voltage.o: hello_set_voltage.c
	$(CC) $(CFLAGS) -c hello_set_voltage.c

clean:
	rm *.o hello_set_voltage
