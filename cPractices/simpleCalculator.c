#include <stdio.h>
int main ()
{
    char operator;
    int n1 = 14, n2 = 5, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    switch (operator)
    {
        case '+':
        printf("Result = %d\n", n1 + n2);
        break;
        case '-':
        printf("Result = %d\n", n1 - n2);
        break;
        case '*':
        printf("Result = %d\n", n1 * n2);
        break;
        case '/':
        printf("Result = %d\n", n1 / n2);
        break;
        default:
        printf("ERROR! operator is not correct");
    }
    return 0;
}
