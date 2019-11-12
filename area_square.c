/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : square.c

* Purpose : This program calculates the area of a square, length x length

* Creation Date : 06-11-2019

* Last Modified : Wed Nov  6 16:30:58 2019

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    double length = 40.0;
    double area = 0.0;

    area = length * length;

    printf("Area is: %.2fsqin\n", area);

    return (0);
}

