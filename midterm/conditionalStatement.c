//(BATHAN, JOHN EARL EPHRAIM S. DIT 1-2)
#include <stdio.h>

int main() {

    // ASK FOR USER INPUT
    int num;

    printf("---------------------------\n");
    printf("Using if-else statement:\n");
    printf("---------------------------\n");
    printf("User Input: ");
    scanf("%d", &num);              // user input

        if (num % 2 == 0) {
            printf("%d is even.\n", num);
        } else {
            printf("%d is odd.\n", num);
        }

    // FIXED NUMBER (EVEN)

    printf("\n---------------------------\n");
    printf("Fixed number (EVEN):\n");
    num = 28;

        if (num % 2 == 0) {
            printf("%d is even.\n", num);
        } else {
            printf("%d is odd.\n", num);
        }

    // FIXED NUMBER (ODD)

    printf("\n---------------------------\n");
    printf("Fixed number (ODD) :\n");
    num = 17;

        if (num % 2 == 0) {
            printf("%d is even.\n", num);
        } else {
            printf("%d is odd.\n", num);
        }
    printf("---------------------------\n");

    return 0;
}