#include <stdio.h>
#include <string.h> //this is very important

int main()
{
    char s1[] = "abcd";
    char s2[] = "efghi";
    strcat (s1, s2);
    printf("%s\n", s1);
}
//output will be "abcdefghi"
