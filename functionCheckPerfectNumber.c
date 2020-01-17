/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : functionCheckPerfectNumber.c

* Purpose : A number is perfect if the sum of its proper factors is equal to the number.

To find the proper factors of a number, write down all numbers that divide the number with the exception of the number itself.

The proper factors of 18 are 1, 2, 3, 6, and 9

* Creation Date : 17-01-2020

* Last Modified :

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>

int checkPerfect(int);

int main()
{
    int num;
    int loop; 
    int sum;

    printf("What number do you want to check is perfect?");
    scanf("%d",&num);

    if (checkPerfect(num))
        printf("%d is a PERFECT number.", num); 
        else
            printf("%d is a NOT perfect number.", num);
            return (0);
}

int checkPerfect (int num)
{
    int loop = 1;
    int sum = 0;
    
    while(loop<num)
    {
        if (num % loop == 0)
            sum +=loop;
            loop++;
    }
    if (sum == num)
        return 1; //perfect Number
        else 
            return 0; //Not perfect number
}


