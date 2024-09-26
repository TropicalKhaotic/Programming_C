#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

int main(){

    int click_input;
   
    printf("Teste de Velocidade de Resposta do Usuario: Digite o numero que aparecera apos um tempo aleatorio\n");

    for (int quantidade = 1; quantidade < 5; quantidade++){
    int random_sleeptime = rand () % 10000 + 1000;
    int random_number = rand() % 1000 + 3;
             
    clock_t ti,tf;
    srand(time(NULL));
    Sleep(random_sleeptime);
    printf("%d\n", random_number);
    ti = clock();
    scanf("%d", &click_input);
    tf = clock() - ti;

    if (click_input == random_number){
        printf("O tempo de Resposta foi: %.4lf Segundos.\n\n", (double)tf / CLOCKS_PER_SEC);
    } if (click_input != random_number){
        printf("Você errou o numero :/\n\n");
    }
    
    }

    return 0;
}
