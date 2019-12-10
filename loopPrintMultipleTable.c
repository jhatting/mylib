/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : loopPrintMultipleTable.c

* Purpose : input a number from user and print multiplication table of the given number using for loop.
Input num: 5
Output
5 * 1  = 5
5 * 2  = 10
5 * 3  = 15
5 * 4  = 20
5 * 5  = 25
5 * 6  = 30
5 * 7  = 35
5 * 8  = 40
5 * 9  = 45
5 * 10 = 50

* Creation Date : 10-12-2019

* Last Modified :

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int sum = 0;
    int n = 0;
    int i = 0;

    printf("Input number: ");
    scanf("%d", &n);

    while (i <= 9)
        {
            i++;
            sum = n * i;
            printf("%d * %d = %d\n",n ,i ,sum);
        }
        return(0);
}
