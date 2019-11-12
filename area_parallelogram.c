/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : parallelogram.c

* Purpose : The program is going to calculate the area of a parallelogram base X height

* Creation Date : 06-11-2019

* Last Modified : Wed Nov  6 12:11:25 2019

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
double base = 12.0;
double height = 5.0;
double area = 0.0;

area = base * height;

printf("Area is : %.2fsqin\n", area);

return (0);
}
