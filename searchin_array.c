/*5.	C program to search element in array (1-D)using pointers*/
#include<stdio.h>
int main()
{
	int a[]={'1','3','5','7','5','3','7','8'};
	int *ptr;
	ptr=a;
	int b,i;
	scanf("%d",&b);
	for(i=0;i<8;i++)
	{
		if(b==*ptr)
		{
			printf("b is in array");
			ptr++;
		}
	}	
	return 0;
}
