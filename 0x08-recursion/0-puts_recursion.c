#include "main.h"
/**
 *_puts_recursion - prints out characters of strings
 *@s: pointer parameter variable of type char
 *
 */

void _puts_recursion(char *s)
{
	if (*s != NULL)
	{
		_putchar(*(s++));
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
