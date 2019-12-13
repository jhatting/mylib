/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : arraySameValueTest.c

* Purpose :Test arrays only real way to initialize the same
value in each array/

* Creation Date : 12-12-2019

* Last Modified : Thu Dec 12 13:33:16 2019

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int array_values[10] = {0,1,4,9,16};
    int i;
    for (i = 5; i < 10; ++i)
            array_values[i] = i * i;
        for (i = 0; i <10; ++i)
            printf ("array_values[%i] = %i\n", i , array_values[i]);
    return (0);
}
