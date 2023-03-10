#include "main.h"
/**
 * main - entry point in c programming
 *@argc: holds the size of arguments passed in terminal
 *@argv: holds that arguments passed in terminal
 *Return: retuns 1 if (!(argc > 1)) and 0 otherwise
 */
int main(int argc, char *argv[])
{
	int index, num;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argc < 4)
	{
		for (index = 1;  index < 3; index++)
		{
			num *= atoi(argv[index]);
		}
		printf("%d\n", num);
	}
	return (0);
}

