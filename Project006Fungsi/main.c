#include<stdio.h>;

int sum(int a, int b) {
	return a + b;
}

int sum2(int a, int b);

int main(void) {
	int a, b;

	int c;

	a = 1;
	b = 2;
	c = sum(a, b);

	printf("Coba 1 : Hasil a + b = %d\n", c); 

	c = sum2(a, b);
	printf("Coba 2 : Hasil a + b = %d\n", c);

	return 0;
}

int sum2(int a, int b) {
	return a + b;
}
