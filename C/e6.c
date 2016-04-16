#include <stdio.h>
#include <math.h>

#define NUM 100

unsigned long
sumOfSquares(int n)
{
	unsigned long ans = 0;
	int i;
	for (i = 0; i <= n; i++)
		ans += (unsigned long)pow((double)i, 2);
	return ans;
}
unsigned long
squareOfSum(int n)
{
	unsigned long ans = 0;
	int i;
	for (i = 0; i <= n; i++)
		ans += i;
	return (unsigned long)pow((double)ans, 2);
}
int 
main()
{
	printf("%lu\n", squareOfSum(NUM) - sumOfSquares(NUM));
	return 0;
}