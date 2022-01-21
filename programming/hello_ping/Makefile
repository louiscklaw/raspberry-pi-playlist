
hello_ping: hello_ping.o
	$(CC) $(LDFLAGS) hello_ping.o -o hello_ping
	rsync -azh --exclude tools /home/logic/_workspace/raspberry-pi-playlist pi@192.168.99.102:/home/pi

hello_ping.o: hello_ping.c
	$(CC) $(CFLAGS) -c hello_ping.c

clean:
	rm *.o hello_ping
