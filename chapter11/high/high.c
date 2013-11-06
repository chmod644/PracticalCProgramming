#include <stdio.h>

const int HIGH_SPEED = (1<<7);
const int DIRECT_CONNECT = (1<<8);
short int flags = 0;

int main() {
	flags |= HIGH_SPEED;
	flags |= DIRECT_CONNECT;
	if((flags & HIGH_SPEED) != 0) {
		printf("High speed set\n");
	}
	if((flags & DIRECT_CONNECT) != 0) {
		printf("Direct connect set\n");
	}
	return 0;
}
