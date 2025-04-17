#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rastgelesayi(int a,int b){
    int sayi = rand() % (b - a + 1) + a;
    printf("Rastgele saiy: %d\n", sayi);
}

int main(){
    int min, max;
    srand(time(NULL));
    printf("\n---RASTGELE SAYI URETICI---\n");
    printf("Sayi minimum kac olsun: ");
    scanf("%d", &min);
    printf("Sayi maksimum kac olsun: ");
    scanf("%d", &max);
    
    rastgelesayi(min, max);

 

    return 0;
}