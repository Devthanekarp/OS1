/*C program to search element in array (1-D)using pointers*/
#include<stdio.h>

int main()
{
  	int ar[]={'2','3','5','7','4','2','1','8'}; 
  	int i; 
  	int  b; 
  	int Flag=0;
	int *ptr;
	ptr=ar;  
	printf("\n Enter the Search Element : ");
  	scanf("%d",&b);      
   	for(i = 0; *ptr!='\0';i++)
   	{
   		if(b=*ptr)
     		{
       			printf("\n The Entered Element is in array");
       			break;	
	 	}   
   	}
  
  	return 0;
}
