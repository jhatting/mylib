/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : SizeOfExample.c

* Purpose : Displays the size of basic data types supported in C.

* Creation Date : 25-11-2019

* Last Modified : Mon Nov 25 10:33:31 2019

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Variables of type char occupy %zd bytes \n", sizeof(char));
    printf("Variables of type short occupy %zd bytes \n", sizeof(short));
    printf("Variables of type int occupy %zd bytes \n", sizeof(int));
    printf("Variables of type long occupy %zd bytes \n", sizeof(long));
    printf("Variables of type long long occupy %zd bytes \n", sizeof(long long));
    printf("Variables of type float occupy %zd bytes \n", sizeof(float));
    printf("Variables of type double occupy %zd bytes \n", sizeof(double));
}
