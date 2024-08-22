#include<stdio.h>
#include<stdlib.h>
#include<math.h>
    int main(){
            //Use this to consult if the number is even or odd//
            float num;
            printf("insert a number: \n");
                scanf("%f", &num);
                float num2 = fmod(num , 2);
                (num2 == 0)? printf("%.2f is even", num) : printf ("%.2f is odd.", num);


        return 0;
}
