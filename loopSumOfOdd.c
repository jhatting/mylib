/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : loopSumOfOdd.c

* Purpose :find sum of all odd numbers from 1 to n using while loop.
Input: upper limit: 10
Output: Sum of odd numbers from 1-10: 25

* Creation Date : 10-12-2019

* Last Modified :

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int sum = 0;
    int n = 0;
    int i = 1;
    printf("Upper limit: ");
    scanf("%d", &n);

    while (i <= n)
    {
        i = i + 2;
        sum += i;
        printf("%d, ", sum);
    }

    return(0);
}
