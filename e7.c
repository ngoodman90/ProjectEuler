#include <stdio.h>
#include <math.h>

#define NUM 10001
#define BIG_NUM 100000000

int 
isPrime(int n)
{
	int i;
	for (i = 2; i <= sqrt((double)n); i++)
	{
		if (n % i == 0)
			return -1;
	}
	return 0;
}

int 
main()
{
	int num_of_primes = 0;
	int i;
	for (i = 2; i < BIG_NUM; i++)
	{
		if (isPrime(i) >= 0)
		{
			num_of_primes++;
			if (num_of_primes == NUM)
			{
				printf("Ans: %d\n", i);
				return 0;
			} 
					
		}
	}
	return -1;
}