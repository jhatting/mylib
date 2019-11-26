/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : switchEnum.c

* Purpose :test the switch function, using weekday enums.

* Creation Date : 26-11-2019

* Last Modified : Tue Nov 26 11:05:11 2019

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum Weekday {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday}; 
    enum Weekday today = Saturday;

    switch (today)
    {
        case Sunday:
        printf("Today is Sunday");
        break;
        case Monday:
        printf("Today is Monday");
        break;
        case Tuesday:
        printf("Today is Tuesday");
        break;
        case Wednesday:
        printf("Today is Wednesday");
        break;
        default:
        printf("Whatever");
        break;
    }

    return (0);
}
