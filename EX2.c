#include<stdio.h>
#include<stdlib.h>

    int main(){

        float num1, num2, num3;
        float comparing_bigger, comparing_smaller, comparing_middle;

        printf("Isert 3 numbers to be compared\n");
        scanf("%f", &num1);
        scanf("%f", &num2);
        scanf("%f", &num3);

       if (num1 > num2 && num1 > num3){
            comparing_bigger = num1;
            if (num2 > num3){
                comparing_middle = num2;
                comparing_smaller = num3;
                
                
            } if (num3 > num2){
                comparing_middle = num3;
                comparing_smaller = num2;
            }  
        } if (num2 > num1 && num2 > num3){
            comparing_bigger = num2;
            if (num1 > num3){
                comparing_middle = num1;
                comparing_smaller = num3;
                
                
            } if (num3 > num1){
                comparing_middle = num3;
                comparing_smaller = num1;
            }
            
        } if (num3 > num1 && num3 > num2){
            comparing_bigger = num3;
              if (num1 > num2){
                comparing_middle = num1;
                comparing_smaller = num2;
                
                
            } if (num2 > num1){
                comparing_middle = num2;
                comparing_smaller = num1;
            }   
        }

     printf("%.3f is the biggest number.\n%.3f is the number between de biggest and the smallest.\n%.3f is the smallest number", comparing_bigger, comparing_middle, comparing_smaller);

         

    return 0;
}
