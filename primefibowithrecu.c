#include<stdio.h>
#include<string.h>
void primefibonacci(int *c);
void main()
{
	int a=0;
	//int primefib;
	int b=1,c=0;
	int n,i,j;
	printf("Enter range of Prime_Fibonacci series:");
	scanf("%d",&n);
	primefibonacci(&c);
 
 /*
  	for(i=1;i<n;i++)
  	{ 
           
     		c=a+b;   
     		a=b;       
    	 	b=c;
     
     		int count =0;
     		for(j=1;j<=*c;j++)
     		{ 
     			if (c%j==0)
        	 	count++;
     		}
     		if(count==2)
     	 	{   
          		printf(",%d",c);
      		}
      
   	}	*/  

}
void primefibonacci(int *c)
{
	int a=0;
	int b=1;
	int n,i,j;

	for(i=1;i<n;i++)
  	{ 
           
     		*c=a+b;   
     		a=b;       
    	 	b=*c;
     
     		int count =0;
     		for(j=1;j<=*c;j++)
     		{ 
     			if (*c%j==0)
        	 	count++;
     		}
     		if(count==2)
     	 	{   
          		printf(",%d",*c);
      		}
      
   	}

}
