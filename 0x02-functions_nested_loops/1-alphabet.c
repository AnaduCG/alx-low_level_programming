#include "main.h"
/**
 *main - entry point in C programming
 *Return: always 0 (successful)
 */

void print_alphabet(void)
{
	char alphabet = 'a';
	while (alphabet <= 'z')
	{
		_putchar(alphabet++);
	}
}
