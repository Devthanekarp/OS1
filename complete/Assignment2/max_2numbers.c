/*Write a C program to find the maximum of 2 numbers using Conditional operator.*/
#include<stdio.h>
int main()
{
	int num1,num2,max;
	printf("Enter value of num1:");
	scanf("%d",&num1);
	printf("Enter value of num2:");
	scanf("%d",&num2);
	max=(num1>num)2 ?num1:num2;
	if(max==num1)
	{
		printf("num1 is greater than num2");
	}
	else
	{
		printf("num2 is greater than num1");
	}
	
	return 0;
}
