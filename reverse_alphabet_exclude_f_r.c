#include <stdio.h>

/**
 ** main - main block 
 ** Return: 0
 **/

int main (void)
{
    int ch;

    // program prints the alphabet in reverse
    // except 'f' and 'r'
    // we can only use putchar

    for (ch = 'z'; ch >= 'a'; ch--)
    {
        if (ch != 'f' && ch != 'r')
        {
            putchar(ch);
        }
    }
    putchar('\n');
    return (0);
}
