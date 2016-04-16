#include <stdio.h>
int 
main()
{

	int num0 = 0;
	int num1 = 1;
	int n;
	int tmp;
	int sum = 0;
	while ((n = num0 + num1) <= 4000000)
	{
		if (n % 2 == 0)
			sum += n;
		tmp = num1;
		num1 = n;
		num0 = tmp;
		printf("num0: %d, num1: %d, n: %d.\n", num0, num1, n);
	}	
	printf("%d\n", sum);
}