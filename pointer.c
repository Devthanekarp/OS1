/*Write a C program to declare an integer and an integer pointer to it. Initialize the integer variable. Print the value of the int variable using pointer variable.
Hint: You can use dereferencing operator *.
*/
#include<stdio.h>
int main()
{
	int a;
	int *b;
	a=10;
	b=&a;
	printf("%d",*b);
	return 0;	

}
