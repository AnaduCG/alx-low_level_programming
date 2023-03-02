#include "main.h"

/**
 *leet - substitutes characters
 *@str: a pointer parameter of typechar
 *Return: returns substituted characters string
 */
char *leet(char *str)
{
	char nums[5] = {'4', '3', '0', '7', '1'};
	char small_str[5] = {'a', 'e', 'o', 't', 'l'};
	char big_str[5] = {'A', 'E', 'O', 'T', 'L'};
	int i, n, len = (strlen(str));

	for (i = 0; i < len; i++)
	{
		for (n = 0; n < 5; n++)
			if (str[i] == small_str[n] || str[i] == big_str[n])
				str[i] = nums[n];
	}
	return (str);
}
