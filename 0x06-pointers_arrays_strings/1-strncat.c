#include "main.h"

/**
 *_strcat - concatenates strings
 *@dest: pointer variable parameter of type char
 *@src: pointer variable parameter of type char
 *@n: variable parameter of type int
 */


char *_strncat(char *dest, char *src, int n)
{
		strncat(dest, src, n);
	return (dest);
}
