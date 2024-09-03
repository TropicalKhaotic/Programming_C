#include<stdlib.h>
#include<stdio.h>



    int main(){
    
    int insert_number;
    int dezenas;
    int dezenas_proprias;
    int unidades;


        printf("Please Insert a Number between 0 - 99: ");
        scanf("%d", &insert_number);
        if (insert_number < 0 || insert_number > 99){
                printf("Invalid number input, check if it is between 0 - 99 \n" );
            
        }else printf("%d", insert_number);


    return 0;
}
