
hello_change_current: hello_change_current.o
	$(CC) $(LDFLAGS) hello_change_current.o -o hello_change_current
	rsync -azh --exclude tools /home/logic/_workspace/raspberry-pi-playlist pi@192.168.99.102:/home/pi

hello_change_current.o: hello_change_current.c
	$(CC) $(CFLAGS) -c hello_change_current.c

clean:
	rm *.o hello_change_current
