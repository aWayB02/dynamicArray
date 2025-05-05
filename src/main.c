#include <stdio.h>
#include <stdlib.h>
#include "createArray.h"

int main() {
    
    DynamicArray arr;
    initArray(&arr, 2);
    int n; scanf("%d", &n);
    while (n != -1)
    {
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

}