#include<stdio.h>
int main()
{
	int year;
	printf("Enter the Year:");
	scanf("%d",&year);
	if(((year%400)==0) && ((year%4)==0) && ((year%100)!=0))
	{
		printf("The given Year is leap year");
		
	}
	else
	{
		printf("The given Year is not a leap Year");
	}
	return 0;
}

