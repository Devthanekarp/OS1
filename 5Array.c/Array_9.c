/*9.	Write a C program to copy the elements of one 2-D array to another 2-D array.*/
#include<stdio.h>
int main()
{	
	int i,j;
	int arr[2][3]={'1','2','3','4','5','6'};
	int brr[2][3];
	
	printf("copy elements of 2d array 'arr' to another 'brr' empty array!\n");
	printf("Elements of array 'arr' are :");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%c,",arr[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			brr[i][j]=arr[i][j];
		}
	}
	printf("New(brr) Array's elements are: ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%c,",brr[i][j]);
		}
	}
	return 0;
		

}
