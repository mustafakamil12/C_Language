#include <stdio.h>

int main() {
    int number;

    // Get user input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check conditions using if, else if, and else
    if (number > 0) {
        printf("The number is positive.\n");
    } else if (number < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
