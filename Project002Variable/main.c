#include <stdio.h>;

#define print_type_size(t) do { \
	printf("Ukuran dari '" #t "' adalah: %ld byte\n", sizeof(t)); \
} while(0);

void check_bool(int value) {
	if (!value) {
		printf("%d : FALSE\n", value);
		return;
	}

	printf("%d : TRUE\n", value);
}

int main(void) {
	int age = 47;

	printf("Age: %d\n", age);

	print_type_size(char);
	print_type_size(short);
	print_type_size(int);
	print_type_size(long);
	print_type_size(long long);
	print_type_size(float);
	print_type_size(double);

	int x = 0;
	int y = 1;
	int z = -1;
	int foo = -1024; 

	check_bool(x);
	check_bool(y);
	check_bool(z);
	check_bool(foo);

	return 0;
}

 