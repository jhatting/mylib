/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : HoursPayCal.c

* Purpose :Calculates unique pay rate, and hours input
giving a gross pay , taxes and net pay output.

* Creation Date : 27-11-2019

* Last Modified : Wed Nov 27 15:03:16 2019

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // declare the variables
    double PAYRATE = 0.0;
    double TAXRATE_300 = .15;
    double TAXRATE_150 = .20;
    double TAXRATE_REST = .25;
    double OVERTIME = 0.0;
    int hours = 0;
    double grossPay = 0.0;
    double taxes = 0.0;
    double netPay = 0.0;

    // input
    printf("Input the hours worked: ");
    scanf("%d", &hours);
    printf("Input the your Pay Rate: $");
    scanf("%lf", &PAYRATE);
    printf("Input the OVERTIME rate (e.g: 1.5) : ");
    scanf("%lf", &OVERTIME);
  

    // hours over time
    if (hours <= 40)
    {
        grossPay = hours * PAYRATE;
    }
    else if (hours > 40)
    {
        grossPay = (hours- 40) * (OVERTIME * PAYRATE);
        grossPay +=(40 * PAYRATE);
    }

    // taxes
    if (grossPay <= 300)
    {
        taxes = grossPay * TAXRATE_300;
    }
    else if (grossPay <= 450)
    {
        taxes = (grossPay - 300) * TAXRATE_150;
        taxes += 300 * TAXRATE_300;
    }
    else if (grossPay > 450)
    {
        taxes = (grossPay - 450) * TAXRATE_REST;
        taxes += 300 * TAXRATE_300;
        taxes += 150 * TAXRATE_150;
    }
    // calculate net pay
    netPay = grossPay - taxes;

    printf("Gross pay is: $%.2f\n", grossPay);
    printf("Taxes are: $%.2f\n", taxes);
    printf("Your Net Pay is: $%.2f\n", netPay);

return (0);
}
