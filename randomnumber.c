#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// A simple C program that prints a random number//
// Written by Frankdegret//

int main() {

   int length = 4; // length of the random word
   int i;

   srand(time(NULL)); // seed the random number generator

   printf("Random number: ");
   for (i = 0; i < length; i++) {
      int numbers = rand() %10 ; // generate a random number between 0 and 9
      printf("%d", numbers);
   }
   printf("\n");

   return 0;
} 

