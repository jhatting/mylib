/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : loopPrintOddNum.c

* Purpose :print all odd numbers from 1 to n using while loop
Input:upper limit: 10
Output:Odd numbers between 1 to 10:
1, 3, 5, 7, 9

* Creation Date : 09-12-2019

* Last Modified :

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    int i = 1;

    printf("Upper limit: ");
    scanf("%d", &n);

    while (i < n)
    {
        
        printf("%d, ", i);
        i= i + 2;
    }
return (0);
}
