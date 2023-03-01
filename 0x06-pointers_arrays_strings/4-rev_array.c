#include "main.h"
/**
 *
 *
 *
 */

void reverse_array(int *a, int n)
{
	int i, temp = 0;

	for (i = (n - 1); i < (n / 2); i-)
	{
		temp = a[i];
		a[i] = a[n -1 - i];
		a[n -1 - i] = temp;
	}
}
