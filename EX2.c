#include<stdio.h>
#include<stdlib.h>
#define BETWEEN(value,min,max) (value <=max && value >= min)

  int main(){
    
    float input, calculo;
    float month_base_value[4] = { 1637.11, 2453.50, 3271.38, 4087.65};
    float deduzir_do_imposto[4] = { 122.78, 306.80, 552.15, 756.53 };
    /*Por exemplo, se a base de cálculo é
de R$10.000,00, a alíquota é de 27,5%, ou seja, R$2750,00. Deduzimos R$756,53 da parcela e
obtemos como resultado final R$1993,47 de imposto devido.
Escreva um programa que receba como entrada a base de cálculo mensal de um trabalhador e
retorne o imposto de renda devido. 
*/
    //Base de calculo mensal
    scanf("%f", &input);
    if (input <= month_base_value[0]){
        printf("Não existe nenhum imposto sobre este valor");
    } if (BETWEEN(input,1637.11,2453.50)){
            calculo = (input * 7.5) / 100;
            printf("%2.f", calculo);

    }else
   return 0;

}