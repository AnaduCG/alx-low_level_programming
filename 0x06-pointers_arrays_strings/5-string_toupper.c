#include "main.h"
/**
 *string_toupper - changes lowercase strings to upper
 *@str: pointer variable parameter of type char
 *Return: returns str variable pointer
 */

char *string_toupper(char *str)
{
	while (*str != '\0')
	{
		*str = toupper(*str);
		str++;
	}
	return (str);
}
