/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : loopPrintNumRev.c

* Purpose :print the numbers in reverse.
Input N: 10
Output

Natural numbers from 10-1 in reverse: 
10, 9, 8, 7, 6, 5, 4, 3, 2, 1

* Creation Date : 05-12-2019

* Last Modified :

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    int N = 0;
    printf("Enter the number: ");
    scanf("%d", &N);
    printf("Natural numbe%s from %d-1 in reverse:\n", N == 1 ? "r" : "rs", N);
    i = N;
    while(i>1)
    {
        printf("%d, ", i);
        --i;
    }
    while (i == 1)
    {
        printf("%d\n", i);
        --i;
    }

    return (0);
}
