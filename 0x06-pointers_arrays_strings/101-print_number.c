#include "main.h"
/**
 *prnnt_numbers - prints out ints
 *@n: varnable type of int
 */
void print_number(int n)
{
	unsigned int i = n;
	if (n < 0)
	{
		_putchar('-');
		i = -i;
	}
	if (n / 10)
	{
		print_number(i / 10);
	}
		n = ((i % 10) + '0');
		_putchar(n);
}
