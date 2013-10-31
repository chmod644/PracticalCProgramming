#include <stdio.h>

int  total;
int  current;
int  counter;
char line[80];

int main() {
	total = 0;
	counter = 0;
	while(counter < 5) {
		printf("Number? ");
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%d", &current);
		total += current;
		++counter;
	}
	printf("The grand total is %d\n", total);
	return(0);
}
