#include <stdio.h>

int main()
{
    int number;

    do{
        printf("Enter a positive number: ");
        scanf("%d", &number);
    } while(number <= 0);

    printf("Your number is %d\n", number);
    return 0;
}