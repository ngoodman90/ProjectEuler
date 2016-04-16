#include <stdio.h>
#include <math.h>

#define NUM 2000000

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
	int i;
	unsigned long sum = 2;
	for (i = 3; i < NUM; i += 2)
	{
		if (isPrime(i) >= 0)
			sum += i;
	}
	printf("%lu\n", sum);
	return 0;
}