#include<stdio.h>
#include<stdlib.h>
#include<time.h>


    int prime_calculation(int num) {
        int num_start = 2;
        int num_test = 0;
        int contador = 0;
        int number = 0;

        while (num_start < num) {
            for(int division = 1; division <= num_start; division++) {
                num_test = num_start % division;
                if (num_test == 0) {
                    contador++;
                }
            }
            if (contador == 2) {
                number = num_start;
            }
            contador = 0;
            num_start++;
        }
        return number; 
    }


    int main () {

        int num_input = 0;
        printf("Insira um numero a ser calculado: ");
        scanf("%d", &num_input);
        printf("O numero primo mais alto é: %d", prime_calculation(num_input));
        
    }   