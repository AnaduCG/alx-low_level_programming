#include "main.h"
/**
 *
 *
 */

void print_triangle(int size)
{
	int count, space, item;

	if (size <= 0)
		putchar('\n');
	for (count = 1; count <= size; count++)
	{
		for (space = count; space < size; space++)
		{
			putchar(' ');
		}
		for (item = 1; item <= count; item++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
