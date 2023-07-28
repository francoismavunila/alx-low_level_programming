#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * comments here
 */

char *argstostr(int ac, char **av)
{
	int cnt = 0;
	int x = 0;
	int y = 0;
	int z = 0;
	char *variable;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (x < ac)
	{
		y = 0;
		while (av[x][y] != '\0')
		{
			cnt++;
			y++;
		}
		x++;
	}
	cnt = cnt + ac + 1;
	variable = malloc(sizeof(char) * cnt);
	if (variable == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			variable[z] = av[x][y];
			z++;
		}
		variable[z] = '\n';
		z++;
	}
	return (variable);
}

