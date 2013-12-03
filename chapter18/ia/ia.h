#define BLOCK_SIZE 10

struct infinite_array {
	float data[BLOCK_SIZE];
	struct infinite_array *next;
};

/* initiation array */
#define ia_init(array_ptr) {(array_ptr)->next = NULL;}

/* get value */
extern int ia_get(struct infinite_array *array_ptr, int index);

/* store value */
extern void ia_store(struct infinite_array *array_ptr,
		int index, int store_data);
