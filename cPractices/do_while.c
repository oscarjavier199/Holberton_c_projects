#include <stdio.h>

int main() {

  int i = 11;
  int square = 0;

  // Write a while loop here:
  do{
    printf("%d\t%d\n", i, i * i);
    i--;
  }
  while (i >= 0);
}
