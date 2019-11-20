/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : trapezoid.c

* Purpose : This program is to calculate the area of a trapezoid 1/2 X (heightx(base1 +base2))

* Creation Date : 06-11-2019

* Last Modified : Wed Nov 20 14:38:41 2019

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    double base1 = 10.0;
    double base2 = 14.0;
    double height = 5.0;
    double area = 0.0;
    
    printf("What is the base1 of the trapezoid: ");
    scanf("%lf", &base1);

    printf("What is the base2 of the trapezoid: ");
    scanf("%lf", &base2);

    printf("What is the height of the trapezoid: ");
    scanf("%lf", &height);

    area = 0.5*(height *(base1 + base2));
    printf("Area is : %.2fsqin\n", area);

return (0);
}
