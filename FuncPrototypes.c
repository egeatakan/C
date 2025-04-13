#include <stdio.h>


void hello(char[], int); 
int main()
{
    char name[] = "Ege";
    int age = 21;

    hello(name, age);

    return 0;
}



void hello(char name[], int age)
{
    printf("\n Hello %s,", name);
    printf("\n You are %d years old", age);
}