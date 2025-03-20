int main() {
    int score = 0;
    char answer = ' ';
    while (score < 10) {
        printf("Question %d: ", score + 1);
        scanf("%c", &answer);
        if (answer == 'A') {
            printf("Correct! You have scored %d points.\n", ++score);
        } else {
            printf("Incorrect. The correct answer is A. Your current score is %d points.\n", score);
        }
    }
    return 0;
}
