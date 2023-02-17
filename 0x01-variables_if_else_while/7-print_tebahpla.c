#include <stdio.h>
#include <stdlib.h>

/**
 *main - entry point
 *Return: always 0
 */

int main()
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
	}
	for (alph = 'z'; alph >= 'a'; alph--)
	{
		putchar(alph);
	}
	putchar('\n');

	return (0);
}
