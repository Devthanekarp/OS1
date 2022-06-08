/*Write a program to calculate area and circumference of a circle using formula: 𝑎𝑟𝑒𝑎 = 𝜋𝑟
2
and 𝑐𝑖𝑟𝑐𝑢𝑚𝑓𝑒𝑟𝑒𝑛𝑐𝑒 = 2𝜋r. Take the input r from the user.
Note: C doesn’t have an exponentiation operator, so that you will need to multiply x by itself 
repeatedly to compute powers of x. (For example, 𝑥 ∗ 𝑥 𝑖𝑠 𝑥
2
)
*/
#include<stdio.h>
#define PI 3.14

float main()
{
	float r,Area,Circumference;
	printf("Enter the Radious for Circle");
	scanf("%f",&r);
	Area=PI *r*r;
	Circumference=2*PI*r;
	printf("Area of Circle is=%f \n",Area);
	printf("Circumference of Circle is=%f \n",Circumference);
	return 0;

}
