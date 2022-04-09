#include <stdarg.h>
#include <stdio.h>

int largestNumber(int n, ...)
{
    int min = 0;
    va_list ptr;
    va_start(ptr, n);

    for (int i = 0; i < n; i++)
    {
        int temp = va_arg(ptr, int);
        min = temp > min ? temp : min;
    }
    va_end(ptr);
    return min;
}

int main(void)
{
    printf("Variadic Functions:\n");

    printf("%d\n", largestNumber(2, 1, 2));
    printf("%d\n", largestNumber(3, 3, 4, 5));
    printf("%d\n", largestNumber(4, 6, 7, 8, 9));
    return (0);
}
