/*Write a program in C to store n elements(read from standard input) in an array and print the elements using pointer*/
#include<stdio.h>
int main()
{
	int n,i;
	int a[10];
	int *ptr;
	ptr=a;
	
	printf("Enter the array elements:");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf(" %d ",*ptr);
		ptr++;
		
	}
	return 0;
}
