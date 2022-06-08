/*Write a C program to display the pattern like right angle triangle as shown pattern below.

1
22
333
4444
*/
#include<stdio.h>
int main()
{
	int i,j; 
	for (i=0;i<5;i++)
	{
		for(j=1;j<i+1;j++)
		{
			printf("%d",i);
		}
		printf(" \n");
	}
	return 0;
}
