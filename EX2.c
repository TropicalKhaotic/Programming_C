#include<stdio.h>
#include<stdlib.h>

  int main(){

    int team_one_score, team_two_score, team_guess; 
    int game_winner, team_one_game_score, team_two_game_score;
    int guess_score = 0;

   
    printf("Insert your winner team guess, In case of a draw type number 3:\n ");
    scanf("%d", &team_guess);
    printf("Insert the score guess of each team\n");
    printf("team one: ");
    scanf("%d", &team_one_score);
    printf("team two: ");
    scanf("%d", &team_two_score);
    printf("Now insert the game results:\n");

    //Game score
    printf("Insert the winner: ");
    scanf("%d", &game_winner);
    printf("Insert the score of each team\n");
    printf("team one: ");
    scanf("%d", &team_one_game_score);
    printf("team two: ");
    scanf("%d", &team_two_game_score);

    
    //Evaluating if the guess is correct
    if  (team_guess == game_winner){
        guess_score = guess_score+10;

    }if (team_one_score == team_one_game_score && team_two_score == team_two_game_score){
         guess_score = guess_score+10;
        return 0;

    }if (team_one_score == team_one_game_score || team_two_score == team_two_game_score){
        guess_score = guess_score+5;

    } else;

    printf("%d", guess_score);
   return 0;

}