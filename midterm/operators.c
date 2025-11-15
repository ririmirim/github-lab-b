//(BATHAN, JOHN EARL EPHRAIM S. DIT 1-2)
#include <stdio.h>
#include <stdbool.h>

int main() {
// performing arithmetic operations
// assigning values to variables
    int a = 5;
    int b = 10;
    int c = 15;

    int sum = a + b + c;
    int difference = c - b - a;
    int product = a * b * c;
    int quotient = c / a;

    printf("----------------------\n");
    printf("Arithmetic Operations: \n");
    printf("----------------------\n");
        printf("a = %d, b = %d, c = %d\n", a, b, c);    // display values of a, b, and c
        printf("\n");
        printf("a + b + c (sum)       : %d\n", sum);
        printf("c - b - a (difference): %d\n", difference);
        printf("a * b * c (product)   : %d\n", product);
        printf("c / a     (quotient)  : %d\n", quotient);
    printf("\n");

// using logical operators to check conditions
    printf("----------------------\n");
    printf("Logical Operations: \n");
    printf("----------------------\n");
        printf("a = %d, b = %d, c = %d\n", a, b, c);    // logical AND, OR, and NOT operations

    printf("\n&& (AND) LOGICAL OPERATOR :\n");
    printf("a < b && b < c   : ");
        if (a < b && b < c) {        // need both conditions to be true
            printf("1/true\n");
        } else {
            printf("0/false\n");
        }

    printf("\n|| (OR) LOGICAL OPERATOR  :\n");
    printf("c > b || a > c   : ");
        if (c > b || a > c) {        // need at least one condition to be true
            printf("1/true\n");
        } else {
            printf("0/false\n");
        }

    printf("\n! (NOT) LOGICAL OPERATOR  :\n");
    printf("!(a < b && b < c): ");
        if (!(a < b && b < c)) {    // negates the result ------- true = false, false = true
            printf("1/true\n");
        } else {
            printf("0/false\n");
        }

    printf("\n! (NOT) LOGICAL OPERATOR  :\n");
    printf("!(b < c || a > b): ");
        if (!(b < c || a > b)) {    // negates the result ------- true = false, false = true
            printf("1/true\n");
        } else {
            printf("0/false\n");
        }

// using assignment operators to update variable values
    int num1 = 18;
    int num2 = 29;
    int num3 = 44;
    int num4 = 55;
    int num5 = 67;
        printf("\n----------------------\n");
        printf("Assignment Operations: \n");
        printf("----------------------\n");
            printf("Initial values: \n");
            printf("num1 = %d, num2 = %d, num3 = %d, num4 = %d, num5 = %d\n", num1, num2, num3, num4, num5);        // value before assignment operations
                num1 += 18;   //num1 = num1 + 18
                num2 -= 14;   //num2 = num2 - 14
                num3 *= 500;  //num3 = num3 * 500
                num4 /= 3;    //num4 = num4 / 3
                num5 %= 7;    //num5 = num5 % 7
            printf("\nUpdated values: \n");
            printf("num1 = %d, num2 = %d, num3 = %d, num4 = %d, num5 = %d\n", num1, num2, num3, num4, num5);       // value after assignment operations
    return 0;
}