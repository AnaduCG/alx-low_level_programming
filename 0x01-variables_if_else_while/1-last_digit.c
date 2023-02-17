#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* Checking conditions in c */

/*
 *main -  Entry point
 *Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int last_val = n % 10;

	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, last_val);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is zero", n, last_val);
	}
	else if (n < 6 && n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0" n, last_val);
	}

	return (0);
}
