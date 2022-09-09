#include <stdio.h>

int a = 4;
int b = 2;
int c;

int main() {
    //  Arithmetic Operators
    c = a + b; // c = 6 (Addition)
    c = a - b; // c = 4 (Substraction)
    c = a * b; // c = 8 (Multiplication)
    c = a / b; // c = 2 (Division)
    c = a % b; // c = 0 (Quotient)


    //  Relational Operators
    a < b;
    a > b;
    a <= b;
    a >= b;
    a == b;
    

    //  Logical Operator
    (a < b) && (b > a);
    (a < b) || (b > a);
    !(a < b);

    //  Increment and Decrement Operators
    int u = ++a;    // u = 5, a = 5
    int v = a++;    // v = 4, a = 5
    int w = --a;    // w = 3, a = 3
    int x = a--;    // x = 4, a = 3 (Results based on the state of variable in a single statement and not the whole program)

    //  Bitwise Operators
    int d = 111;
    int e = 001; 
    int f;
    f = d & c; // Bitwise AND
    f = d | c; // Bitwise OR
    f = d ^ c; // Bitwise eXclusive OR
    f = d << c; // left shift
    f = d >> c; // right shift
   
    return 0;
}