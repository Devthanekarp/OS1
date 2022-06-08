/*Write a C Program to display two-dimensional array elements with addresses*/
#include<stdio.h>
int main()
{
	int i,j,k;
	int arr[2][2][2]={'1','8','3','4','5','6','7','8'};
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{	
				printf("(%c)\t",arr[i][j][k]);
			}
		}
		printf("\n");
	}
		
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{	
				printf("%p\t",&arr[i][j][k]);
			}
		}
		printf("\n");
	}
	return 0;

}
