#include <stdio.h>

int main() {

  // Write your loop here
for (int i = 99; i > 0; i--) {
  printf("%d bottles of wine on the table.\n", i);
  printf("Take one down and pass it around.\n");
  printf("%d bottles of wine on the table.\n", i - 1);
}

}
