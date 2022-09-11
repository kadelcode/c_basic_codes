#include <stdio.h>


int main() {
    int age;
    // Write to the console
    printf("Enter your age: ");
    
    // Read the age from the console
    scanf("%d", &age);

    if (age >= 18) {
        printf("You can vote");
    }

    else if (age <= 0) {
        printf("Invalid age!");
    }

    else {
        printf("You cannot vote!");
    }
    return 0;
}