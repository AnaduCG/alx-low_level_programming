#include "main.h"
/**
 * multiply - multiplies two integers
 *@a: pointer parameter of type char
 *@b: pointer parameter of type char
 *Return: always 0
 *
 *
 *
 */
void multiply(char *a, char *b)
{
	int num = atoi(a) * atoi(b);

	printf("%d\n", num);
}

/**
 *_error - outputs error to the main function
 *@e: pointer parameter of type char
 *Return: always 0
*/

void _error(char *e)
{
	if (*e)
	{
		putchar(*e);
		_error(e + 1);
	}
	else
		putchar('\n');

}
/**
 * main - entry point in c programming
 *@argc: holds the size of arguments passed in terminal
 *@argv: holds tht arguments passed in terminal
 *Return: always 0
 */
int main(int argc, char *argv[])
{
	char e[] =  "Error";

	if (argc <= 1)
	{
		_error(e);
		return (1);
	}
	multiply(argv[1], argv[2]);
	return (0);
}

