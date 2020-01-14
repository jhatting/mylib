/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : functionCheckArmstrong.c

* Purpose :A number is an Armstrong Number or narcissistic number if it is equal to the sum of its own digits raised to the power of the number of digits.
An example: 371 = 3^3 + 7^3 + 1^3 = 27 + 343 + 1.
Another: 1634 = 1^4 + 6^4 + 3^4 + 4^4 = 1 + 1296 + 81 + 256.

* Creation Date : 13-01-2020

* Last Modified :

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>

int main ()
{
    int lastDigit;
    int sum = 0;
    int num = 1634;

    lastDigit = num % 10; //find the last digit of the number
    printf("lastDigit:  %d\n", lastDigit);
    sum += lastDigit * lastDigit * lastDigit;
    printf("sum = %d", sum);



    return (0);
}
