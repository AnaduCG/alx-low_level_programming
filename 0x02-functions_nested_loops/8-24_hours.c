#include "main.h"

/**
 *jack_bauer - prints time
 *
 */

void jack_bauer(void)
{
	int h1, h2, m1, m2;

	for (h1 = 0; h1 < 3; h1++)
	{
		for (h2 = 0; h2 < 4; h2++)
		{
			for (m1 = 0; m1 < 6; m1++)
			{
				for (m2 = 0; m2 < 10; m2++)
				{
					putchar(h1 + '0');
					putchar(h2 + '0');
					putchar(':');
					putchar(m1 + '0');
					putchar(m2 + '0');
					if (h1 == 2 && h2 == 3 && m1 == 5 && m2 == 9)
					{
					}
					else{
						putchar('\n');
					}
				}
			}
		}
	}
}
