#include "stdio.h"

int main() {
    /**
     * Demonstration of arithmetic operators.
     * 
     * @param a first operand
     * @param b second operand
     * @param result result of a & b operands
    */
    int a, b, result;

    // Take user input
    printf("\nEnter first number: ");
    scanf("%d", &a);
    printf("\nEnter second number: ");
    scanf("%d", &b);

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
    printf("\n%d / %d = %d (Integer division)", a, b, result);
    /**
     * As we know Integer format holds whole numbers only.
     * For division operation result could be a floating point number.
     * Hence, it recomended to perform division operation on Floating point data types.
     * 
     * Or we could caste Integer data type to Floating point data type
     * whenever it needed.
     * 
     * @param result2       result of folat a & b operands.
    */
    float result2 = (float)a / (float)b;
    printf("\n%d / %d = %0.2f", a, b, result2);

    /**
     * In arithmetic operators [Modulus or Reminder]
     * could feel new for some. While rest are familier.
     * 
     * [Note] Modulus or Reminder operator can be performed only on Integer values.
     * 
     * To escape '%' -> use %% 
    */
    result = a % b;
    printf("\n%d %% %d = %d", a, b, result);

    return 0;
}