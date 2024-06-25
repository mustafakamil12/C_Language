#include <stdio.h>

void exampleFunction() {
    auto int x = 10;  // 'auto' is optional here, as it's the default storage class for local variables
    printf("The value of x: %d\n", x);
}

int main() {
    exampleFunction();
    return 0;
}
