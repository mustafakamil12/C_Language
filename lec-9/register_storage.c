#include <stdio.h>

void withoutRegister() {
    unsigned int i;
    unsigned int sum = 0;

    for (i = 1; i <= 100000; ++i) {
        sum += i;
    }

    printf("Sum without register: %u\n", sum);
}

void withRegister() {
    register unsigned int i;
    unsigned int sum = 0;

    for (i = 1; i <= 100000; ++i) {
        sum += i;
    }

    printf("Sum with register: %u\n", sum);
}

int main() {
    withoutRegister();
    withRegister();

    return 0;
}
