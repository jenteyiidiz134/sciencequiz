#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 10; i++) {
        printf("Question %d: ", i);
        int answer;
        scanf("%d", &answer);

        if (answer == i) {
            printf("Correct!\n");
        } else {
            printf("Incorrect. The correct answer is %d.\n", i);
        }
    }

    return 0;
}
