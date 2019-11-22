/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : AreaOfCircle.c

* Purpose :Calculates the area of a circle, pi x (radius x radius).

* Creation Date : 06-11-2019

* Last Modified : Thu Nov 21 19:08:25 2019

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double radius = 0.0;
    double pi = 3.14159265359;
    double area = 0.0;

    printf("What is the Radius of the circle: ");
    scanf("%lf", &radius);

    area = pi * (radius * radius);

    printf("Area is: %.2fsqin\n", area);

    return (0);
}
