#include <stdlib.h> //for rand() and srand()

int main(void) {
  int i;
  srand((unsigned int) time(NULL));
  i = rand() % 10 + 1;
  return i;
}
