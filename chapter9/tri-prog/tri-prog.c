#include <stdio.h>

float triangle(float width, float height) {
	float area;
	area = width * height / 2.0;
	return(area);
}

int main() {
	printf("Triangle #1 %f\n", triangle(1.3, 8.3));
	printf("Triangle #2 %f\n", triangle(4.8, 9.8));
	printf("Triangle #1 %f\n", triangle(1.2, 2.0));
	return(0);
}

