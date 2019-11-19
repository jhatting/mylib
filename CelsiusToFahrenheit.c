/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : CelsiusToFahrenheit.c

* Purpose :Convert Celsius to Fahrenheit

* Creation Date : 19-11-2019

* Last Modified : Tue Nov 19 14:14:55 2019

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double EnterCel = 0.0;
    double ResultFah = 0.0;

    printf("Enter Celsius: ");
    scanf("%lf", &EnterCel);
    ResultFah = (((EnterCel * 9) / 5) + 32);

    printf("%.2ff", ResultFah);

return (0);
}
