#include "main.h"

/**
 *_strncpy - concatenates strings
 *@dest: pointer variable parameter of type char
 *@src: pointer variable parameter of type char
 *@n: variable parameter of type int
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
