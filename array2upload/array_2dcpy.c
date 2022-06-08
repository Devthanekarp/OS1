/*Write a C program to print all elements of two dimensional array using pointers.*/
#include<stdio.h>

int main()
{
	int i,j;
	int a[3][3]={'1','2','3','4','5','6','7','8','9'};
	int *ptr;
	ptr=&a[3][3];
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%c\n",*ptr);
			*ptr++;
						
		}
	}
	return 0;

}
