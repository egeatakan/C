#include <stdio.h>
#include <string.h>

int main(){
    
    char string1[] = "Ege";
    char string2[] = "Egb";
    
    int result = strncmp(string1, string2, 3);



    printf("%d", result);  
    
    if(result == 0)
    {
        printf("\nAynilar");
    }
    else
    {
        printf("\nfarklilar");
    }
    return 0;
}