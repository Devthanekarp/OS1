/*Write a C Program to display two-dimensional array elements with addresses*/
#include<stdio.h>
int main()
{
	int i,j;
	//int arr[9];
	int arr[3][3]={'1','8','3','4','5','6','7','8','9'};
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("(%c)%p\t",arr[i][j],&arr[i][j]);
		}
		printf("\n");
	}
	return 0;

}
