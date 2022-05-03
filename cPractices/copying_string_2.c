#include <string.h>
#include <stdio.h>

int main()
{
    char src[] = "Banana";
    char dst[7];

    char pan[] = "How vexingly quick daft zebras jump!";
    int len = strlen (pan) +1;
    char dst2[len];

 
    // if we dont have an empty variable like int len = 0;
    // we can copy the characters from pan to dst2 only using:
    // char dst2[36]; 
    // 36 being the number of characters on pan.

    strcpy (dst, src);
    printf("%s\n", dst);

    strcpy (dst2, pan);
    printf("%s\n", dst2);
}
