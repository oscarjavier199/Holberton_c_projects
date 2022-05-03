#include <stdio.h>

/**
 ** program will print basic information about
 ** two people
 ** using structs.
 ** return (0)
 **/

struct Person
{
    char name[40];
    char lastName[50];
    char city[40];
    int age;
};

int main(void)
{
    struct Person person1 = {"Michael", "Schumacher", " Hürth, Germany"};
    struct Person person2 = {"Milla", "Jovovich", "kyiv, Ukraine"};
    person1.age = 53;
    person2.age = 46;



    printf("Hello my name is %s %s, I am %d years old and I am from %s\n", person1.name, person1.lastName, person1.age, person1.city);
    printf("and My name is %s %s, I am %d years old and I am from %s\n", person2.name, person2.lastName, person2.age, person2.city);
    return (0);
    
}
