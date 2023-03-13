#include "main.h"
/**
 *
 *
 *
 *
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2;
	char *combined;

	len1 = strlen(s1);
	len2 = strlen(s2);
	combined = malloc(len1 + len2 + 1);
	if (combined == NULL || s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	strcpy(combined, s1);
	strcat(combined, s2);

	return (combined);
}
