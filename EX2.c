#include<stdio.h>
#include<stdlib.h>

int main(){

    int num1;
    float rest;
    int num = 0;
    int quocient[] = {2,3,5,7,11,13,17,19};

    printf("Please insert a number: ");
    scanf("%d", &num1);
    printf("%d\n", num1);

    while (num1 >= 0){
    rest = num1 % quocient[num];
    if (num1 == 1){
        return 0;
    } if (rest == 0){
        num1 = num1 / quocient[num];
        num = 0;
        printf("%d\n",num1);

    } if (rest > 0) {
        num++;
    }
    }
    
    
return 0;
}

