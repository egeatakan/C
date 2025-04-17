#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int tutulan = rand() % 100 + 1;
    int tahmin;
    int denemesayisi = 0;

    printf("-----///Welcome to the Guessing GAME\\\\\\-----\n");
    printf("I selected a number between 0 to 100.Can you guess it?\n");

    while (1){
        printf("Your guess: ");
        scanf("%d", &tahmin);
        denemesayisi++;

        if (tahmin > tutulan){
            printf("Daha kucuk bir sayi gir!\n");
        }
        else if (tahmin < tutulan){
            printf("Daha buyuk bir sayi girin!\n");
        }
        else {
            printf("Tebrikler %d. denemede bildin!\n", denemesayisi);
            break;
        }
    }
    return 0;
}