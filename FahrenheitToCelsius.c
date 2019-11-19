/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : FahrenheitToCelsius.c

* Purpose :Converts fahrenheit to celsius 

* Creation Date : 19-11-2019

* Last Modified : Tue Nov 19 13:50:04 2019

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double enteredFahrenheint = 0.0;
    double fahrenheitCelsiusCalc = 0.0;
    
    printf("Enter Fahrenheit amount: ");
    scanf("%lf", &enteredFahrenheint);
    fahrenheitCelsiusCalc = (((enteredFahrenheint - 32) * 5) /9);
    printf("%.2fc\n", fahrenheitCelsiusCalc);

return (0);
}
