/*Write a recursive function to find factorial of a number.*/
#include<stdio.h>
int fact(int f);
int main()
{
	int a,factorial;
	printf("Enter number for factorial:");
	
	scanf("%d",&a);
	factorial=fact(a);
	printf("fact=%d \n",factorial);	
}
int fact(int f)
{
	if (f==1 || f==0)
	{
		return 1;
		
	}
	return(f*fact(f-1));
}
	
	



