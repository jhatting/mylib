/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : equilateraltriangle.c

* Purpose :This program calculates the area of an equilateral triangle, 1/2 x √3 x length.

* Creation Date : 06-11-2019

* Last Modified : Tue Nov 19 14:43:33 2019

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double length = 4.0;
    double sqrt(double arg);
    double area = 0.0;

    printf("Enter the one length of the of the equilateral triangle:  ");
    scanf("%lf", &length);

    area = (sqrt(3)/4)*(length*length);

    printf("Area is: %.2fsqin\n", area);

    return (0);
}
