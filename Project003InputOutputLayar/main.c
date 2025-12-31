#include <stdio.h>;

int main(void) {

	int age = 67;
	printf("Umur anda %d\n", age);

	int age2 = 0;
	int res;
	printf("Halo, silahkan masukkan umur anda: ");
	res = scanf_s("%d", &age2);
	if (res > 0) {
		printf("Umur anda: %d\n", age2);
	}
	else {
		printf("Umur Salah\n");
	}

	return 0;
}