#include "main.h"

/**
 ** flip_bits - funtion that returns the number
 * @n: first number
 * @m: second number
 * @return: (0)
 **/

unsigned int flip_bits(unsigned long int n, unsigned long int m){
    unsigned int flipbit = 0;
    unsigned long int xor = n ^ m;

    for (; xor; xor >>= 1)
    {
        if (xor & 1)
        flipbit++;
    }
    return (flipbit);
}

int main(void)
{
    unsigned int n;

    n = flip_bits(1024, 1);
    printf("%u\n", n);
    n = flip_bits(402, 98);
    printf("%u\n", n);
    n = flip_bits(1024, 3);
    printf("%u\n", n);
    n = flip_bits(1024, 1025);
    printf("%u\n", n);
    return (0);
}