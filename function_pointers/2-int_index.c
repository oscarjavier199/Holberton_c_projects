#include <stdio.h>

/**
 ** int_index - function that prints a name
 * @array: array to run
 * @size: size of an array
 * @cmp: function to pointer
 */

int int_index(int *array, int size, int (*cmp)(int)){
    int i = 0;
    if (!array || !cmp)
    return (-1);

    for (; i < size; i++)
    {
        if (cmp(array[i]) != 0)
        return (i);
    }
    return (-1);
}
