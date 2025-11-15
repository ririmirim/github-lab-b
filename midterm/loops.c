//(BATHAN, JOHN EARL EPHRAIM S. DIT 1-2)
#include <stdio.h>

int main() {
    //using loops: write loops that print numbers in different ways
    //WHILE LOOP ---- PRINT NUMBERS FROM 1 TO 10
    int i = 1;
    printf("-------------------------------------\n");
    printf("While Loop - Numbers from 1 to 10:\n");
        while (i<=10) {
            printf("%d ", i);
            i++;
        }
    printf("\n");

    //FOR LOOP ---- PRINT EVEN NUMBERS FROM 2 TO 20
    printf("\n-------------------------------------\n");
    printf("For Loop - Even Numbers from 2 to 20:\n");
        for (i = 2; i <= 20; i += 2) {
            printf("%d ", i);
        }
    printf("\n");

    //DO-WHILE LOOP ---- PRINT NUMBERS FROM 1 TO 5
    printf("\n-------------------------------------\n");
    printf("Do-While Loop - Numbers from 1 to 5:\n");
        i = 1;
            do {
                printf("%d ", i);
                i++;
            } while (i <= 5);

    return 0;
    
}