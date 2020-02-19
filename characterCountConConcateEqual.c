/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : characterCountConConcateEqual.c

* Purpose : Function counts the number of characters in a string(length)
-cannot use the strlen function
-function should take a character array as a parameter
-Should return an int (the length)


* Creation Date : 19-02-2020

* Last Modified :

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <stdlib.h>

int StringLength (const char string[]);

int main ()
{
    return (0);
}

int StringLength (const char string[])
{
    int count = 0;

    while (string[count] != '\0')
        ++count;

        return (count);
}
