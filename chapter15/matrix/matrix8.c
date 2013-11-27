#include <memory.h>
#define X_SIZE 60
#define Y_SIZE 32

int matrix[X_SIZE][Y_SIZE];

#define init_matrix() memset(matrix, -1, sizeof(matrix));
