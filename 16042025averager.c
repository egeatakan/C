#include <stdio.h>

// Ortalama hesaplayan fonksiyon
void ortalamaBul(int sayilar[], int adet) {
    int toplam = 0;

    for (int i = 0; i < adet ; i++){
        toplam = toplam + sayilar[i];
    }

    float ortalama = (float)toplam / adet;
    printf("Ortalama %.2f\n", ortalama);
}

int main(){
    int sayilar[5];

    for (int i = 0; i < 5 ; i++){
        printf("%d. sayiyi gir: ", i+1);
        scanf("%d", &sayilar[i]);
    }

    ortalamaBul(sayilar, 5);

    return 0;
}
