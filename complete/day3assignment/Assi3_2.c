/*Develop a C program to find sum of all odd numbers upto N using while loop. */
#include<stdio.h>
int main()
{
	int i=0,n,sum=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2==1)
		{
			sum=sum+i;
		
		}
		i++;	
	
	}
	printf("%d\t",sum);
	return 0;


}
