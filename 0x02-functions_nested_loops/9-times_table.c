#include "main.h"

/**
 *times_table - multiplications of n
 */

void times_table(void)
{
	int row, mult, out, div, last;

	for (row = 0; row <= 9; row++)
	{
		for (mult = 0; mult <= 9; mult++)
		{
			out = row * mult;
			div = out / 10;
			last = out % 10;

			if (mult == 0)
			{
				_putchar('0');
			}
			else if (out < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(last + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(div + '0');
				_putchar(last + '0');
			}
		}
		_putchar('\n');
	}
}
