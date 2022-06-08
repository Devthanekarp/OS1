/* A C program contains the following declaration 

char *color[6] = {"red", "green", "blue", "white", "black","yellow"}; 
a. What is the meaning of color? 
b. What is the meaning of (color+2); 
c. What is the value of *color? 
d. What is the value of *(color+2)? 
e. How do color[5] and *(color + 5) differ?. 
*/
#include<stdio.h>
int main()
{
	char *color[6] = {"red", "green", "blue", "white", "black","yellow"};
	printf("meaning of color=%p\n",color);
	printf("meaning of (color+2)=%p\n",(color+2));
	printf("value of *color=%s\n",*color);
	printf("value of *(color+2)=%s\n",*(color+2));
	printf("Difference between color[5]=%p\n and (color+5)=%p is their allocating addresses\n",color[5],(color+5));
	
	return 0; 



}
