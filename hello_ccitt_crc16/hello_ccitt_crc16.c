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



int main(void) {
	char test_input[27];
	test_input[0] =  0x0e;
	test_input[1] =  0x76;
	test_input[2] =  0x6f;
	test_input[3] =  0x6c;
	test_input[4] =  0x74;
	test_input[5] =  0x61;
	test_input[6] =  0x67;
	test_input[7] =  0x65;
	test_input[8] =  0x0;
	test_input[9] =  0x34;
	test_input[10] = 0x35;
	test_input[11] = 0x30;
	test_input[12] = 0x30;
	test_input[13] = 0x0;
	test_input[14] = 0x63;
	test_input[15] = 0x75;
	test_input[16] = 0x72;
	test_input[17] = 0x72;
	test_input[18] = 0x65;
	test_input[19] = 0x6e;
	test_input[20] = 0x74;
	test_input[21] = 0x0;
	test_input[22] = 0x31;
	test_input[23] = 0x30;
	test_input[24] = 0x30;
	test_input[25] = 0x30;
	test_input[26] = 0x0;




	printf("%c\n", test_input[1]);

	puts("!!!Hello World!!!");
	crc16(test_input, 27);

	return(EXIT_SUCCESS);
}
