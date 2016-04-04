#include <stdio.h>
#include <math.h>

#define NUM 600851475143
int 
isPrime(int n)
{
	int i;
	for (i = 3; i <= sqrt((double)n); i += 2)
	{
		if (n % i == 0)
			return -1;
	}
	return 0;
}
int 
main()
{
	unsigned long num = NUM;
	int i;
	int largest_prime_factor = 1;
	for (i = 3; i < num; i += 2)
		if (num % i == 0)
			if (isPrime(i) >= 0)
			{
				largest_prime_factor = i;
				printf("%lu divided by %d\n", num, i);
			}		
	printf("%d\n", largest_prime_factor);
	return 0;
}
