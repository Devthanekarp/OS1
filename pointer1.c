/*Write a C program that declares and initializes (to any value you like) a char, an int, a double and a float. Your program should then print the address of, and value stored in, each of the variables. 
Use the format string "%u" [%p in hex] to print the addresses as unsigned integers. 
Hint: You can use the character “&” to find addresses.
*/
#include<stdio.h>
int main()
{
	int a;
	char b;
	float c;
	double d;
	int *e;
	char *f;
	float *g;
	double *h;
	
	e=&a;
	f=&b;
	g=&c;
	h=&d;

	printf("%d %p\n",*e,&e);
	printf("%d %p\n",*f,&f);
	printf("%f %p\n",*g,&g);
	printf("%f %p\n",*h,&h);
	return 0;	

}
