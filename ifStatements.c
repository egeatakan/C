#include <stdio.h>

int main(){

    int age;

    printf("\nEnter Your Age: ");
    scanf("%d", &age);

    if(age >= 18){
        printf("You are now signed up!");
    }
    else if(age == 0){
        printf("Y0u can't sign up! You were just born!");
    }
    else if(age < 0){
        printf("You haven't been borned yet!");
    }
    else{
        printf("yasinn yetmesz bayvan");
    }
    return 0;
}