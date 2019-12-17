/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : arrayWeather.c

* Purpose :Providing monthly and yearly weather figures using 
arrays.

* Creation Date : 17-12-2019

* Last Modified : Tue Dec 17 10:50:38 2019

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <stdlib.h>

#define MONTHS 12
#define YEARS 5

int main ()
{
    // initialize rainfall data for 2011-2015
    float rain[YEARS][MONTHS] =
    {
        {3.5,4.3,3.0,1.2,6.4,1.1,7.4,8.4,9.2,1.0,1.1,1.2},
        {6.5,5.3,4.0,2.2,7.4,3.1,2.4,8.4,9.2,1.0,1.1,1.2},
        {1.5,6.3,5.0,3.2,8.4,4.5,3.4,8.4,9.2,1.0,1.1,1.2},
        {2.5,7.3,6.0,4.2,9.4,5.1,3.4,8.4,9.2,1.0,1.1,1.2},
        {3.5,8.3,7.0,5.2,0.4,6.1,5.4,8.4,9.2,1.0,1.1,1.2},
        {4.5,9.3,8.0,6.2,1.4,7.1,8.4,8.4,9.2,1.0,1.1,1.2}
    };
    int year, month;
    float subtot, total;

    printf("YEAR\t\tRAINFALL (inches)\n");

    for (year = 0, total = 0; year < YEARS ; year++ )
    { 
        for(month = 0, subtot = 0; month < MONTHS; month++)
        {
            subtot += rain[year][month];
        }
    printf("%5d \t%15.1f\n", 2010 + year, subtot);
    total += subtot;
    }

    printf("\nThe yearly average is %.1f inches. \n\n", total/YEARS);
    
    printf("MONTHLY AVERAGE:\n\n");
    printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");

    for (month = 0; month < MONTHS; month++)
    {
        for (year = 0, subtot = 0; year < YEARS; year++ )
            subtot += rain[year][month];
        printf("%4.1f ", subtot/YEARS);
    }

    printf("\n");
    return (0);
}
