#include <stdio.h>
#include <stdlib.h>

#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <termios.h>

int parameter_voltage;
int parameter_current;

int ii=0;
int test_int;
// int hello_test[];


int write_to_the_port(int fd, char * test_int){
  int n = write(fd, &test_int,1);
  if (n < 0) {
    perror("Write failed - ");
    return -1;
  }
  return 0;
}

unsigned short crc16(char *ptr, int count)
{
  int  crc;
  char i;
  crc = 0x0;
  while (--count >= 0)
  {
    crc = crc ^ (int) *ptr++ << 8;
    i = 8;
    do
    {
        if (crc & 0x8000)
          crc = crc << 1 ^ 0x1021;
        else
          crc = crc << 1;
    } while(--i);
  }
  printf("%08x", crc);
  return (crc);
}

int change_voltage(char * value_input){
  printf("voltage to change: %s mV\n", value_input);

	char test_input[18];
	test_input[0] =  0x7e;
	test_input[1] =  0x0e;
	test_input[2] =  0x76;
	test_input[3] =  0x6f;
	test_input[4] =  0x6c;
	test_input[5] =  0x74;
	test_input[6] =  0x61;
	test_input[7] =  0x67;
	test_input[8] =  0x65;
	test_input[9] =  0x00;
	test_input[10] = value_input[0];
	test_input[11] = value_input[1];
	test_input[12] = value_input[2];
	test_input[13] = value_input[3];
	test_input[14] = 0x00;

  crc16(test_input, 15);

	test_input[15] = 0x87;
	test_input[16] = 0xd5;
	test_input[17] = 0x7f;

	// crc16(test_input, 18);
  int fd;
  fd = open("/dev/serial0", O_RDWR | O_NOCTTY | O_NDELAY);
  if (fd == -1) {
    perror("open_port: Unable to open /dev/serial0 - ");
    return(-1);
  }

  fcntl(fd, F_SETFL, 0);

  int i = 0;
  for(i=0;i<18;i++)
  {
    write_to_the_port(fd, test_input[i]);
  }

  close(fd);

  puts("\nvoltage change done\n");

  return EXIT_SUCCESS;
}

int change_current(int value_input){
  printf("current to change: %s\n", value_input);
  return EXIT_SUCCESS;
}

int main(int argc, char *argv[]) {
  if (argc == 3) {
    printf("No. of arguments : %d\n", argc);
    parameter_voltage = argv[1];
    parameter_current = argv[2];
    // printf("test voltage %04d\n", atoi(parameter_voltage));
    // printf("test current %04d\n", atoi(parameter_current));

    change_voltage(parameter_voltage);
    // change_current(parameter_current);

  }else{
    puts("Please send command with the following format");
    puts("command example 1");
    puts("command example 2");
  }
  return EXIT_SUCCESS;
}