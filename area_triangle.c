/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : triangle.c

* Purpose :This Program calculates the area of a triangle by 1/2*(base X height)

* Creation Date : 06-11-2019

* Last Modified : Wed Nov 20 14:42:49 2019

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    double base = 15.0;
    double height = 4.0;
    double area = 0.0;

    printf("What is the base of the triangle: ");
    scanf("%lf", &base);
    printf("What is the height of the triangle: ");
    scanf("%lf", &height);

    area = 0.5*(base * height);

    printf("area is : %.2fsqin\n", area);

return (0);
}
