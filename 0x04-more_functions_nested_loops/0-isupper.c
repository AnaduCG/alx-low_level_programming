#include "main.h"
#include <ctype.h>

/**
*_isupper - checks letter case
*@c: variable type int
*/

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
