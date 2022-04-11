#include <stdio.h>

/**
 **The ~ operator should be used carefully.
 ** The result of ~ operator on a small number can be a big number if
 ** the result is stored in an unsigned variable. And the result may
 ** be a negative number if the result is stored in a signed variable 
 ** (assuming that the negative numbers are stored in 2’s complement form where the leftmost bit is the sign bit)
 **/
  
int main()
{
    unsigned int x = 888;
    printf("Signed Result %d\n", ~x);
    printf("Unsigned Result %ud\n", ~x);
    return 0;
}
