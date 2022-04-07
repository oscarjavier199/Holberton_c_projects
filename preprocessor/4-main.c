#include <stdio.h>
#include "4-function_like_macro.h"

/**
 ** main - check the code
 **
 ** Return: Always 0.
 **/

int main(void)
{
    int i;
    int j;
    i = ABS(-55) * 10;
    j = ABS(99) * 10;
    printf("%d, %d\n", i, j);
    return (0);
}
