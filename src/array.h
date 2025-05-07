#include <stddef.h>

typedef struct {
    int *data;
    size_t size;
    size_t capacity;
} DynamicArray;

void initArray(DynamicArray *arr);
void append(DynamicArray *arr, int element);
void free_array(DynamicArray *arr);
void delete_element(DynamicArray *arr, int element);