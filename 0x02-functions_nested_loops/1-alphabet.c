#include "main.h"
/**
 *print_alphabet - 
 *Return: always 0 (successful)
 */

void print_alphabet(void)
{
	char alphabet;
	int count;

	for (count = 0 ; count < 10; count++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet++);
		}
		_puchar('\n');
	}
}
