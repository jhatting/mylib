/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : characterStringCount.c

* Purpose : Count the number letter digits in a string


* Creation Date : 11-02-2020

* Last Modified : Tue Feb 11 16:31:34 2020

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <string.h>

int main ()
{
    char buf[100];              //Input buffer
    int nLetters = 0;           //Number of letters in input
    int nDigits = 0;            //Number of digits in input
    int nPunct = 0;             //Number of punctuation characters

    printf("Enter an interesting string of less than %d character :\n",100);
    scanf("%s", buf);             //Read a string into buffer

    int i = 0;                  //Buffer index
    while(buf[i])
    {
        if (isalpha(buf[i]))
            ++nLetters;
            else if (isdigit(buf[i]))
                ++nDigits;                  //Increment Letter Count
                else if(ispunct(buf[i]))
                    ++nPunct;               //Increment digit count
                   ++i;
    }
    printf("\nYour String contained %d letter, %d digits and %d punctuation characters.\n", nLetters, nDigits, nPunct);
    return (0);
}
