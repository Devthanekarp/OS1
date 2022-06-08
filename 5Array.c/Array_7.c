/*7.	Write a program to remove the duplicate elements in an integer array.*/
#include <stdio.h>  
 
int main ()  
{  
       
    int arr[10];
    int i, j, k, size;  
      
    printf ("Enter the size of elements in an array: ");  
    scanf (" %d", &size);  
      
    printf (" \n Enter %d elements for an array: \n ", size);  
    //Taking std input  
    for ( i = 0; i < size; i++)  
    {  
        scanf (" %d", &arr[i]);  
    }  
      
      
    //finding duplicate element and removing
    for ( i = 0; i < size; i ++)  
    {  
        for ( j = i + 1; j < size; j++)  
        {  
              
            if ( arr[i] == arr[j])  
            {  
                //removing positon of element  
                for ( k = j; k < size - 1; k++)  
                {  
                    arr[k] = arr [k + 1];  
                }  
                // decreasing the size of array after removing duplicate element  
                size--;  
                  
            
                j--;      
            }  
        }  
    }  
      
      //display new array 
    printf (" \n Array elements after deletion of the duplicate elements: ");  
    for ( i = 0; i < size; i++)  
    {  
        printf (" %d \t", arr[i]);  
    }  
    return 0;  
}   


