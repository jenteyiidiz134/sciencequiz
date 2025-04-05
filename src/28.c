#include <stdio.h>

int main() {
    int i;

    // Generate 5 unique numbers between 0 and 9
    while (i <= 4) {
        if (i % 2 == 1) { // Odd number is odd
            printf("Number %d: Even\n", i);
        } else {
            printf("Number %d: Odd\n", i);
        }
        i++;
    }

    return 0;
}
