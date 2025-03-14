

int main() {
	// Initialize variables
	int score = 0;
	char answer[5];
	bool correct = false;

	// Ask the questions and check the answers
	for (int i = 0; i < 10; i++) {
		printf("Question %d: ", i + 1);
		scanf("%s", &answer[5]);
		if (strcmp(answer, "correct") == 0) {
			score++;
		}
	}

	// Print the final score
	printf("Your score is: %d\n", score);
	return 0;
}