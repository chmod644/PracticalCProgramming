#include <stdio.h>
#include <stdlib.h>

struct item {
	struct item *next_ptr;
	int value;
};

void enter(struct item *first_ptr, const int value) {
	struct item *before_ptr;
	struct item *after_ptr;
	struct item *new_item_ptr;

	before_ptr = first_ptr;
	after_ptr  = before_ptr->next_ptr;

	while (1) {
		if (after_ptr == NULL) {
			break;
		}
		if (after_ptr->value >= value) {
			break;
		}

		after_ptr  = after_ptr->next_ptr;
		before_ptr = before_ptr->next_ptr;
	}

	new_item_ptr = malloc(sizeof(struct item));
	new_item_ptr->value = value;

	before_ptr->next_ptr = new_item_ptr;
	new_item_ptr->next_ptr = after_ptr;
}
