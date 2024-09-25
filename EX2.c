#include<stdio.h>
#include<stdlib.h>

int main(){

    int num1, num2, rest1, rest2;
    int multiplicação = 1;
    int quocient[] = {2,3,5,7,11,13,17,19};
    int num = 0;

    printf("Insert the number: ");
    scanf("%d", &num1);
    printf("Insert the number: ");
    scanf("%d", &num2);

    while (num1 != 1 && num2 != 1){
        rest1 = num1 % quocient[num];
        rest2 = num2 % quocient[num];
        printf("%d\n", num1);
        printf("%d\n", num2);
        printf("\n\n\n");

        if (rest1 == 0 && rest2 == 0){
            num1 = num1 / quocient[num];
            num2 = num2 / quocient[num];
            multiplicação = multiplicação * quocient[num];
            num = 0;

        } if (rest1 != 0 || rest2 != 0){
            if (rest1 == 0){
            num1 = num1 / quocient[num];
            num = 0;
            } if (rest2 == 0){
            num2 = num2 / quocient[num];
            num = 0;
            }
        } if (num != 1 || num1 != 1){
            if (rest1 == 0){
            num1 = num1 / quocient[num];
            num = 0;
            } if (rest2 == 0){
            num2 = num2 / quocient[num];
            
            }
        }
    num++;

    }

    printf("%d\n\n\n", num1);
    printf("%d\n\n\n", num2);



    
    
return 0;
}

