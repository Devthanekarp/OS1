/*A C program contains the following declaration 
int x[8]= {10,20,30,40,50,60,70,80}; 
What is the value of x? (and understand)
What is the value of (x+2)? (and understand)
What is the value of *x? 
What is the value of (*x+2)? 
What is the value of *(x+2)?. 
*/
#include<stdio.h>
int main()
{
	int x[8]={10,20,30,40,50,60,70,80};

	printf("%p\n",x);
	printf("%p\n",(x+2));
	printf("%d\n",*x);
	printf("%d\n",(*x+2));
	printf("%d\n",*(x+2));

}
