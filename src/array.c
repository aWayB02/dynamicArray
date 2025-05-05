#include <stdio.h>
#include "array.h"
#include <stdlib.h>

void initArray(DynamicArray *arr) {
    size_t initalCapacity = 2;
    arr->data = malloc(initalCapacity * sizeof(int));
    arr->size = 0;
    arr->capacity = initalCapacity;
}

void append(DynamicArray *arr, int element) {
    if (arr->size >= arr->capacity) {
        arr->capacity *= 2;
        arr->data = realloc(arr->data, arr->capacity * sizeof(int));
    }
    arr->data[arr->size++] = element;
}

void free_array(DynamicArray *arr) {
    free(arr->data);
}