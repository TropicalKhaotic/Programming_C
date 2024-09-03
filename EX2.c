#include<stdlib.h>
#include<stdio.h>



    int main(){
    
    int insert_max_velocity;
    int car_velocity;
    int multa, subtração;

    printf("Multas Vago\n");
    printf("insert the speed limit of the avenue: ");
    scanf("%d", &insert_max_velocity);
    printf("Now insert the car velocity: ");~
    scanf("%d", &car_velocity);
    if (car_velocity > insert_max_velocity){
        subtração = car_velocity - insert_max_velocity;
        multa = (subtração * 5);
        printf("This fine has a value of: %d",  multa);
            
    }else printf("It dosent have any fine");
    
    return 0;
}
