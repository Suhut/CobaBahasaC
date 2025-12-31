#include<stdio.h>;  

void print_arr(int arr[], int n) {
	int i;
	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n\n");
}

int main(void) {

	//di c -> array dan pointer adalah sama 
	int xs[3] = { 7, 9 ,5 };
	int i;
	int* px = xs;

	print_arr(xs, 3);  
	print_arr(px, 3);

	px++; //pointer di majukan 1
	print_arr(px, 2);

	print_arr(px, 3);//di sini error stack over flow karena jumlah melebihi jumlah index
	return 0;
}

