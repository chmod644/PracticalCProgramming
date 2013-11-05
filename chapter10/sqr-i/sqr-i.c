#include <stdio.h>

#define  SQR(x) ((x)*(x))

int main() {
	int counter;
	counter = 0;
	while(counter<5) {
		printf("x %d, x squared %d\n",
				counter, SQR(++counter));
	}
	return(0);
}
