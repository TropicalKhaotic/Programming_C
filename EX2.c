#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

int main(){

    unsigned int num_input = 1200;
    unsigned int num_comparison = 1000;
    int num_1 = 0;
    int num_2 = 0;
    int calculation [7];
    calculation[0] = (num_1 = num_input / 100) / 10;
    calculation[1] = (num_1 = num_input / 100) % 10;
    calculation[2] = (num_1 = num_input % 100) / 10;
    calculation[3] = (num_1 = num_input % 100) % 10;
    calculation[4] = num_input / 100;
    calculation[5] = num_input / 10;
    calculation[6] = num_input % 100;
    bool test = false;

    int Analizer [2] = {num_comparison / 100, num_comparison % 100};
   
    if (num_input >= 1000 && num_input <= 9999) {
        // Use this if you want to implement user compare input.
        //printf("insert the number you want to compare: ");
        //scanf("%d\n", num_comparison);
        for (int count = 0; count <= 4; count++ ) {
            num_2 = calculation [count];
            if ( num_2 == (Analizer[0] / 10) || num_2 == Analizer[0] % 10 || num_2 == Analizer[1] / 10 || num_2 == Analizer[1] % 10) {
                test = true;
            } 
            if ( !test ) { 
                printf("test");
                return 0;
            }
        }  
    }
    if ( num_input >= 100 && num_input <= 999 ) {
        // Use this if you want to implement user compare input.
        //printf("insert the number you want to compare: ");
        //scanf("%d\n", num_comparison);
        if ( num_comparison >= 100 && num_comparison <= 999) {  
            for (int count = 2; count <= 4; count++ ) {
            num_2 = calculation [count];
            if ( num_2 == Analizer[0] || num_2 == Analizer[1] / 10 ||  num_2 == Analizer[1] % 10) {
                } else { printf("O numero nao possui permutação"); 
                    return 0;
                }
            } 
        } 

        if ( num_comparison < 100 ); {
            for (int count = 2; count != 4; count++ ) {
                num_2 = calculation [count];
                if ( num_2 == Analizer[0] * 10 ||  num_2 == Analizer[1] * 10) {

                } else { printf("O numero nao possui permutação"); 
                    return 0;
                }
            }
        }
    }    
    if ( num_input >= 0 && num_input <= 99 ) {
        // Use this if you want to implement user compare input.
        //printf("insert the number you want to compare: ");
        //scanf("%d\n", num_comparison);
        if (num_comparison >= 0 && num_comparison <= 99) {
                for (int count = 4; count != 6; count++ ) {
                num_2 = calculation [count];
                if ( num_2 == Analizer[0] || Analizer) {

                } else { printf("O numero nao possui permutação"); 
                    return 0;
                }
            } 
        }
    }


    printf("O numero: %d , é uma permutação de: %d ", num_comparison, num_input);   
    return 0;
}
