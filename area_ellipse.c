/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : ellipse.c

* Purpose : This program calculates the area of a ellipse, pi x ( axis a X axis b)

* Creation Date : 06-11-2019

* Last Modified : Sun Nov 24 11:24:58 2019

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double axisA = 0.0;
    double axisB = 0.0;
    double pi = 3.14159265359;
    double area = 0.0;

    printf("What is the radius of Axis A: ");
    scanf("%lf", &axisA);

    printf("What is the radius of Axis B: ");
    scanf("%lf", &axisB);

    area = pi * (axisA * axisB);

    printf("Area is: %.2fsqin\n", area);

    return (0);
}
