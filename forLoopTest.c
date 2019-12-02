/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : forLoopTest.c

* Purpose :Program tests the for loop for practise

* Creation Date : 02-12-2019

* Last Modified : Mon Dec  2 12:15:15 2019

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double sum = 0;
    double count = 0;

    printf("Enter the number of integers you want to sum: ");
    scanf("%lf", &count);

    for(int i = 1; i <= count; ++i)
        sum += i;

        printf("count = %lf sum = %lf \n",count, sum);

    return(0);

}
