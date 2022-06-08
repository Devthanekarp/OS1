/*Write a C program to count the frequency of each number in a 1-D array.*/
#include<stdio.h>
int main()
{
	int a[]={'0','9','9','6','6','5','4','3','3'};
	int i=0,j;int b[10];
	int count=0;
	printf("Enter the element for searching:\n");
	scanf("%c",&b);
	for(i=0;a[i]!='\0';++i)
	{
		if(b==a[i])
		{
			count=count+1;
		}
	}
	printf("frequency of given num is %d",count);
	*/
	for(i=0;a[i]!= '\0';++i)
	{
		
		b[i]=a[i];
	}
	for(i=0;b[i]!='\0';++i)
	{
		for(j=0;a[j];j++)
		{
			if(b[i]==a[j])
			{
				count++;	
			}
		}
		printf("frequency of given num is %d",count);
	}	
	
	return 0;
}


