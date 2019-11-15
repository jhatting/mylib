/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : bitwise_left_shift.c

* Purpose :Left shift operator, 

* Creation Date : 14-11-2019

* Last Modified : Thu Nov 14 17:00:58 2019

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>

int main ()
{
    unsigned int a = 60;
    unsigned int b = 13;
    int result = 0;

    result = a >> 4;

    printf("result is %d", result);
}
