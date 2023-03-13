#include "main.h"

/**
 *_strdup - allocates new space in memory
 *		that contains a copy of a string.
 *@str: char variable with the value to be copied 
 *		to a new memory
 *Return: NULL if str or new variables are empty
 *
 *
 */
char *_strdup(char *str)
{
	char *new = malloc(sizeof(char) * strlen(str) + 1);

	if (str == NULL || new == NULL)
	{
		return (NULL);
	}
	strcpy(new, str);
	return (new);
}
