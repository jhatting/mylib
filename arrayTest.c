/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : arrayTest.c

* Purpose :First test using arrays to store 10 numbers
and finding the average of those numbers.

* Creation Date : 11-12-2019

* Last Modified : Mon Dec 16 16:48:38 2019

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int grades[10];         // Array storing 10 values
    int count = 10;         // Number of values to be read
    long sum = 0;           // Sum of the numbers
    float average = 0;   // Average of the numbers
    int i = 0;

    printf("\nEnter the 10 grades:\n"); // Prompt for the input

    //read the ten numbers to be averaged.
    for (int i = 0; i < count; ++i)
    {
        printf("%2u: ", i + 1 );
        scanf("%d", &grades[i] );  //Read a grade
        printf("grade =%d", grades[i]);
        sum =+grades[i];           //Add it to sum
        printf("sum =%ld", sum);
    }
    average = (float)sum/count;     //average
    printf("\nAverage of the ten grades entered is: %.2f\n", average);
    return (0);
}
