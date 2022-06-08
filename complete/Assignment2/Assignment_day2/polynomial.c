/*Write a program that asks the user to enter a value for x and then displays the value of the 
following polynomial: 6𝑥^
5 + 5𝑥^
4 − 4𝑥^
3 + 3𝑥^
2 + 2𝑥 + 1*/
#include<stdio.h>
#include<math.h>

int main()
{
	int x,B;
	printf("enter the value x:");
	scanf("%d",&x);
	
	B=(6*x*x*x*x*x)+(5*x*x*x*x)-(4*x*x*x)+(3*x*x)+(2*x)+1;
	
	
	printf("B= %d",B);
	return 0;
}
