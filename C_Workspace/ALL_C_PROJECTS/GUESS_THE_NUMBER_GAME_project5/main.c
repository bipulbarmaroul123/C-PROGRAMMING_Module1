//GUESS THE NUMBER GAME
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int number, guess, no_guess = 1;
    srand(time(0));
    number = rand()%100 + 1;//RANDOM NUMBER GENERATED FROM 1 TO 100
    //printf("the random number is:%d\n", number);
    printf("\n######---------WELCOME TO THE GUESS THE NUMBER GAME----------#######\n");
    printf("\n**********************************************************************\n");
    printf("\n");
    do{
        printf("\nGUESS A NUMBER FROM 1 TO 100: ");
        scanf("%d", &guess);

        if(guess>number){
            printf("\nOOPS..!! YOUR ENTERED NUMBER TOO LARGE, ENTER A LOWER NUMBER PLEASE!");
            printf("\n---------X------------------------------------------------X--------------\n");
        }
        else if(guess<number){
            printf("\nOOPS..!! YOUR ENTERED NUMBER TOO SMALL, ENTER A HIGHER NUMBER PLEASE!");
            printf("\n----------X------------------------------------------------X--------------\n");
        }
        else{
            printf("\n");
            printf("CONGRATULATION!!! YOU GUESSED THE NUMBER IN %d ATTEMPTS!", no_guess);
        }
        no_guess++;
    }while(guess!=number);
    return 0;
}
