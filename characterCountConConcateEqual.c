/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : characterCountConConcateEqual.c

* Purpose : 
1- Function counts the number of characters in a string(length)
-cannot use the strlen function
-function should take a character array as a parameter
-Should return an int (the length)

2- Function to concatenate two character strings
- cannot use the strcat library function
- function should take 3 parameters
    -char result[]
    -const char str1[]
    -const char str2[]
    -can return void

3- Function that determines if two strings are equal 
    - cannot use strcmp library function
    - function should take two const char arrays as parameters and return a Boolean of true if they are equal and false otherwise


* Creation Date : 19-02-2020

* Last Modified :

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int StringLength (const char string[]);
void concate(char result[], const char str[], const char str1[]);
bool equalStrings(const char s1[], const char s2[]);


int main ()
{
    char word1[] = "Jarrod is a god";
    char word2[] = " ok";
    char word3[] = "Whatever";
    char result[50];

    printf("%d      %d      %d\n", StringLength(word1), StringLength(word2), StringLength(word3));
 
    concate (result, word1, word2);
    printf("%s\n", result);
    printf("%d\n",equalStrings("Jarrod", "Jarrod"));
    printf("%d\n",equalStrings("Jarrods", "Jarrod"));

    return (0);
}

int StringLength (const char string[])
{
    int count = 0;

    while (string[count] != '\0')
        ++count;

        return (count);
}

void concate(char result[], const char str1[], const char str2[])
{
    int i, j;

    for (i = 0; str1[i] != '\0'; ++i)
    {
        result[i] = str1[i];
    }

    for (j = 0; str2[j] != '\0'; ++j)
        result[i + j] = str2[j];
        result[i+j] = '\0';
}

bool equalStrings(const char s1[], const char s2[])
{
    int i = 0;
    bool isEquals = false;
    
    while (s1[i] == s2 [i] && s1[i] != '\0' && s2[i] != '\0' )
        ++i;
        if ( s1[i] == '\0' && s2[i] == '\0')
            isEquals = true;
            else 
                isEquals = false;
                return isEquals;
}
