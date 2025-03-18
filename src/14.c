#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  // Initialize random seed
  srand(time(NULL));
  
  // Generate a random number between 1 and 5
  int randNum = rand() % 5 + 1;
  
  // Print the random number
  printf("Random number: %d\n", randNum);
  
  return 0;
}
