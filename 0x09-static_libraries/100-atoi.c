#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *int _atoi - converts string to int
 *@s: pointer variab;e of type int
 */

int _atoi(char *s)
{
	int i, num, len = (strlen(s));
	for (i = 0; i < len; i++)
	{
		if (s[i] != '+' || s[i] != '-')
			num = (int)(s[i]);
	}
	return (num);
}
