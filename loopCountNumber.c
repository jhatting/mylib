/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : loopCountNumber.c

* Purpose :input a number from user and count number of digits in the given integer using loop
Input num: 35419
Output
Number of digits: 5

* Creation Date : 10-12-2019

* Last Modified :

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int count = 0;
    long long n = 0;

    printf("Input number: ");
    scanf("%lld", &n);
    printf("Theory:\n");

    while(n != 0)
    {
        count++;
        n = n /10;
        printf("n = %lld, count = %d, \n", n , count);
    }
    printf("Total digits: %d\n", count);

    return(0);
}
