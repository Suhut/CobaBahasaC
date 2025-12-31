#include <stdio.h>

#define PI 3.14

#define MIN(a, b) (((a) < (b))?(a):(b))

#define CETAK(...) printf(__VA_ARGS__)

//karena di visual studio defaulnya di set "_DEBUG" BUKAN "DEBUG" 
//#if _DEBUG //bisa
//#if defined(_DEBUG) //bisa 
#ifdef _DEBUG  //bisa
#define PRINT_DEBUG(...) printf(__VA_ARGS__)
#else 
#define PRINT_DEBUG(...)
#endif


#define print_size(t) printf("Ukuran dari %s adalah %lu\n", #t, sizeof(t))

#define CREATE_VAR(n, x) int var_##n = (x)

int main(void) {

	{
		float a = 3.78f;
		float b = 6.56f;

		int x = 4;
		int y = 20;

		printf("PI : %.2f\n", PI);

		printf("Min dari a dan b adalah : %.2f\n", MIN(a, b));
		printf("Min dari x dan y adalah : %d\n", MIN(x, y));

		CETAK("HELLO, world! my name is %s, and age %d years old\n","Bejo",17);
	}
	
	{
		PRINT_DEBUG("this is debug message\n");
	}
	
	{
#if defined(__linux__)
		printf("OS is linux\n");
#elif defined(_WIN32)
		printf("OS is windows\n");
#else
		printf("OS is NOT(linux,windowso)\n");
#endif
	}


	{
		printf("Ini ada di file %s baris %d\n", __FILE__, __LINE__);
	}

	{
		print_size(float);
		print_size(double);
	}

	{
		CREATE_VAR(567, 200000);
		CREATE_VAR(100, 100000);
		printf("Nilai dari var_567 adalah %d\n", var_567);
		printf("Nilai dari var_100 adalah %d\n", var_100);
	}

	return 0;
}