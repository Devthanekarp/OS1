/*Develop a C program which adds all numbers from 1 to N, except those which are divisible by 5. Implement this using for loop and continue statement. */
#include<stdio.h>
int main()
{
	int i,n,sum=0;
	//Taking number from user
	printf("Enter the positive number ");
	scanf("%d",&n);
	//using 'for' loop with continue statement
	for(i=0;i<=n;i++)
	{
		if(i%5==0)
		{
			continue;
			
		}
		sum=sum+i;
		//printf("%d\n",i);
		
		
	
	}
	printf("%d\t",sum);
	return 0;


}
