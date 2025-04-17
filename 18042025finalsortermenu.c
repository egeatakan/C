#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

void findMinMax(int sayilar[], int adet, int* max, int* min) {
    *min = sayilar[0];
    *max = sayilar[0];

    for (int i = 0; i < adet ; i++) {
        if (sayilar[i] < *min) *min = sayilar[i];
        if (sayilar[i] > *max) *max = sayilar[i];
    }
}

void findAverage(int dizi[], int adet) {
    int toplam = 0;
    for (int i = 0 ; i < adet ; i++) {
        toplam += dizi[i];
    }
    float ort = (float)toplam / adet;
    printf("Ortalama : %.2f\n", ort);
}

void sorter(int dizi[], int adet) {
    for (int i = 0; i < adet ; i++) {
        for (int j = i + 1 ; j < adet ; j++) {
            if (dizi[i] > dizi[j]) {
                int tmp = dizi[i];
                dizi[i] = dizi[j];
                dizi[j] = tmp;
            }
        }
    }

    printf("Siralanmis sayilar: ");
    for (int i = 0; i < adet; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");
}

void rastgelesayi(int dizi[], int adet, int min, int max) {
    for (int i = 0; i < adet; i++) {
        dizi[i] = rand() % (max - min + 1) + min;
    }

    printf("Uretilen rastgele sayilar:\n");
    for (int i = 0; i < adet; i++) {
        printf("%d. sayi: %d\n", i + 1, dizi[i]);
    }
}

int main() {
    srand(time(NULL));
    int sayilar[5];
    int secim;
    int adet = 5;

    printf("5 Adet sayi girin:\n");
    for (int i = 0; i < adet; i++) {
        printf("%d. sayi: ", i + 1);
        scanf("%d", &sayilar[i]);
    }

    while (true) {
        printf("\n=== MENU ===\n");
        printf("1 - En kucuk ve en buyuk sayiyi bul\n");
        printf("2 - Ortalama hesapla\n");
        printf("3 - Sayilari sirala\n");
        printf("4 - Cikis\n");
        printf("5 - Rastgele 5 sayi uret\n");
        printf("Seciminizi yapin: ");
        scanf("%d", &secim);

        if (secim == 1) {
            int min, max;
            findMinMax(sayilar, adet, &max, &min);
            printf("En kucuk: %d\n", min);
            printf("En buyuk: %d\n", max);
        }
        else if (secim == 2) {
            findAverage(sayilar, adet);
        }
        else if (secim == 3) {
            sorter(sayilar, adet);
        }
        else if (secim == 4) {
            printf("Programdan cikiliyor...\n");
            break;
        }
        else if (secim == 5) {
            int min, max;
            printf("Minimum degeri giriniz: ");
            scanf("%d", &min);
            printf("Maksimum degeri giriniz: ");
            scanf("%d", &max);

            rastgelesayi(sayilar, adet, min, max);
        }
        else {
            printf("Gecersiz secim!\n");
        }
    }

    return 0;
}
