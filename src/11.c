 int main() {
   int i, j;
   // declare and initialize an array of size 10
   int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

   // shuffle the array using a random number generator
   srand(time(NULL));
   for (i = 0; i < 10; i++) {
     j = rand() % 10;
     int temp = numbers[i];
     numbers[i] = numbers[j];
     numbers[j] = temp;
   }

   // print the shuffled array
   for (i = 0; i < 10; i++) {
     printf("%d ", numbers[i]);
   }
   return 0;
}