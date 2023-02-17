#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point
 *Return: always 0
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(48 + num);
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
