/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : gameGuessTheNumber.c

* Purpose :generates a random number from 0 to 20
, user must guess the number in 5 tries, and indicates to the user if EACH GUESS is too high or too low. 

* Creation Date : 04-12-2019

* Last Modified : Wed Dec  4 12:56:41 2019

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int randomNumber = 0;
    int guess = 0;
    int maximumNumberOfGuesses = 5;
    time_t t;
//Initialization of random number generator
    srand((unsigned) time(&t));
//get the random number
    randomNumber =rand() %21;

    printf("\nThis is a guessing game.");
    printf("\nI have chosen a number between 0 and 20, which you must guess. \n\n");
    printf("You have %d tries left\n", maximumNumberOfGuesses);
    printf("Enter a guess: ");
    scanf("%d", &guess);

    if (maximumNumberOfGuesses <= 5)
    {
        --maximumNumberOfGuesses;
        while (guess == randomNumber)
        {
        printf("Congratulations, You guessed it!");
        break;
        }
        while (guess > randomNumber)
        {
            printf("Sorry, %d is wrong. My number is less than that.", guess);
            break;
        }
        while (guess < randomNumber)
        {
            printf("Sorry, %d is wrong. My number is more than that.", guess);
            break;
        }
        printf("You have %d tries left\n", maximumNumberOfGuesses);
        printf("Enter a guess: ");
        scanf("%d", &guess);
    }
    else if (maximumNumberOfGuesses > 5)
    {
        printf("GAME OVER");
    }

    return(0);
}
