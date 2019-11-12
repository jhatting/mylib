/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : enum_months.c

* Purpose : This program is to list and call months of the year

* Creation Date : 11-11-2019

* Last Modified : Mon Nov 11 12:05:23 2019

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    enum Months { JANUARY = 1, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER , NOVEMBER, DECEMBER};

    enum Months January = JANUARY;
    enum Months February = FEBRUARY;
    enum Months March = MARCH;
    enum Months April = APRIL;
    enum Months May = MAY;
    enum Months June = JUNE;
    enum Months July = JULY;
    enum Months August = AUGUST;
    enum Months September = SEPTEMBER;
    enum Months October = OCTOBER;
    enum Months November = NOVEMBER;
    enum Months December = DECEMBER;
    
    printf("The value of January is: %d\n", January);
    printf("The value of February is: %d\n", February);
    printf("The value of March is: %d\n", March);
    printf("The value of April is: %d\n", April);
    printf("The value of May is: %d\n", May);
    printf("The value of June is: %d\n", June);
    printf("The value of July is: %d\n", July);
    printf("The value of August is: %d\n", August);
    printf("The value of September is: %d\n", September);
    printf("The value of October is: %d\n", October);
    printf("The value of November is: %d\n", November);
    printf("The value of December is: %d\n", December);

    return (0);
}

