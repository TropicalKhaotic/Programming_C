#include<stdio.h>
#include<stdlib.h>

    int main(){

        int CEP;
        int Telefone [11];

        printf("Bem Vindo ao programa de insercao de dados!\n");

        printf("Primeiro insira o seu primeiro nome: \n");
            char Nome[20];
            scanf("%s", &Nome);
        printf("Agora insira o seu Telefone: \n");
            scanf("%d", &Telefone);
        printf("Por ultimo insira o seu CEP: \n");
            scanf("%d", &CEP);

        printf("Nome: %s\nTelefone: %d\nCEP: %d", Nome, Telefone, CEP);

    return 0;
    }
