/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : characterStringReverse.c

* Purpose : A Program that displays a string in reverse
    - Should read input from the Keyboard
    - Need to use the strlen string function.

-Program that sorts the strings of an array using a bubble sort.
    -Need to use the strcmp and strcpy functions.

    input number of strings: 3 
    input strings 3:
    zero
    one 
    two

    Expected output:

    the Strings appears after sorting:
    one 
    two 
    zero

* Creation Date : 20-02-2020

* Last Modified :

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100];
    int l, i;

    printf("\n\nPrint individual characters of string in reverse order :\n");
    printf("------------------------------------------------------------\n");
    printf("Input the string :");
    scanf("%s", str);

    l = strlen(str);

    printf("The characters of the string in reverse are : \n");

    for (i = l; i >=0; i--)
    {
        printf("%c", str[i]);
    }

    printf("\n");
    printf("_____________________________________________________________\n");




}
