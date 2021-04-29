#include "stdio.h"
int main() {
    /**
     * Demonstrate Equality operators.
     * 
     * This too works as the Relational operators do,
     * it compares the operands and then if the
     * expression is true it produces 1, if false it will
     * produce 0.
     * 
     * For eg 5 == 4 this expression is false (coz 4 is less than 5)
     * Hence, it will produce 0.
     *      5 != 4, tis expresssion is true.
     * Hence it will produce 1.
    */

   /**
    * Declare variables
    * @param a      First operand
    * @param b      Second operand
    * @param result         Expression of 'a' and 'b' operand.
   */
    int a, b, result;

    // Take user input
    printf("\nEnter first number: ");
    scanf("%d", &a);
    printf("\nEnter second number: ");
    scanf("%d", &b);

    /**
     * Equals to
     * [Note] Not to confused with '=' & '=='
     * '=' -> Assignment operator
     * '==' -> equal operator
    */
    result = a == b;
    printf("\n%d == %d = %d", a, b, result);

    // Not equal to
    result = a != b;
    printf("\n%d != %d = %d", a, b, result);
    return 0;
}