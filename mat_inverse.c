/*Write a C program to print the transpose and inverse matrices of a given matrix.*/
#include<stdio.h>
#include<math.h>
int main()
{
	int i,j;
	float c;
	int xrr;
	int Xrr[2][2];
	int transpose[2][2];
	int arr[2][2]={'1','2','3','4'};
	int brr;
	int crr[2][2];
	printf("Transpose of matrix\n");
	//Matrix arr[2][2]
	printf("Matrix arr=:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%c\t",arr[i][j]);
		}
		printf("\n");
	}
	//transpose of matrix
	
	for (i = 0; i < 2; i++)
    	{
    		for (j = 0; j < 2; j++)
        	{
	            	transpose[j][i] = arr[i][j];
	        }
    	}
    	//printf("transpose of matrix");	
	printf("Transposed Matrix arr=:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%c\t",transpose[i][j]);
		}
		printf("\n");
	}
	//Inverse Matrix formula :A^-1=transpose(A)/|A|
	xrr=(arr[1][1]*arr[0][0])-(arr[0][1]*arr[1][0]);
	printf("|A| is %d",xrr);
	printf("\nInverse of A:X");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			Xrr[i][j]=xrr;
		}
		printf("\n");
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",Xrr[i][j]);
		}
		printf("\n");
	}
	printf("Inverse of Matrix A is\n 1/%d*",xrr);
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\t[%c]\t",arr[i][j]);
		}
		printf("\n");
	}
	
	/*for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%c\t",arr[i][j]);
		}
		printf("\n");
	}*/
	 
		return 0;
} 



