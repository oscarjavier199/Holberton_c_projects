#include <stdio.h>

/**
** main - main block
** Return: 0
**/
int main(void)
{
	int n, m;

	// program will print all possible combinations of
	// two digits
	// from 0 to 90

	for (n = 48; n <= 56; n++)
	{
		for (m = 49; m <= 57; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
