#include <stdio.h>

/**
 ** The & operator can be used to quickly check
 ** if a number is odd or even. The value of expression
 ** (x & 1) would be non-zero only if x is odd, otherwise the value would be zero.
 **/
  
int main()
{
    int x = 333;
    (x & 777) ? printf("Odd\n") : printf("Even\n");
    return (0);
}
