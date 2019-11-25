/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : signElseIf.c

* Purpose :Implements the sign function practising
            the else if statement.

* Creation Date : 25-11-2019

* Last Modified : Mon Nov 25 14:33:44 2019

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>

int main(void)
{
    int number, sign;

    printf("Type in a number:");
    scanf("%i" , &number);

    if (number < 0)
        sign = -1;
        else if (number == 0)
            sign = 0;
            else //must be positive
                sign = 1;

     printf("Sign = %i\n", sign);
     return(0);
}
