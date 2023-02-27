#include "main.h"

/**
 *print_array - prints an array
 *@a: pointer variable of type int
 *@n: variable of type int
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d",*(a + i));
		if (i < (n - 1))
			printf(", ");
	}
	putchar('\n');
}
