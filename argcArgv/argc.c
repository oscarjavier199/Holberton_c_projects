#include <stdio.h>
#include <stdlib.h>

/**
 ** main - prints the number of arguments of the program
 * @argc: argument count
 * @argv: argument values
 ** return: always 0
 **/

int main(int argc, char *argv[] __attribute__((unused)))
{
    printf("%d\n", argc - 1);
    return (0);
}
