/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : functionTicTacToe.c

* Purpose :This Program is the game tic tac toe

* Creation Date : 07-01-2020

* Last Modified : Tue Jan  7 11:27:00 2020

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <stdlib.h>

//global DATA
//single dimensional array of elements , allows me to pick numbers to
//play the game and have my co-ordinates.
char square[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int choice;
int player;

// 3 Functions
int checkForWin();
void displayBoard();
void markBoard(char mark);

int main ()
{

    return (0);
}

/*****************************
FUNCTION TO RETURN GAME STATUS
 1 FOR GAME IS OVER WITH RESULT
-1 FOR GAME IS IN PROGRESS
 0 GAME IS OVER AND NO RESULT
 ****************************/

int checkForWin()
{
    int returnValue = 0;
    if (square[1] == square[2] && square[2] == square[3])
    {
        returnValue = 1;
    }
    else if (square[4] == square[5] && square[5] == square[6])
    {
        returnValue = 1;
    }
    else if (square[7] == square[8] && square[8] == square[9])
    {
        returnValue = 1;
    }
    else if (square[1] == square[4] && square[4] == square[7])
    {
        returnValue = 1;
    }
    else if (square[2] == square[5] && square[5] == square[8])
    {
        returnValue = 1;
    }
    else if (square[3] == square[6] && square[6] == square[9])
    {
        returnValue = 1;
    }
    else if (square[3] == square[5] && square[5] == square[7])
    {
        returnValue = 1;
    }
    else if (square[1] == square[5] && square[5] == square[9])
    {
        returnValue = 1;
    }
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
    {
        returnValue = 0;
    }
    else 
        returnValue = -1;
        return returnValue;
}

/********************************************************
FUNCTION TO DRAW BOARD OF TIC TAC TOE WITH PLAYERS MARK
********************************************************/

void displayBoard()
{
    system("cls");
    printf("\n\n\tTic Tac Toe\n\n");

    printf("Player 1 (X) - Player 2 (0) \n\n\n");

    printf("      |      |      \n");
    printf("  %c  |  %c  |  %c  \n", square[1], square[2], square[3]);

    printf("______|______|______\n");
    printf("      |      |      \n");

    printf("  %c  |  %c  |  %c  \n", square[4], square[5], square[6]);

    printf("______|______|______\n");
    printf("      |      |      \n");

    printf("  %c  |  %c  |  %c  \n", square[7], square[8], square[9]);

    printf("      |      |      \n\n");
}

/****************************************
SET THE BOARD WITH THE CORRECT CHARACTER 
X OR O IN THE CORRECT SPOT IN THE ARRAY
****************************************/
void markBoard(char mark)
{
    if (choice == 1 && square[1] == '1')
        square[1] = mark;
    else if (choice == 2 && square[2] == '2')
        square[2] = mark;
    else if (choice == 3 && square[3] == '3')
        square[3] = mark;
    else if (choice == 4 && square[4] == '4')
        square[4] = mark;
    else if (choice == 5 && square[5] == '5')
        square[5] = mark;
    else if (choice == 6 && square[6] == '6')
        square[6] = mark;
    else if (choice == 7 && square[7] == '7')
        square[7] = mark;
    else if (choice == 8 && square[8] == '8')
        square[8] = mark;
    else if (choice == 9 && square[9] == '9')
        square[9] = mark;
        else 
        {
            printf("Invalid move ");

            player--;
            getch();
        }
}
