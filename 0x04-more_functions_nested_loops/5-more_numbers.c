#include "main.h"
/**
 *more_numbers - print ints 10 X
 *
 */
void more_numbers(void)
{
	int times, num;

	for (times = 0; times < 10; times++)
	{
		for(num = 0; num < 15; num++)
		{
			_putchar(num + 48);
		}
		_putchar('\n');
	}
}
