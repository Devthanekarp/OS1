/*Write a C program to calculate volume of a box. A box can be represented by three 
quantities: length, width and height in inches. Volume can be calculated as:
volume = height * length * width
Take the input from user (using scanf) and print the volume as a result. Use float data 
types for all variables*/
#include<stdio.h>
int main()
{
	int l,b,h;
	int volume;
	printf("Enter the length:");
	scanf("%d",&l);
	printf("Enter the breadth:");
	scanf("%d",&b);
	printf("Enter the height:");
	scanf("%d",&h);
	volume=l*b*h;
	printf("The volume of Box is =%d",volume);
	return 0;
}
