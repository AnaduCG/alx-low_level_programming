#include "main.h"

/**
 *void positive_or_negative - checks if an int is positive negative or zero
 *@i: int variable
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive",i);
	}
	else if (i < 0)
	{
		printf("%d is negative",i);
	}
	else
	{
		printf("%d is zero",i);
	}
}
