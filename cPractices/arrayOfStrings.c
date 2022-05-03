#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 ** program will use atoi function to copy the
 ** valueue of a string to an int. 
 ** @return - 0 if successful
**/

int main(void)
{
    const char* words2[] = {"My ", "cat ", "likes ", "sleeping.\n", NULL};

    const char** ptr = words2;
    while (*ptr != NULL)
    {
        printf("%s", *ptr);
        ptr++;
    }
    return (0);
}
