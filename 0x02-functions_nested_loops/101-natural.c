#include <stdio.h>
/**
 *main - entry point
 *Return: always 0
 */

int main(void)
{
	int count, sum;

	for (count = 0; count < 1024; count++)
	{
		if ((count % 3) == 0 || (count % 5) == 0)
		{
			sum = sum + count;
		}
	}
	printf("%d\n", sum);

	return (0);
}
