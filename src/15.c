#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int correct_answers = 0;
    for (int i = 0; i < 10; i++) {
        printf("Question %d: ", i + 1);
        int answer = rand() % 2; // Generate a random answer between 0 and 1
        if (answer == 1) {
            printf("True\n");
            correct_answers++;
        } else {
            printf("False\n");
        }
    }
    printf("You got %d out of 10 questions correct!\n", correct_answers);
    return 0;
}
