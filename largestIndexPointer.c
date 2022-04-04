#include <stdio.h>

/**
 ** program will return the largest index from
 ** a given array
 ** @n: number of elements
 ** @return: 0 if success
 **/

int largestIndex (int* arr, int n)
{

int i;
int max = arr[0];


for(i = 1; i < n; i++)
    if (arr[i] > max)
    max = arr[i];

    return max;

}

int main(void)
{

int arr[] = {134, 333, 44, 888, 90, 999, 456, 34, 34543, 23, 2334, 23, 1, 23, 555};
int n = sizeof(arr)/sizeof(arr[0]);

printf("The largest index in the given array is = %d\n", largestIndex(arr, n));

return 0;

}
