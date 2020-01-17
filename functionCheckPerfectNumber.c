/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : functionCheckPerfectNumber.c

* Purpose : A number is perfect if the sum of its proper factors is equal to the number.

To find the proper factors of a number, write down all numbers that divide the number with the exception of the number itself.

The proper factors of 18 are 1, 2, 3, 6, and 9

* Creation Date : 17-01-2020

* Last Modified :

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>

int main()
{
    int input;
    int divisor = 1;
    int result = 0;

    printf("What number is you want to check is PERFECT: ");
    scanf("%d", &input);
    
    printf("\n********Checking number********\n\n");

    while (divisor < input)
    {
        if (input % divisor == 0)
        {
            result = result + divisor;
            divisor++;
            printf("Result =%d\n", result);
            printf("Divisor =%d\n", divisor);
        }
    }
    if (result == input)
        printf("%d is a PERFECT number", input);
        else 
            printf("%d is NOT a Perfect number", input);
            return (0);
}
