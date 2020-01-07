/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : functionStructureTest.c

* Purpose : This program shows the simple structure of a function.

* Creation Date : 07-01-2020

* Last Modified : Tue Jan  7 13:31:54 2020

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <stdlib.h>

int sum(int , int);

int main()
{
    int result;
    result = sum(5, 6);
    printf("The Total is : %d\n", result);
    return (0);
}

int sum (int a, int b)
{
    int s;
    s = a + b;
    return(s);
}
