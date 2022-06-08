/*Write a program to calculate simple interest using formula: 𝑠𝑖 = 𝑝𝑟𝑖𝑛𝑐𝑖𝑝𝑙𝑒 ∗ 𝑟𝑎𝑡𝑒 ∗ 𝑡𝑖𝑚𝑒. 
Take all variable as float type*/
#include<stdio.h>

int main()
{
	float si,principle,rate,time;
	printf("Enter the value of Principle:");
	scanf("%f",&principle);
	printf("Enter the value of rate:");
	scanf("%f",&rate);
	printf("Enter the value of time in years:");
	scanf("%f",&time);
	si=principle*rate*time/100;
	printf("Enter the value of si:%f",si);
	return 0;

}
