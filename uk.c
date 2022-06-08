// Fibonacci Series using Recursion
#include <stdio.h>

int prime(int n);
int fib(int m);
int fib(int m)
{
    if (m <= 1)
        return m;
    return fib(m - 1) + fib(m - 2);
}
  
/*int main()
{
    int n = 9;
    printf("%d", fib(n));
    getchar();
    return n;
}*/

int prime(int n) {

  int n, i, flag = 0;
  printf("Enter a positive integer: ");
  scanf("%d", &n);

  // 0 and 1 are not prime numbers
  // change flag to 1 for non-prime number
  if (n == 0 || n == 1)
    flag = 1;

  for (i = 2; i <= n / 2; ++i) {

    // if n is divisible by i, then n is not prime
    // change flag to 1 for non-prime number
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }

  // flag is 0 for prime numbers
  if (flag == 0)
    printf("%d is a prime number.", n);
  else
    printf("%d is not a prime number.", n);

  return n;
}
int main()
{
	//int n;
	for(n=2;n<100;n++)
	{
		if(prime(n) && fib(m))
		{
			printf("%d",n);
		}
	}
	return 0;
}
