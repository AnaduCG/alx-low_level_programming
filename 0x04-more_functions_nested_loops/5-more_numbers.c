#include "main.h"
/**
 *more_numbers - print ints 10 X
 *
 */
void more_numbers(void)
{
	char count, num;

	for (count = 0; count < 10; count++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar(num / 10 + 48);
			_putchar(num % 10 + 48);
		}
		_putchar('\n');
	}
}
