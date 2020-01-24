/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : characterStrncpy.c

* Purpose :Practising the strncpy function

* Creation Date : 24-01-2020

* Last Modified : Fri Jan 24 14:47:23 2020

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <string.h>

int main ()
{
    char myString[] = "My name is jatting";
    char temp[50];
    strncpy(temp, myString, sizeof(temp)- 1);
    printf("The string is: %s", temp);

    return (0);
}
