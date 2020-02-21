/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : characterStringTest.c

* Purpose : Testing Strings testing the length of  string 

* Creation Date : 24-01-2020

* Last Modified : Fri Feb 21 14:41:38 2020

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <string.h>

int main ()
{
    char myString[] = "My name is JARROD";

    printf("The length is %lu", strlen(myString));
    return (0);
}
