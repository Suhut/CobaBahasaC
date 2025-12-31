#include <stdio.h>;
#include <string.h>;

int main(void) {
	{
		char greeting[] = "Terima Kasih";
		size_t greet_size = sizeof(greeting);
		int greet_len = strlen(greeting);

		printf("Ukuran dari '%s' adalah %lu\n", greeting, greet_size);
		printf("Panjang dari '%s' adalah %d\n", greeting, greet_len);
	}

	{
		char *greeting = "Terima Kasih"; 
		int greet_len = strlen(greeting);
		 
		printf("Panjang dari '%s' adalah %d\n", greeting, greet_len);
	}

	{
		char greeting[] = "Terima Kasih";
		size_t greet_size = sizeof(greeting);
		int greet_len = strlen(greeting);
		int i;

		for (i = 0; i < sizeof(greeting); ++i) {
			printf("'%d' - '%c' - '%x'\n", i, greeting[i], greeting[i]);
		}

		printf("\n");
		printf("\n");

		for (i = 0; i < strlen(greeting); ++i) {
			printf("'%d' - '%c' - '%x'\n", i, greeting[i], greeting[i]);
		}
	}

	{
		printf("\n");
		printf("\n");


		char greeting[] = "Terima Kasih";
		size_t greet_size = sizeof(greeting);

		int i;
		char *pg;
		 
		for (i = 0, pg = greeting; i < sizeof(greeting); ++i, ++pg) {
			printf("'%d' - '%c' - '%x'\n", i, greeting[i], *pg);
		}

			 
	}

	return 0;
}