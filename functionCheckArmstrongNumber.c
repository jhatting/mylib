/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : functionCheckArmstrongNumber.c

* Purpose :In number theory, a narcissistic number ' in a given number base is a number that is the sum of its own digits each raised to the power of the number of digits.


* Creation Date : 16-01-2020

* Last Modified : Thu Jan 16 14:55:53 2020

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>

int power(int, int);

int main ()
{
    int input;
    int sum = 0;
    int t;
    int remainder;
    int digits = 0;

    printf("Input the integer to want to check:\n");
    scanf("%d", &input);

    t = input;
    //count the number of digits
    while (t != 0)
    {
        digits++;
        printf("digits = %d\n", digits);
        t = t/10;
        printf("t = %d",t);
    }
    return (0);
}
