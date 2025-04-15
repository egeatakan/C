#include <stdio.h>

void printMenu(){
    printf("\nPlease select an option:\n");
    printf("1. Toplama\n");
    printf("2. Cikarma\n");
    printf("3. Carpma\n");
    printf("4. Bolme\n");
    printf("5. Exit\n");
    printf("Your choice: ");
}

void toplama(float a,float b){
    float result = a + b;
    printf("Result: %.2f + %.2f = %.2f\n",a,b,result);
}

void cikarma(float a,float b){
    float result = a - b;
    printf("Result: %.2f - %.2f = %.2f\n",a,b,result);
}

void carpma(float a,float b){
    float result = a * b;
    printf("Result: %.2f * %.2f = %.2f\n",a,b,result);
}

void bolme(float a,float b){
    if (b == 0){
        printf("Hicbir sayi 0'a bolunemez\n");
    }
    else {
        float result = a / b;
        printf("Result: %.2f / %.2f = %.2f\n",a,b,result);
    }
}

int main()
{
    float num1,num2;
    int choice;

    printf("Birinci sayiyi gir: ");
    scanf("%f", &num1);
    printf("Ikinci sayiyi gir: ");
    scanf("%f", &num2);

    while (1) {
        printMenu();
        scanf("%d", &choice);
        
        switch(choice){
            case 1:
                toplama(num1,num2);
                break;
            case 2:
                cikarma(num1,num2);
                break;
            case 3:
                carpma(num1,num2);
                break;
            case 4:
                bolme(num1,num2);
                break;
            case 5:
                printf("Hesap makinesi kapatiliyor!..\n");
                return 0;
            default:
                printf("Uygun olmayan sayi girisi. Tekrar deneyin!\n");
        }
    }
    return 0;
}


