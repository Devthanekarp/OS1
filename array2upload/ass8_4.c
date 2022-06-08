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
	int i,x[8]= {10,20,30,40,50,60,70,80};
	printf("value of x=%d",x./);
	printf("value of (x+2)=%d",(x+1));
	printf("value of *x=%d",*x);
	printf("value of (*x+2)=%d",(*x+2));
	printf("value of *(x+2)=%d",*(x+2));
	return 0;

}
