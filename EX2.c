#include<stdio.h>
#include<stdlib.h>

  int main(){

    int input_number, parameter_h, parameter_d, parameter_u;

    int hundred, decimal, unit;
    int cinco_real,dois_real,um_real;
    int cinquenta_real,vinte_real,dez_real;

    printf("Insert the number you want to know: \n");
    scanf("%d", &input_number);

    unit = (input_number / 1) % 10;
    decimal = (input_number / 10) % 10;
    hundred = (input_number / 100) % 10;

    if (input_number > 999){
      printf ("Invalid Number");
      return 0;
    } 
    
    if (unit != 0){
       } if (unit >= 5){
        cinco_real = unit / 5;
        unit = unit % 5;
       } if (unit != 0){
          dois_real = unit / 2;
          unit = unit % 2;
       } if (unit == 1){
            um_real = unit / 1;
       }
    
    if (decimal > 0){
       } if (decimal >= 5){
        cinquenta_real = decimal / 5;
        decimal = decimal % 5;
        
       } if (decimal != 0){
          vinte_real = decimal / 2;
          decimal = decimal % 2;
       } if (decimal == 1){
            dez_real = decimal / 1;
       } else


    printf("Values of bills: \n%d - cedula de 100.\n", hundred);    
    printf("%d - cedula de 50.\n", cinquenta_real);    
    printf("%d - cedula de 20.\n", vinte_real);
    printf("%d - cedula de 10.\n", dez_real);
    printf("%d - cedula de 5.\n", cinco_real);
    printf("%d - cedula de 2.\n", dois_real);
    printf("%d - cedula de 1.\n", um_real);




}