#include "2-pi.h"
#include <stdio.h>

/**
 **program will find the radius of given
 *
 * Return: Always 0.
 */

int main(void)
{
  int radius;
  float area;
  printf("Enter radius of circle\n");
  scanf("%d", &radius);
  area = PI*radius*radius;
  printf("Area of circle is %.2f\n", area);
  return 0;
}