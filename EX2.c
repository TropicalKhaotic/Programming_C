#include<stdio.h>
#include<stdlib.h>
#define BETWEEN(value, min, max) (value <= max && value >= min)

  int main(){

    float hour_value, result, num_hour, extra_value;

   printf("Salary Calculator \nPlease insert the number of hours worked: ");
   scanf("%f", &num_hour);
   printf("Insert the hour value: ");
   scanf("%f", &hour_value);

   // Calculator

    if (num_hour <= 40){
      result = num_hour * hour_value;
      printf("The salary value is equivalant to: %.3f", result);
      return 0;

    } if (BETWEEN(num_hour,40,60)){
      extra_value = (num_hour - 40) * 0.5;
      result = (num_hour * hour_value) + extra_value;
      printf("The salary value is equivalant to: %.3f", result);

    } if (num_hour > 60){
      extra_value = (num_hour - 40) * 1;
      result = (num_hour * hour_value) + extra_value;
      printf("The salary value is equivalant to: %.3f", result);
      
    }
    
    





}