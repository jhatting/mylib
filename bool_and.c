/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : bool_and.c

* Purpose : tests the bool && operator (&&and)

* Creation Date : 13-11-2019

* Last Modified : Wed Nov 13 14:34:20 2019

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    _Bool a = 1;
    _Bool b = 0;
    _Bool result;

    result = a && b;
    printf("%d\n", result);

return (0);
}
