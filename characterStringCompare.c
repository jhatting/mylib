/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : characterStringCompare.c

* Purpose :compares string contents , not string addresses. 
It is the strcmp() (for string comparison) function 
Does not compare arrays , so it can be used to compares strings stored in array of different sizes .
Does not compare characters

* Creation Date : 03-02-2020

* Last Modified :

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <string.h>

int main()
{
    printf("strcmp(\"A\",\"A\") is ");
    printf("%d\n", strcmp("A", "A"));

    printf("strcmp(\"A\",\"B\") is ");
    printf("%d\n", strcmp("A", "B"));

    printf("strcmp(\"B\",\"A\") is ");
    printf("%d\n", strcmp("B", "A"));

    printf("strcmp(\"C\",\"A\") is ");
    printf("%d\n", strcmp("C", "A"));

    printf("strcmp(\"Z\",\"a\") is ");
    printf("%d\n", strcmp("Z", "a"));

    printf("strcmp(\"apples\",\"apple\") is ");
    printf("%d\n", strcmp("apples", "apple"));
}
