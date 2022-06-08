/*Write a C program that declares and initializes (to any value you like) a char, an int, a double and a float. Your program should then print the address of, and value stored in, each of the variables. 
Use the format string "%u" [%p in hex] to print the addresses as unsigned integers. 
Hint: You can use the character “&” to find addresses.
*/
#include<stdio.h>
int main()
{
	char ch='p';
	char *cptr;
	cptr=&ch;
	
	int a=88;
	int *iptr;
	iptr=&a;
	
	float f=5.55;
	float *fptr;
	fptr=&f;
 	double d=9.99;
 	double *ptr;
 	ptr=&d;
 	
 	printf("ch=%c....address:%u/Hex=%p\n",ch,&ch,&ch);
 	printf("a=%d....address:%u/Hex=%p\n",a,&a,&a);
 	printf("f=%f....address:%u/Hex=%p\n",f,&f,&f);
 	printf("d=%0.2f....address:%u/Hex=%p\n",d,&d,&d);
 	return 0;
 }
