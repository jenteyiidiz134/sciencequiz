#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // initialize random seed

    int correct = 0; // count of correct answers
    for (int i = 1; i <= 10; i++) {
        printf("Question %d: ", i);
        switch (rand() % 4) { // generate a random question number between 1 and 4
            case 1:
                printf("What is the capital of France?\n");
                break;
            case 2:
                printf("What is the largest planet in our solar system?\n");
                break;
            case 3:
                printf("What is the smallest country in the world?\n");
                break;
            case 4:
                printf("What is the highest mountain in the world?\n");
                break;
        }
        char answer[10]; // store user's answer
        scanf("%s", &answer); // get user's answer
        if (strcmp(answer, "Paris") == 0 || strcmp(answer, "Jupiter") == 0 || strcmp(answer, "Vatican City") == 0 || strcmp(answer, "Mount Everest") == 0) { // check if user's answer is correct
            printf("Correct!\n");
            correct++; // increment correct count
        } else {
            printf("Incorrect\n");
        }
    }
    printf("Your final score is %d out of 10.\n", correct); // print final score
    return 0;
}
