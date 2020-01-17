/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : functionCheckArmstrongNumber.c

* Purpose :In number theory, a narcissistic number ' in a given number base is a number that is the sum of its own digits each raised to the power of the number of digits.


* Creation Date : 16-01-2020

* Last Modified : Thu Jan 16 18:00:41 2020

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>

int power(int, int);

int main ()
{
    int input;
    int sum = 0;
    int digitCount;
    int remainder;
    int digits = 0;

    printf("Input the integer to want to check:\n");
    scanf("%d", &input);
    printf("\n\n******FIRST PART IS TO COUNT THE NUMBER OF DIGITS******\n");

    digitCount = input;
    //count the number of digits
    while (digitCount != 0)
    {
        digits++;
        printf("digits = %d\n", digits);
        digitCount = digitCount/10;
        printf("digitCount  = %d\n\n",digitCount);
    }
    printf("\n\n****2ND PART IS TO USE THE # OF DIGITS AS A POWER OF EACH # IN THE INPUT AND ADD THEM ALL ****\n\n");
    digitCount = input;
    while (digitCount != 0)
    {
        remainder = digitCount % 10;
        printf("remainder = %d\n", remainder);
        sum = sum + power(remainder, digits);
        printf("sum = %d\n", sum);
        digitCount = digitCount/10;
        printf("digitCount = %d\n\n", digitCount);
    }
    if (input == sum)
        printf("%d is an Armstrong number\n", input);
        else
            printf("%d is not an Armstrong number", input);

    return (0);
}

int power(int n, int r)
{
    int c;
    int p = 1;

    for (c = 1; c <= r; c++)
        p = p*n;
        return p;
}
