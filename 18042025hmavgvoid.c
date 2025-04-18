#include <stdio.h>
void sayiGir(int dizi[], int adet){
    for(int i = 0; i < adet; i++){
        printf("%d. Sayiyi girin: ", i+1);
        scanf("%d", &dizi[i]);
    }
}

float ortalamaBul(int dizi[], int adet){
    int toplam = 0;
    for (int i = 0; i < adet ; i++){
        toplam += dizi[i];
    }
    return (float)toplam/adet;
}

int ortalamaUstunde(int dizi[], int adet, float ort){
    int sayac = 0;
    printf("Ortaladan buyuk sayilar: ");
    for (int i = 0; i < adet; i++) {
        if (dizi[i] > ort) {
            printf("%d ", dizi[i]);
            sayac++;
        }
    }
    printf("\n");
    return sayac;
}

int main() {
    int sayilar[5];
    int adet = 5;

    sayiGir(sayilar, adet);
    
    float ort = ortalamaBul(sayilar, adet);
    printf("Ortalama: %.2f\n", ort);

    int ustAdet = ortalamaUstunde(sayilar, adet, ort);
    printf("Toplam %d sayi ortalamanin ustunde.\n", ustAdet);

    return 0;
}