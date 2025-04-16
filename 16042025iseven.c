#include <stdio.h>
#include <stdbool.h>

bool isEven(int number){
    return number % 2 == 0;
}

int main(){
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    bool result = isEven(num);
    printf("Number is %s\n", result ? "even" : "odd");
    

    return 0;
}