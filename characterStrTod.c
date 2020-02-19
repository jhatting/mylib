/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : characterStrTod.c

* Purpose : A value of type double is produced from the initial part of the string specified by the first
argument. The second argument is a pointer to a variable, ptr say , of type char* in which the function will store the address of the first character following the substring that was converted to the double value. If no string was found that could be converted to type double , the variable ptr will contain the address  passed as the first argument

* Creation Date : 18-02-2020

* Last Modified : Tue Feb 18 16:53:45 2020

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdlib.h>
#include <stdio.h>

int main ()
{
    double value = 0 ;
    char str[] = "3.5 2.5 1.26";        // The string to be converted 
    char *pstr = str;                   // Pointer to the string to be converted
    char *ptr = NULL;                   // Pointer to character position after conversion

    while(true)
    {
        value = strtod(pstr, &ptr);      //Convert starting at pstr
        if(pstr == ptr)                 //pstr stored if no conversion..
            break;                      //...so we are done  
            else
            {
                printf(" %f", value);   //Output the resultant value
                pstr = ptr;             // Store Start for next conversation
            }
    }
}
