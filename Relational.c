#include "stdio.h"
int main() {
    /**
     * Demonstration of Relational operators.
     * 
     * It basically compares the operands, if the
     * expression is true then it will return 1. If false
     * then it will return 0.
     * 
     * For eg. 5 > 4 = 1
     * 5 is greater than 4 hence the expression
     * becomes true and produced 1
     * 
    */

    /**
    * Declare variables (Operands)
    * @param a      First operand
    * @param b      Second operand
    * @param result     Expression of 'a' and 'b' operands 
   */
    int a, b, result;
    
    // Take user input
    printf("\nEnter first number: ");
    scanf("%d", &a);
    printf("\nEnter second number: ");
    scanf("%d", &b);

    // Less than operator
    result = a < b;
    printf("\n%d < %d = %d", a, b, result);

    // Greater than operator
    result = a > b;
    printf("\n%d > %d = %d", a, b, result); 

    // Less than or equal
    result = a <= b;
    printf("\n%d <= %d = %d", a, b, result);

    // Greater than or equal
    result = a >= b;
    printf("\n%d >= %d = %d", a, b, result); 

    return 0;
}