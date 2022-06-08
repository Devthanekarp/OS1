/*3.	Write a program to print the prime Fibonacci numbers in a given range.*/
#include<stdio.h>
int primecheck(int c);
int main()
{
	int i,n=100,count=0;
	//printf("Enter the number to have prime fibonacci number range:");
	//scanf("%d",&n);
	int a=0;
	int b=1,prime;
	int c=a+b;
	//int j ;
	for(i=1;i<n+1;i++)
	{
		printf("%d,",c);
		a=b;
		b=c;
		c=a+b;
		prime=primecheck(c);
		printf("%d,",c);
		
	}
	return 0;
}
int primecheck(int c)
{
	int i=1,count=0;
	while(i<=c/2)
	{
		if((c%i)==0)
		{
			count++;
		}
		i++;
	}
	/*if(count>1)
	{
		break;
	}*/		
	if(count==1)
	{
		printf("%d is prime",c);
	}
	
	return(c);
}
