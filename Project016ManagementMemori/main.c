#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <memory.h>

int main(void)
{ 
	int* p = malloc(40 * sizeof(int));
	int i;

	memset(p, 0, 40 * sizeof(int));
	
	for (i = 0; i < 500; ++i) {
		printf("%d\n", p[i]);
	}

	free(p);
	p = NULL;
	printf("Alamat p setelah di-free %p\n", p); 

	return 0;
}

