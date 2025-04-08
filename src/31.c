#include <stdio.h>
#include <stdlib.h>

int main() {
    int score = 0;

    printf("Hello, Science Quiz!\n");
    printf("Let's answer these questions:\n");

    for (int i = 1; i <= 5; i++) {
        printf("Question %d: ", i);
        scanf("%d", &answer);

        if (answer == correct_answer) {
            score++;
        }
    }

    printf("You got %d out of 5 questions right.\n", score);

    return 0;
}
