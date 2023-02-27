#include "main.h"
/*
 *swap_int - function that swaps 2 variables
 *@a:  pointer variable tpe of int
 *@b:  pointer variable tpe of int
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
