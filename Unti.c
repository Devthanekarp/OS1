#include <stdio.h>

int main()
{
	int i,j,n,c=2;
	printf("Enter a num");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		//printf("%d",c);
		for(j=1;j<n;j++)
		{
			n=(c%j);
			if(n==1)
			{
				printf("%d",c);	
			}
		
			c++;
		}
		
	}
	return 0;
}
