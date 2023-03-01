#include "main.h"
/**
 *
 *
 *
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
