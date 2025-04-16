#include <stdio.h>
#include <stdbool.h>

bool isPrime(int number){
    if (number < 2) {
        return false;
    }
    
    for (int i = 2; i < number ; i++){
        if (number % i == 0){
            return false;
        }
    }

    return true;
}

int main(){
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    bool result = isPrime(num);
    printf("Number is %s\n", result ? "prime" : "not prime");

}