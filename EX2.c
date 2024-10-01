#include<stdio.h>
#include<stdlib.h>

int main(){

    int num_input = 1000;
    int num_comparison = 1100;
    int num_1 = 0;
    int num_2 = 0;

    if (num_input >= 1000 && num_input <= 9999) {
        // Use this if you want to implement user input.
        //printf("insert the number you want to compare: ");
        //scanf("%d\n", num_comparison);
        if (num_comparison >= 1000 && num_comparison <= 9999) {
            num_1 = num_input / 100;
            num_2 = num_input % 100;
            for (int count = 0; count <= 3; count++) {
                if (count == 1 && num_1 == num_comparison / 100) {
                    printf("Eles possuem uma sequencia com os numeros: %d\n", num_1);
            
                }
                if (count == 2 && num_2 == num_comparison % 100) {
                    printf("Eles possuem uma sequencia com os numeros: %d\n", num_2);
                    
                }
                if (count == 3 ) {
                    int comp_1 = num_comparison / 100;
                    int comp_2 = num_comparison % 100; 
                    num_1 = num_1 % 10;
                    num_2 = num_2 / 10;
                    if ( num_1 == comp_1 % 10 && num_2 == comp_2 / 10 ) {
                        printf("Eles possuem uma sequencia com os numeros: %d%d\n", num_1,num_2);
                        return 0;
                    }
                    if ( num_input / 100 != num_comparison / 100  &&  num_input % 100 != num_comparison % 100) {
                    printf("Não existe nenhuma sequencia entre os numeros");
                    }
                } 
            }
        } //else printf("O numero de comparacao e maior o outro numero, impossivel realizar se a uma sequencia");
    }
    if ( num_input >= 100 && num_input <= 999 ) {
        // Use this if you want to implement user input.
        //printf("insert the number you want to compare: ");
        //scanf("%d\n", num_comparison);
        if (num_comparison >= 100 && num_comparison <= 999) {
            num_1 = num_input / 10;
            num_2 = num_input % 100;
            for (int count = 1; count <= 3; count++) {
                if (count == 1 && num_1 == num_comparison / 10) {
                    printf("Eles possuem uma sequencia com os numeros %d\n", num_1);
                }
                if (count == 2 && num_2 == num_comparison % 100) {
                    printf("Eles possuem uma sequencia com os numeros: %d\n", num_2);
                }
                if ( count == 3 && (num_1 != num_comparison / 10 && num_2 != num_comparison % 100) ) {
                    printf("Eles não possuem nenhuma sequencia");
                    
                }
            }    
        } //else printf("O numero de comparacao e maior que o outro numero, impossivel realizar se a uma sequencia");
    } 
    if ( num_input >= 0 && num_input <=99 ) {
        if ( num_input == num_comparison ) {
            printf("Eles possuem uma sequencia com os numeros: %d\n", num_input);
        } 
        if ( num_input != num_comparison ) {
            printf("Eles não possuem uma sequencia com os numeros");
        }
    }
        
    return 0;
}
