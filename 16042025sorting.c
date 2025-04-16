#include <stdio.h>

int main(){
    int sayi;
    int min, max;

for (int i = 0; i < 5; i++) {
    printf("%d. sayiyi girin: ", i + 1);
    scanf("%d", &sayi);

    if (i == 0) {
        min = max = sayi;
    }
    else {
        if (sayi < min) min = sayi;
        if (sayi > max) max = sayi;
    }
}
printf("En kucuk: %d\n", min);
printf("En buyuk: %d\n", max);



    return 0;
}