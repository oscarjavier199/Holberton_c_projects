/**
 ** program will print all natural numbers from 1 to n
 ** entered by user
 **/

#include <stdio.h>

int main()
{
    int i, n;

    // input upper limit from user
    printf("Enter any number: ");
    scanf("%d", &n);

    printf("Natural numbers from 1 to %d : \n", n);

    /**
     * start loop counter from 1 (i = 1) and go till n (i<=n)
     * increment the loop count by 1 to get the next value.
     * for each repetition print the value of i.
     **/

    for (i = 0; i < n; i++)
    {
        printf("%d  ", i);
    }
    {
        printf("\n");
    }
    return 0;
}
