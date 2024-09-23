#include<stdio.h>
#include<stdlib.h>

int main(){


        int number_input, resultado;
        int divisor = 1, contador = 0;
        
        printf("PLease insert a number: \n");
        scanf("%d", &number_input);
        
        while (divisor <= number_input){
            resultado = number_input % divisor;
                if (resultado == 0){
                    contador++;
                    

                } divisor++;
               
                
            } if (contador == 2){
                printf("O numero %d é primo", number_input);
                return 0;

            } printf("O numero %d não é primo", number_input);
            
            
        
        
return 0;





}
