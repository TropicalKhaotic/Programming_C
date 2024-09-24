#include<stdio.h>
#include<stdlib.h>

int main(){


    int num1,num2;
    int contador;
    int resultado;

    printf("Please insert a number to be calculated\nThe dividend number: \n");
    scanf("%d", &num1);
    printf("Insert Quotient number: \n");
    scanf("%d", &num2);
    resultado = num1;

    while (resultado > 0 && resultado >= num2){
        resultado = resultado - num2;
        contador++;   
    }
    
    printf("O quociente é: %d\n", contador);
    printf("O resto da divisão é: %d\n", resultado);
        
return 0;

}
