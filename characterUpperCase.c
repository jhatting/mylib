/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : characterUpperCase.c

* Purpose :This loop will convert the entire string in the buf array to uppercase by stepping through the string one character at a time 

* Creation Date : 13-02-2020

* Last Modified : Tue Feb 18 13:21:54 2020

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char text[100];             //Input Buffer for string to be searched
    char substring[40];         //Input buffer for string sought
    int i;

    printf("Enter the string to be search (less than %d characters):\n",100);
    scanf("%s", text);

    printf("\nEnter the string sought (less than %d characters):\n", 40);
    scanf("%s", substring);

    printf("\nFirst string entered:\n%s\n", text);
    printf("Second string entered:\n%s\n", substring); 
    
    // convert both strings to uppercase.
    for (i = 0; (text[i] = (char)toupper(text[i])) != '\0'; ++i);
    for (i = 0; (substring[i] = (char) toupper(substring[i])) != '\0'; ++i);

    return (0);
}
