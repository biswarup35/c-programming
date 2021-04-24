#include "stdio.h"

int main() {
    // Demonstrate arithmetic operators
    int a = 6, b = 3, result;
    // Addition
    result = a + b;
    printf("\n%d + %d = %d", a, b, result);
    // Subtraction
    result = a - b;
    printf("\n%d - %d = %d", a, b, result);
    // Multiply
    result = a * b;
    printf("\n%d * %d = %d", a, b, result);
    // Divide
    result = a / b;
    printf("\n%d / %d = %d", a, b, result);
    // Modulus
    result = a % b;
    printf("\n%d module %d = %d", a, b, result);
    return 0;
}