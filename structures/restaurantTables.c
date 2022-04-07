#include <stdio.h>

/**
 ** program will print information about some restaurant tables
 ** using structs.
 ** return (0)
 **/

struct Table
{
    int lenght;
    int width;
    int height;
    char color[20];
};

int main(void){
    int table1Lenght = 24;
    int table1Width = 24;
    int table1Height = 20;
    char table1Color[20] = "Dark Brown";

    struct Table table1 = {24, 24, 20, "Dark Brown"};   
    printf("Table 1 characteristics are:\nLenght: %dcm\nWidht: %dcm\nHeight: %dcm\nColour: %s\n", table1Lenght, table1Width, table1Height, table1Color);

    int table2Lenght = 42;
    int table2Width = 18;
    int table2Height = 32;
    char table2Color[20] = "Matte Brown";

    struct Table table2 = {42, 18, 32, "Matte Brown"};
    printf("\nTable 2 characteristics are:\nLenght: %dcm\nWidht: %dcm\nHeight: %dcm\nColour: %s\n", table2Lenght, table2Width, table2Height, table2Color);

    return (0);    
}
