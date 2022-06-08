/*8.	Write a C program to find reverse of a string using pointers.*/
#include<stdio.h>
#include<string.h>
int main()
{
	
	char str[100];
	int len,i,j;
	char ch ,tr;
	// read string
	printf("Enter a string:");
	scanf("%[^\n]",str);
	//find the length of string
	for(i=0;str[i]!='\0';i++)
	{
		len++;
	}
	printf("string length:%d",len);
	//reverse the string
	int k=len;
	for(int j=0;j<len/2;j++)
	{
		ch=str[j];
		str[j]=str[len-j-1];
		str[len-j-1]=ch;
	}
	printf("\nThe reverse of the string:%s",str);
	
	return 0;
	

}
