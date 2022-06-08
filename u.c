#include<stdio.h>

int main()
{
	int i,j;
	int a[2][2]={'1','2','3','4'};
	int *ptr;
	ptr=&a[i][j];
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %c " ,*ptr);
			ptr++;
		}
		printf("\n");
	}
	printf("\n");
	return 0;

}

