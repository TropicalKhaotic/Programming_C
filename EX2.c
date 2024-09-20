#include<stdio.h>
#include<stdlib.h>

    int main(){

        double Tempo;
        double Horas;
        double Minutos;


        printf("Digite um tempo em segundos: \n");
        scanf("%lf" , &Tempo  );
        printf("Seu tempo em horas: " "%lf\n", Tempo / 3600);
        printf("Seu tempo em minutos: " "%lf\n", Tempo / 60);
        printf("Seu tempo em segundos: ""%lf\n", Tempo);

        return 0;
}
