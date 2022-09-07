#include <stdio.h>

//Declaring variables(Global Variables)
int x;
float y;
double z;
char _c;

extern int w = 128; // External variables can be used in multiple C source files.


int main() {
    //Assigning values to the variables
    x = 22;
    y = 2.2;
    z = 4.32;
    _c = 'c';

    int local_var = 10; // Local Variable
    static int u = 20; // Static Variable
    auto int v = 55; // Auto Variable(All variables declared in the main block, are auto by default)

    u = u + 1;

    //print variables value to the console
    printf("%d", x);
    printf("\n%.2f", y);
    printf("\n%.2lf", z);
    printf("\n%c", _c);
    printf("\n%d", local_var);
    printf("\nu = %d", u);

    return 0;
}