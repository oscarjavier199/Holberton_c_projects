#include "variadic_functions.h"

/**
 ** sum_them_all - program returns the sum of all its parameters.
 * @n: number of parameters
 ** return: sum of all its parameters
 **/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list ap;

	va_start(ap, n);

	sum = 0;
	for (i = 0; i < n; i++)
	sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}

int main(void)
{
    int sum;

    sum = sum_them_all(2, 98, 1024);
    printf("%d\n", sum);
    sum = sum_them_all(4, 98, 1024, 402, -1024);
    printf("%d\n", sum);    
    return (0);
}