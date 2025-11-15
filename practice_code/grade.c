#include <stdio.h>
#include <stdlib.h>

void main () {
    int grade;
    char studentName[30];
    char input[100];
    int valid_input;

    printf("Enter student name: ");
    fgets(studentName, sizeof(studentName), stdin);
    
    do {
        printf("Enter grade (1-100): ");
        if (fgets(input, sizeof(input), stdin) != NULL) {
            // Try to convert input to integer
            valid_input = sscanf(input, "%d", &grade);
            
            // Check if input was a number and within valid range
            if (valid_input != 1 || grade <= 0 || grade > 100) {
                printf("Error: Please enter a valid numeric grade between 1 and 100\n");
                valid_input = 0;
            }
        }
    } while (!valid_input);

    printf("Summarizing results for %s", studentName);
    if (grade >= 90) {
        printf("Grade: A\n");
    } else if (grade >= 80) {
        printf("Grade: B\n");
    } else if (grade >= 70) {
        printf("Grade: C\n");
    } else if (grade >= 60) {
        printf("Grade: D\n");
    } else {
        printf("No grade available\n");
    }
}