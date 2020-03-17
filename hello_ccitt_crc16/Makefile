

hello_ccitt_crc16: hello_ccitt_crc16.o
	$(CC) $(LDFLAGS) hello_ccitt_crc16.o -o hello_ccitt_crc16
hello_ccitt_crc16.o: hello_ccitt_crc16.c crc16-ccitt.o
	$(CC) $(CFLAGS) -c hello_ccitt_crc16.c

crc16-ccitt.o: crc16-ccitt.c
	$(CC) $(CFLAGS) -c crc16-ccitt.c

clean:
	rm *.o hello_ccitt_crc16
