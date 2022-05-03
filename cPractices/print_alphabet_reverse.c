#include <stdio.h>

/**
** main - main block
** Return: 0
**/

int main(void)
{
	char ch;
    // this program will print the alphaber in reverse 
    // but we can only use the function putchar.

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
