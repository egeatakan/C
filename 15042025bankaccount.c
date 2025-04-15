#include <stdio.h>

void greetUser(char name[]){
    printf("Hello, %s! Welcome to our program.\n", name);
}

float balance = 0.0;

void printMenu(){
    printf("\nPlease select an option:\n");
    printf("1. Deposit Money\n");
    printf("2. Withdraw Money\n");
    printf("3. Check Balance\n");
    printf("4. Exit\n");
    printf("Your choice: ");
}

void depositMoney(){
    float amount;
    printf("Enter deposit amount: ");
    scanf("%f", &amount);

    if (amount < 0) {
        printf("Invalid amount!\n");
    }
    else {
        balance += amount;
        printf("Deposited %.2f. New balance: %.2f\n", amount, balance);
    }
}

void withdrawMoney(){
    float amount;
    printf("Enter withdrawal amount: ");
    scanf("%f", &amount);
    
    if (amount < 0) {
        printf("Invalid amount!\n");
    }
    else if (amount > balance){
        printf("Insufficient funds. Current balance: %.2f\n", balance);
    }
    else {
        balance -= amount;
        printf("Withdrew %.2f. New balance: %.2f\n", amount, balance);
    }
}

void checkBalance(){
    printf("Current balance: %.2f\n", balance);
}

int main()
{
    char name[50];
    int choice;
    
    printf("Enter your name: ");
    scanf("%49s", name); 
    
    greetUser(name);
    
    printf("Enter initial balance: ");
    scanf("%f", &balance);
    
    while (1) {
        printMenu();
        scanf("%d", &choice);
        
        switch(choice){
            case 1:
                depositMoney();
                break;
            case 2:
                withdrawMoney();
                break;
            case 3:
                checkBalance();
                break;
            case 4:
                printf("Thank you for using our app. Goodbye!\n");
                return 0;
            default:
                printf("Invalid option. Try again please!\n");
        }
    }
    return 0;
}
