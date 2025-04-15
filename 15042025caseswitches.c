#include <stdio.h>

int main()
{
    int day;
    printf("Gun giriniz: ");
    scanf("%d", &day);

    switch(day){
        case 1:
            printf("Pazartesi\n");
            break;
        case 2:
            printf("Sali\n");
            break;
        case 3:
            printf("Carsamba\n");
            break;
        case 4:
            printf("Persembe\n");
            break;
        case 5:
            printf("Cuma\n");
            break;
        default:
            printf("Gecersiz gun\n");
            break;
    }
    return 0;
}