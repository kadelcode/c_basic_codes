/*
Pointer: A variable that stores the memory address of another variable
*/

#include <stdio.h>


int main() {
    int a = 20;
    int *p; // declaring a pointer variable

    // Store the memory address of (a) in (p)
    p = &a;

    printf("%d", *p); // print the value of (a)
    printf("\n%d", p); // print the address of (a)

    return 0;
}