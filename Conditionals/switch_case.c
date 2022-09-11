#include <stdio.h>


void main() {
    int a;
    printf("Enter a number between 1 and 5:");

    scanf("%d", &a);

    switch (a)
    {
    case  2:
        printf("You entered number 2");
        break;
    
    case 3:
        printf("You entered number 3");
        break;

    case 4:
        printf("You entered number 4");
        break;

    default:
        printf("You didn't enter a number between 1 and 5!");
        break;
    }
}