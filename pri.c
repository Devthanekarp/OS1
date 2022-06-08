/*Write a program to print the prime Fibonacci numbers in a given range.*/
//011235
//2, 3, 5, 13, 89, 233, 1597
#include<stdio.h>
int prime(int *);
int main()
{
	int n;
	int i;
	int a=0,b=1;
	int c=0,j;
	
	printf("Enter the range to find primefibbonaci numbers:");
	scanf("%d",&n);
	
	
	//printf("%d\t",a);
	//printf("%d\t",b);
	
	//printf("%d\t",c);
	for(i=1;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\t",c);
				
	}
	
	//printf("\n");
	/*for (i = 2; i <= c / 2; ++i)
	{
		if((c%i)!=0)
		{
			printf("%d\t",c);
		}		
	}*/
	if(prime(&c) && c>1)
	{
		printf("%d\t",c);
	}
	return 0;
}
int prime(int *c)
{
	int  i, flag = 0;
 	//printf("Enter a positive integer: ");
	//scanf("%d", &c);

 
  	if (*c == 0 || *c == 1)
    flag = 1;

  for (i = 2; i <= *c; ++i) {

    // if n is divisible by i, then n is not prime
    // change flag to 1 for non-prime number
    if (*c % i == 0) {
      flag = 1;
      break;
    }
  }

  // flag is 0 for prime numbers
  if (flag == 0)
    printf("%d is a prime number.", *c);
  else
    printf("%d is not a prime number.", *c);

  return *c;
}
