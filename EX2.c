#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

int main(){
    // Fazer um programa para encontrar todos os pares de números amigáveis entre 1 e 100000.
    //Um par de números é amigável quando cada um deles é igual à soma dos divisores do outro. 

    int num = 0;
    int division = 0;
    int num_dividend = 0;

    for (num = 1; num <= 100000; num++) {
        for (int num_division = 1; num_division < num; num_division++) {
            if (num % num_division == 0) {
                division += num_division;
            } 
        }

        for (int num_division = 1; num_division <= num; num_division++) {
            if (division % num_division == 0) {
                num_dividend += num_division;
            } 
        }

        if ( num_dividend == num) {
            printf("São amigaveis os numeros %d e %d\n", division, num_dividend);
        } 
        
        if ( num_dividend != num) {
            division = 0;
            num_dividend = 0;
        }
    }
    return 0;
}
