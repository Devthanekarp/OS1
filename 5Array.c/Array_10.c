/*Write a C program to sum two 2-D matrices*/
#include<stdio.h>
int main()
{
	int arr[3][3]={'1','2','3','4','5','6','7','8','9'};
	int brr[3][3]={'9','8','7','6','5','4','3','2','1'};
	int i,j;
	int crr[3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%c\t",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%c\t",brr[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			crr[i][j]=arr[i][j]+brr[i][j];
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",crr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
