#include <stdio.h>
#include <unistd.h>

/* one-line description */

/**
** print_alphabet_x10 - displays each letter of the alphabet in lowercase
**/

int main (void)
{
    // program will print 23 times the alphabet
    // only using putchar

	char ch;
	int i = 0;

	while (i < 23)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			putchar(ch);
			ch++;
		}
		putchar('\n');
		i++;
	}
}