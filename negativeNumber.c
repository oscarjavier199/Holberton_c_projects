#include <stdio.h>

/**
 ** this program takes input from user
 ** until a negative number is entered
 **/

int main ()
{
    double number;
    
    printf("Enter a number: ");
    scanf("%lf", &number);

    while (number >= 0.0)
    {
        printf("You entered %.2lf\n", number);

        printf("Enter a number: ");
        scanf("%lf", &number);
    }
    return 0;
}
