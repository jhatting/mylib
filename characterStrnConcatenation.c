/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : characterStrnConcatenation.c

* Purpose : Takes a second argument indicating the maximum of characters to add,

* Creation Date : 29-01-2020

* Last Modified : Wed Jan 29 14:19:29 2020

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <string.h>

int main()
{
    char src [50], dest [50];

    strcpy(scr, "This is source");
    strcpy(dest, "This is destination");

    strncat (dest, scr, 15);
    printf("Final destination string: |%s|", dest);
    return (0);

}
