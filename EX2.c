#include<stdio.h>
#include<stdlib.h>

int main(){

        int num1 = 1; 
        int soma, calculo, divisor;
        
        while (num1 <= 100){
            soma = 0;
            divisor = 1;

                while (divisor < num1){

                    calculo = num1 % divisor;
                    
                    if (calculo == 0){
                        soma = soma + divisor;
                    } divisor++;
                }

                if (soma == num1){
                    printf ("%d\n", soma);
                    }num1++;
        }
                
        
            
        
            
        
        
        
return 0;





}
