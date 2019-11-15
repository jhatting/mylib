/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : bitwise_or.c

* Purpose :Tests the bitwise | (or) operator

* Creation Date : 14-11-2019

* Last Modified : Thu Nov 14 14:59:05 2019

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>

int main()
{
    unsigned int a = 60; //0011 1100
    unsigned int b = 13; //0000 1101
    int result = 0;

    result = a | b;
    printf("result %d\n", result);
    // 0011 1101
}
