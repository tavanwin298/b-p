#include <stdio.h>

const int MAX = 9;

// Function to print array values
void printValues(int* arr) {
    for (int i = 0; i < MAX; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to swap two integers using pointers
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};

    printf("Before: \n");
    printValues(values);

    // Test swap function
    int x = 3;
    int y = 5;
    printf("x: %d, y: %d \n", x, y);
    swap(&x, &y);
    printf("x: %d, y: %d \n", x, y);

    // Sort the array
    sort(values);
    printf("After: \n");
    printValues(values);

    return 0;
}

