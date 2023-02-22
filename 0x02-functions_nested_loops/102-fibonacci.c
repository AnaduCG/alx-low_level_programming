#include <stdio.h>;

/**
 *main - entry point
 *Return: always 0
 */

int main(void)
{
	int n = 50, first = 1, second = 2, next, i;

	printf("%d %d ", first, second);
	for (i = 3; i <= n; i++)
	{
		next = first + second;
		printf("%d ", next);
		first = second;
		second = next;
	}
	printf("\n");

	return (0);
}
