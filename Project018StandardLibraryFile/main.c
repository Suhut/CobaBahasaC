#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

#define KB 1024


int main(int argc, char *argv[])
{
	if(0)
	{
		if (argc < 2) {
			printf("Usage: %s <filename>\n", argv[0]);
			return 1;
		}

		char* fname = argv[1];
		size_t fsize = 0;
		char buf[1 * KB];

		FILE* file = fopen(fname, "r");

		if (file == NULL) {
			puts("Gagal buka file!\n");
			return -1;
		}

		fread(buf, 1, 1 * KB, file);

		fclose(file);

		printf("Isi buf:\n%s\n", buf);
	}
	
	 
	{
		if (argc < 2) {
			printf("Usage: %s <filename>\n", argv[0]);
			return 1;
		}

		char* fname = argv[1];
		size_t fsize = 0;
		char buf[1 * KB];

		FILE* file = fopen(fname, "w+");

		if (file == NULL) {
			puts("Gagal buka file!\n");
			return -1;
		}

		printf("Masukan isi file untuk %s:\n", fname);

		scanf_s("%s", buf, (unsigned)sizeof(buf));   

		fwrite(buf, 1, strlen(buf), file);

		fclose(file);
		 
	}

	return 0;
}

