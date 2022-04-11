#include "main.h"

/**
 ** set_bit - check the code 
 * @n: number to set bit
 * @index: index to set bit
 * @return: (0)
 **/

int set_bit(unsigned long int *n, unsigned int index){
    if (index > sizeof(n) * 8)
    return (-1);
    *n = 1 << index | *n;
    return (1);
}

int main(void)
{
    unsigned long int n;

    n = 1024;
    set_bit(&n, 5);
    printf("%lu\n", n);
    n = 0;
    set_bit(&n, 10);
    printf("%lu\n", n);
    n = 98;
    set_bit(&n, 0);
    printf("%lu\n", n);
    return (0);
}