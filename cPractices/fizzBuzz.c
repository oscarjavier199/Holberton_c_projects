#include <stdlib.h>
#include <stdio.h>

int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
	if (i % 3 == 0 && i % 5 == 0)
	{
		printf("FizzBuzz\n");
	}
	if (i % 3 == 0 && i % 5 != 0)
	{
		printf("Fizz\n");
	}
	if (i % 3 != 0 && i % 5 == 0)
	{
		printf("Buzz\n");
	}
	if (i % 3 != 0 && i % 5 != 0)
	{
		printf("%d\n", i);
	}
}
printf("\n");
return (0);
}