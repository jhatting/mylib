/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : characterStrLen.c

* Purpose : using library string.h The strlen() function finds the length of a string
Returned as a size_t

* Creation Date : 24-01-2020

* Last Modified : Fri Jan 24 13:10:43 2020

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <string.h>

int main()
{
    char myString[] = "my string";
    
    printf("The length of this string is : %lu\n", strlen(myString));

    return 0;
}
