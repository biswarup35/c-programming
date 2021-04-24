#include "stdio.h"
int main() {
    // Demonstrate Equality operator
    int a = 5, b = 4;

    // Equals to
    printf("\n%d == %d = %d", a, b, a == b); // Evaluates 0

    // Not equal to
    printf("\n%d != %d = %d", a, b, a != b); // Evaluates 1
    return 0;
}