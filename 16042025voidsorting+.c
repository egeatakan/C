#include <stdio.h>

void findMinMax(int sayilar[], int adet) {
    int enKucuk = sayilar[0];
    int enBuyuk = sayilar[0];

    for (int i = 1; i < adet ; i ++){
        if (sayilar[i] < enKucuk) enKucuk = sayilar[i];
        if (sayilar[i] > enBuyuk) enBuyuk = sayilar[i];
    }

    printf("En buyuk sayi: %d\n", enBuyuk);
    printf("En kucuk sayi %d\n", enKucuk);
}

int main(){
    int sayilar[5];

    for (int i = 0; i < 5; i++){
        printf("%d. sayiyi giriniz: ", i+1);
        scanf("%d", &sayilar[i]);
    }

    findMinMax(sayilar, 5);
    return 0;
}