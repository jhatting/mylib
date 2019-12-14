/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : arrayStorePrint.c

* Purpose :store elements in an array and print it.
Input 10 elements in the array :
element - 0 : 1
element - 1 : 1
element - 2 : 2
.......
Expected Output :
Elements in array are: 1 1 2 3 4 5 6 7 8 9

* Creation Date : 13-12-2019

* Last Modified :

* Created By : Jarrod Hatting
_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>  
  
int  main()  
{  
    int arr[10]; 
    int i =0;  
       printf("\n\nRead and Print elements of an array:\n");
       printf("-----------------------------------------\n");	
  
    printf("Input 10 elements in the array :\n");  
    while (i<10)  
    {  
	    printf("element - %d : ",i);
        scanf("%d", &arr[i]); 
        i++;
    }  
    

    return(0);

}
