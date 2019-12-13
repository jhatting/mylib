/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : arrayInitializerTest2.c

* Purpose : Tests another aspect of initializing an array

* Creation Date : 12-12-2019

* Last Modified : Thu Dec 12 12:48:40 2019

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdlib.h>
#include <stdio.h>

#define MONTHS 12

int main (void)
{
    int days[MONTHS] = {31,28, [4] = 31,30,31, [1] = 29};
    int i;
    for (i=0; i<MONTHS; i++)
    {
        printf("Month = %d, Days =  %d\n", i+1, days[i]);
    }
    return (0);
}
