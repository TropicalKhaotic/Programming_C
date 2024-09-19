#include<stdio.h>
#include<stdlib.h>

int main(){

          int num1 = 1000;
          int part_one = 0;
          int part_two = 0;
            while (num1 <= 9999){
                part_one = num1 % 100;
                part_two = num1 / 100;
                if (num1 == (part_one + part_two) * (part_one + part_two)){
                    printf("%d\n", num1);   
                }
                num1++;
            }

            
return 0;





}
