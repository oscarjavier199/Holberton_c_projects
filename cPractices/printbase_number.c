#include <stdio.h>

/**
 ** main - main block
 ** Return: 0
 **/

int main(void)
{
	int n;

	// program will print all the numbers from 0
	// to the base number we indicate to it
	// i.e. for (n = 0; n < 100; n++)
	// or for (n = 0; n < 88; n++)

	for (n = 0; n < 88; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}