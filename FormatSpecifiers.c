#include <stdio.h>

int main(){

// %c character
// %s string
// %f float
// %lf double
// %d integer
//
// %.1  decimal precision
// %1   minimum field width
// %-   left align

float item1 = 5.75;
float item2 = 10.00;
float item3 = 100.99;

printf("Item 1: $%-8.2f\n", item1);
printf("Item 1: $%-8.2f\n", item2);
printf("Item 1: $%-8.2f\n", item3);




    return 0;    
}