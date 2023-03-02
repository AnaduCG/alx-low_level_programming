#include "main.h"
/**
 *cap_string - capitalize the first character of string
 *@str: pointer variable parameter of type char
 *Return: returns string with capitalize first character
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			i++;
		}

		if (str[i - 1] == ' '
		|| str[i - 1] == '\t'
		|| str[i - 1] == '\n'
		|| str[i - 1] == ','
		|| str[i - 1] == ';'
		|| str[i - 1] == '.'
		|| str[i - 1] == '!'
		|| str[i - 1] == '?'
		|| str[i - 1] == '"'
		|| str[i - 1] == '('
		|| str[i - 1] == ')'
		|| str[i - 1] == '{'
		|| str[i - 1] == '}')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
