#include <stdio.h>
#include <string.h>

int main()
{
    char name[25];

    printf("\nWhat is your name?: ");
    fgets(name, 25, stdin);
    name[strlen(name) -1] = '\0';

    printf("Hello %s", name);

    return 0;
}