int main() {
    srand(time(NULL));
    int randomNumber = rand() % 10 + 1;
    printf("The random number is %d\n", randomNumber);
}
