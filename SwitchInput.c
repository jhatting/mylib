/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : SwitchInput.c

* Purpose :Takes input of two values and a operator,
using the switch statement calculates input.

* Creation Date : 26-11-2019

* Last Modified : Tue Nov 26 12:22:32 2019

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>

int main()
{
    float value1, value2;
    char operator;

    printf("Type in your expression.\n");
    scanf("%f %s %f", &value1, &operator, &value2); 
    
    switch (operator)
    {
        case '+':
        printf("%.2f\n", value1 + value2);
        break;
        case '-':
        printf("%.2f\n", value1 - value2);
        break;
        case '*':
        printf("%.2f\n", value1 * value2);
        break;
        case '/':
        if (value2 == 0)
            printf("cannot divide by zero\n");
            else
                printf("%.2f\n", value1 / value2);
        break;
        default:
        printf("Whatever");
        break;

    }
    return (0);
}
