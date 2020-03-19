#include <stdio.h>
#include <stdlib.h>

int parameter_voltage;
int parameter_current;

int ii=0;
int test_int;

int change_voltage(void){
  puts('changing voltage');
  return 0;
}

int change_current(void){
  puts('changing current');
  return 0;
}

int main(int argc, char *argv[]) {
  printf("No. of arguments : %d\n", argc);
  parameter_voltage = argv[1];
  parameter_current = argv[2];

  printf("voltage to change: %s\n", parameter_voltage);
  printf("current to change: %s\n", parameter_current);

  printf("test voltage %04d", atoi(parameter_voltage));


  return 0;
}