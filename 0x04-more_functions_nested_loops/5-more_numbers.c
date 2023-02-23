#include "main.h"
/**
 *more_numbers - print ints 10 X
 *
 */
void more_numbers(void)
{
	int nums, count;

	for (count = 0; count < 10; count++)
	{
		for (nums = 0; nums < 15; nums++)
		{
			if (nums > 9)
			{
				putchar((nums / 10) + 48);
				putchar((nums % 10) + 48);
			}
			else
			{
				putchar(nums + 48);
			}
		}
		putchar('\n');
	}
}
