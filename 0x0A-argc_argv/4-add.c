#include "main.h"
/**
 * main - entry point in c programming
 *@argc: holds the size of arguments passed in terminal
 *@argv: holds tht arguments passed in terminal
 *Return: return 1 if a char type is found and 0 otherwise
 */

int main(int argc, char *argv[])
{
	int sum = 0, num, index1, index2;

	if (argc == 1)
	{
		printf("%d\n", argc - 1);
		return (0);
	}

	for (index1 = 1; index1 < argc; index1++)
	{
		for (index2 = 0; argv[index1][index2]; index2++)
		{
			if (!isdigit(argv[index1][index2]))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[index1]);
		if (num < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}

	printf("%d\n", sum);
	return (0);
}
