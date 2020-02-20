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
    char name[23][50], temp[25];
    int l, i, n, j;

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

    printf("\n\nSorts the strings of an array using Bubble sort: \n");
    printf("-----------------------------------------------------\n");

    printf("Input number of strings : ");
    scanf("%d", &n);
    
    printf("Input string %d : \n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%s", name[i]);
    }

    for(i = 1; i <=n; i++)
        for(j=0; j<=n-i; j++)
            if(strcmp(name[j], name[j+1]) > 0)
            {
                strncpy(temp, name[j], sizeof(temp) -1);
                strncpy(name[j], name[j+1], sizeof(name[j]) - 1);
                strncpy(name[j+1], temp, sizeof(name[j] + 1) - 1);
            }

    printf("The strings appear after sorting :\n");

    for (i = 0; i <=n ; i++)
    printf("%s\n", name[i]);

    return 0;
}
