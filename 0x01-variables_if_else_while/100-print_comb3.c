#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point
 *Return: always 0
 */

int main(void)
{
	int i;
	int x;

	for (i = 0; i < 9; i++)
	{
		for (x = 1; x <= 9; x++)
		{
			if (x > i)
			{
				putchar(48 + i);
				putchar(48 + x);
				if (i == 8 && x ==9)
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
	putchar('\n');

	return (0);
}
