#include <stdio.h>
#include <math.h>

int main(){

    double A;
    double B;
    double hypotenuse;

    printf("A kenarinin uzunlugunu girin: ");
    scanf("%lf", &A);
    printf("B kenarinin uzunlugunu girin: ");
    scanf("%lf", &B);

    hypotenuse = sqrt(A*A+B*B);

    printf("Side C: %.1lf", hypotenuse);


    return 0;
}