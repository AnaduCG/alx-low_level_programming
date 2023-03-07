#include "main.h"
/**
 *_puts_recursion - prints out characters of strings
 *@s: pointer parameter variable of type char
 *
 */

void _puts_recursion(char *s)
{
	_putchar(*(s++));
	if (*s != '\0')
		_puts_recursion(s);
	else
		_putchar('\n');
}
