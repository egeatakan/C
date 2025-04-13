#include <stdio.h>

int main(){

    const double PI = 3.14159;
    double radius;
    double circumFerence;

    printf("\nEnter radius of a circle: ");
    scanf("%lf", &radius);

    circumFerence = 2 * PI * radius;

    printf("circumference: %lf",circumFerence);


    return 0;
}