#include "main.h"

/**
 *print_times_table - multiplications of n
 *@n: a function parameter
 */

void print_times_table(int n)
{
	int count, times;

	if (n > 15 || n < 0)
	{
	}
	else{
		for (count = 0; count <= n; count ++)
		{
			for (times = 0; times <= n; times ++)
			{
				if (times != n)
				{
					printf("%d,   ", times * count);
				}
				else
				{
					printf("%d", times * count);
				}
			}
			printf("\n");
		}
	}
}
