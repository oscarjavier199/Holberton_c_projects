#include <stdio.h>

/**
 * main - name function
 * while: cicle condition
 * Return: 0
 */

int main(void)
{

    // program will print the numbers from 0 to 99
    // in the following format: 00 01, 00 02, 00 03 ...
    // only used putchar
    int i, j, k, m;

    i = 48;
    while (i < 58)
    {
        j = 48;
        while (j < 58)
        {
            m = j + 1;
            k = i;
            while (k < 58)
            {
                while (m < 58)
                {
                    putchar(i);
                    putchar(j);
                    putchar(32);
                    putchar(k);
                    putchar(m);
                    if (i < 57 || j < 56 || k < 57 || m < 57)
                    {
                        putchar(44);
                        putchar(32);
                    }
                    m++;
                }
                m = 48;
                k++;pp
            }
            j++;
        }
        i++;
    }
    putchar('\n');
    return (0);
}
