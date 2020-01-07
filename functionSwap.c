/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : functionSwap.c

* Purpose :Write a program in C to swap two numbers using function. 
    Test Data :
    Input 1st number : 2
    Input 2nd number : 4
    Expected Output :
Before swap: n1 = 2, n2 =4                                                  
After swapping: n1 = 4, n2 = 2 

* Creation Date : 07-01-2020

* Last Modified :

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>

void swap(int*, int*);

int main()
{
    int n1;
    int n2;
    printf("Input n1: ");
    scanf("%d", &n1);
    printf("Input n2: ");
    scanf("%d", &n2);
    printf("Before Swap n1 = %d, n2 = %d\n", n1, n2);
    swap(&n1, &n2);
    printf("After Swap  n1 = %d, n2 = %d\n", n1, n2);

    
    return (0);
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
