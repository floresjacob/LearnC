#include <stdio.h>
#include <stdlib.h>

// Function using calloc()
void use_calloc() {
    int *arr;
    int n = 5;

    // Allocate memory for an array of 5 integers
    arr = (int*) calloc(n, sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    // Initialize array
    for (int i = 0; i < n; i++) {
        arr[i] = i;
    }

    // Print array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Deallocate memory
    free(arr);
}

// Function using malloc()
void use_malloc() {
    int *num;

    // Allocate memory for an integer
    num = (int*) malloc(sizeof(int));
    if (num == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    // Initialize num
    *num = 10;

    // Print num
    printf("%d\n", *num);

    // Deallocate memory
    free(num);
}

// Function using realloc()
void use_realloc() {
    int *arr;
    int n = 5;

    // Allocate memory for an array of 5 integers
    arr = (int*) malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    // Initialize array
    for (int i = 0; i < n; i++) {
        arr[i] = i;
    }

    // Reallocate memory for an array of 10 integers
    arr = (int*) realloc(arr, 10 * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    // Initialize the new elements
    for (int i = n; i < 10; i++) {
        arr[i] = i;
    }

    // Print array
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    // Deallocate memory
    free(arr);
}

int main() {
    use_calloc();
    printf("\n");
    use_malloc();
    printf("\n");
    use_realloc();
    printf("\n");

    return 0;
}
