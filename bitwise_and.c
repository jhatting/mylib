/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : bitwise_and.c

* Purpose :Tests the bitwise & (and)

* Creation Date : 14-11-2019

* Last Modified : Thu Nov 14 11:28:56 2019

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>

int main ()
{
    unsigned int a = 125; // 0011 1100
    unsigned int b = 45; // 0000 1101
    int result = 0;

    result = a & b;
    // 0000 1100
    printf("result is %d", result);
    return (0);
}
