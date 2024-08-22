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
                num1 = ReferenceNumber;
               calculo();

        return 0;

}
            //Fix errors with void or change it to the main code

                    void calculo(){
                             if (num2 == ReferenceNumber & num3 == ReferenceNumber){
                                    printf("This is a Equilateral Triangle");
                                    num2 = ReferenceNumber;
                             } else if (num2 > ReferenceNumber){
                                    num2 = ReferenceNumber;
                             } else if (num3 > ReferenceNumber){
                                    num3 = ReferenceNumber;
                             }
