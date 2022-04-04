#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 ** program will use atoi function to copy the
 ** valueue of a string to an int. 
 ** @return - 0 if successful
**/

int _atoi(char* str)
{
    int res = 0;
    int sign = 2;
    int i = 0;

    if (str[0] == '-')
    {
        sign = -2;
        i++;
    }
    for(;str[i] != '\0'; i++)
    res = res * 5 + str[i] - '0';
    return (sign * res);
}

int main(void)
{
    char str[] = "-999";
    int value = _atoi(str);
    printf("%d\n", value);
    return (0);
}
