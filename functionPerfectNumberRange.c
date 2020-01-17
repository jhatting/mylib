/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : functionPerfectNumberRange.c

* Purpose :Write a program in C to print all perfect numbers in given range using the function. 
  Test Data :
  Input lowest search limit of perfect numbers : 1
  Input lowest search limit of perfect numbers : 100
  Expected Output :

  The perfect numbers between 1 to 100 are :                                      
  6   28  

* Creation Date : 17-01-2020

* Last Modified :

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>

int checkPerfect(int n1);
void perfectNumber(int startLimit, int endLimit);

int main ()
{
    int startLimit;
    int endLimit;
    printf("\n\n****FUNCTION : PERFECT NUMBER RANGE****\n\n");
    printf("Input lowest search limit of perfect number: ");
    scanf("%d", &startLimit);
    printf("Input highest search limit of perfect number:");
    scanf("%d", &endLimit);
    
    printf("\nThe perfect numbers between %d to %d are: \n", startLimit, endLimit);
    perfectNumber(startLimit, endLimit);
    printf("\n\n");
    return(0);
}

int checkPerfect(int n1)
{
    int i = 1;
    int sum = 0;
  
    while(i<n1)
    {
        if(n1 % i == 0)
        {
            sum += i;
        }
        i++;
    }
// If sum of proper positive divisors equals to given number 
// then the number is perfect number
    if(sum == n1)
        return 1;
    else
        return 0;
}

void perfectNumber(int startLimit, int endLimit)
{
    while(startLimit <= endLimit)
    {
        if(checkPerfect(startLimit))
        {
            printf("%d     ", startLimit);
        }
        startLimit++;
    }
}
