#include "main.h"
/**
 *_strchr - gets the first occursnce of a character
 *@s: pointer parameter variable of type char
 *@c: parameter variable of type char
 *
 */
char *_strchr(char *s, char c)
{
	char *a = strchr(s, c);

	if (a)
		return (a);
	else
		return (NULL);
}
