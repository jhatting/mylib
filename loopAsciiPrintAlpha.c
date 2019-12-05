/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : loopAsciiPrintAlpha.c

* Purpose :print alphabets from a to z using while loop
Output

Alphabets: a, b, c, ... , x, y, z

* Creation Date : 05-12-2019

* Last Modified :

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch = 'a';
    printf("Alphabet: ");
    while (ch < 'z')
    {
        printf("%c, ",ch);
        ch++;
    }

    while (ch == 'z')
    {
        printf("%c\n",ch);
        ch++;
    }
    

    return(0);
}
