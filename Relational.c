#include "stdio.h"
int main() {
    // Demonstration of Relational operators
    int a = 5, b = 4;
    // Less than operator
    printf("\n%d < %d = %d", a, b, a < b); // Evaluates 0

    // Greater than operator
    printf("\n%d > %d = %d", a, b, a > b); // Evaluates 1

    // Less than or equal
    printf("\n%d <= %d = %d", a, b, a <= b); // Evaluates 0

    // Greater than or equal
    printf("\n%d >= %d = %d", a, b, a >= b); // Evaluates 1

    return 0;
}