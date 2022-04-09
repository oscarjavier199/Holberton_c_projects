#include<stdio.h>

int main()
{
    int a, b, add, subtract, multiply, modulo;
    float divide;

    printf("Enter two integers: \n");
    scanf("%d%d", &a, &b);

    add = a+b;
    subtract = a-b;
    multiply = a*b;
    divide = a/b;
    modulo = a%b;

    printf("\nAddition of the numbers = %d\n", add);
    printf("Subtraction of 2nd number from 1st = %d\n", subtract);
    printf("Multiplication of the numbers = %d\n", multiply);
    printf("Dividing 1st number from 2nd = %f\n", divide);
    printf("Modulo of 1st number from 2nd = %d\n", modulo);
    return 0;
}
