/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : characterStringToken.c

* Purpose : A token is a sequence of characters within a string that is bound by a delimiter
A delimiter can be anything , but , should be unique to the string
Spaces , commas, and a period are good examples.
Breaking a sentence into words is called tokenizing.


* Creation Date : 11-02-2020

* Last Modified :

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <string.h>
#include <stdio.h>

int main ()
{
    char str[] = "hello how are you - my name is -Jarrod";
    const char s[] = "-";
    char *token;

    /* Get the first token */
    token = strtok(str, s);

    /* walk through other tokens */
    while(token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, s);
    }
    return (0);
}
