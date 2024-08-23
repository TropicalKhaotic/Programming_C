#include<stdio.h>
#include<stdlib.h>
#include<math.h>



    int main(){

           int num1 , num2 , num3 , ReferenceNumber;

           printf("Triangle Calculator, please insert 3 numbers: \n");
            printf("Number 1: \n");
                scanf("%d", &num1);
            printf("Number 2: \n");
                scanf("%d", &num2);
            printf("Number 3: \n");
                scanf("%d", &num3);
                if (num1 + num2 >= num3 && num1 + num3 >= num2 && num3+ num2 >= num1){
                        if (num2 == ReferenceNumber && num3 == ReferenceNumber){
                                    printf("This is a Equilateral Triangle\n");
                        } else if (ReferenceNumber == num2 || ReferenceNumber == num3 || num2 == num3){
                                    printf("This is a Isosceles Triangle\n");
                        } else printf("This is a Escaleno Triangle\n");
                } else printf("This is not a Triangle");


              /*  switch (){
                case ReferenceNumber > a+b:
                    printf("This is not a triangle");
                        break;
                case a == b:
                    printf("This is a isosceles");
                        break;
                case
                }*/




return 0;

}
            //Fix errors with void or change it to the main code

