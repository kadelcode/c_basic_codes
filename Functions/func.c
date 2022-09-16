#include <stdio.h>

// A function without argument and return value
void printName() {
    printf("Learners");
}

// A function without argument and with return value
int sum() {
    int a,b;
    printf("\nEnter two numbers:");
    scanf("%d %d", &a, &b);
    return a+b;
}

// A function with argument and no return value
void add(int a, int b) {
    int summation = a + b;
}

// A function with argument and return value
int mul(int a, int b) {
    int result = a * b;
    return result;
}

// Main function for calling the user-defined functions
void main() {
    int result;
    printf("Hello ");
    // calling the printName function
    printName();
    result = sum();
    printf("%d", result);
}


