#include "main.h"
/**
 *
 *
 *
 *
 *
 */

char *argstostr(int ac, char **av)
{
	int i;
	char **mem;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	mem = malloc(sizeof(char*) * ac);

	if (mem == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		*mem[i] = *av[i];
		printf("%s", mem[i]);
	}
	return(*mem);
}
