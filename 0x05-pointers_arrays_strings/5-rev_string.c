#include "main.h"
#include <string.h>
/**
 *
 *
 */
void rev_string(char *s)
{
	int i = 0, temp, len = (strlen(s));

	while (i < (len / 2))
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
		i++;
	}
}
