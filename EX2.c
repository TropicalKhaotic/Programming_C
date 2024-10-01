#include<stdio.h>
#include<stdlib.h>

int main(){

    int num_input = 3;
 
    int num_1 = 0;
    int num_2 = 0;
    int verification = 0;

        if ( num_input >= 1000 && num_input <= 9999) {
            num_1 = num_input / 100;
            num_2 = num_input % 100;
            num_1 = num_1 / 10;
            num_2 = num_2 / 10;
            if (num_1 == 3 || num_2 == 3) {
                printf("O numero %d possui o numero 3 em sua composição", num_input);
                
            } 
            
            if (num_1 != 3 && num_2 != 3) {
                num_1 = num_input / 100;
                num_2 = num_input % 100;
                num_1 = num_1 % 10;
                num_2 = num_2 % 10;
                if (num_1 == 3 || num_2 == 3) {
                    printf("O numero %d possui o numero 3 em sua composição", num_input);
                    

                } else printf("O numero %d não possui o numero 3 em sua composição", num_input);
                    
                

            } 
            
        }
        if ( num_input >= 100 && num_input <= 999) {
            num_1 = num_input / 100;
            num_2 = num_input % 100;
            num_2 = num_2 / 10;
            if ( num_1 == 3 || num_2 ==3 ) {
                printf("O numero %d possui o numero 3 em sua composição", num_input);
                
            } 
            
            if ( num_1 != 3 && num_2 != 3 ) {
                num_2 = num_input % 100;
                num_2 = num_2 % 10;
                if ( num_2 == 3) {
                    printf("O numero %d possui o numero 3 em sua composição", num_input);
                    return 0;

                } else printf("O numero %d não possui o numero 3 em sua composição", num_input);
            }
        }
        if ( num_input >= 10 && num_input <= 99) {
            num_1 = num_input / 10;
            num_2 = num_input % 10;
            if ( num_1 == 3 || num_2 ==3 ) {
                printf("O numero %d possui o numero 3 em sua composição", num_input);
                return 0;

            } printf("O numero %d não possui o numero 3 em sua composição", num_input);
        }
        if ( num_input <= 9) {
            if ( num_input == 3) {
                printf("O numero possui o numero 3 em sua composição");
                return 0;
                
            } printf("O numero não possui o numero 3 em sua composição ");

        }

    return 0;
}
