/*Write a C Program to display one dimensional array elements with addresses*/
#include<stdio.h>

int main()
{
	int i;
	int *ptr1;
	int a[5];
	printf("enter array elements:");
	ptr1=a;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf("num=%d-(address)%p\n",*ptr1,&a[i]);
		*ptr1++;
	}
	return 0;

}
