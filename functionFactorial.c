/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : functionFactorial.c

* Purpose :Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the function. Go to the editor
    Expected Output :
    The sum of the series is : 34 

* Creation Date : 08-01-2020

* Last Modified :

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>

int factorial(int);

int main()
{
    int input = 0;
    int result;
    printf("Input the factorial number: ");
    scanf("%d", &input);
    result = factorial(input);

    return(0);
}

int factorial (int n)
{
    int num = 0;
    int f = 1;

    while (num <= n - 1)
    {
        f = f+f*num;
        num++;
        printf("%d!=%d\n", num, f);
    }
    return (f);
}

