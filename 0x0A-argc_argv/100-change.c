#include <stdio.h>
#include <stdlib.h>

/**
 *main - entry point in c programming
 * @argc: count of arguments passed in the terminal
 * @argv: the arguments passed in the terminal
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
	return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	printf("%d\n", cents);
	return (0);
}
