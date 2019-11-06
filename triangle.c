/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : triangle.c

* Purpose :This Program calculates the area of a triangle by 1/2*(base X height)

* Creation Date : 06-11-2019

* Last Modified : Wed Nov  6 12:10:52 2019

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{

double base = 15.0;
double height = 4.0;
double area = 0.0;

area = 0.5*(base * height);

printf("area is : %.2fsqin\n", area);

return (0);
}
