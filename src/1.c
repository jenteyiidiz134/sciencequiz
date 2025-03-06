#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Structure for storing information about each question
struct Question {
    char* text; // Text of the question
    int answer; // Correct answer
};

// Array of questions to be asked
const struct Question questions[] = {
    {"What is the boiling point of water?", 100},
    {"What is the atomic number of oxygen?", 8},
    {"What is the molecular weight of nitrogen gas?", 28.01},
    {"What is the chemical symbol for potassium?", "K"},
    {"What is the boiling point of mercury?", 350}
};

// Function to get a random question from the array
struct Question* getRandomQuestion() {
    srand(time(NULL)); // Seed the RNG with the current time
    int index = rand() % sizeof(questions) / sizeof(struct Question); // Get a random index
    return &questions[index]; // Return the question at that index
}

int main() {
    struct Question* question = getRandomQuestion(); // Get a random question
    printf("What is your answer to '%s'?\n", question->text); // Print the question text
    int answer; // Variable to store the user's answer
    scanf("%d", &answer); // Read the user's answer from stdin
    if (answer == question->answer) { // Check if the answer is correct
        printf("Correct!\n"); // Print a message if the answer is correct
    } else {
        printf("Incorrect. The correct answer is %d.\n", question->answer); // Print an error message if the answer is incorrect
    }
    return 0;
}
