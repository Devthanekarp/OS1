/*Write a program in C to store n elements(read from standard input) in an array and print the elements using pointer*/
#include<stdio.h>
int main()
{
	int a[5]={'0','9','8','7','6'},i;
	
	int *ptr;
	ptr=a;
	
	
	
	
	printf("Enter array elements :");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf(" %d, ",*ptr);
		ptr++;
		printf(" ");
	}
	
	return 0;

}
