#include <stdio.h>

int main() {
  int pin = 0;
  int tries = 0;

  printf("Global Bank:\n");
  printf("Enter your PIN: ");
  scanf("%d", &pin);

  tries++;

  while (pin != 4200 && tries < 10) {
    printf("Enter your PIN: ");
    scanf("%d", &pin);
    tries++;
  }

  if (pin == 4200) {
    printf("PIN accepted!\n");
    printf("You now have access.\n");
  }
}