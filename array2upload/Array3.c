/*Write a C Program to display one dimensional array elements with addresses*/
#include<stdio.h>

int main()
{
	int i;
	char *ptr1;
	char a[5];
	printf("enter array elements:");
	ptr1=&a[i];
	for(i=0;i<5;i++)
	{
		scanf("%c",&a[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf("%c %p\n",*ptr1,&a[i]);
	}
	return 0;

}
