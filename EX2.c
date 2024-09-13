#include<stdio.h>
#include<stdlib.h>
#define BETWEEN(value,min,max) (value <=max && value >= min)

  int main(){
    
    float input, calculo;
    float month_base_value[4] = { 1637.11, 2453.50, 3271.38, 4087.65};
    float deduzir_do_imposto[4] = { 122.78, 306.80, 552.15, 756.53 };
    //Use this calculator to know the tax value that need to be pay in Brazil
    printf("Insira o valor que deseja para o calculo de imposto de renda: \n");
    scanf("%f", &input);
    if (input <= month_base_value[0]){
        printf("Não existe nenhum imposto sobre este valor");
        return 0;
    } if (BETWEEN(input,month_base_value[0],month_base_value[1])){
            calculo = (input * 7.5) / 100;
            calculo = calculo - deduzir_do_imposto[0];
    } if (BETWEEN(input,month_base_value[1],month_base_value[2])){
            calculo = (input * 15) / 100;
            calculo = calculo - deduzir_do_imposto[1];
    } if (BETWEEN(input,month_base_value[2],month_base_value[3])){
            calculo = (input * 22.5) / 100;
            calculo = calculo - deduzir_do_imposto[2];
    } if (input > month_base_value[3]){
            calculo = (input * 27.5) / 100;
            calculo = calculo - deduzir_do_imposto[3]; 
    }else

     printf("O importo de renda que o usuario deve pagar é: %.2f", calculo);
   return 0;

}