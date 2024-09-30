#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

   int domino_numbers = 28;
   int contador = 1;
   int four_number = 1;
   int num = 0;
   int calibration = 0;
  

    while (num < domino_numbers) {
        num += contador;
        
            
        if (contador == 5) {
            four_number = four_number + contador;
            
            four_number++;
            
            }

        if (contador > 5) {
          while (calibration + num < domino_numbers) {
                calibration = calibration;
                calibration++;

                
            } 

            if ( calibration > contador ) {
                while ( calibration > 5) {
                    four_number++;
                    calibration = calibration - contador;
                    contador++;
                }
            }
        }
           
    contador++;

    }
    
    printf("%d\n", four_number);
    return 0;
}
