/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : dayWeekMonthYearCal.c

* Purpose : Calculates daily,weekly,monthly,annual Salary
Providing Gross & Nett earnings, and Taxes for an Unmarried individual
under USA CA income tax brackets 10% Up to $9,875
12%: Income between $9,875 to $40,125
22%: Income between $40,125 to $85,525
24%: Income between $85,525 to $163,300
32% Income between $163,300 to $207,350
35%: Income between $207,350 to $518,400
37%: Income over $518,400
Practicing (if else)

* Creation Date : 29-11-2019

* Last Modified : Fri Nov 29 15:10:49 2019

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double annualHours = 2080.00;
    double monthlyHours = 174.00;
    double weeklyHours = 40.00;
    double dailyHours = 8;
    double annualSalary = 0.0;
    double monthlySalary = 0.0;
    double weeklySalary = 0.0;
    double dailySalary = 0.0;
    double hourlyRate = 0.0;
    double TAX_10 = 0.10;
    double TAX_12 = 0.12;
    double TAX_22 = 0.22;  
    double TAX_24 = 0.24;
    double TAX_32 = 0.32;
    double TAX_35 = 0.35;
    double TAX_37 = 0.37;
    double taxAnnual = 0.0;
    double taxMonth = 0.0;
    double taxWeek = 0.0;
    double taxDay = 0.0;
    double netAnnual = 0.0;
    double netMonth = 0.0;
    double netWeek = 0.0;
    double netDay = 0.0;
    double TAX = 0.0;

    printf("What is your annual Salary: $");
    scanf("%lf", &annualSalary);

    hourlyRate = annualSalary / annualHours;
    annualSalary = hourlyRate * annualHours;
    monthlySalary = hourlyRate * monthlyHours;
    weeklySalary = hourlyRate * weeklyHours;
    dailySalary = hourlyRate * dailyHours;

    if (annualSalary <= 9875)
    {
        taxAnnual = TAX_10 * annualSalary;        
        taxMonth = TAX_10 * monthlySalary;
        taxWeek = TAX_10 * weeklySalary;
        taxDay = TAX_10 * dailySalary;
        netAnnual = annualSalary - taxAnnual;
        netMonth = monthlySalary - taxMonth;
        netWeek = weeklySalary - taxWeek;
        netDay = dailySalary - taxDay;   
        TAX = TAX_10;
    }
    else if (annualSalary > 9875 && annualSalary <= 40125)
    {
        taxAnnual = TAX_12 * annualSalary;
        taxMonth = TAX_12 * monthlySalary;
        taxWeek = TAX_12 * weeklySalary;
        taxDay = TAX_12 * dailySalary;
        netAnnual = annualSalary - taxAnnual;
        netMonth = monthlySalary - taxMonth;
        netWeek = weeklySalary - taxWeek;
        netDay = dailySalary - taxDay;   
        TAX = TAX_12;
    }
    else if (annualSalary > 40125 && annualSalary <= 85525)
    {
        taxAnnual = TAX_22 * annualSalary;
        taxMonth = TAX_22 * monthlySalary;
        taxWeek = TAX_22 * weeklySalary;
        taxDay = TAX_22 * dailySalary;
        netAnnual = annualSalary - taxAnnual;
        netMonth = monthlySalary - taxMonth;
        netWeek = weeklySalary - taxWeek;
        netDay = dailySalary - taxDay;   
        TAX = TAX_22;
    }
    else if (annualSalary > 85525 && annualSalary <= 163300)
    {
        taxAnnual = TAX_24 * annualSalary;
        taxMonth = TAX_24 * monthlySalary;
        taxWeek = TAX_24 * weeklySalary;
        taxDay = TAX_24 * dailySalary;
        netAnnual = annualSalary - taxAnnual;
        netMonth = monthlySalary - taxMonth;
        netWeek = weeklySalary - taxWeek;
        netDay = dailySalary - taxDay;   
        TAX = TAX_24;
    }
    else if (annualSalary > 163300 && annualSalary <= 207350)
    {
        taxAnnual = TAX_32 * annualSalary;
        taxMonth = TAX_32 * monthlySalary;
        taxWeek = TAX_32 * weeklySalary;
        taxDay = TAX_32 * dailySalary;
        netAnnual = annualSalary - taxAnnual;
        netMonth = monthlySalary - taxMonth;
        netWeek = weeklySalary - taxWeek;
        netDay = dailySalary - taxDay;   
        TAX = TAX_32;
    }
    else if (annualSalary > 207350 && annualSalary <= 518400)
    {
        taxAnnual = TAX_35 * annualSalary;
        taxMonth = TAX_35 * monthlySalary;
        taxWeek = TAX_35 * weeklySalary;
        taxDay = TAX_35 * dailySalary;
        netAnnual = annualSalary - taxAnnual;
        netMonth = monthlySalary - taxMonth;
        netWeek = weeklySalary - taxWeek;
        netDay = dailySalary - taxDay;   
        TAX = TAX_35;
    }
    else if (annualSalary > 518400)
    {
        taxAnnual = TAX_37 * annualSalary;
        taxMonth = TAX_37 * monthlySalary;
        taxWeek = TAX_37 * weeklySalary;
        taxDay = TAX_37 * dailySalary;
        netAnnual = annualSalary - taxAnnual;
        netMonth = monthlySalary - taxMonth;
        netWeek = weeklySalary - taxWeek;
        netDay = dailySalary - taxDay;   
        TAX = TAX_37;
    }
    printf("RATE:\n");
    printf("Your Gross Hourly Rate is:               $%.2lf p/h\n\n", hourlyRate);

    printf("ANNUAL:\n");
    printf("Your Gross Annual Salary is:             $%.2lf p/a\n", annualSalary);
    printf("Tax %.2lf on your Annual Salary is:       $%.2lf p/a\n", TAX ,taxAnnual);
    printf("Net on your Annual salary is:            $%.2lf p/a\n\n", netAnnual);

    printf("MONTHLY:\n");
    printf("Your Gross Monthly Salary is:            $%.2lf p/m\n", monthlySalary);
    printf("Tax %.2lf on your Monthly Salary is:      $%.2lf p/m\n", TAX ,taxMonth);
    printf("Nett on your Monthly Salary is:          $%.2lf p/m\n\n", netMonth);

    printf("WEEKLY:\n");
    printf("Your Gross Weekly wage is:               $%.2lf p/w\n", weeklySalary);
    printf("Tax %.2lf on your Weekly wage is:         $%.2lf p/w\n", TAX ,taxWeek);
    printf("Nett on your Weekly wage is:             $%.2lf p/w\n\n", netWeek);

    printf("DAILY:\n");
    printf("Your Gross Daily wage is:                $%.2lf p/d\n", dailySalary);
    printf("Tax %.2lf on your Daily wage is:          $%.2lf p/d\n", TAX ,taxDay);
    printf("Nett on your Daily Wage is:              $%.2lf p/d\n\n", netDay);

return(0);
}
