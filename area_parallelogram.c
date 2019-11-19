/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : parallelogram.c

* Purpose : The program is going to calculate the area of a parallelogram base X height

* Creation Date : 06-11-2019

* Last Modified : Tue Nov 19 15:01:46 2019

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    double base = 0.0;
    double height = 0.0;
    double area = 0.0;

    printf("What is the length of the base of the Parallelogram: ");
    scanf("%lf", &base);

    printf("What is the length of the height of the Parallelogram: ");
    scanf("%lf", &height);

    area = base * height;
    printf("Area is : %.2fsqin\n", area);

return (0);
}
