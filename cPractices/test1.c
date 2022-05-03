#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * @brief 
 * 
 */

int main(void)
{
    size_t sz = 0;
    ssize_t len = 0;
    char* line = NULL;
    FILE* f = fopen("names.txt", "r");
    while((len = getline(&line, &sz, f)) >= 0)
    {
        printf("%s", line);
    }
    free(line);
    return EXIT_SUCCESS;
}
