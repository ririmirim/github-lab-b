#include <stdio.h>

int addition (int a, int b) {
    int sum = a + b;
    return sum;
}

int subtraction (int a, int b) {
    int diff = a - b;
    return diff;
}

int main() {
    int a=5, c=7;
    int sum;
    int diff;
    sum = addition(a, c);
    printf("Sum: %d\n", sum);
    diff = subtraction(c, a);
    printf("Difference: %d\n", diff);
}