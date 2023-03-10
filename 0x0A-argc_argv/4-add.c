#include "main.h"
/**
 * main - entry point in c programming
 *@argc: holds the size of arguments passed in terminal
 *@argv: holds tht arguments passed in terminal
 *Return: return 1 if a char type is found and 0 otherwise
 */

int main(int argc, char *argv[])
{
	int index, num = 0;
	char e[] = "Error";

	if (argc == 1)
	{
		printf("%d\n", argc - 1);
	}
	else
	{
		for (index = 1; index < argc; index++)
		{
			num = num + atoi(argv[index]);
				if (!isdigit(num))
				{
					printf("%s\n", e);
					return (1);
				}
		}
		printf("%d\n", num);
	}
	return (0);
}
