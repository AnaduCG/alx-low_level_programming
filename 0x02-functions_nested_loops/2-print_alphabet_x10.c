#include <stdio.h>

/**
 *main - entry point in C programming
 *Return: always 0
 */

void print_alphabet_x10(void);

int main(void)
{
	print_alphabet_x10();
	return (0);
}

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
