#include <stdio.h>
int main()
{
    double n1 = 100.0, n2 = -400.5, n3 = 200.5;

    if (n1 >= n2 && n1 >= n3)
    {
        printf("%.2lf is the largest number.\n", n1);
    }
    else if (n2 >= n1 && n2 >= n3)
    {
        printf("%.2lf is the largest number.\n", n2);
    }
    else
    {
    printf("%.2lf is the largest number.\n", n3);
    }
    return 0;
}
