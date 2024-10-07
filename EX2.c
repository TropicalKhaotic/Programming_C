#include<stdio.h>
#include<stdlib.h>


    // Fazer um programa para encontrar todos os pares de números amigáveis entre 1 e 100000.
    // Um par de números é amigável quando cada um deles é igual à soma dos divisores do outro. 

    int sum_of_divisors(int num) {
        int sum = 0;
        for ( int divisor = 1; divisor <= num / 2; divisor++) {
            if ( num % divisor == 0 ) {
                sum += divisor;
            }
        }

        return sum;
    }

    int main(){
        for ( int test = 1; test <= 100000; test++) {
            int calculo = sum_of_divisors(test);
            if (calculo > test && sum_of_divisors(calculo) == test) {
                printf("Os numeros são amigaveis: %d e %d\n", test, calculo);
            }
        }
    }
