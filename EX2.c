#include<stdio.h>
#include<stdlib.h>

int main(){

    int num1, num2;

    printf("Insert the number to be devided: ");
    scanf("%d", &num1);
    printf("Insert the dividend number: ");
    scanf("%d", &num2);

    while (num2 != 0){
        int b = num2;
        num2 = num1 % num2;
        num1 = b;          
    }

    printf("Seu MDC é equivalante a: %d", num1);
    
    
    
return 0;
}

