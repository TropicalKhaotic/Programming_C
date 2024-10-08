#include<stdio.h>
#include<stdlib.h>

    int main () {

        /*Escreva um programa no qual o usuário digita
        uma quantidade arbitrária de números inteiros positivos. Quando o usuário digitar um
        número menor ou igual a 0, o programa deve indicar o tamanho da maior sequência
        crescente observada.*/

        int array[15];
        int user_input = 1;
        int count = 0;
        int print = 0;
        int cres_num[15];

        for (int pos = 0; user_input > 0; pos++) { 
            if (print == 14 || user_input <= 0) {
                if ( user_input <= 0) {
                    break;
                    
                }
                if (print == 15) {
                    printf("Não suportado");
                    return 0;
                }
            }
            printf("Inser a number: \n");
            scanf("%d", &user_input);
            print++;
            array[pos] = user_input;
            count++;

        }
        printf("\n");
        for (int compare = 0; compare < print; compare++) {
            count = 0;
            for (int i = 0; i < print; i++ ) {
                if (array[compare] >= array[i]) {
                    count++;
                }
            }
            cres_num[count] = array[compare];
            printf("%d, ", cres_num[count]);
        }
        printf("A maior combinação crescente é: ");
        int i = 0;
        while ( i < print) {
            printf("%d, ", cres_num[i]);
            i++;
        }
    return 0;
    }   