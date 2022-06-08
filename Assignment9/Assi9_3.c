/*3.	Write a C program to demonstrate double pointer.
(Practice all double pointer programs covered in class ppt)
*/
#include<stdio.h>
int main()
{
	int a[]={'2','2','4','6'};
	int *ptr;
	int i;
	int **dptr;
	ptr=a;
	dptr=&ptr;
	for(i=0;i<4;i++)
	{
		printf("by *ptr= %c\n",*ptr);
		printf("by **ptr= %c\n",**dptr);
		ptr++;
		//dptr++;
		
		
	}
	
	return 0;
	
}
