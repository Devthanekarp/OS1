/*Develop a C program to add two operands and store the result in one of the operand using addition assignment operator.( a+=b is same as a=a+b)*/
#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter value of num1:");
	scanf("%d",&num1);
	printf("Enter value of num2:");
	scanf("%d",&num2);
	num1+=num2;
	printf("num1=%d",num1);
	return 0;
}

