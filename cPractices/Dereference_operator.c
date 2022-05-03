#include <stdio.h>

int main()

{
    int k = 2000;

    int* ptr =&k;

    printf("%i\n", *ptr);

    *ptr = 88961;
    printf("%i\n", k);
}
