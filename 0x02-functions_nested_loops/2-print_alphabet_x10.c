#include <stdio.h>

/**
 *print_alphabet_x10 - printing a-z * 10
 *Return: always 0
 */

void print_alphabet_x10(void)
{
	char alpha;
	int count;

	for (count = 0; count < 10; count++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			putchar(alpha);
		}
		putchar('\n');
	}
}
