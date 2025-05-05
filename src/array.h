#include <stddef.h>

typedef struct 
{
    int *data;
    size_t size;
    size_t capacity;
} DynamicArray;


void initArray(DynamicArray *arr, size_t initalCapacity);
void append(DynamicArray *arr, int element);
void free_array(DynamicArray *arr);