/*Write a program to convert lower case string to upper case string and vice versa. */
#include<stdio.h>

int main()
{
	//char b[]="CDACDASSDHYDERABAD";
	char a[]="hyderabad_dassd_cdac";
	printf("\na[]=%s\n",a);
	int i;
	//printf("a[]=%s\n",a);
	i=0;
	while(a[i]!= '\0')
	{
		if(a[i]>=65 && a[i]<=91)
		{
			a[i]=a[i]+32;
			//printf("%c",a[i]);
			i++;
		}
		
		else if(a[i]>91 && a[i]<=96)
		{
			//printf("%c",a[i]);
			i++;
		}
		else
		{
			a[i]=a[i]-32;
			//printf("%c",a[i]);
			i++;
		}
	}
	
	printf("\na[]=%s",a);
	return 0;


}
