#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter any number for a:");
	scanf("%d",&a);
	printf("enter any number for b:");
	scanf("%d",&b);
	printf("enter any number for c:");
	scanf("%d",&c);
	if(a>b && a>c)
	{
		printf("a is largest");
	}
	else if(b>a && b>c)
	{
		printf("b is largest");	
	}
	else
	{
		printf("c is largest");	
	}
	
	return 0;
}
