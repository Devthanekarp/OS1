/*Write a C program to count the frequency of each number in a 1-D array.*/
#include<stdio.h>
int main()
{
	int a[]={'0','9','8','7','6','5','4','3','2'};
	int b[]={'0','9','8','7','6','5','4','3','2'};
	int i,j;
	int count=0;
/*	
	//int *ptr=a;
	printf("Enter the element for searching:");
	scanf("%d",&b);
	//printf("Enter the element for searching%d:",b);
	
	while(a[i]!='\0')
	{
		if(b==a[i])
		{
			printf("entered element is in array");
			//count++;
	
		}
		else		
		{	
			printf("entered element is not in array");
	
		}
		i++;
*/
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			if(a[i]==b[j])
			{
				printf("%c",a[i]);
				count++;
			}
		}		
	}
	printf("%d",count);	
	return 0;
}


