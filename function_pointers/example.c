#include <stdio.h>
/**
 ** program will print the value of a
 ** suing a funtion pointer
 * @param a value to print
 **/

void fun(int a)
{
    printf("Value of a is %d\n", a);
}

int main(void)
{
    void (*fun_ptr)(int) = fun; // same as void (*fun_ptr)(int) = &fun;

    (fun_ptr)(222); // same as (*fun_ptr)(222)
    return (0);
}
