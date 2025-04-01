#include <stdio.h>
int main() {
    int i;

    printf("Question 1: What is the capital of France?\n");
    printf("A) Paris\nB) London\nC) Rome\nD) Madrid\n");

    for (i = 0; i < 5; i++) {
        if (i == 3) {
            break;
        }
        printf("%d, ", i);
    }

    return 0;
}
