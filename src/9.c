// Random number generator using C++
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  srand(time(0)); // seeding random number generator
  int num = rand() % 10 + 1; // generate a random number between 1 and 10
  cout << "Random number: " << num << endl;
  return 0;
}
