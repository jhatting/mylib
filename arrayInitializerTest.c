/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : arrayInitializerTest.c

* Purpose : Testing initializers in arrays

* Creation Date : 12-12-2019

* Last Modified : Thu Dec 12 12:28:54 2019

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <stdlib.h>

#define MONTHS 12

int main(void)
{
    int days[MONTHS] = {31,28,31,30,31,31,30,31,30,31};
    int index;
    
    for (index = 0; index < MONTHS; index++)
    {
        printf("Month %d has %2d days.\n", index +1, days[index]);
    }
        return(0);
}
