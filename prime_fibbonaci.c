/*Implement string library functions strlen, strcpy, strcat, strcmp with same return values and all error handling features using pointers. */
#include<stdio.h>
int main()
{
	int i,len,l1,l2,l3,l4;
	char cpy;
	char check;
	char str1[]="abc";
	char str2[]="efg";
	char str3[]="pqr";
	char str4[]="rstu";
	printf("str1=%s\n",str1);
	printf("str2=%s\n",str2);
	printf("str3=%s\n",str3);
	printf("str4=%s\n",str4);
	//find the length
	l1=strlen(str1);
	printf("len= %d\n",l1);
	
	l2=strlen(str1);
	printf("len= %d\n",l2);
	
	l3=strlen(str1);
	printf("len= %d\n",l3);
	
	l4=strlen(str1);
	printf("len= %d\n",l4);
	//cancatenate two strings
	strcat(str1,str2);
	printf("concatenated str1=%s\n",str1);
	
	//compare two strings
	if(strcmp(str1,str2)==1)
	{
		printf("Both strings str1 and str2 are similar!\n");
	
	}
	else
	{
		printf("Both the strings str1 and str2 are not same!\n");
	}
	
	//copy str4 into str3
	strcpy(str3,str4);
	
	printf("copied str3=%s\n",str3);
	
	/*Find whether string1 is the subset of the second string or not(strstr)*/
	check = strstr(str1,str2);
	if(check!=0)
	{
		printf("Above string str2=%s is subset of str1=%s\n",str2,str1);
	}
	else
	{
		printf("Above string str2=%s is not subset of str1=%s\n",str2,str1);
	}
	return 0;	


}
