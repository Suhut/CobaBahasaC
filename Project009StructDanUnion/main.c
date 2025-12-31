#include <stdio.h>;

struct item_t
{
	char* name;
	int qty;
	float price;
};

void reduce_stock(struct item_t *item, int q) {
	(*item).qty -= q;
	item->qty -= q; //atau bisa jg seperti ini
} 

union value_t
{
	int i; 
	float f;
	char c;
}; 

int main(void) {

	//struct : setiap element lokasi memery berbeda
	{
		struct item_t item;

		item.name = "Apple";
		item.qty = 20;
		item.price = 0.8;

		printf("%s - %d pieces - $%.2f each\n", item.name, item.qty, item.price);
		reduce_stock(&item, 5);
		printf("%s - %d pieces - $%.2f each\n", item.name, item.qty, item.price);
	}
	
	//union : setiap element lokasi memory sama dengan ukuran yg paling besar
	{
		{
			union value_t v;
			v.i = 65;
			printf("v.i = %d, v.f = %f, v.c = %c\n", v.i, v.f, v.c);


			v.i = 678;
			printf("v.i = %d, v.f = %f, v.c = %c\n", v.i, v.f, v.c);
		}
		

		{
			union value_t v;
			v.c = 'X';
			printf("v.i = %d, v.f = %f, v.c = %c\n", v.i, v.f, v.c);


			v.i = 678;
			printf("v.i = %d, v.f = %f, v.c = %c\n", v.i, v.f, v.c);

			v.f = 7.7;
			printf("v.i = %d, v.f = %f, v.c = %c\n", v.i, v.f, v.c);
		}

	}

	return 0;
}