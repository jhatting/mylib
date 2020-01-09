/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : functionDecimalToBinary.c

* Purpose : Write a program in C to convert decimal number to binary number using the function.
 Test Data :
 Input any decimal number : 65
 Expected Output :

 The Binary value is : 1000001 

* Creation Date : 09-01-2020

* Last Modified :

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>

int binaryToDecimal(int);

int main()
{
    int d = 0;
    int convert = 0;

    printf("Input any decimal number: ");
    scanf("%d", &d);
    
    printf("***************RESULT***************\n");
    convert = binaryToDecimal(d);
    printf("The binary value is: %d\n", convert);
    printf("************CALCULATION*************\n");   
}

int binaryToDecimal(int d)
{
    long binary = 0;
    long f = 1;
    long result;

    while (d != 0)
    {
        result = d % 2;
        printf("Result = %ld\n", result);
        binary = binary + result * f;
        printf("Binary = %ld\n", binary);
        f = f * 10;
        printf("FORMULA = %ld\n", f);
        d = d / 2;
        printf("Decimal changed to %d\n\n", d);
    }
    return (binary);
}
