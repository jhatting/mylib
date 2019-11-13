/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : bool_not.c

* Purpose :To test the ! operation (not)

* Creation Date : 13-11-2019

* Last Modified : Wed Nov 13 14:41:43 2019

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    _Bool a = 1;
    _Bool b = 0;
    _Bool result;

    result = !(a && b);

    printf(" %d\n", result);
    return (0);
}
