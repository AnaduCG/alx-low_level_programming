#include "main.h"
/**
 *print_to_98 - prints natural numbers to 98
 *@n: parameter variable typr int
 */
void print_to_98(int n)
{
	int count;

	if (n >= 0)
	{
		if (n >= 98)
		{
			for (count = n; count >= 98; count--)
			{
				if (n == 98)
				{
					printf("%d/n", n);
				}
				else
				{
					printf("%d, ", n);
				}
				n--;
			}
		}
		else
		{
			for (count = 1; count <= 98; count++)
			{
				while (n <= count)
				{
					if (n == 98)
					{
						printf("%d\n", n);
					}
					else
					{
						printf("%d, ", n);
					}
				}
			}
		}
	}
}
