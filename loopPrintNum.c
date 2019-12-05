/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : loopPrintNum.c

* Purpose : Prints the input of  natural numbers using a loop
Input

Input upper limit: 10

Output

Natural numbers from 1 to 10: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10

* Creation Date : 05-12-2019

* Last Modified :

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i =  1;
    int n = 0;
// Input of the limit from the user
    printf("Upper limit: ");
    scanf("%d", &n);
    printf("Natural numbe%s from 1 to %d: ", n == 1 ? "r" : "rs", n);
    
    while (i<n)
    {
        printf("%d, ", i);
        i++;
    }
    while (i == n)
    {
        printf("%d\n" , i);
        i++;
    }

    return (0);
}
