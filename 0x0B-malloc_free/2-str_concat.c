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

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	combined = malloc(len1 + len2 + 1);

	strcpy(combined, s1);
	strcat(combined, s2);

	return (combined);
}
