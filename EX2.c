#include<stdlib.h>
#include<stdio.h>



    int main(){
    
    int month;
    int year, leap_year;

    printf("Choose a month between 1 - 12: ");
    scanf("%d", &month);
    printf("Insert an year: ");
    scanf("%d", &year);

    //To check if the month input is right
    if (month < 1 || month > 12){
        printf("Invalid month input try numbers between 1 - 12");
        return 0;
    }
    //Use this to know if its a leap year
    if (year % 4 == 0){
        leap_year = 1;
    } else leap_year = 0;

    //switch statmento to show the user the date he choose
    switch (month){
        case 1:
          printf("Year: %d, Month: March, Days: 31.", year);
            break;
        case 2:
          if (leap_year == 1){
                 printf("Year: %d, Month: January, Days: 29.", year);
        }   if (leap_year == 0){
                 printf("Year: %d, Month: January, Days: 28.", year);
        }   break;
        case 3:
          printf("Year: %d, Month: March, Days: 31.", year);
            break;
        case 4:
          printf("Year: %d, Month: April, Days: 30.", year);
            break;
        case 5:
          printf("Year: %d, Month: May, Days: 31.", year);
            break;
        case 6:
         printf("Year: %d, Month: June, Days: 30.", year);
            break;
        case 7:
         printf("Year: %d, Month: July, Days: 31.", year);
            break;
        case 8:
         printf("Year: %d, Month: August, Days: 31.", year);
            break;
        case 9:
         printf("Year: %d, Month: September, Days: 30.", year);
            break;
        case 10:
         printf("Year: %d, Month: October, Days: 31.", year);
            break;
        case 11:
         printf("Year: %d, Month: November, Days: 30.", year);
            break;
        case 12:
         printf("Year: %d, Month: Dezember, Days: 31.", year);
            break;
        
       
    }return 0;

}
