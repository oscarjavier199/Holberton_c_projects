#include <stdio.h>

/**
 ** swap - will swap the value of two int 
 ** @x: first int 
 ** @y: second int
 ** return: exit if success
 **/

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(void)
{
    int a = 5;
    int b = 15;

    swap(&a, &b);
    printf("New value of a = %d\nNew value of b = %d\n", a, b);
    return 0;
}
