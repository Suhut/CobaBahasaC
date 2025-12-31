#include <stdio.h> 
#include <string.h> 

int main(void) {

	{
		char str[] = "Hello, World";
		char str2[] = { 'H', 'e', 'l', 'l','o', ',', ' ',
			'W', 'o', 'r', 'l', 'd', '\0'
		};
		char* str3 = "Hello, World";

		printf("str  : %s\n", str);
		printf("str2 : %s\n", str2);
		printf("str3 : %s\n", str3);
	}

	{
		char str[255];
		char* str2 = str;
		char* p = str;
		int n = 0;

		printf("str  : %s\n", str);
		str[0] = 'H';
		str[1] = 'i';
		str[2] = '!';
		str[3] = '\0';

		while (*p) {
			p++;
			n++;
		}

		printf("str		: %s\n", str);
		printf("Length  : %d\n", n);

		//strncpy(str,   "Test 123",  255);
		strncpy_s(str, sizeof(str), "Assalamualaikum!", 255);
		printf("str		: %s\n", str);
		printf("Length  : %d\n", strlen(str));

 
		//strncpy_s(&str[17], sizeof(str) - 17, "Dunia", sizeof(str) - 17 - 1);
		strncpy_s(&str[17], sizeof(str) - 17, "Dunia", 238);
		printf("str : %s\n", str);  // Output: "Assalamualaikum! Dunia"
		printf("str : %s\n", str + 17); 
	}

	{
		int xs[5] = { 1,2,3,4,5 };
		int* pa = xs;

		++pa;
		++pa;

		printf("Nilai pa: %d\n", *pa);

		void* pv = pa;

		//++pv; //sudah di bantu validasi sama visual studio nya

		printf("Nilai pv: %d\n", *(int *)pv);
	}
	return 0;
}