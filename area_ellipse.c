/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : ellipse.c

* Purpose : program calculates the area of a ellipse, pi x ( axis a X axis b)

* Creation Date : 06-11-2019

* Last Modified : Fri Nov 15 19:23:16 2019

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double axisA = 7.0;
    double axisB = 4.0;
    double pi = 3.14159265359;
    double area = 0.0;

    area = pi * (axisA * axisB);

    printf("Area is: %.2fsqin\n", area);

    return (0);
}
