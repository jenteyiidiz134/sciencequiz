#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int score = 0;
    srand(time(NULL));

    for (int i = 1; i <= 10; i++) {
        printf("Question %d: ", i);
        scanf("%d", &score);
        if (score > 0) {
            score += rand() % 3 + 1;
        } else {
            score -= rand() % 2 + 1;
        }
    }

    printf("Your final score is: %d\n", score);
    return 0;
}
