/*5.	Write a C Program to Reversing the 1-D Array Elements*/
#include<stdio.h>
#include<string.h>
int main()
{
	int ar[]={'1','2','3','4','5','6','7'};     
    	//Calculating length of array ar    
    	int length = sizeof(ar)/sizeof(ar[0]);    
        
    	printf("Array before reversing: \n");    
    	for (int i = 0; i < length; i++) 
    	{     
       		printf("%c ", ar[i]);     
    	}      
        
    	printf("\n");    
        printf("Array before reversing: \n");     
    	//Loop through the array in reverse order    
    	for (int i = length-1; i >= 0; i--) 
    	{     
        	printf("%c ", ar[i]);     
    	}     
    	return 0;    
}    
