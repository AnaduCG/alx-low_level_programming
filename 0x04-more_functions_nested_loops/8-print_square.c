#include "main.h"

/**
 *print_square - prints out square
 *@size: vaiable of type int
 */
void print_square(int size)
{
	int hr, vt;

	for (hr = 1; hr <= size; hr++)
	{
		for (vt = 1; vt <= size; vt++)
		{
			putchar('#');
		}
		putchar('\n');
	}
	if (size <= 0)
		putchar('\n');
}
