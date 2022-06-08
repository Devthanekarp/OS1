/*Write a program in C to display the pattern like right angle triangle as shown pattern below.

1
12
123
1234
*/

#include<stdio.h>
int main()
{
	int i,j; 
	for (i=0;i<5;i++)
	{
		for(j=1;j<i+1;j++)
		{
			printf("%d",j);
		}
		printf(" \n");
	
	}
	return 0;
}
