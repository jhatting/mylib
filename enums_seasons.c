/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : enums_seasons.c

* Purpose : This program list and calls the seasons of the year

* Creation Date : 11-11-2019

* Last Modified : Mon Nov 11 13:00:03 2019

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
   enum Season {SPRING = 3, SUMMER = 6, AUTUMN = 9, WINTER = 12};

   enum Season Spring = SPRING;
   enum Season Summer = SUMMER;
   enum Season Autumn = AUTUMN;
   enum Season Winter = WINTER;
   
   printf("This is the value of Spring: %d\n", Spring);
   printf("This is the value of Summer: %d\n", Summer);
   printf("This is the value of Autumn: %d\n", Autumn );
   printf("This is the value of Winter: %d\n", Winter);

   return (0);
}
