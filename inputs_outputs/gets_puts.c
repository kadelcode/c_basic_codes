#include <stdio.h>

int main() {
    //  declaring a variable having a character array of length 100
    char text[100];

    printf("Enter a text not more than 100 characters:\n");
    
    //  Read the text from the console
    gets(text);

    //  Write the string literal on the screen
    puts(text);

    //  End the function
    return 0;
}