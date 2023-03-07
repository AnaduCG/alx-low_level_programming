#include "main.h"
/**
 *root - checks for the square root of an int
 *@n: integer parameter
 *@m: integer parameter
 *Return: returns the square root of n and -1 otherwise
 */
int root(int n, int m)
{
	if ((m * m) == n)
	{
		n = m;
		return (n);
	}
	else if ((m * m) > n)
	{
		return (-1);
	}
	return (root(n, (m + 1)));
}

/**
 *_sqrt_recursion - checks the value of n
 *@n: integer parameter
 *Return: returns the square root of n and -1 otherwise
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (root(n, 1));
	}
}
