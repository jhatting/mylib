/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : functionFindTheSquare.c

* Purpose :Write a program in C to find the square of any number using the function.
    Test Data :
    Input any number for square : 20
    Expected Output :

    The square of 20 is : 400.00

* Creation Date : 07-01-2020

* Last Modified :

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <stdlib.h>

int square(int);

int main()
{
    int result;
    result = square (20);
    printf("%d", result);
    return (0);
}

int square (int a)
{
    int s;
    s = a * a;
    return (s);
}
