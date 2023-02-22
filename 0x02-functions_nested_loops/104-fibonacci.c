#include <stdio.h>
/**
 *main - entry point
 *Return: 0
 */
int main(void)
{
	int num1 = 0, num2 = 1,  count;

	for (count = 1; count <= 98; count++)
	{
		int sum = (num1 + num2);

		printf("%d, ", sum);

		num1 = num2;
		num2 = sum;

	}

	return (0);
}
