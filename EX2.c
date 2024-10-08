#include<stdio.h>
#include<stdlib.h>


    int MMC_calculator(int num, int num_2) {
        int num_rest = 0;
        int num_rest2 = 0;
        int prime_numbers[8] = { 2, 3, 5, 7, 11, 13, 17, 19};
        int count = 0;
        while ( num != 1 || num_2 != 1 ) {
            num_rest = num % prime_numbers[count];
            num_rest2 = num_2 % prime_numbers[count];

            if (num_rest == 0 && num_rest2 == 0) {
                num = num / prime_numbers[count];
                num_2 = num_2 / prime_numbers[count];
                printf("%d, ", prime_numbers[count]);
                count = 0;
            }
            if (num_rest != 0 || num_rest2 != 0) {
                if (count == 7) {
                    break;
                } 
                count++;
            }
        } 
    return 1;
    }  
    int main () {

        int num_input1 = 0;
        printf("Insira um numero a ser calculado: ");
        scanf("%d", &num_input1);
        int num_input2 = 0;
        printf("Insira um numero a ser calculado: ");
        scanf("%d", &num_input2);
        printf("Os multiplos simultaneos de %d e %d são: \n", num_input1,num_input2);
        printf("%d",  MMC_calculator(num_input1,num_input2));

    }   