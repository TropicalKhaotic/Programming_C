#include<stdio.h>
#include<stdlib.h>
#include<time.h>




    int main () {
        int num = 0;
        int test = 0;
        int count = 0;
        srand(time(0));
        num = rand() % 500 + 1;

        while (test != num) {
           printf("Adivinhe o numero do jogo: ");
           scanf("%d", &test);
           if (test < num) {
            printf("O numero digitado é menor que o numero do jogo\n\n");
            count++;
           }
           if (test > num) {
            printf("O numero digitado é maior que o numero do jogo\n\n");
            count++;
            }
            if (test == num) {
                printf("Voce acertou!!!\n Sua classificação é: ");
                switch (count) {
                    case 1 ... 3 :
                        printf("Muito sortudo");
                        break;
                    case  4 ... 6:
                        printf("Sortudo");
                        break;
                    case 7 ... 10:
                        printf("Normal");
                        break; 
                }
            }
            
            if (count > 10) {
                printf("Tente novamente");
                return 0;
            }
        }
    }   