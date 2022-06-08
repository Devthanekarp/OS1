/*Write a program to reverse an integer number.
Use recursion.*/
#include<stdio.h>
int Reverse(int num);
int main()
{
	int n,rev,reverse;
	printf("Enter a num to have reverse of it:");
	scanf("%d",&n);
	rev=Reverse(n);
	printf("The Reverse of given number is:%d",rev);
	return 0;
}
	
int Reverse(int num)
{
	int reverse=0;
	while(num!=0)
	{
		reverse=reverse*10;
		reverse=reverse+(num%10);
		num=num/10;	
	}
	
	return(reverse);
	
}
	

