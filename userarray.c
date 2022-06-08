#include<stdio.h>
int main()
{
	int a[5],i;
	printf("enter the values of array:");
	for (i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	
	
	}
	for(i=0;i<5;i++)
	{
		printf("a[%d]=%d and....address=%p \n",i,a[i],&a[i]);
		
	}
	for(i=0;i<5;i++)
	{
		if (a[i]==7)
		{
			printf("its in there!,\n");
		}
	}
	for(i=0;i<5;i++)
	{
		if (a[i]>10)
		{
			printf("its in there!,\n");
		}
	}
	
	return 0;
}
