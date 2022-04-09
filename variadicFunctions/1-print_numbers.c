#include "variadic_functions.h"

/**
 ** print_numbers - function that prints numbers
 **followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 ** return: (void)
 **/

void  print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list valist;
    unsigned int i = 0;

    va_start(valist, n);

    for (; i < n; i++)
    {
        printf("%d", va_arg(valist, int));
        if (separator && i < n - 1)
        printf("%s\n", separator);
    }
    va_end(valist);
}

int main(void)
{
    print_numbers(", ", 4, 0, 98, -1024, 402);
    return (0);
}
