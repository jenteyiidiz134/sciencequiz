#include <stdio.h>

int main() {
    int num = 1;
    do {
        if (num % 2 == 0) {
            printf("Even number: %d\n", num);
        } else {
            printf("Odd number: %d\n", num);
        }
        num++;
    } while (num < 10);

    return 0;
}
