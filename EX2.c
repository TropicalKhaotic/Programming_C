#include<stdio.h>
#include<stdlib.h>

int main(){

//Dada a afirmação: “A tem o dobro da idade que B tinha quando A tinha a idade que B tem.
//Quando B tiver a idade de A, somarão 81 anos.”. Fazer um programa para calcular as idades
//de A e B no método “força bruta” (tentativa e erro com todos os valores inteiros possíveis). 

    int A,B,diferenca;
    int soma;

    while (soma <= 81){
    A = 1;

    B = A - (A-B);
    A = 2*(2*B-A);
    diferenca = A - B;
    A = A + diferenca;
    B = (A + B) - B;
    soma = A + B;
    A++;

    } printf("%d", soma);
     
 


return 0;
}
