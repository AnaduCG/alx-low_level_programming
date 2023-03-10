#include "main.h"
/**
 * main - entry point in c programming
 *@argc: holds the size of arguments passed in terminal
 *@argv: holds that arguments passed in terminal
 *Return: retuns 1 if (!(argc > 1)) and 0 otherwise
 */
int main(int argc, char *argv[])
{
	char e[] =  "Error";
	int index, num = 1;

	if (argc < 2)
	{
		printf("%s\n", e);
		return (1);
	}
	if (argc < 4)
	{
		for (index = 1;  index < 3; index++)
		{
			num = num * atoi(argv[index]);
		}
		printf("%d\n", num);
	}
	return (0);
}
