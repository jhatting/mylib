/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : loopSumOfNatural.c

* Purpose : To find the sum of all natural numbers between 1 to n using while loop
Input :upper limit: 10
Output: Sum of natural numbers 1-10: 55

* Creation Date : 09-12-2019

* Last Modified :

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    int n = 0;
    int sum = 0;

    printf("Upper limit: ");
    scanf("%d", &n);

    while (i<=n)
    {
        sum += i++;
    }
printf("Sum of the Natural numbers between 1 -%d : %d\n", n, sum);

    return(0);
}
