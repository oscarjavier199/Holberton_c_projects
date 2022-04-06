#include <stdio.h>
#include <stdlib.h>


/**
 ** main - multiplication
 * @argc: argument count = result
 * @argv: argument values * argv
 ** return: 1
 **/

int main(int argc, char* argv[])
{
    int result;
    if (argc == 3)
    {
        result = atoi(argv[1]) * atoi(argv[2]);
        printf("%d\n", result);
        return (0);
    }
    else
    {
        printf("ERROR\n");
        return (1);
    }
}
