#include <stdio.h>
#include <string.h>

char *tmp_name(void) {
	static char name[30];
	static int sequence = 0;

	++sequence;

	strcpy(name, "tmp");

	name[3] = sequence + '0';
	name[4] = '\0';

	return name;
}

int main(void)
{
	char *tmp_name(void);

	printf("Name: %s\n", tmp_name());
	return 0;
}
