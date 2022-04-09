#include <stdarg.h>
#include <stdio.h>

int addNumbers(int n, ...)
{
    int sum = 0;

    va_list ptr;

    va_start(ptr, n);
    for (int i = 0; i < n; i++)

        sum += va_arg(ptr, int);
    va_end(ptr);
    return sum;
}

int main(void)
{
    printf("Variadic Function:\n");
    printf("1 + 2 = %d\n", addNumbers(2, 1, 2));

    printf("3 + 4 + 5 = %d\n", addNumbers(3, 3, 4, 5));

    printf("6 + 7 + 8 + 9 = %d\n", addNumbers(4, 6, 7, 8, 9));

    return (0);
}
