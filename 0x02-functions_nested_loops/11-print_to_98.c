#include "main.h"
/**
 *print_to_98 - prints natural numbers to 98
 *@n: parameter variable typr int
 */
void print_to_98(int n)
{
	if (n != 0)
	{
		for (int count = 0; count <= 98; count++)
		{
			for (n; n <= count; n++)
			{
				printf("%d", n);
				if (n != 98)
					putchar(',');
					putchar(' ');
			}
		}
	}
}
