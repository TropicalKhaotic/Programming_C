#include<stdio.h>
#include<stdlib.h>

int main(){

        int num1 = 0;
        int Fibonacci = 0;
        int count = 0;

        while (count <= 15){
            
            Fibonacci = (num1 - 1) + (num1 - 2);
            if (Fibonacci <= 0){
                printf("0\n");
            } else printf("%d\n", Fibonacci);
            count++;
            num1++;
        }
        
return 0;





}
