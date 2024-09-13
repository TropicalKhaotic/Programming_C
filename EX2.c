#include<stdio.h>
#include<stdlib.h>


  int main(){

    int calculator_type;
    float side1, side2, calculator;

    printf("Please insert the number of sides: \n");
    scanf("%d", &calculator_type);
    switch (calculator_type){
    case 3:
      printf("Please insert the value of the side: \n");
      scanf("%f", &side1 /*side2*/);
      calculator = (side1 * side1 * 1.73 / 4);
      printf("The area of the triangle is: %f", calculator);
      break;

    case 4:
      printf("Please insert the value of the side: \n");
      scanf("%f", &side1 /*side2*/);
      calculator = side1 * side1;
      printf("The area of the square is: %f", calculator);
      break;
    case 6:
      printf("Please insert the value of the side: \n");
      scanf("%f%f", &side1 /*side2*/);
      calculator = 6 * (side1 * side1 * 1.73 / 4);
      printf("The area of the hexagon is: %f", calculator);
      break;

    default: 
      printf("Não sei calcular a area");
      break;
    }

   return 0;

}