/*2.	Uppercase to Lower case: Convert a string from upper case to lowercase using pointers. Write a separate function to do the conversion. Do not use intrinsic functions. */

#include<stdio.h>
int Upper2Lower(char *);
int main()
{
	char a[]="CDACDASSDHYDERABAD",o;
	//char a[]="hyderabad_dassd_cdac";
	char *ptr;
	ptr =a;
	printf("\nString before a[]=%s\n",a);
	int i;
	//printf("a[]=%s\n",a);
	i=0;
	o=Upper2Lower(ptr);	
	printf("\nString After:a[]=%s",a);
	return 0;


}
	
int Upper2Lower(char *ptr)
{
	while(*ptr!= '\0')
	{
		if(*ptr>=65 && *ptr<=91)
		{
			*ptr=*ptr+32;
			//printf("%c",a[i]);
			ptr++;
		}
		
		else if(*ptr>91 && *ptr<=96)
		{
			//printf("%c",a[i]);
			*ptr++;
		}
		else
		{
			*ptr=*ptr-32;
			//printf("%c",a[i]);
			ptr++;
		}
	}
	return (*ptr);
}	
	
		

