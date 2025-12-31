#include<stdio.h>  

typedef unsigned int uint;

typedef struct item_t
{
	char* name;
	int qty;
	float weight;
} item_type, *item_type_ptr;

static void print_item(item_type item) {
	printf("Item data:\nName: %s\nQty: %d\nWeight: %.2f\n", item.name, item.qty, item.weight );
}

static void print_item2(item_type_ptr item) {
	printf("Item data:\nName: %s\nQty: %d\nWeight: %.2f\n", item->name, item->qty, item->weight);
}

int main(void) { 
	{
		uint num = 2025;
		unsigned int another_num = num;

		printf("Number is %u\n", num);
		printf("Another number is %u\n", num);
	}
	
	{
		item_type item;
		item.name = "Jeruk";
		item.qty = 20;
		item.weight = 7.9;
		print_item(item);
		print_item2(&item);
	}
	

	return 0;
}

