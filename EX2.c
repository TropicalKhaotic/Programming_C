#include<stdlib.h>
#include<stdio.h>

    int main(){

        char op;
        float num1, num2, results;

        printf("Welcome to TropicalKaothic Calculator\n");
        printf("Insert what number you want to calculate\n");
        printf("Number - 01: ");
        scanf("%f", &num1);
        printf("Now please type what kind of operator do you want (+, -, *, /): \n");
        scanf(" %c", &op);
        printf("Insert what number you want to calculate\n");
        printf("Number - 02: ");
        scanf("%f", &num2);

        if (op == '+'){
            results = num1 + num2;
        } if (op == '-'){
            results = num1 + num2;
        } if (op == '*'){
            results = num1 + num2;
        } else results = num1 / num2;

        printf("%3.f", results);

    return 0;
}
