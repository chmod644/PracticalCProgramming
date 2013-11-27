#include <stdio.h>
int main(void)
{
	int i,j;

	i = 1;
	j = 0;
	printf("Starting\n");
	fflush(stdout);
	printf("Befor devide...\n");
	fflush(stdout);
	i = i / j;
	printf("After\n");
	fflush(stdout);
	return 0;
}
