#include <stdio.h>

FILE *save_file = NULL;
FILE *playback_file = NULL;

char *extended_fgets(char *line, int size, FILE *file) {
	extern FILE *save_file;
	extern FILE *playback_file;

	char *result;

	if (playback_file != NULL) {
		result = fgets(line, size, playback_file);
		fputs(line, stdout);
	} else {
		result = fgets(line, size, file);
	}
	if (save_file!=NULL) {
		fputs(line, save_file);
	}
	return result;
}
