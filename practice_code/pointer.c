#include <stdio.h>

int main () {
    int a = 5;
    int *p;  // Declare a pointer to an integer
    p = &a; // Assign the address of 'a' to the pointer 'p
    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", (void*)&a);
    printf("Value of pointer p (address of a): %p\n", (void*)p);
    printf("Value pointed to by p: %d\n", *p); // Dereference the pointer to get the value of 'a'
    return 0;
}