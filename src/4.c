#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int random_number = rand() % 10 + 1;
    printf("Random number: %d\n", random_number);
    return 0;
}
