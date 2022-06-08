/*Write a C program to declare an integer and an integer pointer to it. Initialize the integer variable. Print the value of the int variable using pointer variable.
Hint: You can use dereferencing operator *.
*/
#include<stdio.h>
int main()
{
	int a=97;
	
	int *ptr;
	ptr=&a;
	printf("%d",*ptr);
	return 0;
}
