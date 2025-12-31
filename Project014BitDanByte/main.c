#include <stdio.h>
#include <stdint.h> 

int main(void) {
	uint32_t a = 0b10110101; //0b00000000000000000000000010110101
	uint32_t b = 0b11101100; //0b00000000000000000000000011101100

	printf("a : %X\n", a);
	printf("b : %X\n", b);

	uint32_t and_r = a & b;
	printf("hasil 'a AND b' : %X\n", and_r); 

	uint32_t or_r = a | b;
	printf("hasil 'a OR b' : %X\n", or_r);

	uint32_t xor_r = a ^ b;
	printf("hasil 'a XOR b' : %X\n", xor_r);

	uint32_t not_r = ~a;
	printf("hasil 'NOT(a)' : %X\n", not_r);  

	uint32_t geser_kiri_r = a << 3;
	printf("hasil 'a GESER KIRI 3' : %X\n", geser_kiri_r);

	uint32_t geser_kanan_r = a >> 3;
	printf("hasil 'a GESER KANAN 3' : %X\n", geser_kanan_r);


	return 0;
}

