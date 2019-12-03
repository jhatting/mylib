/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : forLoopFreeStyle.c

* Purpose :

* Creation Date : 03-12-2019

* Last Modified : Tue Dec  3 12:16:26 2019

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double sum = 0;
    double count = 0;
    double INT_6 = .06;


    printf("Enter the integer: ");
    scanf("%lf", &count);

    for(int i = 0; i <= count; ++i)
    sum += i;

    printf("count %.2lf\nsum %.2lf\n", count, sum);
    return(0);
}
