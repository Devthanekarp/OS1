/*Develop a C program to perform operations (+,*,-, / and %) on two whole numbers. Identify suitable data types to represent the numbers and resultant values*/
#include<stdio.h>
int main()
{
	int a=15;
	int b=16;
	int sum,mult,sub,div,rem;
	sum=a+b;
	mult=a*b;
	sub=a-b;
	div=a/b;
	rem=a%b;
	printf("sum of a and b is:%d\n",sum);
	printf("substraction of a and b is:%d\n",sub);
	printf("multiplication of a and b is:%d\n",mult);
	printf("division of a and b is:%d\n",div);
	printf("remainder of a and b is:%d\n",rem);
	
	return 0;
}
