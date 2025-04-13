#include <stdio.h>

int main(){

    char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    switch(grade){
        case 'A':
            printf("perfectA\n");
            break;
        case 'B':
            printf("perfectB\n");
            break;
        case 'C':
            printf("perfect\n");
            break;
        default:
            printf("Enter correct form");
        }

    return 0;
}