#include<stdio.h>
#include<stdlib.h>
#include<math.h>
    int main(){

        double ponto_inicial;
        double velocidade_inicial;
        double altura_relativa_do_solo;
        double angulo_lacamento;
        double Cal1;
        double Distancia_Maxima
            /*  gravidade = 9.81; chão = 0*/


        scanf("%lf",&ponto_inicial);
        scanf("%lf",&velocidade_inicial);
        scanf("%lf",&altura_relativa_do_solo);
        scanf("%lf",&angulo_lacamento);


        /*Distancia = V0^2/G *sen20  */
        Cal1 = pow(velocidade_inicial) * cos(angulo_lacamento);
        Distancia_Maxima =
        printf ("%lf", Cal1);



        return 0;
}
