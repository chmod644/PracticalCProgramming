#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *my_strchr(char *string_ptr, char find) {
	while (*string_ptr != find) {
		if (*string_ptr == '\0') {
			return NULL;
		}
		++string_ptr;
	}
	return string_ptr;
}

int main(void)
{
	char line[80];
	char *first_ptr;
	char *last_ptr;

	fgets(line, sizeof(line), stdin);

	line[strlen(line)-1] = '\0';

	last_ptr = line;

	first_ptr = my_strchr(line, '/');

	if (first_ptr == NULL) {
		fprintf(stderr, "Error: Unable to find slash in %s\n", line);
		exit(8);
	}

	*first_ptr = '\0';
	++first_ptr;

	printf("First:%s Last:%s\n", first_ptr, last_ptr);
	return 0;
}
