#include "array.h"

#include <stdio.h>
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
    arr->data = NULL;
    arr->capacity = 2;
    arr->size = 0;
}

void delete_element(DynamicArray *arr, int element) {
    size_t index = arr->size;
    for (size_t i = 0; i < arr->size; i++) {
        if (arr->data[i] == element) {
            index = i;
            break;
        }
    }

    if (index == arr->size) {
        return;
    } else {
        for (size_t i = index; i < arr->size; i++) {
            arr->data[i] = arr->data[i + 1];
        }
        arr->size--;
    }
}