/*5.	A C program contains the following declarations and initial assignments: 

int  i= 8, j = 5; 
float  x = 0.005,  y = 0.01; 
char c = ‘c’, d = ‘d’; 
Determine the value of each of the following expressions. 
	(3*i*j)%(2*d) 
	(i*j)%(c+2*d) / (x*y) 
	5 * (i + j) > 'c' 
	2*x+ (y== 0) 
	(x > y) && (i > 0) || (j < 5)*/
#include<stdio.h>
int main()
{
	int  i= 8, j = 5; 
	float x=0.005,y = 0.01; 
	char c='c',d='d';
	int res1,res2,res3;
	float res4,res5;
	printf("%d  %d %f %f %c %c\n",i,j,x,y,c,d);
	res1=(3*i*j)%(2*d);
	printf("res1=%d\n",res1);
	res2=(i*j)%(c+2*d)/(x*y);
	printf("res2=%d\n",res2);
	res3=5*(i+j)>'c';
	printf("res3=%d\n",res3);
	res4=(2*(x))+(y==0);
	printf("res4=%0.2f\n",res4);
	res5=(x>y)&&(i>0)||(j<5);
	printf("res5=%0.2f",res5);
	return 0; 
	

} 

