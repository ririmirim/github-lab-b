#include <stdio.h>

int main() {

	char studentName[30];
	printf("Student's name: ");
	fgets(studentName, sizeof(studentName), stdin);
	
	int sub1, sub2, sub3;
    printf("Enter grades for 3 subjects:\n");
    printf("Subject 1: ");
    scanf("%d", &sub1);
    printf("Subject 2: ");
    scanf("%d", &sub2);
    printf("Subject 3: ");
    scanf("%d", &sub3);
    float average = (sub1 + sub2 + sub3) / 3.0;
    printf("Student  : %s", studentName);
    printf("Subject 1: %d\n", sub1);
    printf("Subject 2: %d\n", sub2);
    printf("Subject 3: %d\n", sub3);
    printf("Average  : %.2f\n", average);
    
    if (average >= 75) {
        printf("Status   : Passed\n");
    } else {
        printf("Status   : Failed\n");
    }
    return 0;

}