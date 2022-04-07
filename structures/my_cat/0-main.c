#include <stdio.h>
#include "cat.h"

/**
 ** main - check the code
 **
 ** Return: Always 0.
 **/

int main(void)
{
    struct cat my_cat;

    my_cat.name = "Tyger";
    my_cat.age = 5.1;
    my_cat.owner = "oskar";
    printf("My name is %s, and I am %.1f :)!\n", my_cat.name, my_cat.age);
    return (0);
    
}
