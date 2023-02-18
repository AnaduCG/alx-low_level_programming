#include <stdio.h>
#include <stdlib.h>

/**
 *main - entry point
 *Return: always 0
 */

int main(void)
{
	int x, y, z;

	for (x = 0; x <= 7; x++)
	{
		for (y = 1; y <= 8; y++)
		{
			for (z = 2; z <= 9; z++)
			{
				if (x < y && y < z)
				{
					putchar(48 + x);
					putchar(48 + y);
					putchar(48 + z);
					if (x == 7 && y == 8 && z == 9)
					{
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
				else
				{
				}
			}
		}
	}
	putchar('\n');

	return (0);
}

