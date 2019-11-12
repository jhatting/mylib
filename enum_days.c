/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : enum_days.c

* Purpose : This program list and calls days of the week.

* Creation Date : 11-11-2019

* Last Modified : Mon Nov 11 12:26:54 2019

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    enum Weekday { MONDAY = 1, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY};

    enum Weekday Monday = MONDAY;
    enum Weekday Tuesday = TUESDAY;
    enum Weekday Wednesday = WEDNESDAY;
    enum Weekday Thursday = THURSDAY;
    enum Weekday Friday = FRIDAY;
    enum Weekday Saturday = SATURDAY;
    enum Weekday Sunday = SUNDAY;

    printf("This is the value of Monday: %d\n", Monday);
    printf("This is the value of Tuesday: %d\n", Tuesday);
    printf("This is the value of Wednesday: %d\n", Wednesday);
    printf("This is the value of Thursday: %d\n", Thursday);
    printf("This is the value of Friday: %d\n", Friday);
    printf("This is the value of Saturday: %d\n", Saturday);
    printf("This is the value of Sunday: %d\n", Sunday);

    return (0);
}
