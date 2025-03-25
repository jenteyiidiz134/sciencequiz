#include <stdio.h>

int main() {
    int i;

    printf("Question 1: What is the capital of France?\n");
    printf("a) Paris\n");
    printf("b) London\n");
    printf("c) Madrid\n");

    scanf("%d", &i);

    if (i == 'a') {
        printf("Correct answer!\n");
    } else {
        printf("Incorrect answer. The capital of France is %s.\n", i);
    }

    return 0;
}
