#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // initialize random seed
    int numQuestions = 10; // number of questions in the quiz
    int correctAnswers = 0; // number of correct answers

    for (int i = 0; i < numQuestions; i++) {
        // generate a random question and answer
        int randQuestion = rand() % numQuestions + 1;
        char* randAnswer = "correct"; // replace with actual answer

        // ask the user to answer the question
        printf("What is the capital of France?\n");

        // check if the user's answer is correct
        if (strcmp(randAnswer, "correct") == 0) {
            printf("Correct! You earned a point!\n");
            correctAnswers++;
        } else {
            printf("Incorrect. Better luck next time.\n");
        }
    }

    // print the final score
    printf("Your score is %d out of %d\n", correctAnswers, numQuestions);
    return 0;
}
