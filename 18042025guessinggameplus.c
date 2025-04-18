#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h> 

void animasyonluYaz(const char* mesaj) {
    printf("%s", mesaj);
    fflush(stdout);
    for (int i = 0; i < 3; i++) {
        Sleep(500);
        printf(".");
        fflush(stdout);
    }
    printf("\n");
}

void yaziEfekti(const char* mesaj) {
    for (int i = 0; mesaj[i] != '\0'; i++) {
        printf("%c", mesaj[i]);
        fflush(stdout);
        Sleep(50);
    }
    printf("\n");
}

int main() {
    srand(time(NULL));
    char tekrar;

    do {
        int tutulan = rand() % 100 + 1;
        int tahmin;
        int denemeSayisi = 0;
        int maxHak = 7;

        yaziEfekti("\n SAYI TAHMIN OYUNUNA HOSGELDIN! ");
        printf("Ben 1 ile 100 arasinda bir sayi tuttum.\n");
        printf("Toplam %d hakkin var. Basla bakalim!\n", maxHak);

        while (denemeSayisi < maxHak) {
            printf("Tahminin (%d/%d): ", denemeSayisi + 1, maxHak);
            scanf("%d", &tahmin);
            denemeSayisi++;

            if (tahmin < tutulan) {
                printf("Daha buyuk bir sayi gir!\n");
            }
            else if (tahmin > tutulan) {
                printf("Daha kucuk bir sayi gir!\n");
            }
            else {
                yaziEfekti("Tebrikler! Dogru bildin!");
                printf("Deneme sayin: %d\n", denemeSayisi);
                break;
            }

            if (denemeSayisi == maxHak) {
                printf("Tahmin hakkin bitti! Dogru sayi: %d\n", tutulan);
            }
        }

        printf("Tekrar oynamak ister misin? (e/h): ");
        getchar();
        scanf("%c", &tekrar);

        if (tekrar == 'e' || tekrar == 'E') {
            animasyonluYaz("Yeniden baslatiliyor");
            system("cls");
        }

    } while (tekrar == 'e' || tekrar == 'E');

    yaziEfekti("Tesekkurler, gorusuruz! ");
    return 0;
}
