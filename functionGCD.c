/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : functionGCD.c

* Purpose :This is a function that calculates the Greatest Common Divisor
            GCD, using a function.

* Creation Date : 19-12-2019

* Last Modified : Mon Jan  6 10:18:19 2020

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <stdlib.h>

int gcd(int u, int v);

int main()
{
    int a,b,g;
    printf("Enter GCD  #a and #b:\n");
    scanf("%d%d", &a, &b);

    g = gcd(a, b);
    printf("GCD(%d,%d) = %d",a ,b ,g );

    return (0);
}

int gcd(int u, int v)
{
    int temp;

    while(v !=0)
        {
            temp = u % v;
            u = v;
            v = temp;
        }
        return (u);
}
