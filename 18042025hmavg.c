#include <stdio.h>

int main() {

    int sayilar[5];
    int toplam = 0;
    float ortalama;
    int adet = 5;

    for (int i = 0; i < adet; i++){
        printf("%d. Sayiyi giriniz: ", i+1);
        scanf("%d", &sayilar[i]);
        toplam += sayilar[i];
    }

    ortalama = (float) toplam / adet;
    printf("Ortalama: %.2f\n", ortalama);

    int ust = 0;
    printf("Ortalamadan buyuk sayilar: ");
    for (int i = 0; i < adet ; i++){
        if (sayilar[i] > ortalama){
            printf("%d ", sayilar[i]);
            ust++;
        }
    }

    printf("\nToplam %d adet sayi ortalama ustunde\n", ust);
    
    return 0;
}