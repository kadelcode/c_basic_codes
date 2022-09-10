#include <stdio.h>

int main() {
    //____________prinf()___________and____________scanf()______________

    // declaring a variable
    int a;

    // displaying a message on the screen to enter a number
    printf("Enter a number:");

    // get the value from the console
    scanf("%d", &a);

    // return the value to the screen
    printf("Your input is %d", a);


    return 0;
}