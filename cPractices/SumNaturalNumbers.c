#include <stdio.h>

/**
 **
 ** program will calculate the sum
 ** of 1 + 2 + ... 100000
 **/

int main ()
{
    int sum = 0;
    for (int i = 1; i <= 10000; ++i)
    {
        sum = sum + i;
    }
    printf("The sum is %d\n", sum);
    return 0;
}
