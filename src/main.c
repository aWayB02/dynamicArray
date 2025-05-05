#include <stdio.h>
#include <stdlib.h>

#include "array.h"

int main() {
    DynamicArray arr;
    initArray(&arr);
    int n;
    scanf("%d", &n);
    while (n != -1) {
        append(&arr, n);
        scanf("%d", &n);
    }

    printf("---------------------------------\n");
    for (size_t i = 0; i < arr.size; i++) {
        printf("%d ", arr.data[i]);
        if (i < arr.size - 1) {
            printf(" ");
        }
    }
    printf("\n");
    free_array(&arr);

    return 0;
}