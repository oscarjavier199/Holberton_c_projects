#include <stdio.h>
#include <stdlib.h>

/**
 * program will print the multiples of 5
 **/


int main()
{
    int i,fnum,lnum;
    printf("Enter the range to print multiples of 5\n");
    scanf("%d%d",&fnum,&lnum);
    i=fnum;
    do
    {
      if((i%5)==0)
      {
          printf("%d \n",i);
      }
      i++;
    }
    while(i<=lnum);
    return 0;
}