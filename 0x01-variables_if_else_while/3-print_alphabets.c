#include <stdio.h>
#include <stdlib.h>

/*
 * main - entry point
 * Return: always 0 (success)
 */

int main(void)
{
	char al;
	char au;

	for (al = 'a'; al <= 'z'; al++)
	{
		putchar(al);
	}
	for (au = 'A'; au <= 'Z'; au++)
	{
		putchar(au);
	}

	putchar('\n');

	return (0);
}
