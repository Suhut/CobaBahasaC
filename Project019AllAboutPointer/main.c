#include <stdio.h>

void add5(int* x) {
	*x += 5;
} 

int main(void) {

	if(0)
	{
		int a = 10;
		printf("a = %d\n", a);
		printf("alamat a = %p\n", &a);

		int* ptr_a = NULL;
		printf("ptr_a = %p\n", ptr_a);
		ptr_a = &a;
		printf("ptr_a = %p\n", ptr_a);
	}
	
	if (0)
	{
		int a = 10;
		printf("a = %d\n", a);
		printf("alamat a = %p\n", &a);

		int* ptr_a = &a;
		int* ptr_b = &a;
		int* ptr_c = &a; 
		printf("alamat ptr_a = %p\n", *ptr_a);
		printf("alamat ptr_b = %p\n", *ptr_b);
		printf("alamat ptr_c = %p\n", *ptr_c);
		printf("value ptr_a = %d\n", *ptr_a);
		printf("value ptr_b = %d\n", *ptr_b);
		printf("value ptr_c = %d\n", *ptr_c);
	}

	if (0)
	{
		int a = 10;
		printf("value a = %d\n", a);
		add5(&a);
		printf("value a = %d\n", a);
	}

	if (1)
	{
		int xs[3] = { 7, 9 ,5 };
		int* p = xs;
		
		printf("Alamat dari xs[0] = %p\n", &xs[0]);
		printf("Ukuran dari xs = %lu\n", sizeof(xs));
		printf("Nilai p = %p\n", p);
		printf("Ukuran dari p = %lu\n", sizeof(p));

		printf("Alamat dari xs[0] = %d\n", xs[0]);
		printf("Alamat dari p[0] = %d\n", p[0]);
		printf("Alamat dari *p = %d\n", *p);

		p = p + 1;
		printf("Nilai dari after p = p + 1: p[0] %d\n", p[0]);
		++p;
		printf("Nilai dari after ++p *p = %d\n", *p);
		p += 5;
		printf("Nilai dari after p += 3 *p = %d\n", *p);
	}

	return 0;
}