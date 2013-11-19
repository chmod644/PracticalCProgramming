#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char  name[100];
	FILE  *in_file;

	printf("Name? ");
	fgets(name, sizeof(name), stdin);
	name[strlen(name)-1] = '\0';

	in_file = fopen(name, "r");
	if (in_file==NULL) {
		fprintf(stderr, "Could not open file\n");
		exit(8);
	}
	printf("File found\n");
	fclose(in_file);
	return 0;
}
