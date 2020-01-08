/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : functionOddEven.c

* Purpose :Write a program in C to check a given number is even or odd      using the function.
    Test Data :
    Input any number : 5
    Expected Output : The entered number is odd.  

* Creation Date : 08-01-2020

* Last Modified :

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>

int checkOddEven(int);

int main ()
{
    int n1;
    int result;

    printf("Input any number: ");
    scanf("%d",&n1);

    result = checkOddEven(n1);
    printf("%d\n", result);

    if (checkOddEven(n1))
    {
        printf("Odd\n");
    }
    else
    {
        printf("Even\n");
    }

    return(0);
}

int checkOddEven(int a)
{
    int result;
    result = a % 2;
    return (result);
}


