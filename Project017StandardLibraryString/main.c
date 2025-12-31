#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

#define KB 1024

int main(void)
{ 
	//strlen, sizeof
	{
		char* greetings = "Hello, Good Morning!";
		char name[] = "Soehut";

		size_t greet_len = strlen(greetings);
		size_t greet_size = sizeof(greetings);
		size_t name_len = strlen(name);
		size_t name_size = sizeof(name);

		printf("\"%s\" panjangnya %lu, size %lu\n", greetings, greet_len, greet_size);
		printf("\"%s\" panjangnya %lu, size %lu\n", name, name_len, name_size);
	}
	
	//strcpy
	{
		char* greetings = "Hello, Good Morning!";
		char* buf = malloc(2 * KB);

		//strcpy(buf, greetings);
		strcpy_s(buf, 2 * KB, greetings);

		printf("Hasil copy \"%s\"\n", buf);

		free(buf);
		buf = NULL; 
	}

	//strcat
	{
		char* greetings = "Hello, Good Morning!";
		char* name = "Soehut";
		char* buf = malloc(4 * KB);
		//buf[0] = '\0';
		strcpy_s(buf, 4 * KB, greetings);
		strcat_s(buf, 4 * KB, name);
		 
		printf("Hasil cat \"%s\"\n", buf);

		free(buf);
		buf = NULL;
	}

	//strcmp
	{
		char* greetings = "Hello, Good Morning!";
		char* greetings2 = "Hello, Good Morning!";
		char* greet = "Hello";

		printf("%d\n", strcmp(greetings, greetings2));
		printf("%d\n", greetings != greetings2);

		printf("%d\n", strcmp(greetings, greet));
		printf("%d\n", greetings != greet);
	}

	 
	{
		char* greetings = "Hello, Good Morning!";
		char name[256];
		char buf[1 * KB];

		scanf_s("%s", name, (unsigned)sizeof(name));  // tambah ukuran

		sprintf_s(buf, sizeof(buf), "%s, %s!", greetings, name);  // sprintf_s, bukan printf

		printf_s("%s\n", buf);
	}

	return 0;
}

