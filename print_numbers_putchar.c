#include <stdio.h>

/**
** main - main block
** Return: 0
**/

int main(void)
{
	int n;
	char ch;

	// program will print numbers from 0 to 10
	// and also the alphabet, except 'd' and 'j'
	// only using putchar.

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'd' && ch != 'j')
		putchar(ch);
	}
	if (ch != 'd' && ch != 'j')
	{
	putchar('\n');
	return (0);
	}
}
