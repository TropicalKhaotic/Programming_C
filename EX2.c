#include<stdio.h>
#include<stdlib.h>
#include <string.h> 


   int concat(int num1, int num2){
        char s1[20];
        char s2[20];

        sprintf(s1, "%d", num1);
        sprintf(s2, "%d", num2);
        strcat(s1, s2);
        int c = atoi(s1);
        return c;
   }

   int main(){


    int num1 = 0 , num2 = 0;
    int multiplicação, soma, contador;
    int size = 0;
    int n = 0;
    int initial_size = 10;
    int *array = (int *)malloc(initial_size * sizeof(int));

    soma = num1 + num2;
    multiplicação = soma * soma;

    if (array == NULL) {
     printf("Memory reallocation failed\n");
     return 1;
    }
    
    while(concat(num1, num2) <= 9999){
      if(size >= initial_size){
        initial_size *= 2;
        array = (int *)realloc(array, initial_size * sizeof(int));
      } if (array == NULL) {
         printf("Memory reallocation failed\n");
         return 1;
      }
      
      array[size] = concat(num1,num2);
      size++;
      num1++;
      num2++;
    } 
    /*printf("Numbers in the array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
        }*/
    while (contador != size){
      if (multiplicação && array[n]){
        printf("%d\n%d", multiplicação, array);
        n++;
        contador++;
        
      }
      
    }
    
   return 0;
    
}
