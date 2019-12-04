/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : gameGuessTheNumber.c

* Purpose :generates a random number from 0 to 20
, user must guess the number in 5 tries, and indicates to the user if EACH GUESS is too high or too low. 

* Creation Date : 04-12-2019

* Last Modified : Wed Dec  4 14:41:59 2019

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int randomNumber = 0;
    int guess = 0;
    int numberOfGuesses = 5;
    time_t t;
//Initialization of random number generator
    srand((unsigned) time(&t));
//get the random number
    randomNumber =rand() %21;
    
    printf("\nThis is a guessing game.");
    printf("\nI have chosen a number between 0 and 20, which you must guess. \n");

    while(numberOfGuesses > 0)
    {
        printf("\nYou have %d tr%s left.", numberOfGuesses, numberOfGuesses == 1 ? "y" : "ies" );
        printf("\nEnter a guess: ");
        scanf("%d", &guess);
        if (guess == randomNumber)
        {
            printf("\nCongratulations. You guessed it!\n");
            break;
        }
        else if (guess < 0 || guess > 20) // checking for an invalid guess
            printf("I said the number is between 0 and 20./n");
            else if (randomNumber > guess)
                printf("Sorry, %d is wrong. My number is greater than that. \n", guess);
                else if (randomNumber < guess)
                    printf("Sorry, %d is wrong. My number is less than that. \n", guess);

        --numberOfGuesses;
    }
    printf("GAME OVER, The answer is %d\n", randomNumber);
    return(0);
}
