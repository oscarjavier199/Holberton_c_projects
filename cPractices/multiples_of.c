#include <stdio.h>

/**
 * main - Prints naturals multiples of 5 and 8
 *
 * Return: Always 0.
 */
int main(void)
{
int a, b;

for (a = 1; a < 1024; a++)
{
if ((a % 5) == 0 || (a % 8) == 0)
b += a;
}
printf("%d\n", b);
return (0);
}