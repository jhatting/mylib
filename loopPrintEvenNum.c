/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : loopPrintEvenNum.c

* Purpose : Print all even numbers from 1 to n using the while loop.
Input

Input upper range: 10
Output

Even numbers between 1 to 10:
2, 4, 6, 8, 10

* Creation Date : 05-12-2019

* Last Modified :

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1;
    int n = 0;

    printf("Upper range: ");
    scanf("%d", &n);
    printf("Even numbers between 1 to %d: ", n);
    if (n%2 != 0)
    {
        n++;
    }
    while (i < n)
    {
        i = i + 1;
        printf("%d, ", i);
        i++;
    }
   while (i == n)
    {
        i = i + 1;
        printf("%d\n", i);
        i++;
    }

    return(0);
}
