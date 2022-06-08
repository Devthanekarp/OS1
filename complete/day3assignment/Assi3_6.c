/*Write a C program to display the pattern like right angle triangle as shown pattern below.
1
2 3
4 5 6
7 8 9 10
*/
#include<stdio.h>
int main()
{
	int i,j,a=1; 
	for (i=0;i<6;i++)
	{
		for(j=1;j<i;j++)
		{
			printf(" %d",a);
			a++;			
		}
		printf(" \n");
	}
	return 0;
}
