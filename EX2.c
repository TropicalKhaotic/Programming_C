#include<stdio.h>
#include<stdlib.h>
#include<math.h>
    int main(){

            //its necessary to see if the ralative height input has something to do with the calculate of distance//
        double velocidade_inicial;
        double angulo_lacamento;
            //  gravidade = 9.81;//
        printf("Vamos calcular a distancia maxima de um lançamento\n");
        printf("Insira o valor da velocidade inicial em m/s: \n");
        scanf("%lf",&velocidade_inicial);
        printf("Insira o valor do angulo de lancamento: \n");
        scanf("%lf",&angulo_lacamento);
            //Distancia = (Vi^2/G) *sen 2*(angulo//
        double theta = angulo_lacamento;
        double cal1 = pow(angulo_lacamento, 2) * sin(theta* 2);
        double Distancia_Maxima = cal1/ 9.81;
        printf ("O valor da distancia maxima e: %lf\n", cal1);


        return 0;
}
