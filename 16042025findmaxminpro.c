#include <stdio.h>

void findMinMax(int sayilar[], int adet, int* max, int* min){
    *min = sayilar[0];
    *max = sayilar[0];

    for (int i = 0; i < adet ; i++){
        if (sayilar[i] < *min) *min = sayilar[i];
        if (sayilar[i] > *max) *max = sayilar[i];
    }
}

int main(){
    int sayilar[5];

    for (int i = 0; i < 5 ; i++){
        printf("%d. sayiyi gir: ", i+1);
        scanf("%d", &sayilar[i]);
    }

    int enKucuk, enBuyuk;
    findMinMax(sayilar, 5, &enBuyuk, &enKucuk);
    printf("En kucuk sayi: %d\n", enKucuk);
    printf("En buyuk sayi: %d\n", enBuyuk);

    return 0;
}