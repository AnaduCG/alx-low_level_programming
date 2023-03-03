#include "main.h"
/**
 *print_numbers - prints out ints
 *@n: variable type of int
 */
void print_number(int n)
{
	unsigned int i;

	i = n;

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
