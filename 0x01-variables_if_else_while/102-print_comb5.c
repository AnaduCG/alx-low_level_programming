#include <stdio.h>
#include <stdlib.h>

/**
 *main - entry point
 *Return: always 0
 */

int main(void)
{
	int a, b;

	for (a = 0; a < 100; a++)
	{
		for (b = a; b < 100; b++)
		{
			if (a < b)
			{
				putchar((a / 10) + '0');
				putchar((a % 10) + '0');
				putchar(' ');
				putchar((b / 10) + '0');
				putchar((b % 10) + '0');
				if (a != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
