#include <stdio.h>
#include <math.h>
int 
isPalindrome(int n)
{
	if (n != reverseNum(n))
		return -1;
	return 0;
}
int 
reverseNum(int n)
{
	int ans = 0;
	while (n != 0)
	{
		ans = ans*10;
		ans += n % 10;
		n = n / 10;
	}
	return ans;
}	
int 
main()
{
	int i, j;
	int largest_palindrome = 0;
	for (i = 0; i < 1000; i++)
	{
		for (j = 0; j < 1000; j++)
		{
			if (isPalindrome(i*j) >= 0 && i*j > largest_palindrome)
				largest_palindrome = i*j;
		}
	}
	printf("%d\n", largest_palindrome);
	return 0;
}