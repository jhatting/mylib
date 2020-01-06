/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : functionAbsoluteValue.c

* Purpose :the magnitude of a real number without regard to its sign.

* Creation Date : 06-01-2020

* Last Modified : Mon Jan  6 11:41:21 2020

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <stdlib.h>

float absoluteValue(float x);

int main ()
{
    int result  = 0;

    float f1 = -15.5, f2 = 20.0, f3 = -5.0;
    int i1 = -716;
    float absoluteValueResult = 0.0;

    absoluteValueResult = absoluteValue (f1);
    printf ("result = %.2f\n", absoluteValueResult );
    printf ("f1 = %.2f\n",f1);

    absoluteValueResult = absoluteValue (f2) + absoluteValue (f3);
    printf ("result = %.2f\n", absoluteValueResult);
    
    absoluteValueResult = absoluteValue ( (float) i1);
    printf ("result = %.2f\n", absoluteValueResult);

    absoluteValueResult = absoluteValue (i1);
    printf ("result = %.2f\n", absoluteValueResult);

    printf ("%.2f\n", absoluteValue (-6.0) / 4 );

    return (0);
}

float absoluteValue(float x)
{
    if (x < 0)
        x = -x;

        return x;
}
