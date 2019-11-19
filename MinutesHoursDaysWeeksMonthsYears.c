/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : MinutesHoursDaysWeeksMonthsYears.c

* Purpose :Converts the number of minutes to hours, days, weeks months and years.

* Creation Date : 19-11-2019

* Last Modified : Tue Nov 19 13:16:43 2019

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <stdlib.h>

int main()

{
    int minutesEntered = 0;

    double minutesInHours = 0;
    double minutesInDays = 0;
    double minutesInWeeks = 0;
    double minutesInMonths = 0;
    double minutesInYears = 0;

    double resultYears = 0;
    double resultMonths = 0;
    double resultWeeks = 0;
    double resultDays = 0;
    double resultHours = 0;

    minutesInYears = ((60 * 24) * 365);
    minutesInMonths = ((60 * 24) * 30.42);
    minutesInWeeks = ((60 * 24) * 7);
    minutesInDays = ((60 * 24) * 1);
    minutesInHours = 60;

    printf("Enter the number of minutes you want to convert: ");
    scanf("%d", &minutesEntered);
    
    resultYears = minutesEntered / minutesInYears;
    printf("Number of years %.2f\n", resultYears);

    resultMonths = minutesEntered / minutesInMonths;
    printf("Number of months %.2f\n", resultMonths);

    resultWeeks = minutesEntered / minutesInWeeks;
    printf("Number of weeks %.2f\n", resultWeeks);

    resultDays = minutesEntered / minutesInDays;
    printf("Number of days %.2f\n", resultDays);

    resultHours = minutesEntered / minutesInHours;
    printf("Number of hours %.2f\n", resultHours);


    return (0);
}
