/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : bool_pipe.c

* Purpose : to test the bool || operator (or)

* Creation Date : 13-11-2019

* Last Modified : Wed Nov 13 14:19:46 2019

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    _Bool a = 1;
    _Bool b = 0;
    _Bool result;

    result = a || b;
    printf("%d\n", result);

return (0);
}
