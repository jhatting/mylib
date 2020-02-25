/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : oddsOrEven.c

* Purpose :::: Determines if a number is even or odd. 
            practising "if statements".

* Creation Date : 25-11-2019

* Last Modified : Mon Feb 24 17:26:02 2020

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>

int main()
{
    int number_to_test, remainder;

    printf("Enter the number to be tested: ");
    scanf("%i", &number_to_test);

    remainder = number_to_test % 2;

    if (remainder == 0)
    {
        printf("The number is even.\n");
    }
    else 
    {
        printf("Then number is odd.\n");
    }
    return(0); 
}
