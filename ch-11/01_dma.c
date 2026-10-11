#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // 1. MALLOC: 3 integers ke liye memory
    int *ptr = malloc(3 * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Memory mein values store karo
    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;

    printf("Malloc values: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // 2. REALLOC: memory ka size 3 se 5 integers
    int *temp = realloc(ptr, 5 * sizeof(int));

    if (temp == NULL) {
        printf("Memory resize failed\n");
        free(ptr);
        return 1;
    }

    ptr = temp;

    // Ab naye elements mein values store karo
    ptr[3] = 40;
    ptr[4] = 50;

    printf("After realloc: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // 3. CALLOC: 3 integers, shuru mein zero
    int *arr = calloc(3, sizeof(int));

    if (arr == NULL) {
        printf("Calloc failed\n");
        free(ptr);
        return 1;
    }

    printf("Calloc values: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 4. FREE: allocated memory release karo
    free(ptr);
    free(arr);

    ptr = NULL;
    arr = NULL;

    return 0;
}