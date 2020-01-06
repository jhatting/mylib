/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : functionSquareRoot.c

* Purpose : Square Root Function, 

* Creation Date : 06-01-2020

* Last Modified : Mon Jan  6 14:14:07 2020

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <stdlib.h>

float squareRoot(float x);
float absoluteValue(float x);

int main()
{
    printf("%.2f\n", squareRoot(-3.0));
    printf("%.2f\n", squareRoot(16.0));
    printf("%.2f\n", squareRoot(25.0));
    printf("%.2f\n", squareRoot(9.0));
    printf("%.2f\n", squareRoot(225.0));
    
    return (0);
}


float squareRoot(float x)
{
    const float epsilon = .00001;
    float absoluteValue (float x);
    float guess = 1.0;
    float returnValue = 0.0;

    if ( x < 0)
    {
        printf ("Negative argument to squareRoot.\n");
        returnValue = -1.0;
    }
    if  (returnValue != -1.0)
    {
    while (absoluteValue (guess * guess - x) >= epsilon)
           guess = ( x / guess + guess) / 2.0;

         returnValue = guess;
    }

       return returnValue;
}

float absoluteValue(float x)
{
    if (x < 0)
        x = -x;

        return x;
}
