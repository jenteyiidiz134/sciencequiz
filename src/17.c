#include <stdio.h>

void print_question() {
    printf("Question: What is the capital of France?\n");
}

int main() {
    int choice;
    print_question();
    scanf("%d", &choice);
    
    if (choice == 1) {
        printf("The correct answer is Paris. Nice job!\n");
    } else {
        printf("That's incorrect. Try again.\n");
    }

    return 0;
}
