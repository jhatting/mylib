/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : characterStringCharacter.c

* Purpose : first argument to strchr() is the address of the first location to be searched.
- second argument is the character that is sought (ch, which is of type char)
-expects its second argument to be of type int , so the compiler will convert the value of ch to this type
-could just as well define ch as type int (int ch ='q';)
-pGot_char will point to the value ("quick brown fox")

* Creation Date : 10-02-2020

* Last Modified :

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <string.h>

int main ()

{
    char str[] = "The quick brown fox"; //the string to be searched
    char ch = 'q';                      // the character we are looking for
    char *pGot_char = NULL;             //Pointer initialized to NULL
    
    pGot_char = strchr(str, ch);        //Store address where ch is found

}
