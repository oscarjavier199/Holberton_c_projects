#include <stdio.h>

// program will print the first letter of 'procezzor'
// and will change the 'zz' to 'ss' printing the right spelling

int main()
{
    char p[] = "procezzor";
    printf("%c\n", p[0]);

    p [5] = 's';
    p [6] = 's';
    printf("%s\n", p);
}
