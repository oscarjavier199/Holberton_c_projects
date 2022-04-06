#include <stdio.h>
#include <stdlib.h>

/**
 ** main - prints all the arguments the program receives
 * @argc: argument count 
 * @argv: argument values
 ** return: always 0
 **/

int main(int argc, char *argv[])
{
    int i = 0;
    for (; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    return (0);
}
