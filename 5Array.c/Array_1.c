/*Write a C program to find the sum of all array elements.*/
#include<stdio.h>
int main()
{
	int a[5],i,sum=0;
	printf("enter the values of array:");
	for (i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		sum=sum+a[i];	
	}
	printf("sum=%d\n",sum);
	return 0;
}
