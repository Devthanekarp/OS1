/*Write a program to find the GCD of two numbers.
Take two integers as input, find the GCD and return it to main.
*/
#include<stdio.h>
int main()
{
	int pgcd,a,b;
	printf("Enter the values of a for gcd:");
	scanf("%d",&a);
	printf("Enter the values of b for gcd:");
	scanf("%d",&b);
	pgcd=gcd(a,b);
	printf("gcd of above two numbers is=%d",pgcd);
	
	return 0;


}
int gcd(int a,int b)
{
	int i;
	for(i=a;i>=1;i--)
	{
		if(a%i==0 && b%i==0)
		break;
	}
	return i;
}
