#include "main.h"
/**
 *print_diagonal - prints diagonal line
 *@n: variable type of int
 */

void print_diagonal(int n)
{
	int dgnl, spaces;

	for (dgnl = 1; dgnl <= n; ++dgnl)
	{
		for (spaces = 1; spaces <= dgnl; ++spaces)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

	if (n <= 0)
		_putchar('\n');
}
