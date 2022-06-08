/*Write a program to perform the swap operation 
Write a swap function and use call by reference.
*/
#include<stdio.h>

void swap(int *n,int *m);
void main()
{
	int a,b;
	a=5;
	b=6;
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
	//printf("a=%d\n",*m);
	//printf("b=%d\n",*n);

	 
	 
}
