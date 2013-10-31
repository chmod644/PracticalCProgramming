#include <stdio.h>

int  celsius;

int main() {
	for(celsius=0; celsius<=100; ++celsius) {
		printf("Celsius:%d Fahrenheit: %d\n", celsius, (celsius*9)/5+32);
	}
	return(0);
}
