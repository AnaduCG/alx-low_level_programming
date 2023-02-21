#include "main.h"

/**
 *
 *
 *
 */

int print_last_digit(int r)
{
	int last = (r % 10);

	if (last < 0)
	{
		last = (-1 * last);
	}
	_putchar(last + 48);
	return (last);
}
