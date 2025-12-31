#include<stdio.h>;  

void add5(int* x) {
	*x += 5;
}

int main(void) {

	{
		int a = 10;
		int* b = &a;

		printf("Nilai dari a di alamat %p adalah %d\n", b, a);
		printf("Nilai yg ditunjuk pointer b adalah %d\n", *b);

		*b = 70;

		printf("Nilai a sekarang adalah %d\n", a);
	}

	{
		int a = 10;
		printf("Nilai a adalah %d\n", a);
		add5(&a); 
		printf("Nilai a setelah add5 adalah %d\n", a);

	}


	return 0;
}

