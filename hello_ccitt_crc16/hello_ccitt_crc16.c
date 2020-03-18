#include <stdio.h>
#include <stdlib.h>

#define POLY 0x8408
/*
//                                      16   12   5
// this is the CCITT CRC 16 polynomial X  + X  + X  + 1.
// This works out to be 0x1021, but the way the algorithm works
// lets us use 0x8408 (the reverse of the bit pattern).  The high
// bit is always assumed to be set, thus we only use 16 bits to
// represent the 17 bit value.
*/

unsigned short crc16(char *ptr, int count)
{
   int  crc;
   char i;
   crc = 0xffff;
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



int main(void) {
	char test_input[9];
	test_input[0]=0x31;
	test_input[1]=0x32;
	test_input[2]=0x33;
	test_input[3]=0x34;
	test_input[4]=0x35;
	test_input[5]=0x36;
	test_input[6]=0x37;
	test_input[7]=0x38;
	test_input[8]=0x39;


	printf("%c\n", test_input[1]);

	puts("!!!Hello World!!!");
	crc16(test_input, 9);

	return(EXIT_SUCCESS);
}
