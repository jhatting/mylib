/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : dayWeekMonthYearCal.c

* Purpose : Calculates daily,weekly,monthly,annaul Salary
Practicing (if else)

* Creation Date : 29-11-2019

* Last Modified : Fri Nov 29 13:44:32 2019

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
    }
    else if (annualSalary > 9875 && annualSalary <= 40125)
    {
        taxAnnual = TAX_12 * annualSalary;
    }
    else if (annualSalary > 40125 && annualSalary <= 85525)
    {
        taxAnnual = TAX_22 * annualSalary;
    }
    else if (annualSalary > 85525 && annualSalary <= 163300)
    {
        taxAnnual = TAX_24 * annualSalary;
    }

    printf("Your Gross Hourly Rate is:    $%.2lf p/h\n", hourlyRate);
    printf("Your Gross Annual Salary is:  $%.2lf p/a\n", annualSalary);
    printf("Tax on your annual salary is: $%.2lf p/a\n", taxAnnual);
    printf("Your Gross Monthly Salary is: $%.2lf p/m\n", monthlySalary);
    printf("Your Gross Weekly wage is:    $%.2lf p/w\n", weeklySalary);
    printf("Your Gross Daily wage is:     $%.2lf p/d\n", dailySalary);

return(0);
}
