#include <stdio.h>

int main() {
    int number;
    printf("Choose a number: ");

    scanf("%d", &number);

    if (number % 2 == 0) {
        goto end;
    }

    // This statement is not executed if the expression of the if block, evaluates to true.
    printf("The program is about to end\n");

    end:
        printf("The program has ended");
    return 0;
}