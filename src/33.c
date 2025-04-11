#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    printf("Please select one of these: 1. Math 2. Science 3. History\n");
    int choice = 0;
    do {
        switch (choice) {
            case 1:
                printf("Math: %d points\n", n * 5);
                break;
            case 2:
                printf("Science: %d points\n", n * 3);
                break;
            case 3:
                printf("History: %d points\n", n * 8);
                break;
        }
    } while (scanf("%d", &choice) != EOF);
    return 0;
}
