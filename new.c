#include<stdio.h>
#include<st.h>
 

bool isSquare(int n)
{
    int sr = sqrt(n);
    return (sr * sr == n);
}
 
// Prints all numbers less than or equal to n that
// are both Prime and Fibonacci.

void printPrimeAndFib(int n)
{
        for (int p = 2; p * p <= n; p++) {
 
        // If prime[p] is not changed, then
        // it is a prime
	        if (prime[p] == true) 
	        {
 
            // Update all multiples of p
        for (int i = p * 2; i <= n; i += p)
                prime[i] = false;
        }
    }
 
    // Now traverse through the range and print numbers
    // that are both prime and Fibonacci.
    for (int i=2; i<=n; i++)   {
       if (prime[i] && (isSquare(5 * i * i + 4) > 0 ||
                        isSquare(5 * i * i - 4) > 0))
        
			                printf("%d",i);
	}
} 


