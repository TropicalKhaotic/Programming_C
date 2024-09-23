#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PI  3.14159 / 180
int main(){

    //TODO Create a way to input the altura_lançamento into the calculator

    double altura_lançamento, velocidade_inicial, angulo_lançamento, tempo_sec;
    double Altura_max, Alcance, voy, vox, ang, X, Y;
    
    printf("Please insert the numbers to calculate: \n");
    /*printf("altura_lançamento \n");
    scanf("%lf", &altura_lançamento);*/
    printf("velocidade inicial \n");
    scanf("%lf", &velocidade_inicial);
    printf("angulo de lançamento \n");
    scanf("%lf", &angulo_lançamento);

    ang = angulo_lançamento * PI;
    voy = velocidade_inicial * sin(ang);
    vox = velocidade_inicial * cos(ang);
    tempo_sec = voy / 10;
    Altura_max = pow(voy, 2) / 20;
    Alcance = vox * (tempo_sec * 2);
    float dados = Alcance / 10;
    float dados_2 = Altura_max / 5;

    for (int tamanho = 0; tamanho <= 10 ; tamanho++){

        if(tamanho <= 5){
            X = dados * tamanho;
            Y = dados_2 * tamanho;
        } if (tamanho > 5 ){
            X = dados * tamanho;
            Y = Y - dados_2;
        }

        printf("X %.2f, Y %.2f\n", X, Y);
    }
    return 0;
}
