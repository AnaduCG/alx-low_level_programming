#include "main.h"
/**
 *cap_string - capitalize the first character of string
 *@str: pointer variable parameter of type char
 *Return: returns string with capitalize first character
 */
char *cap_string(char *str)
{
	int i, len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if(i == 0 || isspace(str[i - 1]) ||str[i - 1] == ','
				|| str[i - 1] == ';' ||str[i - 1] == '.'
				|| str[i - 1] == '!' ||str[i - 1] == '?'
				|| str[i - 1] == '"' ||str[i - 1] == '('
				|| str[i - 1] == ')' ||str[i - 1] == '{'
				|| str[i - 1] == '}')
		{
			if (islower(str[i]))
			{
				str[i] = toupper(str[i]);
			}
		}
	}
	return (str);
}
