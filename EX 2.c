#include<stdio.h>
#include<stdlib.h>

    int main(){

    char Aluno1 [20];
    char Aluno2 [20] ;
    char Aluno3 [20] ;
    char Aluno4 [20] ;
    double Nota1;
    double Nota2;
    double Nota3;
    double Nota4;

     printf("Insira os nomes do aluno e suas respectivas notas nota: \n");
         printf("Nomes\n");
            scanf("%s\n%s\n%s\n%s", &Aluno1, &Aluno2,&Aluno3, &Aluno4);
         printf("Notas\n");
            scanf("%lf\n%lf\n%lf\n%lf", &Nota1, &Nota2,&Nota3, &Nota4);

     printf("Alunos:  Notas:\n");
      printf("%s  %lf\n" "%s  %lf\n" "%s  %lf\n" "%s  %lf\n ", Aluno1, Nota1, Aluno2,  Nota2, Aluno3, Nota3, Aluno4, Nota4 );





        return 0;
}
