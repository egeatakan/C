#include <stdio.h>

int main(){
    
    const double PI = 3.14159;
    double radius;
    double area;

    printf("Enter the radius of a circle: ");
    scanf("%lf", &radius);

    area = PI * radius * radius;

    printf("Area: %lf", area);




    return 0;
}