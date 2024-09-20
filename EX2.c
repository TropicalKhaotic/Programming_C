#include<stdlib.h>
#include<stdio.h>
#define BETWEEN(value, min, max) (value <= max && value >= min)

    //Use this to see if the student was approved or not
    
    int main(){
    
    float grade1, grade2, grade3, average;
    float final_exam_grade;
    int final_exam;

    //numbers input.
    printf ("Please insert the grade numbers (0 - 100): \n");
    printf ("First grade: \n");
    scanf ("%f", &grade1);
    printf("Second grade: \n");
    scanf ("%f", &grade2);

    //Use to collect numbers from 0 to 100 and do the avarege operation.
    if (grade1 > 100 || grade2 > 100 || grade1 < 0 || grade2 < 0){
        printf ("Grade value invalid just numbers from 0 to 100\n");
        printf ("thanks for using our Software -__-\n");
        return 0;
    } else average = (grade1 + grade2) / 2;

    //Create to analize and print out the results if the grade is enough to pass or not. In case the student dont pass it will go to revaluation.
    if (average >= 70){
        printf ("The student is approved\n");

    //This part will have a nested if, in case the professor have the grade of final exam it will be calculated if the student is approved or not.
    } if (BETWEEN(average,40,69)){
        printf("The student is under final exam. Do you want to insert final exam grades?\n1. Yes\n2. No\n");
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
        return 0;

    } if (average < 40){
        printf("The student is reproved\n");
    }
    printf("Thanks for using our software -__-");

    return 0;
}
