#include <stdio.h>

int main()
{
    int n = 20;
    long int result = 1;

    //show error if n is negative
    if (n < 0){
        printf("ERROR!\n");
    }
    //if n is non-negative
    else
    {
        for (int i = 2; i <= n; ++i){
            result *= i; //result = result*i;
        }
        printf("Factorial of %d = %li\n", n, result);
    }
    return 0;
}
