#include <stdio.h>

#define MAX 10

void init_array_1(int data[]) {
	int index;
	for (index = 0; index < MAX; ++index) {
		data[index] = 0;
	}
}


void init_array_2(int *data_ptr) {
	int index;
	for (index = 0; index < MAX; ++index) {
		*(data_ptr+index) = 0;
	}
}

int main(void)
{
	int array[MAX];
	int index;

	void init_array_1();
	void init_array_2();

	init_array_1(array);
	for (index = 0; index < MAX; ++index) {
		printf("array[%d]=%d\n", index, array[index]);
	}
	init_array_1(&array[0]);
	for (index = 0; index < MAX; ++index) {
		printf("array[%d]=%d\n", index, array[index]);
	}
	init_array_1(&array);
	for (index = 0; index < MAX; ++index) {
		printf("array[%d]=%d\n", index, array[index]);
	}

	init_array_2(array);
	for (index = 0; index < MAX; ++index) {
		printf("array[%d]=%d\n", index, array[index]);
	}
	return 0;
}
