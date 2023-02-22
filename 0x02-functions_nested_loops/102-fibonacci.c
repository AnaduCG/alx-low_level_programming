#include <stdio.h>

/**
 *main - entry point
 *Return: always 0
 */

int main(void)
{
	int first = 0, second = 1, next, i;

	for (i = 1; i <= 50; i++)
	{
		next = first + second;
		printf("%d ", next);
		first = second;
		second = next;
		if (i == 50)
		{
			putchar('\n');
		}
		else
		{
			printf(", ");
		}
	}

	return (0);
}
