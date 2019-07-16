#include "holberton.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all args
 * @ac: amounts of args
 * @av: pointer to arr of pointers
 * Return: pointer to new string
 */
char *argstostr(int ac, char **av)
{
	char *s = NULL;

	int size = 0, i, j, aux = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		int j = 0;

		while (av[i][j] != 0)
		{
			size++;
			j++;
		}
		size++;
	}
	size++;

	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[aux] = av[i][j];
			aux++;
		}
		s[aux] = '\n';
		aux++;
	}
	s[aux] = '\0';
	return (s);
}
