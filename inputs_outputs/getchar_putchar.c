#include <stdio.h>


int main() {
    //declaring a variable
    int c;

    //print on the console to tell the user to enter a character
    printf("Enter a character:");

    //get the character from the console and store it in variable c
    c = getchar();

    // display the value of variable(c) to the console
    putchar(c);
    return 0;
}