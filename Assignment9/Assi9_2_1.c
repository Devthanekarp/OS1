/* A C program contains the following declaration 

float table[2][3] = { { 1.1,1.2,1.3},{2.1,2.2,2.3}}; 
a) What is the meaning of a table? 
b) What is the meaning of (table+1)? 
c) What is the meaning of *(table+1)? 
d) What is the meaning of (*(table+1)+1)? 
e) What is the meaning of (*(table)+1)? 
f) What is the value of *(*(table+1) +1)? 
g) What is the value of *(*(table)+1)? 
h) What is the value of *(*(table+1)? 
i) What is the value of *(*(table) + 1)+1? 
*/
#include<stdio.h>
int main()
{
	float table[2][3] = { { 1.1,1.2,1.3},{2.1,2.2,2.3}};
	//float *ptr;
	//ptr=table;
	printf("meaning of a table=%p\n",table);
	printf("meaning of (table+1)=%p\n",(table+1));
	printf("meaning of *(table+1)=%p\n",*(table+1));
	printf("meaning of (*(table+1)+1)=%p\n",(*(table+1)+1));
	printf("meaning of (*(table)+1)=%p\n",(*(table)+1));
	printf("value of *(*(table+1) +1)=%f\n",*(*(table+1) +1));
	printf("value of *(*(table)+1)=%f\n",*(*(table)+1));
	printf("the value of *(*(table+1)=%f\n",*(*(table+1)));
	printf("value of *(*(table) + 1)+1=%f\n",*(*(table) + 1)+1);	
		
	return 0;
}
