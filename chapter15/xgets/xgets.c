#include <stdio.h>

FILE *save_file = NULL;

char *extended_fgets(char *line, int size, FILE *file) {
	char *result;

	result = fgets(line, size, file);
	if (save_file!=NULL) {
		fputs(line, save_file);
	}
	return result;
}
