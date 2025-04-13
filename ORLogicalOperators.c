#include <stdio.h>
#include <stdbool.h>

int main(){
    float temp = 25;
    bool sunny = true;

    if(temp <= 0 || temp >= 30){
        printf("\nWeather is bad");
    }
    else{
        printf("\nWeather is good");
    }
    return 0;
}