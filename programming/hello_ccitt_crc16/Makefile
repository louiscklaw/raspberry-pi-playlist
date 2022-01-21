
hello_ccitt_crc16: hello_ccitt_crc16.o
	$(CC) $(LDFLAGS) hello_ccitt_crc16.o -o hello_ccitt_crc16
	scp hello_ccitt_crc16 pi@192.168.99.102:/home/pi/hello_ccitt_crc16

hello_ccitt_crc16.o: hello_ccitt_crc16.c
	$(CC) $(CFLAGS) -c hello_ccitt_crc16.c

clean:
	rm *.o hello_ccitt_crc16
