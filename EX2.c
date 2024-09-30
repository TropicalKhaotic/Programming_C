#include<stdio.h>
#include<stdlib.h>

int main(){

    int num_input = 0;
    int sum = 0;
    int results = 0;
    int count = 0;

    for ( num_input; num_input >= 0; count++) {
        scanf("%d", &num_input);

        if (num_input > 0){
        sum = sum + num_input;
        }

    } count--;
    
    results = sum / count;
    printf("%d", results);


    return 0;
}
