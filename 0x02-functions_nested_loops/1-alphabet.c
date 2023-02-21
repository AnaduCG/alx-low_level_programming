#include "main.h"
/**
 *print_alphabet - 
 *Return: always 0 (successful)
 */

void print_alphabet(void)
{
	char alphabet;

	while (alphabet <= 'z')
	{
		_putchar(alphabet++);
	}
	_puchar('\n');
}
