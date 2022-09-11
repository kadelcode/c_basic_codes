#include <stdio.h>

int main() {
    int k = 0;

    // The do block is executed once even if the while condition is false
    do {
        printf("Print kkk");
    }

    while(k == 1);
    return 0;
}