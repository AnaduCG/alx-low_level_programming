#include "main.h"
/**
 *print_chessboard - prints chess board
 *@a: pointer parameter of type char array
 */
void print_chessboard(char (*a)[8])
{
	int i, b, n = sizeof(a);

	for (i = 0; i < n; i++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(a[i][b]);
		}
		_putchar('\n');
	}
}
