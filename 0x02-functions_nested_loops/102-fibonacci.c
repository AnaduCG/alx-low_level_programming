#include <stdio.h>

/**
 *main - entry point
 *Return: always 0
 */

int main(void)
{
	unsigned long int num1 = 0, num2 = 1, count;
	for (count = 0; count <= 50; count++)
	{
		unsigned long int sum = (num1 + num2);
		if (count != 50)
		{
			printf("%lu, ", sum);
		}
		else
		{
			printf("%lu", sum);
		}
		num1 = num2;
		num2 = sum;
		putchar('\n');
	}

	return (0);
}
