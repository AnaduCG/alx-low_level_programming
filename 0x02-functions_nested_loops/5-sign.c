#include "main.h"
/**
 *print_sign - chaecks if n is > 0 or < 0 or == 0
 *@n: variable int type
 *Return: 1 if n > 0, 0 if n ==0, and -1 if n < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
		return (0);
}
