/*Write a C program to read through an array of any type using pointers. Copy the elements of the first array to second array using pointers.
Hint: a[i] = *(a+i)
*/
#include<stdio.h>
int main()
{
	int ar[]={'1','2','3','4','5','6','6','7','8','9'};
	int *ptr;
	ptr=ar;
	int br[10];
	int i;
	int *bptr;
	bptr=br;
	for(i=0;i<10;i++)
	{
		*bptr=*(ptr);
	}
	for(i=0;i<9;i++)
	{
		printf(" %c ",*bptr+i);
		
	}
	return 0;
}	
