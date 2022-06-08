/*Write a function to swap contents of two variables using functions*/
#include<stdio.h>
void swap(int *n,int *m);
void main()
{
	int a,b;
	a=5;
	b=6;
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	swap(&a,&b);
	printf("a=%d \n",a);
	printf("b=%d",b);
	
	
}

void swap(int *n,int *m)
{
	int temp;
	temp=*n;
	*n=*m;
	*m=temp;
	
	
}

