#include<stdlib.h>
#include<stdio.h>
#define BETWEEN(value, min, max) (value <= max && value >= min)

    int main(){
    /*Fazer um programa que recebe duas notas parciais de um aluno (0 a 100) e informa se ele
está aprovado (média maior ou igual a 70), em exame final (média entre 40 e 69) ou
reprovado (média menor do que 40). Caso esteja em exame o programa deve pedir a nota do
exame (0 a 100) e informar se o aluno está aprovado (média mais nota do exame maior ou
igual a 100) ou reprovado (média mais nota do exame menor do que 100)*/

    float grade1, grade2, grade3, average;
    float final_exam_grade;
    int final_exam;

    printf ("Please insert the grade numbers (0 - 100): \n");
    scanf ("%f\n%f", &grade1, &grade2);
    //Use to collect numbers from 0 to 100 and do the avarege operation.
    if (grade1 > 100 | grade2 > 100){
        printf ("Grade value invalid just (0 to 100)\n");
    } else average = (grade1 + grade2) / 2;
    //Create to analize and print out the results if the grade is enough to pass or not. In case the student dont pass it will go to revaluation.
    if (average >= 70){
        printf ("The student is approved\n");
    //This part will have a nested if, in case the professor have the grade of final exam it will be calculated if the student is approved or not.
    } if (BETWEEN(average,40,69)){
        printf("The student is under final exam.\nDo you want to insert final exam grades?\n1. Yes\n2. No\n");
        scanf("%d", &final_exam);

        //Final exam calculation
        if (final_exam == 1){
            printf("Please insert final exam grades: \n");
            scanf("%f", &final_exam_grade);
            if (final_exam_grade <= 100 && final_exam_grade >= 0){
                grade3 = final_exam_grade + average;
                if (grade3 >= 100){
                printf("The student is approved\n");
                } else printf("The student is reproved\n");

            } else printf("Invalid Grade\n");

        }else printf("Thanks for using our software\n");

    } if (average < 40){
        printf("The student is reproved\n");
    }
    
    

    printf("Thanks for using our software -__-");

    return 0;
}
