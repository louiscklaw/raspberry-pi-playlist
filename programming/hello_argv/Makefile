
hello_argv: hello_argv.o
	$(CC) $(LDFLAGS) hello_argv.o -o hello_argv
	rsync -azh --exclude tools /home/logic/_workspace/raspberry-pi-playlist pi@192.168.99.102:/home/pi

hello_argv.o: hello_argv.c
	$(CC) $(CFLAGS) -c hello_argv.c

clean:
	rm *.o hello_argv
