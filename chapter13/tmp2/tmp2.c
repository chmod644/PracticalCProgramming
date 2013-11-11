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
	char name1[100];
	char name2[100];

	strcpy(name1, tmp_name());
	strcpy(name2, tmp_name());

	printf("Name: %s\n", name1);
	printf("Name: %s\n", name2);
	return 0;
}
