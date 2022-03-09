#include <stdio.h>

/**
** main - main block
** Return: 0
**/

int main(void)
{
	int n;
	// program will print all single-digits from 0 to 10
	//
	//

	for (n = 48; n < 55; n++)
	{
		putchar(n);
		if (n != 54)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}