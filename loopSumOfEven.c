/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : loopSumOfEven.c

* Purpose :input number from user and find sum of all even numbers between 1 to n
Input: upper limit of even number: 10
Output: Sum of even numbers between 1 to 10: 30

* Creation Date : 09-12-2019

* Last Modified :

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum = 0;
    int i = 0; 
    int n = 0;
    printf("Upper limit of even number:");
    scanf("%d",&n);

    while ( i < n)
    {
        i = i + 2;
        sum += i;
    }
    printf("The sum of even numbers between 1 to %d:  %d\n ", n, sum);

    return(0);
}
