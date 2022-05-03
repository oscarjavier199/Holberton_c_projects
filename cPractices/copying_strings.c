#include <string.h>
#include <stdio.h>

//this code will copy the content of s1 to s2
//and print the result "ABCD"

int main()
{
    char s1[] = "ABCD";
    char s2[5];

    strcpy (s2, s1);
    printf("%s\n", s2);
}
