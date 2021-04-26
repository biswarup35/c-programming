#include "stdio.h"
int main() {
    /**
     * Demonstration of Logical Operators.
     * 
     * @param a     first operand
     * @param b     second operand
    */
    int a, b;
    printf("\nDemonstration of AND operation");
    a = 0, b = 0;
    printf("\n%d AND %d = %d", a, b, a && b); // FALSE && FALSE => FALSE
    a = 0, b = 1;
    printf("\n%d AND %d = %d", a, b, a && b); // FALSE && TRUE => FALSE
    a = 1, b = 0;
    printf("\n%d AND %d = %d", a, b, a && b); // TRUE && FALSE => FALSE
    a = 1, b = 1;
    printf("\n%d AND %d = %d", a, b, a && b); // TRUE && TRUE => TRUE

    printf("\n--------------------------");

    printf("\nDemonstration of OR operation");
    a = 0, b = 0;
    printf("\n%d AND %d = %d", a, b, a || b); // FALSE || FALSE => FALSE
    a = 0, b = 1;
    printf("\n%d AND %d = %d", a, b, a || b); // FALSE || TRUE => TRUE
    a = 1, b = 0;
    printf("\n%d AND %d = %d", a, b, a || b); // TRUE || FALSE => TRUE
    a = 1, b = 1;
    printf("\n%d AND %d = %d", a, b, a || b); // TRUE || TRUE => TRUE

    printf("\n--------------------------");
    printf("\nDemonstration of NOT operation");
    a = 0;
    printf("\n%d NOT %d = %d", a, a, !a); // FALSE !FALSE => TRUE
    a = 1;
    printf("\n%d NOT %d = %d", a, a, !a); // TRUE !TRUE => FALSE

    return 0;
}