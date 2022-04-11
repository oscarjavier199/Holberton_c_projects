#include <stdio.h>

/**
 ** The left-shift and right-shift operators are equivalent to multiplication
 ** and division by 2 respectively. As mentioned in point 1,
 ** it works only if numbers are positive. 
 ** 
 **/
  
int main()
{
    int x = 19;
    printf("x << 1 = %d\n", x << 1);
    printf("x >> 1 = %d\n", x >> 1);
    return 0;
}
