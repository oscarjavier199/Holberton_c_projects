#include <stdio.h>

//print slices of pizza

int main ()
{
    int slices = 20;
    int *p = &slices;

    printf("Slices: %d\n", slices);
    printf("Slices (through pointer): %d\n", *p);

    slices = 21;
    printf("Slices: %d\n", slices);
    printf("Slices (through pointer): %d\n", *p);

    *p = 25;
    printf("Slices: %d\n", slices);
    printf("Slices (through pointer): %d\n", *p);

    return 0;
}
