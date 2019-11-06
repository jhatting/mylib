/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : rectangle.c

* Purpose : This program is going to calculate the area of a rectangle, using height X width

* Creation Date : 06-11-2019

* Last Modified : Wed Nov  6 12:47:46 2019

* Created By : Jarrod Hatting 

_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
double width = 32.2;
double height = 15.3;
double perimeter = 0.0;
double area = 0.0;

perimeter = 2.0 * (height + width);
area = width * height;

printf("Width is: %.2f,\nHeight is: %.2f,\nPerimeter is: %.2f\n", width, height, perimeter); 
printf("Area is: %.2fsqin\n", area);


return (0);
}
