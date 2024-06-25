#include <stdio.h>

// Function declaration for call by value
void squareByValue(int x);

// Function declaration for call by reference
void squareByReference(int *x);

int main() {
    int num = 5;

    // Call the function by value
    printf("Original value before call by value: %d\n", num);
    squareByValue(num);
    printf("Original value after call by value: %d\n", num);

    // Call the function by reference
    printf("\nOriginal value before call by reference: %d\n", num);
    squareByReference(&num);
    printf("Original value after call by reference: %d\n", num);

    return 0;
}

// Function definition for call by value
void squareByValue(int x) {
    x = x * x;
    printf("Inside function (call by value): %d\n", x);
}

// Function definition for call by reference
void squareByReference(int *x) {
    *x = (*x) * (*x);
    printf("Inside function (call by reference): %d\n", *x);
}
