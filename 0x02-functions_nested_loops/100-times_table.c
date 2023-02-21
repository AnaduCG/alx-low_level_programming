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
	else
	{
		for (count = 0; count <= n; count++)
		{
			for (times = 0; times <= n; times++)
			{
				int table = (times * count);

				if (times != n)
				{
					if (table >= 0 && table < 10)
					{
						printf("%d,...", table);
					}
					else if (table > 9 && table < 100)
					{
						printf("%d,..", table);

					}
					else if (table > 99 && table < 1000)
					{
						printf("%d,.", table);

					}
				}
				else
				{
					printf("%d", times * count);
				}
				printf("\n");
			}
		}
	}
}
