#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 ** program will use atoi function to copy the
 ** value of a string to an int. 
 ** @return - 0 if successful
 **/

int main(void)
{
    int value;
    char str[50];

    strcpy(str, "888");
    value = atoi(str);
    printf("String value = %s.\nInt value = %d.\n", str, value);
    
    strcpy(str, "atoi function");
    value = atoi(str);
    printf("String value = %s.\nInt value = %d.\n", str, value);

    return (0);
}
