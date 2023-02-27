#include "main.h"
#include <string.h>
/**
 *puts2 - prints strings evenly
 *@str: pointer variale of type string
 */

void puts2(char *str)
{
	int i, len;

	len = (strlen(str));
	for (i = 0; i <= len; i++)
	{
		if((i % 2) == 0)
			_putchar(str[i]);
	}
}
