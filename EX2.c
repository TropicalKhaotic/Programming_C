#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

int main(){
    // Switch selector.
    int test_input = 0;
    int test_comparison = 0;

    unsigned int num_input = 7845;
    unsigned int num_comparison = 10000;
    int num_comp_input [4];
    int num_comp_compa [4];
    int calculation [4]; 

    // Use this to know if the number is a permutação of another.
    bool test = true;

    // Use this to know what type of number the user choose.
    if ( num_input >= 1000 && num_input <= 9999 ) {
        test_input = 1;
    }
    if ( num_input >= 100 && num_input <= 999 ) {
        test_input = 2;
    }
    if ( num_input >= 1 && num_input <= 99 ) {
        test_input = 3;
    } 
    // Use this to know what type of number the user choose.
    if ( num_comparison >= 1000 && num_comparison <= 9999 ) {
        test_comparison = 1;
    }
    if ( num_comparison >= 100 && num_comparison <= 999 ) {
        test_comparison = 2;
    }
    if ( num_comparison >= 1 && num_comparison <= 99 ) {
        test_comparison = 3;
    }
    if ( num_comparison > 9999 || num_input > 9999) {
        printf("Não e possivel realizar a conta de permutação com este numero.");
        return 0;
    }
    // Use this to separate the num input into an array.
    switch (test_input) {
    case 1:
        calculation[0] = ( num_input / 100) / 10;
        calculation[1] = ( num_input / 100) % 10;
        calculation[2] = ( num_input % 100) / 10;
        calculation[3] = ( num_input % 100) % 10;
        for ( int count = 0; count <= 3; count++){
            num_comp_input [count] = calculation [count];
        }
        break;

    case 2:
        calculation[1] = num_input / 100;
        calculation[2] = ( num_input % 100) / 10;
        calculation[3] = ( num_input % 100) % 10;
        for ( int count = 0; count <= 3; count++){
            num_comp_input [count] = calculation [count];
            if ( count < 1) {
                num_comp_input [count] = 0;
            }
        }
        break;

    case 3: 
        calculation[2] = num_input / 10;
        calculation[3] = num_input % 10;
        for ( int count = 0; count <= 3; count++){
            num_comp_input [count] = calculation [count];
            if ( count <= 1) {
                num_comp_input [count] = 0;
            }
        }
        break;

    }
    // Use this to separate the num comparison into an array.
    switch (test_comparison) {
    case 1:
        calculation[0] = ( num_comparison / 100) / 10;
        calculation[1] = ( num_comparison / 100) % 10;
        calculation[2] = ( num_comparison % 100) / 10;
        calculation[3] = ( num_comparison % 100) % 10;
        for ( int count = 0; count <= 3; count++) {
            num_comp_compa [count] = calculation [count];
        }
        break;
    
    case 2:
        calculation[1] = num_comparison / 100;
        calculation[2] = ( num_comparison % 100) / 10;
        calculation[3] = ( num_comparison % 100) % 10;
        for ( int count = 0; count <= 3; count++) {
            num_comp_compa [count] = calculation [count];
             if ( count < 1) {
                num_comp_compa [count] = 0;
            }
        }
        break;

    case 3:
        calculation[2] = num_comparison / 10;
        calculation[3] = num_comparison % 10;
        for ( int count = 0; count <= 3; count++) {
            num_comp_compa [count] = calculation [count];
            if ( count <= 1) {
                num_comp_compa [count] = 0;
            }
            
        }
        break;
    }
    
    for (int count = 0; count <= 3; count++) {
        num_comp_input [count];
        if (num_comp_input [count] == num_comp_compa [0] || num_comp_input [count] == num_comp_compa [1] || num_comp_input [count] == num_comp_compa [2] || num_comp_input [count] == num_comp_compa [3] ) {
        }
        if (num_comp_input [count] != num_comp_compa [0] && num_comp_input [count] != num_comp_compa [1] && num_comp_input [count] != num_comp_compa [2] && num_comp_input [count] != num_comp_compa [3] ) {
            test = false;
        }
    }

    if (test == false) {
        printf("O numero não possui permutação");
        return 0;

    } printf("O numero %d e %d possuem permutação", num_input, num_comparison);

    return 0;
}
