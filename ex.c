/*Write a C program to perform the following operations on two strings without using string library functions.
•	Concatenate two strings
•	Find the length of each string
•	Compare two strings
•	Copy string
•	Reverse the string

*/
#include<stdio.h>

void main()

{
	int i,l1,l2,l3,l4;
	
	int len=0,str=0;
	char *check;
	char str1[]="abc";
	char str2[]="efg";
	char str3[]="pqr";
	char str4[]="rstu";
	printf("str1=%s\n",str1);
	printf("str2=%s\n",str2);
	printf("str3=%s\n",str3);
	printf("str4=%s\n",str4);
	while(str1[i]!='\0')
	{
		len++;
		i++;
	}
	int length=len;
	printf("length of str1=%d\n",len);
	while(str2[i]!='\0')
	{
		len++;
		i++;
	}
	printf("length of str2=%d\n",len);
	while(str3[i]!='\0')
	{
		len++;
		i++;
	}
	printf("length of str3=%d\n",len);
	while(str4[i]!='\0')
	{
		len++;
		i++;
	}
	printf("length of str4=%d\n",len);
	
	//compare strings
	int count=0;
	for(i=0;str1[i]!= '\0';++i)
	{
		if(str1[i]==str2[i])
		{
			count++;
		}
	}
	if(count==length)
	{
		printf("both str1 and str2 are same!\n");
	}
	else
	{
		printf("both  str1 and str2  are not same!\n");
	}
	//string concatinate
	int j;
	for(i=0;str1[i]!= '\0';++i);
	for(j=0;str2[j]!= '\0';++j,++i)
	{
		
		str1[i]=str2[j];
	}
	str1[i]='\0';
	printf("new concatinate str1 with str2 =%s",str1);
	//string copy
	for(i=0;str4[i]!= '\0';++i)
	{
		
		str3[i]=str4[i];
	}
	str3[i]='\0';
	printf("\nnew copied str3 from str4 =%s",str3);
	
	//reverse the string
	int end;
	count=0;
	char r[100];
	for(i=0;str1[i]!='\0';i++)
      	{
      		count++;
	}
	
   	end = count - 1;

   	for (i = 0;i < count;i++,end--) 
   	{
      		r[i] = str1[end];
      		
   	}

   	r[i] = '\0';

   	printf("\nnew reversed string is=%s\n", r);
		
}
