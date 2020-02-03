/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : characterStringCompareN.c

* Purpose :The strncmp() function compares the strings until it has compared a number of characters specified by third argument .
If you wanted to search for that begin with “astro”, you could limit the search to the first five characters.

* Creation Date : 03-02-2020

* Last Modified : Mon Feb  3 14:52:13 2020

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <string.h>

int main ()
{
    if (strncmp("astronomy","astro",5) == 0) 
    {
        printf("Found: Astronomy");
    }
    
    if (strncmp("astounding","astro",5) == 0) 
    {
        printf("Found: astounding");
    }
}


