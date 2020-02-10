/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : characterSubString.c

* Purpose :
The strstr() function is probably the most useful of all the search functions
Searches one string for the first occurence of a substring
Returns a pointer to the position in the first string where the substring is found.
If no match, returns NULL
The first argument is the string that is to be searched
The second argument is the substring you’re looking for.


* Creation Date : 10-02-2020

* Last Modified :

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <string.h>
#include <stdio.h>

int main ()
{
    char text [] = "Every dog has his day";
    char word [] = "dog";
    char *pFound = NULL;
    pFound = strstr(text , word);

    printf("%s", pFound);

}
