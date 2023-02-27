#include "main.h"
#include <string.h>
/**
 *puts_half - prints half
 *
 * @str: pointer parameter variable of type int
 */
void puts_half(char *str)
{
	int i, len, half;

	len = (strlen(str));
	half = (len / 2);
	for (i = 0; i < len; i++)
	{
		if ((half % 2) == 0)
		{
			if (i > half)
			{
				_putchar(str[i]);
			}
		}
		else
		{
			if (i >= half)
			{
				_putchar(str[i]);
			}
		}
	}
	_putchar('\n');
}
