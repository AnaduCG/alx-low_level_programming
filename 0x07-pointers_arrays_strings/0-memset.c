#include "main.h"
/**
 *_memset - files a memory with a cont byte
 *@s: pointer parameter variable of type char
 *@b: parameter variable of type char
 *@n: parameter variable of type unsigned intr *
 *Return: returns s variable
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}