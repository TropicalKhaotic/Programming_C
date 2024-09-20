#include<stdio.h>
#include<stdlib.h>

    int main(){

    double Num1;
    double Num2;
    double Num3;

    printf("Insira tres valores para calcular a media \n");
    printf("Valor Num 1: \n");
    scanf("%lf",&Num1);
    printf("valor Num 2: \n");
    scanf("%lf",&Num2);
    printf("valor Num 3: \n");
    scanf("%lf",&Num3);
    double Soma = Num1 + Num2 + Num3;
    double Media = Soma / 3;
    printf("O valor da media equivalante a: %lf\n", Media );

        return 0;
}
