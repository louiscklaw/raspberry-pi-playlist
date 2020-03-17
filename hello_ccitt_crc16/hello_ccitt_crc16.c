#include <stdio.h>
#include <stdlib.h>
#include "./crc16-ccitt.h"

int main(void) {
	puts("!!!Hello World!!!");

  char * test_string = 'a';
  int result = 0;

  result = crc16_ccitt(test_string,1,1);
	return(EXIT_SUCCESS);
}
