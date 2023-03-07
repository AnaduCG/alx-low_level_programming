#include "main.h"
/**
 *
 *
 *
 *
 */
int root (int n, int m)
{
	if ((m * m) == n)
	{
		n = m;
		return (n);
	}
	else if ((m * m) > n)
	{
		return(-1);
	}
	return root(n, m + 1);
}

int _sqrt_recursion(int n)
{
	if ( n < 0)
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
