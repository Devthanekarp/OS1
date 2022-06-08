/*Write a program to find whether given number is palindrome or not.*/
#include<stdio.h>
int main()
{
	//varible declaration
	int n,reverse=0;
	//value is taken from user
	printf("Enter A number to check it is palindrome or not:");
	scanf("%d",&n);
	//original varible declared for storing  user entered value
	int original=n;
	//using while loop for finding reverse number
	while(n!=0)
	{
		
		reverse=reverse*10;
		reverse=reverse+n%10;
		n=n/10;
		
		
	}
	//checking both the varibles values for manual verification
	printf("reverse=%d\n",reverse);
	
	printf("original=%d\n",original);
	//using if conditional statement for checking palindrome number
	//using '=='for checking equality 
	if(original==reverse)
	{
		printf("Entered Number is palindrome number");
		
	
	}
	else
	{
		printf("Entered Number is not palindrome number");
	}
	
	return 0;


}
