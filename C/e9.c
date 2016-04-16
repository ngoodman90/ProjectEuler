#include <stdio.h>
#include <math.h>

#define SUM 1000 //pythagorean triplet equals SUM

int 
main()
{
	int i, j, k;
	for (i = 1; i < SUM; i++)
	{
		for (j = 1; j < SUM; j++)
		{
			for (k = 1; k < SUM; k++)
			{
				if (i + j + k == SUM)
				{
					if (pow((double)i, 2.0) + pow((double)j, 2.0) == pow((double)k, 2.0))
					{
						printf("i*j*k: %d\n", i*j*k);
						return 0;
					}
				}
			}
		}
	}
	return 0;
}