/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : factorial.c

* Purpose :

* Creation Date : 09-01-2020

* Last Modified : Thu Jan  9 10:35:38 2020

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>

int main ()
{
    int f = 1;
    int num = 0;
    int n = 5;
    while (num <= n-1)
    {
    f = f+f*num;
    num++;
    printf("f=%d, num%d\n",f, num );
    }
    return 0;
}
