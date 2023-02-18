#include <stdio.h>
#include <stdlib.h>

/**
 *main - entry point
 *Return: always 0
 */

int main(void)
{
	int a, b, c, d;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					if (c == 0 && d == 0)
						continue;
					if (b > 8)
					{
					}
					else
					{
					if (a <= 1 && b <= 1 && c <= 1)
						continue;
					putchar(48 + a);
					putchar(48 + b);
					putchar(' ');
					putchar(48 + c);
					putchar(48 + d);
					if (a == c && c == d)
					{
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}
	return (0);
}
