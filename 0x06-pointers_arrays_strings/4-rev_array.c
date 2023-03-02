#include "main.h"
/**
 *reverse_array - concatenates strings
 *@a: pointer variable parameter of type int
 *@n: pointer variable parameter of type int
 */

void reverse_array(int *a, int n)
{
	int j, k, temp;

	for (j = 0, k = n - 1; j < k; j++, k--)
	{
		temp = a[j];
		a[j] = a[k];
		a[k] = temp;
	}
}
