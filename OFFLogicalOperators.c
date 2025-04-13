#include <stdio.h>
#include <stdbool.h>

int main(){
    float temp = 25;
    bool sunny = true;

    if(!sunny){
        printf("\nIt's cloudy outside");
    }
    else{
        printf("\nIt's sunny outside");
    }
    return 0;
}