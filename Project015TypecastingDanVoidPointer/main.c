#include <stdio.h> 
#include <stdint.h> 

int main(void)
{

	{ 
		uint32_t a = 0xBABEFAFE;
		uint8_t b = (uint8_t)a;
		uint16_t c = (uint16_t)a;

		printf("%X converted to 8 bit %X and 16-bit %X\n", a, b, c);
	}

	printf("\n\n");

	{
		char x[16] = {
			'A','B','C','D',
			'E','F','G','H',
			'I','J','K','L',
			'M','N','O','P',
		};

		int* p = (int*)x;
		int i;

		for (i = 0; i < 16; ++i) {
			printf("%x\n", x[i]);
		}

		printf("\n\n");

		for (i = 0; i < 4; ++i) {
			printf("%x\n", p[i]);
		}

		printf("\n\n");

		//VoidPointer : hanya menunjuk saja tanpa nilai dan type
		{
			void* pv;

			pv = x; // tidak error karena yg di terima saja kan memang ada penunjuknya

			//for (i = 0; i < 4; ++i) {
			//	printf("%x\n", pv[i]); //INI TIDAK BISA KARENA TIDAK ADA TYPE DATANYA
			//}
		}

	}

	

	return 0;
}

