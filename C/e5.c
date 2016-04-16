#include <stdio.h>

#define BIG_NUM 4000000000

int isDivisibleBy(int n, int lower, int higher)
{
	int i;
	for (i = lower; i <= higher; i++)
	{
		if (n % i != 0)
			return -1;
	}
	return 0;
}
int 
main()
{
	unsigned long i;
	for (i = 1; i <= BIG_NUM; i++)
	{
		if (isDivisibleBy(i, 1, 20) >= 0)
		{
			printf("%lu\n", i);
			return 0;
		}
	}
	return -1;
}
