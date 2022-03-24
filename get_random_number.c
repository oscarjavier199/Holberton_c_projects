#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 ** program will print a random number from 0 to 1000.
 **/

int main(void) {
  srand(time(NULL));
  int randomNumber = rand() % 1000 +1;
  printf("%d\n", randomNumber);
}
