#include <stdio.h>
#include <string.h>

struct linked_list {
	struct linked_list *next_ptr;
	char *data;
};

struct linked_list *first_ptr = NULL;

int find(char *name) {
	struct linked_list *current_ptr;
	current_ptr = first_ptr;
	while (current_ptr != NULL) {
		if (strcmp(current_ptr->data, name) == 0) {
			break;
		}
		current_ptr = current_ptr->next_ptr;
	}
	return (current_ptr != NULL);
}

