#include <stdio.h>

#define ARRAY_SIZE 10

char array[ARRAY_SIZE + 1] = "0123456789";

int main(void)
{
	int index;
	printf("&array[index] (array+index) array[index]\n");
	for (index = 0; index < ARRAY_SIZE; ++index) {
		printf("%-10p %-10p %x\n", 
				&array[index], (array+index), array[index]);
	}
	return 0;
}
