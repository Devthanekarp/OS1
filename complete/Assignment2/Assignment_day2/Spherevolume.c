/*Write a program to calculate volume of a sphere with 10-meter radius, using the formula 
𝑣 = 4/3𝜋𝑟
3
. Write the fraction 4/3 as 4.0f/3.0f (Also Try writing 4/3 and see what 
happens?). Use variable name for 𝜋 as PI and store value as 22.0f/7.0f. Modify same 
program and prompt the user to enter the radius.*/
#include<stdio.h>
#define PI 22.0/7.0
int main()
{
	float r=10.0,v1,v2,R;
	float v;
	v=(4/3)*PI*r*r*r;
	printf("%f \n",v);
	v1=(4.0f/3.0f)*PI*r*r*r;
	printf("%f \n",v1);
	v2=(4.0f/3.0f)*PI*r*r*r;
	printf("%f \n",v2);
	printf("Enter The value of Radius R:");
	scanf("%f",&R);
	v=(4/3)*PI*R*R*R;
	printf("v=%f \n",v);
	v1=(4.0f/3.0f)*PI*R*R*R;
	printf("v1=%f \n",v1);
	v2=(4.0f/3.0f)*PI*R*R*R;
	printf("v2=%f ",v2);
	return 0;
	
		

}

