#include <stdio.h>

void findMinMax(int s1,int s2,int s3,int s4,int s5){
    int min = s1;
    int max = s1;

    if (s2 < min) min = s2;
    if (s2 > max) max = s2;

    if (s3 < min) min = s3;
    if (s3 > max) max = s3;

    if (s4 < min) min = s4;
    if (s4 > max) max = s4;

    if (s5 < min) min = s5;
    if (s5 > max) max = s5;

    printf("En buyuk sayi %d\n", max);
    printf("En kucuk sayi %d\n", min);
}

int main(){
    int s1, s2, s3, s4, s5;

    printf("1. sayiyi girin: ");
    scanf("%d", &s1);
    printf("2. sayiyi girin: ");
    scanf("%d", &s2);
    printf("3. sayiyi girin: ");
    scanf("%d", &s3);
    printf("4. sayiyi girin: ");
    scanf("%d", &s4);
    printf("5. sayiyi girin: ");
    scanf("%d", &s5);

    
    findMinMax(s1, s2, s3, s4, s5);

    return 0;
}
