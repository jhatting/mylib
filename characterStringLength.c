/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : characterStringLength.c

* Purpose : this program count the string of an array

* Creation Date : 22-01-2020

* Last Modified : Wed Jan 22 13:37:42 2020

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>

int main(void)
{
    char str1[] = "To be or not to be";
    char str2[] = "that is the question";
    unsigned int count = 0;     //Stores the string length

    while (str1[count] != '\0') //increments count till we reach the 
        ++count;                // terminating character.

        printf("The length of the string \"%s\" is %d characters.\n", str1, count);

        count = 0; //Reset count for next string 
        while (str2[count] != '\0')
            ++count; 
            printf("The length of the string \"%s\" is %d characters.\n", str2, count);
            return 0; 
}
