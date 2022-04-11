#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 * @return: equivalent of decimal number
 **/

void print_binary(unsigned long int n){
    if (n > 1)
    print_binary(n >> 1);
    putchar((n & 1) + '0');
}

int main(void)
{
    print_binary(0);
    printf("\n");
    print_binary(1);
    printf("\n");
    print_binary(98);
    printf("\n");
    print_binary(1024);
    printf("\n");
    print_binary((1 << 10) + 1);
    printf("\n");
    return (0);
}