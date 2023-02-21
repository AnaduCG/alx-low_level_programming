#include "main.h"

/**
 *print_times_table - multiplications of n
 *@n: a function parameter
 */

void print_times_table(int n)
{
	int count, times;
	for (count = 0; count <= n; count++)
	{
		for (times = 0; times <= n; times++)
		{
			if (times != n)
			{
				printf ("%d,\t", times * count);
			}
			else
			{
				printf("%d", times * count);
			}
		}
		_putchar('\n');
	}
}
