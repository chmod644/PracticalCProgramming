#include <stdio.h>

int  total;
int  current;
int  counter;
char line[80];

int main() {
	total = 0;
	for(counter=0; counter<5; ++counter) {
		printf("Number? ");
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%d", &current);
		total += current;
	}
	printf("The grand total is %d\n", total);
	return(0);
}
