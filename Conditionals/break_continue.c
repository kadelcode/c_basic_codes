#include <stdio.h>


int main() {
    int i = 0;
    for (i; i < 11; i++) {
        if (i == 5) {
            break; // breaks the loop when the if condition is met
        }

        // if (i == 6) {
        //     continue;    
        //     /*
        //     continue statement skips the current iteration of the loop and continues with the next iteration
        //     */
        // }
        printf("%d\n", i);
    }
    return 0;
}